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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	struct<4> Local_56[10];
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	struct<5> Local_103 = { 0, 0, 0, 0, 0 } ;
	var uLocal_108 = 0;
	var uLocal_109 = -1;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	struct<20> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_132 = 0;
	struct<19> Local_133[6];
	struct<6> Local_248[6];
	struct<6> Local_285 = { 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_291[4];
	struct<7> Local_328[1];
	struct<7> Local_336 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_343 = 0;
	struct<6> Local_344 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_350 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_356 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_362 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372[3] = { 0, 0, 0 };
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	bool bLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	bool bLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	bool bLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	bool bLocal_403 = 0;
	var uLocal_404 = 0;
	float fLocal_405 = 0f;
	float fLocal_406 = 0f;
	float fLocal_407 = 0f;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	char* sLocal_433 = NULL;
	char* sLocal_434 = NULL;
	char* sLocal_435 = NULL;
	char* sLocal_436[3] = { NULL, NULL, NULL };
	char[] cLocal_440[8] = 0;
	char[] cLocal_441[8] = 0;
	char* sLocal_442 = NULL;
	char* sLocal_443 = NULL;
	char* sLocal_444 = NULL;
	char* sLocal_445 = NULL;
	char* sLocal_446 = NULL;
	var uLocal_447 = 16;
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
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	int iLocal_612 = 0;
	struct<3> Local_613 = { 0, 0, 0 } ;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	char cLocal_619[24] = "";
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	struct<3> Local_625 = { 0, 0, 0 } ;
	struct<3> Local_628 = { 0, 0, 0 } ;
	struct<3> Local_631[10];
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	struct<3> Local_665 = { 0, 0, 0 } ;
	struct<3> Local_668 = { 0, 0, 0 } ;
	struct<3> Local_671 = { 0, 0, 0 } ;
	struct<3> Local_674 = { 0, 0, 0 } ;
	struct<3> Local_677 = { 0, 0, 0 } ;
	int iLocal_680 = 0;
	struct<8> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	bLocal_392 = true;
	cLocal_440 = "BB1AUD";
	cLocal_441 = "BBCAUD";
	sLocal_442 = "Trevor";
	sLocal_443 = "Maude";
	sLocal_444 = "maude_criminal_1";
	sLocal_445 = "maude_chair";
	sLocal_446 = "maude_laptop";
	StringCopy(&Local_613, "", 24);
	StringCopy(&cLocal_619, "MAUDE_MCS_2", 24);
	Local_103 = { ScriptParam_0 };
	if (unk_0x78BF2001491914AC(83))
	{
		if (iLocal_98 == 0)
		{
			Global_101947 = 0;
			func_528();
		}
		else
		{
			Global_101947 = 3;
			func_502(0);
			func_528();
		}
	}
	if (!func_490(1))
	{
		Global_101947 = 0;
		func_528();
	}
	unk_0x21C966D49C5B368B(1);
	func_470();
	if (func_469())
	{
		iVar0 = func_468();
		if (Global_86099 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				if (unk_0x0F93427D94EAEAA2(Global_97012.f_2875.f_12.f_66) || unk_0xDA6E804770521A18(Global_97012.f_2875.f_12.f_66))
				{
					func_427(&iLocal_680, 2898.294f, 2796.305f, 53.849f, 162.6353f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				else
				{
					func_427(&iLocal_680, 2891.459f, 2798.125f, 53.7482f, 206.3925f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				func_426(Local_665, fLocal_405, 1, 0);
				iLocal_101 = 2;
				func_415(1, 0);
				break;
			
			case 1:
				func_427(&iLocal_680, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				func_426(Local_625, 254.9762f, 0, 0);
				func_415(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (func_414(0))
	{
		if (func_413(unk_0x2A5EB8B0FE590B91()))
		{
			func_412(unk_0x2A5EB8B0FE590B91(), Local_665, fLocal_405, 0, 0);
			unk_0x164CA344DBD7B6F3(0f);
			unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
		}
	}
	while (true)
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x0EA9C6F829566CB7(unk_0x0FFED3E94261A832());
			unk_0xD5D0D2853191399C(unk_0x0FFED3E94261A832());
			Local_628 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			func_401();
			func_400();
			switch (iLocal_98)
			{
				case 0:
					func_393();
					break;
				
				case 1:
					func_389();
					break;
				
				case 2:
					func_383();
					break;
				
				case 3:
					func_377();
					break;
				
				case 6:
					func_372();
					break;
				
				case 7:
					func_307();
					break;
				
				case 4:
					func_123();
					break;
				
				case 5:
					func_115(1);
					break;
				
				case 8:
					func_111();
					break;
				
				case 9:
					func_71();
					break;
			}
			if (bLocal_392 == 0)
			{
				func_1(iLocal_99);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0)
{
	if (iLocal_98 == iParam0)
	{
		if (func_70())
		{
			func_68(0, -1, 0);
		}
		func_35(iLocal_98);
		if (iLocal_98 == 4)
		{
			func_24(1, 0, 1);
		}
		else
		{
			func_24(1, 1, 1);
		}
		bLocal_392 = true;
		iLocal_393 = 0;
		if (iLocal_98 == 5)
		{
			func_23(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	if (func_22(unk_0x2A5EB8B0FE590B91()))
	{
		func_20();
		unk_0x0508903FC1B0ED24();
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		switch (iLocal_98)
		{
			case 0:
				if (iLocal_100 == 1)
				{
					if (!func_70())
					{
						func_19(unk_0x2A5EB8B0FE590B91(), Local_668, fLocal_406, 0, 1);
						if (func_22(Local_112.f_9))
						{
							func_18(unk_0x2A5EB8B0FE590B91(), unk_0xD1EE0E9FCD74A37B(Local_112.f_9, 1));
						}
						unk_0x164CA344DBD7B6F3(0f);
						unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
						if (iLocal_393 == 0)
						{
							if (iLocal_99 == 1)
							{
								if (func_413(unk_0x2A5EB8B0FE590B91()))
								{
									func_11(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 13, 5000, 0, 0);
									iLocal_393 = 1;
								}
							}
						}
					}
					iLocal_377 = 1;
					iLocal_101 = 2;
					func_8();
					iLocal_100 = 2;
				}
				break;
			
			case 1:
				iLocal_377 = 1;
				iLocal_376 = 1;
				if (iLocal_100 == 1)
				{
					if (!func_70())
					{
						func_19(unk_0x2A5EB8B0FE590B91(), Local_671, fLocal_407, 0, 1);
						unk_0x164CA344DBD7B6F3(0f);
						unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
						if (iLocal_393 == 0)
						{
							if (iLocal_99 == 2)
							{
								if (func_413(unk_0x2A5EB8B0FE590B91()))
								{
									func_11(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 13, 5000, 0, 0);
									iLocal_393 = 1;
								}
							}
						}
					}
					Local_112.f_17 = (unk_0x3732B96D7A1859B4() - 5000);
					func_8();
					iLocal_100 = 2;
				}
				break;
			
			case 2:
				iLocal_368 = 1;
				if (iLocal_111 == 3)
				{
					if (iLocal_100 == 0)
					{
						if (func_22(Local_112.f_9) && func_7(Local_248[0 /*6*/]))
						{
							if (!unk_0x5B9B499C707C2A95(Local_112.f_9, Local_248[0 /*6*/], 0))
							{
								unk_0x01EE2412A2609146(Local_112.f_9, Local_248[0 /*6*/], -1);
							}
						}
					}
				}
				if (iLocal_100 == 1)
				{
					iLocal_370 = 1;
					if (!func_70())
					{
						func_5(Local_112.f_9, 2.5f);
						if (iLocal_393 == 0)
						{
							if (iLocal_99 == 3)
							{
								if (func_413(unk_0x2A5EB8B0FE590B91()))
								{
									func_11(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 13, 5000, 0, 0);
									iLocal_393 = 1;
								}
							}
						}
					}
					func_20();
					func_3();
					func_8();
					iLocal_100 = 2;
				}
				break;
			
			case 3:
				iLocal_387 = 1;
				if (iLocal_100 == 1)
				{
					func_412(Local_112.f_9, Local_625, 0f, 0, 0);
					if (!func_70())
					{
						func_412(unk_0x2A5EB8B0FE590B91(), Local_625, 254.9762f, 0, 0);
						unk_0x164CA344DBD7B6F3(0f);
						unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
						if (iLocal_393 == 0)
						{
							if (iLocal_99 == 4)
							{
								if (func_413(unk_0x2A5EB8B0FE590B91()))
								{
									func_11(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 13, 5000, 0, 0);
									iLocal_393 = 1;
								}
							}
						}
					}
					func_8();
					iLocal_100 = 2;
				}
				break;
			
			case 4:
				if (iLocal_100 == 1)
				{
					if (unk_0x863D84AFAC2AB730())
					{
						unk_0x3E6ED80934AE4880(0);
					}
				}
				break;
			
			case 6:
				if (iLocal_100 == 1)
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
					func_8();
				}
				break;
			
			case 7:
				if (iLocal_100 == 1)
				{
					iLocal_370 = 1;
					if (!func_70())
					{
						func_5(Local_112.f_9, 2.5f);
						if (iLocal_393 == 0)
						{
							if (iLocal_99 == 3)
							{
								if (func_413(unk_0x2A5EB8B0FE590B91()))
								{
									func_11(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 13, 5000, 0, 0);
									iLocal_393 = 1;
								}
							}
						}
					}
					func_20();
					func_3();
					func_8();
					iLocal_100 = 2;
				}
				break;
			}
	}
}

void func_3()
{
	Global_14611 = 0;
	func_4();
}

void func_4()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

int func_5(int iParam0, float fParam1)
{
	struct<3> Var0;
	
	if (func_22(iParam0))
	{
		if (func_6(unk_0xD1EE0E9FCD74A37B(iParam0, 1), &Var0, fParam1, 0))
		{
			unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Var0, 1, 0, 0, 1);
			func_18(unk_0x2A5EB8B0FE590B91(), unk_0xD1EE0E9FCD74A37B(iParam0, 1));
			return 1;
		}
	}
	return 0;
}

bool func_6(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	
	Var1 = { unk_0xEBB6A451E594E1A8(Param0, unk_0x399F81B56505EE6F(0f, 360f), 0f, uParam4, 0f) };
	if (unk_0xE423CA97BB7EA540(Var1, &uVar0, 0))
	{
		Var1.f_2 = uVar0;
	}
	*uParam3 = { Var1 };
	return unk_0xDB2C6DD0E49577D6(Var1, iParam5, uParam3, 0);
}

int func_7(int iParam0)
{
	if (func_413(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (!unk_0xFB4BF464D20ED824(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_8()
{
	func_9();
	Local_112.f_17 = 0;
	Local_112.f_18 = 0;
	Local_112.f_19 = 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56.f_0)
	{
		func_10(&(Local_56[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_10(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_11(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x9C6593C312FDF8CB(Param0, fParam3, iParam4, 127);
	if (unk_0xA4682714A558A180(uVar0))
	{
		iVar1 = (unk_0x3732B96D7A1859B4() + iParam5);
		while (!unk_0x23005013028EC883(uVar0) && unk_0x3732B96D7A1859B4() < iVar1)
		{
			if (bParam7)
			{
				func_13(0);
			}
			if (bParam6)
			{
				func_12();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x3732B96D7A1859B4() < iVar1)
		{
		}
		unk_0x257FFE44773719D3(uVar0);
	}
}

void func_12()
{
	Global_17151.f_6 = 1;
}

void func_13(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_17(0))
		{
			func_14(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_14(int iParam0)
{
	if (Global_14604)
	{
		func_16(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_15())
	{
		Global_14443.f_1 = 3;
	}
}

int func_15()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_17(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_17(int iParam0)
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

void func_18(int iParam0, struct<2> Param1, Vector3 vParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	fVar4 = (Param1.f_0 - Var0.f_0);
	fVar5 = (Param1.f_1 - Var0.f_1);
	if (fVar5 != 0f)
	{
		fVar3 = unk_0x12E20547A5AF64B1(fVar4, fVar5);
	}
	else if (fVar4 < 0f)
	{
		fVar3 = -90f;
	}
	else
	{
		fVar3 = 90f;
	}
	fVar3 = (fVar3 * -1f);
	unk_0x2681BA3707AF6DA7(iParam0, fVar3);
}

int func_19(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_413(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xE423CA97BB7EA540(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0x8E979F037EACE55A(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x2681BA3707AF6DA7(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_20()
{
	Global_14611 = 0;
	func_21();
}

void func_21()
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

int func_22(int iParam0)
{
	if (func_413(iParam0))
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	if (unk_0xF4EE9D6C8E60AE22() || unk_0xEF08C8E0C4679477())
	{
		if (!unk_0x9AF3AC4F52023B45())
		{
			unk_0x9B0467159FAB9F56(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0B21CC5276C2CE1B())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_24(int iParam0, int iParam1, int iParam2)
{
	func_25(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
		unk_0x164CA344DBD7B6F3(0f);
	}
	if (iParam1 == 1)
	{
		func_23(500, 0);
	}
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0x8A41C463063AFC8E();
	unk_0x7155D1139B85886E(uVar0, 0);
	unk_0x73EC54DB6766EF37(iVar0, iParam3, 0);
	func_26(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xA6C8C7573424CA93(1);
		unk_0xDA0C5084402DA99C(1);
	}
	unk_0x7D53B6FFAEDA810A(1);
	if (iParam0 == 1)
	{
		unk_0x44FC1DFD412D8376(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_43 != 0 && iLocal_43 != joaat("object")) && iLocal_43 != joaat("gadget_parachute"))
		{
			if (func_413(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), iLocal_43, 0))
				{
					unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), iLocal_43, 0);
				}
			}
		}
	}
	if (func_22(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x40C35C94A0106576(unk_0x2A5EB8B0FE590B91(), 0, 0);
	}
}

void func_26(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xFEDBEA905C0956B1(unk_0x0FFED3E94261A832());
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 1);
		func_34(1);
		unk_0x2200CE3F471C6FE7();
		unk_0xFF9AC2CB876656B2();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3813EBE69CF8CAD2())
			{
				unk_0xE40123A348A5FEDA(0);
			}
			if (!func_15())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_33(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_69798 = 1;
	}
	else
	{
		func_34(0);
		unk_0x5827AA638AD6DBC3();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x387F543932786998();
		}
		unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 0);
		unk_0x349E1EDDCBB34B52(unk_0x0FFED3E94261A832(), 0);
		func_33(0, iParam3, iParam2, 0);
		if (unk_0x591AF4C50B46E014())
		{
			if (((!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_31(unk_0x0FFED3E94261A832())) && !func_28(unk_0x0FFED3E94261A832(), 0)) && !func_27())
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) && !func_31(unk_0x0FFED3E94261A832()))
		{
			unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
		}
		Global_69798 = 0;
	}
}

bool func_27()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

bool func_28(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_29(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_29(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_30()
{
	return Global_1312735;
}

int func_31(int iParam0)
{
	if (func_28(iParam0, 0))
	{
		return 1;
	}
	if (func_32())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_32()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_33(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0xDBE931ADE82E8C84() != iParam0 && uParam2)
		{
			unk_0xD1D26ECE1663B2D6(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_34(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 13);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 13);
	}
}

void func_35(int iParam0)
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		switch (iParam0)
		{
			case 4:
				func_67(&cLocal_619);
				func_66();
				while (!func_59(1, 1093140480, 0) || !func_36())
				{
					func_67(&cLocal_619);
					func_66();
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
}

int func_36()
{
	if (func_58(Local_628, Local_336.f_1, 210f))
	{
		if (!iLocal_400)
		{
			if ((func_57(3) && func_56(&Local_344, Local_344.f_5, Local_344.f_1, Local_344.f_4, 1)) && func_56(&Local_350, Local_350.f_5, Local_350.f_1, Local_350.f_4, 1))
			{
				if (func_53(&Local_336, Local_336.f_6, Local_336.f_1, Local_336.f_4, 1, 0, 1))
				{
					func_48();
					iLocal_400 = 1;
				}
			}
		}
		if (!unk_0x2137828D03306CAF(Local_356.f_0))
		{
			if (func_58(Local_628, Local_356.f_1, 150f))
			{
				if (unk_0xB6BD4D7F41395E57(Local_356.f_1, 10f, func_47(), 0))
				{
					Local_356.f_0 = unk_0x96FF6B9A3E05D35F(Local_356.f_1, 10f, func_47(), 1, 0, 1);
					if (func_413(Local_356.f_0))
					{
						unk_0x8E979F037EACE55A(Local_356.f_0, func_46(), 1, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(Local_356.f_0, func_45());
						unk_0xA32D9C84C1A93920(Local_356.f_0, 1);
					}
				}
			}
		}
		if (!unk_0x2137828D03306CAF(Local_362.f_0))
		{
			if (func_58(Local_628, Local_362.f_1, 150f))
			{
				if (unk_0xB6BD4D7F41395E57(Local_362.f_1, 10f, func_44(), 0))
				{
					Local_362.f_0 = unk_0x96FF6B9A3E05D35F(Local_362.f_1, 10f, func_44(), 1, 0, 1);
				}
			}
		}
	}
	else if (!unk_0x14CEA5D3B9541B99(Local_336.f_1, 2.5f))
	{
		func_41(&Local_336, 1);
		unk_0x15167ADA0B7D44AE(func_40());
		func_37(&Local_344, 1);
		func_37(&Local_350, 1);
		func_37(&Local_356, 0);
		func_37(&Local_362, 0);
		iLocal_400 = 0;
	}
	return iLocal_400;
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_39(iParam0);
	}
	else
	{
		func_38(iParam0, 0);
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (unk_0x2137828D03306CAF(*iParam0))
	{
		if (unk_0xA6A04A00C612EAA5(*iParam0))
		{
			unk_0xA806066ECDF61E23(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x0EE36F9D946F47F2(iParam0);
		}
		else
		{
			unk_0x2D2D03CEC7AC060A(*iParam0);
		}
	}
}

void func_39(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (unk_0xA6A04A00C612EAA5(*uParam0))
		{
			unk_0xA806066ECDF61E23(*uParam0, 1, 1);
		}
		unk_0xBE35B7268C680A20(uParam0);
	}
}

char* func_40()
{
	return "special_ped@maude@base";
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(iParam0);
	}
	else
	{
		func_42(iParam0, 1, 0, 1);
	}
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x2137828D03306CAF(*iParam0))
	{
		if (!unk_0x769F0F6444C1ABE0(*iParam0))
		{
			unk_0xD44F61F61676BA14(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEE46A5BD4C4846BF(*iParam0);
			}
			unk_0x015B50BC21C88C8C(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4C47904AE69D7393(*iParam0, 0);
			}
		}
		unk_0x6C559FCFFD2365CB(iParam0);
	}
}

void func_43(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0xA9A04898798AE9E6(*uParam0, 0))
		{
			unk_0xD44F61F61676BA14(*uParam0, 0);
		}
		if (!unk_0x03322C3918511AA0(*uParam0))
		{
			unk_0x216B434C1A609F5B(*uParam0, 1, 0);
		}
		unk_0x27BAC9B39BCC6522(uParam0);
	}
}

int func_44()
{
	return joaat("prop_radio_01");
}

float func_45()
{
	return -92.17f;
}

Vector3 func_46()
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_47()
{
	return joaat("prop_table_03b");
}

void func_48()
{
	var uVar0;
	int iVar1;
	
	if (func_22(Local_336.f_0))
	{
		if (func_413(Local_344.f_0))
		{
			if (func_57(3))
			{
				uVar0 = unk_0x6D46C949A32B8D73(func_52(), func_51(), 2);
				unk_0xA2218E1CAB0028A5(uVar0, 1);
				unk_0xEE68E88B8F41075D(uVar0, 0);
				unk_0x5F778B8D6D7DF47B(Local_336.f_0, uVar0, func_40(), func_50(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				unk_0xA5537C55BC0E41FD(Local_344.f_0, uVar0, func_49(), func_40(), 1000f, -8f, iVar1, 1148846080);
				unk_0x4C47904AE69D7393(Local_336.f_0, 1);
				unk_0x88D9DF53359130B9(Local_336.f_0, 0);
				unk_0x2725C3746060DA66(Local_336.f_0, 0);
				unk_0x3C030E241A3543D2(Local_336.f_0, joaat("player"));
				unk_0xD7DFE610ED2BF500(Local_336.f_0, 0);
				unk_0xA9AADFE69A1B70BE(Local_336.f_0, 0);
				unk_0x015B50BC21C88C8C(Local_336.f_0, 1);
				unk_0x31AC59B7C21A2047(Local_336.f_0, 118, 0);
			}
		}
	}
}

char* func_49()
{
	return "base_chair";
}

char* func_50()
{
	return "base";
}

Vector3 func_51()
{
	return 0f, 0f, -92.17f;
}

Vector3 func_52()
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_53(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!unk_0x2137828D03306CAF(*uParam0))
	{
		if (func_55(iParam1))
		{
			*uParam0 = unk_0xD00B79C0E206E082(26, iParam1, Param2, uParam5, 1, 1);
			if (unk_0x2137828D03306CAF(*uParam0))
			{
				if (bParam7)
				{
					unk_0xA32D9C84C1A93920(*uParam0, 1);
				}
				if (bParam8)
				{
					if (!unk_0x769F0F6444C1ABE0(*uParam0))
					{
						unk_0x4C47904AE69D7393(*uParam0, 1);
					}
				}
				if (bParam6)
				{
					func_54(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_54(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

void func_54(int iParam0, bool bParam1)
{
	if (iParam0 != 0)
	{
		if (bParam1)
		{
			if (unk_0xA1FC9D7AEA164881(iParam0))
			{
				unk_0xFD213087BC4CC3B3(iParam0);
			}
		}
		else
		{
			unk_0xFD213087BC4CC3B3(iParam0);
		}
	}
}

int func_55(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	if (unk_0xA1FC9D7AEA164881(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x2137828D03306CAF(*uParam0))
	{
		if (func_55(iParam1))
		{
			*uParam0 = unk_0xA3618B5F6184DAD2(iParam1, Param2, 1, 1, 0);
			if (unk_0x2137828D03306CAF(*uParam0))
			{
				unk_0x2681BA3707AF6DA7(*uParam0, uParam5);
				unk_0xC5CFF5770D08D6C9(*uParam0, 1);
				if (bParam6)
				{
					func_54(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_54(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xC9173FA08E7D8227("BBONDS", 0);
			if (unk_0x44FB58EFDA8731B7(0))
			{
				return 1;
			}
			break;
		
		case 3:
			unk_0xA7C81DED990D3418(func_40());
			if (unk_0x45834D6C20FFF689(func_40()))
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xA7C81DED990D3418("ODDJOBS@BAILBOND_QUARRY");
			if (unk_0x45834D6C20FFF689("ODDJOBS@BAILBOND_QUARRY"))
			{
				return 1;
			}
			break;
		
		case 2:
			unk_0x0F39DF6675B2333E(Local_285.f_5);
			if (unk_0xA1FC9D7AEA164881(Local_285.f_5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_58(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if ((!unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()) && !unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91())) && !unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
		{
			if (!func_64(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_63(unk_0x2A5EB8B0FE590B91(), -828834893))
				{
					unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 0, 0);
				}
			}
			if (unk_0xB54451B05F280358(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_62();
	if (func_61())
	{
		func_20();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_60())
		{
			return 0;
		}
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	return 1;
}

bool func_60()
{
	bool bVar0;
	
	bVar0 = unk_0xA1EDDE074DA26387();
	if (!Global_69799)
	{
		if (!bVar0)
		{
			Global_69799 = 1;
		}
	}
	return bVar0;
}

int func_61()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_62()
{
	unk_0x4E6996123FABDB93(0, 21, 1);
	unk_0x4E6996123FABDB93(0, 37, 1);
	unk_0x4E6996123FABDB93(0, 25, 1);
	unk_0x4E6996123FABDB93(0, 141, 1);
	unk_0x4E6996123FABDB93(0, 140, 1);
	unk_0x4E6996123FABDB93(0, 24, 1);
	unk_0x4E6996123FABDB93(0, 257, 1);
	unk_0x4E6996123FABDB93(0, 22, 1);
	unk_0x4E6996123FABDB93(0, 23, 1);
}

int func_63(int iParam0, int iParam1)
{
	if (func_22(iParam0))
	{
		if (unk_0xE897E371352225D5(iParam0, iParam1) == 1 || unk_0xE897E371352225D5(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 73, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam5)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4E6996123FABDB93(0, 69, 1);
		unk_0x4E6996123FABDB93(0, 70, 1);
		unk_0x4E6996123FABDB93(0, 68, 1);
	}
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 138, 1);
	unk_0x4E6996123FABDB93(0, 136, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
	unk_0x4E6996123FABDB93(0, 131, 1);
	unk_0x4E6996123FABDB93(0, 132, 1);
	unk_0x4E6996123FABDB93(0, 123, 1);
	unk_0x4E6996123FABDB93(0, 126, 1);
	unk_0x4E6996123FABDB93(0, 129, 1);
	unk_0x4E6996123FABDB93(0, 130, 1);
	unk_0x4E6996123FABDB93(0, 133, 1);
	unk_0x4E6996123FABDB93(0, 134, 1);
	unk_0xB5924913D8350E63();
	func_65(uParam0);
	if ((unk_0x3732B96D7A1859B4() - Global_29) > 500)
	{
		unk_0x8231579045104F87(uParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3732B96D7A1859B4();
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		if (unk_0x3FEF699D13BCC798(unk_0xD2660BAC03EB7433(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_65(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		if (unk_0x317EBF76D4EFACBF(iParam0))
		{
			if (unk_0xBCE28DDC8BEC619D(iParam0))
			{
				unk_0xE3F9604466DA5BF0(iParam0, 0);
			}
		}
	}
}

void func_66()
{
	if (func_413(Local_112.f_9))
	{
		if (unk_0x4492AAB360D28093())
		{
			unk_0x5CD29240B897D8D7(sLocal_444, Local_112.f_9, 0);
		}
	}
	if (func_413(Local_336.f_0))
	{
		if (unk_0x4492AAB360D28093())
		{
			unk_0x5CD29240B897D8D7(sLocal_443, Local_336.f_0, 0);
		}
	}
}

void func_67(char[4] cParam0)
{
	func_26(1, 1, 0, 0);
	unk_0x7C58954B914236EF(cParam0, 8);
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	if (func_469() && func_70())
	{
		while (Global_91772 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8850034223654421(0);
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x8591E81E75799D08(unk_0x2A5EB8B0FE590B91());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x2137828D03306CAF(iParam0))
				{
					if (unk_0x7FAC45D56235AB39(iParam0, 0))
					{
						if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam0, 0))
						{
							unk_0x01EE2412A2609146(unk_0x2A5EB8B0FE590B91(), iParam0, iParam1);
							unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
							unk_0x164CA344DBD7B6F3(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
			}
		}
		unk_0x3BB20A910B3F98DC();
		func_69(0);
	}
}

void func_69(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 13);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_91777.f_20), 13);
	}
}

bool func_70()
{
	return unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 13);
}

void func_71()
{
	char* sVar0;
	int iVar1;
	
	sVar0 = 0;
	switch (iLocal_100)
	{
		case 0:
			unk_0x0508903FC1B0ED24();
			unk_0x7D53B6FFAEDA810A(1);
			if (func_61())
			{
				func_20();
			}
			func_107();
			Global_101947 = 3;
			if (iLocal_102 == 4)
			{
				if (func_22(Local_336.f_0))
				{
					func_106(&uLocal_447, 4);
					func_105(Local_336.f_0, 0);
					if (!unk_0x7C8D4D8A617D31D0(Local_336.f_0))
					{
						if (func_104(Local_336.f_0, unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), 35f))
						{
							unk_0xCAEEADF5FA40352F(Local_336.f_0, 0);
							func_102(Local_336.f_0, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (unk_0x2137828D03306CAF(Local_350.f_0))
				{
					unk_0xA32D9C84C1A93920(Local_350.f_0, 0);
				}
				if (unk_0x2137828D03306CAF(Local_356.f_0))
				{
					unk_0xA32D9C84C1A93920(Local_356.f_0, 0);
				}
				unk_0xA7C81DED990D3418(func_101());
				if (func_99(&Local_336, &Local_344, &iLocal_428))
				{
					iLocal_394 = 1;
				}
			}
			else if (iLocal_102 == 2)
			{
				iLocal_384 = 0;
				StringCopy(&Local_613, "BBC_T12", 24);
			}
			if (func_22(Local_112.f_9))
			{
				if (unk_0xAB603D6FBED0F015(Local_112.f_9))
				{
					unk_0x799D2CB4039F4804(Local_112.f_9);
				}
				func_98(Local_112.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_420 - 1))
			{
				func_98(Local_133[iVar1 /*19*/], 1);
				iVar1++;
			}
			switch (iLocal_102)
			{
				case 1:
					break;
				
				case 2:
					sVar0 = "BBS_F1";
					break;
				
				case 3:
					sVar0 = "BBS_F3";
					break;
				
				case 4:
					sVar0 = "BBS_F2";
					break;
				
				case 0:
					break;
			}
			if (iLocal_102 != 0)
			{
				func_97(sVar0);
			}
			func_502(0);
			iLocal_100 = 1;
			break;
		
		case 1:
			if (func_96())
			{
				func_91(1);
				func_528();
			}
			else
			{
				if (!iLocal_384)
				{
					if (func_61())
					{
						func_3();
					}
					if (iLocal_102 == 4)
					{
						if (func_22(Local_336.f_0))
						{
							if (func_104(Local_336.f_0, Local_628, 35f))
							{
								func_90(&uLocal_447, 4, Local_336.f_0, "MAUDE", 0, 1);
								if (func_74(&uLocal_447, cLocal_441, &Local_613, 4, 0, 0, 0))
								{
									iLocal_384 = 1;
								}
							}
						}
					}
					else if (func_74(&uLocal_447, cLocal_441, &Local_613, 4, 0, 0, 0))
					{
						iLocal_384 = 1;
					}
				}
				if (iLocal_102 == 4)
				{
					if (!iLocal_394)
					{
						unk_0xA7C81DED990D3418(func_101());
						if (func_99(&Local_336, &Local_344, &iLocal_428))
						{
							iLocal_394 = 1;
						}
					}
					else if (func_22(Local_336.f_0))
					{
						if (!func_63(Local_336.f_0, 1805844857))
						{
							if (!unk_0xE4B596B1029F4F6A(Local_336.f_0))
							{
								if (!unk_0x453DB1DBE5D81637(Local_336.f_0, func_101(), func_73(), 3))
								{
									func_72(&Local_336);
									unk_0xCD6FB688ED8B6284(Local_336.f_0, unk_0x2A5EB8B0FE590B91(), 50f, -1, 0, 0);
									unk_0x015B50BC21C88C8C(Local_336.f_0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_72(int iParam0)
{
	if (func_22(*iParam0))
	{
		unk_0xAE833788DEAB23CA(*iParam0, 2, 0);
		unk_0xAE833788DEAB23CA(*iParam0, 64, 0);
		unk_0xAE833788DEAB23CA(*iParam0, 128, 0);
		unk_0xAE833788DEAB23CA(*iParam0, 8, 0);
		unk_0xAE833788DEAB23CA(*iParam0, 1, 0);
		unk_0xAE833788DEAB23CA(*iParam0, 32, 0);
		unk_0x89AEA58335779997(*iParam0, 5, 0);
		unk_0x89AEA58335779997(*iParam0, 17, 1);
		unk_0x31AC59B7C21A2047(*iParam0, 118, 1);
	}
}

char* func_73()
{
	return "female_Flee_Table_Left_Maude";
}

int func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (unk_0x5CA780C6DF42F0B0())
		{
			if (unk_0x29B06605BA5CF280(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_75(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_75(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_76(sParam2, iParam3, 0);
}

int func_76(char* sParam0, int iParam1, bool bParam2)
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
					func_21();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_87();
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
				func_80();
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
				if (func_79())
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
			if (func_15())
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
			func_78();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_77();
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
		func_21();
	}
	return 0;
}

void func_77()
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

void func_78()
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

int func_79()
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

void func_80()
{
	if (func_86(14))
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
		Global_14443 = func_81();
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

int func_81()
{
	func_82();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_82()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_85(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_84(unk_0x2A5EB8B0FE590B91());
			if (func_83(iVar0) && (!func_86(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_83(Global_103236.f_2164.f_539.f_4301))
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

bool func_83(int iParam0)
{
	return iParam0 < 3;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_85(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_85(int iParam0)
{
	if (func_83(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_86(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_87()
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

bool func_88(int iParam0, int iParam1)
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
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

void func_91(bool bParam0)
{
	int iVar0;
	
	func_37(&Local_285, 0);
	if (iLocal_415 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_415 - 1))
		{
			func_37(&(Local_291[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_418 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_418 - 1))
		{
			func_95(&(Local_328[iVar0 /*7*/]));
			iVar0++;
		}
	}
	func_37(&Local_344, bParam0);
	func_37(&Local_350, bParam0);
	func_37(&Local_356, 0);
	func_37(&Local_362, 0);
	if (func_22(Local_112.f_9))
	{
		if (unk_0xAB603D6FBED0F015(Local_112.f_9))
		{
			if (unk_0xE7EA59D3048D0B8F(Local_112.f_9, unk_0x60A7F9A542DD09AD(unk_0x0FFED3E94261A832())))
			{
				unk_0x799D2CB4039F4804(Local_112.f_9);
			}
		}
		unk_0xD44F61F61676BA14(Local_112.f_9, 0);
		unk_0x4C47904AE69D7393(Local_112.f_9, 0);
		if (Global_101947 == 0)
		{
			unk_0x015B50BC21C88C8C(Local_112.f_9, 0);
		}
		else
		{
			unk_0x015B50BC21C88C8C(Local_112.f_9, 1);
		}
	}
	func_41(&(Local_112.f_9), bParam0);
	if (func_22(Local_336.f_0))
	{
		unk_0x4C47904AE69D7393(Local_336.f_0, 0);
		unk_0x015B50BC21C88C8C(Local_336.f_0, 1);
	}
	func_41(&Local_336, bParam0);
	if (iLocal_420 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_420 - 1))
		{
			if (iLocal_111 == 4)
			{
				if (func_22(Local_133[iVar0 /*19*/]))
				{
					unk_0x3C030E241A3543D2(Local_133[iVar0 /*19*/], -2065892691);
					unk_0x4C47904AE69D7393(Local_133[iVar0 /*19*/], 0);
					if (Global_101947 == 0)
					{
						unk_0x015B50BC21C88C8C(Local_133[iVar0 /*19*/], 0);
					}
					else
					{
						unk_0x015B50BC21C88C8C(Local_133[iVar0 /*19*/], 1);
					}
				}
			}
			func_41(&(Local_133[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_416 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_416 - 1))
		{
			func_92(&(Local_248[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_94(uParam0);
	}
	else
	{
		func_93(uParam0);
	}
}

void func_93(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		unk_0xA9A04898798AE9E6(*uParam0, 0);
		if (unk_0x03322C3918511AA0(*uParam0) && unk_0xDDB64A4460B8504C(*uParam0, 1))
		{
			unk_0xFECCD8AF38671477(uParam0);
		}
	}
}

void func_94(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0x03322C3918511AA0(*uParam0))
		{
			unk_0x216B434C1A609F5B(*uParam0, 1, 0);
		}
		if (func_7(*uParam0))
		{
			if (unk_0x03322C3918511AA0(*uParam0) && unk_0xDDB64A4460B8504C(*uParam0, 1))
			{
				if (func_413(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), *uParam0, 0))
					{
						unk_0xFECCD8AF38671477(uParam0);
						return;
					}
				}
				unk_0xA613FDAC42DBBFAD(uParam0);
			}
		}
		else
		{
			if (func_413(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), *uParam0, 0))
				{
					unk_0xFECCD8AF38671477(uParam0);
					return;
				}
			}
			unk_0xA613FDAC42DBBFAD(uParam0);
		}
	}
}

void func_95(var uParam0)
{
	if (unk_0x0BF40BFCD677686E(*uParam0))
	{
		unk_0x3282EED5CD1F19DB(*uParam0);
	}
}

int func_96()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91777 == 7 || Global_91777 == 8)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0)
{
	if (!unk_0x58478145CAF8429C(sParam0))
	{
		if (unk_0x49828C486339D60D(sParam0) <= 16)
		{
			StringCopy(&Global_70032, sParam0, 16);
			StringCopy(&Global_70036, "", 16);
			if (unk_0x211BAFB9C9DDEA2C())
			{
				unk_0xF7F18D1F3D2475E2();
			}
		}
	}
}

void func_98(int iParam0, bool bParam1)
{
	if (func_22(iParam0))
	{
		unk_0x89AEA58335779997(iParam0, 5, 0);
		unk_0x89AEA58335779997(iParam0, 17, 1);
		unk_0xAE833788DEAB23CA(iParam0, 512, 0);
		if (!func_63(iParam0, 1805844857))
		{
			unk_0x654FFF4D16298AC5(iParam0);
			unk_0xEE46A5BD4C4846BF(iParam0);
			unk_0xEDF42871EAD55C9B(iParam0, unk_0x2A5EB8B0FE590B91(), 3000, 0, 2);
			unk_0xCD6FB688ED8B6284(iParam0, unk_0x2A5EB8B0FE590B91(), 10000f, -1, 0, 0);
		}
		if (bParam1)
		{
			unk_0x4C47904AE69D7393(iParam0, 1);
		}
		unk_0x015B50BC21C88C8C(iParam0, 1);
	}
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_22(*iParam0))
	{
		if (unk_0x453DB1DBE5D81637(*iParam0, func_40(), func_50(), 3))
		{
			if (!unk_0x62F5757271CA0B05(*iParam0) || unk_0x96BD442529F76EE7(*iParam0))
			{
				unk_0xA7C81DED990D3418(func_101());
				if (unk_0x45834D6C20FFF689(func_101()))
				{
					*iParam2 = unk_0x6D46C949A32B8D73(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xA2218E1CAB0028A5(*iParam2, 0);
					unk_0xEE68E88B8F41075D(*iParam2, 0);
					if (func_63(*iParam0, 1785177548))
					{
						unk_0x860D46ACBCB64ED9(*iParam0, -1000f, 1);
					}
					unk_0x5F778B8D6D7DF47B(*iParam0, *iParam2, func_101(), func_73(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xB1D181DBFC526F52(*iParam0, 0, 0);
					if (func_413(*iParam1))
					{
						if (unk_0x453DB1DBE5D81637(*iParam1, func_40(), func_49(), 3))
						{
							unk_0x860D46ACBCB64ED9(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xA5537C55BC0E41FD(*iParam1, *iParam2, func_100(), func_101(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
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
	}
	return 0;
}

char* func_100()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_101()
{
	return "special_ped@maude@exit_flee";
}

void func_102(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xA2782778D22DC0EA(iParam0, sParam1, sParam2, func_103(iParam3), 0);
}

int func_103(int iParam0)
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

bool func_104(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_105(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_22(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x895FB9FE885E36ED(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0x8F40CB4DCBB7C8AB(iParam0))
		{
			func_102(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_102(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

void func_106(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_107()
{
	func_110(iLocal_420);
	func_109(&(Local_112.f_8));
	func_108(&Local_112);
	func_109(&uLocal_404);
}

void func_108(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
		bVar0 = true;
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_1))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x2137828D03306CAF(uParam0->f_7))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_7))
		{
			if (unk_0x4C2C9007DF4A7DB6(uParam0->f_7))
			{
				unk_0x740D0745C06D2DDC(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_109(var uParam0)
{
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0xD42DEAFD12809447(*uParam0, 0);
		unk_0x789C84F1B8496AD0(uParam0);
	}
}

void func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		func_108(&(Local_133[iVar0 /*19*/].f_6));
		iVar0++;
	}
}

void func_111()
{
	int iVar0;
	
	switch (iLocal_100)
	{
		case 0:
			unk_0x0508903FC1B0ED24();
			unk_0x7D53B6FFAEDA810A(1);
			if (func_61())
			{
				func_20();
			}
			func_107();
			func_41(&Local_336, 1);
			iVar0 = 0;
			while (iVar0 <= (iLocal_420 - 1))
			{
				func_113(iVar0);
				iVar0++;
			}
			iLocal_425 = unk_0x3732B96D7A1859B4();
			iLocal_100 = 1;
			break;
		
		case 1:
			if (func_112(iLocal_425, 500))
			{
				if (!bLocal_385)
				{
					if (func_61())
					{
						func_20();
						func_3();
					}
					if (func_74(&uLocal_447, cLocal_441, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_385 = true;
					}
				}
				if (bLocal_385)
				{
					func_115(2);
				}
				if (func_112(iLocal_425, 1500))
				{
					func_115(2);
				}
			}
			break;
	}
}

bool func_112(int iParam0, int iParam1)
{
	return (unk_0x3732B96D7A1859B4() - iParam0) > iParam1;
}

void func_113(int iParam0)
{
	if (func_22(Local_133[iParam0 /*19*/]))
	{
		unk_0xEE46A5BD4C4846BF(Local_133[iParam0 /*19*/]);
		unk_0x654FFF4D16298AC5(Local_133[iParam0 /*19*/]);
		unk_0xAF2C217E49954DFD(Local_133[iParam0 /*19*/]);
		if (func_114(1, 0, 1))
		{
			func_98(Local_133[iParam0 /*19*/], 1);
			Local_133[iParam0 /*19*/].f_14 = 4;
			func_108(&(Local_133[iParam0 /*19*/].f_6));
		}
		else if (unk_0xF14CC08EB3D9D296(Local_133[iParam0 /*19*/]) == iLocal_612)
		{
			unk_0x19C48DF4EEAACE35(Local_133[iParam0 /*19*/], 30f);
			unk_0x65648841F3329FD6(Local_133[iParam0 /*19*/], 30f);
			unk_0xC45DC8E8CCFC91FA(Local_133[iParam0 /*19*/], 30f);
			unk_0xE92D3CD695EE863C(Local_133[iParam0 /*19*/], 0);
			unk_0x89AEA58335779997(Local_133[iParam0 /*19*/], 1, 0);
			unk_0x89AEA58335779997(Local_133[iParam0 /*19*/], 3, 1);
			unk_0x89AEA58335779997(Local_133[iParam0 /*19*/], 5, 1);
			unk_0x89AEA58335779997(Local_133[iParam0 /*19*/], 0, 0);
			unk_0xAE833788DEAB23CA(Local_133[iParam0 /*19*/], 512, 1);
			unk_0xEDF42871EAD55C9B(Local_133[iParam0 /*19*/], unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
			unk_0x88E3EDF9AF851486(Local_133[iParam0 /*19*/], unk_0x2A5EB8B0FE590B91(), -1);
			unk_0x4C47904AE69D7393(Local_133[iParam0 /*19*/], 1);
			Local_133[iParam0 /*19*/].f_14 = 2;
		}
		else
		{
			unk_0x89AEA58335779997(Local_133[iParam0 /*19*/], 5, 0);
			unk_0xEDF42871EAD55C9B(Local_133[iParam0 /*19*/], unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
			unk_0x88E3EDF9AF851486(Local_133[iParam0 /*19*/], unk_0x2A5EB8B0FE590B91(), -1);
			unk_0x4C47904AE69D7393(Local_133[iParam0 /*19*/], 0);
			Local_133[iParam0 /*19*/].f_14 = 4;
		}
	}
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar0, 1);
	switch (iVar0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_minigun"):
			return 1;
		
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("weapon_grenade"):
			case joaat("weapon_stickybomb"):
			case joaat("weapon_molotov"):
				return 1;
			}
		
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("weapon_knife"):
			case joaat("weapon_hammer"):
			case joaat("weapon_crowbar"):
			case joaat("weapon_bottle"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	return 0;
}

void func_115(int iParam0)
{
	func_23(500, 1);
	func_116(func_122(Local_103.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_101947 = 1;
	}
	else
	{
		Global_101947 = 2;
	}
	func_528();
}

void func_116(int iParam0, int iParam1, int iParam2)
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
		func_121((891 + iParam0), 1, -1, 1);
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
		Global_103236.f_9975[iParam0 /*12*/].f_10 = iParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = iParam2;
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
		func_117();
	}
}

void func_117()
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
		func_120(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_119() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
				{
					func_118();
				}
			}
		}
	}
}

int func_118()
{
	if (func_414(0))
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

int func_119()
{
	return Global_25222;
}

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_30();
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

int func_122(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 149;
			break;
		
		case 1:
			iVar0 = 150;
			break;
		
		case 2:
			iVar0 = 152;
			break;
		
		case 3:
			iVar0 = 151;
			break;
	}
	return iVar0;
}

void func_123()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_100)
	{
		case 0:
			func_67(&cLocal_619);
			func_66();
			if (func_36())
			{
				if (func_59(1, 10.5f, 1))
				{
					unk_0x063C67E5BF3D0895(unk_0x2A5EB8B0FE590B91(), sLocal_442, 0, 0, 0);
					if (func_413(Local_336.f_0))
					{
						unk_0x063C67E5BF3D0895(Local_336.f_0, sLocal_443, 0, 0, 0);
					}
					if (func_413(Local_112.f_9))
					{
						unk_0x063C67E5BF3D0895(Local_112.f_9, sLocal_444, 0, 0, 0);
					}
					if (func_413(Local_344.f_0))
					{
						unk_0x063C67E5BF3D0895(Local_344.f_0, sLocal_445, 0, 0, 0);
					}
					if (func_413(Local_350.f_0))
					{
						unk_0x063C67E5BF3D0895(Local_350.f_0, sLocal_446, 0, 0, 0);
					}
					unk_0x256CC452D2C1731B(0);
					unk_0x4EDE34FBADD967A6(0);
					func_23(800, 0);
					func_189(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_188(&Var0, &Var3, &fVar9);
					Var6 = { func_187() };
					if (func_184(Var6, 0))
					{
						func_177(Var0, Var3, fVar9, 2721.02f, 4140.34f, 43.66f, 257.67f, 1, 1, 1, 0, 0);
						func_125(2721.02f, 4140.34f, 43.66f, 257.67f, 0, 145);
					}
					else
					{
						func_177(Var0, Var3, fVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						func_125(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (func_22(Local_112.f_9))
					{
						if (unk_0xAB603D6FBED0F015(Local_112.f_9))
						{
							unk_0x799D2CB4039F4804(Local_112.f_9);
						}
						unk_0x654FFF4D16298AC5(Local_112.f_9);
						unk_0x8E979F037EACE55A(Local_112.f_9, 2724.02f, 4145.08f, 43.29f, 1, 0, 0, 1);
						unk_0x2681BA3707AF6DA7(Local_112.f_9, -84.2f);
						unk_0x654FFF4D16298AC5(Local_112.f_9);
					}
					iLocal_100 = 1;
				}
			}
			break;
		
		case 1:
			if (func_413(Local_344.f_0))
			{
				if (func_22(Local_336.f_0))
				{
					if (unk_0x2C290803FEDB1727(sLocal_443, 0) && unk_0x2C290803FEDB1727(sLocal_445, 0))
					{
						func_48();
					}
				}
			}
			if (unk_0x2C290803FEDB1727(sLocal_442, 0))
			{
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 2724.193f, 4145.306f, 42.8324f, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), 76.4896f);
				unk_0xAEE1122D64BCDB87(unk_0x2A5EB8B0FE590B91(), joaat("MotionState_Walk"), 0, 1, 0);
				unk_0xBA338CFC66A5608A(unk_0x0FFED3E94261A832(), 1f, 2000, 0, 1, 0);
			}
			if (unk_0x05E45421C17E15FD(0))
			{
				unk_0x164CA344DBD7B6F3(0f);
				unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
			}
			if (!unk_0x863D84AFAC2AB730())
			{
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (unk_0x863D84AFAC2AB730())
			{
				unk_0x3E6ED80934AE4880(0);
			}
			else
			{
				if (unk_0xA1EDDE074DA26387())
				{
					unk_0x27378D398128FEC6();
				}
				if (bLocal_392)
				{
					func_25(1, 1, 1, 1);
				}
				if (func_22(Local_112.f_9))
				{
					if (unk_0xAB603D6FBED0F015(Local_112.f_9))
					{
						unk_0x799D2CB4039F4804(Local_112.f_9);
					}
				}
				func_41(&(Local_112.f_9), 1);
				if (func_22(Local_336.f_0))
				{
					unk_0xEDF42871EAD55C9B(Local_336.f_0, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
					unk_0x015B50BC21C88C8C(Local_336.f_0, 1);
				}
				func_42(&Local_336, 1, 0, 1);
				func_124(5);
			}
			break;
	}
}

void func_124(int iParam0)
{
	iLocal_98 = iParam0;
	iLocal_100 = 0;
}

void func_125(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x2137828D03306CAF(Global_94043.f_4))
	{
		if (unk_0x7FAC45D56235AB39(Global_94043.f_4, 0))
		{
			if (func_176(24) != Global_94043.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_173(unk_0xD1EE0E9FCD74A37B(Global_94043.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_126(Global_94043.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_126(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x2137828D03306CAF(Global_68628.f_484[25]) && unk_0x7FAC45D56235AB39(Global_68628.f_484[25], 0))
			{
				if (Global_68628.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xD540D62327324842(iParam0) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("bus")) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_172(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_168(iParam0, &Var0);
		if (func_167(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
			fParam4 = unk_0x6DAB28241B34DEED(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) != joaat("vehicle_gen_controller"))
			{
				Global_69616 = unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC());
			}
		}
		func_160(iParam5, &Var0, Param1, fParam4, func_166(iParam0));
		func_127(iParam5, iParam0, 0);
	}
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_157(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 12) && !unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68628.f_555[0 /*21*/].f_4 != unk_0xD3B21CE53AA7BE51(iParam1))
		{
			return;
		}
	}
	if (Global_69535 != -1 && Global_69535 != iParam0)
	{
		return;
	}
	if (unk_0x2137828D03306CAF(iParam1))
	{
		if (unk_0x7FAC45D56235AB39(iParam1, 0))
		{
			if (!unk_0x03322C3918511AA0(iParam1))
			{
				unk_0x216B434C1A609F5B(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_103236.f_32211.f_4801 = func_146();
			}
			if (iParam1 != Global_68628.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_176(iParam0);
					if ((unk_0x2137828D03306CAF(iVar0) && unk_0x7FAC45D56235AB39(iVar0, 0)) && iParam1 != iVar0)
					{
						func_128(iVar0, 145);
					}
				}
				Global_69534 = iParam1;
				Global_69535 = iParam0;
				Global_69536 = iParam2;
			}
		}
	}
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_129(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, -1, 0);
		if (!unk_0x2137828D03306CAF(iVar0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, -1);
		}
		if (unk_0x2137828D03306CAF(iVar0) && !unk_0x769F0F6444C1ABE0(iVar0))
		{
			if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_103236.f_2164.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xD3B21CE53AA7BE51(iParam0) == Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x58478145CAF8429C(&(Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x35302CD5A5D37EED(unk_0x76FEACB77B140714(iParam0), &(Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_103236.f_32211.f_5592[iVar1] = iVar2;
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
		if (unk_0xD3B21CE53AA7BE51(iParam0) == Global_103236.f_32211.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x58478145CAF8429C(&(Global_103236.f_32211.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x35302CD5A5D37EED(unk_0x76FEACB77B140714(iParam0), &(Global_103236.f_32211.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_103236.f_32211.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_103236.f_32211.f_5590 = iParam1;
	Global_69533 = iParam0;
	Global_103236.f_32211.f_5588 = 1;
	func_168(iParam0, &(Global_103236.f_32211.f_5510));
}

int func_129(int iParam0)
{
	if ((((((((((!unk_0x2137828D03306CAF(iParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0)) || func_144(iParam0, 0, 0)) || func_144(iParam0, 1, 0)) || func_144(iParam0, 2, 0)) || func_166(iParam0) != 145) || func_143(iParam0)) || func_142(iParam0)) || func_141(iParam0)) || func_140(iParam0)) || !func_130(unk_0xD3B21CE53AA7BE51(iParam0)))
	{
		if (func_142(iParam0))
		{
		}
		if (func_142(iParam0))
		{
		}
		if (func_144(iParam0, 0, 0))
		{
		}
		if (func_144(iParam0, 1, 0))
		{
		}
		if (func_144(iParam0, 2, 0))
		{
		}
		if (func_166(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_130(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_131(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xC6B6C45D0DE76B0B(iParam0) || unk_0xDA6E804770521A18(iParam0)) || unk_0x0F93427D94EAEAA2(iParam0)) || unk_0x11217C882DAE7DDD(iParam0))
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

int func_131(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5FABA3586E57ED57(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x591AF4C50B46E014()) || (iParam0 == joaat("buffalo3") && !unk_0x591AF4C50B46E014())) || (iParam0 == joaat("gauntlet2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blista3"))
	{
		if (!func_139())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x387A7CB2B4F8027A())
		{
			if (unk_0xC36B0959EAB89B8F(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x17983D8EA6EAF9C8(Var1.f_0))
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
		if ((((!func_138() && !func_137()) && !func_136()) && !func_135()) && !func_139())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x97FFE0491AC179A2() || unk_0x5018862FF5D9F844()) || unk_0x429A1F8C699BEE23())
		{
		}
		else if (!func_136())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_134(iParam0))
		{
			return 0;
		}
	}
	if (!func_132(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_132(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_133())
	{
		return 1;
	}
	unk_0xAA8D12A27D860B4A(&iVar0, &uVar1);
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
	if (!unk_0x8B420EE50F3B667E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_133()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2484612)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDA84A1E29323722E();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5515 && !Global_262145.f_11562) && iVar1 < Global_262145.f_11563)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12774 && iVar1 < Global_262145.f_12786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12770 && iVar1 < Global_262145.f_12782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12771 && iVar1 < Global_262145.f_12783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12772 && iVar1 < Global_262145.f_12784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12773 && iVar1 < Global_262145.f_12785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12775 && iVar1 < Global_262145.f_12787)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12776 && iVar1 < Global_262145.f_12779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12777 && iVar1 < Global_262145.f_12780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12778 && iVar1 < Global_262145.f_12781)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15405 && iVar1 < Global_262145.f_15370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15400 && iVar1 < Global_262145.f_15365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15404 && iVar1 < Global_262145.f_15369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15403 && iVar1 < Global_262145.f_15368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15397 && iVar1 < Global_262145.f_15362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15398 && iVar1 < Global_262145.f_15363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15401 && iVar1 < Global_262145.f_15366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15402 && iVar1 < Global_262145.f_15367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15399 && iVar1 < Global_262145.f_15364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15407 && iVar1 < Global_262145.f_15372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15408 && iVar1 < Global_262145.f_15373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15396 && iVar1 < Global_262145.f_15361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15395 && iVar1 < Global_262145.f_15360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15394 && iVar1 < Global_262145.f_15359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15406 && iVar1 < Global_262145.f_15371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15409 && iVar1 < Global_262145.f_15374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15410 && iVar1 < Global_262145.f_15375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15411 && iVar1 < Global_262145.f_15376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15412 && iVar1 < Global_262145.f_15377)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15557 && iVar1 < Global_262145.f_15579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15558 && iVar1 < Global_262145.f_15580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15559 && iVar1 < Global_262145.f_15581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15560 && iVar1 < Global_262145.f_15582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15561 && iVar1 < Global_262145.f_15583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15562 && iVar1 < Global_262145.f_15584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15564 && iVar1 < Global_262145.f_15585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15565 && iVar1 < Global_262145.f_15586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15566 && iVar1 < Global_262145.f_15587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15567 && iVar1 < Global_262145.f_15588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15568 && iVar1 < Global_262145.f_15589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15569 && iVar1 < Global_262145.f_15590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15570 && iVar1 < Global_262145.f_15591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15576 && iVar1 < Global_262145.f_15598)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15573 && iVar1 < Global_262145.f_15594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15574 && iVar1 < Global_262145.f_15595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15575 && iVar1 < Global_262145.f_15596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15563 && iVar1 < Global_262145.f_15597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15577 && iVar1 < Global_262145.f_15599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15571 && iVar1 < Global_262145.f_15592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15572 && iVar1 < Global_262145.f_15593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15578 && iVar1 < Global_262145.f_15600)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17208 && iVar1 < Global_262145.f_17249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17209 && iVar1 < Global_262145.f_17250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17210 && iVar1 < Global_262145.f_17251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17211 && iVar1 < Global_262145.f_17252)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17212 && iVar1 < Global_262145.f_17253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17213 && iVar1 < Global_262145.f_17254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17214 && iVar1 < Global_262145.f_17255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17215 && iVar1 < Global_262145.f_17256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17216 && iVar1 < Global_262145.f_17257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17217 && iVar1 < Global_262145.f_17258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17218 && iVar1 < Global_262145.f_17259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17219 && iVar1 < Global_262145.f_17260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17220 && iVar1 < Global_262145.f_17261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17221 && iVar1 < Global_262145.f_17262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17222 && iVar1 < Global_262145.f_17263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17223 && iVar1 < Global_262145.f_17264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17224 && iVar1 < Global_262145.f_17265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17225 && iVar1 < Global_262145.f_17266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17226 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17227 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17228 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17229 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17230 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18233 && iVar1 < Global_262145.f_18229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18234 && iVar1 < Global_262145.f_18230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18235 && iVar1 < Global_262145.f_18231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18236 && iVar1 < Global_262145.f_18232)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19073 && iVar1 < Global_262145.f_19081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19074 && iVar1 < Global_262145.f_19082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19075 && iVar1 < Global_262145.f_19083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19076 && iVar1 < Global_262145.f_19084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19077 && iVar1 < Global_262145.f_19085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19078 && iVar1 < Global_262145.f_19086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("apc"))
	{
	}
	else if (iParam0 == joaat("dune3"))
	{
	}
	else if (iParam0 == joaat("halftrack"))
	{
	}
	else if (iParam0 == joaat("oppressor"))
	{
	}
	else if (iParam0 == joaat("tampa3"))
	{
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
	}
	return iVar0;
}

int func_135()
{
	return 0;
}

int func_136()
{
	return 1;
}

int func_137()
{
	return 1;
}

int func_138()
{
	if (unk_0xA438D14FADC1185B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_139()
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

int func_140(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	sVar1 = unk_0x76FEACB77B140714(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x35302CD5A5D37EED(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_131(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2137828D03306CAF(Global_89283[iVar0]))
		{
			if (Global_89283[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x2137828D03306CAF(Global_89253[iVar0]) && unk_0x7FAC45D56235AB39(Global_89253[iVar0], 0))
			{
				if (Global_89253[iVar0] == iParam0 && unk_0xD3B21CE53AA7BE51(Global_89253[iVar0]) == unk_0xD3B21CE53AA7BE51(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(Global_68628.f_484[24]))
	{
		if (iParam0 == Global_68628.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x2137828D03306CAF(Global_68628.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68628.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x2137828D03306CAF(iParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_145(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iVar9], 0))
		{
			if (unk_0x62B2A00573987368(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_145(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_146()
{
	var uVar0;
	
	func_156(&uVar0, unk_0xD887411BD4A4A92D());
	func_155(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_154(&uVar0, unk_0xDA870B7547A455EA());
	func_149(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_148(&uVar0, unk_0x0FD588FC21950895());
	func_147(&uVar0, unk_0x15C180E135C728D1());
	return uVar0;
}

void func_147(var uParam0, int iParam1)
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

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_149(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_150(int iParam0, int iParam1)
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

var func_151(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_152(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(var uParam0)
{
	return uParam0 & 15;
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_157(var uParam0, int iParam1)
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
			uParam0->f_4 = func_158(0, 1);
			uParam0->f_12 = 0;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_158(0, 1);
			uParam0->f_12 = 0;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_158(1, 1);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_158(1, 2);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 19);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_158(1, 1);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_158(1, 2);
			uParam0->f_12 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 19);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_158(2, 1);
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_158(2, 1);
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_158(2, 1);
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 20);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 14);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 28);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 27);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 27);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 7);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 27);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 24);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 11);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 10);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 11);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 9);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 9);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 8);
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
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 22);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
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
			if (func_139())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_139())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 13);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 2);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 0);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 21);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 30);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 23);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_103236.f_32211.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_167(Global_103236.f_32211.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_103236.f_32211.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_103236.f_32211.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_103236.f_32211.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_9, 19))
	{
		if (!func_167(Global_103236.f_2164.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_103236.f_2164.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_103236.f_2164.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(uParam0->f_9, 20))
	{
		if (!func_167(Global_103236.f_2164.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_103236.f_2164.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_103236.f_2164.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_158(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_83(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_159(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_159(int iParam0, var uParam1, int iParam2)
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
			if (Global_103236.f_8866.f_99.f_58[128] && !Global_103236.f_8866.f_99.f_58[131])
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
					if (Global_103236.f_8866.f_99.f_58[119])
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
			else if (Global_103236.f_8866.f_99.f_58[118])
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

void func_160(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_157(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 10))
		{
			func_165(iParam0);
			func_164(uParam1, &(Global_103236.f_32211.f_69[Global_68628.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 11))
			{
				Global_103236.f_32211.f_1864[Global_68628.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_103236.f_32211.f_1934[Global_68628.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_103236.f_32211.f_1864[Global_68628.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_103236.f_32211.f_1934[Global_68628.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_103236.f_32211.f_1958[Global_68628.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_161(iParam0, 1);
		}
	}
}

void func_161(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_163(iParam0, 0))
		{
			func_162(iParam0, 1, 0);
			func_162(iParam0, 2, 0);
			func_162(iParam0, 3, 0);
			func_162(iParam0, 4, 0);
			func_162(iParam0, 0, 1);
			Global_68628[iParam0] = 1;
		}
	}
	else
	{
		func_162(iParam0, 0, 0);
	}
}

void func_162(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_32211[iParam0]), iParam1);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_103236.f_32211[iParam0]), iParam1);
	}
}

bool func_163(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_32211[iParam0], iParam1);
}

void func_164(var uParam0, var uParam1)
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

void func_165(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_157(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x2137828D03306CAF(Global_68628.f_139[iParam0]))
		{
			unk_0x216B434C1A609F5B(Global_68628.f_139[iParam0], 1, 1);
			unk_0xFECCD8AF38671477(&(Global_68628.f_139[iParam0]));
			Global_68628.f_139[iParam0] = 0;
		}
		if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 13))
		{
			func_161(iParam0, 0);
		}
	}
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 145;
	}
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x2137828D03306CAF(Global_89253[iVar0]))
		{
			if (Global_89253[iVar0] == iParam0)
			{
				return Global_89263[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_167(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_168(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		func_171(uParam1);
		uParam1->f_66 = unk_0xD3B21CE53AA7BE51(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x76FEACB77B140714(iParam0), 16);
		*uParam1 = unk_0x8721B6183C713CE4(iParam0);
		unk_0x89AFA08324111FDC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA410C943ACB84245(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA6349759D1FE6F1C(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x289A21B43A9C74AA(iParam0);
		uParam1->f_67 = unk_0x30DA210F0843C9E9(iParam0);
		uParam1->f_69 = unk_0xEDE232D4FB7953E1(iParam0);
		uParam1->f_70 = unk_0xEC63E312ACFB2C99(iParam0);
		unk_0xD9F5533763950EB1(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x4140FA0DCDF92827(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xD046431B0EBE3CAF(iParam0, 2))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 28);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 3))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 29);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 30);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 1))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4294F2710818C474(iParam0, 0))
		{
			uParam1->f_68 = unk_0x69F266E1CAA28F73(iParam0);
		}
		if (unk_0xDA6E804770521A18(uParam1->f_66))
		{
			if (unk_0x5C6E7D7E0AC7BBD7(iParam0))
			{
				switch (unk_0x720776EFC73F5B23(iParam0))
				{
					case 2:
					case 0:
						unk_0x507FE690B1271947(&(uParam1->f_77), 23);
						unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x507FE690B1271947(&(uParam1->f_77), 23);
						unk_0x507FE690B1271947(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7C5D0771C19AD7FF(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 9);
		}
		if (unk_0xED329BF1C4277ABD(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 10);
		}
		if (unk_0x6143D7FE8749E532(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 13);
			unk_0xF036A2A8ADC88DFC(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9139A45B8DE75586(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 12);
		}
		func_170(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x519A3AD50A2673BF(iParam0, iVar0 + 1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_169(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xEDC05B7EC722C843(iParam0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 11);
		}
		if (unk_0x30BD96CB13063EC9(iParam0, "IgnoredByQuickSave") && unk_0x42EC87EC81CA5339(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 27);
		}
	}
}

int func_169(int iParam0)
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

int func_170(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7FAC45D56235AB39(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x300A7FCC6B376752(*iParam0) == 0)
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
			if (unk_0x9CFA3995FF093229(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x855369FDBD418C02(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xF9562C9903A5FC6A(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xF9562C9903A5FC6A(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_171(var uParam0)
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

void func_172(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_165(iParam0);
	func_161(iParam0, 0);
}

int func_173(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_174(Param0, iParam3, 1);
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

int func_174(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86960[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86960[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_175(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x4A2E6F541CD8C36E(Param0, Global_86960[iVar0 /*10*/].f_3, 1);
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

bool func_175(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iParam0], 0);
}

int func_176(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68628.f_139[iParam0];
}

void func_177(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_178(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_178(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0x19D9DFABC3C7D219();
	if (unk_0x2137828D03306CAF(iVar0))
	{
		if (!unk_0x03322C3918511AA0(iVar0))
		{
			unk_0x216B434C1A609F5B(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x7FAC45D56235AB39(iVar0, 0))
		{
			if (bParam18)
			{
				func_183(iVar0);
			}
			if (unk_0x9A46207BB68ED2F0(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xD1EE0E9FCD74A37B(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_180(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				if (unk_0xEB018752B4AE9E13(iVar0, joaat("taxi")))
				{
					if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91() && unk_0x8F8E5C33266ED978(iVar0, -1, 0) != 0)
					{
						if (unk_0x4A2E6F541CD8C36E(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xD1EE0E9FCD74A37B(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_144(iVar0, func_81(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_179(Param11))
				{
					if (unk_0x7FAC45D56235AB39(iVar0, 0))
					{
						iVar13 = unk_0xD3B21CE53AA7BE51(iVar0);
						unk_0x66A328A3347E9454(iVar0, &Var4, &Var7);
						if (unk_0x0F93427D94EAEAA2(iVar13))
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
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x17F1CA1754EDB8DB(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x2681BA3707AF6DA7(iVar0, fParam10);
						unk_0x8E979F037EACE55A(iVar0, Param7, 1, 0, 0, 1);
						unk_0x07C140F31B3CDAFA(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x2DEA38A68AA89671(iVar0, 0, 1, 0);
							unk_0xE03057DEE542DC11(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x03322C3918511AA0(iVar0) || !unk_0xDDB64A4460B8504C(iVar0, 1))
						{
							unk_0x216B434C1A609F5B(iVar0, 1, 1);
						}
						if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iVar0, 0))
						{
							unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), unk_0xD1EE0E9FCD74A37B(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xA613FDAC42DBBFAD(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xDFBCAA7C30643578(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x2137828D03306CAF(iVar0))
				{
					if (unk_0x03322C3918511AA0(iVar0))
					{
						unk_0xFECCD8AF38671477(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x03322C3918511AA0(iVar0))
			{
				unk_0x216B434C1A609F5B(iVar0, 1, 0);
			}
			iVar14 = unk_0x8F8E5C33266ED978(iVar0, -1, 0);
			if (unk_0x2137828D03306CAF(iVar14) && !unk_0x769F0F6444C1ABE0(iVar14))
			{
				unk_0x8E979F037EACE55A(iVar14, unk_0xD1EE0E9FCD74A37B(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x8F8E5C33266ED978(iVar0, 0, 0);
				if (unk_0x2137828D03306CAF(iVar14) && !unk_0x769F0F6444C1ABE0(iVar14))
				{
					unk_0x8E979F037EACE55A(iVar14, unk_0xD1EE0E9FCD74A37B(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x8F8E5C33266ED978(iVar0, 1, 0);
				if (unk_0x2137828D03306CAF(iVar14) && !unk_0x769F0F6444C1ABE0(iVar14))
				{
					unk_0x8E979F037EACE55A(iVar14, unk_0xD1EE0E9FCD74A37B(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x8F8E5C33266ED978(iVar0, 2, 0);
				if (unk_0x2137828D03306CAF(iVar14) && !unk_0x769F0F6444C1ABE0(iVar14))
				{
					unk_0x8E979F037EACE55A(iVar14, unk_0xD1EE0E9FCD74A37B(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xA613FDAC42DBBFAD(&iVar0);
		}
	}
}

int func_179(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_182(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x82D9CF397BA8C885(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_181(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_181(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_181(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_181(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_181(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_181(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_181(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_181(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_181(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_181(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_181(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_181(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_181(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_181(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_181(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_181(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_182(struct<3> Param0)
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

void func_183(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (unk_0xB01B1648698791BB(iParam0) <= 200f)
			{
				unk_0x525CB8A0699017B3(iParam0, 500f);
			}
			if (unk_0x67ED3C44A2B3E8F2(iParam0) <= 700f)
			{
				unk_0x525CB8A0699017B3(iParam0, 900f);
			}
			if (unk_0xE86A53C202B21FAB(iParam0) < 200)
			{
				unk_0x525CB8A0699017B3(iParam0, 500f);
			}
		}
	}
}

bool func_184(struct<3> Param0, int iParam3)
{
	return func_185(Global_94043.f_2875.f_12.f_66, Param0, iParam3);
}

int func_185(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_186() };
	}
	unk_0xDE3E0D9E2E663E9A(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_186()
{
	return 2.55f, 5.665f, 2.55f;
}

Vector3 func_187()
{
	return 3.01f, 11.01f, 6.01f;
}

int func_188(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 2728.995f, 4143.165f, 41.02986f };
	*uParam1 = { 2719.126f, 4144.691f, 47.88543f };
	*uParam2 = 13f;
	return 1;
}

void func_189(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0x8A41C463063AFC8E();
	if (unk_0xB8B285A272E7A79E(iVar0))
	{
		func_306(0);
		if (bParam9)
		{
			unk_0x783DC14807146EC1(unk_0x8A41C463063AFC8E(), 1);
		}
		if (bParam8)
		{
			switch (func_81())
			{
				case 0:
					if (func_305(unk_0x2A5EB8B0FE590B91(), 8, 15))
					{
						func_191(unk_0x2A5EB8B0FE590B91(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_305(unk_0x2A5EB8B0FE590B91(), 9, 6))
					{
						func_191(unk_0x2A5EB8B0FE590B91(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_305(unk_0x2A5EB8B0FE590B91(), 8, 1) || func_305(unk_0x2A5EB8B0FE590B91(), 8, 10))
					{
						func_191(unk_0x2A5EB8B0FE590B91(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_305(unk_0x2A5EB8B0FE590B91(), 8, 4))
					{
						func_191(unk_0x2A5EB8B0FE590B91(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0xF128ECFE9D500DA6(func_190(unk_0x8A41C463063AFC8E()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0x4FF1902E8A10F154(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x03F063804FDEDF1C(Param0, 30f);
		}
		unk_0xCF5A819ECA466C6C(Param0, 30f, 0);
		unk_0x22B46CFA2D746C96(iVar0, 0, 0);
		unk_0x89CE8936E61ED35B(iVar0, 0);
		unk_0x7155D1139B85886E(iVar0, 1);
		if (bParam12)
		{
			unk_0xA6C8C7573424CA93(0);
			unk_0xDA0C5084402DA99C(0);
		}
		unk_0x0508903FC1B0ED24();
		if (iParam11 == 1)
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (iParam3 == 1)
		{
			unk_0x44FC1DFD412D8376(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_43 = 0;
			if (func_413(unk_0x2A5EB8B0FE590B91()))
			{
				iLocal_43 = unk_0x99CB6E6CF241AAD5(unk_0x2A5EB8B0FE590B91());
				unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_23(500, 0);
		}
	}
}

Vector3 func_190(var uParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(uParam0), 0);
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (unk_0x769F0F6444C1ABE0(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_69619++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0xD3B21CE53AA7BE51(iParam0);
	if (iParam5 == 0)
	{
		Global_69621[1 /*14*/] = { func_241(iVar10, iParam1, iParam2) };
		if (!func_240(iParam3))
		{
			Global_69619 = (Global_69619 - 1);
			return 0;
		}
		func_233(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_231(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_231(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_230(iParam0, 1);
			if (!func_229(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_230(iParam0, 0);
			if (!func_228(iVar10, 14, iVar8, -1) && !func_227(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_230(iParam0, 2);
			}
		}
		unk_0x102F8D0057596547(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_69664 };
		}
		else
		{
			uVar11 = { func_223(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69621[1 /*14*/] = { func_241(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_69681 };
						}
						else
						{
							uVar28 = { func_220(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69621[1 /*14*/] = { func_241(iVar10, 14, uVar28[iVar1]) };
							func_211(iParam0, Global_69621[1 /*14*/].f_12, Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4);
							func_233(14);
							if (Global_69619 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_203(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_202(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x6CA29A70250F194F(iParam0, func_201(iVar0), Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4, unk_0xE2ACC4C8F4AEF9D9(iParam0, func_201(iVar0)));
						}
						else
						{
							unk_0x6CA29A70250F194F(iParam0, func_201(iVar0), Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4, iParam4);
						}
						func_233(iVar0);
						if (Global_69619 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_203(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69621[1 /*14*/] = { func_241(iVar10, iVar0, func_200(iParam0, iVar0, -1)) };
				if (unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_199(iParam0, iVar10, &iVar4, 1))
							{
								func_191(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_223(iVar10, 0) };
						func_191(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_241(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_197(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_191(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_241(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_197(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_191(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_241(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_197(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_191(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_241(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_197(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_191(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_241(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_197(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_191(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_220(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69621[1 /*14*/] = { func_241(iVar10, 14, uVar69[iVar1]) };
			func_211(iParam0, Global_69621[1 /*14*/].f_12, Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4);
			func_233(14);
			if (Global_69619 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_203(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_211(iParam0, Global_69621[1 /*14*/].f_12, Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4);
		func_233(iParam1);
		if (Global_69619 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_203(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x6CA29A70250F194F(iParam0, func_201(iParam1), Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4, unk_0xE2ACC4C8F4AEF9D9(iParam0, func_201(iParam1)));
		}
		else
		{
			unk_0x6CA29A70250F194F(iParam0, func_201(iParam1), Global_69621[1 /*14*/].f_3, Global_69621[1 /*14*/].f_4, iParam4);
		}
		if (Global_69619 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_203(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_194(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69619 == 1)
	{
		if (func_199(iParam0, iVar10, &iVar4, 0))
		{
			func_191(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_192(iParam0, iVar10, &iVar4))
		{
			func_191(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69619 = (Global_69619 - 1);
	return 1;
}

int func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_193(iParam1);
	if (Global_103236.f_2164.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_305(iParam0, Global_103236.f_2164.f_539[iVar0 /*65*/].f_64, Global_103236.f_2164.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_103236.f_2164.f_539[iVar0 /*65*/].f_62;
			Global_103236.f_2164.f_539[iVar0 /*65*/].f_63 = -99;
			Global_103236.f_2164.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_196(iParam0, 12, iVar0))
	{
		if (func_195(iParam0, iParam1, iParam2))
		{
			iVar1 = func_193(iParam0);
			if (iParam1 == 3)
			{
				Global_103236.f_2164.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_103236.f_2164.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_195(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_196(int iParam0, int iParam1, int iParam2)
{
	Global_69621[1 /*14*/] = { func_241(iParam0, iParam1, iParam2) };
	return unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 2);
}

int func_197(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_220(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_198(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_228(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_227(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_228(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_227(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_228(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_227(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_193(iParam1);
	if (Global_103236.f_2164.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_305(iParam0, Global_103236.f_2164.f_539[iVar0 /*65*/].f_61, Global_103236.f_2164.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_103236.f_2164.f_539[iVar0 /*65*/].f_59;
			Global_103236.f_2164.f_539[iVar0 /*65*/].f_60 = -99;
			Global_103236.f_2164.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_305(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_305(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_230(iParam0, iParam2);
			}
		}
		else
		{
			return func_231(iParam0, iParam1);
		}
	}
	return -99;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_193(iParam0);
		Global_103236.f_2164.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_103236.f_2164.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_231(iParam0, 1);
				iVar0 = func_210(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_231(iParam0, 2);
				iVar0 = func_210(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_202(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_209(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_208(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_207(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_207(iParam0, 3, 135, 150))
									{
										iVar0 = func_206(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_207(iParam0, 3, 209, 222))
									{
										iVar0 = func_206(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_207(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_206(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_206(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_206(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_206(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_207(iParam0, 3, 176, 191) && !func_207(iParam0, 3, 227, 242))
									{
										iVar0 = func_206(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_231(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_231(iParam0, 11);
								iVar5 = func_205(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_231(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_204(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_231(iParam0, 8);
								iVar8 = func_231(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_205(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_205(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_231(iParam0, 11);
								iVar0 = func_205(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_206(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_206(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_196(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_207(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_231(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_193(iParam0);
		Global_103236.f_2164.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_103236.f_2164.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x04B3C2AC5FF924D1(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x31AC59B7C21A2047(iParam0, 34, 0);
			unk_0x31AC59B7C21A2047(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xDEC831C0189DE207(iParam0, iParam1, iParam2, iParam3, unk_0x591AF4C50B46E014());
		if (iParam1 == 0)
		{
			iVar0 = func_216(iParam0, iParam2, iParam3, iParam1);
			if (func_212(unk_0xD3B21CE53AA7BE51(iParam0), 14, iVar0, unk_0x120893D3275A66D9(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x31AC59B7C21A2047(iParam0, 34, 1);
				unk_0x31AC59B7C21A2047(iParam0, 36, 1);
			}
			else
			{
				unk_0x31AC59B7C21A2047(iParam0, 34, 0);
				unk_0x31AC59B7C21A2047(iParam0, 36, 0);
			}
		}
	}
}

int func_212(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_213(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x62B1B843DC27A464(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_213(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x62B1B843DC27A464(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xC14DC3A90DA1385C(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_215(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xC507E3262E7D4F77(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x1308970ABD8F659D(iVar17, &Var0);
			if (!unk_0x17983D8EA6EAF9C8(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x93E3EECEE86E8852(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_214(iParam0, func_201(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69743.f_26[iParam2] && iParam1 == Global_69743[iParam2]) && Global_69743.f_13[iParam2] != 0)
		{
			return Global_69743.f_13[iParam2];
		}
		iVar41 = unk_0xC507E3262E7D4F77(iParam3, 6, -1, 0, -1, func_201(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0x1A330DE95D7564B0(iVar38, &Var21);
			if (!unk_0x17983D8EA6EAF9C8(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_69743.f_13[iParam2] = Var21.f_1;
					Global_69743[iParam2] = iParam1;
					Global_69743.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_219(iParam3);
	}
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	iVar1 = unk_0x120893D3275A66D9(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_218(unk_0xD3B21CE53AA7BE51(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_218(unk_0xD3B21CE53AA7BE51(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x3560FACDEBDE3EDB(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x412464313C313BD3(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_217(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_219(iParam3);
}

int func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xC14DC3A90DA1385C(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xC507E3262E7D4F77(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x1308970ABD8F659D(iVar17, &Var0);
			if (!unk_0x17983D8EA6EAF9C8(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_215(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x93E3EECEE86E8852(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xC507E3262E7D4F77(iParam3, 6, -1, 0, -1, func_201(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0x1A330DE95D7564B0(iVar37, &Var20);
			if (!unk_0x17983D8EA6EAF9C8(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_214(iParam0, func_201(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_219(int iParam0)
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

struct<10> func_220(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_222(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_222(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_222(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_222(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_222(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_222(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_222(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_222(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_222(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_222(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_222(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_221(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_222(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_222(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_222(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_222(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_222(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_222(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_222(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_222(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_222(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_222(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_221(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_222(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_222(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_222(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_222(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_222(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_222(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_222(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_222(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_222(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_222(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_221(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_222(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_222(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_222(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_222(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_222(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_222(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_222(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_222(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_222(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_222(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_222(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_222(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_222(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_222(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_222(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_222(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_222(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_222(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_222(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_222(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_222(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_222(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_222(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_222(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_222(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_222(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_221(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_222(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_222(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_222(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_222(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_222(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_222(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_222(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_222(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_222(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_222(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_222(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_222(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_222(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_222(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_222(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_222(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_222(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_222(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_222(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_222(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_222(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_222(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_222(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_222(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_222(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_221(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_221(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x30835DC160A3CA30(iParam2, &Var1);
		if (!unk_0x17983D8EA6EAF9C8(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xC76D55083629913F(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_218(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_223(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_103236.f_8866.f_99.f_58[120])
					{
						func_226(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_226(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_226(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_226(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_226(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_226(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_226(&Var1, -99, -99, Global_103236.f_2164.f_539.f_196[0], Global_103236.f_2164.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_226(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_226(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_226(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_226(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_226(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_226(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_226(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_226(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_226(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_226(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_226(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_226(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_226(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_226(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_226(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_226(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_226(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_226(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_226(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_226(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_226(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_226(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_226(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_226(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_226(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_226(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_226(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_226(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_226(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_226(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_226(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_226(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_226(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_226(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_226(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_226(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_226(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_226(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_226(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_226(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_226(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_226(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_226(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_226(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_226(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_226(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_226(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_224(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_226(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_226(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_226(&Var1, -99, -99, Global_103236.f_2164.f_539.f_196[1], Global_103236.f_2164.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_226(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_226(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_226(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_226(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_226(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_226(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_226(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_226(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_226(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_226(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_226(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_226(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_226(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_226(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_226(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_226(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_226(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_226(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_226(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_226(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_226(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_226(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_226(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_226(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_226(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_226(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_226(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_226(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_226(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_226(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_226(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_226(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_226(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_226(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_226(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_226(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_226(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_226(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_226(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_226(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_226(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_226(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_226(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_226(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_224(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_226(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_226(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_226(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_226(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_226(&Var1, -99, -99, Global_103236.f_2164.f_539.f_196[2], Global_103236.f_2164.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_226(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_226(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_226(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_226(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_226(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_226(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_226(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_226(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_226(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_226(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_226(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_226(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_226(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_226(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_226(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_226(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_226(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_226(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_226(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_226(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_226(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_226(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_226(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_226(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_226(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_226(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_226(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_226(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_226(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_226(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_226(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_226(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_226(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_226(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_226(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_226(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_226(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_226(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_226(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_226(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_226(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_226(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_226(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_224(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_226(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_226(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_226(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_226(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_226(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_226(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_226(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_226(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_226(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_226(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_226(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_226(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_226(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_226(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_226(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_226(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_226(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_226(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_226(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_226(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_226(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_226(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_226(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_226(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_226(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_226(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_224(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_226(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_226(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_226(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_226(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_226(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_226(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_226(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_226(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_226(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_226(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_226(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_226(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_226(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_226(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_226(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_226(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_226(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_226(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_226(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_226(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_226(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_226(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_226(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_226(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_226(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_226(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_226(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_226(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_224(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_224(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x0E5955F696EA2430(iVar0, 0);
	unk_0x6F9882029935B51C((iParam2 - iParam3), &Var1);
	if (!unk_0x17983D8EA6EAF9C8(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0x831A922F019BEDDB(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x93E3EECEE86E8852(&Var19);
						unk_0x74B0E535B02DBC75(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_225(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_225(Var16.f_2)] = func_218(iParam1, Var16.f_0, func_225(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_225(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_213(iParam0, iParam2, 14, 3);
						}
						return (unk_0x62B1B843DC27A464(iParam3, joaat("HAT"), 1) || unk_0x62B1B843DC27A464(func_213(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_213(iParam0, iParam2, 1, 3);
						}
						return (unk_0x62B1B843DC27A464(iParam3, joaat("HAT"), 0) || unk_0x62B1B843DC27A464(func_213(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_213(iParam0, iParam2, 14, 4);
						}
						return (unk_0x62B1B843DC27A464(iParam3, joaat("HAT"), 1) || unk_0x62B1B843DC27A464(func_213(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_213(iParam0, iParam2, 1, 4);
						}
						return (unk_0x62B1B843DC27A464(iParam3, joaat("HAT"), 0) || unk_0x62B1B843DC27A464(func_213(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_228(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_213(iParam0, iParam2, 1, 3);
					}
					if (unk_0x62B1B843DC27A464(iParam3, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_213(iParam0, iParam2, 1, 4);
					}
					if (unk_0x62B1B843DC27A464(iParam3, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_213(iParam0, iParam2, 14, 3);
					}
					return unk_0x62B1B843DC27A464(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_213(iParam0, iParam2, 14, 4);
					}
					return unk_0x62B1B843DC27A464(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x769F0F6444C1ABE0(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x6FDEA34AE915A47D(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_219(iParam1);
	}
	iVar1 = unk_0xF2E056BC763F0423(iParam0, iParam1);
	return func_216(iParam0, iVar0, iVar1, iParam1);
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x769F0F6444C1ABE0(iParam0))
	{
		return -99;
	}
	iVar0 = func_201(iParam1);
	iVar1 = unk_0x29D988205B5459BD(iParam0, iVar0);
	iVar2 = unk_0x0B56C00A178536FE(iParam0, iVar0);
	return func_232(iParam0, iVar1, iVar2, iParam1);
}

int func_232(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_201(iParam3);
	iVar1 = unk_0xC4022A1AA269A6F1(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x07F938BC911CA0DD(uParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_233(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 1) && !unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 6))
	{
		func_239(iParam0, Global_69621[1 /*14*/].f_5, Global_69621[1 /*14*/].f_2, 2, Global_69621[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 1) && unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_234(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_234(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_234(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_234(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69618;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_238(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_237(iVar2, iVar0, 0);
		unk_0xF6082E2ADA1C795B(&uVar3, iVar1);
		func_235(iVar2, uVar3, iVar0, 1, 0);
	}
}

void func_235(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_236(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, iParam3);
	}
}

int func_236(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_30();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_236(iParam1)];
	if (unk_0xC225A90A8DE0D96B(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_238(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 6309;
	if ((bParam4 && Global_2598254) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 967;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 967;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 967;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 967;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 967;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 967;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 967;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 967;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 931;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 931;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 931;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 931;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 931;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 931;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 931;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 931;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 931;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1019;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1019;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1019;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1019;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1019;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1019;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1019;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1019;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 967;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 967;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 967;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 967;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 967;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 967;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 967;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 967;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1019;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1019;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1019;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1019;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1019;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1019;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1019;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1019;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2598254)
		{
			iVar0 = unk_0x34F7C079C0C6ABA7(iParam0);
		}
		else
		{
			iVar0 = unk_0x105AF8BF151E892A(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x34F7C079C0C6ABA7(iParam0);
	}
	else
	{
		iVar0 = unk_0x105AF8BF151E892A(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1754;
					break;
				
				case 1:
					*uParam2 = 1755;
					break;
				
				case 2:
					*uParam2 = 1756;
					break;
				
				case 3:
					*uParam2 = 1757;
					break;
				
				case 4:
					*uParam2 = 1758;
					break;
				
				case 5:
					*uParam2 = 1759;
					break;
				
				case 6:
					*uParam2 = 1766;
					break;
				
				case 7:
					*uParam2 = 1767;
					break;
				
				case 8:
					*uParam2 = 1768;
					break;
				
				case 9:
					*uParam2 = 1769;
					break;
				
				case 10:
					*uParam2 = 1770;
					break;
				
				case 11:
					*uParam2 = 1771;
					break;
				
				case 12:
					*uParam2 = 1772;
					break;
				
				case 13:
					*uParam2 = 1780;
					break;
				
				case 14:
					*uParam2 = 1781;
					break;
				
				case 15:
					*uParam2 = 1882;
					break;
				
				case 16:
					*uParam2 = 1883;
					break;
				
				case 17:
					*uParam2 = 1914;
					break;
				
				case 18:
					*uParam2 = 1928;
					break;
				
				case 19:
					*uParam2 = 1929;
					break;
				
				case 20:
					*uParam2 = 1930;
					break;
				
				case 21:
					*uParam2 = 1931;
					break;
				
				case 22:
					*uParam2 = 1932;
					break;
				
				case 23:
					*uParam2 = 2036;
					break;
				
				case 24:
					*uParam2 = 2037;
					break;
				
				case 25:
					*uParam2 = 2063;
					break;
				
				case 26:
					*uParam2 = 2064;
					break;
				
				case 27:
					*uParam2 = 2065;
					break;
				
				case 28:
					*uParam2 = 2066;
					break;
				
				case 29:
					*uParam2 = 2067;
					break;
				
				case 30:
					*uParam2 = 2068;
					break;
				
				case 31:
					*uParam2 = 2069;
					break;
				
				case 32:
					*uParam2 = 2070;
					break;
				
				case 33:
					*uParam2 = 2071;
					break;
				
				case 34:
					*uParam2 = 2072;
					break;
				
				case 35:
					*uParam2 = 2319;
					break;
				
				case 36:
					*uParam2 = 2320;
					break;
				
				case 37:
					*uParam2 = 2374;
					break;
				
				case 38:
					*uParam2 = 2375;
					break;
				
				case 39:
					*uParam2 = 2376;
					break;
				
				case 40:
					*uParam2 = 2377;
					break;
				
				case 41:
					*uParam2 = 2436;
					break;
				
				case 42:
					*uParam2 = 2437;
					break;
				
				case 43:
					*uParam2 = 2438;
					break;
				
				case 44:
					*uParam2 = 2439;
					break;
				
				case 45:
					*uParam2 = 2440;
					break;
				
				case 46:
					*uParam2 = 2441;
					break;
				
				case 47:
					*uParam2 = 2442;
					break;
				
				case 48:
					*uParam2 = 2443;
					break;
				
				case 49:
					*uParam2 = 2444;
					break;
				
				case 50:
					*uParam2 = 2445;
					break;
				
				case 51:
					*uParam2 = 2574;
					break;
				
				case 52:
					*uParam2 = 2575;
					break;
				
				case 53:
					*uParam2 = 2576;
					break;
				
				case 54:
					*uParam2 = 2577;
					break;
				
				case 55:
					*uParam2 = 2578;
					break;
				
				case 56:
					*uParam2 = 2579;
					break;
				
				case 57:
					*uParam2 = 2580;
					break;
				
				case 58:
					*uParam2 = 2581;
					break;
				
				case 59:
					*uParam2 = 2582;
					break;
				
				case 60:
					*uParam2 = 2583;
					break;
				
				case 61:
					*uParam2 = 2584;
					break;
				
				case 62:
					*uParam2 = 3181;
					break;
				
				case 63:
					*uParam2 = 3182;
					break;
				
				case 64:
					*uParam2 = 3183;
					break;
				
				case 65:
					*uParam2 = 3184;
					break;
				
				case 66:
					*uParam2 = 3185;
					break;
				
				case 67:
					*uParam2 = 3186;
					break;
				
				case 68:
					*uParam2 = 3654;
					break;
				
				case 69:
					*uParam2 = 3655;
					break;
				
				case 70:
					*uParam2 = 3656;
					break;
				
				case 71:
					*uParam2 = 3657;
					break;
				
				case 72:
					*uParam2 = 3658;
					break;
				
				case 73:
					*uParam2 = 3659;
					break;
				
				case 74:
					*uParam2 = 3660;
					break;
				
				case 75:
					*uParam2 = 3661;
					break;
				
				case 76:
					*uParam2 = 3662;
					break;
				
				case 77:
					*uParam2 = 3663;
					break;
				
				case 78:
					*uParam2 = 3767;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3768;
					break;
				
				case 80:
					*uParam2 = 3769;
					break;
				
				case 81:
					*uParam2 = 3770;
					break;
				
				case 82:
					*uParam2 = 3771;
					break;
				
				case 83:
					*uParam2 = 3772;
					break;
				
				case 84:
					*uParam2 = 3773;
					break;
				
				case 85:
					*uParam2 = 3774;
					break;
				
				case 86:
					*uParam2 = 3877;
					break;
				
				case 87:
					*uParam2 = 3878;
					break;
				
				case 88:
					*uParam2 = 3879;
					break;
				
				case 89:
					*uParam2 = 5312;
					break;
				
				case 90:
					*uParam2 = 5313;
					break;
				
				case 91:
					*uParam2 = 5314;
					break;
				
				case 92:
					*uParam2 = 5315;
					break;
				
				case 93:
					*uParam2 = 5316;
					break;
				
				case 94:
					*uParam2 = 5317;
					break;
				
				case 95:
					*uParam2 = 5318;
					break;
				
				case 96:
					*uParam2 = 5319;
					break;
				
				case 97:
					*uParam2 = 5320;
					break;
				
				case 98:
					*uParam2 = 5321;
					break;
				
				case 99:
					*uParam2 = 5322;
					break;
				
				case 100:
					*uParam2 = 5323;
					break;
				
				case 101:
					*uParam2 = 5369;
					break;
				
				case 102:
					*uParam2 = 5370;
					break;
				
				case 103:
					*uParam2 = 5371;
					break;
				
				case 104:
					*uParam2 = 5372;
					break;
				
				case 105:
					*uParam2 = 5373;
					break;
				
				case 106:
					*uParam2 = 5374;
					break;
				
				case 107:
					*uParam2 = 5375;
					break;
				
				case 108:
					*uParam2 = 5376;
					break;
				
				case 109:
					*uParam2 = 5377;
					break;
				
				case 110:
					*uParam2 = 5378;
					break;
				
				case 111:
					*uParam2 = 5379;
					break;
				
				case 112:
					*uParam2 = 5380;
					break;
				
				case 113:
					*uParam2 = 5381;
					break;
				
				case 114:
					*uParam2 = 5382;
					break;
				
				case 115:
					*uParam2 = 5383;
					break;
				
				case 116:
					*uParam2 = 5384;
					break;
				
				case 117:
					*uParam2 = 5385;
					break;
				
				case 118:
					*uParam2 = 5386;
					break;
				
				case 119:
					*uParam2 = 5387;
					break;
				
				case 120:
					*uParam2 = 5388;
					break;
				
				case 121:
					*uParam2 = 5389;
					break;
				
				case 122:
					*uParam2 = 5390;
					break;
				
				case 123:
					*uParam2 = 5391;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1760;
					break;
				
				case 1:
					*uParam2 = 1761;
					break;
				
				case 2:
					*uParam2 = 1762;
					break;
				
				case 3:
					*uParam2 = 1763;
					break;
				
				case 4:
					*uParam2 = 1764;
					break;
				
				case 5:
					*uParam2 = 1765;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1915;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2073;
					break;
				
				case 26:
					*uParam2 = 2074;
					break;
				
				case 27:
					*uParam2 = 2075;
					break;
				
				case 28:
					*uParam2 = 2076;
					break;
				
				case 29:
					*uParam2 = 2077;
					break;
				
				case 30:
					*uParam2 = 2078;
					break;
				
				case 31:
					*uParam2 = 2079;
					break;
				
				case 32:
					*uParam2 = 2080;
					break;
				
				case 33:
					*uParam2 = 2081;
					break;
				
				case 34:
					*uParam2 = 2082;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2378;
					break;
				
				case 38:
					*uParam2 = 2379;
					break;
				
				case 39:
					*uParam2 = 2380;
					break;
				
				case 40:
					*uParam2 = 2381;
					break;
				
				case 41:
					*uParam2 = 2446;
					break;
				
				case 42:
					*uParam2 = 2447;
					break;
				
				case 43:
					*uParam2 = 2448;
					break;
				
				case 44:
					*uParam2 = 2449;
					break;
				
				case 45:
					*uParam2 = 2450;
					break;
				
				case 46:
					*uParam2 = 2451;
					break;
				
				case 47:
					*uParam2 = 2452;
					break;
				
				case 48:
					*uParam2 = 2453;
					break;
				
				case 49:
					*uParam2 = 2454;
					break;
				
				case 50:
					*uParam2 = 2455;
					break;
				
				case 51:
					*uParam2 = 2585;
					break;
				
				case 52:
					*uParam2 = 2586;
					break;
				
				case 53:
					*uParam2 = 2587;
					break;
				
				case 54:
					*uParam2 = 2588;
					break;
				
				case 55:
					*uParam2 = 2589;
					break;
				
				case 56:
					*uParam2 = 2590;
					break;
				
				case 57:
					*uParam2 = 2591;
					break;
				
				case 58:
					*uParam2 = 2592;
					break;
				
				case 59:
					*uParam2 = 2593;
					break;
				
				case 60:
					*uParam2 = 2594;
					break;
				
				case 61:
					*uParam2 = 2595;
					break;
				
				case 62:
					*uParam2 = 3187;
					break;
				
				case 63:
					*uParam2 = 3188;
					break;
				
				case 64:
					*uParam2 = 3189;
					break;
				
				case 65:
					*uParam2 = 3190;
					break;
				
				case 66:
					*uParam2 = 3191;
					break;
				
				case 67:
					*uParam2 = 3192;
					break;
				
				case 68:
					*uParam2 = 3664;
					break;
				
				case 69:
					*uParam2 = 3665;
					break;
				
				case 70:
					*uParam2 = 3666;
					break;
				
				case 71:
					*uParam2 = 3667;
					break;
				
				case 72:
					*uParam2 = 3668;
					break;
				
				case 73:
					*uParam2 = 3669;
					break;
				
				case 74:
					*uParam2 = 3670;
					break;
				
				case 75:
					*uParam2 = 3671;
					break;
				
				case 76:
					*uParam2 = 3672;
					break;
				
				case 77:
					*uParam2 = 3673;
					break;
				
				case 78:
					*uParam2 = 3775;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3776;
					break;
				
				case 80:
					*uParam2 = 3777;
					break;
				
				case 81:
					*uParam2 = 3778;
					break;
				
				case 82:
					*uParam2 = 3779;
					break;
				
				case 83:
					*uParam2 = 3780;
					break;
				
				case 84:
					*uParam2 = 3781;
					break;
				
				case 85:
					*uParam2 = 3782;
					break;
				
				case 86:
					*uParam2 = 3880;
					break;
				
				case 87:
					*uParam2 = 3881;
					break;
				
				case 88:
					*uParam2 = 3882;
					break;
				
				case 89:
					*uParam2 = 5324;
					break;
				
				case 90:
					*uParam2 = 5325;
					break;
				
				case 91:
					*uParam2 = 5326;
					break;
				
				case 92:
					*uParam2 = 5327;
					break;
				
				case 93:
					*uParam2 = 5328;
					break;
				
				case 94:
					*uParam2 = 5329;
					break;
				
				case 95:
					*uParam2 = 5330;
					break;
				
				case 96:
					*uParam2 = 5331;
					break;
				
				case 97:
					*uParam2 = 5332;
					break;
				
				case 98:
					*uParam2 = 5333;
					break;
				
				case 99:
					*uParam2 = 5334;
					break;
				
				case 100:
					*uParam2 = 5335;
					break;
				
				case 101:
					*uParam2 = 5392;
					break;
				
				case 102:
					*uParam2 = 5393;
					break;
				
				case 103:
					*uParam2 = 5394;
					break;
				
				case 104:
					*uParam2 = 5395;
					break;
				
				case 105:
					*uParam2 = 5396;
					break;
				
				case 106:
					*uParam2 = 5397;
					break;
				
				case 107:
					*uParam2 = 5398;
					break;
				
				case 108:
					*uParam2 = 5399;
					break;
				
				case 109:
					*uParam2 = 5400;
					break;
				
				case 110:
					*uParam2 = 5401;
					break;
				
				case 111:
					*uParam2 = 5402;
					break;
				
				case 112:
					*uParam2 = 5403;
					break;
				
				case 113:
					*uParam2 = 5404;
					break;
				
				case 114:
					*uParam2 = 5405;
					break;
				
				case 115:
					*uParam2 = 5406;
					break;
				
				case 116:
					*uParam2 = 5407;
					break;
				
				case 117:
					*uParam2 = 5408;
					break;
				
				case 118:
					*uParam2 = 5409;
					break;
				
				case 119:
					*uParam2 = 5410;
					break;
				
				case 120:
					*uParam2 = 5411;
					break;
				
				case 121:
					*uParam2 = 5412;
					break;
				
				case 122:
					*uParam2 = 5413;
					break;
				
				case 123:
					*uParam2 = 5414;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 6309;
}

int func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x507FE690B1271947(&(Global_103236.f_2164[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xAA4F14DA15DB0B51(Global_103236.f_2164[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (!unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_241(int iParam0, int iParam1, int iParam2)
{
	func_304();
	if (iParam0 == joaat("player_zero"))
	{
		func_286(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_267(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_242(iParam1, iParam2);
	}
	return Global_69621[0 /*14*/];
}

void func_242(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_266(iParam1);
			break;
		
		case 2:
			func_265(iParam1);
			break;
		
		case 3:
			func_262(iParam1);
			break;
		
		case 4:
			func_261(iParam1);
			break;
		
		case 6:
			func_260(iParam1);
			break;
		
		case 5:
			func_259(iParam1);
			break;
		
		case 8:
			func_258(iParam1);
			break;
		
		case 9:
			func_257(iParam1);
			break;
		
		case 10:
			func_256(iParam1);
			break;
		
		case 1:
			func_255(iParam1);
			break;
		
		case 7:
			func_254(iParam1);
			break;
		
		case 11:
			func_253(iParam1);
			break;
		
		case 12:
			func_252(iParam1);
			break;
		
		case 13:
			func_251(iParam1);
			break;
		
		case 14:
			func_243(iParam1);
			break;
	}
}

void func_243(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 155);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_244(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_249(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0xCAEDBF30E3EA14FC(sParam3) != unk_0xCAEDBF30E3EA14FC("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 5);
		}
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 1);
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 2);
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 6);
		if (func_86(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x62B1B843DC27A464(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_248(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x507FE690B1271947(&(uParam0->f_6), 2);
			}
			if (!func_248(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_248(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x507FE690B1271947(&(uParam0->f_6), 2);
			}
			if (!func_248(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_248(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x507FE690B1271947(&(uParam0->f_6), 2);
			}
			if (!func_248(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 0);
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 5);
		if (func_239(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 1);
		}
		if (func_239(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 2);
		}
		if (!func_239(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_86(14))
			{
				return;
			}
			uVar0 = func_237(func_247(iParam1, uParam0->f_2), Global_69618, 0);
			if (unk_0xAA4F14DA15DB0B51(uVar0, uParam0->f_1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 1);
			}
			iVar0 = func_237(func_246(iParam1, uParam0->f_2), Global_69618, 0);
			if (unk_0xAA4F14DA15DB0B51(iVar0, uParam0->f_1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 2);
			}
			if (func_245(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_237(iVar1, Global_69618, 0);
				if (!unk_0xAA4F14DA15DB0B51(iVar0, uParam0->f_1))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 1);
			unk_0xF6082E2ADA1C795B(&(uParam0->f_6), 2);
		}
	}
}

bool func_245(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 974;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 975;
					break;
				
				case 3:
					*uParam2 = 1425;
					break;
				
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 9:
					*uParam2 = 1434;
					break;
				
				case 10:
					*uParam2 = 1436;
					break;
				
				case 1:
					*uParam2 = 1007;
					break;
				
				case 7:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
				
				case 12:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	}
	return *uParam2 != 974;
}

int func_246(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 923;
					break;
				
				case 3:
					return 1410;
					break;
				
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 9:
					return 1419;
					break;
				
				case 10:
					return 1421;
					break;
				
				case 1:
					return 955;
					break;
				
				case 7:
					return 1422;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
				
				case 12:
					return 974;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 971;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
	}
	return 931;
}

int func_247(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 871;
					break;
				
				case 3:
					return 1395;
					break;
				
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 9:
					return 1404;
					break;
				
				case 10:
					return 1406;
					break;
				
				case 1:
					return 903;
					break;
				
				case 7:
					return 1407;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
				
				case 12:
					return 922;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 919;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
	}
	return 879;
}

int func_248(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69618;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_238(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_237(iVar2, iVar0, 0);
		return unk_0xAA4F14DA15DB0B51(uVar3, iVar1);
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_69621[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x0E5955F696EA2430(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x6F9882029935B51C(iVar17, &Var2);
			if (!unk_0x17983D8EA6EAF9C8(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_244(&(Global_69621[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_244(&(Global_69621[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xC14DC3A90DA1385C(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xC507E3262E7D4F77(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x1308970ABD8F659D(iVar38, &Var20);
			if (!unk_0x17983D8EA6EAF9C8(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_244(&(Global_69621[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x62B1B843DC27A464(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x93E3EECEE86E8852(&Var41);
		iVar59 = 0;
		iVar60 = unk_0xC507E3262E7D4F77(iVar1, 6, -1, 0, -1, func_201(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0x1A330DE95D7564B0(iVar58, &Var41);
			if (!unk_0x17983D8EA6EAF9C8(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_244(&(Global_69621[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x62B1B843DC27A464(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_251(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 9);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_252(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 48);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_253(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 1);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_254(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 1);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_255(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 6);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_256(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_250(iVar10, iParam0, 33);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_257(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_250(iVar10, iParam0, 17);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_258(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 18);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_259(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 7);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_260(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_250(iVar10, iParam0, 84);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_261(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_250(iVar10, iParam0, 104);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_262(int iParam0)
{
	if (iParam0 < 136)
	{
		func_264(iParam0);
	}
	else
	{
		func_263(iParam0);
	}
	if (Global_69621[0 /*14*/].f_2 == -1)
	{
		func_250(3, iParam0, 242);
	}
}

void func_263(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_264(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_265(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 9);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_266(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69621[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_250(iVar10, iParam0, 7);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_285(iParam1);
			break;
		
		case 2:
			func_284(iParam1);
			break;
		
		case 3:
			func_280(iParam1);
			break;
		
		case 4:
			func_279(iParam1);
			break;
		
		case 6:
			func_278(iParam1);
			break;
		
		case 5:
			func_277(iParam1);
			break;
		
		case 8:
			func_276(iParam1);
			break;
		
		case 9:
			func_275(iParam1);
			break;
		
		case 10:
			func_274(iParam1);
			break;
		
		case 1:
			func_273(iParam1);
			break;
		
		case 7:
			func_272(iParam1);
			break;
		
		case 11:
			func_271(iParam1);
			break;
		
		case 12:
			func_270(iParam1);
			break;
		
		case 13:
			func_269(iParam1);
			break;
		
		case 14:
			func_268(iParam1);
			break;
	}
}

void func_268(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 175);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_269(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 9);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_270(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 47);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_271(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_250(iVar10, iParam0, 63);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_272(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 1);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_273(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 5);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_274(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 53);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_275(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 12);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_276(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 77);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_277(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 7);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_278(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_250(iVar10, iParam0, 134);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_279(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_250(iVar10, iParam0, 117);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_280(int iParam0)
{
	if (iParam0 < 107)
	{
		func_283(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_282(iParam0);
	}
	else
	{
		func_281(iParam0);
	}
	if (Global_69621[0 /*14*/].f_2 == -1)
	{
		func_250(3, iParam0, 318);
	}
}

void func_281(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_282(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_283(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_284(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 21);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_285(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69621[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_250(iVar10, iParam0, 10);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_303(iParam1);
			break;
		
		case 2:
			func_302(iParam1);
			break;
		
		case 3:
			func_299(iParam1);
			break;
		
		case 4:
			func_298(iParam1);
			break;
		
		case 6:
			func_297(iParam1);
			break;
		
		case 5:
			func_296(iParam1);
			break;
		
		case 8:
			func_295(iParam1);
			break;
		
		case 9:
			func_294(iParam1);
			break;
		
		case 10:
			func_293(iParam1);
			break;
		
		case 1:
			func_292(iParam1);
			break;
		
		case 7:
			func_291(iParam1);
			break;
		
		case 11:
			func_290(iParam1);
			break;
		
		case 12:
			func_289(iParam1);
			break;
		
		case 13:
			func_288(iParam1);
			break;
		
		case 14:
			func_287(iParam1);
			break;
	}
}

void func_287(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_250(iVar10, iParam0, 113);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_288(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 10);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_289(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 53);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_290(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 45);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_291(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 1);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_292(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 5);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_293(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_250(iVar10, iParam0, 48);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_294(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 20);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_295(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 24);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_296(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_250(iVar10, iParam0, 14);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_297(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_250(iVar10, iParam0, 99);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 113);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_299(int iParam0)
{
	if (iParam0 < 60)
	{
		func_301(iParam0);
	}
	else
	{
		func_300(iParam0);
	}
	if (Global_69621[0 /*14*/].f_2 == -1)
	{
		func_250(3, iParam0, 181);
	}
}

void func_300(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_301(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_302(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_250(iVar10, iParam0, 6);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_303(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69621[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_250(iVar10, iParam0, 7);
			return;
			break;
	}
	func_244(&(Global_69621[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_304()
{
	Global_69621[0 /*14*/].f_1 = -1;
	Global_69621[0 /*14*/].f_2 = -1;
	Global_69621[0 /*14*/].f_5 = -1;
	Global_69621[0 /*14*/].f_3 = -1;
	Global_69621[0 /*14*/].f_4 = -1;
	Global_69621[0 /*14*/].f_7 = 0;
	Global_69621[0 /*14*/].f_6 = 0;
	Global_69621[0 /*14*/].f_13 = -1;
	Global_69621[0 /*14*/].f_12 = 0;
	Global_69621[0 /*14*/] = 0;
	StringCopy(&(Global_69621[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0x769F0F6444C1ABE0(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	Global_69621[1 /*14*/] = { func_241(iVar0, iParam1, iParam2) };
	if (!unk_0xAA4F14DA15DB0B51(Global_69621[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_223(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_305(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_220(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_305(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69621[2 /*14*/] = { func_241(iVar0, 14, iVar4) };
									if (Global_69621[2 /*14*/].f_12 == iVar3)
									{
										if (func_305(iParam0, 14, iVar4))
										{
											if (!func_197(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69621[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_231(iParam0, iVar2);
						Global_69621[2 /*14*/] = { func_241(iVar0, iVar2, iVar1) };
						if (!func_197(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69621[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_220(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_305(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x6FDEA34AE915A47D(iParam0, Global_69621[1 /*14*/].f_12) == Global_69621[1 /*14*/].f_3 && (unk_0xF2E056BC763F0423(iParam0, Global_69621[1 /*14*/].f_12) == Global_69621[1 /*14*/].f_4 || Global_69621[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_69621[1 /*14*/].f_3 == unk_0x29D988205B5459BD(iParam0, func_201(iParam1)) && Global_69621[1 /*14*/].f_4 == unk_0x0B56C00A178536FE(iParam0, func_201(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_306(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8A41C463063AFC8E();
	if (!unk_0x859EE44BE17CBC0F(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x73EC54DB6766EF37(iVar0, bParam0, 16);
		unk_0x73EC54DB6766EF37(iVar0, bParam0, 32);
	}
	func_26(1, 1, 0, 0);
}

void func_307()
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_36();
	func_370();
	if (func_22(Local_112.f_9))
	{
		Var1 = { unk_0xD1EE0E9FCD74A37B(Local_112.f_9, 0) };
		func_369(Local_112.f_9, &iLocal_421, 1126825984, 7);
		func_361(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_349();
		switch (iLocal_100)
		{
			case 0:
				unk_0x3A8EFBE4AB457FE2(5, joaat("player"), iLocal_612);
				unk_0x3A8EFBE4AB457FE2(5, iLocal_612, joaat("player"));
				iLocal_426 = unk_0xE86A53C202B21FAB(Local_112.f_9);
				Local_674 = { unk_0xD1EE0E9FCD74A37B(Local_112.f_9, 0) };
				func_348(&Local_677, Local_674);
				func_347(Local_112.f_9);
				if (Local_112.f_10 != 13 && Local_112.f_10 != 14)
				{
					unk_0x654FFF4D16298AC5(Local_112.f_9);
					Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 3000);
					Local_112.f_10 = 13;
				}
				if (func_22(Local_112.f_9))
				{
					if (!unk_0xBDD3EABACAB97D09(Local_112.f_8))
					{
						Local_112.f_8 = func_346(Local_112.f_9, 1, 0, 5);
					}
					unk_0x869E3FDF7FDABA6A(Local_112.f_9);
				}
				iLocal_422 = -1;
				iLocal_423 = -1;
				iLocal_397 = 0;
				iLocal_369 = 0;
				iLocal_368 = 0;
				sLocal_435 = "BB1_J8";
				iLocal_410 = unk_0x3732B96D7A1859B4();
				func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_397)
				{
					func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
					func_322(&uLocal_44, Local_112.f_9, 0, 0, 1, 1, 1);
					if (Local_112.f_10 == 13 || Local_112.f_10 == 14)
					{
						if (iLocal_423 == -1)
						{
							iLocal_423 = unk_0x3732B96D7A1859B4();
						}
						if (iLocal_422 == -1)
						{
							iLocal_422 = unk_0x3732B96D7A1859B4();
						}
						else if (func_112(iLocal_422, 8000))
						{
							bVar0 = true;
						}
						if (func_319(Local_112.f_9, Local_628, bVar0, 0, 1, iLocal_426))
						{
							if ((func_112(iLocal_423, 5000) || func_167(Local_677, 0f, 0f, 0f, 0)) || (!func_58(Var1, Local_677, 8.5f) && !func_58(Var1, Local_674, 8.5f)))
							{
								func_318();
								Local_112.f_17 = unk_0x3732B96D7A1859B4();
								func_316(&uLocal_44, 0, 0);
								iLocal_397 = 1;
							}
						}
						else
						{
							if (!iLocal_368)
							{
								if (!func_112(iLocal_410, 2500))
								{
									if (!func_61())
									{
										if (func_104(Local_112.f_9, Local_628, 30f))
										{
											if (func_74(&uLocal_447, cLocal_440, "BB1_J7", 4, 0, 0, 0))
											{
												iLocal_410 = unk_0x3732B96D7A1859B4();
												iLocal_368 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_368 = 1;
								}
							}
							else if (!func_61())
							{
								if (func_112(iLocal_410, unk_0x895FB9FE885E36ED(5000, 12000)))
								{
									if (func_104(Local_112.f_9, Local_628, 30f))
									{
										if (unk_0xE4B596B1029F4F6A(Local_112.f_9))
										{
											if (unk_0x895FB9FE885E36ED(0, 101) < 30)
											{
												if (func_74(&uLocal_447, cLocal_441, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_410 = unk_0x3732B96D7A1859B4();
												}
											}
											else if (func_74(&uLocal_447, cLocal_440, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_410 = unk_0x3732B96D7A1859B4();
											}
										}
									}
								}
							}
							else
							{
								iLocal_410 = unk_0x3732B96D7A1859B4();
							}
							func_315(Local_112.f_9, Local_628, iLocal_423, 925353388);
						}
					}
					else
					{
						func_318();
						Local_112.f_17 = unk_0x3732B96D7A1859B4();
						func_316(&uLocal_44, 0, 0);
						iLocal_397 = 1;
					}
				}
				else
				{
					func_318();
					if (!func_104(Local_112.f_9, Local_628, 10f))
					{
						if (!iLocal_387)
						{
							if (!func_313(sLocal_435, 1))
							{
								func_311(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_413, &iLocal_414, 1, 1);
								iLocal_387 = 1;
							}
						}
						else
						{
							func_345(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_413, iLocal_414, 1);
						}
					}
					else
					{
						if (!iLocal_369)
						{
							if (!unk_0x62F5757271CA0B05(Local_112.f_9) && !unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
							{
								if (func_310("BBS_APPSUS", 0, 0) || func_310("BBS_APPSUS2", 0, 0))
								{
									unk_0x0508903FC1B0ED24();
								}
								if (!func_61())
								{
									func_3();
								}
								if (func_74(&uLocal_447, cLocal_440, sLocal_435, 4, 0, 0, 0))
								{
									iLocal_369 = 1;
								}
							}
						}
						else if (!func_61())
						{
							iLocal_100 = 2;
						}
						func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
					}
					if (func_308(&(Local_112.f_9)))
					{
						iLocal_402 = 1;
						iLocal_100 = 0;
					}
				}
				break;
			
			case 2:
				if (func_310("BBS_APPSUS", 0, 0) || func_310("BBS_APPSUS2", 0, 0))
				{
					unk_0x0508903FC1B0ED24();
				}
				unk_0x34B2EF6CD6495C38(0);
				iLocal_369 = 1;
				func_318();
				unk_0xBC0A37D4FCBFB4E9(5, joaat("player"), iLocal_612);
				unk_0xBC0A37D4FCBFB4E9(5, iLocal_612, joaat("player"));
				func_109(&(Local_112.f_8));
				iLocal_369 = 1;
				Local_112.f_17 = unk_0x3732B96D7A1859B4();
				func_316(&uLocal_44, 0, 0);
				iLocal_398 = 0;
				iLocal_402 = 0;
				func_124(3);
				break;
			}
	}
}

int func_308(var uParam0)
{
	struct<3> Var0;
	
	if (func_22(*uParam0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(*uParam0, 0) };
		if (!func_309(uParam0))
		{
			if (unk_0x05A9C36EF40B6941(Var0 - Vector(7f, 7f, 7f), Var0 + Vector(7f, 7f, 7f), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(var uParam0)
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0xC4A39E4229BD3ABE(*uParam0, 0))
		{
			if (unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0) == unk_0x0C20E539D876C5B3(*uParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_310(char* sParam0, int iParam1, int iParam2)
{
	unk_0x7474291EEDB9BF12(sParam0);
	if (iParam1 == 1)
	{
		unk_0xD5DA3EC5EEC78358(iParam2);
	}
	return unk_0x0D3452E263E036CA();
}

void func_311(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		if (bParam5)
		{
			unk_0xEB5D36079067EBA5(*uParam0, 1);
			unk_0xA6B842B66643C116(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !func_61())
			{
				if (!unk_0x5CA780C6DF42F0B0() || func_310(sParam2, 0, 0))
				{
					func_312(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			unk_0xEB5D36079067EBA5(*uParam0, 3);
			unk_0xA6B842B66643C116(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !func_61())
			{
				if (!unk_0x5CA780C6DF42F0B0() || func_310(sParam1, 0, 0))
				{
					func_312(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = unk_0x3732B96D7A1859B4();
		*iParam4 = unk_0x3732B96D7A1859B4();
	}
}

void func_312(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x63EE614B6594E772(sParam0);
	unk_0x17C5AB14FA142F36(iParam1, 1);
}

int func_313(char* sParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (func_61())
	{
		Var0 = { func_314() };
		if (unk_0x35302CD5A5D37EED(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x35302CD5A5D37EED(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_314()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

void func_315(int iParam0, struct<3> Param1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar1 = 64f;
	fVar2 = 625f;
	fVar3 = 16000f;
	fVar4 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iParam0, 1), Param1);
	iVar5 = (unk_0x3732B96D7A1859B4() - iParam4);
	fParam5 = (fParam5 * IntToFloat(iVar5));
	if (fVar4 > fVar3 && unk_0x812A9839F66D4B43(iParam0))
	{
		fVar0 = 1f;
	}
	else if (fVar4 > fVar2)
	{
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			fVar0 = 1.7f;
			fVar0 = (fVar0 - fParam5);
			if (fVar0 < 1.5f)
			{
				fVar0 = 1.5f;
			}
		}
		else
		{
			fVar0 = 2f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 2.4f;
		fVar0 = (fVar0 - fParam5);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	else
	{
		fVar0 = 2f;
		fVar0 = (fVar0 - fParam5);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	unk_0x861C75D434F4572D(iParam0, fVar0);
}

void func_316(var uParam0, int iParam1, int iParam2)
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
		if (func_317(uParam0->f_3))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
	if (!unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (func_317(sVar0))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
}

bool func_317(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_318()
{
	if (func_22(Local_112.f_9))
	{
		if (((Local_112.f_10 != 23 && Local_112.f_10 != 24) && Local_112.f_10 != 21) && Local_112.f_10 != 22)
		{
			unk_0xBC0A37D4FCBFB4E9(5, joaat("player"), iLocal_612);
			unk_0xBC0A37D4FCBFB4E9(5, iLocal_612, joaat("player"));
			if (unk_0xAB603D6FBED0F015(Local_112.f_9))
			{
				unk_0x799D2CB4039F4804(Local_112.f_9);
			}
			unk_0xEE46A5BD4C4846BF(Local_112.f_9);
			unk_0x654FFF4D16298AC5(Local_112.f_9);
			unk_0xD44F61F61676BA14(Local_112.f_9, 0);
			unk_0xD5EB2029208E789F(Local_112.f_9);
			unk_0x88146CB95BA975DD(Local_112.f_9, 1);
			unk_0x1776A639860985BF(Local_112.f_9, joaat("weapon_unarmed"), 1);
			unk_0x3763E569EED0AA1A(Local_112.f_9, 0);
			unk_0xF284B601CA7EB767(Local_112.f_9, 0);
			unk_0xAE833788DEAB23CA(Local_112.f_9, 1, 0);
			unk_0x89AEA58335779997(Local_112.f_9, 17, 1);
			unk_0x89AEA58335779997(Local_112.f_9, 0, 0);
			unk_0x89AEA58335779997(Local_112.f_9, 5, 0);
			if (unk_0xC4A39E4229BD3ABE(Local_112.f_9, 1))
			{
				unk_0x8F2751B831A7B303(Local_112.f_9, 0, 0);
			}
			iLocal_429 = unk_0x3732B96D7A1859B4();
			Local_112.f_10 = 23;
		}
	}
}

int func_319(int iParam0, struct<3> Param1, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	if (func_22(iParam0))
	{
		if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x80877A927C73E67D(iParam0, 0, 2))
			{
				if (!unk_0x80877A927C73E67D(iParam0, joaat("weapon_stungun"), 0))
				{
					unk_0x3D05334D41BA4499(iParam0);
					if (unk_0xE2554E0737DBB002(iParam0, &iVar0))
					{
						unk_0xB1A2DE66AB8CDAD7(iParam0);
						switch (iVar0)
						{
							case 11816:
							case 23553:
							case 24816:
							case 24817:
							case 24818:
							case 39317:
							case 58271:
							case 63931:
							case 51826:
							case 36864:
								unk_0xB1A2DE66AB8CDAD7(iParam0);
								unk_0x3D05334D41BA4499(iParam0);
								unk_0x869E3FDF7FDABA6A(iParam0);
								return 1;
								break;
							}
						}
					}
			}
			unk_0xB1A2DE66AB8CDAD7(iParam0);
			unk_0x3D05334D41BA4499(iParam0);
			unk_0x869E3FDF7FDABA6A(iParam0);
			if (unk_0xE86A53C202B21FAB(iParam0) < iParam7)
			{
				return 1;
			}
			if (unk_0x62F5757271CA0B05(iParam0))
			{
				return 1;
			}
			if (func_321(iParam0, Param1))
			{
				return 1;
			}
		}
		unk_0x869E3FDF7FDABA6A(iParam0);
		if (bParam5)
		{
			if (func_320(iParam0, Param1, 1112014848, 1084227584))
			{
				return 1;
			}
		}
		if (bParam6)
		{
			if (unk_0xF47F511EA9EDCFF5(iParam0, 0))
			{
				return 1;
			}
		}
		if (bParam4)
		{
			if (func_104(iParam0, Param1, 5f))
			{
				if (unk_0x62F5757271CA0B05(iParam0))
				{
					return 1;
				}
				if (func_104(iParam0, Param1, 1f))
				{
					return 1;
				}
			}
			if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (unk_0xB588E9EC60290D87(iParam0, unk_0x2A5EB8B0FE590B91()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(int iParam0, struct<3> Param1, float fParam4, float fParam5)
{
	if (func_104(iParam0, Param1, fParam4))
	{
		if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(iParam0, 1), fParam5, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_321(int iParam0, struct<3> Param1)
{
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0x3D7990D157DEF6CE(unk_0x0FFED3E94261A832()) >= 0 && unk_0x3D7990D157DEF6CE(unk_0x0FFED3E94261A832()) < 500)
		{
			if (func_104(iParam0, Param1, 3.5f) || unk_0xB588E9EC60290D87(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_322(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_323(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_323(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_324(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_324(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		func_316(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_325(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_325(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_317(iVar0))
	{
		func_344();
	}
	if (func_343(iParam1) && unk_0x18570CCBAF7F635C(iParam1))
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
			if (func_338(uParam0, bParam7, bParam9, 0))
			{
				func_335(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_330(iVar0))
				{
					if ((unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0)) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if ((iVar1 && !unk_0x6235C49EA2DBA22D()) && uParam8)
						{
							if (!func_317(iVar0))
							{
								func_329(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
								{
									func_328(1);
								}
							}
						}
					}
				}
			}
			else if (func_330(iVar0))
			{
				if (unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0))
				{
					if (((unk_0x57F6052FCF93BCFF(iParam1) && iVar1) && !unk_0x6235C49EA2DBA22D()) && uParam8)
					{
						if (!func_317(iVar0))
						{
							func_329(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
							{
								func_328(1);
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
				if (func_317(sParam5))
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
						func_316(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
					{
						func_316(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
					{
						func_316(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
					{
						func_316(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
					{
						func_316(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
				{
					func_316(uParam0, iVar0, 1);
				}
			}
			if (!func_338(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_327(uParam0))
				{
					func_326(uParam0);
				}
			}
		}
	}
	else
	{
		func_316(uParam0, iVar0, 0);
	}
}

void func_326(var uParam0)
{
	if (func_343(unk_0x2A5EB8B0FE590B91()))
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

int func_327(var uParam0)
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

int func_328(bool bParam0)
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

void func_329(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_330(char* sParam0)
{
	if (!func_331(1, 1, 0))
	{
		if ((!unk_0x58478145CAF8429C(sParam0) && func_317(sParam0)) || func_317("CMN_HINT"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_328(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_328(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_328(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_331(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_17(0))
	{
		return 0;
	}
	if (func_334())
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
	if (func_333())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x3A55AED06BFC52DE(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), func_332(unk_0x2A5EB8B0FE590B91(), 0)) || (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("apc") && func_332(unk_0x2A5EB8B0FE590B91(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_332(int iParam0, int iParam1)
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

bool func_333()
{
	return Global_2445217.f_13;
}

bool func_334()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

void func_335(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		func_316(uParam0, 0, 0);
	}
	if (func_167(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			iVar0 = unk_0xC3A7AD90290CA72E(iParam1);
			if (!unk_0xC4A39E4229BD3ABE(iVar0, 0))
			{
				if (unk_0xDB61DD81432BD145(iVar0))
				{
					if (!func_336())
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

bool func_336()
{
	return func_337(unk_0x0FFED3E94261A832());
}

int func_337(int iParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_338(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_342(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_341(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_341(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_342(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_327(uParam0))
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
						if (!func_342(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3732B96D7A1859B4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_341(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_341(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_342(bParam1, bParam2, bParam3))
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
					if (!func_342(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_341(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_341(bParam1, bParam2, bParam3) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
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
				else if (!func_342(bParam1, bParam2, bParam3))
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
						if (func_340(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || func_339(bParam1, bParam2, bParam3))
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
					else if (func_340(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_327(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_331(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_344();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_339(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, bParam1, bParam2))
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

int func_340(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, bParam1, bParam2))
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

int func_341(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, bParam1, bParam2))
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

int func_342(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, bParam1, bParam2))
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

int func_343(int iParam0)
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

void func_344()
{
	unk_0xF6082E2ADA1C795B(&Global_2314, 4);
}

void func_345(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		if ((unk_0x3732B96D7A1859B4() - *iParam3) > 500)
		{
			if (unk_0x53AE6C246AD237D5(*uParam0) == 1)
			{
				unk_0xEB5D36079067EBA5(*uParam0, 3);
				unk_0xA6B842B66643C116(*uParam0, "BLIP_FRIEND");
				if ((unk_0x3732B96D7A1859B4() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x5CA780C6DF42F0B0() || func_310(sParam1, 0, 0))
					{
						func_312(sParam2, 7500, 0);
					}
				}
				*iParam3 = unk_0x3732B96D7A1859B4();
			}
			else
			{
				unk_0xEB5D36079067EBA5(*uParam0, 1);
				unk_0xA6B842B66643C116(*uParam0, "BLIP_ENEMY");
				if ((unk_0x3732B96D7A1859B4() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x5CA780C6DF42F0B0() || func_310(sParam2, 0, 0))
					{
						func_312(sParam1, 7500, 0);
					}
				}
				*iParam3 = unk_0x3732B96D7A1859B4();
			}
		}
	}
	if ((unk_0x3732B96D7A1859B4() - iParam4) > 7500)
	{
		if (func_310(sParam1, 0, 0))
		{
			unk_0x465D8BC4210558AF(sParam1);
		}
		if (func_310(sParam2, 0, 0))
		{
			unk_0x465D8BC4210558AF(sParam2);
		}
	}
}

int func_346(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_413(iParam0))
		{
			iVar0 = unk_0x9E3A324AB806771E(iParam0);
			unk_0xE1DA6FCEE4F2BEEC(iVar0, iParam2);
			unk_0x697F84823ACFF84C(iVar0, iParam3);
			unk_0x0B584E556B01101F(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x0B584E556B01101F(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_347(int iParam0)
{
	unk_0x3C030E241A3543D2(uParam0, iLocal_612);
	unk_0x31AC59B7C21A2047(iParam0, 177, 1);
	unk_0x31AC59B7C21A2047(iParam0, 116, 1);
	unk_0x31AC59B7C21A2047(iParam0, 42, 1);
	unk_0x31AC59B7C21A2047(iParam0, 118, 1);
	unk_0x138711A3094892B4(iParam0, 10f, 5);
	unk_0x0E9E5456339F425B(iParam0, 1);
	unk_0x4C47904AE69D7393(iParam0, 1);
}

void func_348(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param1 - Vector(7f, 7f, 7f) };
	Var3 = { Param1 + Vector(7f, 7f, 7f) };
	if (unk_0x05A9C36EF40B6941(Var0, Var3, 0))
	{
		if (unk_0x4B04A0628984362C(Var0, Var3, joaat("weapon_grenade"), uParam0, 0))
		{
		}
		else if (unk_0x4B04A0628984362C(Var0, Var3, joaat("weapon_molotov"), uParam0, 0))
		{
		}
		else if (unk_0x4B04A0628984362C(Var0, Var3, joaat("weapon_smokegrenade"), uParam0, 0))
		{
		}
		else if (unk_0x4B04A0628984362C(Var0, Var3, joaat("weapon_bzgas"), uParam0, 0))
		{
		}
		else if (unk_0x4B04A0628984362C(Var0, Var3, joaat("weapon_stickybomb"), uParam0, 0))
		{
		}
		else if (unk_0x4B04A0628984362C(Var0, Var3, joaat("weapon_flare"), uParam0, 0))
		{
		}
		else
		{
			*uParam0 = { 0f, 0f, 0f };
		}
	}
	else
	{
		*uParam0 = { 0f, 0f, 0f };
	}
}

void func_349()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (func_22(Local_112.f_9))
	{
		if (iLocal_132 == 0)
		{
			func_360(&(Local_112.f_9), &bLocal_403);
			if (func_359())
			{
				if (iLocal_397 || iLocal_98 == 7)
				{
					if (bLocal_403)
					{
						unk_0x1241657DD24F3387(Local_112.f_9, func_358(), 1048576000);
						iLocal_132 = 2;
					}
					else
					{
						unk_0x1241657DD24F3387(Local_112.f_9, func_357(), 1048576000);
						iLocal_132 = 1;
					}
				}
			}
		}
		else if (iLocal_132 == 1)
		{
			func_360(&(Local_112.f_9), &bLocal_403);
			if (bLocal_403)
			{
				if (func_359())
				{
					unk_0x1241657DD24F3387(Local_112.f_9, func_358(), 1048576000);
					iLocal_132 = 2;
				}
			}
		}
		if (!unk_0x7D00F6C99487466F(unk_0x2A5EB8B0FE590B91()))
		{
			switch (Local_112.f_10)
			{
				case 0:
					if (func_104(Local_112.f_9, Local_628, 30f))
					{
						if (unk_0x453DB1DBE5D81637(Local_112.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
						{
							unk_0xAAB54E1E7FE60ADC(Local_112.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -2f);
						}
						Local_112.f_10 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x453DB1DBE5D81637(Local_112.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
					{
						func_37(&Local_285, 1);
						if (!unk_0x4A95B0656C6CDB11(Local_112.f_9))
						{
							unk_0x9F4D90A6D0682C51(Local_112.f_9, "WORLD_HUMAN_SMOKING", 0, 1);
							unk_0x923CA4007FCCB6D3(Local_112.f_9);
						}
						Local_112.f_10 = 2;
					}
					break;
				
				case 2:
					if (func_104(Local_112.f_9, Local_628, 20f))
					{
						if (!unk_0x6E115CCEE961DCCE(Local_112.f_9, unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xEDF42871EAD55C9B(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
						}
					}
					else if (unk_0x6E115CCEE961DCCE(Local_112.f_9, unk_0x2A5EB8B0FE590B91()))
					{
						unk_0xAF2C217E49954DFD(Local_112.f_9);
					}
					break;
				
				case 3:
					if (func_112(Local_112.f_18, unk_0x895FB9FE885E36ED(250, 500)))
					{
						if (unk_0xB90B175D6A3FA2C4(Local_112.f_9))
						{
							unk_0x923CA4007FCCB6D3(Local_112.f_9);
						}
						unk_0xEDF42871EAD55C9B(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
						unk_0x88E3EDF9AF851486(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1);
						Local_112.f_10 = 4;
					}
					break;
				
				case 4:
					if (!func_63(Local_112.f_9, -875674219))
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 3;
					}
					break;
				
				case 5:
					if (!unk_0x6E115CCEE961DCCE(Local_112.f_9, unk_0x2A5EB8B0FE590B91()))
					{
						unk_0xEDF42871EAD55C9B(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
					}
					unk_0x17DD40170243F0AB(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), 20000, 2.5f, 1f, 1073741824, 0);
					unk_0x4C47904AE69D7393(Local_112.f_9, 1);
					Local_112.f_10 = 6;
					break;
				
				case 6:
					if (!func_104(Local_112.f_9, Local_628, 3.5f))
					{
						if (!func_63(Local_112.f_9, 1227113341))
						{
							Local_112.f_10 = 5;
						}
						else
						{
							unk_0xF34092A8D10310C4(Local_112.f_9, 1.1f);
						}
					}
					else if (!func_63(Local_112.f_9, -875674219))
					{
						unk_0x88E3EDF9AF851486(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1);
					}
					break;
				
				case 7:
					if (func_112(Local_112.f_18, unk_0x895FB9FE885E36ED(250, 1000)))
					{
						if (unk_0xB90B175D6A3FA2C4(Local_112.f_9))
						{
							unk_0x923CA4007FCCB6D3(Local_112.f_9);
						}
						unk_0xE92D3CD695EE863C(Local_112.f_9, 0);
						unk_0x89AEA58335779997(Local_112.f_9, 5, 1);
						unk_0x89AEA58335779997(Local_112.f_9, 0, 0);
						unk_0xDD0413EAB0ADDE6A(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), 0, 16);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
						Local_112.f_10 = 8;
					}
					break;
				
				case 8:
					if (!func_63(Local_112.f_9, 780511057))
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 7;
					}
					break;
				
				case 9:
					unk_0x89AEA58335779997(Local_112.f_9, 5, 0);
					unk_0xDC7A31134115BFF0(Local_112.f_9, 1);
					if (!unk_0x62F5757271CA0B05(Local_112.f_9))
					{
						unk_0x75B422932674CA38(Local_112.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					Local_112.f_10 = 10;
					break;
				
				case 10:
					if (!unk_0x62F5757271CA0B05(Local_112.f_9))
					{
						if (!func_63(Local_112.f_9, 474215631) && !func_63(Local_112.f_9, -1519143300))
						{
							if (!unk_0xABCF7EB00A727656(Local_112.f_9))
							{
								unk_0x23F5BDE79A6651DA(Local_112.f_9, "CODE_HUMAN_STAND_COWER");
								unk_0x8C87E786A33011FB(Local_112.f_9, -1);
								unk_0x4C47904AE69D7393(Local_112.f_9, 1);
							}
						}
					}
					break;
				
				case 29:
					unk_0xE3B6C923999B844E(Local_112.f_9, &iVar0, 1);
					if (iVar0 == joaat("weapon_unarmed"))
					{
						unk_0x0013D519C885E60B(Local_112.f_9, joaat("weapon_pistol"), -1, 0, 1);
					}
					unk_0x89AEA58335779997(Local_112.f_9, 0, 0);
					unk_0xE92D3CD695EE863C(Local_112.f_9, 0);
					unk_0x176253610C53F0E0(Local_112.f_9, 15);
					unk_0x654FFF4D16298AC5(Local_112.f_9);
					unk_0x4C47904AE69D7393(Local_112.f_9, 1);
					Local_112.f_10 = 30;
					break;
				
				case 30:
					if (!func_63(Local_112.f_9, 242628503))
					{
						uVar3 = unk_0x399F81B56505EE6F(5f, 8f);
						unk_0x219EE6A7B599E7DC(&uLocal_432);
						unk_0xF19FA5F96A79466B(0, unk_0x2A5EB8B0FE590B91(), uVar3, 30f);
						unk_0xD6E739D9CC93B1C2(0, unk_0x2A5EB8B0FE590B91(), 2000, 0);
						unk_0xBD718C5BA2122192(uLocal_432);
						unk_0x234E551BB8E8813B(Local_112.f_9, uLocal_432);
						unk_0xEDD36C58DDE03C8F(&uLocal_432);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
					}
					break;
				
				case 31:
					if (func_112(Local_112.f_18, unk_0x895FB9FE885E36ED(250, 750)))
					{
						unk_0x89AEA58335779997(Local_112.f_9, 0, 1);
						unk_0xE92D3CD695EE863C(Local_112.f_9, 0);
						unk_0x176253610C53F0E0(Local_112.f_9, unk_0x895FB9FE885E36ED(10, 22));
						unk_0x83153769EA6DF5B2(Local_112.f_9, unk_0x895FB9FE885E36ED(30, 60));
						unk_0x1CDF2A367CBA85B4(Local_112.f_9, 2055493265);
						unk_0xE3B6C923999B844E(Local_112.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							unk_0x0013D519C885E60B(Local_112.f_9, joaat("weapon_pistol"), -1, 0, 1);
							unk_0x1776A639860985BF(Local_112.f_9, joaat("weapon_pistol"), 0);
						}
						unk_0xDD0413EAB0ADDE6A(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), 0, 16);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
						Local_112.f_10 = 32;
					}
					break;
				
				case 32:
					if (!func_63(Local_112.f_9, 780511057))
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 31;
					}
					break;
				
				case 13:
					if (func_112(Local_112.f_18, unk_0x895FB9FE885E36ED(0, 500)))
					{
						if (unk_0xB90B175D6A3FA2C4(Local_112.f_9))
						{
							unk_0xE37F08A814F66DC5(Local_112.f_9, Local_628);
						}
						unk_0xE3B6C923999B844E(Local_112.f_9, &iVar0, 1);
						if (iVar0 != joaat("weapon_unarmed"))
						{
							unk_0xD5EB2029208E789F(Local_112.f_9);
							unk_0x88146CB95BA975DD(Local_112.f_9, 1);
							unk_0x1776A639860985BF(Local_112.f_9, joaat("weapon_unarmed"), 1);
							unk_0x3763E569EED0AA1A(Local_112.f_9, 0);
						}
						unk_0xAE833788DEAB23CA(Local_112.f_9, 2, 0);
						unk_0xAE833788DEAB23CA(Local_112.f_9, 64, 0);
						unk_0xAE833788DEAB23CA(Local_112.f_9, 128, 0);
						unk_0xAE833788DEAB23CA(Local_112.f_9, 8, 0);
						unk_0xAE833788DEAB23CA(Local_112.f_9, 1, 0);
						unk_0xAE833788DEAB23CA(Local_112.f_9, 32, 0);
						unk_0x89AEA58335779997(Local_112.f_9, 5, 0);
						unk_0x89AEA58335779997(Local_112.f_9, 17, 1);
						unk_0x219EE6A7B599E7DC(&uLocal_432);
						if (unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
						{
							unk_0x8F2751B831A7B303(0, 0, 64);
						}
						unk_0xCD6FB688ED8B6284(0, unk_0x2A5EB8B0FE590B91(), 200f, -1, 0, 0);
						unk_0xBD718C5BA2122192(uLocal_432);
						unk_0x234E551BB8E8813B(Local_112.f_9, uLocal_432);
						unk_0xEDD36C58DDE03C8F(&uLocal_432);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
						unk_0x015B50BC21C88C8C(Local_112.f_9, 1);
						Local_112.f_10 = 14;
					}
					break;
				
				case 14:
					if (!func_63(Local_112.f_9, 1805844857) && !unk_0xE4B596B1029F4F6A(Local_112.f_9))
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 13;
					}
					break;
				
				case 15:
					unk_0xAE833788DEAB23CA(Local_112.f_9, 2, 1);
					unk_0xAE833788DEAB23CA(Local_112.f_9, 64, 0);
					unk_0xAE833788DEAB23CA(Local_112.f_9, 128, 0);
					unk_0xAE833788DEAB23CA(Local_112.f_9, 8, 0);
					unk_0xAE833788DEAB23CA(Local_112.f_9, 1, 0);
					unk_0xAE833788DEAB23CA(Local_112.f_9, 32, 0);
					unk_0x89AEA58335779997(Local_112.f_9, 5, 0);
					unk_0x89AEA58335779997(Local_112.f_9, 17, 1);
					unk_0x3EFE40733EFB6649(Local_112.f_9, 237, 1);
					if (func_7(Local_248[0 /*6*/]))
					{
						if (((!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_248[0 /*6*/], 0) && func_104(Local_248[0 /*6*/], Local_248[0 /*6*/].f_1, 3f)) && func_356(unk_0x6DAB28241B34DEED(Local_248[0 /*6*/]), Local_248[0 /*6*/].f_4, 20f)) && !func_355(Local_248[0 /*6*/], 2))
						{
							if (unk_0x5B9B499C707C2A95(Local_112.f_9, Local_248[0 /*6*/], 0) && !unk_0xB833DDD4C8B30212(Local_112.f_9))
							{
								Local_112.f_10 = 16;
							}
							else if (func_112(Local_112.f_18, unk_0x895FB9FE885E36ED(250, 350)))
							{
								func_37(&Local_285, 0);
								if (unk_0x453DB1DBE5D81637(Local_112.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
								{
									unk_0xAAB54E1E7FE60ADC(Local_112.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -4f);
								}
								else if (unk_0xB90B175D6A3FA2C4(Local_112.f_9))
								{
									unk_0xE37F08A814F66DC5(Local_112.f_9, Local_628);
								}
								else
								{
									unk_0x654FFF4D16298AC5(Local_112.f_9);
								}
								unk_0xA6AC097BEBB7B1F0(Local_112.f_9, Local_248[0 /*6*/], 25000, -1, 3f, 8388608, 0);
								unk_0x4C47904AE69D7393(Local_112.f_9, 1);
								Local_112.f_10 = 16;
							}
						}
						else
						{
							Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
							Local_112.f_10 = 13;
						}
					}
					else
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 13;
					}
					break;
				
				case 16:
					unk_0x3EFE40733EFB6649(Local_112.f_9, 237, 1);
					if (!func_7(Local_248[0 /*6*/]))
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 13;
					}
					else if ((((unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Local_248[0 /*6*/], 1) || unk_0xB833DDD4C8B30212(Local_112.f_9)) || !func_104(Local_248[0 /*6*/], Local_248[0 /*6*/].f_1, 3f)) || !func_356(unk_0x6DAB28241B34DEED(Local_248[0 /*6*/]), Local_248[0 /*6*/].f_4, 20f)) || func_355(Local_248[0 /*6*/], 2))
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 5000);
						Local_112.f_10 = 13;
					}
					else if (unk_0xF8ED2D0629FE764D(Local_112.f_9, Local_248[0 /*6*/]))
					{
						Local_112.f_10 = 33;
					}
					else if (!func_63(Local_112.f_9, -1794415470))
					{
						Local_112.f_10 = 15;
					}
					break;
				
				case 17:
					if (func_7(Local_248[0 /*6*/]) && unk_0xF8ED2D0629FE764D(Local_112.f_9, Local_248[0 /*6*/]))
					{
						unk_0x8C6A1F8B258BDF97(Local_112.f_9, Local_248[0 /*6*/], unk_0x2A5EB8B0FE590B91(), 8, 30f, 786468, 350f, 30f, 1);
						unk_0x31AC59B7C21A2047(Local_112.f_9, 173, 0);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
						Local_112.f_10 = 18;
					}
					else if (!unk_0xF5A478192BF88D01(Local_112.f_9))
					{
						Local_112.f_10 = 13;
					}
					break;
				
				case 18:
					if (!func_63(Local_112.f_9, -1273030092))
					{
						Local_112.f_10 = 17;
					}
					break;
				
				case 19:
					unk_0x654FFF4D16298AC5(Local_112.f_9);
					unk_0x89AEA58335779997(Local_112.f_9, 5, 0);
					unk_0x23F5BDE79A6651DA(Local_112.f_9, "CODE_HUMAN_STAND_COWER");
					unk_0x8C87E786A33011FB(Local_112.f_9, -1);
					unk_0x4C47904AE69D7393(Local_112.f_9, 1);
					Local_112.f_10 = 20;
					break;
				
				case 20:
					if (!unk_0x62F5757271CA0B05(Local_112.f_9))
					{
						if (!func_63(Local_112.f_9, 474215631))
						{
							Local_112.f_10 = 19;
						}
					}
					break;
				
				case 21:
					if (func_354(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_353())
					{
						Local_112.f_10 = 23;
					}
					else if (unk_0x96BBD43EB6886627(func_352()))
					{
						if (unk_0xE897E371352225D5(Local_112.f_9, -1519143300) == 1)
						{
							unk_0x613C930027D313D4(Local_112.f_9, 500);
						}
						else
						{
							unk_0x654FFF4D16298AC5(Local_112.f_9);
							unk_0xEE46A5BD4C4846BF(Local_112.f_9);
						}
						if (!unk_0xE7EA59D3048D0B8F(Local_112.f_9, func_352()))
						{
							unk_0xD234B4C90ED0E156(Local_112.f_9, func_352());
						}
						unk_0xC081AE75EE0BD04B(func_352(), 0);
						unk_0xD6C7EF9B345A7048(func_352(), 1.5f, 3.5f, -1082130432);
						unk_0x6DADD4361C85DDAC(Local_112.f_9, 0);
						unk_0xD7DFE610ED2BF500(Local_112.f_9, 1);
						unk_0x02C6582EAD30CBF7(Local_112.f_9, 1);
						unk_0x0B9AE9BB18EAB95A(Local_112.f_9, 1);
						unk_0xB329B704ED2A49E5(Local_112.f_9, 1);
						unk_0xA9AADFE69A1B70BE(Local_112.f_9, 0);
						unk_0xCC041BAFC1207D0B(Local_112.f_9, 1);
						unk_0x31AC59B7C21A2047(Local_112.f_9, 167, 1);
						unk_0x31AC59B7C21A2047(Local_112.f_9, 118, 1);
						unk_0x30F81670C721F076(Local_112.f_9, 1);
						unk_0xD44F61F61676BA14(Local_112.f_9, 1);
						unk_0x31AC59B7C21A2047(Local_112.f_9, 42, 1);
						unk_0x2E0701CEBB06668C(Local_112.f_9, 1);
						unk_0x1914716FB84CED87(Local_112.f_9, 1);
						unk_0x0CBF2D434B61F601(Local_112.f_9, 2f);
						unk_0x2FD481ECDD7A12E6(Local_112.f_9, 2f);
						unk_0xB329B704ED2A49E5(Local_112.f_9, 1);
						unk_0x31AC59B7C21A2047(Local_112.f_9, 118, 1);
						unk_0xAE833788DEAB23CA(Local_112.f_9, 1, 0);
						unk_0x89AEA58335779997(Local_112.f_9, 17, 1);
						unk_0x89AEA58335779997(Local_112.f_9, 0, 0);
						unk_0x3EFE40733EFB6649(Local_112.f_9, 237, 1);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
						Local_112.f_10 = 22;
					}
					break;
				
				case 22:
					if (func_354(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_353())
					{
						Local_112.f_10 = 23;
					}
					else
					{
						if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
						{
							if (func_351())
							{
								iVar1 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
								if (!unk_0x5B9B499C707C2A95(Local_112.f_9, iVar1, 0))
								{
									fVar4 = unk_0xD2660BAC03EB7433(iVar1);
									if (fVar4 < 1.75f && func_104(Local_112.f_9, Local_628, 8f))
									{
										if (!func_63(Local_112.f_9, -1794415470))
										{
											iVar2 = -1;
											if (unk_0x9A219E9FAD8E9778(iVar1))
											{
												if (unk_0x457D9E478E06E354(iVar1, 0, 0) && unk_0xD570551619005062(Local_112.f_9, iVar1, 0, 1, 0))
												{
													iVar2 = 0;
												}
												else
												{
													iVar2 = -2;
												}
											}
											if (iVar2 != -1)
											{
												unk_0xA6AC097BEBB7B1F0(Local_112.f_9, iVar1, 25000, iVar2, 2f, 1048577, 0);
											}
										}
										else if (unk_0xF5A478192BF88D01(Local_112.f_9))
										{
											if (unk_0x73E10648CA4D8C19(Local_112.f_9) != iVar1)
											{
												unk_0x654FFF4D16298AC5(Local_112.f_9);
											}
										}
									}
									else if (func_63(Local_112.f_9, -1794415470))
									{
										if (!unk_0xF5A478192BF88D01(Local_112.f_9))
										{
											unk_0x654FFF4D16298AC5(Local_112.f_9);
										}
									}
								}
							}
							else if (func_63(Local_112.f_9, -1794415470))
							{
								unk_0x654FFF4D16298AC5(Local_112.f_9);
							}
						}
						else if (func_63(Local_112.f_9, -1794415470))
						{
							unk_0x654FFF4D16298AC5(Local_112.f_9);
						}
						if (unk_0x6E115CCEE961DCCE(Local_112.f_9, unk_0x2A5EB8B0FE590B91()))
						{
							if (unk_0xF5A478192BF88D01(Local_112.f_9))
							{
								unk_0xAF2C217E49954DFD(Local_112.f_9);
							}
						}
						else if (!unk_0xC4A39E4229BD3ABE(Local_112.f_9, 1))
						{
							if (!unk_0xF5A478192BF88D01(Local_112.f_9))
							{
								unk_0xEDF42871EAD55C9B(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
							}
						}
						unk_0x3EFE40733EFB6649(Local_112.f_9, 237, 1);
					}
					break;
				
				case 23:
					if (func_354(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_353())
					{
						if (unk_0xAB603D6FBED0F015(Local_112.f_9))
						{
							unk_0x799D2CB4039F4804(Local_112.f_9);
							unk_0xD44F61F61676BA14(Local_112.f_9, 0);
							unk_0x31AC59B7C21A2047(Local_112.f_9, 42, 0);
							unk_0x31AC59B7C21A2047(Local_112.f_9, 118, 1);
						}
						unk_0x30F81670C721F076(Local_112.f_9, 0);
						if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
						{
							if (func_63(Local_112.f_9, -1794415470))
							{
								unk_0x654FFF4D16298AC5(Local_112.f_9);
							}
						}
						if (((!unk_0x62F5757271CA0B05(Local_112.f_9) && !unk_0xF47F511EA9EDCFF5(Local_112.f_9, 0)) && !unk_0xB833DDD4C8B30212(Local_112.f_9)) && !func_63(Local_112.f_9, -828834893))
						{
							unk_0xEDF42871EAD55C9B(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
							if ((!func_350(Local_112.f_19, 10) && func_104(Local_112.f_9, Local_628, 50f)) || !func_112(iLocal_429, 2000))
							{
								if (unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
								{
									unk_0x8F2751B831A7B303(Local_112.f_9, 0, 0);
								}
								else if (((!unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6) && !unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), Local_112.f_9)) && !func_353()) || unk_0xABCF7EB00A727656(Local_112.f_9))
								{
									unk_0x88E3EDF9AF851486(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1);
								}
								else if (unk_0xE897E371352225D5(Local_112.f_9, -1519143300) == 1)
								{
									unk_0x613C930027D313D4(Local_112.f_9, -1);
								}
								else
								{
									unk_0xAF6A721749CFA1B4(Local_112.f_9, -1, unk_0x2A5EB8B0FE590B91(), -1, 0);
								}
							}
							else if (!unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
							{
								unk_0x88E3EDF9AF851486(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1);
							}
							unk_0x4C47904AE69D7393(Local_112.f_9, 1);
							Local_112.f_10 = 24;
						}
					}
					else if (!iLocal_398)
					{
						Local_112.f_10 = 21;
					}
					else
					{
						Local_112.f_10 = 25;
					}
					break;
				
				case 24:
					if (func_354(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_353())
					{
						if (!func_63(Local_112.f_9, -1519143300))
						{
							if (!func_63(Local_112.f_9, -875674219))
							{
								if (unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
								{
									if (!func_350(Local_112.f_19, 10) && func_104(Local_112.f_9, Local_628, 50f))
									{
										unk_0x8F2751B831A7B303(Local_112.f_9, 0, 0);
										Local_112.f_10 = 23;
									}
								}
								else
								{
									Local_112.f_10 = 23;
								}
							}
							else if (!func_350(Local_112.f_19, 10) && func_104(Local_112.f_9, Local_628, 50f))
							{
								if ((unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), Local_112.f_9)) || func_353())
								{
									Local_112.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_398)
					{
						Local_112.f_10 = 21;
					}
					else
					{
						Local_112.f_10 = 25;
					}
					break;
				
				case 25:
					if (func_354(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_112.f_10 = 23;
					}
					else
					{
						if (unk_0xAB603D6FBED0F015(Local_112.f_9))
						{
							unk_0x799D2CB4039F4804(Local_112.f_9);
							unk_0xD44F61F61676BA14(Local_112.f_9, 0);
							unk_0x31AC59B7C21A2047(Local_112.f_9, 42, 0);
						}
						unk_0x654FFF4D16298AC5(Local_112.f_9);
						unk_0xEDF42871EAD55C9B(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
						unk_0x4C47904AE69D7393(Local_112.f_9, 1);
						Local_112.f_10 = 26;
					}
					break;
				
				case 26:
					if (func_354(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_112.f_10 = 23;
					}
					else if (unk_0xABCF7EB00A727656(Local_112.f_9))
					{
						unk_0xB329B704ED2A49E5(Local_112.f_9, 1);
						unk_0x0B9AE9BB18EAB95A(Local_112.f_9, 0);
					}
					else if ((!unk_0x62F5757271CA0B05(Local_112.f_9) && !unk_0x96BD442529F76EE7(Local_112.f_9)) && unk_0xC212BF73836863E3(Local_112.f_9))
					{
						if (!unk_0x16EDD647B91D8D8F(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), 45f))
						{
							if (!func_63(Local_112.f_9, -875674219))
							{
								unk_0x88E3EDF9AF851486(Local_112.f_9, unk_0x2A5EB8B0FE590B91(), -1);
							}
						}
					}
					break;
				
				case 27:
					break;
				
				case 28:
					break;
				
				case 33:
					unk_0x4C47904AE69D7393(Local_112.f_9, 1);
					iLocal_424 = unk_0x3732B96D7A1859B4();
					unk_0xD44F61F61676BA14(Local_112.f_9, 1);
					Local_112.f_10 = 34;
					break;
				
				case 34:
					break;
				}
			}
	}
}

bool func_350(int iParam0, int iParam1)
{
	return (unk_0x5E60CE6A99DCBE0A() - iParam0) > iParam1;
}

int func_351()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
	}
	else if (unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91()))
	{
		iVar0 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
	}
	if (!func_7(iVar0))
	{
		return 0;
	}
	else
	{
		if (unk_0xCBA4F77BB9D2F115(iVar0) == 0)
		{
			return 0;
		}
		iVar1 = unk_0xD3B21CE53AA7BE51(iVar0);
		if (unk_0x4BD9974FDDE2D1EC(iVar1))
		{
			return 0;
		}
		if (unk_0xB8B97965F826E07D(iVar1))
		{
			return 0;
		}
		if (unk_0xD043D4D784E459B0(iVar1))
		{
			return 0;
		}
	}
	return 1;
}

var func_352()
{
	return unk_0x60A7F9A542DD09AD(unk_0x8A41C463063AFC8E());
}

int func_353()
{
	if (!iLocal_369)
	{
		return 1;
	}
	if (func_313(sLocal_435, 0))
	{
		return 1;
	}
	if (iLocal_98 != 3 && iLocal_98 != 6)
	{
		return 1;
	}
	if (unk_0x96BD442529F76EE7(Local_112.f_9) || unk_0x62F5757271CA0B05(Local_112.f_9))
	{
		iLocal_429 = unk_0x3732B96D7A1859B4();
		return 1;
	}
	if (!func_112(iLocal_429, 2000))
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (func_22(iParam0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
		if (unk_0xD42AA0CF76AFB4D8(Var0, fParam4, 1))
		{
			return 1;
		}
		if (func_104(iParam0, Local_628, fParam2))
		{
			if (!func_350(iParam1, 10))
			{
				if (bParam6)
				{
					if (func_114(1, 0, 1))
					{
						if (unk_0x1AE6D2E43A5B8B75(unk_0x2A5EB8B0FE590B91()) || unk_0xE8AFBC89C34CD229(unk_0x2A5EB8B0FE590B91()))
						{
							return 1;
						}
					}
				}
				if (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0))
				{
					return 1;
				}
				if (unk_0xC32BACC88ED0B681(unk_0x0FFED3E94261A832()))
				{
					if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0))
					{
						return 1;
					}
					if (bParam3)
					{
						if (unk_0xC32BACC88ED0B681(unk_0x0FFED3E94261A832()))
						{
							if (unk_0x16EDD647B91D8D8F(unk_0x2A5EB8B0FE590B91(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
				{
					return 1;
				}
				if (unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 1;
				}
				if (unk_0x7D00F6C99487466F(unk_0x2A5EB8B0FE590B91()))
				{
					return 1;
				}
			}
		}
		if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
		{
			unk_0x869E3FDF7FDABA6A(iParam0);
			return 1;
		}
		if (unk_0xB588E9EC60290D87(iParam0, unk_0x2A5EB8B0FE590B91()) || unk_0x002C96066F2BBA2F(iParam0, 56))
		{
			if (unk_0x62F5757271CA0B05(iParam0))
			{
				return 1;
			}
		}
		if (unk_0x4A40D388873A536C(-1, Var0, fParam5))
		{
			return 1;
		}
		Var3 = { Var0 };
		Var6 = { Var3 };
		Var3.f_0 = (Var3.f_0 - fParam5);
		Var3.f_1 = (Var3.f_1 - fParam5);
		Var3.f_2 = (Var3.f_2 - fParam5);
		Var6.f_0 = (Var6.f_0 + fParam5);
		Var6.f_1 = (Var6.f_1 + fParam5);
		Var6.f_2 = (Var6.f_2 + fParam5);
		if (unk_0x05A9C36EF40B6941(Var3, Var6, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam0))
	{
		iVar0 = 0;
		if (unk_0xD8BFF899C7596F35(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xD8BFF899C7596F35(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xD8BFF899C7596F35(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xD8BFF899C7596F35(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_356(float fParam0, float fParam1, float fParam2)
{
	if (unk_0x3FEF699D13BCC798((fParam0 - fParam1)) <= fParam2)
	{
		return 1;
	}
	return 0;
}

char* func_357()
{
	return "move_m@bail_bond_not_tazered";
}

char* func_358()
{
	return "move_m@bail_bond_tazered";
}

int func_359()
{
	unk_0xA43834F3BCE62F79(func_357());
	unk_0xA43834F3BCE62F79(func_358());
	if (unk_0x0C709135471077E2(func_357()) && unk_0x0C709135471077E2(func_358()))
	{
		return 1;
	}
	return 0;
}

void func_360(var uParam0, bool bParam1)
{
	if (unk_0xF47F511EA9EDCFF5(*uParam0, 0))
	{
		*bParam1 = 1;
	}
}

void func_361(int iParam0, var uParam1, float fParam2, int iParam3)
{
	if (func_413(iParam0))
	{
		if (func_362(iParam0, unk_0x2A5EB8B0FE590B91(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = unk_0x5E60CE6A99DCBE0A();
		}
	}
}

bool func_362(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_368(iParam0, iParam1);
	if (!func_413(iParam0) || !func_413(iParam1))
	{
		if (iVar4 != -1)
		{
			func_10(&(Local_56[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_366(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_365();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_56[iVar4 /*4*/].f_1 = iParam0;
		Local_56[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_363(&(Local_56[iVar4 /*4*/]), Var1, iParam1, &(Local_56[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x3732B96D7A1859B4() - Local_56[iVar4 /*4*/].f_3) < iParam4);
}

int func_363(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_413(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_364(iParam4, iParam7) };
		*uParam0 = unk_0x6D3ADDC3C99E176A(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x4021570E17CB0020(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xEE46DE31F43DCAF1(iVar7))
	{
		func_413(iVar7);
		if (unk_0xC3A7AD90290CA72E(iVar7) == iParam4)
		{
			if (bLocal_97)
			{
				unk_0x01B9223C893C2DCC(Param1, unk_0xD1EE0E9FCD74A37B(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x3732B96D7A1859B4();
			return 1;
		}
		return 0;
	}
	if (unk_0x82DF3B947FC3E281(iVar7))
	{
		func_413(iVar7);
		if (unk_0xC4A39E4229BD3ABE(iParam4, 0))
		{
			if (unk_0x761AC59E782D169D(iVar7) == unk_0x0C20E539D876C5B3(iParam4, 0))
			{
				if (bLocal_97)
				{
					unk_0x01B9223C893C2DCC(Param1, unk_0xD1EE0E9FCD74A37B(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x3732B96D7A1859B4();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_364(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x895FB9FE885E36ED(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xD1EE0E9FCD74A37B(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x585F703DF3E83B6E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x585F703DF3E83B6E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x585F703DF3E83B6E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x585F703DF3E83B6E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x585F703DF3E83B6E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xD1EE0E9FCD74A37B(iParam0, 1);
}

int func_365()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56.f_0)
	{
		if ((Local_56[iVar0 /*4*/] == 0 && Local_56[iVar0 /*4*/].f_1 == 0) && Local_56[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_366(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_182(unk_0xD1EE0E9FCD74A37B(iParam1, 1) - unk_0xD1EE0E9FCD74A37B(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x09BFAEEB73544139(iParam0) };
	}
	else
	{
		Var3 = { func_182(unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 5f, 0f) - unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_367(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_367(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56.f_0)
	{
		if (Local_56[iVar0 /*4*/].f_1 == iParam0 && Local_56[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_369(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (func_413(iParam0))
	{
		if (func_362(unk_0x2A5EB8B0FE590B91(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = unk_0x5E60CE6A99DCBE0A();
		}
	}
}

void func_370()
{
	if (func_58(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_625, 100f))
	{
		if (!func_371())
		{
			unk_0x7C58954B914236EF(&cLocal_619, 8);
			func_66();
			iLocal_401 = 1;
		}
	}
	else if (iLocal_401)
	{
		if (!func_58(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_625, 120f))
		{
			if (unk_0xA1EDDE074DA26387())
			{
				unk_0x27378D398128FEC6();
				iLocal_401 = 0;
			}
		}
		else
		{
			func_66();
		}
	}
	if (iLocal_401)
	{
		if (func_371())
		{
			unk_0x27378D398128FEC6();
			iLocal_401 = 0;
		}
	}
}

bool func_371()
{
	return Global_89231;
}

void func_372()
{
	func_36();
	func_370();
	if (func_22(Local_112.f_9))
	{
		func_369(Local_112.f_9, &iLocal_421, 1126825984, 7);
		func_361(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_349();
		switch (iLocal_100)
		{
			case 0:
				func_20();
				iLocal_371 = 0;
				iLocal_389 = 0;
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_398)
				{
					if (func_310("BBS_05", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_05");
					}
					func_109(&(Local_112.f_8));
					if (!func_104(Local_112.f_9, Local_628, 25f))
					{
						if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
						{
							Local_112.f_18 = unk_0x3732B96D7A1859B4();
							Local_112.f_10 = 25;
						}
						if (func_350(iLocal_421, 10))
						{
							if (!func_61())
							{
								if (!func_350(iLocal_421, 10))
								{
									if (func_74(&uLocal_447, cLocal_441, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_410 = unk_0x3732B96D7A1859B4();
									}
								}
							}
						}
						iLocal_398 = 1;
					}
					else if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
					{
						if (func_310("BBS_COPS", 0, 0))
						{
							unk_0x465D8BC4210558AF("BBS_COPS");
						}
						iLocal_371 = 1;
						if (!func_61())
						{
							iLocal_100 = 2;
						}
					}
					else if (!iLocal_370)
					{
						if (!func_313(sLocal_435, 1))
						{
							if (func_74(&uLocal_447, cLocal_441, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_370 = 1;
							}
						}
					}
					else if (!iLocal_389)
					{
						if (!func_310("BBS_COPS", 0, 0))
						{
							func_312("BBS_COPS", 7500, 0);
							iLocal_389 = 1;
						}
						else
						{
							func_373();
						}
					}
					else
					{
						func_373();
					}
				}
				else if (func_104(Local_112.f_9, Local_628, 8f))
				{
					if (Local_112.f_10 == 25 || Local_112.f_10 == 26)
					{
						Local_112.f_18 = unk_0x3732B96D7A1859B4();
						Local_112.f_10 = 21;
					}
					iLocal_389 = 0;
					if (func_310("BBS_05", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_05");
					}
					if (!func_61())
					{
						if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
						{
							if (unk_0x895FB9FE885E36ED(0, 2) == 0)
							{
								if (func_74(&uLocal_447, cLocal_441, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_410 = unk_0x3732B96D7A1859B4();
								}
							}
							else if (func_74(&uLocal_447, cLocal_440, "BB1_J5", 4, 0, 0, 0))
							{
								iLocal_410 = unk_0x3732B96D7A1859B4();
							}
						}
					}
					iLocal_398 = 0;
				}
				else
				{
					if (func_310("BBS_COPS", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_COPS");
					}
					if (!unk_0xBDD3EABACAB97D09(Local_112.f_8))
					{
						Local_112.f_8 = func_346(Local_112.f_9, 1, 1, 5);
					}
					if (!iLocal_390)
					{
						func_312("BBS_05", 7500, 1);
						iLocal_390 = 1;
					}
				}
				if (func_308(&(Local_112.f_9)))
				{
					iLocal_402 = 1;
					iLocal_100 = 2;
				}
				break;
			
			case 2:
				if (func_310("BBS_05", 0, 0))
				{
					unk_0x465D8BC4210558AF("BBS_05");
				}
				iLocal_371 = 1;
				func_109(&(Local_112.f_8));
				if (iLocal_402)
				{
					func_124(7);
				}
				else
				{
					if (func_310("BBS_COPS", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_COPS");
					}
					func_124(3);
				}
				break;
			}
	}
}

void func_373()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x5CA780C6DF42F0B0() && unk_0x29B06605BA5CF280(203) != 0)
	{
		iVar1 = 1;
	}
	if (func_22(Local_112.f_9))
	{
		if (func_61())
		{
			iLocal_410 = unk_0x3732B96D7A1859B4();
		}
		if (!iLocal_378)
		{
			if (func_74(&uLocal_447, cLocal_440, "BB1_J6", 4, 0, 0, 0))
			{
				iLocal_378 = 1;
			}
		}
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0) && unk_0x0C20E539D876C5B3(Local_112.f_9, 0) == iVar0)
			{
				if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					if (!iLocal_396)
					{
						if (!func_61())
						{
							iLocal_409 = unk_0x3732B96D7A1859B4();
							iLocal_396 = 1;
						}
					}
					else if (!iLocal_372[0])
					{
						if ((unk_0x3732B96D7A1859B4() - iLocal_409) > 7500)
						{
							func_376(0);
						}
					}
					else if (!iLocal_372[1])
					{
						if ((unk_0x3732B96D7A1859B4() - iLocal_409) > 10000)
						{
							func_376(1);
						}
					}
					else if (!iLocal_372[2])
					{
						if ((unk_0x3732B96D7A1859B4() - iLocal_409) > 10000)
						{
							func_376(2);
						}
					}
					if (unk_0x2137828D03306CAF(iVar0))
					{
						if (unk_0xD2660BAC03EB7433(iVar0) < 0.5f)
						{
							if (!iLocal_383)
							{
								if (!func_61())
								{
									if (func_112(iLocal_427, 3500))
									{
										if (func_74(&uLocal_447, cLocal_440, "BB1_STOP", 4, 0, 0, 0))
										{
											iLocal_383 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_383)
						{
							if (!func_313("BB1_STOP", 1))
							{
								iLocal_427 = unk_0x3732B96D7A1859B4();
							}
						}
						else
						{
							iLocal_427 = unk_0x3732B96D7A1859B4();
						}
					}
				}
				else if (!iLocal_371)
				{
					if (func_74(&uLocal_447, cLocal_440, "BB1_J9", 4, 0, 0, 0))
					{
						iLocal_371 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_391)
				{
					if (!func_351())
					{
						func_329("BBS_VH1", -1);
						iLocal_391 = 1;
					}
				}
				iLocal_427 = unk_0x3732B96D7A1859B4();
			}
			iLocal_379 = 0;
			iLocal_380 = 0;
		}
		else
		{
			iLocal_427 = unk_0x3732B96D7A1859B4();
			iLocal_383 = 0;
			if (unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
				if (!iLocal_379)
				{
					if (func_351())
					{
						if (!unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
						{
							if (!func_313("BBC_T6", 1))
							{
								if (func_74(&uLocal_447, cLocal_441, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_379 = 1;
								}
							}
						}
						func_375("BBS_VH1", 1);
					}
					else if (!func_313("BBC_T8", 1) && !func_313("BB1_WTF", 1))
					{
						if (unk_0x895FB9FE885E36ED(0, 11) < 5)
						{
							if (func_74(&uLocal_447, cLocal_441, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_379 = 1;
							}
						}
						else if (func_74(&uLocal_447, cLocal_440, "BB1_WTF", 4, iVar1, 0, 0))
						{
							iLocal_379 = 1;
						}
					}
				}
				else if (!iLocal_382)
				{
					if (func_374(&iVar0))
					{
						if ((!func_313("BB1_JACK", 1) && !func_313("BBC_T6", 1)) && !func_313("BBC_T8", 1))
						{
							if (func_74(&uLocal_447, cLocal_440, "BB1_JACK", 4, iVar1, 0, 0))
							{
								iLocal_382 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_379 = 0;
				if (unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
				{
					if (!iLocal_380)
					{
						if (!func_313("BBC_T7", 1) && !func_313("BB1_OUT", 1))
						{
							if (unk_0x895FB9FE885E36ED(0, 11) < 5)
							{
								if (func_74(&uLocal_447, cLocal_441, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_380 = 1;
								}
							}
							else if (func_74(&uLocal_447, cLocal_440, "BB1_OUT", 4, iVar1, 0, 0))
							{
								iLocal_380 = 1;
							}
						}
					}
				}
				else if (Local_112.f_10 == 24 && func_63(Local_112.f_9, -1519143300))
				{
					if (func_104(Local_112.f_9, Local_628, 25f))
					{
						if (!func_313("BB1_J10", 1))
						{
							if (func_112(iLocal_411, unk_0x895FB9FE885E36ED(2500, 5000)))
							{
								if (func_61())
								{
									func_3();
								}
								if (func_74(&uLocal_447, cLocal_440, "BB1_J10", 4, 0, 0, 0))
								{
									iLocal_411 = unk_0x3732B96D7A1859B4();
								}
							}
						}
						else
						{
							iLocal_411 = unk_0x3732B96D7A1859B4();
						}
					}
				}
				else
				{
					iLocal_411 = 0;
					if (!iLocal_371)
					{
						if (func_74(&uLocal_447, cLocal_440, "BB1_J9", 4, 0, 0, 0))
						{
							iLocal_410 = unk_0x3732B96D7A1859B4();
							iLocal_371 = 1;
						}
					}
					if (!func_61())
					{
						if (func_112(iLocal_410, unk_0x895FB9FE885E36ED(3000, 6000)))
						{
							if (!func_104(Local_112.f_9, Local_628, 20f))
							{
								if (func_74(&uLocal_447, cLocal_440, "BB1_J4", 4, 0, 0, 0))
								{
									iLocal_410 = unk_0x3732B96D7A1859B4();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_374(int iParam0)
{
	int iVar0;
	
	if (func_7(*iParam0))
	{
		if (unk_0x13F66F794C535493(unk_0x2A5EB8B0FE590B91()))
		{
			return 1;
		}
		iVar0 = unk_0x5537BC1B0041F8DF(unk_0x2A5EB8B0FE590B91());
		if (func_413(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_375(char* sParam0, int iParam1)
{
	if (func_317(sParam0))
	{
		unk_0x7D53B6FFAEDA810A(iParam1);
	}
}

void func_376(int iParam0)
{
	if (!iLocal_372[iParam0])
	{
		if (func_74(&uLocal_447, cLocal_440, sLocal_436[iParam0], 4, 0, 0, 0))
		{
			iLocal_372[iParam0] = 1;
			iLocal_396 = 0;
			iLocal_409 = 0;
			iLocal_378 = 1;
		}
	}
}

void func_377()
{
	func_36();
	func_370();
	if (func_22(Local_112.f_9))
	{
		func_369(Local_112.f_9, &iLocal_421, 1126825984, 7);
		func_361(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_349();
		switch (iLocal_100)
		{
			case 0:
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_398)
				{
					if (func_310("BBS_05", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_05");
					}
					func_109(&(Local_112.f_8));
					if (!func_104(Local_112.f_9, Local_628, 25f))
					{
						if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
						{
							Local_112.f_18 = unk_0x3732B96D7A1859B4();
							Local_112.f_10 = 25;
						}
						if (func_350(iLocal_421, 10))
						{
							if (!func_61())
							{
								if (!func_350(iLocal_421, 10))
								{
									if (func_74(&uLocal_447, cLocal_441, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_410 = unk_0x3732B96D7A1859B4();
									}
								}
							}
						}
						iLocal_370 = 1;
						iLocal_398 = 1;
					}
					else if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
					{
						unk_0x147741DB03DD8B72(unk_0x0FFED3E94261A832());
						iLocal_370 = 1;
						iLocal_100 = 2;
					}
					else
					{
						if (!unk_0xBDD3EABACAB97D09(uLocal_404))
						{
							if (iLocal_386)
							{
								uLocal_404 = func_382(Local_625, 5, 1);
							}
						}
						if (!iLocal_370)
						{
							if (!func_313(sLocal_435, 1))
							{
								if (func_74(&uLocal_447, cLocal_441, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_370 = 1;
								}
							}
						}
						else if (!iLocal_386)
						{
							if (!func_61())
							{
								func_312("BBS_DROP", 7500, 0);
								iLocal_410 = unk_0x3732B96D7A1859B4();
								iLocal_386 = 1;
							}
						}
						else
						{
							func_373();
							func_380(&Local_336, Local_628, &iLocal_412, 5000, 1101004800);
						}
						if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_625, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_100 = 2;
						}
						if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
						{
							if (func_104(unk_0x2A5EB8B0FE590B91(), Local_625, 6.5f))
							{
								iLocal_100 = 2;
							}
						}
						else if (func_104(unk_0x2A5EB8B0FE590B91(), Local_625, 2.5f))
						{
							iLocal_100 = 2;
						}
					}
				}
				else
				{
					func_109(&uLocal_404);
					if (func_310("BBS_DROP", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_DROP");
					}
					if (func_104(Local_112.f_9, Local_628, 8f))
					{
						if (Local_112.f_10 == 25 || Local_112.f_10 == 26)
						{
							Local_112.f_18 = unk_0x3732B96D7A1859B4();
							Local_112.f_10 = 21;
						}
						if (func_310("BBS_05", 0, 0))
						{
							unk_0x465D8BC4210558AF("BBS_05");
						}
						if (!func_61())
						{
							if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
							{
								if (unk_0x895FB9FE885E36ED(0, 2) == 0)
								{
									if (func_74(&uLocal_447, cLocal_441, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_410 = unk_0x3732B96D7A1859B4();
									}
								}
								else if (func_74(&uLocal_447, cLocal_440, "BB1_J5", 4, 0, 0, 0))
								{
									iLocal_410 = unk_0x3732B96D7A1859B4();
								}
							}
						}
						iLocal_398 = 0;
					}
					else
					{
						if (!unk_0xBDD3EABACAB97D09(Local_112.f_8))
						{
							Local_112.f_8 = func_346(Local_112.f_9, 1, 1, 5);
						}
						if (!iLocal_390)
						{
							func_312("BBS_05", 7500, 1);
							iLocal_390 = 1;
						}
					}
				}
				if (!bLocal_395)
				{
					bLocal_395 = func_378(Local_628, Local_103, 180f);
				}
				if (func_308(&(Local_112.f_9)))
				{
					iLocal_402 = 1;
					iLocal_100 = 2;
				}
				break;
			
			case 2:
				func_109(&uLocal_404);
				if (func_310("BBS_DROP", 0, 0))
				{
					unk_0x465D8BC4210558AF("BBS_DROP");
				}
				if (iLocal_402)
				{
					func_124(7);
				}
				else if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					func_124(6);
				}
				else
				{
					func_109(&(Local_112.f_8));
					if (func_310("BBS_05", 0, 0))
					{
						unk_0x465D8BC4210558AF("BBS_05");
					}
					if (!bLocal_395)
					{
						bLocal_395 = func_378(Local_628, Local_103, 0f);
					}
					func_124(4);
				}
				break;
			}
	}
}

int func_378(struct<3> Param0, struct<3> Param3, float fParam6)
{
	int iVar0;
	
	if (!func_379(Param0, Param3, fParam6))
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		if (iLocal_420 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_420 - 1))
			{
				func_42(&(Local_133[iVar0 /*19*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_416 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_416 - 1))
			{
				func_93(&(Local_248[iVar0 /*6*/]));
				iVar0++;
			}
		}
		func_38(&Local_285, 0);
		if (iLocal_415 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_415 - 1))
			{
				func_38(&(Local_291[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_418 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_418 - 1))
			{
				func_95(&(Local_328[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_379(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_380(int iParam0, struct<3> Param1, int iParam4, int iParam5, float fParam6)
{
	struct<3> Var0;
	var uVar3;
	char[] cVar168[8];
	char* sVar169;
	
	if (func_22(*iParam0))
	{
		if (!func_61())
		{
			Var0 = { unk_0xD1EE0E9FCD74A37B(*iParam0, 1) };
			if (unk_0xB7A628320EFF8E47(Param1, Var0) < (fParam6 * fParam6))
			{
				if (unk_0x3732B96D7A1859B4() - *iParam4) > (iParam5 + unk_0x895FB9FE885E36ED(0, 2000))
				{
					uVar3 = 16;
					func_90(&uVar3, 4, *iParam0, "MAUDE", 0, 1);
					cVar168 = "BBCAUD";
					sVar169 = "BBC_loiter";
					func_381(&uVar3, cVar168, sVar169, 4, 0, 0);
					*iParam4 = unk_0x3732B96D7A1859B4();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_381(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xF6082E2ADA1C795B(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

int func_382(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x697F84823ACFF84C(iVar0, iParam3);
	unk_0x0B584E556B01101F(iVar0, 1f);
	unk_0xD42DEAFD12809447(iVar0, iParam4);
	return iVar0;
}

void func_383()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_22(Local_112.f_9))
	{
		func_369(Local_112.f_9, &iLocal_421, 1126825984, 7);
		func_361(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_349();
		switch (iLocal_100)
		{
			case 0:
				if (Local_112.f_10 != 15 && Local_112.f_10 != 16)
				{
					Local_112.f_18 = unk_0x3732B96D7A1859B4();
					Local_112.f_10 = 15;
				}
				if (func_22(Local_112.f_9))
				{
					if (!unk_0xBDD3EABACAB97D09(Local_112.f_8))
					{
						Local_112.f_8 = func_346(Local_112.f_9, 1, 0, 5);
					}
					unk_0x869E3FDF7FDABA6A(Local_112.f_9);
				}
				unk_0x34B2EF6CD6495C38(2);
				func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_397)
				{
					func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
					func_322(&uLocal_44, Local_112.f_9, 0, 0, 1, 1, 1);
					if (Local_112.f_10 == 13 || Local_112.f_10 == 14)
					{
						if (iLocal_423 == -1)
						{
							iLocal_423 = unk_0x3732B96D7A1859B4();
						}
						if (iLocal_422 == -1)
						{
							iLocal_422 = unk_0x3732B96D7A1859B4();
						}
						else if (func_112(iLocal_422, 5000))
						{
							bVar0 = true;
						}
						if (func_319(Local_112.f_9, Local_628, bVar0, 0, 1, 170))
						{
							func_318();
							Local_112.f_17 = unk_0x3732B96D7A1859B4();
							func_316(&uLocal_44, 0, 0);
							iLocal_397 = 1;
						}
						else
						{
							if (!func_61())
							{
								if (func_112(iLocal_410, unk_0x895FB9FE885E36ED(5000, 12000)))
								{
									if (func_104(Local_112.f_9, Local_628, 30f))
									{
										if (unk_0xE4B596B1029F4F6A(Local_112.f_9))
										{
											if (unk_0x895FB9FE885E36ED(0, 101) < 30)
											{
												if (func_74(&uLocal_447, cLocal_441, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_410 = unk_0x3732B96D7A1859B4();
												}
											}
											else if (func_74(&uLocal_447, cLocal_440, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_410 = unk_0x3732B96D7A1859B4();
											}
										}
									}
								}
							}
							else
							{
								iLocal_410 = unk_0x3732B96D7A1859B4();
							}
							func_315(Local_112.f_9, Local_628, iLocal_423, 925353388);
						}
					}
					else
					{
						if (Local_112.f_10 == 15 || Local_112.f_10 == 16)
						{
							if (!iLocal_368)
							{
								if (!func_61())
								{
									if (func_104(Local_112.f_9, Local_628, 30f))
									{
										if (func_74(&uLocal_447, cLocal_440, sLocal_434, 4, 0, 0, 0))
										{
											Local_112.f_17 = unk_0x3732B96D7A1859B4();
											iLocal_410 = unk_0x3732B96D7A1859B4();
											iLocal_368 = 1;
										}
									}
								}
							}
							if (func_319(Local_112.f_9, Local_628, bVar0, 0, 1, 170))
							{
								func_318();
								Local_112.f_17 = unk_0x3732B96D7A1859B4();
								func_316(&uLocal_44, 0, 0);
								iLocal_397 = 1;
							}
						}
						if (func_7(Local_248[0 /*6*/]))
						{
							if ((Local_112.f_10 == 34 || Local_112.f_10 == 17) || Local_112.f_10 == 18)
							{
								if (func_388(Local_112.f_9, Local_248[0 /*6*/], &iLocal_424, 2))
								{
									if (!func_61())
									{
										func_318();
										Local_112.f_17 = unk_0x3732B96D7A1859B4();
										func_316(&uLocal_44, 0, 0);
										iLocal_397 = 1;
									}
								}
								else
								{
									if (func_387(Local_112.f_9, Local_248[0 /*6*/], Local_248[0 /*6*/].f_5, &Local_631, &iLocal_408, iLocal_419))
									{
										if (Local_112.f_10 == 34)
										{
											Local_112.f_10 = 17;
										}
									}
									func_386(Local_112.f_8, Local_112.f_9, 150f, 0.65f, 0);
									func_385(Local_112.f_9, Local_248[0 /*6*/], Local_628);
								}
							}
						}
						else
						{
							func_318();
							Local_112.f_17 = unk_0x3732B96D7A1859B4();
							func_316(&uLocal_44, 0, 0);
							iLocal_397 = 1;
						}
					}
				}
				else
				{
					func_318();
					if (!func_104(Local_112.f_9, Local_628, 10f))
					{
						if (!iLocal_387)
						{
							if (!func_313(sLocal_435, 1))
							{
								func_311(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_413, &iLocal_414, 1, 1);
								iLocal_387 = 1;
							}
						}
						else
						{
							func_345(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_413, iLocal_414, 1);
						}
					}
					else
					{
						if (!iLocal_369)
						{
							if (!unk_0x62F5757271CA0B05(Local_112.f_9) && !unk_0xC4A39E4229BD3ABE(Local_112.f_9, 0))
							{
								if (func_310("BBS_APPSUS", 0, 0) || func_310("BBS_APPSUS2", 0, 0))
								{
									unk_0x0508903FC1B0ED24();
								}
								if (!func_61())
								{
									func_3();
								}
								if (func_74(&uLocal_447, cLocal_440, sLocal_435, 4, 0, 0, 0))
								{
									iLocal_369 = 1;
								}
							}
						}
						else if (!func_61())
						{
							iLocal_100 = 2;
						}
						func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
					}
					if (func_308(&(Local_112.f_9)))
					{
						iLocal_402 = 1;
						iLocal_100 = 2;
					}
				}
				break;
			
			case 2:
				if (func_310("BBS_APPSUS", 0, 0) || func_310("BBS_APPSUS2", 0, 0))
				{
					unk_0x0508903FC1B0ED24();
				}
				unk_0x34B2EF6CD6495C38(0);
				iLocal_369 = 1;
				unk_0xBC0A37D4FCBFB4E9(5, joaat("player"), iLocal_612);
				unk_0xBC0A37D4FCBFB4E9(5, iLocal_612, joaat("player"));
				func_109(&(Local_112.f_8));
				func_318();
				Local_112.f_17 = unk_0x3732B96D7A1859B4();
				func_316(&uLocal_44, 0, 0);
				func_384(1, &uLocal_431);
				if (iLocal_402)
				{
					func_124(7);
				}
				else
				{
					func_124(3);
				}
				break;
			}
	}
}

void func_384(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x25118499AB6F447B(Var0, Var3, 0, 1, 1, 1);
		unk_0x30E03AE27983C5E8(Var0, Var3);
		unk_0x20A9229D8F4F054A(Var0, Var3, 0, 1);
		unk_0x24266D999C1121E2(Var0, Var3, 0);
		unk_0xC6F725F28C08FC0B(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x333EF04F1A5ADEB5(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x6790C1CEA32DA629(*uParam1, 0);
		unk_0x7B14EF720D742849();
		unk_0x20A9229D8F4F054A(Var0, Var3, 1, 1);
		unk_0xE5D346CBE75AD979(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

void func_385(int iParam0, int iParam1, struct<3> Param2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 64f;
	fVar2 = 1600f;
	fVar3 = 4900f;
	fVar4 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(iParam0, 1), Param2);
	if (fVar4 > fVar3 && !unk_0x57F6052FCF93BCFF(iParam1))
	{
		fVar0 = 12f;
	}
	else if (fVar4 > fVar2)
	{
		if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			fVar0 = 10f;
		}
		else
		{
			fVar0 = 18f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 28f;
	}
	else
	{
		fVar0 = 22f;
	}
	if (unk_0x8F8E5C33266ED978(iParam1, -1, 0) == iParam0)
	{
		unk_0x858BBF7A215FAC10(iParam0, fVar0);
	}
}

void func_386(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xBDD3EABACAB97D09(uParam0))
	{
		if ((unk_0x2137828D03306CAF(iParam1) && unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91())) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0x82DF3B947FC3E281(iParam1))
			{
				if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam1), 0))
				{
					fVar1 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xA4F6216A8431C2E8(uParam0, 1);
						unk_0x7FF3A84437112BB2(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA4F6216A8431C2E8(uParam0, 0);
						unk_0x7FF3A84437112BB2(uParam0, 255);
					}
				}
			}
			else if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam1)))
				{
					fVar1 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xA4F6216A8431C2E8(uParam0, 1);
						unk_0x7FF3A84437112BB2(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA4F6216A8431C2E8(uParam0, 0);
						unk_0x7FF3A84437112BB2(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_387(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (iLocal_408 >= iParam5)
	{
		return 1;
	}
	if (!func_104(iParam1, *(uParam3[*iParam4 /*3*/]), 15f))
	{
		if (!func_63(iParam0, -1817882002) && !func_63(iParam0, -72074166))
		{
			if (iLocal_408 < 7)
			{
				unk_0xED057CE9299687BC(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, uParam2, 786468, 0f, 2f);
			}
			else
			{
				unk_0x0761297C2376F66D(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
			}
		}
	}
	else
	{
		*iParam4++;
		if (iLocal_408 >= iParam5)
		{
			return 1;
		}
		else if (iLocal_408 < 7)
		{
			unk_0xED057CE9299687BC(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, uParam2, 786468, 0f, 2f);
		}
		else
		{
			unk_0x0761297C2376F66D(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_22(iParam0))
	{
		if (func_7(iParam1))
		{
			if (func_355(iParam1, iParam3))
			{
				unk_0xA05ED0EFFC6C6A11(iParam0, iParam1, 4, 2000);
				return (1 || unk_0xE86A53C202B21FAB(iParam1) < 150);
				unk_0x2DEA38A68AA89671(iParam1, 0, 1, 0);
				if (unk_0xB01B1648698791BB(iParam1) > 100f)
				{
					unk_0x525CB8A0699017B3(iParam1, 100f);
				}
				unk_0x43CC7019588BCE12(iParam1, 1);
				return 1;
			}
			else if (!unk_0x5B9B499C707C2A95(iParam0, iParam1, 0))
			{
				return 1;
			}
			else if (unk_0xF47F511EA9EDCFF5(iParam0, 0))
			{
				return 1;
			}
			else if (((unk_0x12CF5C6534A94BEE(iParam1, 2, 10000) || unk_0x12CF5C6534A94BEE(iParam1, 3, 20000)) || unk_0x12CF5C6534A94BEE(iParam1, 0, 10000)) || unk_0x12CF5C6534A94BEE(iParam1, 1, 10000))
			{
				return 1;
			}
			if (unk_0x8E5603C4729B40B4(iParam1))
			{
				if (func_112(*iParam2, 3500))
				{
					return 1;
				}
			}
			else
			{
				*iParam2 = unk_0x3732B96D7A1859B4();
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_389()
{
	if (func_22(Local_112.f_9))
	{
		func_369(Local_112.f_9, &iLocal_421, 1126825984, 1);
		func_361(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_349();
		switch (iLocal_100)
		{
			case 0:
				if (!unk_0xBDD3EABACAB97D09(Local_112.f_8))
				{
					Local_112.f_8 = func_346(Local_112.f_9, 1, 0, 5);
				}
				func_311(&(Local_112.f_8), "", "", &iLocal_413, &iLocal_414, 1, 0);
				iLocal_100 = 1;
				break;
			
			case 1:
				switch (iLocal_101)
				{
					case 2:
						if (!iLocal_377)
						{
							if (func_61())
							{
								func_3();
							}
							if (func_74(&uLocal_447, cLocal_441, "BBC_T14", 4, 0, 0, 0))
							{
								Local_112.f_17 = unk_0x3732B96D7A1859B4();
								iLocal_377 = 1;
							}
							func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
						}
						else if (!iLocal_388)
						{
							if (!func_313("BBC_T14", 1))
							{
								func_311(&(Local_112.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_413, &iLocal_414, 1, 1);
								iLocal_388 = 1;
							}
						}
						else
						{
							func_345(&(Local_112.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_413, iLocal_414, 1);
							if (func_104(Local_112.f_9, Local_628, 25f) && func_392(Local_112.f_9, Local_628, 10f))
							{
								if (unk_0xE54DA6A5B710C410(unk_0x2A5EB8B0FE590B91()) || unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
								{
									if (func_391(&(Local_112.f_19)))
									{
										iLocal_101 = 1;
										iLocal_381 = 0;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 50000);
											Local_112.f_10 = 3;
										}
									}
									else if (!unk_0x7D00F6C99487466F(unk_0x2A5EB8B0FE590B91()) && unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), Local_112.f_9))
									{
										iLocal_101 = 1;
										iLocal_381 = 0;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 50000);
											Local_112.f_10 = 3;
										}
									}
								}
								else if (func_390(Local_112.f_9, iLocal_421, 0, 1103626240, 1086324736))
								{
									iLocal_101 = 0;
								}
								else if (func_104(Local_112.f_9, Local_628, 5f))
								{
									iLocal_101 = 0;
								}
								else if (func_391(&(Local_112.f_19)))
								{
									if (func_104(Local_112.f_9, Local_628, (25f - 1.5f)))
									{
										iLocal_101 = 1;
										iLocal_381 = 0;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 50000);
											Local_112.f_10 = 3;
										}
									}
								}
							}
						}
						if (func_354(Local_112.f_9, Local_112.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_100 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_381)
						{
							if (func_310("BBS_APHEND", 0, 0) || func_310("BBS_APHEND2", 0, 0))
							{
								unk_0x0508903FC1B0ED24();
							}
							if (func_61())
							{
								func_3();
							}
							if (func_74(&uLocal_447, cLocal_440, "BB1_J2", 4, 0, 0, 0))
							{
								Local_112.f_17 = unk_0x3732B96D7A1859B4();
								iLocal_410 = unk_0x3732B96D7A1859B4();
								iLocal_381 = 1;
							}
							func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
						}
						else if (!iLocal_376)
						{
							if (!func_313("BBC_T14", 1) && !func_313("BB1_J2", 1))
							{
								if (func_310("BBS_APHEND", 0, 0) || func_310("BBS_APHEND2", 0, 0))
								{
									unk_0x0508903FC1B0ED24();
								}
								if (func_61())
								{
									func_3();
								}
								if (func_74(&uLocal_447, cLocal_441, "BBC_T1", 4, 0, 0, 0))
								{
									Local_112.f_17 = unk_0x3732B96D7A1859B4();
									iLocal_376 = 1;
								}
								else if (iLocal_101 == 1)
								{
									if (func_112(iLocal_410, 1250))
									{
										Local_112.f_17 = (unk_0x3732B96D7A1859B4() - 3000);
										iLocal_376 = 1;
									}
								}
							}
							else
							{
								iLocal_410 = unk_0x3732B96D7A1859B4();
							}
							func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
						}
						else if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
						{
							if (func_112(Local_112.f_17, 500))
							{
								Local_112.f_18 = unk_0x3732B96D7A1859B4();
								Local_112.f_10 = 3;
								iLocal_100 = 2;
							}
						}
						else
						{
							iLocal_100 = 2;
						}
						if (func_354(Local_112.f_9, Local_112.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_100 = 2;
						}
						break;
					
					case 3:
						func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
						iLocal_100 = 2;
						break;
				}
				break;
			
			case 2:
				if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
				{
					Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 50000);
					Local_112.f_10 = 3;
				}
				Local_112.f_17 = unk_0x3732B96D7A1859B4();
				if (func_310("BBS_APHEND", 0, 0) || func_310("BBS_APHEND2", 0, 0))
				{
					unk_0x0508903FC1B0ED24();
				}
				func_345(&(Local_112.f_8), "", "", &iLocal_413, iLocal_414, 0);
				iLocal_413 = unk_0x3732B96D7A1859B4();
				iLocal_414 = unk_0x3732B96D7A1859B4();
				func_124(2);
				break;
			}
	}
}

int func_390(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)
{
	if (func_413(iParam0))
	{
		if (!func_350(iParam1, 10))
		{
			if (bParam2)
			{
				if (!func_104(Local_112.f_9, Local_628, fParam3))
				{
					return 0;
				}
				if (!func_392(iParam0, Local_628, fParam4))
				{
					return 0;
				}
			}
			if (unk_0x57F6052FCF93BCFF(iParam0))
			{
				if (!unk_0x812A9839F66D4B43(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_391(var uParam0)
{
	if (!func_350(*uParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	fVar3 = unk_0x3FEF699D13BCC798((Var0.f_2 - Param1.f_2));
	if (fVar3 <= fParam4)
	{
		return 1;
	}
	return 0;
}

void func_393()
{
	switch (iLocal_100)
	{
		case 0:
			if (bLocal_392)
			{
				if (func_414(0) && !Global_102283)
				{
					func_23(800, 0);
				}
			}
			if (!Global_102283)
			{
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			func_394(&Local_103, &uLocal_447);
			if (func_22(Local_112.f_9))
			{
				func_369(Local_112.f_9, &iLocal_421, 1126825984, 1);
				func_361(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
				func_349();
				if (func_104(Local_112.f_9, Local_628, 25f) && func_392(Local_112.f_9, Local_628, 10f))
				{
					if (unk_0xE54DA6A5B710C410(unk_0x2A5EB8B0FE590B91()) || unk_0xC8AAE02019F925E6(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if (func_391(&(Local_112.f_19)))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
						else if (!unk_0x7D00F6C99487466F(unk_0x2A5EB8B0FE590B91()) && unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), Local_112.f_9))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
					}
					else if (func_390(Local_112.f_9, iLocal_421, 0, 1103626240, 1086324736))
					{
						iLocal_101 = 0;
						iLocal_100 = 2;
					}
					else if (func_104(Local_112.f_9, Local_628, 5f))
					{
						iLocal_101 = 0;
						iLocal_100 = 2;
					}
					else if (func_391(&(Local_112.f_19)))
					{
						if (func_104(Local_112.f_9, Local_628, (25f - 1.5f)))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
					}
				}
				else if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), Local_112.f_9) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), Local_112.f_9))
				{
					iLocal_101 = 2;
					iLocal_100 = 2;
				}
				if (func_354(Local_112.f_9, Local_112.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_101 = 3;
					iLocal_100 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_101 == 3)
			{
				func_311(&(Local_112.f_8), "", "", &iLocal_413, &iLocal_414, 1, 0);
				func_124(2);
			}
			else
			{
				if (iLocal_101 == 1)
				{
					iLocal_381 = 0;
					if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
					{
						Local_112.f_18 = (unk_0x3732B96D7A1859B4() - 50000);
						Local_112.f_10 = 3;
					}
				}
				func_124(1);
			}
			break;
	}
}

void func_394(var uParam0, var uParam1)
{
	if (!uParam0->f_7)
	{
		if (func_397(26, func_399(uParam0->f_4), 0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if ((!func_61() && !unk_0x7C8D4D8A617D31D0(unk_0x2A5EB8B0FE590B91())) && !unk_0x5CA780C6DF42F0B0())
				{
					func_90(uParam1, 2, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
					if (func_75(uParam1, func_396(uParam0->f_4), func_395(uParam0->f_4), 4, 0, 0, 0))
					{
						uParam0->f_7 = 1;
					}
				}
				else
				{
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 1;
			}
		}
	}
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BB1_TE";
		
		case 1:
			return "BB2_TE";
		
		case 2:
			return "BB3_TE";
		
		case 3:
			return "BB4_TE";
		
		default:
	}
	return "NULL";
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BB1AUD";
		
		case 1:
			return "BB2AUD";
		
		case 2:
			return "BB3AUD";
		
		case 3:
			return "BB4AUD";
		
		default:
	}
	return "NULL";
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_398(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = Global_36957[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_46257[iVar0 /*203*/].f_9)
	{
		if (Global_46257[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
		{
			if (iVar4 == 0)
			{
				iVar2 = iVar3;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
		}
		iVar3++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 16)
	{
		if ((Global_45895[iVar1 /*120*/].f_86[iVar3] && Global_45895[iVar1 /*120*/].f_18[iVar3] == Global_46257[iVar0 /*203*/].f_1) && Global_45895[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_45895[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return 0;
}

int func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46257[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46257[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46257[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		
		case 1:
			return 76;
		
		case 2:
			return 77;
		
		case 3:
			return 78;
		
		default:
	}
	return 79;
}

void func_400()
{
	if (bLocal_392)
	{
		if (((iLocal_98 != 9 && iLocal_98 != 4) && iLocal_98 != 5) && iLocal_98 != 8)
		{
			if (unk_0x2137828D03306CAF(Local_112.f_9))
			{
				if (unk_0xA9A04898798AE9E6(Local_112.f_9, 0) || unk_0x769F0F6444C1ABE0(Local_112.f_9))
				{
					func_124(8);
				}
			}
		}
	}
}

void func_401()
{
	if (bLocal_392)
	{
		if ((iLocal_98 != 9 && iLocal_98 != 4) && iLocal_98 != 5)
		{
			func_402();
			if (iLocal_102 != 0)
			{
				if (iLocal_102 == 1)
				{
					Global_101947 = 0;
					func_528();
				}
				else
				{
					func_124(9);
				}
			}
		}
	}
}

void func_402()
{
	if (unk_0x2137828D03306CAF(Local_336.f_0))
	{
		if (unk_0xA9A04898798AE9E6(Local_336.f_0, 0) || unk_0x769F0F6444C1ABE0(Local_336.f_0))
		{
			iLocal_102 = 3;
			return;
		}
		if (iLocal_102 == 4)
		{
			return;
		}
		if (func_403(0))
		{
			iLocal_102 = 4;
			return;
		}
	}
	if (iLocal_102 == 2 || iLocal_102 == 1)
	{
		return;
	}
	if (iLocal_98 == 0)
	{
		if (!unk_0xB7A628320EFF8E47(Local_628, Local_103) <= ((Local_103.f_3 + 25f) * (Local_103.f_3 + 25f)))
		{
			if (unk_0x812A9839F66D4B43(Local_112.f_9))
			{
				iLocal_102 = 1;
				return;
			}
		}
	}
	else if (unk_0x2137828D03306CAF(Local_112.f_9))
	{
		if (!unk_0xA9A04898798AE9E6(Local_112.f_9, 0) && !unk_0x769F0F6444C1ABE0(Local_112.f_9))
		{
			if ((iLocal_98 == 2 || iLocal_98 == 1) || iLocal_98 == 7)
			{
				if (!func_104(Local_112.f_9, Local_628, 150f))
				{
					if (unk_0x812A9839F66D4B43(Local_112.f_9))
					{
						iLocal_102 = 2;
						return;
					}
				}
			}
			else if (iLocal_98 == 3 || iLocal_98 == 6)
			{
				if (!func_104(Local_112.f_9, Local_628, 80f))
				{
					if (unk_0x812A9839F66D4B43(Local_112.f_9))
					{
						iLocal_102 = 2;
						return;
					}
				}
			}
		}
	}
}

int func_403(bool bParam0)
{
	if (func_22(Local_336.f_0))
	{
		if ((unk_0x971F6A3B4BE8006F(Local_336.f_0) || unk_0xD6E644EE39BA8797(Local_336.f_0)) || unk_0xB7924D997D960618(Local_336.f_0))
		{
			return 1;
		}
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), Local_336.f_0))
			{
				return 1;
			}
			if (unk_0x2137828D03306CAF(Local_344.f_0))
			{
				if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), Local_344.f_0))
				{
					return 1;
				}
			}
			if (unk_0x2137828D03306CAF(Local_356.f_0))
			{
				if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), Local_356.f_0))
				{
					return 1;
				}
			}
			if (unk_0x2137828D03306CAF(Local_350.f_0))
			{
				if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), Local_350.f_0))
				{
					return 1;
				}
			}
		}
		if (unk_0x002C96066F2BBA2F(Local_336.f_0, 60))
		{
			return 1;
		}
		if (unk_0x62F5757271CA0B05(Local_336.f_0))
		{
			if (unk_0x2860DA9980AC4109(Local_336.f_0, unk_0x2A5EB8B0FE590B91(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x002C96066F2BBA2F(Local_336.f_0, 50))
		{
			return 1;
		}
		if (func_409(Local_336.f_0, 1126825984))
		{
			return 1;
		}
		if (func_404(Local_336.f_0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x4A40D388873A536C(-1, unk_0xD1EE0E9FCD74A37B(Local_336.f_0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x002C96066F2BBA2F(Local_336.f_0, 72))
		{
			return 1;
		}
		if (bParam0)
		{
			if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_413(unk_0x2A5EB8B0FE590B91()) && func_413(iParam0))
	{
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_408(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_405(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x2519417DF9A1715B(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_408(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_405(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_405(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x4FD6F4B002CC85B3(unk_0xD1EE0E9FCD74A37B(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x4FD6F4B002CC85B3(unk_0xD1EE0E9FCD74A37B(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x4FD6F4B002CC85B3(unk_0xD1EE0E9FCD74A37B(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x4FD6F4B002CC85B3(unk_0xD1EE0E9FCD74A37B(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_406(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_406(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x05A9C36EF40B6941(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_406(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xA9F53749C5A3B797(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xA9F53749C5A3B797(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xA9F53749C5A3B797(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xA9F53749C5A3B797(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xA9F53749C5A3B797(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_407(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_182(Param1 - unk_0xD1EE0E9FCD74A37B(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x09BFAEEB73544139(iParam0) };
	}
	else
	{
		Var3 = { func_182(unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 5f, 0f) - unk_0x585F703DF3E83B6E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_367(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_408(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_413(unk_0x2A5EB8B0FE590B91()) && func_413(iParam0))
	{
		if (func_411(iParam0) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0))
		{
			if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_410(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_410(int iParam0, float fParam1)
{
	return func_362(iParam0, unk_0x2A5EB8B0FE590B91(), fParam1, 1, 250, 7);
}

int func_411(int iParam0)
{
	if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0) && unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
	{
		return 1;
	}
	return 0;
}

void func_412(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
	func_19(iParam0, Param1, fParam4, bParam5, 1);
	if (bParam6)
	{
		if (func_413(iParam0))
		{
			unk_0xB1D181DBFC526F52(iParam0, 0, 0);
		}
	}
}

int func_413(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_414(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_415(int iParam0, bool bParam1)
{
	func_425(bParam1, 1);
	if (bParam1)
	{
		func_416();
	}
	iLocal_99 = iParam0;
	bLocal_392 = false;
	if (func_70())
	{
		iLocal_393 = 1;
	}
	else
	{
		iLocal_393 = 0;
	}
	if (!func_70())
	{
		if (iLocal_99 == 0)
		{
			if (func_413(unk_0x2A5EB8B0FE590B91()))
			{
				func_412(unk_0x2A5EB8B0FE590B91(), Local_665, fLocal_405, 0, 0);
				unk_0x164CA344DBD7B6F3(0f);
				unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
				func_11(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 13, 5000, 0, 0);
				iLocal_393 = 1;
			}
		}
	}
	func_1(iLocal_99);
}

void func_416()
{
	func_417(1, 0);
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!func_70())
		{
			unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
			func_412(unk_0x2A5EB8B0FE590B91(), Local_665, fLocal_405, 0, 0);
			unk_0x164CA344DBD7B6F3(0f);
			unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
		}
		unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
		unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
	}
	func_20();
	unk_0x28BD561DA3E207B1(iLocal_612);
	func_470();
	func_124(0);
}

void func_417(bool bParam0, bool bParam1)
{
	unk_0x0508903FC1B0ED24();
	if (unk_0x6235C49EA2DBA22D())
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	if (Global_101947 == 0)
	{
		func_20();
	}
	unk_0xFBC4596E19752537(1f);
	unk_0xBAD89C59C9871295(2, 1);
	unk_0xBAD89C59C9871295(3, 1);
	unk_0xBAD89C59C9871295(4, 1);
	unk_0xBAD89C59C9871295(5, 1);
	unk_0xFA96CEABD6118DCF(1);
	func_423(0);
	func_16(0, 0);
	unk_0xDA0C5084402DA99C(1);
	unk_0xA6C8C7573424CA93(1);
	func_422(0);
	unk_0x98ADC153D3A4DE00(0);
	unk_0x34B2EF6CD6495C38(0);
	func_421(1);
	if (iLocal_98 > 2)
	{
		func_384(0, &uLocal_431);
	}
	unk_0x6790C1CEA32DA629(uLocal_430, 0);
	unk_0x7B14EF720D742849();
	func_106(&uLocal_447, 2);
	func_106(&uLocal_447, 3);
	func_106(&uLocal_447, 4);
	func_316(&uLocal_44, 0, 0);
	unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
	unk_0x27EB3C87BA9CA1FD(1f);
	func_25(1, 1, 1, 1);
	unk_0xA701CFE8692AB746(0);
	func_420(1, 1, 1);
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
	}
	if (func_22(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 1);
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 250, 1);
		unk_0xAF2C217E49954DFD(unk_0x2A5EB8B0FE590B91());
	}
	func_107();
	func_91(bParam0);
	func_418(bParam1);
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEF7A86AB02E46379(0, 1);
	}
	unk_0x15167ADA0B7D44AE(func_101());
	unk_0x15167ADA0B7D44AE("ODDJOBS@BAILBOND_QUARRY");
	func_419();
	unk_0xFD213087BC4CC3B3(Local_285.f_5);
}

void func_419()
{
	unk_0x4AE964880EE189E9(func_357());
	unk_0x4AE964880EE189E9(func_358());
}

void func_420(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x4F561A675BAC81C6())
	{
		while (bVar0)
		{
			bVar0 = unk_0x4F561A675BAC81C6();
			if (unk_0x863D84AFAC2AB730())
			{
				unk_0x3E6ED80934AE4880(0);
			}
			if (unk_0xA1EDDE074DA26387())
			{
				unk_0x27378D398128FEC6();
			}
			if (unk_0x4F561A675BAC81C6() && !unk_0x863D84AFAC2AB730())
			{
				bVar0 = false;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (bParam0)
		{
			func_25(iParam1, iParam2, 1, 1);
		}
	}
}

void func_421(int iParam0)
{
	Global_89228 = iParam0;
}

void func_422(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3A8EFBE4AB457FE2(2, joaat("player"), 296331235);
		unk_0x3A8EFBE4AB457FE2(2, joaat("player"), 1166638144);
		unk_0x3A8EFBE4AB457FE2(2, joaat("player"), 2037579709);
		unk_0x3A8EFBE4AB457FE2(2, joaat("player"), 2017343592);
		unk_0x3A8EFBE4AB457FE2(2, joaat("player"), -1821475077);
		unk_0x3A8EFBE4AB457FE2(2, joaat("player"), 1782292358);
		unk_0x02C46A0C57F048CE(unk_0x0FFED3E94261A832(), 0);
	}
	else
	{
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), 296331235);
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), 1166638144);
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), 2037579709);
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), 2017343592);
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), -1821475077);
		unk_0x3A8EFBE4AB457FE2(255, joaat("player"), 1782292358);
		unk_0x02C46A0C57F048CE(unk_0x0FFED3E94261A832(), 1);
	}
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		func_424();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_424()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_425(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_420(0, 1, 1);
	}
	if (!unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x5BFE0E837BA0AF60(0);
	}
	func_189(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_426(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_469())
	{
		unk_0xAC09235E2065C253(0);
		unk_0x507FE690B1271947(&(Global_91777.f_20), 2);
		unk_0x8850034223654421(1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), false, 0);
		}
		Global_91773 = { Param0 };
		Global_91776 = fParam3;
		Global_91772 = 1;
		if (iParam4 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 14);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_91777.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 24);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_91777.f_20), 24);
		}
		func_69(1);
	}
}

void func_427(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_469() || !func_467())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_464(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_462();
		while (!func_461())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		*iParam0 = func_449(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_167(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_97012.f_2875 };
			fParam4 = Global_97012.f_2875.f_6;
		}
		unk_0x333EF04F1A5ADEB5(Param1, 5f, 1, 0, 0, 0);
		func_445(Param1, 5f, 0);
		if (func_83(iParam12))
		{
			func_444(iParam12, 0);
			while (!func_428(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x0F39DF6675B2333E(iParam10);
			while (!unk_0xA1FC9D7AEA164881(iParam10))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			*iParam0 = unk_0xE42A511281C9895B(iParam10, Param1, fParam4, 1, 1, 0);
			if (unk_0x2137828D03306CAF(*iParam0) && !unk_0xA9A04898798AE9E6(*iParam0, 0))
			{
				if (iParam11 == 0)
				{
					unk_0x23B7F0BEB9890E62(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					unk_0xC2C096B78AB918EB(*iParam0, iParam11, iParam11);
				}
			}
			unk_0xFD213087BC4CC3B3(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((unk_0x2137828D03306CAF(*iParam0) && !unk_0xA9A04898798AE9E6(*iParam0, 0)) && unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91())) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x01EE2412A2609146(unk_0x2A5EB8B0FE590B91(), *iParam0, -1);
			unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
		}
	}
}

int func_428(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_83(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_159(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x2137828D03306CAF(*iParam0))
		{
			if (unk_0xD3B21CE53AA7BE51(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_103236.f_2164.f_539.f_4296) && Global_103236.f_8866.f_99.f_58[131])
		{
			Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x0F39DF6675B2333E(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xA1FC9D7AEA164881(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE42A511281C9895B(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
				unk_0x57BF0DBF9E160E0A(*iParam0, 0);
				unk_0xAEED2773E5D58406(*iParam0, 0);
				unk_0x9897DB908AE3BCFF(*iParam0, 1);
				unk_0x67E5DE1657F60AC6(*iParam0, 1250);
				unk_0x525CB8A0699017B3(*iParam0, 1250f);
				unk_0x6385100E76566DD6(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC2C096B78AB918EB(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x1225B25A5432A577(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x170792970BF5726F(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xE4246493481B5222(*iParam0, iVar103 + 1, !Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x2038B43D5C4AA200(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_443(&uVar1, &uVar0))
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &uVar1);
					unk_0xA7314A354509BF8F(*iParam0, uVar0);
				}
				else
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x00007E94C64D5DBF())
					{
						unk_0xA7314A354509BF8F(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB1546B6A0A948EEF(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x11C8DD1ABA391722(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x81B2B4427379A53A(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xFB949D3CEFC55756(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xAF068518EE1A2969(*iParam0, 2, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xAF068518EE1A2969(*iParam0, 3, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xAF068518EE1A2969(*iParam0, 0, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xAF068518EE1A2969(*iParam0, 1, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x7006FCC790371C48(*iParam0) > 1 && Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x8F60D3A8849F5D7E(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(*iParam0)))
					{
						if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(*iParam0)))
						{
							if (Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_439(iParam0, &(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x9A030C582B35313F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bodhi2"))
					{
						func_437(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xFD213087BC4CC3B3(Global_103236.f_2164.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_436(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x0F39DF6675B2333E(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xA1FC9D7AEA164881(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xE42A511281C9895B(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
				unk_0x57BF0DBF9E160E0A(*iParam0, 0);
				unk_0xAEED2773E5D58406(*iParam0, 0);
				unk_0x9897DB908AE3BCFF(*iParam0, 1);
				unk_0x67E5DE1657F60AC6(*iParam0, 1250);
				unk_0x525CB8A0699017B3(*iParam0, 1250f);
				unk_0x6385100E76566DD6(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC2C096B78AB918EB(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x1225B25A5432A577(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x170792970BF5726F(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xE4246493481B5222(*iParam0, iVar104 + 1, !Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x2038B43D5C4AA200(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_443(&uVar1, &uVar0))
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &uVar1);
					unk_0xA7314A354509BF8F(*iParam0, uVar0);
				}
				else
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x00007E94C64D5DBF())
					{
						unk_0xA7314A354509BF8F(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xB1546B6A0A948EEF(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x11C8DD1ABA391722(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x81B2B4427379A53A(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xFB949D3CEFC55756(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xAF068518EE1A2969(*iParam0, 2, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xAF068518EE1A2969(*iParam0, 3, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xAF068518EE1A2969(*iParam0, 0, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xAF068518EE1A2969(*iParam0, 1, unk_0xAA4F14DA15DB0B51(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x7006FCC790371C48(*iParam0) > 1 && Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x8F60D3A8849F5D7E(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(*iParam0)))
					{
						if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(*iParam0)))
						{
							if (Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xF2EEE6F25AF5D5B9(*iParam0, Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_439(iParam0, &(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x9A030C582B35313F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bodhi2"))
					{
						func_437(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0xFD213087BC4CC3B3(Global_103236.f_2164.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_436(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x0F39DF6675B2333E(Var5.f_0);
			if (unk_0xA1FC9D7AEA164881(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xE42A511281C9895B(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0x07C140F31B3CDAFA(*iParam0, 1084227584);
				unk_0x57BF0DBF9E160E0A(*iParam0, 0);
				unk_0xAEED2773E5D58406(*iParam0, 0);
				unk_0x9897DB908AE3BCFF(*iParam0, 1);
				StringCopy(&cVar106, unk_0x76FEACB77B140714(*iParam0), 16);
				unk_0x67E5DE1657F60AC6(*iParam0, 1250);
				unk_0x525CB8A0699017B3(*iParam0, 1250f);
				unk_0x6385100E76566DD6(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xC2C096B78AB918EB(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x1225B25A5432A577(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x170792970BF5726F(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xE4246493481B5222(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x2038B43D5C4AA200(*iParam0, Var5.f_24);
				}
				if (func_443(&uVar1, &uVar0))
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &uVar1);
					unk_0xA7314A354509BF8F(*iParam0, uVar0);
				}
				else
				{
					unk_0x08DCA8665D0C20FA(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x00007E94C64D5DBF())
					{
						unk_0xA7314A354509BF8F(*iParam0, Var5.f_26);
					}
				}
				unk_0xB1546B6A0A948EEF(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x11C8DD1ABA391722(*iParam0, Var5.f_88);
				unk_0x81B2B4427379A53A(*iParam0, Var5.f_87);
				unk_0xFB949D3CEFC55756(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0xAF068518EE1A2969(*iParam0, 2, unk_0xAA4F14DA15DB0B51(Var5.f_92, 28));
				unk_0xAF068518EE1A2969(*iParam0, 3, unk_0xAA4F14DA15DB0B51(Var5.f_92, 29));
				unk_0xAF068518EE1A2969(*iParam0, 0, unk_0xAA4F14DA15DB0B51(Var5.f_92, 30));
				unk_0xAF068518EE1A2969(*iParam0, 1, unk_0xAA4F14DA15DB0B51(Var5.f_92, 31));
				if (unk_0x7006FCC790371C48(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x8F60D3A8849F5D7E(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(*iParam0)))
					{
						if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xF2EEE6F25AF5D5B9(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xF2EEE6F25AF5D5B9(*iParam0, Var5.f_90);
						}
					}
				}
				func_439(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x9A030C582B35313F(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bagger") && !Global_103236.f_8866.f_99.f_58[118])
					{
						unk_0x08DCA8665D0C20FA(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("bodhi2"))
					{
						func_437(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_103236.f_2164.f_539.f_4296) && Global_103236.f_8866.f_99.f_58[131]) && unk_0xD3B21CE53AA7BE51(*iParam0) == joaat("tailgater"))
				{
					unk_0x7940803ED711B46E(*iParam0, 6, 1, false);
					unk_0x7940803ED711B46E(*iParam0, 14, 7, false);
					unk_0x7940803ED711B46E(*iParam0, 11, 2, false);
					unk_0x7940803ED711B46E(*iParam0, 2, 3, false);
					unk_0x7940803ED711B46E(*iParam0, 7, 5, false);
					unk_0x7940803ED711B46E(*iParam0, 0, 0, false);
					unk_0x7940803ED711B46E(*iParam0, 3, 3, false);
					unk_0x7940803ED711B46E(*iParam0, 13, 1, false);
					unk_0x7940803ED711B46E(*iParam0, 4, 3, false);
					unk_0x7940803ED711B46E(*iParam0, 12, 2, false);
					unk_0x4F10E5AD7F210123(*iParam0, 22, true);
					unk_0xF2EEE6F25AF5D5B9(*iParam0, 2);
					unk_0x7940803ED711B46E(*iParam0, 23, 11, false);
					unk_0x81B2B4427379A53A(*iParam0, 2);
					Global_103236.f_2164.f_539.f_4296 = 1;
					func_429(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0xFD213087BC4CC3B3(Var5.f_0);
				}
				if (bVar105)
				{
					func_436(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_429(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_83(iParam0) && unk_0x2137828D03306CAF(*iParam1)) && unk_0x7FAC45D56235AB39(*iParam1, 0))
	{
		if (iParam2 > Global_103236.f_2164.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_128(*iParam1, iParam0);
		}
		if (unk_0x300A7FCC6B376752(*iParam1) != 0)
		{
			unk_0x3EEE06C64BC5D39B(*iParam1, 0);
		}
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0xD3B21CE53AA7BE51(*iParam1);
		if (unk_0xFF8C24E64D6E24F2(*iParam1, &iVar1))
		{
			Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0xD3B21CE53AA7BE51(iVar1);
		}
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xB9D1DA086531BDE7(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xE86A53C202B21FAB(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x519A3AD50A2673BF(*iParam1, 1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x519A3AD50A2673BF(*iParam1, 2);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x519A3AD50A2673BF(*iParam1, 3);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x519A3AD50A2673BF(*iParam1, 4);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x519A3AD50A2673BF(*iParam1, 5);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x519A3AD50A2673BF(*iParam1, 6);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x519A3AD50A2673BF(*iParam1, 7);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x519A3AD50A2673BF(*iParam1, 8);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x519A3AD50A2673BF(*iParam1, 9);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x519A3AD50A2673BF(*iParam1, 10);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x519A3AD50A2673BF(*iParam1, 11);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x519A3AD50A2673BF(*iParam1, 12);
		if (unk_0x4294F2710818C474(*iParam1, 0))
		{
			iVar2 = unk_0x69F266E1CAA28F73(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x511EB800EFE78B52();
		StringCopy(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x76FEACB77B140714(*iParam1), 16);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x8721B6183C713CE4(*iParam1);
		unk_0x89AFA08324111FDC(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xA410C943ACB84245(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xA6349759D1FE6F1C(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x7C5D0771C19AD7FF(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x289A21B43A9C74AA(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x30DA210F0843C9E9(*iParam1);
		Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xEDE232D4FB7953E1(*iParam1);
		unk_0x4140FA0DCDF92827(*iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xD046431B0EBE3CAF(*iParam1, 2))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xD046431B0EBE3CAF(*iParam1, 3))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xD046431B0EBE3CAF(*iParam1, 0))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xD046431B0EBE3CAF(*iParam1, 1))
		{
			unk_0xF6082E2ADA1C795B(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_103236.f_2164.f_539.f_4297[iParam0] = 10;
		if ((unk_0x5688106DF029B957(*iParam1) >= 0 && unk_0x5688106DF029B957(*iParam1) < 255) && func_433(*iParam1, 0, &uVar0))
		{
			func_170(iParam1, &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_103236.f_19899[iParam0 /*43*/].f_40 = 1;
				Global_103236.f_19899[iParam0 /*43*/] = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_103236.f_19899[iParam0 /*43*/].f_3 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_103236.f_19899[iParam0 /*43*/].f_4 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_103236.f_19899[iParam0 /*43*/].f_5 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_103236.f_19899[iParam0 /*43*/].f_6 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_103236.f_19899[iParam0 /*43*/].f_10 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_103236.f_19899[iParam0 /*43*/].f_16 = !Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_103236.f_19899[iParam0 /*43*/].f_19 = { Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_103236.f_19899[iParam0 /*43*/].f_23 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_103236.f_19899[iParam0 /*43*/].f_7 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_103236.f_19899[iParam0 /*43*/].f_8 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_103236.f_19899[iParam0 /*43*/].f_9 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_103236.f_19899[iParam0 /*43*/].f_11 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_103236.f_19899[iParam0 /*43*/].f_12 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_103236.f_19899[iParam0 /*43*/].f_13 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_103236.f_19899[iParam0 /*43*/].f_14 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_103236.f_19899[iParam0 /*43*/].f_15 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_103236.f_19899[iParam0 /*43*/].f_18 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_103236.f_19899[iParam0 /*43*/].f_17 = Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_103236.f_19899[iParam0 /*43*/].f_24 = unk_0x7EF9AB14DBD846A9(*iParam1, 11) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_25 = unk_0x7EF9AB14DBD846A9(*iParam1, 12) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_26 = unk_0x7EF9AB14DBD846A9(*iParam1, 4) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_27 = unk_0x7EF9AB14DBD846A9(*iParam1, 23) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_28 = unk_0x7EF9AB14DBD846A9(*iParam1, 14) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_29 = unk_0x7EF9AB14DBD846A9(*iParam1, 16) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_30 = unk_0x7EF9AB14DBD846A9(*iParam1, 15) + 1;
				Global_103236.f_19899[iParam0 /*43*/].f_32 = unk_0x6A1AEEDEE3E56D20(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[0] = unk_0xF495654F4ECB81B8(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[1] = unk_0x0306EF871D404DE5(*iParam1, 14, 0);
				Global_103236.f_19899[iParam0 /*43*/].f_33[2] = unk_0x0306EF871D404DE5(*iParam1, 14, 1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[3] = unk_0x0306EF871D404DE5(*iParam1, 14, 2);
				Global_103236.f_19899[iParam0 /*43*/].f_33[4] = unk_0x0306EF871D404DE5(*iParam1, 14, 3);
				Global_103236.f_19899[iParam0 /*43*/].f_39 = unk_0x12B9EB0FD500FB78(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_31 = func_432(*iParam1);
				Global_103236.f_19899[iParam0 /*43*/].f_33[0] = unk_0xCD40B830B6D15DE7(*iParam1);
				unk_0x05E005EA5C9DD9F7(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_430(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_103236.f_19899[iParam0 /*43*/].f_1));
				unk_0xFC554E56023C10DA(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_430(Global_103236.f_2164.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_103236.f_19899[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_430(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_431(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_431(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0)) && unk_0x5688106DF029B957(iParam0) >= 0) && unk_0x5688106DF029B957(iParam0) < 255)
	{
		if (unk_0x12B9EB0FD500FB78(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x12B9EB0FD500FB78(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x12B9EB0FD500FB78(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x12B9EB0FD500FB78(iParam0) == 0)
		{
			if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_433(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x5FABA3586E57ED57(unk_0xD3B21CE53AA7BE51(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	if (!func_434(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (((((unk_0xD540D62327324842(iParam0) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("halftrack")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("phantom3")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("hauler2")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("trailerlarge")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("trailersmall2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x591AF4C50B46E014())
	{
		if ((func_141(iParam0) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("sentinel2")) && unk_0xD3B21CE53AA7BE51(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_434(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((((((((!unk_0x6CB676485E7724F8(iParam0) && !unk_0x4BD9974FDDE2D1EC(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (func_435(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x2137828D03306CAF(Global_89253[iVar0]))
		{
			Global_89253[iVar0] = iParam0;
			Global_89263[iVar0] = iParam1;
			Global_89273[iVar0] = unk_0xD3B21CE53AA7BE51(iParam0);
			if (unk_0x6CB676485E7724F8(Global_89273[iVar0]))
			{
				Global_89301[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89301[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_437(int iParam0)
{
	if (!func_438(*iParam0))
	{
		unk_0xE4246493481B5222(*iParam0, 5, !Global_103236.f_8866.f_99.f_58[119]);
	}
}

bool func_438(int iParam0)
{
	return unk_0x519A3AD50A2673BF(iParam0, 5);
}

int func_439(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7FAC45D56235AB39(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x300A7FCC6B376752(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x3EEE06C64BC5D39B(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4F10E5AD7F210123(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x855369FDBD418C02(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x74971716DDE7C473(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x7940803ED711B46E(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_442(unk_0xD3B21CE53AA7BE51(*iParam0), 1) && unk_0x855369FDBD418C02(*iParam0, 24) != func_441(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x7940803ED711B46E(*iParam0, 24, func_441(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_440(*iParam0))
	{
		unk_0x3EACD080B21FFD9A(*iParam0, 1);
		unk_0x9897DB908AE3BCFF(*iParam0, 1);
	}
	return 1;
}

int func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0)) && unk_0x300A7FCC6B376752(iParam0) > 0)
	{
		unk_0x3EEE06C64BC5D39B(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x855369FDBD418C02(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E5B8F76E9B66F81(iParam0, iVar1, unk_0x855369FDBD418C02(iParam0, iVar1)), 16);
				iVar2 = unk_0xCAEDBF30E3EA14FC(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xCAEDBF30E3EA14FC("MNU_CAGE") || iVar2 == unk_0xCAEDBF30E3EA14FC("SABRE_CAG"))
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

int func_441(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		switch (unk_0xD3B21CE53AA7BE51(iParam0))
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
		iVar0 = unk_0x7EF9AB14DBD846A9(iParam0, 38);
		iVar1 = unk_0x7EF9AB14DBD846A9(iParam0, 24);
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

int func_442(int iParam0, int iParam1)
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
			if (!Global_262145.f_12771)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12772)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12770)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12773)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12775)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12774)
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
			if (Global_262145.f_17216)
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
			if (Global_262145.f_17218)
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
			if (Global_262145.f_17222)
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
			if (Global_262145.f_17219)
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
			if (Global_262145.f_17226)
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
			if (Global_262145.f_17224)
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
			if (Global_262145.f_17229)
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
			if (Global_262145.f_19079)
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
			if (Global_262145.f_19080)
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

int func_443(var uParam0, var uParam1)
{
	if (unk_0x591AF4C50B46E014())
	{
	}
	else if (Global_103236.f_19899.f_261)
	{
		*uParam0 = { Global_103236.f_19899.f_267 };
		*uParam1 = Global_103236.f_19899.f_271;
		return 1;
	}
	return 0;
}

void func_444(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x2137828D03306CAF(Global_89253[iVar0]))
		{
			if (iParam0 == 145 || Global_89263[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xD3B21CE53AA7BE51(Global_89253[iVar0]) == func_158(iParam0, iParam1))
				{
					if (!unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Global_89253[iVar0], 0))
					{
						unk_0x216B434C1A609F5B(Global_89253[iVar0], 0, 1);
						unk_0xA613FDAC42DBBFAD(&(Global_89253[iVar0]));
						Global_89263[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_445(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_157(&(Global_68628.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x4A2E6F541CD8C36E(Param0, Global_68628.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_446(iVar0);
			}
		}
		iVar0++;
	}
}

void func_446(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_157(&(Global_68628.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x2137828D03306CAF(Global_68628.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x7FAC45D56235AB39(Global_68628.f_139[iParam0], 0))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), Global_68628.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x216B434C1A609F5B(Global_68628.f_139[iParam0], 1, 1);
				unk_0xA613FDAC42DBBFAD(&(Global_68628.f_139[iParam0]));
			}
		}
		Global_68628[iParam0] = 1;
		if (unk_0xAA4F14DA15DB0B51(Global_68628.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_163(iParam0, 0)) && Global_69537.f_66 == 0) && Global_103236.f_32211.f_1958[Global_68628.f_555[0 /*21*/].f_14] != 0) && Global_103236.f_32211.f_1958[Global_68628.f_555[0 /*21*/].f_14] > 3) && (!func_447(0, Global_68628.f_555[0 /*21*/].f_12) || !func_447(1, Global_68628.f_555[0 /*21*/].f_12)))
			{
				func_164(&(Global_103236.f_32211.f_69[Global_68628.f_555[0 /*21*/].f_14 /*78*/]), &Global_69537);
				Global_69615 = Global_103236.f_32211.f_5591;
			}
			func_161(iParam0, 0);
		}
	}
}

int func_447(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_448(&(Global_103236.f_32211.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_131(Global_103236.f_32211.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_448(var uParam0)
{
	return *uParam0;
}

int func_449(struct<3> Param0, float fParam3)
{
	return func_450(&(Global_97012.f_2875), Param0, fParam3, 0);
}

int func_450(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_460(uParam0))
	{
		if (func_167(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x19007189599EBBF5(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_459(uParam0))
		{
			unk_0x333EF04F1A5ADEB5(Param1, 5f, 1, 0, 0, 0);
			func_445(Param1, 5f, 0);
			iVar0 = unk_0xE42A511281C9895B(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x8F35D7268F7D4402(iVar0, Param1, 0, 0, 1);
				}
				func_455(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xC6B6C45D0DE76B0B(uParam0->f_12.f_66) || unk_0xA9775792113E91DA(uParam0->f_12.f_66))
				{
					if (!unk_0x5D020D79A3DEAE83(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x07C140F31B3CDAFA(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x6CB676485E7724F8(unk_0xD3B21CE53AA7BE51(iVar0)))
						{
							func_444(uParam0->f_11, 1);
						}
						else if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iVar0)))
						{
							func_444(uParam0->f_11, 2);
						}
					}
					unk_0x57BF0DBF9E160E0A(iVar0, 0);
					unk_0xAEED2773E5D58406(iVar0, 0);
					unk_0x9897DB908AE3BCFF(iVar0, 1);
					func_436(iVar0, uParam0->f_11);
				}
				else if ((!func_452(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x35302CD5A5D37EED(unk_0xFABF5258A318B1DC(), "startup_positioning"))
				{
					iVar8 = func_451(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_446(iVar8);
					}
				}
				if (((Global_91777 != 13 && Global_91777 != 10) && Global_91777 != 11) && Global_91777 != 12)
				{
					if (unk_0xCAEDBF30E3EA14FC(&(Global_91777.f_3)) == Global_69616)
					{
						if (uParam0->f_12.f_66 == Global_103236.f_32211.f_69[21 /*78*/].f_66)
						{
							func_161(24, 0);
							func_446(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_128(iVar0, uParam0->f_11);
				}
				unk_0xFD213087BC4CC3B3(uParam0->f_12.f_66);
				Var1 = { unk_0xD1EE0E9FCD74A37B(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x2137828D03306CAF(Global_68628.f_484[iVar0]) && !unk_0xA9A04898798AE9E6(Global_68628.f_484[iVar0], 0)) && unk_0x7FAC45D56235AB39(Global_68628.f_484[iVar0], 0))
		{
			unk_0x89AFA08324111FDC(iParam0, &iVar1, &iVar2);
			unk_0x89AFA08324111FDC(Global_68628.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0xD3B21CE53AA7BE51(iParam0) == unk_0xD3B21CE53AA7BE51(Global_68628.f_484[iVar0]) && unk_0x30DA210F0843C9E9(iParam0) == unk_0x30DA210F0843C9E9(Global_68628.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_452(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_454(iParam0, Global_68628.f_139[38], 0))
			{
				func_446(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_454(iParam0, Global_68628.f_139[43], 1))
			{
				func_446(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x0C5DD04D80C0EC83(unk_0x2A5EB8B0FE590B91(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_454(iParam0, uVar1[iVar6], 1) && func_453(unk_0xD1EE0E9FCD74A37B(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_167(Param1, 0f, 0f, 0f, 0)) || unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(iParam0, 1), unk_0xD1EE0E9FCD74A37B(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xA613FDAC42DBBFAD(&iParam0);
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
			if ((unk_0x2137828D03306CAF(Global_68628.f_484[14]) && unk_0x7FAC45D56235AB39(iParam0, 0)) && unk_0x7FAC45D56235AB39(Global_68628.f_484[14], 0))
			{
				if (unk_0xD3B21CE53AA7BE51(Global_68628.f_484[14]) == joaat("luxor2") && unk_0x30DA210F0843C9E9(iParam0) == unk_0x30DA210F0843C9E9(Global_68628.f_484[14]))
				{
					func_446(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x2137828D03306CAF(Global_68628.f_484[20]) && unk_0x7FAC45D56235AB39(iParam0, 0)) && unk_0x7FAC45D56235AB39(Global_68628.f_484[20], 0))
			{
				if (unk_0xD3B21CE53AA7BE51(Global_68628.f_484[20]) == joaat("swift2") && unk_0x30DA210F0843C9E9(iParam0) == unk_0x30DA210F0843C9E9(Global_68628.f_484[20]))
				{
					func_446(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_453(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3FEF699D13BCC798((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_454(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x2137828D03306CAF(uParam1) && !unk_0xA9A04898798AE9E6(iParam1, 0)) && unk_0x7FAC45D56235AB39(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x89AFA08324111FDC(iParam0, &iVar0, &iVar1);
			unk_0x89AFA08324111FDC(iParam1, &iVar2, &iVar3);
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

void func_455(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0xCAEDBF30E3EA14FC(&(uParam1->f_1)) != 0)
		{
			unk_0x08DCA8665D0C20FA(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x00007E94C64D5DBF())
		{
			unk_0xA7314A354509BF8F(iParam0, *uParam1);
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
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_169(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_169(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_169(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_169(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x1087BC8EC540DAEB(iParam0, false);
			if (unk_0x855369FDBD418C02(iParam0, 5) != -1)
			{
				unk_0x1087BC8EC540DAEB(iParam0, true);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 13))
		{
			unk_0xA04F6B54BF8EB9D3(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE8D649FA91E8C52B(iParam0);
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 12))
		{
			unk_0xAA12D8CEA5E8A7D4(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x29321171ADCB78EF(iParam0);
		}
		unk_0xC2C096B78AB918EB(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x1225B25A5432A577(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xAA4F14DA15DB0B51(uParam1->f_77, 15) || func_458(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_457())
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
		unk_0xB1546B6A0A948EEF(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x81B2B4427379A53A(iParam0, 0);
		}
		else
		{
			unk_0x81B2B4427379A53A(iParam0, 0);
			unk_0x81B2B4427379A53A(iParam0, uParam1->f_65);
		}
		unk_0x11C8DD1ABA391722(iParam0, !unk_0xAA4F14DA15DB0B51(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD1A53D507962BF1F(iParam0, uParam1->f_70);
		}
		unk_0xFB949D3CEFC55756(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xAF068518EE1A2969(iParam0, 2, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 28));
		unk_0xAF068518EE1A2969(iParam0, 3, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 29));
		unk_0xAF068518EE1A2969(iParam0, 0, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 30));
		unk_0xAF068518EE1A2969(iParam0, 1, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 31));
		unk_0xC0CE5D00E49597D9(iParam0, unk_0xAA4F14DA15DB0B51(uParam1->f_77, 10));
		if (unk_0x7006FCC790371C48(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x8F60D3A8849F5D7E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xB8B97965F826E07D(unk_0xD3B21CE53AA7BE51(iParam0)))
			{
				if (unk_0x4BD9974FDDE2D1EC(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_456(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_456(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x4294F2710818C474(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x9DF0C51BF038A196(iParam0, 1);
			}
			else
			{
				unk_0x1D58A0C9ED6B3B38(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_439(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x0F93427D94EAEAA2(uParam1->f_66) && !unk_0xC6B6C45D0DE76B0B(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, func_169(iVar2 + 1)))
				{
					if (!unk_0x519A3AD50A2673BF(iParam0, iVar2 + 1))
					{
						unk_0xE4246493481B5222(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x519A3AD50A2673BF(iParam0, iVar2 + 1))
				{
					unk_0xE4246493481B5222(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0xD3B21CE53AA7BE51(iParam0) == joaat("sheava") || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("omnis")) || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("le7b"))
		{
			if (unk_0x855369FDBD418C02(iParam0, 0) == -1)
			{
				unk_0xE4246493481B5222(iParam0, 1, false);
			}
		}
		if (unk_0xDA6E804770521A18(uParam1->f_66))
		{
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_77, 23))
			{
				if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 22))
				{
					unk_0x0C2EA5A202FDF476(iParam0, 2);
				}
				else
				{
					unk_0x0C2EA5A202FDF476(iParam0, 3);
				}
			}
			else
			{
				unk_0x0C2EA5A202FDF476(iParam0, 4);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(uParam1->f_77, 27))
		{
			unk_0x7009DB24B44E9BF0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x7009DB24B44E9BF0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x300A7FCC6B376752(iParam0) > 0)
	{
		unk_0x3EEE06C64BC5D39B(iParam0, 0);
		iVar0 = unk_0x855369FDBD418C02(iParam0, 24);
		iVar1 = unk_0xF9562C9903A5FC6A(iParam0, 24);
		unk_0xF2EEE6F25AF5D5B9(iParam0, uParam1);
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x74971716DDE7C473(iParam0, 24);
		}
		else
		{
			unk_0x7940803ED711B46E(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_457()
{
	return unk_0xA438D14FADC1185B(joaat("mpindependence"));
}

int func_458(int iParam0)
{
	var uVar0;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (unk_0x4D1A8278BAE26361("MPBitset", 3))
			{
				if (unk_0x30BD96CB13063EC9(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x01307FD0B54F50D3(iParam0, "MPBitset");
				}
				return unk_0xAA4F14DA15DB0B51(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_459(var uParam0)
{
	if (func_460(uParam0))
	{
		if (unk_0xA1FC9D7AEA164881(uParam0->f_12.f_66))
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

int func_460(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_131(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_453(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_461()
{
	return func_459(&(Global_97012.f_2875));
}

void func_462()
{
	func_463(&(Global_97012.f_2875));
}

void func_463(var uParam0)
{
	if (func_460(uParam0))
	{
		unk_0x0F39DF6675B2333E(uParam0->f_12.f_66);
	}
}

int func_464(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC6B6C45D0DE76B0B(Global_97012.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0x0F93427D94EAEAA2(Global_97012.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam2 == 0 && func_466(Global_97012.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam3 == 0 && unk_0xDA6E804770521A18(Global_97012.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_465())
		{
			return 0;
		}
	}
	return 1;
}

int func_465()
{
	float fVar0;
	
	if (!func_467())
	{
		return 0;
	}
	if ((unk_0xC6B6C45D0DE76B0B(Global_97012.f_2875.f_12.f_66) || unk_0xDA6E804770521A18(Global_97012.f_2875.f_12.f_66)) || unk_0x11217C882DAE7DDD(Global_97012.f_2875.f_12.f_66))
	{
		return 0;
	}
	fVar0 = unk_0xF1AB37B3F2ECDB2D(Global_97012.f_2875.f_12.f_66);
	if (fVar0 < 37f)
	{
		return 0;
	}
	return 1;
}

int func_466(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

bool func_467()
{
	return func_460(&(Global_97012.f_2875));
}

int func_468()
{
	if (!Global_91777 == 10 && !Global_91777 == 9)
	{
		return 0;
	}
	return Global_91777.f_2;
}

int func_469()
{
	if (Global_91777 == 10 || Global_91777 == 9)
	{
		return 1;
	}
	return 0;
}

void func_470()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_478();
	while ((!func_57(0) || !func_57(1)) || !func_57(2))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 250, 0);
	}
	unk_0xEE8231F61ED038B0("ENEMIES", &iLocal_612);
	unk_0x3A8EFBE4AB457FE2(5, joaat("player"), iLocal_612);
	unk_0x3A8EFBE4AB457FE2(5, iLocal_612, joaat("player"));
	Var0 = { func_477(Local_103) };
	Var3 = { func_476(Local_103) };
	unk_0x30E03AE27983C5E8(Var0, Var3);
	uLocal_430 = unk_0x25118499AB6F447B(Var0, Var3, 0, 1, 1, 1);
	unk_0x333EF04F1A5ADEB5(Local_103, 30f, 0, 0, 0, 0);
	unk_0xBAD89C59C9871295(2, 0);
	unk_0xBAD89C59C9871295(3, 0);
	unk_0xBAD89C59C9871295(4, 0);
	unk_0xBAD89C59C9871295(5, 0);
	unk_0xFA96CEABD6118DCF(0);
	unk_0xFBC4596E19752537(0.2f);
	func_422(1);
	while (!func_473())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_471();
	if (func_22(unk_0x2A5EB8B0FE590B91()))
	{
		func_90(&uLocal_447, 2, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
		unk_0xD79CFA0051CBF471(unk_0x2A5EB8B0FE590B91(), 1);
	}
	if (func_22(Local_112.f_9))
	{
		func_90(&uLocal_447, 3, Local_112.f_9, sLocal_433, 0, 1);
		unk_0xD79CFA0051CBF471(Local_112.f_9, 1);
	}
}

void func_471()
{
	int iVar0;
	
	if (func_22(Local_112.f_9))
	{
		unk_0xCAEEADF5FA40352F(Local_112.f_9, 1);
		unk_0xB329B704ED2A49E5(Local_112.f_9, 1);
		unk_0xF284B601CA7EB767(Local_112.f_9, 100);
		unk_0x67E5DE1657F60AC6(Local_112.f_9, 200);
		unk_0x2ED8C8890DF85A58(Local_112.f_9, 1);
		unk_0x30F81670C721F076(Local_112.f_9, 1);
		unk_0x2E0701CEBB06668C(Local_112.f_9, 1);
		unk_0x1914716FB84CED87(Local_112.f_9, 1);
		unk_0x0CBF2D434B61F601(Local_112.f_9, 2f);
		unk_0x2FD481ECDD7A12E6(Local_112.f_9, 2f);
		unk_0xB329B704ED2A49E5(Local_112.f_9, 1);
		unk_0x0B9AE9BB18EAB95A(Local_112.f_9, 0);
		unk_0x31AC59B7C21A2047(Local_112.f_9, 118, 1);
		unk_0x31AC59B7C21A2047(Local_112.f_9, 137, 1);
		unk_0x31AC59B7C21A2047(Local_112.f_9, 281, 1);
		if (Local_112.f_12 != 0)
		{
			unk_0x0013D519C885E60B(Local_112.f_9, Local_112.f_12, -1, 1, 1);
		}
		func_347(Local_112.f_9);
		func_472(Local_112.f_9, "TARGET_", 0);
		Local_112.f_10 = 0;
		unk_0x1EC40B161E6A203A(Local_112.f_9);
		unk_0xF1C3427BFED79E6B(Local_112.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 8f, -2f, -1, 1, 0, 0, 0, 0);
		if (!unk_0x2137828D03306CAF(Local_285.f_0))
		{
			Local_285.f_0 = unk_0xA3618B5F6184DAD2(joaat("prop_phone_ing"), unk_0xD1EE0E9FCD74A37B(Local_112.f_9, 0), 1, 1, 0);
		}
		if (func_413(Local_285.f_0))
		{
			unk_0x5DAB197A499B8499(Local_285.f_0, Local_112.f_9, unk_0xC88C187E2120E0BE(Local_112.f_9, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_22(Local_133[iVar0 /*19*/]))
		{
			func_347(Local_133[iVar0 /*19*/]);
			if (Local_133[iVar0 /*19*/].f_5 != 0)
			{
				unk_0x0013D519C885E60B(Local_133[iVar0 /*19*/], Local_133[iVar0 /*19*/].f_5, -1, 1, 1);
			}
			unk_0x31AC59B7C21A2047(Local_133[iVar0 /*19*/], 137, 1);
			func_472(Local_133[iVar0 /*19*/], "BACKUP_", iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_416 - 1))
	{
		if (func_7(Local_248[iVar0 /*6*/]))
		{
			unk_0x2DEA38A68AA89671(Local_248[iVar0 /*6*/], 1, 1, 0);
		}
		iVar0++;
	}
}

void func_472(var uParam0, char* sParam1, int iParam2)
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam1, 16);
	StringIntConCat(&cVar0, iParam2, 16);
	unk_0x15A19BB3A39023C8(uParam0, &cVar0);
}

int func_473()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_53(&(Local_112.f_9), Local_112.f_11, Local_112.f_13, Local_112.f_16, 1, 0, 0))
	{
		if (func_22(Local_112.f_9))
		{
			unk_0x4C47904AE69D7393(Local_112.f_9, 1);
			iVar0++;
		}
	}
	if (iLocal_420 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_420 - 1))
		{
			if (func_53(&(Local_133[iVar2 /*19*/]), Local_133[iVar2 /*19*/].f_18, Local_133[iVar2 /*19*/].f_1, Local_133[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (func_22(Local_133[iVar2 /*19*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_420)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_420 - 1))
		{
			unk_0xFD213087BC4CC3B3(Local_133[iVar2 /*19*/].f_18);
			iVar2++;
		}
	}
	if (iLocal_416 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_416 - 1))
		{
			if (func_475(&(Local_248[iVar2 /*6*/]), Local_248[iVar2 /*6*/].f_5, Local_248[iVar2 /*6*/].f_1, Local_248[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_415 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_415 - 1))
		{
			if (func_56(&(Local_291[iVar2 /*9*/]), Local_291[iVar2 /*9*/].f_8, Local_291[iVar2 /*9*/].f_1, Local_291[iVar2 /*9*/].f_7, 1))
			{
				unk_0xA32D9C84C1A93920(Local_291[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_418 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_418 - 1))
		{
			if (func_474(&(Local_328[iVar2 /*7*/]), Local_328[iVar2 /*7*/].f_5, Local_328[iVar2 /*7*/].f_2, Local_328[iVar2 /*7*/].f_6, Local_328[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_420 + iLocal_416) + iLocal_417) + iLocal_415) + iLocal_418) + 1)
	{
		return 1;
	}
	return 0;
}

int func_474(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, bool bParam7)
{
	if (!unk_0x0BF40BFCD677686E(*uParam0))
	{
		if (func_55(iParam6))
		{
			*uParam0 = unk_0x3870C683DB87CF73(uParam1, Param2, uParam5, -1, 1, iParam6);
			if (unk_0x0BF40BFCD677686E(*uParam0))
			{
				if (unk_0x3B3959D87AE5349B(*uParam0))
				{
					if (bParam7)
					{
						func_54(iParam6, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (unk_0x3B3959D87AE5349B(*uParam0))
	{
		if (bParam7)
		{
			func_54(iParam6, 0);
		}
		return 1;
	}
	return 0;
}

int func_475(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x2137828D03306CAF(*uParam0))
	{
		if (func_55(iParam1))
		{
			*uParam0 = unk_0xE42A511281C9895B(iParam1, Param2, uParam5, 1, 1, 0);
			if (unk_0x2137828D03306CAF(*uParam0))
			{
				if (!unk_0x03322C3918511AA0(*uParam0))
				{
					unk_0x216B434C1A609F5B(*uParam0, 1, 0);
				}
				if (func_7(*uParam0))
				{
					unk_0x8E979F037EACE55A(*uParam0, Param2, 1, 0, 0, 1);
					unk_0x2681BA3707AF6DA7(*uParam0, fParam5);
				}
				unk_0x07C140F31B3CDAFA(*uParam0, 1084227584);
				if (bParam6)
				{
					func_54(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_54(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_476(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	switch (Param0.f_4)
	{
		case 0:
			return 2956.785f, 2824.594f, 45.1931f;
		
		case 1:
			return 197.6706f, 2333.772f, 105.647f;
		
		case 2:
			return 535.9079f, 5518.323f, 772.5947f;
		
		case 3:
			return 1446.768f, 6361.93f, 26.9007f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_477(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	switch (Param0.f_4)
	{
		case 0:
			return 2929.665f, 2782.219f, 34.8822f;
		
		case 1:
			return 145.6927f, 2266.886f, 70.4983f;
		
		case 2:
			return 491.7797f, 5485.706f, 736.4918f;
		
		case 3:
			return 1414.211f, 6326.607f, 20.8036f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_478()
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_111 = 3;
	Local_112.f_11 = joaat("s_m_m_trucker_01");
	Local_112.f_13 = { 2945.036f, 2796.254f, 39.693f };
	Local_112.f_16 = 38.6771f;
	Local_112.f_12 = joaat("weapon_unarmed");
	Local_112.f_10 = 0;
	Local_112.f_17 = 0;
	Local_112.f_18 = 0;
	Local_112.f_19 = 0;
	func_9();
	iLocal_420 = 0;
	Local_248[0 /*6*/].f_5 = joaat("landstalker");
	Local_248[0 /*6*/].f_1 = { 2950.07f, 2796.39f, 40.35f };
	Local_248[0 /*6*/].f_4 = 338.45f;
	Local_248[1 /*6*/].f_5 = joaat("bjxl");
	Local_248[1 /*6*/].f_1 = { 2945.97f, 2790.77f, 40.37f };
	Local_248[1 /*6*/].f_4 = 28.22f;
	Local_285.f_5 = joaat("prop_phone_ing");
	iLocal_416 = 2;
	iLocal_417 = 0;
	iLocal_415 = 0;
	iLocal_418 = 0;
	Local_631[0 /*3*/] = { 2962.58f, 2817.19f, 42.29f };
	Local_631[1 /*3*/] = { 2942.482f, 2841.708f, 46.4443f };
	Local_631[2 /*3*/] = { 2909.12f, 2820.88f, 52.9f };
	Local_631[3 /*3*/] = { 2860.14f, 2816.9f, 52.56f };
	Local_631[4 /*3*/] = { 2821.638f, 2893.259f, 45.53f };
	Local_631[5 /*3*/] = { 2768.72f, 2950.61f, 39.78f };
	Local_631[6 /*3*/] = { 2712.31f, 2963.74f, 35.79f };
	Local_631[7 /*3*/] = { 2657.573f, 2981.731f, 38.9122f };
	Local_631[8 /*3*/] = { 2623.295f, 3077.358f, 46.24589f };
	iLocal_419 = 9;
	Local_665 = { 2883.023f, 2807.719f, 53.6941f };
	fLocal_405 = 256.3262f;
	Local_668 = { 2938.96f, 2783.275f, 38.5873f };
	fLocal_406 = 355.8176f;
	Local_671 = { 2947.246f, 2787.406f, 39.4516f };
	fLocal_407 = 306.625f;
	Local_674 = { 0f, 0f, 0f };
	Local_677 = { 0f, 0f, 0f };
	iLocal_101 = 4;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_370 = 0;
	iLocal_378 = 1;
	iLocal_371 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_372[iVar0] = 0;
		iVar0++;
	}
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_379 = 0;
	iLocal_380 = 0;
	iLocal_381 = 1;
	iLocal_382 = 0;
	iLocal_383 = 0;
	iLocal_386 = 0;
	iLocal_387 = 0;
	iLocal_388 = 0;
	iLocal_389 = 0;
	iLocal_390 = 0;
	iLocal_391 = 0;
	iLocal_394 = 0;
	bLocal_395 = false;
	iLocal_396 = 0;
	iLocal_397 = 0;
	iLocal_398 = 0;
	iLocal_399 = 1;
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_402 = 0;
	bLocal_403 = false;
	iLocal_384 = 1;
	bLocal_385 = false;
	iLocal_102 = 0;
	iLocal_409 = 0;
	iLocal_413 = 0;
	iLocal_414 = 0;
	iLocal_410 = 0;
	iLocal_408 = 0;
	iLocal_427 = 0;
	iLocal_412 = 0;
	iLocal_421 = 0;
	iLocal_422 = -1;
	iLocal_423 = -1;
	iLocal_424 = 0;
	iLocal_426 = 0;
	iLocal_428 = -1;
	Local_625 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_613, "", 24);
	Local_336.f_6 = func_489(62);
	Local_336.f_1 = { func_488() };
	Local_336.f_4 = func_487();
	Local_344.f_5 = func_486();
	Local_344.f_1 = { func_485() };
	Local_344.f_4 = func_484();
	Local_350.f_5 = func_483();
	Local_350.f_1 = { func_482() };
	Local_350.f_4 = func_481();
	Local_356.f_5 = func_47();
	Local_356.f_1 = { func_46() };
	Local_356.f_4 = func_45();
	Local_362.f_5 = func_44();
	Local_362.f_1 = { func_480() };
	Local_362.f_4 = func_479();
	sLocal_433 = "BailBond1Jumper";
	sLocal_434 = "BB1_J1";
	sLocal_435 = "BB1_J3";
	sLocal_436[0] = "BB1_VC1";
	sLocal_436[1] = "BB1_VC2";
	sLocal_436[2] = "BB1_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_372[iVar0] = 0;
		iVar0++;
	}
	iLocal_132 = 0;
}

float func_479()
{
	return 75.15f;
}

Vector3 func_480()
{
	return 2727.29f, 4145.9f, 44.16f;
}

float func_481()
{
	return 71f;
}

Vector3 func_482()
{
	return 2727.686f, 4145.715f, 44.08f;
}

int func_483()
{
	return joaat("prop_laptop_01a");
}

float func_484()
{
	return -91.28f;
}

Vector3 func_485()
{
	return 2728.35f, 4145.59f, 43.3f;
}

int func_486()
{
	return joaat("prop_table_03_chr");
}

float func_487()
{
	return 89.19f;
}

Vector3 func_488()
{
	return 2728.33f, 4145.6f, 43.89f;
}

int func_489(int iParam0)
{
	if (!func_83(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_490(bool bParam0)
{
	if (unk_0xB2F8D1B7C533483C())
	{
		return 0;
	}
	if (Global_25224)
	{
		return 0;
	}
	if (func_86(6) || func_86(7))
	{
		return 0;
	}
	if (func_81() != 2)
	{
		return 0;
	}
	if (unk_0x863D84AFAC2AB730())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_500(4))
		{
			return 0;
		}
		if (unk_0x0EF1484C8ECA32F8())
		{
			return 0;
		}
		if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
		if (!func_494(4))
		{
			return 0;
		}
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
			{
				return 0;
			}
		}
		if (unk_0x863D84AFAC2AB730())
		{
			return 0;
		}
		if (Global_68165)
		{
			return 0;
		}
		if (func_493() || func_492())
		{
			return 0;
		}
		if (func_491())
		{
			return 0;
		}
	}
	return 1;
}

int func_491()
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

int func_492()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_493()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

int func_494(int iParam0)
{
	int iVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = func_81();
				if (!func_83(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_493()) || Global_102283) || Global_25224) || func_499()) || func_88(8, -1)) || func_498()) || func_497()) || func_491()) || func_492()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_493()) || Global_25224) || func_499()) || func_88(8, -1)) || func_491()) || func_498()) || func_497()) || func_492()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_493()) || Global_102283) || Global_25224) || func_499()) || func_88(8, -1)) || func_491()) || func_498()) || func_497()) || func_492()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_493()) || Global_102283) || Global_25224) || func_499()) || func_88(8, -1)) || func_498()) || func_497()) || func_492()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_493() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_88(8, -1)) || func_492()) || func_496()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_88(8, -1) || func_498()) || func_497()) || func_496()) || func_495())
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
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_493()) || Global_25224) || func_499()) || func_88(8, -1)) || func_497()) || func_491()) || func_492()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_493()) || func_497()) || Global_102283) || Global_25224) || func_499()) || Global_36944) || func_88(8, -1)) || func_491()) || func_496()) || func_492()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_493()) || Global_102283) || Global_25224) || func_499()) || func_88(8, -1)) || func_491()) || func_496()) || func_498()) || func_497()) || func_492())
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

var func_495()
{
	return Global_91816.f_1;
}

int func_496()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

bool func_497()
{
	return Global_91829.f_310 > 0;
}

bool func_498()
{
	return Global_91829.f_309 > 0;
}

var func_499()
{
	return Global_1312852;
}

bool func_500(int iParam0)
{
	return func_501(iParam0, Global_35813);
}

int func_501(int iParam0, int iParam1)
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

void func_502(int iParam0)
{
	func_527();
	if (!func_526())
	{
		if (Global_86097 == Global_91814)
		{
			Global_103236.f_24767.f_4[iParam0]++;
		}
		Global_86097 = Global_91814;
		func_503(unk_0xFABF5258A318B1DC());
	}
}

void func_503(char* sParam0)
{
	if (Global_91777 != 12)
	{
		func_504(sParam0, 5, -1);
	}
}

int func_504(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_523();
	func_522();
	Global_91777 = 0;
	StringCopy(&(Global_91777.f_3), sParam0, 32);
	Global_91777.f_11 = iParam1;
	unk_0x9A05499B815C279F(1);
	unk_0xA83855B847519AB6(0);
	unk_0x6B3B64E590D23CAF(0);
	func_14(1);
	func_423(1);
	func_519(0);
	func_518(1);
	unk_0x507FE690B1271947(&(Global_91777.f_20), 9);
	unk_0x507FE690B1271947(&(Global_91777.f_20), 6);
	unk_0x507FE690B1271947(&(Global_91777.f_20), 20);
	unk_0x507FE690B1271947(&(Global_91777.f_20), 21);
	unk_0x507FE690B1271947(&(Global_91777.f_20), 5);
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (unk_0x9BAC506645B22467(uVar0))
				{
					unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 5);
				}
			}
		}
	}
	unk_0x7D53B6FFAEDA810A(1);
	unk_0x0508903FC1B0ED24();
	func_517(0);
	func_516(1);
	Global_91777.f_2 = Global_91814;
	if (func_515())
	{
		if (func_514())
		{
			if (Global_91814 >= func_511())
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_82710[iParam2 /*34*/].f_15, 16))
				{
					if (Global_103236.f_8866.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_86098 = 1;
					}
				}
			}
		}
		else if (Global_91777.f_11 == 6)
		{
			func_506(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_103236.f_18355[iParam2 /*6*/].f_4 >= 2)
				{
					Global_86098 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_505(unk_0xFABF5258A318B1DC());
			if (iVar33 > -1)
			{
				if (Global_103236.f_24767.f_4[iVar33] >= 2)
				{
					Global_86098 = 1;
				}
			}
		}
	}
	return 1;
}

int func_505(char* sParam0)
{
	if (unk_0x35302CD5A5D37EED("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x35302CD5A5D37EED("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x35302CD5A5D37EED("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_506(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_507(uParam1, "Abigail1", func_509(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 1:
			func_507(uParam1, "Abigail2", func_509(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 2:
			func_507(uParam1, "Barry1", func_509(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 3:
			func_507(uParam1, "Barry2", func_509(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_508(iParam0), 1, 1);
			break;
		
		case 4:
			func_507(uParam1, "Barry3", func_509(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 5:
			func_507(uParam1, "Barry3A", func_509(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 6:
			func_507(uParam1, "Barry3C", func_509(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 7:
			func_507(uParam1, "Barry4", func_509(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_508(iParam0), 0, 0);
			break;
		
		case 8:
			func_507(uParam1, "Dreyfuss1", func_509(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 9:
			func_507(uParam1, "Epsilon1", func_509(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 10:
			func_507(uParam1, "Epsilon2", func_509(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 11:
			func_507(uParam1, "Epsilon3", func_509(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 12:
			func_507(uParam1, "Epsilon4", func_509(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 13:
			func_507(uParam1, "Epsilon5", func_509(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 14:
			func_507(uParam1, "Epsilon6", func_509(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 15:
			func_507(uParam1, "Epsilon7", func_509(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 16:
			func_507(uParam1, "Epsilon8", func_509(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 17:
			func_507(uParam1, "Extreme1", func_509(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 18:
			func_507(uParam1, "Extreme2", func_509(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 19:
			func_507(uParam1, "Extreme3", func_509(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 20:
			func_507(uParam1, "Extreme4", func_509(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 21:
			func_507(uParam1, "Fanatic1", func_509(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_508(iParam0), 1, 0);
			break;
		
		case 22:
			func_507(uParam1, "Fanatic2", func_509(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_508(iParam0), 1, 0);
			break;
		
		case 23:
			func_507(uParam1, "Fanatic3", func_509(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_508(iParam0), 0, 1);
			break;
		
		case 24:
			func_507(uParam1, "Hao1", func_509(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_508(iParam0), 0, 1);
			break;
		
		case 25:
			func_507(uParam1, "Hunting1", func_509(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 26:
			func_507(uParam1, "Hunting2", func_509(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 27:
			func_507(uParam1, "Josh1", func_509(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 28:
			func_507(uParam1, "Josh2", func_509(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_508(iParam0), 1, 1);
			break;
		
		case 29:
			func_507(uParam1, "Josh3", func_509(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_508(iParam0), 1, 1);
			break;
		
		case 30:
			func_507(uParam1, "Josh4", func_509(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 31:
			func_507(uParam1, "Maude1", func_509(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 32:
			func_507(uParam1, "Minute1", func_509(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 33:
			func_507(uParam1, "Minute2", func_509(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 34:
			func_507(uParam1, "Minute3", func_509(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 35:
			func_507(uParam1, "MrsPhilips1", func_509(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 36:
			func_507(uParam1, "MrsPhilips2", func_509(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 37:
			func_507(uParam1, "Nigel1", func_509(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 38:
			func_507(uParam1, "Nigel1A", func_509(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_508(iParam0), 1, 1);
			break;
		
		case 39:
			func_507(uParam1, "Nigel1B", func_509(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_508(iParam0), 1, 1);
			break;
		
		case 40:
			func_507(uParam1, "Nigel1C", func_509(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_508(iParam0), 1, 1);
			break;
		
		case 41:
			func_507(uParam1, "Nigel1D", func_509(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_508(iParam0), 1, 1);
			break;
		
		case 42:
			func_507(uParam1, "Nigel2", func_509(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_508(iParam0), 1, 1);
			break;
		
		case 43:
			func_507(uParam1, "Nigel3", func_509(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_508(iParam0), 1, 1);
			break;
		
		case 44:
			func_507(uParam1, "Omega1", func_509(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 45:
			func_507(uParam1, "Omega2", func_509(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 46:
			func_507(uParam1, "Paparazzo1", func_509(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 47:
			func_507(uParam1, "Paparazzo2", func_509(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 48:
			func_507(uParam1, "Paparazzo3", func_509(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 49:
			func_507(uParam1, "Paparazzo3A", func_509(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 50:
			func_507(uParam1, "Paparazzo3B", func_509(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 51:
			func_507(uParam1, "Paparazzo4", func_509(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 52:
			func_507(uParam1, "Rampage1", func_509(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 54:
			func_507(uParam1, "Rampage3", func_509(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 55:
			func_507(uParam1, "Rampage4", func_509(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 56:
			func_507(uParam1, "Rampage5", func_509(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_508(iParam0), 0, 0);
			break;
		
		case 53:
			func_507(uParam1, "Rampage2", func_509(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_508(iParam0), 1, 0);
			break;
		
		case 57:
			func_507(uParam1, "TheLastOne", func_509(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 58:
			func_507(uParam1, "Tonya1", func_509(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 59:
			func_507(uParam1, "Tonya2", func_509(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 60:
			func_507(uParam1, "Tonya3", func_509(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 61:
			func_507(uParam1, "Tonya4", func_509(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		case 62:
			func_507(uParam1, "Tonya5", func_509(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_508(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_507(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_508(int iParam0)
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

struct<2> func_509(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_510(iParam0) };
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

struct<2> func_510(int iParam0)
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

int func_511()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_512(&(Global_91777.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_512(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xCAEDBF30E3EA14FC(uParam0);
	iVar1 = func_513(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_513(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82710[iVar0 /*34*/].f_6 == iParam0)
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

int func_514()
{
	if ((((Global_91777.f_11 == 0 || Global_91777.f_11 == 1) || Global_91777.f_11 == 2) || Global_91777.f_11 == 3) || Global_91777.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_515()
{
	if ((((Global_91777.f_11 == 0 || Global_91777.f_11 == 1) || Global_91777.f_11 == 2) || Global_91777.f_11 == 6) || Global_91777.f_11 == 3)
	{
		return 1;
	}
	if (Global_91777.f_11 == 5)
	{
		if (func_505(&(Global_91777.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_516(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36362 = 1;
	}
	else
	{
		Global_36362 = 0;
	}
}

void func_517(int iParam0)
{
	unk_0xDA0C5084402DA99C(iParam0);
	unk_0xA6C8C7573424CA93(iParam0);
}

void func_518(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xFF9AC2CB876656B2();
		unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 3);
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 3))
	{
		unk_0x5827AA638AD6DBC3();
		unk_0x507FE690B1271947(&(Global_91777.f_20), 3);
	}
}

void func_519(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 4))
		{
			func_521();
			unk_0x507FE690B1271947(&(Global_91777.f_20), 4);
		}
	}
	else
	{
		func_520();
		unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 4);
	}
}

void func_520()
{
	Global_17151.f_5 = 1;
}

void func_521()
{
	Global_17151.f_5 = 0;
}

void func_522()
{
	Global_86098 = 0;
	Global_86099 = 0;
}

void func_523()
{
	Global_91777 = 13;
	Global_91777.f_1 = -1;
	Global_91777.f_2 = 0;
	Global_91777.f_30 = 0f;
	unk_0x507FE690B1271947(&(Global_91777.f_20), 25);
	Global_91811 = 0;
	func_516(0);
	func_525();
	func_524();
	Global_91777.f_18 = -1;
	Global_91777.f_19 = -1;
}

void func_524()
{
	unk_0x507FE690B1271947(&(Global_91777.f_20), 22);
	unk_0x507FE690B1271947(&(Global_91777.f_20), 8);
}

void func_525()
{
	if (Global_91777.f_16 != 0)
	{
		unk_0x73F5E7B6BB964839(&(Global_91777.f_16));
		Global_91777.f_16 = 0;
	}
	if (Global_91777.f_17 != 0)
	{
		unk_0x73F5E7B6BB964839(&(Global_91777.f_17));
		Global_91777.f_17 = 0;
	}
}

int func_526()
{
	if (((Global_91777 == 13 || Global_91777 == 10) || Global_91777 == 11) || Global_91777 == 12)
	{
		return 0;
	}
	return 1;
}

void func_527()
{
	Global_91812 = 1;
	if (unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1))
	{
		if (unk_0x58478145CAF8429C(&Global_70032))
		{
			switch (func_81())
			{
				case 0:
					StringCopy(&Global_70032, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_70032, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_70032, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_70036, "", 16);
		}
		Global_91812 = 0;
	}
	else if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x58478145CAF8429C(&Global_70032))
		{
			switch (func_81())
			{
				case 0:
					StringCopy(&Global_70032, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_70032, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_70032, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_70036, "", 16);
		}
		Global_91812 = 0;
		unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 25);
	}
}

void func_528()
{
	if (iLocal_399)
	{
		func_417(0, 1);
	}
	unk_0xA232817B0B36F2E5();
}

