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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31[1] = { 0 };
	var uLocal_33[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[1] = { 0 };
	int iLocal_51[1] = { 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63[1] = { 0 };
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	struct<8> Local_70[13];
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 0;
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
	int iLocal_201 = 0;
	int iLocal_202[2] = { 0, 0 };
	int iLocal_205 = 0;
	int iLocal_206[2] = { 0, 0 };
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215[1] = { 0 };
	int iLocal_217[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_231[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_245[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_259[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292[2] = { 0, 0 };
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	float fLocal_323 = 0f;
	char* sLocal_324 = NULL;
	var uLocal_325[4] = { 0, 0, 0, 0 };
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 4;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 4;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 4;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 4;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 4;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 4;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 8;
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
	var uLocal_403 = 16;
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
	var uLocal_567 = 0;
	var uLocal_568 = 3;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
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
	Local_311 = { -2145.486f, 3018.294f, 31.81f };
	Local_314 = { 1744.308f, 3270.673f, 40.2076f };
	fLocal_323 = 330.4836f;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_270();
		func_268();
	}
	unk_0xD941F8E30D7231AD("EXTRASUNNY", 30f);
	func_266();
	if (!func_265())
	{
		iLocal_28 = 0;
	}
	else
	{
		iLocal_28 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x48D75120C879E65E("M_ThePortOfLSHeistPrep2B", 0);
		func_264();
		func_258();
		func_257();
		func_256();
		func_254();
		switch (iLocal_28)
		{
			case 0:
				func_253();
				break;
			
			case 1:
				func_248();
				break;
			
			case 2:
				func_230();
				break;
			
			case 3:
				func_222();
				break;
			
			case 4:
				func_126();
				break;
			
			case 5:
				func_28();
				break;
			
			case 6:
				func_4();
				break;
		}
		if (iLocal_28 != 6)
		{
			if (iLocal_197 == 1)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if ((iLocal_28 == 2 || iLocal_28 == 3) || iLocal_28 == 4)
	{
		if (iLocal_200 == 1)
		{
			func_3(1);
			return;
		}
	}
	if (iLocal_28 == 2)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (func_2(iLocal_48, unk_0xFC1458A37D98B502(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (func_2(iLocal_48, unk_0xFC1458A37D98B502(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((unk_0xB6579D6FEB63269C(iLocal_48, 3, 30000) || unk_0xB6579D6FEB63269C(iLocal_48, 1, 40000)) || unk_0xB6579D6FEB63269C(iLocal_48, 0, 7000))
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
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		Var3 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(Var0, Var3, iParam2);
}

void func_3(int iParam0)
{
	iLocal_29 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_175 = 0;
	}
}

void func_4()
{
	switch (iLocal_175)
	{
		case 0:
			unk_0x84CDD933AFA470D2();
			unk_0x3E80C2F7BC665259(1);
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 1:
					sLocal_324 = "DP_FAIL1";
					break;
				
				case 2:
					sLocal_324 = "DP_FAIL2";
					break;
				
				case 3:
					sLocal_324 = "DP_FAIL3";
					break;
			}
			if (iLocal_29 == 0)
			{
				func_13(0);
			}
			else
			{
				func_11(sLocal_324);
			}
			iLocal_175 = 1;
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
				func_268();
			}
			break;
	}
}

void func_5(struct<3> Param0, float fParam3)
{
	func_6(&(Global_98118.f_2875), Param0, fParam3);
}

void func_6(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_7(struct<3> Param0, float fParam3)
{
	if (func_8(Global_71096, 0f, 0f, 0f, 0))
	{
		Global_71096 = { Param0 };
		Global_71099 = fParam3;
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
	if (Global_92833 == 7)
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
	if (Global_92833 == 7 || Global_92833 == 8)
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
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			StringCopy(&Global_71088, sParam0, 16);
			StringCopy(&Global_71092, "", 16);
			if (unk_0x2D8BD7F773A1EA2C())
			{
				unk_0xBA895E5C4D5B8B12();
			}
		}
	}
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_27(0))
	{
		iVar0 = func_26();
		if (!func_14(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_19();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_18(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_15(&(Global_104555.f_2353.f_539), iVar1);
	if (Global_87153 == Global_92870)
	{
		Global_104555.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xC80D31E4B587871C(Global_83766[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xC623E2691C004001(0);
		}
	}
	Global_104555.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87153 = Global_92870;
	if (iParam0 == -1)
	{
		if (Global_104555.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_104555.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_17(Global_104555.f_18503[iVar0], &Var2, &fVar5))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_16(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90368[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_9 = 0f;
				Global_90368[iVar0 /*29*/].f_12 = 0f;
				Global_90368[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_10 = 0f;
				Global_90368[iVar0 /*29*/].f_13 = 0f;
				Global_90368[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_11 = 0f;
				Global_90368[iVar0 /*29*/].f_14 = 0f;
				Global_90368[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_26 = 0f;
				Global_90368[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_27 = 0f;
				Global_90368[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_28 = 0f;
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
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
	}
}

void func_19()
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
	}
	else if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 25);
	}
}

int func_20()
{
	func_21();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_25(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_24(unk_0xFC1458A37D98B502());
			if (func_23(iVar0) && (!func_22(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_23(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_22(int iParam0)
{
	return Global_35861 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
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
		return Global_104555.f_28020[iParam0 /*29*/];
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
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_27(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_28()
{
	func_118();
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_33();
			iLocal_196 = 0;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			unk_0xEDC33A771FAEB393(iLocal_48, 0);
		}
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
		}
		if (unk_0x3E9CABD07B829173())
		{
			unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 0, 0);
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
				{
					unk_0x4F8A35D7CBC17327(unk_0xFC1458A37D98B502(), iLocal_48, 0);
				}
			}
		}
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 1))
				{
					unk_0xDA5162F6425C44AA(iLocal_48, 0, 0);
					unk_0xDA5162F6425C44AA(iLocal_48, 1, 0);
					unk_0x4BEFCD5DAE410A90(iLocal_48, 2);
					unk_0xCF5EB2CB1B30F02C(iLocal_48, 0);
					unk_0xEDC33A771FAEB393(iLocal_48, 1);
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
	func_268();
}

void func_30(int iParam0, int iParam1)
{
	Global_71124 = iParam1;
	if (Global_55897)
	{
		return;
	}
	if (Global_55924)
	{
		Global_55924 = 0;
		return;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55897)
		{
		}
		Global_55923 = iParam0;
		Global_55897 = 1;
		Global_55908 = 1;
	}
}

void func_31(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55905)
	{
		Global_55905 = iParam1;
	}
	if (bParam0)
	{
		if ((func_27(0) && Global_71102.f_1 == 1) && func_32(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_27(0))
	{
		iVar0 = func_26();
		iVar1 = Global_83730[iVar0 /*5*/];
		uVar2 = Global_71125.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104555.f_9055)
			{
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 4);
		unk_0x872F1C1F8587CCC7(&Global_71104, 1);
		Global_71120 = uVar2;
		Global_71121 = unk_0x53C562FD2B9E3AB0();
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
	func_116();
	func_115();
	func_36();
	if (!func_35() || func_27(0))
	{
		func_34();
	}
	unk_0xBB9A3C553EECB180(0f);
}

void func_34()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			if (unk_0x6ADD12BF4D6D2587(iLocal_55))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_55, 0))
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_55, -1);
				}
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1565.084f, 2780.813f, 16.4022f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 53.6086f);
			}
			break;
		
		case 3:
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			if (func_20() == 2)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_48))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_48, -1);
						}
						unk_0xEDC33A771FAEB393(iLocal_48, 0);
					}
				}
			}
			break;
		
		case 4:
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			if (func_20() == 2)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_48))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_48, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			if (func_20() == 2)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_48))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_48, -1);
						}
					}
				}
			}
			break;
	}
}

