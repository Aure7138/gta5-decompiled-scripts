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
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_249();
		func_247();
	}
	unk_0xC953D7FEE6C3F318("EXTRASUNNY", 30f);
	func_245();
	if (!func_244())
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
		unk_0x31683E0D6DBB707E("M_ThePortOfLSHeistPrep2B", 0);
		func_243();
		func_237();
		func_236();
		func_235();
		func_233();
		switch (iLocal_28)
		{
			case 0:
				func_232();
				break;
			
			case 1:
				func_227();
				break;
			
			case 2:
				func_209();
				break;
			
			case 3:
				func_201();
				break;
			
			case 4:
				func_116();
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
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (func_2(iLocal_48, unk_0x17B5CC8A8615737D(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (func_2(iLocal_48, unk_0x17B5CC8A8615737D(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((unk_0x01F09F0D64EF3285(iLocal_48, 3, 30000) || unk_0x01F09F0D64EF3285(iLocal_48, 1, 40000)) || unk_0x01F09F0D64EF3285(iLocal_48, 0, 7000))
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
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
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
			unk_0xD12BCC85C2F8B1DE();
			unk_0x2E2945F5602A744F(1);
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
				func_247();
			}
			break;
	}
}

void func_5(struct<3> Param0, float fParam3)
{
	func_6(&(Global_96040.f_2311), Param0, fParam3);
}

void func_6(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_7(struct<3> Param0, float fParam3)
{
	if (func_8(Global_69942, 0f, 0f, 0f, 0))
	{
		Global_69942 = { Param0 };
		Global_69945 = fParam3;
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
	if (Global_91491 == 7)
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
	if (Global_91491 == 7 || Global_91491 == 8)
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
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		if (unk_0xF9108830F4935563(sParam0) <= 16)
		{
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk_0xC81784511829F091())
			{
				unk_0x319B2408D3EC19AC();
			}
		}
	}
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (Global_101700.f_8044 || func_27(0))
	{
		iVar0 = func_26();
		if (!func_14(iVar0))
		{
			return;
		}
		unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 5);
		Global_91527 = iParam0;
	}
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_19();
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0x21F9081DAE2F8AF5(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_18(iVar1, 1);
	unk_0xF6B2E0D2CFCE7923(unk_0xBE369BE1BC57A796());
	unk_0xC23C2ED7CCA1618F(unk_0xBE369BE1BC57A796());
	func_15(&(Global_101700.f_2095.f_539), iVar1);
	if (Global_85999 == Global_91528)
	{
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x48B8265059381CD0(Global_82612[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x2359C336802E3CB4(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1)
	{
		if (Global_101700.f_8044)
		{
		}
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_82576[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_82576[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_101700.f_17492[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_17(Global_101700.f_17492[iVar0], &Var2, &fVar5))
			{
				Global_101700.f_17492[iVar0] = 318;
				func_16(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_28 = 0f;
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
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85809[iParam0 /*2*/] = 0;
	}
}

void func_19()
{
	Global_91526 = 1;
	if (unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_20())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 25);
	}
}

int func_20()
{
	func_21();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_25(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_24(unk_0x17B5CC8A8615737D());
			if (func_23(iVar0) && (!func_22(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_23(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_22(int iParam0)
{
	return Global_35781 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_27(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_28()
{
	func_108();
	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_33();
			iLocal_196 = 0;
		}
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			unk_0x98F0FA127445E343(iLocal_48, 0);
		}
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			unk_0xE2D8919DE58194D4(unk_0x17B5CC8A8615737D(), 0, -1, 0);
		}
		if (unk_0x25BD4C26D84038CD())
		{
			unk_0x3FC7E3584ABA5F08(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
		}
		if (!unk_0x30F06AB0772AFB80())
		{
			unk_0xC7845898207D067F(800);
		}
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					unk_0x335F081010BB7A76(unk_0x17B5CC8A8615737D(), iLocal_48, 0);
				}
			}
		}
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 1))
				{
					unk_0xFBD8170293283E41(iLocal_48, 0, 0);
					unk_0xFBD8170293283E41(iLocal_48, 1, 0);
					unk_0xD602D152E57C823D(iLocal_48, 2);
					unk_0x4F94FF48185A8B4B(iLocal_48, 0);
					unk_0x98F0FA127445E343(iLocal_48, 1);
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
	func_247();
}

void func_30(int iParam0, int iParam1)
{
	Global_69970 = iParam1;
	if (Global_55816)
	{
		return;
	}
	if (Global_55843)
	{
		Global_55843 = 0;
		return;
	}
	if (unk_0x82F1A060D8F4583B(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55816)
		{
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

void func_31(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55824)
	{
		Global_55824 = iParam1;
	}
	if (bParam0)
	{
		if ((func_27(0) && Global_69948.f_1 == 1) && func_32(Global_69948))
		{
		}
		else
		{
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_27(0))
	{
		iVar0 = func_26();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101700.f_8044)
			{
			}
			return;
		}
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 4);
		unk_0xEB79FECD9022AAF0(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = unk_0x94E3E074F38DF86C();
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
	func_106();
	func_105();
	func_36();
	if (!func_35() || func_27(0))
	{
		func_34();
	}
	unk_0xBA7CD73403732191(0f);
}

void func_34()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			if (unk_0x23E9113C762466ED(iLocal_55))
			{
				if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_55, 0))
				{
					unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_55, -1);
				}
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), -1565.084f, 2780.813f, 16.4022f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 53.6086f);
			}
			break;
		
		case 3:
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			if (func_20() == 2)
			{
				if (unk_0x23E9113C762466ED(iLocal_48))
				{
					if (unk_0x45CD66F0A131E554(iLocal_48, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_48, -1);
						}
						unk_0x98F0FA127445E343(iLocal_48, 0);
					}
				}
			}
			break;
		
		case 4:
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			if (func_20() == 2)
			{
				if (unk_0x23E9113C762466ED(iLocal_48))
				{
					if (unk_0x45CD66F0A131E554(iLocal_48, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_48, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			if (func_20() == 2)
			{
				if (unk_0x23E9113C762466ED(iLocal_48))
				{
					if (unk_0x45CD66F0A131E554(iLocal_48, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_48, -1);
						}
					}
				}
			}
			break;
	}
}

bool func_35()
{
	return unk_0x48B8265059381CD0(Global_91491.f_20, 13);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x1B60289D0F2A2E3C(-1588.1f, 2794.9f, 17.2f, 20f, 1, 0, 0, 0);
			func_98(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 1, 0, 1, 0, 0);
			unk_0x3FE1DC991D646A3B(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			unk_0xE1324F59713746FA(joaat("cargobob"));
			unk_0xE1324F59713746FA(joaat("s_m_y_marine_01"));
			unk_0xE1324F59713746FA(joaat("s_m_m_pilot_02"));
			unk_0xE1324F59713746FA(joaat("buzzard"));
			while (((!unk_0x9F746898F7881612(joaat("cargobob")) || !unk_0x9F746898F7881612(joaat("s_m_y_marine_01"))) || !unk_0x9F746898F7881612(joaat("s_m_m_pilot_02"))) || !unk_0x9F746898F7881612(joaat("buzzard")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (func_244())
			{
				if (func_97())
				{
					if (!unk_0xC5082382D5482C0C(func_96()) && !unk_0x8432EA469FDB418D(func_96()))
					{
						func_94();
						while (!func_93())
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
			if (!unk_0x23E9113C762466ED(iLocal_48))
			{
				unk_0x1B60289D0F2A2E3C(Local_311, 10f, 1, 0, 0, 0);
				iLocal_48 = unk_0x692A2891A2BA7352(joaat("cargobob"), Local_311, fLocal_323, 1, 1);
				unk_0x476431A44C7D8609(iLocal_48, 0);
				unk_0x98F0FA127445E343(iLocal_48, 1);
				unk_0x4114B83B329702FF(iLocal_48, 1);
				unk_0x924CDE68BA2ED3BA(joaat("cargobob"));
				unk_0xD90CB3CF9A40791C(joaat("cargobob"), 1);
				unk_0xF8EDF3B7E8D2CD26(iLocal_48, 1);
				unk_0x77C1DE484C4249F8(iLocal_48, 0);
				func_92(iLocal_48, 0);
			}
			func_89();
			if (!unk_0x23E9113C762466ED(iLocal_49[0]))
			{
				if (unk_0x9F746898F7881612(joaat("buzzard")))
				{
					unk_0x1B60289D0F2A2E3C(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_49[0] = unk_0x692A2891A2BA7352(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
					unk_0x4114B83B329702FF(iLocal_49[0], 1);
					unk_0x476431A44C7D8609(iLocal_49[0], 1);
					unk_0x482AE8C0EAF5AE07(iLocal_49[0], 1084227584);
					unk_0xE4190D6FE693F9EC(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x924CDE68BA2ED3BA(joaat("buzzard"));
					unk_0x4F94FF48185A8B4B(iLocal_49[0], 0);
				}
			}
			if (func_244())
			{
				if (!unk_0x23E9113C762466ED(iLocal_55))
				{
					if (func_97())
					{
						if (!unk_0xC5082382D5482C0C(func_96()) && !unk_0x8432EA469FDB418D(func_96()))
						{
							iLocal_55 = func_37(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							unk_0x924CDE68BA2ED3BA(func_96());
							unk_0x2B9B4DCEF80D1566(iLocal_55, 1);
							unk_0xF8EDF3B7E8D2CD26(iLocal_55, 1);
						}
					}
				}
			}
			unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			unk_0xB80E9DA2EC792EE4(1);
			break;
		
		case 3:
			unk_0x9A66D28428C3E71C("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			unk_0x4EDE34FBADD967A6(1500);
			unk_0xE1324F59713746FA(joaat("cargobob"));
			unk_0xE1324F59713746FA(joaat("buzzard"));
			unk_0xE1324F59713746FA(joaat("s_m_y_marine_01"));
			unk_0xE1324F59713746FA(joaat("s_m_m_pilot_02"));
			while (((!unk_0x9F746898F7881612(joaat("cargobob")) || !unk_0x9F746898F7881612(joaat("buzzard"))) || !unk_0x9F746898F7881612(joaat("s_m_y_marine_01"))) || !unk_0x9F746898F7881612(joaat("s_m_m_pilot_02")))
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
			if (!unk_0x23E9113C762466ED(iLocal_48))
			{
				unk_0x1B60289D0F2A2E3C(Local_311, 10f, 1, 0, 0, 0);
				iLocal_48 = unk_0x692A2891A2BA7352(joaat("cargobob"), Local_311, fLocal_323, 1, 1);
				unk_0x98F0FA127445E343(iLocal_48, 1);
				unk_0x4114B83B329702FF(iLocal_48, 1);
				unk_0x85E61E88835AE7F5(iLocal_48);
				unk_0x924CDE68BA2ED3BA(joaat("cargobob"));
				unk_0xD90CB3CF9A40791C(joaat("cargobob"), 1);
				unk_0xF8EDF3B7E8D2CD26(iLocal_48, 1);
				unk_0x77C1DE484C4249F8(iLocal_48, 0);
				func_92(iLocal_48, 0);
			}
			func_89();
			if (!unk_0x23E9113C762466ED(iLocal_49[0]))
			{
				if (unk_0x9F746898F7881612(joaat("buzzard")))
				{
					unk_0x1B60289D0F2A2E3C(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_49[0] = unk_0x692A2891A2BA7352(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
					unk_0x4114B83B329702FF(iLocal_49[0], 1);
					unk_0x476431A44C7D8609(iLocal_49[0], 1);
					unk_0x482AE8C0EAF5AE07(iLocal_49[0], 1084227584);
					unk_0xE4190D6FE693F9EC(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x924CDE68BA2ED3BA(joaat("buzzard"));
					unk_0x4F94FF48185A8B4B(iLocal_49[0], 0);
				}
			}
			if (!unk_0x23E9113C762466ED(uLocal_31[0]))
			{
				uLocal_31[0] = unk_0x3FBC0964EB7878AF(iLocal_49[0], 26, joaat("s_m_m_pilot_02"), -1, 1, 1);
				unk_0x924CDE68BA2ED3BA(joaat("s_m_m_pilot_02"));
			}
			else if (!unk_0x2315BB1606BC3DC3(uLocal_31[0], iLocal_49[0], 0))
			{
				unk_0xFCB4AA590A0D6A59(uLocal_31[0], iLocal_49[0], -1);
			}
			unk_0xC1B7B5C6FDC0755B(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute"), -1, 0, 1);
			unk_0x6C56935CD477B6CD("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
			unk_0x8788F758785FCC5A("AZ_AFB_ALARM_SPEECH", 1, 1);
			break;
		
		case 4:
			unk_0xE1324F59713746FA(joaat("cargobob"));
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			while (!unk_0x9F746898F7881612(joaat("cargobob")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x23E9113C762466ED(iLocal_48))
			{
				unk_0x1B60289D0F2A2E3C(Local_311, 10f, 1, 0, 0, 0);
				iLocal_48 = unk_0x692A2891A2BA7352(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 1);
				unk_0x4114B83B329702FF(iLocal_48, 1);
				unk_0x924CDE68BA2ED3BA(joaat("cargobob"));
				unk_0xD90CB3CF9A40791C(joaat("cargobob"), 1);
				unk_0x77C1DE484C4249F8(iLocal_48, 0);
				unk_0xF8EDF3B7E8D2CD26(iLocal_48, 1);
				unk_0x524A422B74847594(iLocal_48, 1, 1, 0);
				unk_0x85E61E88835AE7F5(iLocal_48);
				unk_0xFAC43F40071FC184(iLocal_48, 30f);
				func_92(iLocal_48, 0);
			}
			unk_0xC1B7B5C6FDC0755B(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute"), -1, 0, 1);
			break;
		
		case 5:
			unk_0xE1324F59713746FA(joaat("cargobob"));
			unk_0xE1324F59713746FA(joaat("sandking"));
			while (!unk_0x9F746898F7881612(joaat("cargobob")) || !unk_0x9F746898F7881612(joaat("sandking")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x23E9113C762466ED(iLocal_48))
			{
				unk_0x1B60289D0F2A2E3C(1749.61f, 3272.95f, 40.1533f, 5f, 1, 0, 0, 0);
				iLocal_48 = unk_0x692A2891A2BA7352(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, 1, 1);
				unk_0x4114B83B329702FF(iLocal_48, 1);
				unk_0x924CDE68BA2ED3BA(joaat("cargobob"));
				unk_0xF8EDF3B7E8D2CD26(iLocal_48, 1);
				unk_0x77C1DE484C4249F8(iLocal_48, 0);
				func_92(iLocal_48, 0);
			}
			if (!unk_0x23E9113C762466ED(iLocal_51[0]))
			{
				iLocal_51[0] = unk_0x692A2891A2BA7352(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1);
				unk_0x98F0FA127445E343(iLocal_51[0], 1);
				unk_0x924CDE68BA2ED3BA(joaat("sandking"));
			}
			if (unk_0x23E9113C762466ED(iLocal_51[0]))
			{
				iLocal_214 = 1;
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)
{
	return func_38(&(Global_96040.f_2311), Param0, fParam3, 0);
}

int func_38(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_88(uParam0))
	{
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x3D559A6AF62756C4(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_87(uParam0))
		{
			unk_0x1B60289D0F2A2E3C(Param1, 5f, 1, 0, 0, 0);
			func_86(Param1, 5f, 0);
			iVar0 = unk_0x692A2891A2BA7352(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x23E9113C762466ED(iVar0))
			{
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x394AE1BE8F25AC5B(iVar0, Param1, 0, 0, 1);
				}
				func_78(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xA55B002FED5A9858(uParam0->f_12.f_66) || unk_0x94AB8F7D4254DDDE(uParam0->f_12.f_66))
				{
					if (!unk_0x9BD6D9E34A208484(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_77(uParam0->f_11, 1);
						}
						else if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_77(uParam0->f_11, 2);
						}
					}
					unk_0xB7A086F89FD711C4(iVar0, 0);
					unk_0x0F2AE8B51289309C(iVar0, 0);
					unk_0x2B9B4DCEF80D1566(iVar0, 1);
					func_76(iVar0, uParam0->f_11);
				}
				else if ((!func_73(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x6A7B0D91FD88D9EE(unk_0x6AF6B39BFDB53CB5(), "startup_positioning"))
				{
					iVar8 = func_72(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_65(iVar8);
					}
				}
				if (((Global_91491 != 13 && Global_91491 != 10) && Global_91491 != 11) && Global_91491 != 12)
				{
					if (unk_0x765F5B806B517045(&(Global_91491.f_3)) == Global_69519)
					{
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66)
						{
							func_62(24, 0);
							func_65(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0x924CDE68BA2ED3BA(uParam0->f_12.f_66);
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
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
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
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
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_40(iParam0, &(Global_101700.f_31389.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
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
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
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
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)
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

int func_44(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_60(iParam0, 0, 0)) || func_60(iParam0, 1, 0)) || func_60(iParam0, 2, 0)) || func_59(iParam0) != 145) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || func_55(iParam0)) || !func_45(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_57(iParam0))
		{
		}
		if (func_57(iParam0))
		{
		}
		if (func_60(iParam0, 0, 0))
		{
		}
		if (func_60(iParam0, 1, 0))
		{
		}
		if (func_60(iParam0, 2, 0))
		{
		}
		if (func_59(iParam0) != 145)
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
	if (!func_46(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_54())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
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
		if ((((!func_53() && !func_52()) && !func_51()) && !func_50()) && !func_54())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_51())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_49(iParam0))
		{
			return 0;
		}
	}
	if (!func_47(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_48())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
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
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_48()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50()
{
	return 0;
}

int func_51()
{
	return 1;
}

int func_52()
{
	return 1;
}

int func_53()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					uVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&uVar0, 0);
					unk_0x0D1285E5ED89254D(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	uVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_46(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_61(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_62(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_64(iParam0, 0))
		{
			func_63(iParam0, 1, 0);
			func_63(iParam0, 2, 0);
			func_63(iParam0, 3, 0);
			func_63(iParam0, 4, 0);
			func_63(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else
	{
		func_63(iParam0, 0, 0);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_31389[iParam0]), iParam1);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_31389[iParam0]), iParam1);
	}
}

bool func_64(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_101700.f_31389[iParam0], iParam1);
}

void func_65(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_69(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x45CD66F0A131E554(Global_68531.f_139[iParam0], 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Global_68531.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xF0F77C99098F999B(Global_68531.f_139[iParam0], 1, 1);
				unk_0x813865264334331D(&(Global_68531.f_139[iParam0]));
			}
		}
		Global_68531[iParam0] = 1;
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_64(iParam0, 0)) && Global_69440.f_66 == 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3) && (!func_67(0, Global_68531.f_555[0 /*21*/].f_12) || !func_67(1, Global_68531.f_555[0 /*21*/].f_12)))
			{
				func_66(&(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]), &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_62(iParam0, 0);
		}
	}
}

void func_66(var uParam0, var uParam1)
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

int func_67(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_68(&(Global_101700.f_31389.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_46(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_68(var uParam0)
{
	return *uParam0;
}

int func_69(var uParam0, int iParam1)
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
			uParam0->f_4 = func_70(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_70(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_70(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_70(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_70(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_70(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_70(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_70(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_70(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
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
			if (func_54())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_54())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_8(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 19))
	{
		if (!func_8(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x48B8265059381CD0(uParam0->f_9, 20))
	{
		if (!func_8(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_70(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_23(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_71(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_71(int iParam0, var uParam1, int iParam2)
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
			if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131])
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
					if (Global_101700.f_8044.f_99.f_58[119])
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
			else if (Global_101700.f_8044.f_99.f_58[118])
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

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]) && !unk_0xA929B2923D14E2F8(Global_68531.f_484[iVar0], 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[iVar0], 0))
		{
			unk_0x3C5D9FD265196560(iParam0, &iVar1, &iVar2);
			unk_0x3C5D9FD265196560(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x0324EEB10F81965F(iParam0) == unk_0x0324EEB10F81965F(Global_68531.f_484[iVar0]) && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_75(iParam0, Global_68531.f_139[38], 0))
			{
				func_65(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_75(iParam0, Global_68531.f_139[43], 1))
			{
				func_65(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_75(iParam0, uVar1[iVar6], 1) && func_74(unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_8(Param1, 0f, 0f, 0f, 0)) || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x813865264334331D(&iParam0);
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
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[14]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[14], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[14]) == joaat("luxor2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[14]))
				{
					func_65(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[20]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[20], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[20]) == joaat("swift2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[20]))
				{
					func_65(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_74(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x23E9113C762466ED(iParam1) && !unk_0xA929B2923D14E2F8(iParam1, 0)) && unk_0x45CD66F0A131E554(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x3C5D9FD265196560(iParam0, &iVar0, &iVar1);
			unk_0x3C5D9FD265196560(iParam1, &iVar2, &iVar3);
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

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = unk_0x0324EEB10F81965F(iParam0);
			if (unk_0xC2AFD5CFEDC8F22A(Global_89175[iVar0]))
			{
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x0324EEB10F81965F(Global_89155[iVar0]) == func_70(iParam0, iParam1))
				{
					if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Global_89155[iVar0], 0))
					{
						unk_0xF0F77C99098F999B(Global_89155[iVar0], 0, 1);
						unk_0x813865264334331D(&(Global_89155[iVar0]));
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_78(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (unk_0x765F5B806B517045(&(uParam1->f_1)) != 0)
		{
			unk_0xBFA6D869BA395202(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x65787AE258BCF6F8())
		{
			unk_0xE0B7A718D08DF2B6(iParam0, *uParam1);
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
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 13))
		{
			unk_0x9DD4A7AF83B5A817(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xCE1BE7835278AA2B(iParam0);
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 12))
		{
			unk_0x2C6350FBF2D740F9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA53583755F423DE9(iParam0);
		}
		unk_0x357EE036FE09513D(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB9A1BA07F229F6AC(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x48B8265059381CD0(uParam1->f_77, 15) || func_85(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_84())
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
		unk_0xF487CED93F263DA0(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xA3C6B7F3E39994ED(iParam0, 0);
		}
		else
		{
			unk_0xA3C6B7F3E39994ED(iParam0, 0);
			unk_0xA3C6B7F3E39994ED(iParam0, uParam1->f_65);
		}
		unk_0x5DED87DD8464517B(iParam0, !unk_0x48B8265059381CD0(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD602D152E57C823D(iParam0, uParam1->f_70);
		}
		unk_0x4EC6390E64BE867C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x0C93CB3C1E004C79(iParam0, 2, unk_0x48B8265059381CD0(uParam1->f_77, 28));
		unk_0x0C93CB3C1E004C79(iParam0, 3, unk_0x48B8265059381CD0(uParam1->f_77, 29));
		unk_0x0C93CB3C1E004C79(iParam0, 0, unk_0x48B8265059381CD0(uParam1->f_77, 30));
		unk_0x0C93CB3C1E004C79(iParam0, 1, unk_0x48B8265059381CD0(uParam1->f_77, 31));
		unk_0xBE993A95A7771E1E(iParam0, unk_0x48B8265059381CD0(uParam1->f_77, 10));
		if (unk_0xD374022FAFC7605F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x866129976ECB1FB9(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(iParam0)))
			{
				if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_83(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_83(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xE4D316C82D08E63D(iParam0, 1);
			}
			else
			{
				unk_0x63677FA149BCF42B(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_79(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xC5082382D5482C0C(uParam1->f_66) && !unk_0xA55B002FED5A9858(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
					{
						unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
				{
					unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x0324EEB10F81965F(iParam0) == joaat("sheava") || unk_0x0324EEB10F81965F(iParam0) == joaat("omnis")) || unk_0x0324EEB10F81965F(iParam0) == joaat("le7b"))
		{
			if (unk_0x68BE46B0EA4FCFAF(iParam0, 0) == -1)
			{
				unk_0x70888C5F297D3D80(iParam0, 1, 0);
			}
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (!unk_0x48B8265059381CD0(uParam1->f_77, 23))
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, 22))
				{
					unk_0x2F18827C60FB4AD8(iParam0, 2);
				}
				else
				{
					unk_0x2F18827C60FB4AD8(iParam0, 3);
				}
			}
			else
			{
				unk_0x2F18827C60FB4AD8(iParam0, 4);
			}
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 27))
		{
			unk_0x6717F72244C0D24C(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6717F72244C0D24C(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_79(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x5991FAEA924B5EE0(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xA6EBC11A2C89D4A1(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68BE46B0EA4FCFAF(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x8762285499CFD42B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xE8BE9EFA248A9414(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xE8BE9EFA248A9414(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xE8BE9EFA248A9414(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_82(unk_0x0324EEB10F81965F(*iParam0), 1) && unk_0x68BE46B0EA4FCFAF(*iParam0, 24) != func_81(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xE8BE9EFA248A9414(*iParam0, 24, func_81(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_80(*iParam0))
	{
		unk_0xF8EDF3B7E8D2CD26(*iParam0, 1);
		unk_0x2B9B4DCEF80D1566(*iParam0, 1);
	}
	return 1;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0xFA4A2220118417AE(iParam0) > 0)
	{
		unk_0x5991FAEA924B5EE0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x68BE46B0EA4FCFAF(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x945C7AD683103333(iParam0, iVar1, unk_0x68BE46B0EA4FCFAF(iParam0, iVar1)), 16);
				iVar2 = unk_0x765F5B806B517045(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x765F5B806B517045("MNU_CAGE") || iVar2 == unk_0x765F5B806B517045("SABRE_CAG"))
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

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		switch (unk_0x0324EEB10F81965F(iParam0))
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
		iVar0 = unk_0xF218D5E7A1FA1079(iParam0, 38);
		iVar1 = unk_0xF218D5E7A1FA1079(iParam0, 24);
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

int func_82(int iParam0, int iParam1)
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
			if (!Global_262145.f_12339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12342)
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
			if (Global_262145.f_16780)
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
			if (Global_262145.f_16782)
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
			if (Global_262145.f_16786)
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
			if (Global_262145.f_16783)
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
			if (Global_262145.f_16790)
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
			if (Global_262145.f_16788)
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
			if (Global_262145.f_16793)
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

void func_83(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFA4A2220118417AE(iParam0) > 0)
	{
		unk_0x5991FAEA924B5EE0(iParam0, 0);
		iVar0 = unk_0x68BE46B0EA4FCFAF(iParam0, 24);
		iVar1 = unk_0x1D2F98CF2A472A00(iParam0, 24);
		unk_0xE8356B7E1B731437(iParam0, uParam1);
		if (unk_0x0324EEB10F81965F(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x8762285499CFD42B(iParam0, 24);
		}
		else
		{
			unk_0xE8BE9EFA248A9414(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_84()
{
	return unk_0x6948821CC8D52AC2(joaat("mpindependence"));
}

int func_85(int iParam0)
{
	var uVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x34D7B5822CF22910("MPBitset", 3))
			{
				if (unk_0x44748DA5CF34DA5E(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "MPBitset");
				}
				return unk_0x48B8265059381CD0(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_86(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_69(&(Global_68531.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x3DC4639D5F23DEA2(Param0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_65(iVar0);
			}
		}
		iVar0++;
	}
}

int func_87(var uParam0)
{
	if (func_88(uParam0))
	{
		if (unk_0x9F746898F7881612(uParam0->f_12.f_66))
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

int func_88(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_46(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_74(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

void func_89()
{
	if (iLocal_201 == 0)
	{
		if (unk_0x9F746898F7881612(joaat("s_m_y_marine_01")) && unk_0x9F746898F7881612(joaat("s_m_m_pilot_02")))
		{
			if (!unk_0x23E9113C762466ED(uLocal_33[0]))
			{
				uLocal_33[0] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[1]))
			{
				uLocal_33[1] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[2]))
			{
				uLocal_33[2] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[3]))
			{
				uLocal_33[3] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[4]))
			{
				uLocal_33[4] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[5]))
			{
				uLocal_33[5] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[6]))
			{
				uLocal_33[6] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, 1, 1);
			}
			if (iLocal_28 != 3)
			{
				if (!unk_0x23E9113C762466ED(uLocal_33[7]))
				{
					uLocal_33[7] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, 1, 1);
				}
				if (!unk_0x23E9113C762466ED(uLocal_33[8]))
				{
					uLocal_33[8] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, 1, 1);
				}
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[9]))
			{
				uLocal_33[9] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[10]))
			{
				uLocal_33[10] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[11]))
			{
				uLocal_33[11] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_33[12]))
			{
				uLocal_33[12] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, 1, 1);
			}
			if (!unk_0x23E9113C762466ED(uLocal_31[0]))
			{
				uLocal_31[0] = unk_0x2AD5F4170F4ACBEB(26, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, 1, 1);
				unk_0xCAA97B7826076AFA(uLocal_31[0], 0, 2, 0, 0);
				unk_0x2F933BB106547968(uLocal_31[0], 8, 0, 0, 0);
				unk_0x4114B83B329702FF(uLocal_31[0], 1);
				unk_0xC1B7B5C6FDC0755B(uLocal_31[0], joaat("weapon_assaultrifle"), 2000, 1, 1);
				unk_0x3BB70315907D9456(uLocal_31[0], iLocal_60);
				unk_0xFA4023BBD5BCB8B5(uLocal_31[0], 0);
				unk_0xCC61640A821F277C(uLocal_31[0], 1);
				func_91(uLocal_31[0], 595);
				func_90(uLocal_31[0], 0);
			}
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				if (iLocal_275[iLocal_176] == 0)
				{
					if (!unk_0xCA41A00932714525(uLocal_33[iLocal_176]))
					{
						unk_0x4114B83B329702FF(uLocal_33[iLocal_176], 1);
						unk_0xC1B7B5C6FDC0755B(uLocal_33[iLocal_176], joaat("weapon_assaultrifle"), 2000, 1, 1);
						unk_0x3BB70315907D9456(uLocal_33[iLocal_176], iLocal_60);
						unk_0xFA4023BBD5BCB8B5(uLocal_33[iLocal_176], 10);
						func_91(uLocal_33[iLocal_176], 595);
						func_90(uLocal_33[iLocal_176], 0);
						unk_0xCC61640A821F277C(uLocal_33[iLocal_176], 1);
						iLocal_275[iLocal_176] = 1;
					}
				}
				iLocal_176++;
			}
			unk_0x924CDE68BA2ED3BA(joaat("s_m_y_marine_01"));
			unk_0x924CDE68BA2ED3BA(joaat("s_m_m_pilot_02"));
			iLocal_201 = 1;
		}
	}
}

void func_90(int iParam0, bool bParam1)
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
			if (Global_55852[iVar0 /*2*/] != 0)
			{
				if (Global_55852[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55851)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55852[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55852[iVar1 /*2*/] = iParam0;
	Global_55852[iVar1 /*2*/].f_1 = 7;
	Global_55851++;
}

void func_91(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_68070[iVar0 /*2*/] == 0)
		{
			Global_68070[iVar0 /*2*/] = uParam0;
			Global_68070[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_68103)
			{
				Global_68103++;
			}
			return;
		}
		iVar0++;
	}
}

void func_92(int iParam0, int iParam1)
{
	Global_91491.f_22[iParam1] = iParam0;
}

bool func_93()
{
	return func_87(&(Global_96040.f_2311));
}

void func_94()
{
	func_95(&(Global_96040.f_2311));
}

void func_95(var uParam0)
{
	if (func_88(uParam0))
	{
		unk_0xE1324F59713746FA(uParam0->f_12.f_66);
	}
}

var func_96()
{
	return Global_96040.f_2311.f_12.f_66;
}

bool func_97()
{
	return func_88(&(Global_96040.f_2311));
}

void func_98(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_99(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_99(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xC26429B504BA534D(iVar0))
		{
			unk_0xF0F77C99098F999B(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			if (bParam18)
			{
				func_104(iVar0);
			}
			if (unk_0x70A9F320A34FAC28(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_101(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("taxi")))
				{
					if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D() && unk_0x17206B315923243C(iVar0, -1, 0) != 0)
					{
						if (unk_0x3DC4639D5F23DEA2(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x57240623C1BC6E88(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_60(iVar0, func_20(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_100(Param11))
				{
					if (unk_0x45CD66F0A131E554(iVar0, 0))
					{
						iVar13 = unk_0x0324EEB10F81965F(iVar0);
						unk_0x397665926E912F5B(iVar0, &Var4, &Var7);
						if (unk_0xC5082382D5482C0C(iVar13))
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
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x0668B21A0C3A4821(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x0608D50823C6AA6D(iVar0, fParam10);
						unk_0x5DC8C2F2F8A363C2(iVar0, Param7, 1, 0, 0, 1);
						unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x524A422B74847594(iVar0, 0, 1, 0);
							unk_0x016C65ED12A14D44(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xC26429B504BA534D(iVar0) || !unk_0x45CA7F42CA715849(iVar0, 1))
						{
							unk_0xF0F77C99098F999B(iVar0, 1, 1);
						}
						if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
						{
							unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x813865264334331D(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x2A5905FD3A0ED2A0(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (unk_0xC26429B504BA534D(iVar0))
					{
						unk_0x921CF98C637B0043(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xC26429B504BA534D(iVar0))
			{
				unk_0xF0F77C99098F999B(iVar0, 1, 0);
			}
			iVar14 = unk_0x17206B315923243C(iVar0, -1, 0);
			if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
			{
				unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 0, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 1, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x17206B315923243C(iVar0, 2, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x813865264334331D(&iVar0);
		}
	}
}

int func_100(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_103(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_102(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_102(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_102(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_102(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_102(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_102(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_102(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_102(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_102(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_102(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_102(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_102(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_102(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_102(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_102(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_102(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_103(struct<3> Param0)
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

void func_104(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x27CB4A87DBB58E6E(iParam0) <= 200f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
			if (unk_0x1667F287C40D3CA4(iParam0) <= 700f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 900f);
			}
			if (unk_0xB5DF060B138CD2EA(iParam0) < 200)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
		}
	}
}

void func_105()
{
	if (!func_35())
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 1738.131f, 3283.38f, 40.1261f, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 25.3545f);
		}
	}
	if (unk_0x23E9113C762466ED(uLocal_31[0]))
	{
		unk_0x478AE709A466CB7E(&(uLocal_31[0]));
	}
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		if (unk_0x23E9113C762466ED(uLocal_33[iLocal_176]))
		{
			unk_0x478AE709A466CB7E(&(uLocal_33[iLocal_176]));
		}
		iLocal_176++;
	}
	if (func_20() == 2)
	{
		if (unk_0x23E9113C762466ED(uLocal_325[0]))
		{
			unk_0x478AE709A466CB7E(&(uLocal_325[0]));
		}
	}
	if (func_20() == 0)
	{
		if (unk_0x23E9113C762466ED(uLocal_325[2]))
		{
			unk_0x478AE709A466CB7E(&(uLocal_325[2]));
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_49[0]))
	{
		unk_0x6741124666983482(iLocal_49[0], 0);
	}
	unk_0xF36BA7C9465AE128("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x8788F758785FCC5A("AZ_AFB_ALARM_SPEECH", 0, 0);
	if (unk_0x4E1850F5FF023071("DH_P_2B_ENTER_CHOPPER"))
	{
		unk_0xB8CAC5F3774894A1("DH_P_2B_ENTER_CHOPPER");
	}
	if (unk_0x4E1850F5FF023071("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		unk_0xB8CAC5F3774894A1("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (unk_0x23E9113C762466ED(iLocal_47))
	{
		unk_0x813865264334331D(&iLocal_47);
	}
	if (unk_0x23E9113C762466ED(iLocal_55))
	{
		unk_0x813865264334331D(&iLocal_55);
	}
	if (unk_0x23E9113C762466ED(iLocal_48))
	{
		unk_0x813865264334331D(&iLocal_48);
	}
	if (unk_0x23E9113C762466ED(iLocal_49[0]))
	{
		unk_0x813865264334331D(&(iLocal_49[0]));
	}
	if (unk_0x23E9113C762466ED(Global_88321[0]))
	{
		if (!unk_0x45CA7F42CA715849(Global_88321[0], 1))
		{
			unk_0xF0F77C99098F999B(Global_88321[0], 1, 1);
		}
		unk_0x813865264334331D(&(Global_88321[0]));
	}
	if (unk_0x23E9113C762466ED(Global_88321[1]))
	{
		if (!unk_0x45CA7F42CA715849(Global_88321[1], 1))
		{
			unk_0xF0F77C99098F999B(Global_88321[1], 1, 1);
		}
		unk_0x813865264334331D(&(Global_88321[1]));
	}
	if (unk_0x23E9113C762466ED(Global_88321[2]))
	{
		if (!unk_0x45CA7F42CA715849(Global_88321[2], 1))
		{
			unk_0xF0F77C99098F999B(Global_88321[2], 1, 1);
		}
		unk_0x813865264334331D(&(Global_88321[2]));
	}
	if (unk_0x23E9113C762466ED(iLocal_51[0]))
	{
		unk_0x813865264334331D(&(iLocal_51[0]));
	}
	if (unk_0x23E9113C762466ED(iLocal_58))
	{
		unk_0x1AAFEA627BB9C402(&iLocal_58);
	}
	if (unk_0x23E9113C762466ED(iLocal_59))
	{
		unk_0x1AAFEA627BB9C402(&iLocal_59);
	}
	if (unk_0x0F1BF24ED3B7ED40(uLocal_56))
	{
		if (unk_0xA6312B4FE4134130(uLocal_56))
		{
			unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		}
		unk_0x2BC4A4AFFC2D937D(uLocal_56, 0);
	}
}

void func_106()
{
	if (unk_0xA3794949321E107C(uLocal_61))
	{
		unk_0x020DF7300725ECAB(&uLocal_61);
	}
	if (unk_0xA3794949321E107C(uLocal_62))
	{
		unk_0x020DF7300725ECAB(&uLocal_62);
	}
	if (unk_0xA3794949321E107C(uLocal_65))
	{
		unk_0x020DF7300725ECAB(&uLocal_65);
	}
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		func_107(&(Local_70[iLocal_176 /*8*/]));
		iLocal_176++;
	}
	unk_0x527330BECBB9D9CD();
}

void func_107(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
		bVar0 = true;
	}
	if (unk_0xA3794949321E107C(uParam0->f_1))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x23E9113C762466ED(uParam0->f_7))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_7))
		{
			if (unk_0x708B478711FA7649(uParam0->f_7))
			{
				unk_0x53D9FD8A3418C8E9(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_108()
{
	if (iLocal_28 == 5)
	{
		if (unk_0xA3794949321E107C(uLocal_61))
		{
			unk_0x020DF7300725ECAB(&uLocal_61);
		}
		if (unk_0xA3794949321E107C(uLocal_62))
		{
			unk_0x020DF7300725ECAB(&uLocal_62);
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_48))
	{
		if (unk_0x45CD66F0A131E554(iLocal_48, 0))
		{
			if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
			{
				if (unk_0xA3794949321E107C(uLocal_61))
				{
					unk_0x020DF7300725ECAB(&uLocal_61);
				}
				if (iLocal_300 == 1)
				{
					if (unk_0x94E3E074F38DF86C() < iLocal_189 + 7500)
					{
						unk_0xD12BCC85C2F8B1DE();
					}
				}
				if (iLocal_28 == 4)
				{
					if (!unk_0xA3794949321E107C(uLocal_62))
					{
						uLocal_62 = func_115(Local_314, 0);
					}
					if (iLocal_199 == 0)
					{
						if (!unk_0x75342B3CD0FB5275())
						{
							if (!func_114() || !unk_0xDA5E060432EE0B26())
							{
								func_113("DP_GOD4", 7500, 1);
								iLocal_190 = unk_0x94E3E074F38DF86C();
								iLocal_199 = 1;
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (!unk_0xA3794949321E107C(uLocal_63[0]))
					{
						uLocal_63[0] = func_112(uLocal_31[0], 1, 0);
					}
				}
			}
			else if (iLocal_28 != 5)
			{
				if (!unk_0xA3794949321E107C(uLocal_61))
				{
					uLocal_61 = func_109(iLocal_48, 0, 0);
				}
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_300 == 0)
					{
						unk_0xD12BCC85C2F8B1DE();
						func_113("DP_GOD6", 7500, 1);
						iLocal_189 = unk_0x94E3E074F38DF86C();
						iLocal_300 = 1;
					}
				}
				if (unk_0xA3794949321E107C(uLocal_62))
				{
					unk_0x020DF7300725ECAB(&uLocal_62);
				}
				if (iLocal_28 == 3)
				{
					if (unk_0xA3794949321E107C(uLocal_63[0]))
					{
						unk_0x020DF7300725ECAB(&(uLocal_63[0]));
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_199 == 1)
					{
						if (unk_0x94E3E074F38DF86C() < iLocal_190 + 7500)
						{
							unk_0xD12BCC85C2F8B1DE();
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xA3794949321E107C(uLocal_61))
			{
				unk_0x020DF7300725ECAB(&uLocal_61);
			}
			if (iLocal_197 == 1)
			{
				iLocal_200 = 1;
			}
		}
	}
	else
	{
		if (unk_0xA3794949321E107C(uLocal_61))
		{
			unk_0x020DF7300725ECAB(&uLocal_61);
		}
		if (iLocal_197 == 1)
		{
			iLocal_200 = 1;
		}
	}
}

int func_109(var uParam0, bool bParam1, bool bParam2)
{
	return func_110(uParam0, !bParam1, bParam2);
}

int func_110(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_111(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_111(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_111(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_111(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_112(var uParam0, bool bParam1, bool bParam2)
{
	return func_110(uParam0, !bParam1, bParam2);
}

void func_113(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

int func_114()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

var func_115(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_111(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
	return uVar0;
}

void func_116()
{
	if (iLocal_175 > 0)
	{
		func_108();
		func_200();
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
		if (unk_0xA3794949321E107C(uLocal_65))
		{
			unk_0x020DF7300725ECAB(&uLocal_65);
		}
		unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			unk_0x98F0FA127445E343(iLocal_48, 0);
		}
		unk_0xB80E9DA2EC792EE4(0);
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			if (unk_0x23E9113C762466ED(uLocal_33[iLocal_176]))
			{
				if (!unk_0xCA41A00932714525(uLocal_33[iLocal_176]))
				{
					unk_0x650BB0E111420EAF(uLocal_33[iLocal_176], 1);
					unk_0x6500ADB01E821BC0(&(uLocal_33[iLocal_176]));
				}
			}
			iLocal_176++;
		}
		if (unk_0x23E9113C762466ED(iLocal_49[0]))
		{
			unk_0x921CF98C637B0043(&(iLocal_49[0]));
		}
		if (unk_0x23E9113C762466ED(uLocal_31[0]))
		{
			unk_0x6500ADB01E821BC0(&(uLocal_31[0]));
		}
		if (!unk_0x4E1850F5FF023071("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x4A5D4AD0FE6ACF73("DH_P_2B_ENTER_CHOPPER");
		}
		if (unk_0x25BD4C26D84038CD())
		{
			if (!func_35())
			{
				unk_0x3FC7E3584ABA5F08(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
			}
			func_198(iLocal_48, -1, 1);
		}
		if (!unk_0x30F06AB0772AFB80())
		{
			unk_0xC7845898207D067F(800);
		}
		unk_0x2DE9FDD822EE641B(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (iLocal_308 == 0)
		{
			if (unk_0x23E9113C762466ED(iLocal_48))
			{
				if (unk_0x45CD66F0A131E554(iLocal_48, 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
					{
						if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_311, 1) > 800f)
						{
							func_134(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_308 = 1;
						}
					}
				}
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					if (unk_0x14E01C4EC4170496(iLocal_48))
					{
						if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_311, 1) > 800f)
						{
							if (iLocal_304 == 0 && iLocal_199 == 1)
							{
								if (!unk_0x75342B3CD0FB5275())
								{
									if (!func_114() || !unk_0xDA5E060432EE0B26())
									{
										func_133(&uLocal_403, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
										if (func_132(&uLocal_403, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_304 = 1;
										}
									}
								}
							}
							if (iLocal_304 == 1 && iLocal_309 == 0)
							{
								if (func_131(72) == 0)
								{
									if (!func_114())
									{
										if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
										{
											func_133(&uLocal_403, 3, 0, "Wade", 0, 1);
											if (func_120(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_309 = 1;
											}
										}
									}
								}
								else if (!func_114())
								{
									if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
									{
										func_133(&uLocal_403, 3, 0, "Wade", 0, 1);
										if (func_120(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_309 = 1;
										}
									}
								}
							}
						}
						else if (func_119(71) == 0)
						{
							if (iLocal_305 == 0)
							{
								if (!func_114())
								{
									if (!unk_0x9E123D5FF2973C60())
									{
										func_118("DP_HELP4", -1);
										iLocal_305 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_314, 2f, 2f, 2f, 1, 1, 0))
					{
					}
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (!unk_0x14E01C4EC4170496(iLocal_48) && unk_0x71427D1CF2654C68(iLocal_48))
						{
							func_117(1, 600);
							unk_0x2DE9FDD822EE641B(8f, 5f, 4);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
					}
				}
			}
		}
	}
}

void func_117(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55830)
	{
	}
	Global_55830 = 0;
	if (bParam0)
	{
		Global_55831 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67917)
		{
			if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67918[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67917)
		{
			if (Global_67918[iVar0 /*9*/] > 0)
			{
				if (Global_67918[iVar0 /*9*/] == iParam1)
				{
					Global_67918[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_118(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_119(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

bool func_120(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_130(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam5 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_121(sParam3, iParam4, bParam8);
}

int func_121(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x660E8E7836E95077(0);
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
					func_129();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_128(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_127();
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_126();
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_125())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
				}
			}
			if (func_124())
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_123();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_122();
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
		func_129();
	}
	return 0;
}

void func_122()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_123()
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_124()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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

void func_126()
{
	if (func_22(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		Global_14443 = func_20();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_127()
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

bool func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_129()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_130(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_131(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

bool func_132(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_130(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_121(sParam2, iParam3, 0);
}

void func_133(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_134(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0x6A7B0D91FD88D9EE("FinaleC2", unk_0x6AF6B39BFDB53CB5()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91528)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_197(1);
		if (iParam0 <= Global_91528)
		{
		}
		iVar1 = func_195(unk_0x6AF6B39BFDB53CB5(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_193(iVar1);
			cVar3 = { Global_82612[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_101700.f_8044.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x7EAB099DE46EBC94(&cVar3, uVar2, Global_91528, iParam0);
		}
		else
		{
			iVar5 = func_188(unk_0x6AF6B39BFDB53CB5(), 1);
			if (iVar5 != -1)
			{
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_187(iVar5)}, 4);
				unk_0x7EAB099DE46EBC94(&uVar6, 0, Global_91528, iParam0);
			}
			else
			{
				iVar10 = func_186(&(Global_91491.f_3));
				if (iVar10 > -1)
				{
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_135(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x6A7B0D91FD88D9EE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91528)
	{
	}
}

void func_135(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_136(&Global_96040, unk_0x6AF6B39BFDB53CB5(), iParam0, uParam1, iParam3, iParam2);
}

void func_136(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_20();
	uParam0->f_1 = func_175();
	unk_0x4281819BD66C66CF(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		func_160(&(uParam0->f_2305), 0);
		func_159(unk_0x17B5CC8A8615737D());
		func_153(unk_0x17B5CC8A8615737D(), 0);
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_152())
		{
			func_145(unk_0x17B5CC8A8615737D(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x7FE4F330D3D74809(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x7FE4F330D3D74809(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x7FE4F330D3D74809(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_138(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_137(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_137(var uParam0)
{
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_138(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x17B5CC8A8615737D();
	}
	if (unk_0x23E9113C762466ED(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_144(iParam2, &iVar0, iParam3, iParam5))
	{
		func_139(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("skylift")) && unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
			{
				func_139(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_139(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x45CD66F0A131E554(iParam2, 0))
	{
		func_141(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_140(iParam2))
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

int func_140(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91491.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_141(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_143(iParam1, 145, 0);
	uParam0->f_11 = func_59(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_142(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x57240623C1BC6E88(iParam1, 1) };
		uParam0->f_6 = unk_0x638527C9799F2AE4(iParam1);
		uParam0->f_3 = { unk_0xACA666C39EA49E82(iParam1) };
		if (unk_0x70A9F320A34FAC28(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if (iParam0 == Global_68531.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0])
				{
					if (iParam2 == 0 || unk_0x0324EEB10F81965F(iParam0) == func_70(iParam1, iParam2))
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

int func_144(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			if (iParam0 == unk_0x17B5CC8A8615737D())
			{
				*uParam1 = unk_0x0C00E753D78DEA62();
			}
			else
			{
				*uParam1 = unk_0x60604E51E30D25B8(iParam0, 1);
			}
			if (unk_0x23E9113C762466ED(*uParam1))
			{
				if (unk_0x45CD66F0A131E554(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(*uParam1, 1), unk_0x57240623C1BC6E88(iParam0, 1), 1) < 100f)
					{
						if (unk_0x5AF6E4F22F4B49C3(*uParam1, joaat("taxi")))
						{
							if (unk_0x17206B315923243C(*uParam1, -1, 0) != iParam0 && unk_0x17206B315923243C(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_60(*uParam1, func_20(), 1))
						{
							sVar0 = unk_0x6AF6B39BFDB53CB5();
							if (!unk_0x6A7B0D91FD88D9EE(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xFD0FE723227D5AB6(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x44748DA5CF34DA5E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x12D059B73664565A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5AF6E4F22F4B49C3(*uParam1, joaat("blimp")))
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

void func_145(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_151(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_150(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_23(iVar0))
		{
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x63C468D583002D23() && unk_0x0324EEB10F81965F(iParam0) == unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			if (func_149(161, -1))
			{
				uParam1->f_59 = func_146(2045, Global_69521, 0);
			}
			else
			{
				uParam1->f_59 = func_146(747, Global_69521, 0);
			}
			uParam1->f_60 = func_146(748, Global_69521, 0);
			uParam1->f_61 = func_146(749, Global_69521, 0);
		}
		if (unk_0x63C468D583002D23() && iParam0 == unk_0x17B5CC8A8615737D())
		{
			if (func_149(161, -1))
			{
				uParam1->f_59 = func_146(2045, Global_69521, 0);
			}
			else
			{
				uParam1->f_59 = func_146(747, Global_69521, 0);
			}
		}
	}
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_147(iParam1)];
	if (unk_0x7FE4F330D3D74809(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_147(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_148();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

var func_148()
{
	return Global_1312735;
}

int func_149(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_147(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_150(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB50239D338267F95(iParam0, iParam1);
		*uParam3 = unk_0xBE372F0FD574ACB1(iParam0, iParam1);
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
				if (unk_0x697A7F59AC98FE0F(iParam0) && unk_0x5FC915A947F19410(iParam0) != -1)
				{
					*uParam2 = unk_0x5FC915A947F19410(iParam0);
					*uParam3 = unk_0x9015F42528E39793(iParam0);
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

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC72E4A160D2D5004(iParam0, iParam1);
		*uParam3 = unk_0x9E9290608A6EFB37(iParam0, iParam1);
		*uParam4 = unk_0x15D0CB3C99F0F8B0(iParam0, iParam1);
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

int func_152()
{
	func_21();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_153(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0xCA41A00932714525(iParam0))
	{
		if (iParam0 == unk_0x17B5CC8A8615737D())
		{
			func_154(iParam0, &(Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xB41415484B2631D9(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x819A98CCFE5FACD6();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xD8B4ACC0B5F2BA05(unk_0xBE369BE1BC57A796(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x731753D8494ABECD(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x731753D8494ABECD(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x731753D8494ABECD(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_154(int iParam0, var uParam1)
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
	
	if (!unk_0xCA41A00932714525(iParam0))
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
			iVar3 = func_158(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x937B062731EC9E7B(iParam0, func_158(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x034EB52F6D89BFA0(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xEB79FECD9022AAF0(&(Var4.f_2), (20 + unk_0x56D81513B2CCEDD3(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEC52867E1145BD99(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_156(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xF848952075C9EC8A(iParam0, Var4.f_0, iVar2))
						{
							unk_0xEB79FECD9022AAF0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_156(Var4.f_0, iVar1);
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
		iVar8 = unk_0xDD29471727F67A12();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x7DF39E88C502C09C(iVar7, &Var9) && !func_155(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x5D46F50AE982AB28(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x034EB52F6D89BFA0(iParam0, Var4.f_0);
					if (unk_0x509A3191A6C4EB38(iParam0, Var4.f_0, 0))
					{
						unk_0xEB79FECD9022AAF0(&(Var4.f_2), (20 + unk_0x56D81513B2CCEDD3(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xEB79FECD9022AAF0(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEC52867E1145BD99(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x7DCA7EA2B13F77EF(iVar7))
					{
						if (unk_0x94C9039E2251B8A8(iVar7, iVar1, &Var48))
						{
							if (unk_0xF848952075C9EC8A(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xEB79FECD9022AAF0(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x509A3191A6C4EB38(iParam0, Var4.f_0, 0))
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

int func_155(int iParam0)
{
	if (unk_0x63C468D583002D23())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
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
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
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
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
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
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
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
				
				case 4:
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
				iVar1 = func_157(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x7DCA7EA2B13F77EF(iVar1))
					{
						if (unk_0x94C9039E2251B8A8(iVar1, iParam1, &Var41))
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

int func_157(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDD29471727F67A12();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x7DF39E88C502C09C(iVar0, uParam1))
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

int func_158(int iParam0)
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

void func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0xCA41A00932714525(iParam0))
	{
		Global_101700.f_2095.f_539.f_294[iVar0] = unk_0x55C72967EFB9CECF(iParam0);
	}
}

void func_160(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	uParam0->f_3 = unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D());
	uParam0->f_5 = unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D());
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		uParam0->f_4 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
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
	else if (unk_0x82F1A060D8F4583B(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0xCA0D2B42E97CB506(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_163(&iVar0))
		{
			if (func_162(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_161(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_161(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB0A41EC77A49B189(Param0))
	{
		iVar0 = unk_0xCA0D2B42E97CB506(Param4, sParam3);
		if (!unk_0x623BDE1B17A9D9E3(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x26CBF9EAAC681B92(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_162(int iParam0, var uParam1, var uParam2)
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
	}
	return !func_8(*uParam1, 0f, 0f, 0f, 0);
}

int func_163(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_174())
		{
			*uParam0 = func_169(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 6, -1, 0, 1, -1);
			if (func_168(*uParam0) && !func_164(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_165(iParam0, 0, 1);
}

int func_165(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_167() == 0)
		{
			return unk_0x48B8265059381CD0(func_146(func_166(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_166(int iParam0)
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
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_167()
{
	return Global_25190;
}

int func_168(int iParam0)
{
	return func_165(iParam0, 5, 1);
}

int func_169(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45)
	{
		if (iParam3 == 6 || iParam3 == func_173(iVar0))
		{
			if (!bParam5 || func_172(iVar0))
			{
				fVar1 = unk_0x3DC4639D5F23DEA2(Param0, func_170(iVar0, 0), 1);
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

Vector3 func_170(int iParam0, bool bParam1)
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
			return func_171(Global_93004);
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_171(int iParam0)
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
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_172(int iParam0)
{
	return func_165(iParam0, 0, 0);
}

int func_173(int iParam0)
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
	}
	return 6;
}

bool func_174()
{
	return Global_91543.f_303 > 0;
}

var func_175()
{
	var uVar0;
	
	func_185(&uVar0, unk_0x0956E4296D9CC40A());
	func_184(&uVar0, unk_0x32883EAC7DC86C40());
	func_183(&uVar0, unk_0x80BC37C67CB292E5());
	func_178(&uVar0, unk_0x202B089E6328ABFA());
	func_177(&uVar0, unk_0xCD8338A83E1BCC14());
	func_176(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

void func_176(var uParam0, int iParam1)
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

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_178(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_182(*uParam0);
	iVar1 = func_180(*uParam0);
	if (iParam1 < 1 || iParam1 > func_179(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_179(int iParam0, int iParam1)
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

var func_180(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_181(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_181(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_182(var uParam0)
{
	return uParam0 & 15;
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_186(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_187(int iParam0)
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

int func_188(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x765F5B806B517045(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_189(iVar0, &sVar1);
		if (unk_0x765F5B806B517045(sVar1) == iVar33)
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

void func_189(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_190(uParam1, "Abigail1", func_192(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 1:
			func_190(uParam1, "Abigail2", func_192(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 2:
			func_190(uParam1, "Barry1", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 3:
			func_190(uParam1, "Barry2", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 4:
			func_190(uParam1, "Barry3", func_192(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 5:
			func_190(uParam1, "Barry3A", func_192(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 6:
			func_190(uParam1, "Barry3C", func_192(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 7:
			func_190(uParam1, "Barry4", func_192(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_191(iParam0), 0, 0);
			break;
		
		case 8:
			func_190(uParam1, "Dreyfuss1", func_192(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 9:
			func_190(uParam1, "Epsilon1", func_192(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 10:
			func_190(uParam1, "Epsilon2", func_192(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 11:
			func_190(uParam1, "Epsilon3", func_192(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 12:
			func_190(uParam1, "Epsilon4", func_192(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 13:
			func_190(uParam1, "Epsilon5", func_192(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 14:
			func_190(uParam1, "Epsilon6", func_192(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 15:
			func_190(uParam1, "Epsilon7", func_192(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 16:
			func_190(uParam1, "Epsilon8", func_192(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 17:
			func_190(uParam1, "Extreme1", func_192(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 18:
			func_190(uParam1, "Extreme2", func_192(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 19:
			func_190(uParam1, "Extreme3", func_192(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 20:
			func_190(uParam1, "Extreme4", func_192(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 21:
			func_190(uParam1, "Fanatic1", func_192(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 22:
			func_190(uParam1, "Fanatic2", func_192(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 23:
			func_190(uParam1, "Fanatic3", func_192(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_191(iParam0), 0, 1);
			break;
		
		case 24:
			func_190(uParam1, "Hao1", func_192(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_191(iParam0), 0, 1);
			break;
		
		case 25:
			func_190(uParam1, "Hunting1", func_192(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 26:
			func_190(uParam1, "Hunting2", func_192(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 27:
			func_190(uParam1, "Josh1", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 28:
			func_190(uParam1, "Josh2", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 29:
			func_190(uParam1, "Josh3", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 30:
			func_190(uParam1, "Josh4", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 31:
			func_190(uParam1, "Maude1", func_192(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 32:
			func_190(uParam1, "Minute1", func_192(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 33:
			func_190(uParam1, "Minute2", func_192(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 34:
			func_190(uParam1, "Minute3", func_192(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 35:
			func_190(uParam1, "MrsPhilips1", func_192(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 36:
			func_190(uParam1, "MrsPhilips2", func_192(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 37:
			func_190(uParam1, "Nigel1", func_192(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 38:
			func_190(uParam1, "Nigel1A", func_192(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 39:
			func_190(uParam1, "Nigel1B", func_192(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 40:
			func_190(uParam1, "Nigel1C", func_192(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 41:
			func_190(uParam1, "Nigel1D", func_192(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 42:
			func_190(uParam1, "Nigel2", func_192(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 43:
			func_190(uParam1, "Nigel3", func_192(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 44:
			func_190(uParam1, "Omega1", func_192(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 45:
			func_190(uParam1, "Omega2", func_192(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 46:
			func_190(uParam1, "Paparazzo1", func_192(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 47:
			func_190(uParam1, "Paparazzo2", func_192(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 48:
			func_190(uParam1, "Paparazzo3", func_192(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 49:
			func_190(uParam1, "Paparazzo3A", func_192(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 50:
			func_190(uParam1, "Paparazzo3B", func_192(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 51:
			func_190(uParam1, "Paparazzo4", func_192(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 52:
			func_190(uParam1, "Rampage1", func_192(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 54:
			func_190(uParam1, "Rampage3", func_192(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 55:
			func_190(uParam1, "Rampage4", func_192(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 56:
			func_190(uParam1, "Rampage5", func_192(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 53:
			func_190(uParam1, "Rampage2", func_192(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 57:
			func_190(uParam1, "TheLastOne", func_192(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 58:
			func_190(uParam1, "Tonya1", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 59:
			func_190(uParam1, "Tonya2", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 60:
			func_190(uParam1, "Tonya3", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 61:
			func_190(uParam1, "Tonya4", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 62:
			func_190(uParam1, "Tonya5", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_190(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_191(int iParam0)
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

struct<2> func_192(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_187(iParam0) };
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_194(Global_101700.f_8044.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_194(Global_101700.f_8044.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_194(Global_101700.f_8044.f_99.f_205[11]);
			break;
		
		case 90:
			return func_194(Global_101700.f_8044.f_99.f_205[7]);
			break;
		
		case 93:
			return func_194(Global_101700.f_8044.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_194(int iParam0)
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

int func_195(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x765F5B806B517045(sParam0);
	iVar1 = func_196(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0)
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

void func_197(bool bParam0)
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
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!bParam0)
		{
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_198(int iParam0, int iParam1, int iParam2)
{
	if (func_244() && func_35())
	{
		while (Global_91486 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD278B72A700DC2DC(0);
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x76956C8D11F030FD(unk_0x17B5CC8A8615737D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x23E9113C762466ED(iParam0))
				{
					if (unk_0x45CD66F0A131E554(iParam0, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam0, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iParam0, iParam1);
							unk_0x503F20CB07C55470(0f, 1065353216);
							unk_0xBA7CD73403732191(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			}
		}
		unk_0xACBDD7C9D459A6D9();
		func_199(0);
	}
}

void func_199(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 13);
	}
}

void func_200()
{
	if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_314, 1) < 500f)
	{
		if (iLocal_214 == 0)
		{
			if (!unk_0x23E9113C762466ED(iLocal_51[0]))
			{
				unk_0xE1324F59713746FA(joaat("sandking"));
				if (unk_0x9F746898F7881612(joaat("sandking")))
				{
					iLocal_51[0] = unk_0x692A2891A2BA7352(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1);
					unk_0x98F0FA127445E343(iLocal_51[0], 1);
					unk_0x924CDE68BA2ED3BA(joaat("sandking"));
				}
			}
			if (unk_0x23E9113C762466ED(iLocal_51[0]))
			{
				iLocal_214 = 1;
			}
		}
	}
	else if (iLocal_214 == 1)
	{
		if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_314, 1) > 550f)
		{
			if (unk_0x23E9113C762466ED(iLocal_51[0]))
			{
				unk_0x813865264334331D(&(iLocal_51[0]));
			}
			iLocal_214 = 0;
		}
	}
}

void func_201()
{
	if (iLocal_175 > 0)
	{
		func_108();
		func_207();
		func_200();
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) != 4)
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 4, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
		}
		func_206();
		func_205();
		iLocal_176 = 0;
		while (iLocal_176 <= 12)
		{
			if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
			{
				func_204(uLocal_33[iLocal_176], &(Local_70[iLocal_176 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
			}
			else
			{
				func_107(&(Local_70[iLocal_176 /*8*/]));
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
		iLocal_183 = unk_0x94E3E074F38DF86C();
		iLocal_188 = unk_0x94E3E074F38DF86C();
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			unk_0x98F0FA127445E343(iLocal_48, 0);
		}
		func_134(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (unk_0x25BD4C26D84038CD())
		{
			if (!func_35())
			{
				unk_0x3FC7E3584ABA5F08(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
			}
			func_198(iLocal_48, -1, 1);
		}
		if (!unk_0x30F06AB0772AFB80())
		{
			unk_0xC7845898207D067F(800);
		}
		if (!unk_0x4E1850F5FF023071("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x4A5D4AD0FE6ACF73("DH_P_2B_ENTER_CHOPPER");
		}
		if (!unk_0x4E1850F5FF023071("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			unk_0x4A5D4AD0FE6ACF73("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_203(602, 0);
		unk_0xB80E9DA2EC792EE4(0);
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				func_202(iLocal_48, -1);
			}
		}
		unk_0x2DE9FDD822EE641B(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (iLocal_206[0] == 1)
		{
			if (unk_0xA3794949321E107C(uLocal_63[0]))
			{
				unk_0x020DF7300725ECAB(&(uLocal_63[0]));
			}
			if (unk_0x23E9113C762466ED(iLocal_49[0]))
			{
				unk_0x6741124666983482(iLocal_49[0], 0);
			}
			if (unk_0x4E1850F5FF023071("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				unk_0xB8CAC5F3774894A1("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_117(1, 602);
			func_203(600, 0);
			if (unk_0x23E9113C762466ED(iLocal_48))
			{
				if (unk_0x45CD66F0A131E554(iLocal_48, 0))
				{
					if (unk_0x70A9F320A34FAC28(iLocal_48, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
						{
							unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
							unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
						else
						{
							unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
							unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
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
			if (unk_0x23E9113C762466ED(iLocal_48))
			{
				if (unk_0x45CD66F0A131E554(iLocal_48, 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
					{
						if (unk_0x94E3E074F38DF86C() > iLocal_183 + 10000)
						{
							if (!unk_0x75342B3CD0FB5275())
							{
								func_113("DP_GOD5", 7500, 1);
								iLocal_209 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_202(int iParam0, int iParam1)
{
	Global_55833 = iParam0;
	Global_55834 = iParam1;
}

void func_203(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55832 = iParam0;
	if (!Global_55830)
	{
		Global_55830 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67917)
		{
			if (Global_67918[iVar0 /*9*/] == iParam0)
			{
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_204(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x592069F95C314814();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0x708B478711FA7649(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x53D9FD8A3418C8E9(iParam0, 1);
			}
			else
			{
				unk_0x20DA9B5EBDD69183(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E0E4A8CBE4A8769(iParam0, iParam2);
			unk_0xC49F45795B7AFEEA(iParam0, fParam6);
			if (unk_0xA3794949321E107C(*uParam1))
			{
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x8F033B85B9F09390(iParam0, iParam9);
		}
		unk_0xB9B7F383FB2453E6(iParam0, iParam4);
		unk_0xB04373FE92ECD69C(iParam0, iParam5);
		*uParam1 = unk_0x4DFA608A26DB4230(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xCC930AE12D020496(*uParam1, iParam8);
				}
				unk_0x457AECF7F7E33610("STRING");
				if (bParam10)
				{
					unk_0xBAB00B98D1E61BEE(iParam7);
				}
				else
				{
					unk_0x34D84D73B5DF8E80(iParam7);
				}
				unk_0xB58BBC88882D90A6(*uParam1);
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!unk_0x48B8265059381CD0(uParam1->f_6, 2))
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!unk_0x9C88EB7B70229335(iParam7))
				{
					unk_0x457AECF7F7E33610("STRING");
					if (bParam10)
					{
						unk_0xBAB00B98D1E61BEE(iParam7);
					}
					else
					{
						unk_0x34D84D73B5DF8E80(iParam7);
					}
					unk_0xB58BBC88882D90A6(*uParam1);
				}
				unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			uParam1->f_1 = unk_0x3329BF35D4BD3992(iParam0);
			if (!unk_0x48B8265059381CD0(uParam1->f_6, 3))
			{
				if (unk_0xA3794949321E107C(uParam1->f_1))
				{
					unk_0x84DAB725836026C6(uParam1->f_1, 7);
					unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA3794949321E107C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x21E7933CCC7B3724(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_205()
{
	iLocal_53 = unk_0xCE499B0B1C2F5684(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 300f, joaat("lazer"), 4);
	iLocal_54 = unk_0xCE499B0B1C2F5684(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 300f, joaat("lazer"), 16386);
	if (unk_0x23E9113C762466ED(iLocal_53) && unk_0x14E01C4EC4170496(iLocal_53))
	{
		if (!unk_0xA3794949321E107C(uLocal_65))
		{
			uLocal_65 = unk_0xF1FE04D602EA392E(iLocal_53);
			unk_0xB8F5F7438C07CC5E(uLocal_65, false);
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_54) && unk_0x14E01C4EC4170496(iLocal_54))
	{
		if (!unk_0xA3794949321E107C(uLocal_66))
		{
			uLocal_66 = unk_0xF1FE04D602EA392E(iLocal_54);
			unk_0xB8F5F7438C07CC5E(uLocal_66, false);
		}
	}
}

void func_206()
{
	if (iLocal_28 == 3)
	{
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					Local_320 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
					if (unk_0x23E9113C762466ED(iLocal_49[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
						{
							if (unk_0x23E9113C762466ED(uLocal_31[0]))
							{
								if (!unk_0xCA41A00932714525(uLocal_31[0]))
								{
									if (func_2(unk_0x17B5CC8A8615737D(), uLocal_31[0], 1) < 600f)
									{
										if (unk_0x3DC4639D5F23DEA2(Local_320, -75.8f, -819.9f, 326f, 1) > 1600f && unk_0x3DC4639D5F23DEA2(Local_320, -2159f, 3067f, 33f, 1) < 1000f)
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
													if (!func_114())
													{
														if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
														{
															func_133(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_133(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
															if (func_132(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
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
											if (unk_0x3DC4639D5F23DEA2(Local_320, -75.8f, -819.9f, 326f, 1) < 1600f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_215[0] = 1;
													iLocal_30 = 3;
												}
												if (iLocal_273 == 0)
												{
													if (!func_114())
													{
														if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
														{
															func_133(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_133(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
															if (func_132(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_273 = 1;
															}
														}
													}
												}
											}
											if (unk_0x3DC4639D5F23DEA2(Local_320, -2159f, 3067f, 33f, 1) > 1000f)
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
				else if (unk_0x3DC4639D5F23DEA2(Local_320, -75.8f, -819.9f, 326f, 1) > 1600f)
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
							if (!func_114())
							{
								if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
								{
									func_133(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
									func_133(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
									if (func_132(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
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
						if (!func_114())
						{
							if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
							{
								func_133(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
								func_133(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
								if (func_132(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
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
			if (unk_0x23E9113C762466ED(iLocal_49[0]))
			{
				if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
				{
					if (unk_0x23E9113C762466ED(uLocal_31[0]))
					{
						if (!unk_0xCA41A00932714525(uLocal_31[0]))
						{
							if (func_2(unk_0x17B5CC8A8615737D(), uLocal_31[0], 1) < 200f)
							{
								Local_317 = { unk_0x57240623C1BC6E88(iLocal_49[0], 1) };
								unk_0x15848523A8959DBC(uLocal_31[0]);
								unk_0x6DE4D679A0565F8A(uLocal_31[0], Local_317, 10f, 0, 0);
								unk_0x97B2F6B96CC03922(uLocal_31[0], 250f, 0);
								iLocal_202[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_28 == 3)
		{
			if (unk_0x23E9113C762466ED(iLocal_49[0]))
			{
				if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
				{
					if (unk_0x23E9113C762466ED(uLocal_31[0]))
					{
						if (!unk_0xCA41A00932714525(uLocal_31[0]))
						{
							if (!unk_0xA3794949321E107C(uLocal_63[0]))
							{
								uLocal_63[0] = func_112(uLocal_31[0], 1, 0);
							}
							Local_317 = { unk_0x57240623C1BC6E88(iLocal_49[0], 1) };
							unk_0x15848523A8959DBC(uLocal_31[0]);
							unk_0x86DD54980FE55567(&uLocal_572);
							if (!unk_0x2315BB1606BC3DC3(uLocal_31[0], iLocal_49[0], 0))
							{
								unk_0x3AD5401AC8DD9226(0, iLocal_49[0], 20000, -1, 1073741824, 1, 0);
							}
							unk_0xEBB24586B2E08B0B(0, iLocal_49[0], 0, 0, Local_317.f_0, Local_317.f_1, (Local_317.f_2 + 20f), 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							unk_0xEBB24586B2E08B0B(0, iLocal_49[0], 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_572);
							unk_0x00E85C3B3BD34B10(uLocal_31[0], uLocal_572);
							unk_0x08377FB2AE4C6899(&uLocal_572);
							iLocal_202[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_28 == 3)
	{
		if (unk_0x23E9113C762466ED(iLocal_49[0]))
		{
			if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
			{
				if (unk_0x23E9113C762466ED(uLocal_31[0]))
				{
					if (!unk_0xCA41A00932714525(uLocal_31[0]))
					{
						if (unk_0x2315BB1606BC3DC3(uLocal_31[0], iLocal_49[0], 0))
						{
							if (unk_0x94E3E074F38DF86C() > (iLocal_188 + 90000))
							{
								if (iLocal_297 == 0)
								{
									unk_0xFA4023BBD5BCB8B5(uLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (unk_0x94E3E074F38DF86C() > iLocal_188 + 10000 && !unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
							{
								if (iLocal_297 == 0)
								{
									unk_0xFA4023BBD5BCB8B5(uLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (iLocal_296 == 0)
							{
								unk_0xFA4023BBD5BCB8B5(uLocal_31[0], 0);
								iLocal_297 = 0;
								iLocal_296 = 1;
							}
							if (func_2(iLocal_49[0], unk_0x17B5CC8A8615737D(), 1) < 300f)
							{
								if (iLocal_299 == 0)
								{
									unk_0x9E087EF1619B5C7B(uLocal_31[0], joaat("vehicle_weapon_space_rocket"));
									unk_0x9CE039D54B14B412(uLocal_31[0], -1857128337);
									iLocal_298 = 0;
									iLocal_299 = 1;
								}
							}
							else if (iLocal_298 == 0)
							{
								unk_0x9E087EF1619B5C7B(uLocal_31[0], joaat("vehicle_weapon_player_buzzard"));
								unk_0x9CE039D54B14B412(uLocal_31[0], 1566631136);
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
			if (unk_0x23E9113C762466ED(iLocal_49[0]))
			{
				if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
				{
					if (unk_0x23E9113C762466ED(uLocal_31[0]))
					{
						if (!unk_0xCA41A00932714525(uLocal_31[0]))
						{
							if (unk_0x2315BB1606BC3DC3(uLocal_31[0], iLocal_49[0], 0))
							{
								unk_0xFA4023BBD5BCB8B5(uLocal_31[0], 0);
								unk_0x9E087EF1619B5C7B(uLocal_31[0], joaat("vehicle_weapon_space_rocket"));
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
					if (unk_0x23E9113C762466ED(iLocal_49[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
						{
							if (unk_0x23E9113C762466ED(uLocal_31[0]))
							{
								if (!unk_0xCA41A00932714525(uLocal_31[0]))
								{
									unk_0xEBB24586B2E08B0B(uLocal_31[0], iLocal_49[0], 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
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
					if (unk_0x23E9113C762466ED(iLocal_49[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
						{
							if (unk_0x23E9113C762466ED(uLocal_31[0]))
							{
								if (!unk_0xCA41A00932714525(uLocal_31[0]))
								{
									unk_0xEBB24586B2E08B0B(uLocal_31[0], iLocal_49[0], 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
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
					if (unk_0x23E9113C762466ED(iLocal_49[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
						{
							if (unk_0x23E9113C762466ED(uLocal_31[0]))
							{
								if (!unk_0xCA41A00932714525(uLocal_31[0]))
								{
									unk_0xEBB24586B2E08B0B(uLocal_31[0], iLocal_49[0], 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
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
					if (unk_0x23E9113C762466ED(iLocal_49[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
						{
							if (unk_0x23E9113C762466ED(uLocal_31[0]))
							{
								if (!unk_0xCA41A00932714525(uLocal_31[0]))
								{
									unk_0xEBB24586B2E08B0B(uLocal_31[0], iLocal_49[0], 0, 0, unk_0x854ED33E6D715648(iLocal_49[0], 20f, 0f, 0f), 4, 10f, 10f, unk_0x638527C9799F2AE4(iLocal_49[0]), unk_0xF2DB717A73826179(unk_0xF36B7776BFB03234(iLocal_49[0], unk_0x57240623C1BC6E88(iLocal_49[0], 1), 1, 1)), 100, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_295 == 0)
				{
					if (unk_0x3DC4639D5F23DEA2(Local_320, -2159f, 3067f, 33f, 1) > 1000f)
					{
						if (unk_0x23E9113C762466ED(iLocal_49[0]))
						{
							if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
							{
								if (unk_0x23E9113C762466ED(uLocal_31[0]))
								{
									if (!unk_0xCA41A00932714525(uLocal_31[0]))
									{
										unk_0xEBB24586B2E08B0B(uLocal_31[0], iLocal_49[0], 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
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
					if (unk_0x23E9113C762466ED(iLocal_49[0]))
					{
						if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
						{
							if (unk_0x23E9113C762466ED(uLocal_31[0]))
							{
								if (!unk_0xCA41A00932714525(uLocal_31[0]))
								{
									unk_0xEBB24586B2E08B0B(uLocal_31[0], iLocal_49[0], 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									iLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (unk_0x23E9113C762466ED(uLocal_31[0]))
	{
		if (unk_0xCA41A00932714525(uLocal_31[0]))
		{
			if (unk_0xA3794949321E107C(uLocal_63[0]))
			{
				unk_0x020DF7300725ECAB(&(uLocal_63[0]));
			}
			iLocal_206[0] = 1;
		}
	}
	else
	{
		if (unk_0xA3794949321E107C(uLocal_63[0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_63[0]));
		}
		iLocal_206[0] = 1;
	}
	if (unk_0x23E9113C762466ED(iLocal_49[0]))
	{
		if (!unk_0x45CD66F0A131E554(iLocal_49[0], 0))
		{
			if (unk_0xA3794949321E107C(uLocal_63[0]))
			{
				unk_0x020DF7300725ECAB(&(uLocal_63[0]));
			}
			iLocal_206[0] = 1;
		}
	}
	else
	{
		if (unk_0xA3794949321E107C(uLocal_63[0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_63[0]));
		}
		iLocal_206[0] = 1;
	}
	if (unk_0x23E9113C762466ED(iLocal_49[0]))
	{
		if (unk_0x45CD66F0A131E554(iLocal_49[0], 0))
		{
			if (unk_0x23E9113C762466ED(uLocal_31[0]))
			{
				if (!unk_0xCA41A00932714525(uLocal_31[0]))
				{
					if (unk_0x2315BB1606BC3DC3(uLocal_31[0], iLocal_49[0], 0))
					{
						if (unk_0xA3794949321E107C(uLocal_63[0]))
						{
							unk_0x00EA14207118EEE2(uLocal_63[0], 1f);
						}
					}
					if (func_2(unk_0x17B5CC8A8615737D(), uLocal_31[0], 1) > 600f)
					{
						if (unk_0xA3794949321E107C(uLocal_63[0]))
						{
							unk_0x020DF7300725ECAB(&(uLocal_63[0]));
						}
						iLocal_206[0] = 1;
					}
				}
			}
		}
	}
	if (unk_0x23E9113C762466ED(uLocal_31[0]))
	{
		if (!unk_0xCA41A00932714525(uLocal_31[0]))
		{
			if (unk_0xA77EE6C138A588EB(uLocal_31[0]))
			{
				unk_0x15848523A8959DBC(uLocal_31[0]);
				unk_0x4B04B4FAE554FA03(uLocal_31[0], 0);
				if (unk_0xA3794949321E107C(uLocal_63[0]))
				{
					unk_0x020DF7300725ECAB(&(uLocal_63[0]));
				}
				iLocal_206[0] = 1;
			}
		}
	}
}

void func_207()
{
	if (iLocal_210 == 0)
	{
		if ((((func_208(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 3, 0, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_210 = 1;
		}
	}
	if (iLocal_210 == 1)
	{
		if ((((!func_208(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 3, 0, 0) && !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) && !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) && !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) && !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_210 = 0;
		}
	}
	if (iLocal_201 == 1)
	{
		if (((iLocal_210 == 1 || iLocal_289 == 1) || iLocal_302 == 1) || iLocal_211 == 1)
		{
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) != 4)
			{
				unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 4, 0);
				unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			}
			iLocal_176 = 0;
			while (iLocal_176 <= 12)
			{
				if (unk_0x23E9113C762466ED(uLocal_33[iLocal_176]))
				{
					if (!unk_0xCA41A00932714525(uLocal_33[iLocal_176]))
					{
						if (unk_0x23E9113C762466ED(iLocal_48))
						{
							if (unk_0x45CD66F0A131E554(iLocal_48, 0))
							{
								if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0) || iLocal_212 == 1)
								{
									if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_176], 1) < 39f)
									{
										if (iLocal_217[iLocal_176] == 0)
										{
											unk_0x15848523A8959DBC(uLocal_33[iLocal_176]);
											unk_0x6DE4D679A0565F8A(uLocal_33[iLocal_176], unk_0x57240623C1BC6E88(uLocal_33[iLocal_176], 1), 50f, 0, 0);
											unk_0x7DD7196E1A0C1D43(uLocal_33[iLocal_176], unk_0x17B5CC8A8615737D(), 0, 16);
											unk_0xC96275575DC981A9(uLocal_33[iLocal_176], 51, 1);
											unk_0xC96275575DC981A9(uLocal_33[iLocal_176], 43, 1);
											iLocal_231[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 1;
										}
									}
									else if (iLocal_231[iLocal_176] == 0)
									{
										unk_0x15848523A8959DBC(uLocal_33[iLocal_176]);
										unk_0x86DD54980FE55567(&uLocal_572);
										unk_0x084522380FECC554(0, unk_0x57240623C1BC6E88(iLocal_48, 1), 2f, -1, 20f, 0, 1193033728);
										unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0x007AE2AA9E15FA7B(uLocal_572);
										unk_0x00E85C3B3BD34B10(uLocal_33[iLocal_176], uLocal_572);
										unk_0x08377FB2AE4C6899(&uLocal_572);
										iLocal_245[iLocal_176] = 0;
										iLocal_259[iLocal_176] = 0;
										iLocal_217[iLocal_176] = 0;
										iLocal_231[iLocal_176] = 1;
									}
								}
								else
								{
									if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_176], 1) < 39f)
									{
										if (iLocal_245[iLocal_176] == 0)
										{
											unk_0x15848523A8959DBC(uLocal_33[iLocal_176]);
											unk_0x6DE4D679A0565F8A(uLocal_33[iLocal_176], unk_0x57240623C1BC6E88(uLocal_33[iLocal_176], 1), 50f, 0, 0);
											unk_0x7DD7196E1A0C1D43(uLocal_33[iLocal_176], unk_0x17B5CC8A8615737D(), 0, 16);
											unk_0xC96275575DC981A9(uLocal_33[iLocal_176], 51, 1);
											unk_0xC96275575DC981A9(uLocal_33[iLocal_176], 43, 1);
											iLocal_231[iLocal_176] = 0;
											iLocal_259[iLocal_176] = 0;
											iLocal_217[iLocal_176] = 0;
											iLocal_245[iLocal_176] = 1;
										}
									}
									if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_176], 1) > 41f && func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_176], 1) < 400f)
									{
										if (iLocal_259[iLocal_176] == 0)
										{
											iLocal_195 = unk_0x0E29C61F26D96FDB(0, 4);
											unk_0x15848523A8959DBC(uLocal_33[iLocal_176]);
											unk_0x6DE4D679A0565F8A(uLocal_33[iLocal_176], unk_0x57240623C1BC6E88(uLocal_33[iLocal_176], 1), 50f, 0, 0);
											unk_0x86DD54980FE55567(&uLocal_572);
											if (iLocal_195 == 0)
											{
												unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_195 == 1)
											{
												unk_0x3C1C089273A382C6(0, 500);
												unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_195 == 2)
											{
												unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_195 == 3)
											{
												unk_0x3C1C089273A382C6(0, 500);
												unk_0x834EF3BF2E6A8D29(0, unk_0x17B5CC8A8615737D(), -1, 25f, 3f, 1073741824, 0);
											}
											unk_0x007AE2AA9E15FA7B(uLocal_572);
											unk_0x00E85C3B3BD34B10(uLocal_33[iLocal_176], uLocal_572);
											unk_0x08377FB2AE4C6899(&uLocal_572);
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
				if (unk_0x23E9113C762466ED(uLocal_33[iLocal_193]))
				{
					if (!unk_0xCA41A00932714525(uLocal_33[iLocal_193]))
					{
						if (func_2(uLocal_33[iLocal_193], unk_0x17B5CC8A8615737D(), 1) < 25f)
						{
							if (iLocal_292[iLocal_193] == 0)
							{
								if (!unk_0x1DCFA79E268F3EE5(uLocal_33[iLocal_193]))
								{
									unk_0xBC8C26E1CC191108(uLocal_33[iLocal_193]);
								}
								else
								{
									unk_0x15848523A8959DBC(uLocal_33[iLocal_193]);
								}
								unk_0xC62C6BBB860531B7(uLocal_33[iLocal_193], unk_0x17B5CC8A8615737D(), -1, 0);
								iLocal_292[iLocal_193] = 1;
							}
							if (iLocal_303 == 1)
							{
								if (unk_0x94E3E074F38DF86C() > iLocal_191 + 20000)
								{
									iLocal_302 = 1;
								}
							}
						}
						else if (func_2(uLocal_33[iLocal_193], unk_0x17B5CC8A8615737D(), 1) > 30f)
						{
							if (iLocal_292[iLocal_193] == 1)
							{
								if (!unk_0x1DCFA79E268F3EE5(uLocal_33[iLocal_193]))
								{
									unk_0xBC8C26E1CC191108(uLocal_33[iLocal_193]);
								}
								else
								{
									unk_0x15848523A8959DBC(uLocal_33[iLocal_193]);
								}
								unk_0xC62C6BBB860531B7(uLocal_33[iLocal_193], unk_0x17B5CC8A8615737D(), 1, 0);
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

int func_208(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
		if (unk_0x3D559A6AF62756C4(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_209()
{
	if (iLocal_175 > 0)
	{
		func_108();
		func_207();
		func_206();
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
		unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
		unk_0x9A66D28428C3E71C("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_182 = unk_0x94E3E074F38DF86C();
		unk_0xD90CB3CF9A40791C(joaat("lazer"), 1);
		unk_0xE1324F59713746FA(joaat("s_m_y_marine_01"));
		unk_0xE1324F59713746FA(joaat("s_m_m_pilot_02"));
		if (!unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x23E9113C762466ED(Global_88321[0]))
			{
				if (unk_0x45CD66F0A131E554(Global_88321[0], 0))
				{
					unk_0xF0F77C99098F999B(Global_88321[0], 1, 1);
					iLocal_48 = Global_88321[0];
					unk_0x476431A44C7D8609(iLocal_48, 0);
					unk_0x4114B83B329702FF(iLocal_48, 1);
					unk_0x924CDE68BA2ED3BA(joaat("cargobob"));
					unk_0xD90CB3CF9A40791C(joaat("cargobob"), 1);
					unk_0x77C1DE484C4249F8(iLocal_48, 0);
					unk_0xF8EDF3B7E8D2CD26(iLocal_48, 1);
					func_92(iLocal_48, 0);
				}
			}
		}
		if (!unk_0x23E9113C762466ED(iLocal_49[0]))
		{
			if (unk_0x23E9113C762466ED(Global_88321[1]))
			{
				if (unk_0x45CD66F0A131E554(Global_88321[1], 0))
				{
					unk_0xF0F77C99098F999B(Global_88321[1], 1, 1);
					iLocal_49[0] = Global_88321[1];
					unk_0x476431A44C7D8609(iLocal_49[0], 1);
					unk_0x4114B83B329702FF(iLocal_49[0], 1);
					unk_0x98F0FA127445E343(iLocal_49[0], 0);
					unk_0xE4190D6FE693F9EC(iLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x4F94FF48185A8B4B(iLocal_49[0], 0);
				}
			}
		}
		if (unk_0x23E9113C762466ED(Global_88321[2]))
		{
			if (unk_0x45CD66F0A131E554(Global_88321[2], 0))
			{
				if (unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(Global_88321[2])))
				{
					unk_0xF0F77C99098F999B(Global_88321[2], 1, 1);
					func_217(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0, 145);
				}
				if (((unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(Global_88321[2])) || unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(Global_88321[2]))) || unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(Global_88321[2]))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(Global_88321[2])))
				{
					unk_0xF0F77C99098F999B(Global_88321[2], 1, 1);
					func_217(1748.05f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
		if (unk_0x23E9113C762466ED(Global_88321.f_9[0]))
		{
			unk_0xF0F77C99098F999B(Global_88321.f_9[0], 1, 1);
			uLocal_33[0] = Global_88321.f_9[0];
		}
		if (unk_0x23E9113C762466ED(Global_88321.f_9[1]))
		{
			unk_0xF0F77C99098F999B(Global_88321.f_9[1], 1, 1);
			uLocal_33[1] = Global_88321.f_9[1];
		}
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			unk_0x98F0FA127445E343(iLocal_48, 0);
		}
		unk_0x589451489CB70B8C("PoliceScannerDisabled", 1);
		if (unk_0x25BD4C26D84038CD())
		{
			if (!func_35())
			{
				unk_0x3FC7E3584ABA5F08(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
			}
			func_198(iLocal_55, -1, 1);
		}
		if (!unk_0x30F06AB0772AFB80())
		{
			unk_0xC7845898207D067F(800);
		}
		func_216(unk_0x17B5CC8A8615737D(), -1);
		func_215(73);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}
	if (iLocal_175 == 1)
	{
		if (unk_0x8F2623409AB194EF("ARMY_GUARD"))
		{
			if (unk_0x678AA675E5FB908B("ARMY_GUARD"))
			{
				unk_0x63AA98F5AB7E3F81("ARMY_GUARD", 0);
			}
		}
		func_89();
		if (iLocal_211 == 0)
		{
			if (unk_0x94E3E074F38DF86C() > iLocal_182 + 3000)
			{
				iLocal_184 = 0;
				while (iLocal_184 <= 12)
				{
					if (unk_0x23E9113C762466ED(uLocal_33[iLocal_184]))
					{
						if (!unk_0xCA41A00932714525(uLocal_33[iLocal_184]))
						{
							if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_184], 1) < 40f)
							{
								if (unk_0xC37168D3A492594E(uLocal_33[iLocal_184], unk_0x17B5CC8A8615737D()))
								{
									if (unk_0x34D81E587C110E92(unk_0x17B5CC8A8615737D()))
									{
										unk_0x6C56935CD477B6CD("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										unk_0x8788F758785FCC5A("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_211 = 1;
									}
									if (iLocal_210 == 1)
									{
										unk_0x6C56935CD477B6CD("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										unk_0x8788F758785FCC5A("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_211 = 1;
									}
									if (iLocal_307 == 0)
									{
										if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !func_214(0))
										{
											if (func_213(unk_0x17B5CC8A8615737D()) != joaat("weapon_unarmed"))
											{
												iLocal_194 = unk_0x94E3E074F38DF86C();
												iLocal_307 = 1;
											}
										}
									}
									else if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !func_214(0))
									{
										if (func_213(unk_0x17B5CC8A8615737D()) != joaat("weapon_unarmed"))
										{
											if (unk_0x94E3E074F38DF86C() > iLocal_194 + 3000)
											{
												unk_0x6C56935CD477B6CD("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
												unk_0x8788F758785FCC5A("AZ_AFB_ALARM_SPEECH", 1, 1);
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
			unk_0xD12BCC85C2F8B1DE();
			unk_0x2DE9FDD822EE641B(5f, 10f, 4);
			func_113("DP_GOD2", 7500, 1);
			iLocal_198 = 1;
		}
		if (iLocal_210 == 1)
		{
			if (!func_212(5))
			{
				func_211(5);
			}
		}
		else if (func_212(5))
		{
			func_210(5);
		}
		if (unk_0x23E9113C762466ED(iLocal_48))
		{
			if (unk_0x45CD66F0A131E554(iLocal_48, 0))
			{
				if (func_2(unk_0x17B5CC8A8615737D(), iLocal_48, 1) < 30f)
				{
					iLocal_212 = 1;
				}
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					unk_0xC1B7B5C6FDC0755B(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute"), -1, 0, 1);
					iLocal_175 = 0;
					unk_0x2DE9FDD822EE641B(10f, 10f, 4);
					iLocal_28 = 3;
				}
			}
		}
	}
}

void func_210(int iParam0)
{
	unk_0x21E7933CCC7B3724(&Global_87679, iParam0);
}

void func_211(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&Global_87679, iParam0);
}

bool func_212(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_87679, iParam0);
}

int func_213(int iParam0)
{
	var uVar0;
	
	unk_0x5CD8291F2C5E0AD1(iParam0, &uVar0, 1);
	return uVar0;
}

int func_214(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0)
{
	if (Global_88746 != -1)
	{
		if (iParam0 == Global_88746)
		{
			Global_88750 = 1;
			return;
		}
	}
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917)
	{
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1)
		{
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_217(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x23E9113C762466ED(Global_93635.f_4))
	{
		if (unk_0x45CD66F0A131E554(Global_93635.f_4, 0))
		{
			if (func_226(24) != Global_93635.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_223(unk_0x57240623C1BC6E88(Global_93635.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_218(Global_93635.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_218(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x23E9113C762466ED(Global_68531.f_484[25]) && unk_0x45CD66F0A131E554(Global_68531.f_484[25], 0))
			{
				if (Global_68531.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x3C6792805E3BEB1B(iParam0) || unk_0x0324EEB10F81965F(iParam0) == joaat("bus")) || unk_0x0324EEB10F81965F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_222(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_8(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x57240623C1BC6E88(iParam0, 1) };
			uParam4 = unk_0x638527C9799F2AE4(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) != joaat("vehicle_gen_controller"))
			{
				Global_69519 = unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5());
			}
		}
		func_220(iParam5, &Var0, Param1, uParam4, func_59(iParam0));
		func_219(iParam5, iParam0, 0);
	}
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_69(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 12) && !unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68531.f_555[0 /*21*/].f_4 != unk_0x0324EEB10F81965F(iParam1))
		{
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0)
	{
		return;
	}
	if (unk_0x23E9113C762466ED(iParam1))
	{
		if (unk_0x45CD66F0A131E554(iParam1, 0))
		{
			if (!unk_0xC26429B504BA534D(iParam1))
			{
				unk_0xF0F77C99098F999B(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101700.f_31389.f_4801 = func_175();
			}
			if (iParam1 != Global_68531.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_226(iParam0);
					if ((unk_0x23E9113C762466ED(iVar0) && unk_0x45CD66F0A131E554(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

void func_220(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_69(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 10))
		{
			func_221(iParam0);
			func_66(uParam1, &(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 11))
			{
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_62(iParam0, 1);
		}
	}
}

void func_221(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_69(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_139[iParam0]))
		{
			unk_0xF0F77C99098F999B(Global_68531.f_139[iParam0], 1, 1);
			unk_0x921CF98C637B0043(&(Global_68531.f_139[iParam0]));
			Global_68531.f_139[iParam0] = 0;
		}
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 13))
		{
			func_62(iParam0, 0);
		}
	}
}

void func_222(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_221(iParam0);
	func_62(iParam0, 0);
}

int func_223(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_224(Param0, iParam3, 1);
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

int func_224(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86862[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86862[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_225(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x3DC4639D5F23DEA2(Param0, Global_86862[iVar0 /*10*/].f_3, 1);
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

bool func_225(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_101700.f_6188[iParam0], 0);
}

int func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

void func_227()
{
	if (iLocal_175 == 0)
	{
		func_231(1, 0);
		func_231(2, 0);
		func_231(7, 0);
		func_231(8, 0);
		func_231(9, 0);
		func_231(10, 0);
		func_231(4, 0);
		func_231(12, 0);
		unk_0x1EF7A8224AE81790("MarineGroupHash", &iLocal_60);
		unk_0xDE574EA7A7A2CAF8(5, iLocal_60, joaat("player"));
		unk_0xDE574EA7A7A2CAF8(5, joaat("army"), joaat("player"));
		unk_0xDE574EA7A7A2CAF8(1, iLocal_60, joaat("army"));
		unk_0xDE574EA7A7A2CAF8(1, joaat("army"), iLocal_60);
		unk_0xDE574EA7A7A2CAF8(1, joaat("COP"), iLocal_60);
		unk_0xDE574EA7A7A2CAF8(1, iLocal_60, joaat("COP"));
		unk_0xDE574EA7A7A2CAF8(1, joaat("COP"), joaat("army"));
		unk_0xDE574EA7A7A2CAF8(1, joaat("army"), joaat("COP"));
		if (func_244())
		{
			if (Global_86001 == 1)
			{
				if (func_230() == 0)
				{
					func_229(Local_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
				if (func_230() == 1)
				{
					func_229(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
				if (func_230() == 2)
				{
					func_228();
				}
			}
			else
			{
				if (func_230() == 0)
				{
					func_229(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 2;
				}
				if (func_230() == 1)
				{
					func_229(Local_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
				if (func_230() == 2)
				{
					func_229(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
			}
		}
		else if (func_27(0))
		{
			func_229(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
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

void func_228()
{
	iLocal_197 = 0;
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(0);
	}
	unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 1747.04f, 3267.456f, 40.246f, 1, 0, 0, 1);
	unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 229.0887f);
	if (unk_0x23E9113C762466ED(iLocal_48))
	{
		unk_0x813865264334331D(&iLocal_48);
	}
	if (!unk_0x23E9113C762466ED(iLocal_48))
	{
		unk_0xE1324F59713746FA(joaat("cargobob"));
		while (!unk_0x9F746898F7881612(joaat("cargobob")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iLocal_48 = unk_0x692A2891A2BA7352(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, 1, 1);
		unk_0xFBD8170293283E41(iLocal_48, 0, 1);
		unk_0xFBD8170293283E41(iLocal_48, 1, 1);
		unk_0xD602D152E57C823D(iLocal_48, 2);
		unk_0xF8EDF3B7E8D2CD26(iLocal_48, 1);
		unk_0x98F0FA127445E343(iLocal_48, 1);
		unk_0x77C1DE484C4249F8(iLocal_48, 0);
		func_92(iLocal_48, 0);
	}
	if (unk_0x25BD4C26D84038CD())
	{
		unk_0x3FC7E3584ABA5F08(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
	}
	unk_0xBA7CD73403732191(0f);
	if (!unk_0x30F06AB0772AFB80())
	{
		unk_0xC7845898207D067F(800);
	}
	while (!unk_0x30F06AB0772AFB80())
	{
		unk_0xC7845898207D067F(800);
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
}

void func_229(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_244())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 2);
		unk_0xD278B72A700DC2DC(1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
		}
		Global_91487 = { Param0 };
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 14);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 24);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 24);
		}
		func_199(1);
	}
}

int func_230()
{
	if (!Global_91491 == 10 && !Global_91491 == 9)
	{
		return 0;
	}
	return Global_91491.f_2;
}

void func_231(int iParam0, bool bParam1)
{
	unk_0xF87040A37FD83B8A(iParam0, !bParam1);
	unk_0xFCBD7340FBF1FE46(iParam0, bParam1);
}

void func_232()
{
	if (!func_244())
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

void func_233()
{
	if (unk_0x23E9113C762466ED(iLocal_48))
	{
		if (unk_0x45CD66F0A131E554(iLocal_48, 0))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iLocal_48))
					{
						if (func_234(unk_0x17B5CC8A8615737D(), iLocal_48) == -1)
						{
							unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
						}
					}
				}
			}
		}
	}
}

int func_234(int iParam0, int iParam1)
{
	if (!unk_0xA929B2923D14E2F8(iParam0, 0) && !unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		if (unk_0x7B816C72877502C5(iParam0, iParam1))
		{
			if (unk_0x17206B315923243C(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x17206B315923243C(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x17206B315923243C(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x17206B315923243C(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_235()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (iLocal_28 == 2 || iLocal_28 == 3)
		{
			if (func_208(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 3, 200, 0) || iLocal_211 == 1)
			{
				unk_0xE90104D9EBFC3619(unk_0xBE369BE1BC57A796());
				unk_0x1B7B205820ED9CE2(unk_0xBE369BE1BC57A796());
			}
		}
		if (iLocal_28 == 4)
		{
			if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) != 0 && unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_311, 1) > 1000f)
			{
				unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
				unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			}
		}
	}
}

void func_236()
{
}

void func_237()
{
	if (iLocal_289 == 0)
	{
		iLocal_185 = 0;
		while (iLocal_185 <= 12)
		{
			if (unk_0x23E9113C762466ED(uLocal_33[iLocal_185]))
			{
				if (!unk_0xCA41A00932714525(uLocal_33[iLocal_185]))
				{
					if (unk_0xC37168D3A492594E(uLocal_33[iLocal_185], unk_0x17B5CC8A8615737D()))
					{
						if (func_2(uLocal_33[iLocal_185], unk_0x17B5CC8A8615737D(), 1) < 40f)
						{
							if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
							{
								iLocal_289 = 1;
							}
						}
						if (func_2(uLocal_33[iLocal_185], unk_0x17B5CC8A8615737D(), 1) < 25f)
						{
							if (func_213(unk_0x17B5CC8A8615737D()) != joaat("weapon_unarmed"))
							{
								if (func_242(uLocal_33[iLocal_185], 6))
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
			func_133(&uLocal_403, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
			iLocal_213 = 1;
		}
	}
	if (iLocal_210 == 0)
	{
		iLocal_192 = 0;
		while (iLocal_192 <= 1)
		{
			if (unk_0x23E9113C762466ED(uLocal_33[iLocal_192]))
			{
				if (!unk_0xCA41A00932714525(uLocal_33[iLocal_192]))
				{
					if (iLocal_290 == 0 && iLocal_291 == 0)
					{
						if (!func_114())
						{
							if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
							{
								if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_192], 1) < 25f)
								{
									if (unk_0xC37168D3A492594E(uLocal_33[iLocal_192], unk_0x17B5CC8A8615737D()))
									{
										if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !func_214(0))
										{
											if (func_213(unk_0x17B5CC8A8615737D()) != joaat("weapon_unarmed"))
											{
												if (unk_0x23E9113C762466ED(uLocal_33[0]))
												{
													if (!unk_0xCA41A00932714525(uLocal_33[0]))
													{
														if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[0], 1) < 30f)
														{
															func_133(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x23E9113C762466ED(uLocal_33[1]))
												{
													if (!unk_0xCA41A00932714525(uLocal_33[1]))
													{
														if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[1], 1) < 30f)
														{
															func_133(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_132(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = unk_0x94E3E074F38DF86C();
													iLocal_186 = unk_0x94E3E074F38DF86C();
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
						if (!func_114())
						{
							if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
							{
								if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_192], 1) < 25f)
								{
									if (unk_0xC37168D3A492594E(uLocal_33[iLocal_192], unk_0x17B5CC8A8615737D()))
									{
										if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
										{
											if (func_213(unk_0x17B5CC8A8615737D()) == joaat("weapon_unarmed") || func_214(0))
											{
												if (unk_0x23E9113C762466ED(uLocal_33[0]))
												{
													if (!unk_0xCA41A00932714525(uLocal_33[0]))
													{
														if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[0], 1) < 30f)
														{
															func_133(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x23E9113C762466ED(uLocal_33[1]))
												{
													if (!unk_0xCA41A00932714525(uLocal_33[1]))
													{
														if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[1], 1) < 30f)
														{
															func_133(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_132(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = unk_0x94E3E074F38DF86C();
													iLocal_186 = unk_0x94E3E074F38DF86C();
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
								if (unk_0x94E3E074F38DF86C() > iLocal_186 + 8000)
								{
									if (!func_114())
									{
										if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
										{
											if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_192], 1) < 25f)
											{
												if (unk_0xC37168D3A492594E(uLocal_33[iLocal_192], unk_0x17B5CC8A8615737D()))
												{
													if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !func_214(0))
													{
														if (func_213(unk_0x17B5CC8A8615737D()) != joaat("weapon_unarmed"))
														{
															if (unk_0x23E9113C762466ED(uLocal_33[0]))
															{
																if (!unk_0xCA41A00932714525(uLocal_33[0]))
																{
																	if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[0], 1) < 30f)
																	{
																		func_133(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (unk_0x23E9113C762466ED(uLocal_33[1]))
															{
																if (!unk_0xCA41A00932714525(uLocal_33[1]))
																{
																	if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[1], 1) < 30f)
																	{
																		func_133(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (func_132(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_186 = unk_0x94E3E074F38DF86C();
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
							if (unk_0x94E3E074F38DF86C() > iLocal_187 + 8000)
							{
								if (!func_114())
								{
									if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
									{
										if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_192], 1) < 25f)
										{
											if (unk_0xC37168D3A492594E(uLocal_33[iLocal_192], unk_0x17B5CC8A8615737D()))
											{
												if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
												{
													if (func_213(unk_0x17B5CC8A8615737D()) == joaat("weapon_unarmed") || func_214(0))
													{
														if (unk_0x23E9113C762466ED(uLocal_33[0]))
														{
															if (!unk_0xCA41A00932714525(uLocal_33[0]))
															{
																if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[0], 1) < 30f)
																{
																	func_133(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (unk_0x23E9113C762466ED(uLocal_33[1]))
														{
															if (!unk_0xCA41A00932714525(uLocal_33[1]))
															{
																if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[1], 1) < 30f)
																{
																	func_133(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_310 == 0)
														{
															if (func_132(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_187 = unk_0x94E3E074F38DF86C();
																iLocal_310 = 1;
															}
														}
														if (iLocal_303 == 0)
														{
															iLocal_191 = unk_0x94E3E074F38DF86C();
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
	if (unk_0x94E3E074F38DF86C() > iLocal_177 + 12000)
	{
		if (iLocal_210 == 1 || iLocal_289 == 1)
		{
			if (!unk_0x75342B3CD0FB5275() || !unk_0xDA5E060432EE0B26())
			{
				if (!func_114())
				{
					if (func_241())
					{
						iLocal_181 = unk_0x0E29C61F26D96FDB(0, 6);
						if (iLocal_181 == 0)
						{
							func_238(func_240(), "OVER_THERE", 9);
							iLocal_177 = unk_0x94E3E074F38DF86C();
						}
						else if (iLocal_181 == 1)
						{
							func_238(func_240(), "PROVOKE_TRESSPASS", 9);
							iLocal_177 = unk_0x94E3E074F38DF86C();
						}
						else if (iLocal_181 == 2)
						{
							func_238(func_240(), "UP_THERE", 9);
							iLocal_177 = unk_0x94E3E074F38DF86C();
						}
						else if (iLocal_181 == 3)
						{
							func_238(func_240(), "suspect_spotted", 9);
							iLocal_177 = unk_0x94E3E074F38DF86C();
						}
						else if (iLocal_181 == 4)
						{
							func_238(func_240(), "GENERIC_INSULT_HIGH", 9);
							iLocal_177 = unk_0x94E3E074F38DF86C();
						}
						else if (iLocal_181 == 5)
						{
							func_238(func_240(), "GENERIC_INSULT_MED", 9);
							iLocal_177 = unk_0x94E3E074F38DF86C();
						}
					}
				}
			}
		}
	}
}

void func_238(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE4C6605BC74297B4(uParam0, sParam1, func_239(iParam2), 1);
}

int func_239(int iParam0)
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

int func_240()
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x4FBC81B313E0458D(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 30f, 0, 1, &iVar0, 0, 1, -1);
	}
	iLocal_179 = 0;
	while (iLocal_179 <= 9)
	{
		if (unk_0x23E9113C762466ED(uLocal_33[iLocal_179]))
		{
			if (!unk_0xCA41A00932714525(uLocal_33[iLocal_179]))
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

int func_241()
{
	iLocal_180 = 0;
	while (iLocal_180 <= 9)
	{
		if (unk_0x23E9113C762466ED(uLocal_33[iLocal_180]))
		{
			if (!unk_0xCA41A00932714525(uLocal_33[iLocal_180]))
			{
				if (func_2(unk_0x17B5CC8A8615737D(), uLocal_33[iLocal_180], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_180++;
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	if (unk_0x23E9113C762466ED(uParam0) && !unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), iParam1))
		{
			if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iParam0) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_243()
{
	if (unk_0x8F2623409AB194EF("ARMY_HELI"))
	{
		if (unk_0x678AA675E5FB908B("ARMY_HELI"))
		{
			unk_0x63AA98F5AB7E3F81("ARMY_HELI", 0);
		}
	}
}

int func_244()
{
	if (Global_91491 == 10 || Global_91491 == 9)
	{
		return 1;
	}
	return 0;
}

void func_245()
{
	func_246(73);
	unk_0xA73AE78D2491E6E1("DOCKP2B", 0);
	while (!unk_0x657558590DD37F85(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0xE2D8919DE58194D4(unk_0x17B5CC8A8615737D(), 0, -1, 0);
	}
	unk_0xFCBD7340FBF1FE46(5, false);
	unk_0xFCBD7340FBF1FE46(3, false);
	unk_0xFCBD7340FBF1FE46(4, false);
	unk_0xB82FD68B5DE68F01(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, 0, 1);
	unk_0xB82FD68B5DE68F01(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, 0, 1);
	unk_0xB82FD68B5DE68F01(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1);
	uLocal_67 = unk_0xD1D19967E553E144(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1, 1, 1);
	uLocal_69 = unk_0xD1D19967E553E144(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1876.8f, 2806.1f, 32.3f, 8f, 1, 0, 0, 0);
	unk_0x1B60289D0F2A2E3C(-1857.7f, 2797.9f, 32.4f, 8f, 1, 0, 0, 0);
	unk_0x589451489CB70B8C("WantedMusicOnMission", 1);
	unk_0xD90CB3CF9A40791C(joaat("buzzard"), 1);
	unk_0xB82FD68B5DE68F01(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0, 1);
	unk_0x862504E4C5E80C78(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0);
	unk_0xB82FD68B5DE68F01(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0, 1);
	unk_0x862504E4C5E80C78(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0);
}

void func_246(int iParam0)
{
	Global_87679 = 0;
	switch (iParam0)
	{
		case 72:
			func_211(2);
			func_211(4);
			break;
		
		case 73:
			func_211(0);
			func_211(1);
			func_211(7);
			break;
		
		case 92:
			func_211(10);
			func_211(9);
			func_211(13);
			func_211(6);
			break;
		
		case 68:
			func_211(11);
			break;
		
		case 78:
			func_211(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_211(3);
			break;
		
		default:
			break;
	}
}

void func_247()
{
	func_248();
	unk_0xD90CB3CF9A40791C(joaat("cargobob"), 0);
	unk_0xD90CB3CF9A40791C(joaat("buzzard"), 0);
	unk_0xB80E9DA2EC792EE4(1);
	unk_0xB82FD68B5DE68F01(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 1, 1);
	unk_0xB82FD68B5DE68F01(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 1, 1);
	unk_0xEB4D9A8557E16CF5();
	unk_0x571422CE42B47889(uLocal_67, 0);
	unk_0x571422CE42B47889(uLocal_68, 0);
	unk_0x571422CE42B47889(uLocal_69, 0);
	func_231(1, 1);
	func_231(2, 1);
	func_231(7, 1);
	func_231(8, 1);
	func_231(9, 1);
	func_231(10, 1);
	func_231(4, 1);
	func_231(12, 1);
	func_106();
	if (unk_0x8F2623409AB194EF("ARMY_GUARD"))
	{
		if (!unk_0x678AA675E5FB908B("ARMY_GUARD"))
		{
			unk_0x63AA98F5AB7E3F81("ARMY_GUARD", 1);
		}
	}
	unk_0xF36BA7C9465AE128("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x8788F758785FCC5A("AZ_AFB_ALARM_SPEECH", 0, 0);
	unk_0x589451489CB70B8C("PoliceScannerDisabled", 0);
	unk_0x589451489CB70B8C("WantedMusicOnMission", 0);
	iLocal_176 = 0;
	while (iLocal_176 <= 12)
	{
		func_107(&(Local_70[iLocal_176 /*8*/]));
		iLocal_176++;
	}
	if (unk_0x8F2623409AB194EF("ARMY_HELI"))
	{
		if (!unk_0x678AA675E5FB908B("ARMY_HELI"))
		{
			unk_0x63AA98F5AB7E3F81("ARMY_HELI", 1);
		}
	}
	unk_0x111E99E32A85B908(iLocal_60);
	unk_0x921053BAF754303D();
}

void func_248()
{
	Global_87679 = 0;
}

void func_249()
{
	int iVar0;
	
	if (unk_0x32B1F051FF487881("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_27(0))
	{
		if (!func_250())
		{
			iVar0 = func_26();
			if (iVar0 != -1)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_250()
{
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