bool func_35()
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x247EAA2E93D4A021(-1588.1f, 2794.9f, 17.2f, 20f, 1, 0, 0, 0);
			func_108(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 1, 0, 1, 0, 0);
			unk_0xBBF9037650162761(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			unk_0x6FF834D85E2DD4C6(joaat("cargobob"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_marine_01"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_m_pilot_02"));
			unk_0x6FF834D85E2DD4C6(joaat("buzzard"));
			while (((!unk_0x9A0B2ED5055D3F0B(joaat("cargobob")) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_marine_01"))) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_pilot_02"))) || !unk_0x9A0B2ED5055D3F0B(joaat("buzzard")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (func_265())
			{
				if (func_107())
				{
					if (!unk_0xF9DDB1C0875FD9E0(func_106()) && !unk_0x849A8CFD71854E02(func_106()))
					{
						func_104();
						while (!func_103())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
			iLocal_201 = 0;
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				iLocal_275[iLocal_176] = 0;
				iLocal_176++;
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				unk_0x247EAA2E93D4A021(Local_311, 10f, 1, 0, 0, 0);
				iLocal_48 = unk_0xEA60F3B426BB095B(joaat("cargobob"), Local_311, fLocal_323, 1, 1, 0);
				unk_0x514A29BE2E50B2DD(iLocal_48, 0);
				unk_0xEDC33A771FAEB393(iLocal_48, 1);
				unk_0xCFF0CD14B439821D(iLocal_48, 1, 1);
				unk_0x14776E43F90DD454(joaat("cargobob"));
				unk_0x2E4932E63763FE26(joaat("cargobob"), 1);
				unk_0x9980244E5DAEFED4(iLocal_48, 1);
				unk_0x8C224CD34D64FA01(iLocal_48, 0);
				func_102(iLocal_48, 0);
			}
			func_99();
			if (!unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("buzzard")))
				{
					unk_0x247EAA2E93D4A021(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_49[0] = unk_0xEA60F3B426BB095B(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1, 0);
					unk_0xCFF0CD14B439821D(iLocal_49[0], 1, 1);
					unk_0x514A29BE2E50B2DD(iLocal_49[0], 1);
					unk_0xACE486395AA1867D(iLocal_49[0], 1084227584);
					unk_0x6CF99BCE94E6F07C(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x14776E43F90DD454(joaat("buzzard"));
					unk_0xCF5EB2CB1B30F02C(iLocal_49[0], 0);
				}
			}
			if (func_265())
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_55))
				{
					if (func_107())
					{
						if (!unk_0xF9DDB1C0875FD9E0(func_106()) && !unk_0x849A8CFD71854E02(func_106()))
						{
							iLocal_55 = func_37(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							unk_0x14776E43F90DD454(func_106());
							unk_0x438D30A195B65156(iLocal_55, 1);
							unk_0x9980244E5DAEFED4(iLocal_55, 1);
						}
					}
				}
			}
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			unk_0xC1DDE011D4FA5865(1);
			break;
		
		case 3:
			unk_0x7D72D5B7EDD9C62C("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			unk_0x4EDE34FBADD967A6(1500);
			unk_0x6FF834D85E2DD4C6(joaat("cargobob"));
			unk_0x6FF834D85E2DD4C6(joaat("buzzard"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_marine_01"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_m_pilot_02"));
			while (((!unk_0x9A0B2ED5055D3F0B(joaat("cargobob")) || !unk_0x9A0B2ED5055D3F0B(joaat("buzzard"))) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_marine_01"))) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_pilot_02")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_201 = 0;
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				iLocal_275[iLocal_176] = 0;
				iLocal_176++;
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				unk_0x247EAA2E93D4A021(Local_311, 10f, 1, 0, 0, 0);
				iLocal_48 = unk_0xEA60F3B426BB095B(joaat("cargobob"), Local_311, fLocal_323, 1, 1, 0);
				unk_0xEDC33A771FAEB393(iLocal_48, 1);
				unk_0xCFF0CD14B439821D(iLocal_48, 1, 1);
				unk_0xFDAFE1354D61AE41(iLocal_48);
				unk_0x14776E43F90DD454(joaat("cargobob"));
				unk_0x2E4932E63763FE26(joaat("cargobob"), 1);
				unk_0x9980244E5DAEFED4(iLocal_48, 1);
				unk_0x8C224CD34D64FA01(iLocal_48, 0);
				func_102(iLocal_48, 0);
			}
			func_99();
			if (!unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("buzzard")))
				{
					unk_0x247EAA2E93D4A021(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_49[0] = unk_0xEA60F3B426BB095B(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1, 0);
					unk_0xCFF0CD14B439821D(iLocal_49[0], 1, 1);
					unk_0x514A29BE2E50B2DD(iLocal_49[0], 1);
					unk_0xACE486395AA1867D(iLocal_49[0], 1084227584);
					unk_0x6CF99BCE94E6F07C(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x14776E43F90DD454(joaat("buzzard"));
					unk_0xCF5EB2CB1B30F02C(iLocal_49[0], 0);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
			{
				uLocal_31[0] = unk_0x00D1A9572426E8DD(iLocal_49[0], 26, joaat("s_m_m_pilot_02"), -1, 1, 1);
				unk_0x14776E43F90DD454(joaat("s_m_m_pilot_02"));
			}
			else if (!unk_0xA8D0477084E86A92(uLocal_31[0], iLocal_49[0], 0))
			{
				unk_0xBB0358802AA14401(uLocal_31[0], iLocal_49[0], -1);
			}
			unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), -1, 0, 1);
			unk_0x28F48099EC1ADB2F("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
			unk_0xD671D47FAE9C14C8("AZ_AFB_ALARM_SPEECH", 1, 1);
			break;
		
		case 4:
			unk_0x6FF834D85E2DD4C6(joaat("cargobob"));
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			while (!unk_0x9A0B2ED5055D3F0B(joaat("cargobob")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				unk_0x247EAA2E93D4A021(Local_311, 10f, 1, 0, 0, 0);
				iLocal_48 = unk_0xEA60F3B426BB095B(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 1, 0);
				unk_0xCFF0CD14B439821D(iLocal_48, 1, 1);
				unk_0x14776E43F90DD454(joaat("cargobob"));
				unk_0x2E4932E63763FE26(joaat("cargobob"), 1);
				unk_0x8C224CD34D64FA01(iLocal_48, 0);
				unk_0x9980244E5DAEFED4(iLocal_48, 1);
				unk_0xA15269351F50F113(iLocal_48, 1, 1, 0);
				unk_0xFDAFE1354D61AE41(iLocal_48);
				unk_0xFB2E9855F95E3BD3(iLocal_48, 30f);
				func_102(iLocal_48, 0);
			}
			unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), -1, 0, 1);
			break;
		
		case 5:
			unk_0x6FF834D85E2DD4C6(joaat("cargobob"));
			unk_0x6FF834D85E2DD4C6(joaat("sandking"));
			while (!unk_0x9A0B2ED5055D3F0B(joaat("cargobob")) || !unk_0x9A0B2ED5055D3F0B(joaat("sandking")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				unk_0x247EAA2E93D4A021(1749.61f, 3272.95f, 40.1533f, 5f, 1, 0, 0, 0);
				iLocal_48 = unk_0xEA60F3B426BB095B(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, 1, 1, 0);
				unk_0xCFF0CD14B439821D(iLocal_48, 1, 1);
				unk_0x14776E43F90DD454(joaat("cargobob"));
				unk_0x9980244E5DAEFED4(iLocal_48, 1);
				unk_0x8C224CD34D64FA01(iLocal_48, 0);
				func_102(iLocal_48, 0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_51[0]))
			{
				iLocal_51[0] = unk_0xEA60F3B426BB095B(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1, 0);
				unk_0xEDC33A771FAEB393(iLocal_51[0], 1);
				unk_0x14776E43F90DD454(joaat("sandking"));
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_51[0]))
			{
				iLocal_214 = 1;
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_98118.f_2875), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_98(uParam0))
	{
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x8AE9E5E8F6DC40C9(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_97(uParam0))
		{
			unk_0x247EAA2E93D4A021(Param1, 5f, 1, 0, 0, 0);
			func_96(Param1, 5f, 0);
			iVar0 = unk_0xEA60F3B426BB095B(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				Var1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xAA93B7B448E10E40(iVar0, Param1, 0, 0, 1);
				}
				func_79(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x428C7026AD2721BA(uParam0->f_12.f_66) || unk_0x38171AD35981A393(uParam0->f_12.f_66))
				{
					if (!unk_0xA275371ED0902FCB(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xACE486395AA1867D(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_78(uParam0->f_11, 1);
						}
						else if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_78(uParam0->f_11, 2);
						}
					}
					unk_0xD8D940C0BFD3E1EC(iVar0, 0);
					unk_0x1F0117F8A8E4EC12(iVar0, 0);
					unk_0x438D30A195B65156(iVar0, 1);
					func_77(iVar0, uParam0->f_11);
				}
				else if ((!func_74(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "startup_positioning"))
				{
					iVar8 = func_73(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_66(iVar8);
					}
				}
				if (((Global_92833 != 13 && Global_92833 != 10) && Global_92833 != 11) && Global_92833 != 12)
				{
					if (unk_0x8B948C59217A295D(&(Global_92833.f_3)) == Global_70666)
					{
						if (uParam0->f_12.f_66 == Global_104555.f_32429.f_69[21 /*78*/].f_66)
						{
							func_63(24, 0);
							func_66(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0x14776E43F90DD454(uParam0->f_12.f_66);
				Var1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
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
	
	if (!func_45(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, -1);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
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
		if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_40(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
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
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
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
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0)
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_61(iParam0, 0, 0)) || func_61(iParam0, 1, 0)) || func_61(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || !func_46(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_58(iParam0))
		{
		}
		if (func_58(iParam0))
		{
		}
		if (func_61(iParam0, 0, 0))
		{
		}
		if (func_61(iParam0, 1, 0))
		{
		}
		if (func_61(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_47(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0))
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

int func_47(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_55())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1.f_0))
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
		if ((((!func_54() && !func_53()) && !func_52()) && !func_51()) && !func_55())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_52())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_50(iParam0))
		{
			return 0;
		}
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_49())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_51()
{
	return 0;
}

int func_52()
{
	return 1;
}

int func_53()
{
	return 1;
}

int func_54()
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	var uVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x872F1C1F8587CCC7(&uVar0, 2);
				unk_0x872F1C1F8587CCC7(&uVar0, 4);
				unk_0x872F1C1F8587CCC7(&uVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					uVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&uVar0, 0);
					unk_0xDDFB38BD8B59BBB9(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	uVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_47(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == unk_0x82FF3DFBC3965CC0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_62(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar9], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_63(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_65(iParam0, 0))
		{
			func_64(iParam0, 1, 0);
			func_64(iParam0, 2, 0);
			func_64(iParam0, 3, 0);
			func_64(iParam0, 4, 0);
			func_64(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_64(iParam0, 0, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_66(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], 1, 1);
				unk_0xC91FE17AD7353B70(&(Global_69678.f_139[iParam0]));
			}
		}
		Global_69678[iParam0] = 1;
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_65(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_68(0, Global_69678.f_555[0 /*21*/].f_12) || !func_68(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_67(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_63(iParam0, 0);
		}
	}
}

void func_67(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_68(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_69(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_47(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_69(var uParam0)
{
	return *uParam0;
}

int func_70(var uParam0, int iParam1)
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
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
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
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
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
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
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
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
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
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
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
			if (func_55())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_55())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_8(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 19))
	{
		if (!func_8(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_8(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_23(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_72(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_72(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
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
					if (Global_104555.f_9055.f_99.f_58[119])
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
			else if (Global_104555.f_9055.f_99.f_58[118])
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

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]) && !unk_0x191BE1BC8F26F3C1(Global_69678.f_484[iVar0], 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[iVar0], 0))
		{
			unk_0xAEC96F2E5A91C606(iParam0, &iVar1, &iVar2);
			unk_0xAEC96F2E5A91C606(Global_69678.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(Global_69678.f_484[iVar0]) && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_76(iParam0, Global_69678.f_139[38], 0))
			{
				func_66(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_76(iParam0, Global_69678.f_139[43], 1))
			{
				func_66(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_76(iParam0, uVar1[iVar6], 1) && func_75(unk_0xB3328BA8976B416C(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_8(Param1, 0f, 0f, 0f, 0)) || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xC91FE17AD7353B70(&iParam0);
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
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[14]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[14], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[14]) == joaat("luxor2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[14]))
				{
					func_66(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[20]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[20], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[20]) == joaat("swift2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[20]))
				{
					func_66(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_75(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE97272C977DEADD3((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0)) && unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xAEC96F2E5A91C606(iParam0, &iVar0, &iVar1);
			unk_0xAEC96F2E5A91C606(iParam1, &iVar2, &iVar3);
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

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			Global_90309[iVar0] = iParam0;
			Global_90319[iVar0] = iParam1;
			Global_90329[iVar0] = unk_0x82FF3DFBC3965CC0(iParam0);
			if (unk_0xC1514CFCEC68CA4A(Global_90329[iVar0]))
			{
				Global_90357[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90357[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (iParam0 == 145 || Global_90319[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == func_71(iParam0, iParam1))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_90309[iVar0], 0))
					{
						unk_0xDD29FF4BAB8AFF9C(Global_90309[iVar0], 0, 1);
						unk_0xC91FE17AD7353B70(&(Global_90309[iVar0]));
						Global_90319[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_79(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_88(iParam0))
		{
			if (unk_0x8B948C59217A295D(&(uParam1->f_1)) != 0)
			{
				unk_0xE58BC5B025017AE2(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xD559B6108233E114())
			{
				unk_0xFD5736F667C70A28(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xF6744C962F375B94(iParam0, 0);
			if (unk_0xF928889F6E5C7677(iParam0, 5) != -1)
			{
				unk_0xF6744C962F375B94(iParam0, 1);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 13))
		{
			unk_0xFAE216A82B56EEF2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE154D705D18ED685(iParam0);
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 12))
		{
			unk_0x4852153449AFF07A(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7FAF16725A6EE5F0(iParam0);
		}
		unk_0x1E7A8525FB41AAFE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB1AB9FD8B4959960(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_87(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_86())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x94D4C393A9825924(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
		}
		else
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
			unk_0xDAA5C9C59AF4D4EB(iParam0, uParam1->f_65);
		}
		unk_0x4D7D93C6E0C1063B(iParam0, !unk_0xC80D31E4B587871C(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, uParam1->f_70);
		}
		unk_0x7F254E8C9247E923(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x9D1E2B17CE94D0B9(iParam0, 2, unk_0xC80D31E4B587871C(uParam1->f_77, 28));
		unk_0x9D1E2B17CE94D0B9(iParam0, 3, unk_0xC80D31E4B587871C(uParam1->f_77, 29));
		unk_0x9D1E2B17CE94D0B9(iParam0, 0, unk_0xC80D31E4B587871C(uParam1->f_77, 30));
		unk_0x9D1E2B17CE94D0B9(iParam0, 1, unk_0xC80D31E4B587871C(uParam1->f_77, 31));
		unk_0xD2557AC67FBCFB9D(iParam0, unk_0xC80D31E4B587871C(uParam1->f_77, 10));
		if (unk_0xAFB4F670EC043D01(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xC7BF27112709A906(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_85(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_85(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x4B004F11F16CA872(iParam0, 1);
			}
			else
			{
				unk_0x54DFCB9F4F68A288(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_80(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
					{
						unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
				{
					unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x82FF3DFBC3965CC0(iParam0) == joaat("sheava") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("omnis")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("le7b"))
		{
			if (unk_0xF928889F6E5C7677(iParam0, 0) == -1)
			{
				unk_0x7B3133EBCD34B431(iParam0, 1, 0);
			}
		}
		if (((unk_0x849A8CFD71854E02(uParam1->f_66) && unk_0x256C25369C3811D6(iParam0)) && !unk_0xB0DA749C8A7CCBBF(iParam0, joaat("avenger"))) && !((((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 18) || Global_4456448.f_50256 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_77, 23))
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, 22))
				{
					unk_0x39748EEC52404AFA(iParam0, 2);
				}
				else
				{
					unk_0x39748EEC52404AFA(iParam0, 3);
				}
			}
			else
			{
				unk_0x39748EEC52404AFA(iParam0, 4);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 27))
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_80(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xA0A6811A3E4062D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4705D420368126DF(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xF928889F6E5C7677(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x75F267954030DBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_84(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_83(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_83(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_82(iParam0);
	if (func_81(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, 1);
		unk_0x438D30A195B65156(*iParam0, 1);
	}
	return 1;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
				iVar2 = unk_0x8B948C59217A295D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8B948C59217A295D("MNU_CAGE") || iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
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

void func_82(var uParam0)
{
	switch (unk_0x82FF3DFBC3965CC0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xF928889F6E5C7677(*uParam0, 4) == 0)
			{
				unk_0xA9EF3F93CBFFF6D0(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x75F267954030DBEB(*uParam0, 13);
			}
			break;
	}
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0x82FF3DFBC3965CC0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x2E9AFFEE33324CC8(iParam0, 38);
		iVar1 = unk_0x2E9AFFEE33324CC8(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_85(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = unk_0xF928889F6E5C7677(iParam0, 24);
		iVar1 = unk_0x8D462BB6E4814682(iParam0, 24);
		unk_0xC195F0A7CE73E810(iParam0, uParam1);
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x75F267954030DBEB(iParam0, 24);
		}
		else
		{
			unk_0xA9EF3F93CBFFF6D0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_86()
{
	return unk_0x21EA5D4DC72DE119(joaat("mpindependence"));
}

int func_87(int iParam0)
{
	var uVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				}
				return unk_0xC80D31E4B587871C(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_94(unk_0x9EB17624F44A8DA4(), -1))
		{
			iParam0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_90(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_89(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x6C5223DB5E5CFD9B("FMDeliverableID", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "FMDeliverableID"))
		{
			return unk_0x2786E663D1846FFC(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_90(int iParam0)
{
	if (func_93(iParam0) == 233)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_95(uParam0, 1, 1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(uParam0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(uParam0), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_96(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_70(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xBE3C4023003180FC(Param0, Global_69678.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_66(iVar0);
			}
		}
		iVar0++;
	}
}

int func_97(var uParam0)
{
	if (func_98(uParam0))
	{
		if (unk_0x9A0B2ED5055D3F0B(uParam0->f_12.f_66))
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

int func_98(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_47(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_75(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

void func_99()
{
	if (iLocal_201 == 0)
	{
		if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_marine_01")) && unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_pilot_02")))
		{
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[0]))
			{
				uLocal_33[0] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[1]))
			{
				uLocal_33[1] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[2]))
			{
				uLocal_33[2] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[3]))
			{
				uLocal_33[3] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[4]))
			{
				uLocal_33[4] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[5]))
			{
				uLocal_33[5] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[6]))
			{
				uLocal_33[6] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, 1, 1);
			}
			if (iLocal_28 != 3)
			{
				if (!unk_0x6ADD12BF4D6D2587(uLocal_33[7]))
				{
					uLocal_33[7] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, 1, 1);
				}
				if (!unk_0x6ADD12BF4D6D2587(uLocal_33[8]))
				{
					uLocal_33[8] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, 1, 1);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[9]))
			{
				uLocal_33[9] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[10]))
			{
				uLocal_33[10] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[11]))
			{
				uLocal_33[11] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_33[12]))
			{
				uLocal_33[12] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, 1, 1);
			}
			if (!unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
			{
				uLocal_31[0] = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, 1, 1);
				unk_0x0B652E456D6A7E32(uLocal_31[0], 0, 2, 0, 0);
				unk_0x03924C68EFCBC511(uLocal_31[0], 8, 0, 0, 0);
				unk_0xCFF0CD14B439821D(uLocal_31[0], 1, 1);
				unk_0x9E058151726E58DE(uLocal_31[0], joaat("weapon_assaultrifle"), 2000, 1, 1);
				unk_0xCE93FCB8A8D8DF0B(uLocal_31[0], iLocal_60);
				unk_0xBB3CC641B6AED5E5(uLocal_31[0], 0);
				unk_0x771A86309E0CA47B(uLocal_31[0], 1);
				func_101(uLocal_31[0], 595);
				func_100(uLocal_31[0], 0);
			}
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				if (iLocal_275[iLocal_176] == 0)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_176]))
					{
						unk_0xCFF0CD14B439821D(uLocal_33[iLocal_176], 1, 1);
						unk_0x9E058151726E58DE(uLocal_33[iLocal_176], joaat("weapon_assaultrifle"), 2000, 1, 1);
						unk_0xCE93FCB8A8D8DF0B(uLocal_33[iLocal_176], iLocal_60);
						unk_0xBB3CC641B6AED5E5(uLocal_33[iLocal_176], 10);
						func_101(uLocal_33[iLocal_176], 595);
						func_100(uLocal_33[iLocal_176], 0);
						unk_0x771A86309E0CA47B(uLocal_33[iLocal_176], 1);
						iLocal_275[iLocal_176] = 1;
					}
				}
				iLocal_176++;
			}
			unk_0x14776E43F90DD454(joaat("s_m_y_marine_01"));
			unk_0x14776E43F90DD454(joaat("s_m_m_pilot_02"));
			iLocal_201 = 1;
		}
	}
}

void func_100(int iParam0, bool bParam1)
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
			if (Global_55933[iVar0 /*2*/] != 0)
			{
				if (Global_55933[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55932)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55933[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55933[iVar1 /*2*/] = iParam0;
	Global_55933[iVar1 /*2*/].f_1 = 7;
	Global_55932++;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_68151[iVar0 /*2*/] == 0)
		{
			Global_68151[iVar0 /*2*/] = uParam0;
			Global_68151[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_68184)
			{
				Global_68184++;
			}
			return;
		}
		iVar0++;
	}
}

void func_102(int iParam0, int iParam1)
{
	Global_92833.f_22[iParam1] = iParam0;
}

bool func_103()
{
	return func_97(&(Global_98118.f_2875));
}

void func_104()
{
	func_105(&(Global_98118.f_2875));
}

void func_105(var uParam0)
{
	if (func_98(uParam0))
	{
		unk_0x6FF834D85E2DD4C6(uParam0->f_12.f_66);
	}
}

var func_106()
{
	return Global_98118.f_2875.f_12.f_66;
}

bool func_107()
{
	return func_98(&(Global_98118.f_2875));
}

void func_108(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_109(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_109(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x9761C10D57B68069(iVar0))
		{
			unk_0xDD29FF4BAB8AFF9C(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (bParam18)
			{
				func_114(iVar0);
			}
			if (unk_0x0F3033474C49912D(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_111(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("taxi")))
				{
					if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502() && unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != 0)
					{
						if (unk_0xBE3C4023003180FC(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xB3328BA8976B416C(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_61(iVar0, func_20(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_110(Param11))
				{
					if (unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						iVar13 = unk_0x82FF3DFBC3965CC0(iVar0);
						unk_0x830C2FE029F90C3F(iVar0, &Var4, &Var7);
						if (unk_0xF9DDB1C0875FD9E0(iVar13))
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
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x9B8406983378711E(Param7, 5f, 0, 0, 0, 0, 0, 0);
						unk_0x48ED7B2293A96722(iVar0, fParam10);
						unk_0xBD8D47FDC6902B2D(iVar0, Param7, 1, 0, 0, 1);
						unk_0xACE486395AA1867D(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0xA15269351F50F113(iVar0, 0, 1, 0);
							unk_0x6147908AB85766AA(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x9761C10D57B68069(iVar0) || !unk_0xCB234F3DD6FF9368(iVar0, 1))
						{
							unk_0xDD29FF4BAB8AFF9C(iVar0, 1, 1);
						}
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
						{
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xC91FE17AD7353B70(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xBC489554C806C640(Param0, Param3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (unk_0x9761C10D57B68069(iVar0))
					{
						unk_0x5380482A432E314E(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x9761C10D57B68069(iVar0))
			{
				unk_0xDD29FF4BAB8AFF9C(iVar0, 1, 0);
			}
			iVar14 = unk_0x317536BCEA8FA6B0(iVar0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar14) && !unk_0x3AB6A1A9084FB0A4(iVar14))
			{
				unk_0xBD8D47FDC6902B2D(iVar14, unk_0xB3328BA8976B416C(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar14) && !unk_0x3AB6A1A9084FB0A4(iVar14))
				{
					unk_0xBD8D47FDC6902B2D(iVar14, unk_0xB3328BA8976B416C(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x317536BCEA8FA6B0(iVar0, 1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar14) && !unk_0x3AB6A1A9084FB0A4(iVar14))
				{
					unk_0xBD8D47FDC6902B2D(iVar14, unk_0xB3328BA8976B416C(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x317536BCEA8FA6B0(iVar0, 2, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar14) && !unk_0x3AB6A1A9084FB0A4(iVar14))
				{
					unk_0xBD8D47FDC6902B2D(iVar14, unk_0xB3328BA8976B416C(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xC91FE17AD7353B70(&iVar0);
		}
	}
}

int func_110(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_113(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_112(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_112(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_112(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_112(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_112(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_112(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_112(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_112(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_112(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_112(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_112(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_112(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_112(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_112(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_112(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_112(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_113(struct<3> Param0)
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

void func_114(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0xA7B0253B80B52B2B(iParam0) <= 200f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
			if (unk_0x32DFD9C17763ABE0(iParam0) <= 700f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 900f);
			}
			if (unk_0xDE523AF6F7B269AB(iParam0) < 200)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
		}
	}
}

void func_115()
{
	if (!func_35())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1738.131f, 3283.38f, 40.1261f, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 25.3545f);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
	{
		unk_0x68433819717660CF(&(uLocal_31[0]));
	}
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_176]))
		{
			unk_0x68433819717660CF(&(uLocal_33[iLocal_176]));
		}
		iLocal_176++;
	}
	if (func_20() == 2)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_325[0]))
		{
			unk_0x68433819717660CF(&(uLocal_325[0]));
		}
	}
	if (func_20() == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_325[2]))
		{
			unk_0x68433819717660CF(&(uLocal_325[2]));
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
	{
		unk_0xF0037A481D043FE1(iLocal_49[0], 0);
	}
	unk_0x38FE9AAD8514D68B("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0xD671D47FAE9C14C8("AZ_AFB_ALARM_SPEECH", 0, 0);
	if (unk_0x771D0F8F56A5FE6C("DH_P_2B_ENTER_CHOPPER"))
	{
		unk_0xE02E32C69260FBB7("DH_P_2B_ENTER_CHOPPER");
	}
	if (unk_0x771D0F8F56A5FE6C("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		unk_0xE02E32C69260FBB7("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_47))
	{
		unk_0xC91FE17AD7353B70(&iLocal_47);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_55))
	{
		unk_0xC91FE17AD7353B70(&iLocal_55);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_48))
	{
		unk_0xC91FE17AD7353B70(&iLocal_48);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_49[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(Global_89475[0]))
	{
		if (!unk_0xCB234F3DD6FF9368(Global_89475[0], 1))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475[0], 1, 1);
		}
		unk_0xC91FE17AD7353B70(&(Global_89475[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(Global_89475[1]))
	{
		if (!unk_0xCB234F3DD6FF9368(Global_89475[1], 1))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475[1], 1, 1);
		}
		unk_0xC91FE17AD7353B70(&(Global_89475[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(Global_89475[2]))
	{
		if (!unk_0xCB234F3DD6FF9368(Global_89475[2], 1))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475[2], 1, 1);
		}
		unk_0xC91FE17AD7353B70(&(Global_89475[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_51[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_51[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_58))
	{
		unk_0x452336926718D62A(&iLocal_58);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_59))
	{
		unk_0x452336926718D62A(&iLocal_59);
	}
	if (unk_0x8EA3C8E091EA5BA4(uLocal_56))
	{
		if (unk_0xD85097DDDA5447BE(uLocal_56))
		{
			unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
		}
		unk_0x02934BABFD4CD384(uLocal_56, 0);
	}
}

void func_116()
{
	if (unk_0xA6DECE14FC9A8C51(uLocal_61))
	{
		unk_0xE30CF11C0EE14316(&uLocal_61);
	}
	if (unk_0xA6DECE14FC9A8C51(uLocal_62))
	{
		unk_0xE30CF11C0EE14316(&uLocal_62);
	}
	if (unk_0xA6DECE14FC9A8C51(uLocal_65))
	{
		unk_0xE30CF11C0EE14316(&uLocal_65);
	}
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		func_117(&(Local_70[iLocal_176 /*8*/]));
		iLocal_176++;
	}
	unk_0x981B8A90686AD23E();
}

void func_117(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		unk_0xE30CF11C0EE14316(uParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(uParam0->f_7))
			{
				unk_0x36EE765E851207BF(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_118()
{
	if (iLocal_28 == 5)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_61))
		{
			unk_0xE30CF11C0EE14316(&uLocal_61);
		}
		if (unk_0xA6DECE14FC9A8C51(uLocal_62))
		{
			unk_0xE30CF11C0EE14316(&uLocal_62);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_48))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_61))
				{
					unk_0xE30CF11C0EE14316(&uLocal_61);
				}
				if (iLocal_300 == 1)
				{
					if (unk_0x53C562FD2B9E3AB0() < iLocal_189 + 7500)
					{
						unk_0x84CDD933AFA470D2();
					}
				}
				if (iLocal_28 == 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_62))
					{
						uLocal_62 = func_125(Local_314, 0);
					}
					if (iLocal_199 == 0)
					{
						if (!unk_0x23F2F89E3D1CB7C4())
						{
							if (!func_124() || !unk_0x248C9865A96D3EA4())
							{
								func_123("DP_GOD4", 7500, 1);
								iLocal_190 = unk_0x53C562FD2B9E3AB0();
								iLocal_199 = 1;
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
					{
						uLocal_63[0] = func_122(uLocal_31[0], 1, 0);
					}
				}
			}
			else if (iLocal_28 != 5)
			{
				if (!unk_0xA6DECE14FC9A8C51(uLocal_61))
				{
					uLocal_61 = func_119(iLocal_48, 0, 0);
				}
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_300 == 0)
					{
						unk_0x84CDD933AFA470D2();
						func_123("DP_GOD6", 7500, 1);
						iLocal_189 = unk_0x53C562FD2B9E3AB0();
						iLocal_300 = 1;
					}
				}
				if (unk_0xA6DECE14FC9A8C51(uLocal_62))
				{
					unk_0xE30CF11C0EE14316(&uLocal_62);
				}
				if (iLocal_28 == 3)
				{
					if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
					{
						unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_199 == 1)
					{
						if (unk_0x53C562FD2B9E3AB0() < iLocal_190 + 7500)
						{
							unk_0x84CDD933AFA470D2();
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_61))
			{
				unk_0xE30CF11C0EE14316(&uLocal_61);
			}
			if (iLocal_197 == 1)
			{
				iLocal_200 = 1;
			}
		}
	}
	else
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_61))
		{
			unk_0xE30CF11C0EE14316(&uLocal_61);
		}
		if (iLocal_197 == 1)
		{
			iLocal_200 = 1;
		}
	}
}

int func_119(var uParam0, bool bParam1, bool bParam2)
{
	return func_120(uParam0, !bParam1, bParam2);
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_121(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(uVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_121(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
		unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_121(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_122(var uParam0, bool bParam1, bool bParam2)
{
	return func_120(uParam0, !bParam1, bParam2);
}

void func_123(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_124()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

var func_125(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6F4378873333A0C2(Param0);
	unk_0xA5D25D3F884FF516(uVar0, func_121(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(uVar0, iParam3);
	return uVar0;
}

void func_126()
{
	if (iLocal_175 > 0)
	{
		func_118();
		func_221();
	}
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_33();
			iLocal_196 = 0;
		}
		iLocal_304 = 0;
		iLocal_305 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		if (unk_0xA6DECE14FC9A8C51(uLocal_65))
		{
			unk_0xE30CF11C0EE14316(&uLocal_65);
		}
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			unk_0xEDC33A771FAEB393(iLocal_48, 0);
		}
		unk_0xC1DDE011D4FA5865(0);
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_176]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_176]))
				{
					unk_0xE9B3D12A64CC7C1A(uLocal_33[iLocal_176], 1);
					unk_0x486F346ADFE56674(&(uLocal_33[iLocal_176]));
				}
			}
			iLocal_176++;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
		{
			unk_0x5380482A432E314E(&(iLocal_49[0]));
		}
		if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
		{
			unk_0x486F346ADFE56674(&(uLocal_31[0]));
		}
		if (!unk_0x771D0F8F56A5FE6C("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0xE859EF37EA7362D3("DH_P_2B_ENTER_CHOPPER");
		}
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_35())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_219(iLocal_48, -1, 1);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		unk_0x1267474D9A69CA37(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (iLocal_308 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
					{
						if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_311, 1) > 800f)
						{
							func_144(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_308 = 1;
						}
					}
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
				{
					if (unk_0x0ACC2116170FA204(iLocal_48))
					{
						if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_311, 1) > 800f)
						{
							if (iLocal_304 == 0 && iLocal_199 == 1)
							{
								if (!unk_0x23F2F89E3D1CB7C4())
								{
									if (!func_124() || !unk_0x248C9865A96D3EA4())
									{
										func_143(&uLocal_403, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
										if (func_142(&uLocal_403, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_304 = 1;
										}
									}
								}
							}
							if (iLocal_304 == 1 && iLocal_309 == 0)
							{
								if (func_141(72) == 0)
								{
									if (!func_124())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											func_143(&uLocal_403, 3, 0, "Wade", 0, 1);
											if (func_130(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_309 = 1;
											}
										}
									}
								}
								else if (!func_124())
								{
									if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
									{
										func_143(&uLocal_403, 3, 0, "Wade", 0, 1);
										if (func_130(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_309 = 1;
										}
									}
								}
							}
						}
						else if (func_129(71) == 0)
						{
							if (iLocal_305 == 0)
							{
								if (!func_124())
								{
									if (!unk_0xF491DD47B88AA84E())
									{
										func_128("DP_HELP4", -1);
										iLocal_305 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
				{
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_314, 2f, 2f, 2f, 1, 1, 0))
					{
					}
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (!unk_0x0ACC2116170FA204(iLocal_48) && unk_0x9EC5112BB1C4047A(iLocal_48))
						{
							func_127(1, 600);
							unk_0x1267474D9A69CA37(8f, 5f, 4);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
					}
				}
			}
		}
	}
}

void func_127(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	if (bParam0)
	{
		Global_55912 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67999[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] > 0)
			{
				if (Global_67999[iVar0 /*9*/] == iParam1)
				{
					Global_67999[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_129(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

bool func_130(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_140(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	if (iParam5 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	Global_2621441 = 0;
	return func_131(sParam3, iParam4, bParam8);
}

int func_131(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xB31CEFB00C146C91(0);
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
					func_139();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_138(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_137();
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
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_136();
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
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_135())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_134())
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_133();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_132();
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
		func_139();
	}
	return 0;
}

void func_132()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_133()
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
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_134()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_135()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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

void func_136()
{
	if (func_22(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
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
		Global_14453 = func_20();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_137()
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

bool func_138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_139()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_141(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

bool func_142(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_140(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_131(sParam2, iParam3, 0);
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_144(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0x74C475EB8E73D398("FinaleC2", unk_0x436287B7DB306165()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_218(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_216(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_214(iVar1);
			cVar3 = { Global_83766[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104555.f_9055.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xEBDD0888F628D3FB(&cVar3, uVar2, Global_92870, iParam0);
		}
		else
		{
			iVar5 = func_209(unk_0x436287B7DB306165(), 1);
			if (iVar5 != -1)
			{
				Global_104555.f_18544[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_208(iVar5)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar6, 0, Global_92870, iParam0);
			}
			else
			{
				iVar10 = func_207(&(Global_92833.f_3));
				if (iVar10 > -1)
				{
					Global_104555.f_24956.f_4[iVar10] = 0;
				}
			}
		}
		Global_87156 = iParam2;
		Global_92870 = iParam0;
		func_145(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x74C475EB8E73D398(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92870)
	{
	}
}

void func_145(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_146(&Global_98118, unk_0x436287B7DB306165(), iParam0, uParam1, iParam3, iParam2);
}

void func_146(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_20();
	uParam0->f_1 = func_196();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_171(&(uParam0->f_2869), 0);
		func_170(unk_0xFC1458A37D98B502());
		func_163(unk_0xFC1458A37D98B502(), 0);
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104555.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_162())
		{
			func_155(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92623[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92623[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92623[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92623[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92623[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92623[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92623[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92623[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92623[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92623[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104555.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53077[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104555.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_148(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_147(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_147(var uParam0)
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_148(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_154(iParam2, &iVar0, iParam3, iParam5))
	{
		func_149(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_149(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_149(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_151(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_150(iParam2))
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

int func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_151(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_153(iParam1, 145, 0);
	uParam0->f_11 = func_60(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_152(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70583 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if (iParam0 == Global_69678.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90319[iVar0])
				{
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_71(iParam1, iParam2))
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

int func_154(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				*uParam1 = unk_0xC733212BF9066BDF();
			}
			else
			{
				*uParam1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (unk_0xB8DE76287EDC4957(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(*uParam1, 1), unk_0xB3328BA8976B416C(iParam0, 1), 1) < 100f)
					{
						if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("taxi")))
						{
							if (unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != iParam0 && unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_61(*uParam1, func_20(), 1))
						{
							sVar0 = unk_0x436287B7DB306165();
							if (!unk_0x74C475EB8E73D398(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x88DDBE9908752BF0(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB80A4DA4C06A76F1(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD5736BCB654EA8FC(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("blimp")))
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

void func_155(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_161(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_160(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_23(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_159(161, -1))
			{
				uParam1->f_59 = func_156(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_156(749, Global_70668, 0);
			}
			uParam1->f_60 = func_156(750, Global_70668, 0);
			uParam1->f_61 = func_156(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_159(161, -1))
			{
				uParam1->f_59 = func_156(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_156(749, Global_70668, 0);
			}
		}
	}
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_157(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_157(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_158();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

var func_158()
{
	return Global_1312736;
}

int func_159(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_157(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
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
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
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

void func_161(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
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

int func_162()
{
	func_21();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_163(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_164(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB29211B2B4084E43(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x7F23DDBA3ACA51BC();
					if (Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104555.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8475A4404BC86972(unk_0x9EB17624F44A8DA4(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xBFFF62F75445099D(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xBFFF62F75445099D(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xBFFF62F75445099D(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_164(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_169(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xB50B73D3F4DD1613(iParam0, func_169(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_167(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4.f_0, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_167(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x359D12B4F89DA5D6();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xD10DDFA63A9D9BDA(iVar9, &Var11) && !func_166(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0x42683C90F2D005ED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4.f_0);
					if (unk_0xA8388473C755363D(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar9))
					{
						if (unk_0x768809DD20D4F552(iVar9, iVar1, &Var50))
						{
							if (!func_165(Var50.f_3))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xA8388473C755363D(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_166(int iParam0)
{
	if (unk_0x3A711520F83BAE98())
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
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
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
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
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
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
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
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
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
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
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
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
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
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
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
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
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
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_168(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var43))
						{
							if (!func_165(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_168(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
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

int func_169(int iParam0)
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

void func_170(int iParam0)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_171(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	uParam0->f_3 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	uParam0->f_5 = unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502());
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		uParam0->f_4 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
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
	else if (unk_0x8F38E94BBF3404CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xC0765AFBFA616644(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_174(&iVar0))
		{
			if (func_173(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_172(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_172(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD42907FA80A6F327(Param0))
	{
		iVar0 = unk_0xC0765AFBFA616644(Param4, sParam3);
		if (!unk_0x2C2E1E35924B9FF2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x54EA77341255C23C(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_173(int iParam0, var uParam1, var uParam2)
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
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_8(*uParam1, 0f, 0f, 0f, 0);
}

int func_174(var uParam0)
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_195())
		{
			*uParam0 = func_180(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_179(*uParam0) && !func_175(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_175(int iParam0)
{
	return func_176(iParam0, 0, 1);
}

int func_176(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_178() == 0)
		{
			return unk_0xC80D31E4B587871C(func_156(func_177(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7013;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7872;
}

int func_178()
{
	return Global_25233;
}

int func_179(int iParam0)
{
	return func_176(iParam0, 5, 1);
}

int func_180(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam3 == 6 || iParam3 == func_194(iVar0))
		{
			if (!bParam5 || func_193(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(Param0, func_181(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
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

Vector3 func_181(int iParam0, bool bParam1)
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
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_192(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_191())
			{
				if (func_190(Global_1595538))
				{
					return func_183(2, 2);
				}
				else if (func_182(Global_1595538))
				{
					return func_183(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_182(int iParam0)
{
	if (iParam0 != func_191())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_191())
	{
		if (iParam1 == 3)
		{
			if (func_184(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_184(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_184(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_184(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_189(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_189(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_187(iParam0) };
	}
	else
	{
		Var12 = { func_186(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_185(Var18, -Var0.f_3.f_2) };
	Var18 = { func_185(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_185(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_186(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_187(int iParam0)
{
	return func_188(iParam0);
}

struct<6> func_188(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_189(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_191())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_191()
{
	return -1;
}

Vector3 func_192(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_193(int iParam0)
{
	return func_176(iParam0, 0, 0);
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
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
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_195()
{
	return Global_92885.f_315 > 0;
}

var func_196()
{
	var uVar0;
	
	func_206(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_205(&uVar0, unk_0x95327550F0F2BE7C());
	func_204(&uVar0, unk_0x674C9438180770FE());
	func_199(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_198(&uVar0, unk_0xEAF455949B108589());
	func_197(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_197(var uParam0, int iParam1)
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

void func_198(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_199(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_201(*uParam0);
	if (iParam1 < 1 || iParam1 > func_200(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_200(int iParam0, int iParam1)
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

var func_201(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_202(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_202(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_203(var uParam0)
{
	return uParam0 & 15;
}

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_207(char* sParam0)
{
	if (unk_0x74C475EB8E73D398("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x74C475EB8E73D398("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x74C475EB8E73D398("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_208(int iParam0)
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

int func_209(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x8B948C59217A295D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_210(iVar0, &sVar1);
		if (unk_0x8B948C59217A295D(sVar1) == iVar33)
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

void func_210(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 1:
			func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 2:
			func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 3:
			func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 4:
			func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 5:
			func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 6:
			func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 7:
			func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
			break;
		
		case 8:
			func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 9:
			func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 10:
			func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 11:
			func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 12:
			func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 13:
			func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 14:
			func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 15:
			func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 16:
			func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 17:
			func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 18:
			func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 19:
			func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 20:
			func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 21:
			func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 22:
			func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 23:
			func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_212(iParam0), 0, 1);
			break;
		
		case 24:
			func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
			break;
		
		case 25:
			func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 26:
			func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 27:
			func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 28:
			func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 29:
			func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 30:
			func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 31:
			func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 32:
			func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 33:
			func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 34:
			func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 35:
			func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 36:
			func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 37:
			func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 38:
			func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 39:
			func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 40:
			func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 41:
			func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 42:
			func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 43:
			func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 44:
			func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 45:
			func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 46:
			func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 47:
			func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 48:
			func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 49:
			func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 50:
			func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 51:
			func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 52:
			func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 54:
			func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 55:
			func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 56:
			func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 53:
			func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 57:
			func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 58:
			func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 59:
			func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 60:
			func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 61:
			func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 62:
			func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_212(int iParam0)
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

struct<2> func_213(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_208(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_215(Global_104555.f_9055.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_215(Global_104555.f_9055.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_215(Global_104555.f_9055.f_99.f_205[11]);
			break;
		
		case 90:
			return func_215(Global_104555.f_9055.f_99.f_205[7]);
			break;
		
		case 93:
			return func_215(Global_104555.f_9055.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_215(int iParam0)
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

int func_216(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = func_217(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_217(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83766[iVar0 /*34*/].f_6 == iParam0)
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

void func_218(bool bParam0)
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
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	if (func_265() && func_35())
	{
		while (Global_92828 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6ACDC20166AA3FAC(0);
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x6ADD12BF4D6D2587(iParam0))
				{
					if (unk_0xB8DE76287EDC4957(iParam0, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iParam0, iParam1);
							unk_0x7C9705890EF6612E(0f, 1065353216);
							unk_0xBB9A3C553EECB180(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 1, 0);
			}
		}
		unk_0x10DF8268B3B64093();
		func_220(0);
	}
}

void func_220(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 13);
	}
}

void func_221()
{
	if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_314, 1) < 500f)
	{
		if (iLocal_214 == 0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_51[0]))
			{
				unk_0x6FF834D85E2DD4C6(joaat("sandking"));
				if (unk_0x9A0B2ED5055D3F0B(joaat("sandking")))
				{
					iLocal_51[0] = unk_0xEA60F3B426BB095B(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1, 0);
					unk_0xEDC33A771FAEB393(iLocal_51[0], 1);
					unk_0x14776E43F90DD454(joaat("sandking"));
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_51[0]))
			{
				iLocal_214 = 1;
			}
		}
	}
	else if (iLocal_214 == 1)
	{
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_314, 1) > 550f)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_51[0]))
			{
				unk_0xC91FE17AD7353B70(&(iLocal_51[0]));
			}
			iLocal_214 = 0;
		}
	}
}

void func_222()
{
	if (iLocal_175 > 0)
	{
		func_118();
		func_228();
		func_221();
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 4)
		{
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 4, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		}
		func_227();
		func_226();
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
			{
				func_225(uLocal_33[iLocal_176], &(Local_70[iLocal_176 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
			}
			else
			{
				func_117(&(Local_70[iLocal_176 /*8*/]));
			}
			iLocal_176++;
		}
	}
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_33();
			iLocal_196 = 0;
		}
		iLocal_199 = 0;
		iLocal_202[0] = 0;
		iLocal_202[1] = 0;
		iLocal_205 = 0;
		iLocal_206[0] = 0;
		iLocal_206[1] = 0;
		iLocal_209 = 0;
		iLocal_214 = 0;
		iLocal_215[0] = 0;
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_183 = unk_0x53C562FD2B9E3AB0();
		iLocal_188 = unk_0x53C562FD2B9E3AB0();
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			unk_0xEDC33A771FAEB393(iLocal_48, 0);
		}
		func_144(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_35())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_219(iLocal_48, -1, 1);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		if (!unk_0x771D0F8F56A5FE6C("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0xE859EF37EA7362D3("DH_P_2B_ENTER_CHOPPER");
		}
		if (!unk_0x771D0F8F56A5FE6C("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			unk_0xE859EF37EA7362D3("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_224(602, 0);
		unk_0xC1DDE011D4FA5865(0);
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				func_223(iLocal_48, -1);
			}
		}
		unk_0x1267474D9A69CA37(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (iLocal_206[0] == 1)
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
			{
				unk_0xF0037A481D043FE1(iLocal_49[0], 0);
			}
			if (unk_0x771D0F8F56A5FE6C("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				unk_0xE02E32C69260FBB7("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_127(1, 602);
			func_224(600, 0);
			if (unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
				{
					if (unk_0x0F3033474C49912D(iLocal_48, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
						{
							unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
							unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
						else
						{
							unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
							unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
							func_29();
						}
					}
					else
					{
						iLocal_175 = 0;
						iLocal_28 = 4;
					}
				}
			}
		}
		else if (iLocal_209 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_48))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
					{
						if (unk_0x53C562FD2B9E3AB0() > iLocal_183 + 10000)
						{
							if (!unk_0x23F2F89E3D1CB7C4())
							{
								func_123("DP_GOD5", 7500, 1);
								iLocal_209 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_223(int iParam0, int iParam1)
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

void func_224(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55913 = iParam0;
	if (!Global_55911)
	{
		Global_55911 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] == iParam0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_225(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, iParam4);
		unk_0xD73FCB9663FBC508(iParam0, iParam5);
		*uParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*uParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(iParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(iParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(iParam7);
					}
					unk_0x476C008681363650(*uParam1);
				}
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(uParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(iParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(iParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(iParam7);
						}
						unk_0x476C008681363650(uParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(uParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_226()
{
	iLocal_53 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 300f, joaat("lazer"), 4);
	iLocal_54 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 300f, joaat("lazer"), 16386);
	if (unk_0x6ADD12BF4D6D2587(iLocal_53) && unk_0x0ACC2116170FA204(iLocal_53))
	{
		if (!unk_0xA6DECE14FC9A8C51(uLocal_65))
		{
			uLocal_65 = unk_0xCA43F0FC44D9B846(iLocal_53);
			unk_0xDB6E56C09E5CF0AA(uLocal_65, false);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_54) && unk_0x0ACC2116170FA204(iLocal_54))
	{
		if (!unk_0xA6DECE14FC9A8C51(uLocal_66))
		{
			uLocal_66 = unk_0xCA43F0FC44D9B846(iLocal_54);
			unk_0xDB6E56C09E5CF0AA(uLocal_66, false);
		}
	}
}

void func_227()
{
	if (iLocal_28 == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
				{
					Local_320 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
								{
									if (func_2(unk_0xFC1458A37D98B502(), uLocal_31[0], 1) < 600f)
									{
										if (unk_0xBE3C4023003180FC(Local_320, -75.8f, -819.9f, 326f, 1) > 1600f && unk_0xBE3C4023003180FC(Local_320, -2159f, 3067f, 33f, 1) < 1000f)
										{
											if (Local_320.f_2 > 70f)
											{
												if (iLocal_30 != 2)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 2;
												}
											}
											else if (iLocal_30 != 1)
											{
												iLocal_215[0] = 1;
												iLocal_30 = 1;
											}
											if (iLocal_273 == 1)
											{
												if (iLocal_274 == 0)
												{
													if (!func_124())
													{
														if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
														{
															func_143(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_143(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
															if (func_142(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
															{
																iLocal_274 = 1;
															}
														}
													}
												}
											}
										}
										else
										{
											if (unk_0xBE3C4023003180FC(Local_320, -75.8f, -819.9f, 326f, 1) < 1600f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 3;
												}
												if (iLocal_273 == 0)
												{
													if (!func_124())
													{
														if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
														{
															func_143(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_143(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
															if (func_142(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_273 = 1;
															}
														}
													}
												}
											}
											if (unk_0xBE3C4023003180FC(Local_320, -2159f, 3067f, 33f, 1) > 1000f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 3;
												}
											}
										}
									}
									else if (iLocal_30 != 4)
									{
										iLocal_215[0] = 1;
										iLocal_30 = 4;
									}
								}
							}
						}
					}
				}
				else if (unk_0xBE3C4023003180FC(Local_320, -75.8f, -819.9f, 326f, 1) > 1600f)
				{
					if (iLocal_30 != 0)
					{
						iLocal_215[0] = 1;
						iLocal_30 = 0;
					}
					if (iLocal_273 == 1)
					{
						if (iLocal_274 == 0)
						{
							if (!func_124())
							{
								if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
								{
									func_143(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
									func_143(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
									if (func_142(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
									{
										iLocal_274 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_30 != 3)
					{
						iLocal_215[0] = 1;
						iLocal_30 = 3;
					}
					if (iLocal_273 == 0)
					{
						if (!func_124())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								func_143(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
								func_143(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
								if (func_142(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
								{
									iLocal_273 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_202[0] == 0)
	{
		if (iLocal_28 == 2)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
				{
					if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
						{
							if (func_2(unk_0xFC1458A37D98B502(), uLocal_31[0], 1) < 200f)
							{
								Local_317 = { unk_0xB3328BA8976B416C(iLocal_49[0], 1) };
								unk_0xB8E08BD5B184DF4E(uLocal_31[0]);
								unk_0x4EC2D0046891F1C5(uLocal_31[0], Local_317, 10f, 0, 0);
								unk_0x992E814DF611C58C(uLocal_31[0], 250f, 0);
								iLocal_202[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_28 == 3)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
				{
					if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
						{
							if (!unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
							{
								uLocal_63[0] = func_122(uLocal_31[0], 1, 0);
							}
							Local_317 = { unk_0xB3328BA8976B416C(iLocal_49[0], 1) };
							unk_0xB8E08BD5B184DF4E(uLocal_31[0]);
							unk_0x6931076730A4AC5D(&uLocal_572);
							if (!unk_0xA8D0477084E86A92(uLocal_31[0], iLocal_49[0], 0))
							{
								unk_0x6F8C8278B7C06889(0, iLocal_49[0], 20000, -1, 1073741824, 1, 0);
							}
							unk_0x8F7859DFA5ECF628(0, iLocal_49[0], 0, 0, Local_317.f_0, Local_317.f_1, (Local_317.f_2 + 20f), 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							unk_0x8F7859DFA5ECF628(0, iLocal_49[0], 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							unk_0x1B16DD5C115FE009(uLocal_572);
							unk_0xAB30B1CF01A198C1(uLocal_31[0], uLocal_572);
							unk_0xFAA3EF7FF92E1F9E(&uLocal_572);
							iLocal_202[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_28 == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
					{
						if (unk_0xA8D0477084E86A92(uLocal_31[0], iLocal_49[0], 0))
						{
							if (unk_0x53C562FD2B9E3AB0() > (iLocal_188 + 90000))
							{
								if (iLocal_297 == 0)
								{
									unk_0xBB3CC641B6AED5E5(uLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (unk_0x53C562FD2B9E3AB0() > iLocal_188 + 10000 && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
							{
								if (iLocal_297 == 0)
								{
									unk_0xBB3CC641B6AED5E5(uLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (iLocal_296 == 0)
							{
								unk_0xBB3CC641B6AED5E5(uLocal_31[0], 0);
								iLocal_297 = 0;
								iLocal_296 = 1;
							}
							if (func_2(iLocal_49[0], unk_0xFC1458A37D98B502(), 1) < 300f)
							{
								if (iLocal_299 == 0)
								{
									unk_0x2489B9DB7A9BD262(uLocal_31[0], joaat("vehicle_weapon_space_rocket"));
									unk_0x9A3DC24536A0767A(uLocal_31[0], -1857128337);
									iLocal_298 = 0;
									iLocal_299 = 1;
								}
							}
							else if (iLocal_298 == 0)
							{
								unk_0x2489B9DB7A9BD262(uLocal_31[0], joaat("vehicle_weapon_player_buzzard"));
								unk_0x9A3DC24536A0767A(uLocal_31[0], 1566631136);
								iLocal_299 = 0;
								iLocal_298 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_205 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
				{
					if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
						{
							if (unk_0xA8D0477084E86A92(uLocal_31[0], iLocal_49[0], 0))
							{
								unk_0xBB3CC641B6AED5E5(uLocal_31[0], 0);
								unk_0x2489B9DB7A9BD262(uLocal_31[0], joaat("vehicle_weapon_space_rocket"));
								iLocal_205 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_30)
		{
			case 0:
				if (iLocal_215[0] == 1)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
								{
									unk_0x8F7859DFA5ECF628(uLocal_31[0], iLocal_49[0], 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_215[0] == 1)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
								{
									unk_0x8F7859DFA5ECF628(uLocal_31[0], iLocal_49[0], 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_215[0] == 1)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
								{
									unk_0x8F7859DFA5ECF628(uLocal_31[0], iLocal_49[0], 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_215[0] == 1)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
								{
									unk_0x8F7859DFA5ECF628(uLocal_31[0], iLocal_49[0], 0, 0, unk_0x3F90543934DCD7E6(iLocal_49[0], 20f, 0f, 0f), 4, 10f, 10f, unk_0xF0371FE6E2BF9599(iLocal_49[0]), unk_0xF2DB717A73826179(unk_0x39DC6B898115C47A(iLocal_49[0], unk_0xB3328BA8976B416C(iLocal_49[0], 1), 1, 1)), 100, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_295 == 0)
				{
					if (unk_0xBE3C4023003180FC(Local_320, -2159f, 3067f, 33f, 1) > 1000f)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
							{
								if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
								{
									if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
									{
										unk_0x8F7859DFA5ECF628(uLocal_31[0], iLocal_49[0], 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_295 = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_215[0] == 1)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
								{
									unk_0x8F7859DFA5ECF628(uLocal_31[0], iLocal_49[0], 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
	{
		if (unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
			}
			iLocal_206[0] = 1;
		}
	}
	else
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
		}
		iLocal_206[0] = 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
	{
		if (!unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
			}
			iLocal_206[0] = 1;
		}
	}
	else
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
		}
		iLocal_206[0] = 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_49[0], 0))
		{
			if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
				{
					if (unk_0xA8D0477084E86A92(uLocal_31[0], iLocal_49[0], 0))
					{
						if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
						{
							unk_0xA5D25D3F884FF516(uLocal_63[0], 1f);
						}
					}
					if (func_2(unk_0xFC1458A37D98B502(), uLocal_31[0], 1) > 600f)
					{
						if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
						{
							unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
						}
						iLocal_206[0] = 1;
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_31[0]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uLocal_31[0]))
		{
			if (unk_0x0BA31FF7931F3DD3(uLocal_31[0]))
			{
				unk_0xB8E08BD5B184DF4E(uLocal_31[0]);
				unk_0xE01CE1EBCD7EE551(uLocal_31[0], 0, 0);
				if (unk_0xA6DECE14FC9A8C51(uLocal_63[0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_63[0]));
				}
				iLocal_206[0] = 1;
			}
		}
	}
}

void func_228()
{
	if (iLocal_210 == 0)
	{
		if ((((func_229(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 3, 0, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_210 = 1;
		}
	}
	if (iLocal_210 == 1)
	{
		if ((((!func_229(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 3, 0, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_210 = 0;
		}
	}
	if (iLocal_201 == 1)
	{
		if (((iLocal_210 == 1 || iLocal_289 == 1) || iLocal_302 == 1) || iLocal_211 == 1)
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 4)
			{
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 4, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			}
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_176]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_176]))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_48))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
							{
								if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0) || iLocal_212 == 1)
								{
									if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_176], 1) < 39f)
									{
										if (iLocal_217[iLocal_176] == 0)
										{
											unk_0xB8E08BD5B184DF4E(uLocal_33[iLocal_176]);
											unk_0x4EC2D0046891F1C5(uLocal_33[iLocal_176], unk_0xB3328BA8976B416C(uLocal_33[iLocal_176], 1), 50f, 0, 0);
											unk_0xD7F5B2902EBBD04E(uLocal_33[iLocal_176], unk_0xFC1458A37D98B502(), 0, 16);
											unk_0xAE6EBBBBD8B9FB30(uLocal_33[iLocal_176], 51, 1);
											unk_0xAE6EBBBBD8B9FB30(uLocal_33[iLocal_176], 43, 1);
											iLocal_231[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 1;
										}
									}
									else if (iLocal_231[iLocal_176] == 0)
									{
										unk_0xB8E08BD5B184DF4E(uLocal_33[iLocal_176]);
										unk_0x6931076730A4AC5D(&uLocal_572);
										unk_0x380C1E7B7740D618(0, unk_0xB3328BA8976B416C(iLocal_48, 1), 2f, -1, 20f, 0, 1193033728);
										unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x1B16DD5C115FE009(uLocal_572);
										unk_0xAB30B1CF01A198C1(uLocal_33[iLocal_176], uLocal_572);
										unk_0xFAA3EF7FF92E1F9E(&uLocal_572);
										iLocal_245[iLocal_176] = 0;
										iLocal_259[iLocal_176] = 0;
										iLocal_217[iLocal_176] = 0;
										iLocal_231[iLocal_176] = 1;
									}
								}
								else
								{
									if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_176], 1) < 39f)
									{
										if (iLocal_245[iLocal_176] == 0)
										{
											unk_0xB8E08BD5B184DF4E(uLocal_33[iLocal_176]);
											unk_0x4EC2D0046891F1C5(uLocal_33[iLocal_176], unk_0xB3328BA8976B416C(uLocal_33[iLocal_176], 1), 50f, 0, 0);
											unk_0xD7F5B2902EBBD04E(uLocal_33[iLocal_176], unk_0xFC1458A37D98B502(), 0, 16);
											unk_0xAE6EBBBBD8B9FB30(uLocal_33[iLocal_176], 51, 1);
											unk_0xAE6EBBBBD8B9FB30(uLocal_33[iLocal_176], 43, 1);
											iLocal_231[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 1;
										}
									}
									if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_176], 1) > 41f && func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_176], 1) < 400f)
									{
										if (iLocal_259[iLocal_176] == 0)
										{
											iLocal_195 = unk_0x63A6486593EC7EC3(0, 4);
											unk_0xB8E08BD5B184DF4E(uLocal_33[iLocal_176]);
											unk_0x4EC2D0046891F1C5(uLocal_33[iLocal_176], unk_0xB3328BA8976B416C(uLocal_33[iLocal_176], 1), 50f, 0, 0);
											unk_0x6931076730A4AC5D(&uLocal_572);
											if (iLocal_195 == 0)
											{
												unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_195 == 1)
											{
												unk_0x270054D97CD161A8(0, 500);
												unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_195 == 2)
											{
												unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_195 == 3)
											{
												unk_0x270054D97CD161A8(0, 500);
												unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 25f, 3f, 1073741824, 0);
											}
											unk_0x1B16DD5C115FE009(uLocal_572);
											unk_0xAB30B1CF01A198C1(uLocal_33[iLocal_176], uLocal_572);
											unk_0xFAA3EF7FF92E1F9E(&uLocal_572);
											iLocal_231[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 1;
										}
									}
								}
							}
						}
					}
				}
				iLocal_176++;
			}
		}
		if (((iLocal_210 == 0 && iLocal_289 == 0) && iLocal_302 == 0) && iLocal_211 == 0)
		{
			iLocal_193 = 0;
			while (iLocal_193 <= 1)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_193]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_193]))
					{
						if (func_2(uLocal_33[iLocal_193], unk_0xFC1458A37D98B502(), 1) < 25f)
						{
							if (iLocal_292[iLocal_193] == 0)
							{
								if (!unk_0x841ED61760A7D07B(uLocal_33[iLocal_193]))
								{
									unk_0x957CEE967C939968(uLocal_33[iLocal_193]);
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(uLocal_33[iLocal_193]);
								}
								unk_0x9627C22EF3C3F4D6(uLocal_33[iLocal_193], unk_0xFC1458A37D98B502(), -1, 0);
								iLocal_292[iLocal_193] = 1;
							}
							if (iLocal_303 == 1)
							{
								if (unk_0x53C562FD2B9E3AB0() > iLocal_191 + 20000)
								{
									iLocal_302 = 1;
								}
							}
						}
						else if (func_2(uLocal_33[iLocal_193], unk_0xFC1458A37D98B502(), 1) > 30f)
						{
							if (iLocal_292[iLocal_193] == 1)
							{
								if (!unk_0x841ED61760A7D07B(uLocal_33[iLocal_193]))
								{
									unk_0x957CEE967C939968(uLocal_33[iLocal_193]);
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(uLocal_33[iLocal_193]);
								}
								unk_0x9627C22EF3C3F4D6(uLocal_33[iLocal_193], unk_0xFC1458A37D98B502(), 1, 0);
								iLocal_292[iLocal_193] = 0;
							}
						}
					}
				}
				iLocal_193++;
			}
		}
	}
}

int func_229(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
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
		if (unk_0x8AE9E5E8F6DC40C9(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109 = (iVar109 + 1);
	}
	return 0;
}

void func_230()
{
	if (iLocal_175 > 0)
	{
		func_118();
		func_228();
		func_227();
	}
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_33();
			iLocal_196 = 0;
		}
		iLocal_198 = 0;
		iLocal_201 = 0;
		iLocal_202[0] = 0;
		iLocal_202[1] = 0;
		iLocal_210 = 0;
		iLocal_211 = 0;
		iLocal_212 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292[0] = 0;
		iLocal_292[1] = 0;
		iLocal_302 = 0;
		iLocal_303 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_310 = 0;
		iLocal_191 = 0;
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			iLocal_217[iLocal_176] = 0;
			iLocal_231[iLocal_176] = 0;
			iLocal_245[iLocal_176] = 0;
			iLocal_259[iLocal_176] = 0;
			iLocal_176++;
		}
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x7D72D5B7EDD9C62C("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_182 = unk_0x53C562FD2B9E3AB0();
		unk_0x2E4932E63763FE26(joaat("lazer"), 1);
		unk_0x6FF834D85E2DD4C6(joaat("s_m_y_marine_01"));
		unk_0x6FF834D85E2DD4C6(joaat("s_m_m_pilot_02"));
		if (!unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0x6ADD12BF4D6D2587(Global_89475[0]))
			{
				if (unk_0xB8DE76287EDC4957(Global_89475[0], 0))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475[0], 1, 1);
					iLocal_48 = Global_89475[0];
					unk_0x514A29BE2E50B2DD(iLocal_48, 0);
					unk_0xCFF0CD14B439821D(iLocal_48, 1, 1);
					unk_0x14776E43F90DD454(joaat("cargobob"));
					unk_0x2E4932E63763FE26(joaat("cargobob"), 1);
					unk_0x8C224CD34D64FA01(iLocal_48, 0);
					unk_0x9980244E5DAEFED4(iLocal_48, 1);
					func_102(iLocal_48, 0);
				}
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_49[0]))
		{
			if (unk_0x6ADD12BF4D6D2587(Global_89475[1]))
			{
				if (unk_0xB8DE76287EDC4957(Global_89475[1], 0))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475[1], 1, 1);
					iLocal_49[0] = Global_89475[1];
					unk_0x514A29BE2E50B2DD(iLocal_49[0], 1);
					unk_0xCFF0CD14B439821D(iLocal_49[0], 1, 1);
					unk_0xEDC33A771FAEB393(iLocal_49[0], 0);
					unk_0x6CF99BCE94E6F07C(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0xCF5EB2CB1B30F02C(iLocal_49[0], 0);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(Global_89475[2]))
		{
			if (unk_0xB8DE76287EDC4957(Global_89475[2], 0))
			{
				if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(Global_89475[2])))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475[2], 1, 1);
					func_238(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0, 145);
				}
				if (((unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(Global_89475[2])) || unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(Global_89475[2]))) || unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(Global_89475[2]))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(Global_89475[2])))
				{
					unk_0xDD29FF4BAB8AFF9C(Global_89475[2], 1, 1);
					func_238(1748.05f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[0], 1, 1);
			uLocal_33[0] = Global_89475.f_9[0];
		}
		if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[1]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_89475.f_9[1], 1, 1);
			uLocal_33[1] = Global_89475.f_9[1];
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			unk_0xEDC33A771FAEB393(iLocal_48, 0);
		}
		unk_0x1B5A255BF0D63005("PoliceScannerDisabled", 1);
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_35())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_219(iLocal_55, -1, 1);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		func_237(unk_0xFC1458A37D98B502(), -1);
		func_236(73);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (unk_0xA33DB5EB9131A829("ARMY_GUARD"))
		{
			if (unk_0x8597B3AA38933783("ARMY_GUARD"))
			{
				unk_0xB4301FCD03DF42F6("ARMY_GUARD", 0);
			}
		}
		func_99();
		if (iLocal_211 == 0)
		{
			if (unk_0x53C562FD2B9E3AB0() > iLocal_182 + 3000)
			{
				iLocal_184 = 0;
				while (iLocal_184 <= 12)
				{
					if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_184]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_184]))
						{
							if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_184], 1) < 40f)
							{
								if (unk_0x46D8E79A1B95ACE2(uLocal_33[iLocal_184], unk_0xFC1458A37D98B502()))
								{
									if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
									{
										unk_0x28F48099EC1ADB2F("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										unk_0xD671D47FAE9C14C8("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_211 = 1;
									}
									if (iLocal_210 == 1)
									{
										unk_0x28F48099EC1ADB2F("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										unk_0xD671D47FAE9C14C8("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_211 = 1;
									}
									if (iLocal_307 == 0)
									{
										if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !func_235(0))
										{
											if (func_234(unk_0xFC1458A37D98B502()) != joaat("weapon_unarmed"))
											{
												iLocal_194 = unk_0x53C562FD2B9E3AB0();
												iLocal_307 = 1;
											}
										}
									}
									else if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !func_235(0))
									{
										if (func_234(unk_0xFC1458A37D98B502()) != joaat("weapon_unarmed"))
										{
											if (unk_0x53C562FD2B9E3AB0() > iLocal_194 + 3000)
											{
												unk_0x28F48099EC1ADB2F("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
												unk_0xD671D47FAE9C14C8("AZ_AFB_ALARM_SPEECH", 1, 1);
												iLocal_211 = 1;
											}
										}
										else if (iLocal_306 == 0)
										{
											iLocal_307 = 0;
											iLocal_306 = 1;
										}
									}
								}
							}
						}
					}
					iLocal_184++;
				}
			}
		}
		if (iLocal_198 == 0)
		{
			unk_0x84CDD933AFA470D2();
			unk_0x1267474D9A69CA37(5f, 10f, 4);
			func_123("DP_GOD2", 7500, 1);
			iLocal_198 = 1;
		}
		if (iLocal_210 == 1)
		{
			if (!func_233(5))
			{
				func_232(5);
			}
		}
		else if (func_233(5))
		{
			func_231(5);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_48))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
			{
				if (func_2(unk_0xFC1458A37D98B502(), iLocal_48, 1) < 30f)
				{
					iLocal_212 = 1;
				}
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
				{
					unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), -1, 0, 1);
					iLocal_175 = 0;
					unk_0x1267474D9A69CA37(10f, 10f, 4);
					iLocal_28 = 3;
				}
			}
		}
	}
}

void func_231(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&Global_88833, iParam0);
}

void func_232(int iParam0)
{
	unk_0x872F1C1F8587CCC7(&Global_88833, iParam0);
}

bool func_233(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_88833, iParam0);
}

int func_234(int iParam0)
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

int func_235(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0)
{
	if (Global_89900 != -1)
	{
		if (iParam0 == Global_89900)
		{
			Global_89904 = 1;
			return;
		}
	}
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55916 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (iParam1 == -1 || Global_67999[iVar0 /*9*/] == iParam1)
		{
			if (Global_67999[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67999[iVar0 /*9*/].f_6 = iParam0;
				Global_67999[iVar0 /*9*/].f_7 = 1;
				Global_67999[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_238(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x6ADD12BF4D6D2587(Global_95149.f_4))
	{
		if (unk_0xB8DE76287EDC4957(Global_95149.f_4, 0))
		{
			if (func_247(24) != Global_95149.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_244(unk_0xB3328BA8976B416C(Global_95149.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_239(Global_95149.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_239(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[25]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x8F1CCD9A61E026D8(iParam0) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_243(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			uParam4 = unk_0xF0371FE6E2BF9599(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
			}
		}
		func_241(iParam5, &Var0, Param1, uParam4, func_60(iParam0));
		func_240(iParam5, iParam0, 0);
	}
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_70(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 12) && !unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != unk_0x82FF3DFBC3965CC0(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			if (!unk_0x9761C10D57B68069(iParam1))
			{
				unk_0xDD29FF4BAB8AFF9C(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_196();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_247(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_241(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_70(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_242(iParam0);
			func_67(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 11))
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_63(iParam0, 1);
		}
	}
}

void func_242(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], 1, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_63(iParam0, 0);
		}
	}
}

void func_243(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_242(iParam0);
	func_63(iParam0, 0);
}

int func_244(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_245(Param0, iParam3, 1);
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

int func_245(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_88016[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88016[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_246(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xBE3C4023003180FC(Param0, Global_88016[iVar0 /*10*/].f_3, 1);
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

bool func_246(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_104555.f_7199[iParam0], 0);
}

int func_247(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

void func_248()
{
	if (iLocal_175 == 0)
	{
		func_252(1, 0);
		func_252(2, 0);
		func_252(7, 0);
		func_252(8, 0);
		func_252(9, 0);
		func_252(10, 0);
		func_252(4, 0);
		func_252(12, 0);
		unk_0x4DE114E3C7F8B7C2("MarineGroupHash", &iLocal_60);
		unk_0xF96119FCCD4D1889(5, iLocal_60, joaat("player"));
		unk_0xF96119FCCD4D1889(5, joaat("army"), joaat("player"));
		unk_0xF96119FCCD4D1889(1, iLocal_60, joaat("army"));
		unk_0xF96119FCCD4D1889(1, joaat("army"), iLocal_60);
		unk_0xF96119FCCD4D1889(1, joaat("COP"), iLocal_60);
		unk_0xF96119FCCD4D1889(1, iLocal_60, joaat("COP"));
		unk_0xF96119FCCD4D1889(1, joaat("COP"), joaat("army"));
		unk_0xF96119FCCD4D1889(1, joaat("army"), joaat("COP"));
		if (func_265())
		{
			if (Global_87155 == 1)
			{
				if (func_251() == 0)
				{
					func_250(Local_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
				if (func_251() == 1)
				{
					func_250(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
				if (func_251() == 2)
				{
					func_249();
				}
			}
			else
			{
				if (func_251() == 0)
				{
					func_250(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 2;
				}
				if (func_251() == 1)
				{
					func_250(Local_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
				if (func_251() == 2)
				{
					func_250(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
			}
		}
		else if (func_27(0))
		{
			func_250(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_196 = 1;
			iLocal_175 = 0;
			iLocal_28 = 2;
		}
		else
		{
			iLocal_175 = 0;
			iLocal_28 = 2;
		}
	}
}

void func_249()
{
	iLocal_197 = 0;
	if (!unk_0x3E9CABD07B829173())
	{
		unk_0xAE83ED4C9081AE6F(0);
	}
	unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1747.04f, 3267.456f, 40.246f, 1, 0, 0, 1);
	unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 229.0887f);
	if (unk_0x6ADD12BF4D6D2587(iLocal_48))
	{
		unk_0xC91FE17AD7353B70(&iLocal_48);
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_48))
	{
		unk_0x6FF834D85E2DD4C6(joaat("cargobob"));
		while (!unk_0x9A0B2ED5055D3F0B(joaat("cargobob")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iLocal_48 = unk_0xEA60F3B426BB095B(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, 1, 1, 0);
		unk_0xDA5162F6425C44AA(iLocal_48, 0, 1);
		unk_0xDA5162F6425C44AA(iLocal_48, 1, 1);
		unk_0x4BEFCD5DAE410A90(iLocal_48, 2);
		unk_0x9980244E5DAEFED4(iLocal_48, 1);
		unk_0xEDC33A771FAEB393(iLocal_48, 1);
		unk_0x8C224CD34D64FA01(iLocal_48, 0);
		func_102(iLocal_48, 0);
	}
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
	}
	unk_0xBB9A3C553EECB180(0f);
	if (!unk_0x9F7B586A14398C40())
	{
		unk_0x59C3AC31C7544A28(800);
	}
	while (!unk_0x9F7B586A14398C40())
	{
		unk_0x59C3AC31C7544A28(800);
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
}

void func_250(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_265())
	{
		unk_0x941BE77305BB5695(0);
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 2);
		unk_0x6ACDC20166AA3FAC(1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), 0, 0);
		}
		Global_92829 = { Param0 };
		Global_92832 = fParam3;
		Global_92828 = 1;
		if (iParam4 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 14);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 24);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 24);
		}
		func_220(1);
	}
}

int func_251()
{
	if (!Global_92833 == 10 && !Global_92833 == 9)
	{
		return 0;
	}
	return Global_92833.f_2;
}

void func_252(int iParam0, bool bParam1)
{
	unk_0xE3B73B6FD2ACD997(iParam0, !bParam1);
	unk_0x1D29C781A978C4FB(iParam0, bParam1);
}

void func_253()
{
	if (!func_265())
	{
		if (iLocal_175 == 0)
		{
			iLocal_28 = 1;
		}
	}
	else
	{
		iLocal_175 = 0;
		iLocal_28 = 1;
	}
}

void func_254()
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_48))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_48, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_48, 0))
				{
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_48))
					{
						if (func_255(unk_0xFC1458A37D98B502(), iLocal_48) == -1)
						{
							unk_0x4FB260623DD93924(0, 114, 1);
						}
					}
				}
			}
		}
	}
}

int func_255(int iParam0, int iParam1)
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !unk_0x191BE1BC8F26F3C1(uParam1, 0))
	{
		if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
		{
			if (unk_0x317536BCEA8FA6B0(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_256()
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_28 == 2 || iLocal_28 == 3)
		{
			if (func_229(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 3, 200, 0) || iLocal_211 == 1)
			{
				unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
				unk_0x2A20836DCD45A0B0(unk_0x9EB17624F44A8DA4());
			}
		}
		if (iLocal_28 == 4)
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0 && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_311, 1) > 1000f)
			{
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			}
		}
	}
}

void func_257()
{
}

void func_258()
{
	if (iLocal_289 == 0)
	{
		iLocal_185 = 0;
		while (iLocal_185 <= 12)
		{
			if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_185]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_185]))
				{
					if (unk_0x46D8E79A1B95ACE2(uLocal_33[iLocal_185], unk_0xFC1458A37D98B502()))
					{
						if (func_2(uLocal_33[iLocal_185], unk_0xFC1458A37D98B502(), 1) < 40f)
						{
							if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
							{
								iLocal_289 = 1;
							}
						}
						if (func_2(uLocal_33[iLocal_185], unk_0xFC1458A37D98B502(), 1) < 25f)
						{
							if (func_234(unk_0xFC1458A37D98B502()) != joaat("weapon_unarmed"))
							{
								if (func_263(uLocal_33[iLocal_185], 6))
								{
									iLocal_289 = 1;
								}
							}
						}
					}
				}
			}
			iLocal_185++;
		}
	}
	if (iLocal_213 == 0)
	{
		if (func_20() == 2)
		{
			func_143(&uLocal_403, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			iLocal_213 = 1;
		}
	}
	if (iLocal_210 == 0)
	{
		iLocal_192 = 0;
		while (iLocal_192 <= 1)
		{
			if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_192]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_192]))
				{
					if (iLocal_290 == 0 && iLocal_291 == 0)
					{
						if (!func_124())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_192], 1) < 25f)
								{
									if (unk_0x46D8E79A1B95ACE2(uLocal_33[iLocal_192], unk_0xFC1458A37D98B502()))
									{
										if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !func_235(0))
										{
											if (func_234(unk_0xFC1458A37D98B502()) != joaat("weapon_unarmed"))
											{
												if (unk_0x6ADD12BF4D6D2587(uLocal_33[0]))
												{
													if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[0]))
													{
														if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[0], 1) < 30f)
														{
															func_143(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x6ADD12BF4D6D2587(uLocal_33[1]))
												{
													if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[1]))
													{
														if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[1], 1) < 30f)
														{
															func_143(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_142(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = unk_0x53C562FD2B9E3AB0();
													iLocal_186 = unk_0x53C562FD2B9E3AB0();
													iLocal_290 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_291 == 0 && iLocal_290 == 0)
					{
						if (!func_124())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_192], 1) < 25f)
								{
									if (unk_0x46D8E79A1B95ACE2(uLocal_33[iLocal_192], unk_0xFC1458A37D98B502()))
									{
										if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
										{
											if (func_234(unk_0xFC1458A37D98B502()) == joaat("weapon_unarmed") || func_235(0))
											{
												if (unk_0x6ADD12BF4D6D2587(uLocal_33[0]))
												{
													if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[0]))
													{
														if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[0], 1) < 30f)
														{
															func_143(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x6ADD12BF4D6D2587(uLocal_33[1]))
												{
													if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[1]))
													{
														if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[1], 1) < 30f)
														{
															func_143(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_142(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = unk_0x53C562FD2B9E3AB0();
													iLocal_186 = unk_0x53C562FD2B9E3AB0();
													iLocal_291 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_290 == 1 || iLocal_291 == 1)
					{
						if (iLocal_289 == 0 && iLocal_210 == 0)
						{
							if (iLocal_310 == 0)
							{
								if (unk_0x53C562FD2B9E3AB0() > iLocal_186 + 8000)
								{
									if (!func_124())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_192], 1) < 25f)
											{
												if (unk_0x46D8E79A1B95ACE2(uLocal_33[iLocal_192], unk_0xFC1458A37D98B502()))
												{
													if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !func_235(0))
													{
														if (func_234(unk_0xFC1458A37D98B502()) != joaat("weapon_unarmed"))
														{
															if (unk_0x6ADD12BF4D6D2587(uLocal_33[0]))
															{
																if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[0]))
																{
																	if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[0], 1) < 30f)
																	{
																		func_143(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (unk_0x6ADD12BF4D6D2587(uLocal_33[1]))
															{
																if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[1]))
																{
																	if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[1], 1) < 30f)
																	{
																		func_143(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (func_142(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_186 = unk_0x53C562FD2B9E3AB0();
																iLocal_310 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (unk_0x53C562FD2B9E3AB0() > iLocal_187 + 8000)
							{
								if (!func_124())
								{
									if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
									{
										if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_192], 1) < 25f)
										{
											if (unk_0x46D8E79A1B95ACE2(uLocal_33[iLocal_192], unk_0xFC1458A37D98B502()))
											{
												if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
												{
													if (func_234(unk_0xFC1458A37D98B502()) == joaat("weapon_unarmed") || func_235(0))
													{
														if (unk_0x6ADD12BF4D6D2587(uLocal_33[0]))
														{
															if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[0]))
															{
																if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[0], 1) < 30f)
																{
																	func_143(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (unk_0x6ADD12BF4D6D2587(uLocal_33[1]))
														{
															if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[1]))
															{
																if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[1], 1) < 30f)
																{
																	func_143(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_310 == 0)
														{
															if (func_142(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_187 = unk_0x53C562FD2B9E3AB0();
																iLocal_310 = 1;
															}
														}
														if (iLocal_303 == 0)
														{
															iLocal_191 = unk_0x53C562FD2B9E3AB0();
															iLocal_303 = 1;
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
			iLocal_192++;
		}
	}
	if (unk_0x53C562FD2B9E3AB0() > iLocal_177 + 12000)
	{
		if (iLocal_210 == 1 || iLocal_289 == 1)
		{
			if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
			{
				if (!func_124())
				{
					if (func_262())
					{
						iLocal_181 = unk_0x63A6486593EC7EC3(0, 6);
						if (iLocal_181 == 0)
						{
							func_259(func_261(), "OVER_THERE", 9);
							iLocal_177 = unk_0x53C562FD2B9E3AB0();
						}
						else if (iLocal_181 == 1)
						{
							func_259(func_261(), "PROVOKE_TRESSPASS", 9);
							iLocal_177 = unk_0x53C562FD2B9E3AB0();
						}
						else if (iLocal_181 == 2)
						{
							func_259(func_261(), "UP_THERE", 9);
							iLocal_177 = unk_0x53C562FD2B9E3AB0();
						}
						else if (iLocal_181 == 3)
						{
							func_259(func_261(), "suspect_spotted", 9);
							iLocal_177 = unk_0x53C562FD2B9E3AB0();
						}
						else if (iLocal_181 == 4)
						{
							func_259(func_261(), "GENERIC_INSULT_HIGH", 9);
							iLocal_177 = unk_0x53C562FD2B9E3AB0();
						}
						else if (iLocal_181 == 5)
						{
							func_259(func_261(), "GENERIC_INSULT_MED", 9);
							iLocal_177 = unk_0x53C562FD2B9E3AB0();
						}
					}
				}
			}
		}
	}
}

void func_259(var uParam0, char* sParam1, int iParam2)
{
	unk_0x74D45BB07BD51F8B(uParam0, sParam1, func_260(iParam2), 1);
}

int func_260(int iParam0)
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

int func_261()
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xB7AF4220260C2ACD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 30f, 0, 1, &iVar0, 0, 1, -1);
	}
	iLocal_179 = 0;
	while (iLocal_179 <= 9)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_179]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_179]))
			{
				if (iVar0 == uLocal_33[iLocal_179])
				{
					return uLocal_33[iLocal_179];
				}
			}
		}
		iLocal_179++;
	}
	return 0;
}

int func_262()
{
	iLocal_180 = 0;
	while (iLocal_180 <= 9)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_33[iLocal_180]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(uLocal_33[iLocal_180]))
			{
				if (func_2(unk_0xFC1458A37D98B502(), uLocal_33[iLocal_180], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_180++;
	}
	return 0;
}

int func_263(int iParam0, int iParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), iParam1))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_264()
{
	if (unk_0xA33DB5EB9131A829("ARMY_HELI"))
	{
		if (unk_0x8597B3AA38933783("ARMY_HELI"))
		{
			unk_0xB4301FCD03DF42F6("ARMY_HELI", 0);
		}
	}
}

int func_265()
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_266()
{
	func_267(73);
	unk_0xBCBC53983EC3B1BA("DOCKP2B", 0);
	while (!unk_0x9F0887BCBFCF3C2F(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
	}
	unk_0x1D29C781A978C4FB(5, false);
	unk_0x1D29C781A978C4FB(3, false);
	unk_0x1D29C781A978C4FB(4, false);
	unk_0x4C15495E88D71C61(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, 0, 1);
	unk_0x4C15495E88D71C61(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, 0, 1);
	unk_0x4C15495E88D71C61(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1);
	uLocal_67 = unk_0xCB389937EDB1519A(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1, 1, 1);
	uLocal_69 = unk_0xCB389937EDB1519A(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, 0, 1, 1, 1);
	unk_0x247EAA2E93D4A021(-1876.8f, 2806.1f, 32.3f, 8f, 1, 0, 0, 0);
	unk_0x247EAA2E93D4A021(-1857.7f, 2797.9f, 32.4f, 8f, 1, 0, 0, 0);
	unk_0x1B5A255BF0D63005("WantedMusicOnMission", 1);
	unk_0x2E4932E63763FE26(joaat("buzzard"), 1);
	unk_0x4C15495E88D71C61(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0, 1);
	unk_0x2EB451A3616DA1F8(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0);
	unk_0x4C15495E88D71C61(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0, 1);
	unk_0x2EB451A3616DA1F8(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0);
}

void func_267(int iParam0)
{
	Global_88833 = 0;
	switch (iParam0)
	{
		case 72:
			func_232(2);
			func_232(4);
			break;
		
		case 73:
			func_232(0);
			func_232(1);
			func_232(7);
			break;
		
		case 92:
			func_232(10);
			func_232(9);
			func_232(13);
			func_232(6);
			break;
		
		case 68:
			func_232(11);
			break;
		
		case 78:
			func_232(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_232(3);
			break;
		
		default:
			break;
	}
}

void func_268()
{
	func_269();
	unk_0x2E4932E63763FE26(joaat("cargobob"), 0);
	unk_0x2E4932E63763FE26(joaat("buzzard"), 0);
	unk_0xC1DDE011D4FA5865(1);
	unk_0x4C15495E88D71C61(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 1, 1);
	unk_0x4C15495E88D71C61(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 1, 1);
	unk_0x37FBF1015278E427();
	unk_0xCA107A9AAF17E75F(uLocal_67, 0);
	unk_0xCA107A9AAF17E75F(uLocal_68, 0);
	unk_0xCA107A9AAF17E75F(uLocal_69, 0);
	func_252(1, 1);
	func_252(2, 1);
	func_252(7, 1);
	func_252(8, 1);
	func_252(9, 1);
	func_252(10, 1);
	func_252(4, 1);
	func_252(12, 1);
	func_116();
	if (unk_0xA33DB5EB9131A829("ARMY_GUARD"))
	{
		if (!unk_0x8597B3AA38933783("ARMY_GUARD"))
		{
			unk_0xB4301FCD03DF42F6("ARMY_GUARD", 1);
		}
	}
	unk_0x38FE9AAD8514D68B("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0xD671D47FAE9C14C8("AZ_AFB_ALARM_SPEECH", 0, 0);
	unk_0x1B5A255BF0D63005("PoliceScannerDisabled", 0);
	unk_0x1B5A255BF0D63005("WantedMusicOnMission", 0);
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		func_117(&(Local_70[iLocal_176 /*8*/]));
		iLocal_176++;
	}
	if (unk_0xA33DB5EB9131A829("ARMY_HELI"))
	{
		if (!unk_0x8597B3AA38933783("ARMY_HELI"))
		{
			unk_0xB4301FCD03DF42F6("ARMY_HELI", 1);
		}
	}
	unk_0x9EA1BA1DD45771B3(iLocal_60);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_269()
{
	Global_88833 = 0;
}

void func_270()
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_27(0))
	{
		if (!func_271())
		{
			iVar0 = func_26();
			if (iVar0 != -1)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_271()
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

