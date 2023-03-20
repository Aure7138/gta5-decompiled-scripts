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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 1000;
	var uLocal_53 = 1000;
	var uLocal_54 = 0;
	struct<4> Local_55[10];
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<5> Local_102 = { 0, 0, 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = -1;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	struct<20> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_131 = 0;
	struct<19> Local_132[6];
	struct<6> Local_247[6];
	struct<6> Local_284 = { 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_290[4];
	struct<7> Local_327[1];
	struct<7> Local_335 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_342 = 0;
	struct<6> Local_343 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_349 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_355 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_361 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	bool bLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	bool bLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	bool bLocal_402 = 0;
	var uLocal_403 = 0;
	float fLocal_404 = 0f;
	float fLocal_405 = 0f;
	float fLocal_406 = 0f;
	int iLocal_407 = 0;
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
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	char* sLocal_432 = NULL;
	char* sLocal_433 = NULL;
	char* sLocal_434 = NULL;
	char* sLocal_435[3] = { NULL, NULL, NULL };
	char[] cLocal_439[8] = 0;
	char[] cLocal_440[8] = 0;
	char* sLocal_441 = NULL;
	char* sLocal_442 = NULL;
	char* sLocal_443 = NULL;
	char* sLocal_444 = NULL;
	char* sLocal_445 = NULL;
	var uLocal_446 = 16;
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
	int iLocal_611 = 0;
	struct<3> Local_612 = { 0, 0, 0 } ;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	char cLocal_618[24] = "";
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<3> Local_624 = { 0, 0, 0 } ;
	struct<3> Local_627 = { 0, 0, 0 } ;
	struct<3> Local_630[10];
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	struct<3> Local_664 = { 0, 0, 0 } ;
	struct<3> Local_667 = { 0, 0, 0 } ;
	struct<3> Local_670 = { 0, 0, 0 } ;
	struct<3> Local_673 = { 0, 0, 0 } ;
	struct<3> Local_676 = { 0, 0, 0 } ;
	int iLocal_679 = 0;
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
	bLocal_391 = true;
	cLocal_439 = "BB1AUD";
	cLocal_440 = "BBCAUD";
	sLocal_441 = "Trevor";
	sLocal_442 = "Maude";
	sLocal_443 = "maude_criminal_1";
	sLocal_444 = "maude_chair";
	sLocal_445 = "maude_laptop";
	StringCopy(&Local_612, "", 24);
	StringCopy(&cLocal_618, "MAUDE_MCS_2", 24);
	Local_102 = { ScriptParam_0 };
	if (unk_0xD63E63DFACCEB80E(83))
	{
		if (iLocal_97 == 0)
		{
			Global_96070 = 0;
			func_517();
		}
		else
		{
			Global_96070 = 3;
			func_491(0);
			func_517();
		}
	}
	if (!func_479(1))
	{
		Global_96070 = 0;
		func_517();
	}
	unk_0x6F468A6C94DC21AE(1);
	func_459();
	if (func_458())
	{
		iVar0 = func_457();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				if (unk_0xAAF77E03CD60491E(Global_93593.f_2167.f_12.f_42) || unk_0xDB519A4108C6BFB1(Global_93593.f_2167.f_12.f_42))
				{
					func_419(&iLocal_679, 2898.294f, 2796.305f, 53.849f, 162.6353f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				else
				{
					func_419(&iLocal_679, 2891.459f, 2798.125f, 53.7482f, 206.3925f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				func_418(Local_664, fLocal_404, 1, 0);
				iLocal_100 = 2;
				func_407(1, 0);
				break;
			
			case 1:
				func_419(&iLocal_679, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				func_418(Local_624, 254.9762f, 0, 0);
				func_407(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (func_406(0))
	{
		if (func_405(unk_0x9F92518438215DD0()))
		{
			func_404(unk_0x9F92518438215DD0(), Local_664, fLocal_404, 0, 0);
			unk_0x5EF916489F3787FC(0f);
			unk_0x203B2685C1715644(0f, 1065353216);
		}
	}
	while (true)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
			unk_0x4E685BBAA467115C(unk_0xCFC72E446B0B3AD7());
			Local_627 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			func_393();
			func_392();
			switch (iLocal_97)
			{
				case 0:
					func_385();
					break;
				
				case 1:
					func_381();
					break;
				
				case 2:
					func_375();
					break;
				
				case 3:
					func_369();
					break;
				
				case 6:
					func_364();
					break;
				
				case 7:
					func_301();
					break;
				
				case 4:
					func_121();
					break;
				
				case 5:
					func_113(1);
					break;
				
				case 8:
					func_109();
					break;
				
				case 9:
					func_69();
					break;
			}
			if (bLocal_391 == 0)
			{
				func_1(iLocal_98);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0)
{
	if (iLocal_97 == iParam0)
	{
		if (func_68())
		{
			func_66(0, -1, 0);
		}
		func_34(iLocal_97);
		if (iLocal_97 == 4)
		{
			func_24(1, 0, 1);
		}
		else
		{
			func_24(1, 1, 1);
		}
		bLocal_391 = true;
		iLocal_392 = 0;
		if (iLocal_97 == 5)
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
	if (func_22(unk_0x9F92518438215DD0()))
	{
		func_20();
		unk_0xDA31FF1629FE9693();
		if (unk_0xC9EED58014EF1F40())
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		switch (iLocal_97)
		{
			case 0:
				if (iLocal_99 == 1)
				{
					if (!func_68())
					{
						func_19(unk_0x9F92518438215DD0(), Local_667, fLocal_405, 0, 1);
						if (func_22(Local_111.f_9))
						{
							func_18(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(Local_111.f_9, 1));
						}
						unk_0x5EF916489F3787FC(0f);
						unk_0x203B2685C1715644(0f, 1065353216);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 1)
							{
								if (func_405(unk_0x9F92518438215DD0()))
								{
									func_11(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					iLocal_376 = 1;
					iLocal_100 = 2;
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 1:
				iLocal_376 = 1;
				iLocal_375 = 1;
				if (iLocal_99 == 1)
				{
					if (!func_68())
					{
						func_19(unk_0x9F92518438215DD0(), Local_670, fLocal_406, 0, 1);
						unk_0x5EF916489F3787FC(0f);
						unk_0x203B2685C1715644(0f, 1065353216);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 2)
							{
								if (func_405(unk_0x9F92518438215DD0()))
								{
									func_11(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					Local_111.f_17 = (unk_0x17103F66FBB44C3C() - 5000);
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				iLocal_367 = 1;
				if (iLocal_110 == 3)
				{
					if (iLocal_99 == 0)
					{
						if (func_22(Local_111.f_9) && func_7(Local_247[0 /*6*/]))
						{
							if (!unk_0x44E080690DA76A2A(Local_111.f_9, Local_247[0 /*6*/], 0))
							{
								unk_0x4DB6897DB04DE279(Local_111.f_9, Local_247[0 /*6*/], -1);
							}
						}
					}
				}
				if (iLocal_99 == 1)
				{
					iLocal_369 = 1;
					if (!func_68())
					{
						func_5(Local_111.f_9, 2.5f);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (func_405(unk_0x9F92518438215DD0()))
								{
									func_11(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					func_20();
					func_3();
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 3:
				iLocal_386 = 1;
				if (iLocal_99 == 1)
				{
					func_404(Local_111.f_9, Local_624, 0f, 0, 0);
					if (!func_68())
					{
						func_404(unk_0x9F92518438215DD0(), Local_624, 254.9762f, 0, 0);
						unk_0x5EF916489F3787FC(0f);
						unk_0x203B2685C1715644(0f, 1065353216);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 4)
							{
								if (func_405(unk_0x9F92518438215DD0()))
								{
									func_11(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 4:
				if (iLocal_99 == 1)
				{
					if (unk_0xC42238EA2EBA3C42())
					{
						unk_0x667FB252FBBF3EAC(0);
					}
				}
				break;
			
			case 6:
				if (iLocal_99 == 1)
				{
					unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 0, 0);
					unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
					func_8();
				}
				break;
			
			case 7:
				if (iLocal_99 == 1)
				{
					iLocal_369 = 1;
					if (!func_68())
					{
						func_5(Local_111.f_9, 2.5f);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (func_405(unk_0x9F92518438215DD0()))
								{
									func_11(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					func_20();
					func_3();
					func_8();
					iLocal_99 = 2;
				}
				break;
			}
	}
}

void func_3()
{
	Global_14558 = 0;
	func_4();
}

void func_4()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

int func_5(int iParam0, float fParam1)
{
	struct<3> Var0;
	
	if (func_22(iParam0))
	{
		if (func_6(unk_0x77009B1C011405A9(iParam0, 1), &Var0, fParam1, 0))
		{
			unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0, 1, 0, 0, 1);
			func_18(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(iParam0, 1));
			return 1;
		}
	}
	return 0;
}

bool func_6(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	
	Var1 = { unk_0x81D32A4E7E765EA7(Param0, unk_0x3250987ED5A577C0(0f, 360f), 0f, uParam4, 0f) };
	if (unk_0x7844FB9DB5F9220C(Var1, &uVar0))
	{
		Var1.f_2 = uVar0;
	}
	*uParam3 = { Var1 };
	return unk_0x4910ADCDC985F1A9(Var1, iParam5, uParam3, 0);
}

int func_7(int iParam0)
{
	if (func_405(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (!unk_0x0FC809E10EF0EAC3(iParam0))
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
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		func_10(&(Local_55[iVar0 /*4*/]));
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
	
	uVar0 = unk_0xFDDD4E42F6479270(Param0, fParam3, iParam4, 127);
	if (unk_0x03CD2347FEE9BC2F(uVar0))
	{
		iVar1 = (unk_0x17103F66FBB44C3C() + iParam5);
		while (!unk_0xE6F1F0ACBC95D3A0(uVar0) && unk_0x17103F66FBB44C3C() < iVar1)
		{
			if (bParam7)
			{
				func_13();
			}
			if (bParam6)
			{
				func_12();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x17103F66FBB44C3C() < iVar1)
		{
		}
		unk_0x96ECF2D6A0A83101(uVar0);
	}
}

void func_12()
{
	Global_17098.f_6 = 1;
}

void func_13()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_17(0))
		{
			func_14(0);
		}
		unk_0xEDB9A377CD8B7F03(&Global_2264, 2);
	}
}

void func_14(int iParam0)
{
	if (Global_14551)
	{
		func_16(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_15())
	{
		Global_14393.f_1 = 3;
	}
}

int func_15()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
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
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
	
	Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	fVar4 = (Param1.f_0 - Var0.f_0);
	fVar5 = (Param1.f_1 - Var0.f_1);
	if (fVar5 != 0f)
	{
		fVar3 = unk_0x4E9A83F39209A4F6(fVar4, fVar5);
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
	unk_0x03D97EDECF2E1859(iParam0, fVar3);
}

int func_19(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_405(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x7844FB9DB5F9220C(Param1, &fVar1);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xFA51DC22F6E34F6E(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x03D97EDECF2E1859(iParam0, fParam4);
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
	Global_14558 = 0;
	func_21();
}

void func_21()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

int func_22(int iParam0)
{
	if (func_405(iParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	if (unk_0x2E9CF5C574019636() || unk_0x351E8373AE3D741D())
	{
		if (!unk_0xA0CD269F4B0B4468())
		{
			unk_0xF391B7BD1F131C3F(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x9685D9855970A029())
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
		unk_0x203B2685C1715644(0f, 1065353216);
		unk_0x5EF916489F3787FC(0f);
	}
	if (iParam1 == 1)
	{
		func_23(500, 0);
	}
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2563F6EECD8726D3();
	unk_0x752045E2B7BD5844(uVar0, 0);
	unk_0xC70D4A06E38B2711(iVar0, iParam3, 0);
	func_26(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xB3B57AEE7B7BA0E2(1);
		unk_0xC48BE7195D873776(1);
	}
	unk_0x35611EEE7A1FFEDB(1);
	if (iParam0 == 1)
	{
		unk_0xC658188535CE7FAF(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_42 != 0 && iLocal_42 != joaat("object")) && iLocal_42 != joaat("gadget_parachute"))
		{
			if (func_405(unk_0x9F92518438215DD0()))
			{
				if (unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), iLocal_42, 0))
				{
					unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), iLocal_42, 0);
				}
			}
		}
	}
	if (func_22(unk_0x9F92518438215DD0()))
	{
		unk_0xB06F4DE84BB274B5(unk_0x9F92518438215DD0(), 0, 0);
	}
}

void func_26(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_33(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_15())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_32(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_33(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_32(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_27(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_27(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_30(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1312737;
}

int func_32(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_34(int iParam0)
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		switch (iParam0)
		{
			case 4:
				func_65(&cLocal_618);
				func_64();
				while (!func_58(1, 1093140480, 0) || !func_35())
				{
					func_65(&cLocal_618);
					func_64();
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
}

int func_35()
{
	if (func_57(Local_627, Local_335.f_1, 210f))
	{
		if (!iLocal_399)
		{
			if ((func_56(3) && func_55(&Local_343, Local_343.f_5, Local_343.f_1, Local_343.f_4, 1)) && func_55(&Local_349, Local_349.f_5, Local_349.f_1, Local_349.f_4, 1))
			{
				if (func_52(&Local_335, Local_335.f_6, Local_335.f_1, Local_335.f_4, 1, 0, 1))
				{
					func_47();
					iLocal_399 = 1;
				}
			}
		}
		if (!unk_0x746960881FB19A89(Local_355.f_0))
		{
			if (func_57(Local_627, Local_355.f_1, 150f))
			{
				if (unk_0x6E4DE584BEE4823B(Local_355.f_1, 10f, func_46(), 0))
				{
					Local_355.f_0 = unk_0x73A3AED255AF2667(Local_355.f_1, 10f, func_46(), 1, 0, 1);
					if (func_405(Local_355.f_0))
					{
						unk_0xFA51DC22F6E34F6E(Local_355.f_0, func_45(), 1, 0, 0, 1);
						unk_0x03D97EDECF2E1859(Local_355.f_0, func_44());
						unk_0xD9B13F0A69759C12(Local_355.f_0, 1);
					}
				}
			}
		}
		if (!unk_0x746960881FB19A89(Local_361.f_0))
		{
			if (func_57(Local_627, Local_361.f_1, 150f))
			{
				if (unk_0x6E4DE584BEE4823B(Local_361.f_1, 10f, func_43(), 0))
				{
					Local_361.f_0 = unk_0x73A3AED255AF2667(Local_361.f_1, 10f, func_43(), 1, 0, 1);
				}
			}
		}
	}
	else if (!unk_0xE298336AB6E66F7E(Local_335.f_1, 2.5f))
	{
		func_40(&Local_335, 1);
		unk_0xE29F0AC6C728DD9C(func_39());
		func_36(&Local_343, 1);
		func_36(&Local_349, 1);
		func_36(&Local_355, 0);
		func_36(&Local_361, 0);
		iLocal_399 = 0;
	}
	return iLocal_399;
}

void func_36(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_38(iParam0);
	}
	else
	{
		func_37(iParam0, 0);
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (unk_0x746960881FB19A89(*iParam0))
	{
		if (unk_0xDAF5609B36EC10E7(*iParam0))
		{
			unk_0x8ED1C81168F4A10C(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x8FCF30FFEAA1C4D4(iParam0);
		}
		else
		{
			unk_0xB6EA72847B4B89BA(*iParam0);
		}
	}
}

void func_38(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0xDAF5609B36EC10E7(*uParam0))
		{
			unk_0x8ED1C81168F4A10C(*uParam0, 1, 1);
		}
		unk_0x83A49C880CB75451(uParam0);
	}
}

char* func_39()
{
	return "special_ped@maude@base";
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(iParam0);
	}
	else
	{
		func_41(iParam0, 1, 0, 1);
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x746960881FB19A89(*iParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(*iParam0))
		{
			unk_0x512E0C109ACECCA1(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5B1A1DA8A0D20935(*iParam0);
			}
			unk_0xE8105B7E3908547D(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4A1AC49BA4A747F7(*iParam0, 0);
			}
		}
		unk_0x995B3705D02B0401(iParam0);
	}
}

void func_42(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(*uParam0))
		{
			unk_0x512E0C109ACECCA1(*uParam0, 0);
		}
		if (!unk_0x34E74FF8690AA4B1(*uParam0))
		{
			unk_0x336AE92FD68DEF98(*uParam0, 1, 0);
		}
		unk_0x7763EDCBED8A5840(uParam0);
	}
}

int func_43()
{
	return joaat("prop_radio_01");
}

float func_44()
{
	return -92.17f;
}

Vector3 func_45()
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_46()
{
	return joaat("prop_table_03b");
}

void func_47()
{
	var uVar0;
	int iVar1;
	
	if (func_22(Local_335.f_0))
	{
		if (func_405(Local_343.f_0))
		{
			if (func_56(3))
			{
				uVar0 = unk_0x8E83718430E22797(func_51(), func_50(), 2);
				unk_0x25821CAAB3B8EF73(uVar0, 1);
				unk_0xBC5F61BBFCA70907(uVar0, 0);
				unk_0x6C4954C76B25F972(Local_335.f_0, uVar0, func_39(), func_49(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				unk_0xB3ABC7B97480C0A5(Local_343.f_0, uVar0, func_48(), func_39(), 1000f, -8f, iVar1, 1148846080);
				unk_0x4A1AC49BA4A747F7(Local_335.f_0, 1);
				unk_0x2CFB119825A2B9F1(Local_335.f_0, 0);
				unk_0x0CFE85F88BE373C8(Local_335.f_0, 0);
				unk_0xA50AD6983D49A772(Local_335.f_0, joaat("player"));
				unk_0xACBAA70A109E213A(Local_335.f_0, 0);
				unk_0x2C32C9708E9BAC80(Local_335.f_0, 0);
				unk_0xE8105B7E3908547D(Local_335.f_0, 1);
				unk_0x9001FCB58244C11D(Local_335.f_0, 118, 0);
			}
		}
	}
}

char* func_48()
{
	return "base_chair";
}

char* func_49()
{
	return "base";
}

Vector3 func_50()
{
	return 0f, 0f, -92.17f;
}

Vector3 func_51()
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_52(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!unk_0x746960881FB19A89(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0xA00B5D954AD320BF(26, iParam1, Param2, uParam5, 1, 1);
			if (unk_0x746960881FB19A89(*uParam0))
			{
				if (bParam7)
				{
					unk_0xD9B13F0A69759C12(*uParam0, 1);
				}
				if (bParam8)
				{
					if (!unk_0x3E0478C40AB5B38D(*uParam0))
					{
						unk_0x4A1AC49BA4A747F7(*uParam0, 1);
					}
				}
				if (bParam6)
				{
					func_53(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_53(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

void func_53(int iParam0, bool bParam1)
{
	if (iParam0 != 0)
	{
		if (bParam1)
		{
			if (unk_0x149162179DBAEDB0(iParam0))
			{
				unk_0x0880E86251A44B7F(iParam0);
			}
		}
		else
		{
			unk_0x0880E86251A44B7F(iParam0);
		}
	}
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x3BC6D217451D6BB7(iParam0);
	if (unk_0x149162179DBAEDB0(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_55(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x746960881FB19A89(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0xA7DA1E6D4C99864B(iParam1, Param2, 1, 1, 0);
			if (unk_0x746960881FB19A89(*uParam0))
			{
				unk_0x03D97EDECF2E1859(*uParam0, uParam5);
				unk_0x3175FF00DDBD8140(*uParam0, 1);
				if (bParam6)
				{
					func_53(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_53(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9C53AD1E8A38ADEE("BBONDS", 0);
			if (unk_0x7DE7B5897062BC2C(0))
			{
				return 1;
			}
			break;
		
		case 3:
			unk_0xDA293E5084610B09(func_39());
			if (unk_0x3DA2EED4204CE591(func_39()))
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xDA293E5084610B09("ODDJOBS@BAILBOND_QUARRY");
			if (unk_0x3DA2EED4204CE591("ODDJOBS@BAILBOND_QUARRY"))
			{
				return 1;
			}
			break;
		
		case 2:
			unk_0x3BC6D217451D6BB7(Local_284.f_5);
			if (unk_0x149162179DBAEDB0(Local_284.f_5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_57(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if ((!unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()) && !unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0())) && !unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
		{
			if (!func_63(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_62(unk_0x9F92518438215DD0(), -828834893))
				{
					unk_0xF811299AF81DB581(unk_0x9F92518438215DD0(), 0, 0);
				}
			}
			if (unk_0xFAF3D214E00907D8(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_61();
	if (func_60())
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
		if (!func_59())
		{
			return 0;
		}
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	return 1;
}

bool func_59()
{
	bool bVar0;
	
	bVar0 = unk_0x8C177CD087379EBE();
	if (!Global_68244)
	{
		if (!bVar0)
		{
			Global_68244 = 1;
		}
	}
	return bVar0;
}

int func_60()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	unk_0x6A6A41C66448AD09(0, 21, 1);
	unk_0x6A6A41C66448AD09(0, 37, 1);
	unk_0x6A6A41C66448AD09(0, 25, 1);
	unk_0x6A6A41C66448AD09(0, 141, 1);
	unk_0x6A6A41C66448AD09(0, 140, 1);
	unk_0x6A6A41C66448AD09(0, 24, 1);
	unk_0x6A6A41C66448AD09(0, 257, 1);
	unk_0x6A6A41C66448AD09(0, 22, 1);
	unk_0x6A6A41C66448AD09(0, 23, 1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_22(iParam0))
	{
		if (unk_0xE962BD784DD0E442(iParam0, iParam1) == 1 || unk_0xE962BD784DD0E442(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(uParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_64()
{
	if (func_405(Local_111.f_9))
	{
		if (unk_0x3E477C98C0B83EB5())
		{
			unk_0x09CAB04D0A1C0276(sLocal_443, Local_111.f_9, 0);
		}
	}
	if (func_405(Local_335.f_0))
	{
		if (unk_0x3E477C98C0B83EB5())
		{
			unk_0x09CAB04D0A1C0276(sLocal_442, Local_335.f_0, 0);
		}
	}
}

void func_65(char[4] cParam0)
{
	func_26(1, 1, 0, 0);
	unk_0x4CE9C0B6BB26989C(cParam0, 8);
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	if (func_458() && func_68())
	{
		while (Global_89957 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xAA7F469826C4FBBF(0);
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				unk_0x78977FAFD85647FF(unk_0x9F92518438215DD0());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x746960881FB19A89(iParam0))
				{
					if (unk_0xFC38B241541883D3(iParam0, 0))
					{
						if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam0, 0))
						{
							unk_0x4DB6897DB04DE279(unk_0x9F92518438215DD0(), iParam0, iParam1);
							unk_0x203B2685C1715644(0f, 1065353216);
							unk_0x5EF916489F3787FC(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), true, 0);
			}
		}
		unk_0x91ED7859295E99BE();
		func_67(0);
	}
}

void func_67(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 13);
	}
}

bool func_68()
{
	return unk_0x94E72F17611BCD3C(Global_89962.f_20, 13);
}

void func_69()
{
	char* sVar0;
	int iVar1;
	
	sVar0 = 0;
	switch (iLocal_99)
	{
		case 0:
			unk_0xDA31FF1629FE9693();
			unk_0x35611EEE7A1FFEDB(1);
			if (func_60())
			{
				func_20();
			}
			func_105();
			Global_96070 = 3;
			if (iLocal_101 == 4)
			{
				if (func_22(Local_335.f_0))
				{
					func_104(&uLocal_446, 4);
					func_103(Local_335.f_0, 0);
					if (!unk_0xE7C093C63744E17E(Local_335.f_0))
					{
						if (func_102(Local_335.f_0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 35f))
						{
							unk_0x5E4D9888EEC3124B(Local_335.f_0, 0);
							func_100(Local_335.f_0, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (unk_0x746960881FB19A89(Local_349.f_0))
				{
					unk_0xD9B13F0A69759C12(Local_349.f_0, 0);
				}
				if (unk_0x746960881FB19A89(Local_355.f_0))
				{
					unk_0xD9B13F0A69759C12(Local_355.f_0, 0);
				}
				unk_0xDA293E5084610B09(func_99());
				if (func_97(&Local_335, &Local_343, &iLocal_427))
				{
					iLocal_393 = 1;
				}
			}
			else if (iLocal_101 == 2)
			{
				iLocal_383 = 0;
				StringCopy(&Local_612, "BBC_T12", 24);
			}
			if (func_22(Local_111.f_9))
			{
				if (unk_0x6AAACE62C58880BC(Local_111.f_9))
				{
					unk_0x1FA92C26AB9467D3(Local_111.f_9);
				}
				func_96(Local_111.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_419 - 1))
			{
				func_96(Local_132[iVar1 /*19*/], 1);
				iVar1++;
			}
			switch (iLocal_101)
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
			if (iLocal_101 != 0)
			{
				func_95(sVar0);
			}
			func_491(0);
			iLocal_99 = 1;
			break;
		
		case 1:
			if (func_94())
			{
				func_89(1);
				func_517();
			}
			else
			{
				if (!iLocal_383)
				{
					if (func_60())
					{
						func_3();
					}
					if (iLocal_101 == 4)
					{
						if (func_22(Local_335.f_0))
						{
							if (func_102(Local_335.f_0, Local_627, 35f))
							{
								func_88(&uLocal_446, 4, Local_335.f_0, "MAUDE", 0, 1);
								if (func_72(&uLocal_446, cLocal_440, &Local_612, 4, 0, 0, 0))
								{
									iLocal_383 = 1;
								}
							}
						}
					}
					else if (func_72(&uLocal_446, cLocal_440, &Local_612, 4, 0, 0, 0))
					{
						iLocal_383 = 1;
					}
				}
				if (iLocal_101 == 4)
				{
					if (!iLocal_393)
					{
						unk_0xDA293E5084610B09(func_99());
						if (func_97(&Local_335, &Local_343, &iLocal_427))
						{
							iLocal_393 = 1;
						}
					}
					else if (func_22(Local_335.f_0))
					{
						if (!func_62(Local_335.f_0, 1805844857))
						{
							if (!unk_0x7E4B3ADE683EE23B(Local_335.f_0))
							{
								if (!unk_0x3C17D9ED0E5F3FCA(Local_335.f_0, func_99(), func_71(), 3))
								{
									func_70(&Local_335);
									unk_0x722E6B3A5162A6BB(Local_335.f_0, unk_0x9F92518438215DD0(), 50f, -1, 0, 0);
									unk_0xE8105B7E3908547D(Local_335.f_0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_70(int iParam0)
{
	if (func_22(*iParam0))
	{
		unk_0xA334EDA2335A13CA(*iParam0, 2, 0);
		unk_0xA334EDA2335A13CA(*iParam0, 64, 0);
		unk_0xA334EDA2335A13CA(*iParam0, 128, 0);
		unk_0xA334EDA2335A13CA(*iParam0, 8, 0);
		unk_0xA334EDA2335A13CA(*iParam0, 1, 0);
		unk_0xA334EDA2335A13CA(*iParam0, 32, 0);
		unk_0x64277E0EB39C1162(*iParam0, 5, 0);
		unk_0x64277E0EB39C1162(*iParam0, 17, 1);
		unk_0x9001FCB58244C11D(*iParam0, 118, 1);
	}
}

char* func_71()
{
	return "female_Flee_Table_Left_Maude";
}

int func_72(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (unk_0x18DF50385FACBD8E())
		{
			if (unk_0xF10205C2D28EABD5(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_73(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC318E8D9E0AA1394(0);
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
					func_21();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_85();
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_78();
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_77())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_76();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_75();
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
		func_21();
	}
	return 0;
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_76()
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_78()
{
	if (func_84(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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
		Global_14393 = func_79();
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

int func_79()
{
	func_80();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_80()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_83(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_82(unk_0x9F92518438215DD0());
			if (func_81(iVar0) && (!func_84(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_81(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_83(int iParam0)
{
	if (func_81(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_84(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_85()
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

bool func_86(int iParam0, int iParam1)
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
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_88(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	
	func_36(&Local_284, 0);
	if (iLocal_414 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_414 - 1))
		{
			func_36(&(Local_290[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_417 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_417 - 1))
		{
			func_93(&(Local_327[iVar0 /*7*/]));
			iVar0++;
		}
	}
	func_36(&Local_343, bParam0);
	func_36(&Local_349, bParam0);
	func_36(&Local_355, 0);
	func_36(&Local_361, 0);
	if (func_22(Local_111.f_9))
	{
		if (unk_0x6AAACE62C58880BC(Local_111.f_9))
		{
			if (unk_0x91690C37B3C4E5FA(Local_111.f_9, unk_0x0CD9BC7F312ED395(unk_0xCFC72E446B0B3AD7())))
			{
				unk_0x1FA92C26AB9467D3(Local_111.f_9);
			}
		}
		unk_0x512E0C109ACECCA1(Local_111.f_9, 0);
		unk_0x4A1AC49BA4A747F7(Local_111.f_9, 0);
		if (Global_96070 == 0)
		{
			unk_0xE8105B7E3908547D(Local_111.f_9, 0);
		}
		else
		{
			unk_0xE8105B7E3908547D(Local_111.f_9, 1);
		}
	}
	func_40(&(Local_111.f_9), bParam0);
	if (func_22(Local_335.f_0))
	{
		unk_0x4A1AC49BA4A747F7(Local_335.f_0, 0);
		unk_0xE8105B7E3908547D(Local_335.f_0, 1);
	}
	func_40(&Local_335, bParam0);
	if (iLocal_419 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_419 - 1))
		{
			if (iLocal_110 == 4)
			{
				if (func_22(Local_132[iVar0 /*19*/]))
				{
					unk_0xA50AD6983D49A772(Local_132[iVar0 /*19*/], -2065892691);
					unk_0x4A1AC49BA4A747F7(Local_132[iVar0 /*19*/], 0);
					if (Global_96070 == 0)
					{
						unk_0xE8105B7E3908547D(Local_132[iVar0 /*19*/], 0);
					}
					else
					{
						unk_0xE8105B7E3908547D(Local_132[iVar0 /*19*/], 1);
					}
				}
			}
			func_40(&(Local_132[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_415 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_415 - 1))
		{
			func_90(&(Local_247[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_92(uParam0);
	}
	else
	{
		func_91(uParam0);
	}
}

void func_91(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		unk_0x0BA451447C3B1A8D(*uParam0);
		if (unk_0x34E74FF8690AA4B1(*uParam0) && unk_0xAD2C236C4A4B83C9(*uParam0, 1))
		{
			unk_0x9187463EB4918A4D(uParam0);
		}
	}
}

void func_92(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(*uParam0))
		{
			unk_0x336AE92FD68DEF98(*uParam0, 1, 0);
		}
		if (func_7(*uParam0))
		{
			if (unk_0x34E74FF8690AA4B1(*uParam0) && unk_0xAD2C236C4A4B83C9(*uParam0, 1))
			{
				if (func_405(unk_0x9F92518438215DD0()))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), *uParam0, 0))
					{
						unk_0x9187463EB4918A4D(uParam0);
						return;
					}
				}
				unk_0xCD3EBB4EAE50293F(uParam0);
			}
		}
		else
		{
			if (func_405(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), *uParam0, 0))
				{
					unk_0x9187463EB4918A4D(uParam0);
					return;
				}
			}
			unk_0xCD3EBB4EAE50293F(uParam0);
		}
	}
}

void func_93(var uParam0)
{
	if (unk_0x303D473D180EAA17(*uParam0))
	{
		unk_0xCFEE915F16B66662(*uParam0);
	}
}

int func_94()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89962 == 7 || Global_89962 == 8)
	{
		return 1;
	}
	return 0;
}

void func_95(char* sParam0)
{
	if (!unk_0x9E9AFDBF482248F6(sParam0))
	{
		if (unk_0x8D18B4E23D256BEF(sParam0) <= 16)
		{
			StringCopy(&Global_68477, sParam0, 16);
			StringCopy(&Global_68481, "", 16);
			if (unk_0xBCCAD0BC975853CA())
			{
				unk_0xF4C60640F016D830();
			}
		}
	}
}

void func_96(int iParam0, bool bParam1)
{
	if (func_22(iParam0))
	{
		unk_0x64277E0EB39C1162(iParam0, 5, 0);
		unk_0x64277E0EB39C1162(iParam0, 17, 1);
		unk_0xA334EDA2335A13CA(iParam0, 512, 0);
		if (!func_62(iParam0, 1805844857))
		{
			unk_0x32D18ECD9E6F9BE2(iParam0);
			unk_0x5B1A1DA8A0D20935(iParam0);
			unk_0x402A96371F34E6D8(iParam0, unk_0x9F92518438215DD0(), 3000, 0, 2);
			unk_0x722E6B3A5162A6BB(iParam0, unk_0x9F92518438215DD0(), 10000f, -1, 0, 0);
		}
		if (bParam1)
		{
			unk_0x4A1AC49BA4A747F7(iParam0, 1);
		}
		unk_0xE8105B7E3908547D(iParam0, 1);
	}
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_22(*iParam0))
	{
		if (unk_0x3C17D9ED0E5F3FCA(*iParam0, func_39(), func_49(), 3))
		{
			if (!unk_0xBD280C076BC69C97(*iParam0) || unk_0x11579615465D25B4(*iParam0))
			{
				unk_0xDA293E5084610B09(func_99());
				if (unk_0x3DA2EED4204CE591(func_99()))
				{
					*iParam2 = unk_0x8E83718430E22797(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x25821CAAB3B8EF73(*iParam2, 0);
					unk_0xBC5F61BBFCA70907(*iParam2, 0);
					if (func_62(*iParam0, 1785177548))
					{
						unk_0xFCD8CBB0DC357C30(*iParam0, -1000f, 1);
					}
					unk_0x6C4954C76B25F972(*iParam0, *iParam2, func_99(), func_71(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xF0875A1DC909B469(*iParam0, 0, 0);
					if (func_405(*iParam1))
					{
						if (unk_0x3C17D9ED0E5F3FCA(*iParam1, func_39(), func_48(), 3))
						{
							unk_0xFCD8CBB0DC357C30(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xB3ABC7B97480C0A5(*iParam1, *iParam2, func_98(), func_99(), 16f, -4f, iVar0, 1148846080);
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

char* func_98()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_99()
{
	return "special_ped@maude@exit_flee";
}

void func_100(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x4970C6C5BAEFBF31(iParam0, sParam1, sParam2, func_101(iParam3), 0);
}

int func_101(int iParam0)
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

bool func_102(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_103(int iParam0, bool bParam1)
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
		iVar2 = unk_0x073B65E051D2F03E(0, iVar1);
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
		if (unk_0xA880B447140A3E0D(iParam0))
		{
			func_100(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_100(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

void func_104(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_105()
{
	func_108(iLocal_419);
	func_107(&(Local_111.f_8));
	func_106(&Local_111);
	func_107(&uLocal_403);
}

void func_106(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
		bVar0 = true;
	}
	if (unk_0x2E6E8D325977B3EC(uParam0->f_1))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x746960881FB19A89(uParam0->f_7))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_7))
		{
			if (unk_0x1E340411F75B44FE(uParam0->f_7))
			{
				unk_0x27C3EE559D11736B(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_107(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0xD8EEE815F0120FCE(*uParam0, 0);
		unk_0x0451B5D93A4BDAA0(uParam0);
	}
}

void func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		func_106(&(Local_132[iVar0 /*19*/].f_6));
		iVar0++;
	}
}

void func_109()
{
	int iVar0;
	
	switch (iLocal_99)
	{
		case 0:
			unk_0xDA31FF1629FE9693();
			unk_0x35611EEE7A1FFEDB(1);
			if (func_60())
			{
				func_20();
			}
			func_105();
			func_40(&Local_335, 1);
			iVar0 = 0;
			while (iVar0 <= (iLocal_419 - 1))
			{
				func_111(iVar0);
				iVar0++;
			}
			iLocal_424 = unk_0x17103F66FBB44C3C();
			iLocal_99 = 1;
			break;
		
		case 1:
			if (func_110(iLocal_424, 500))
			{
				if (!bLocal_384)
				{
					if (func_60())
					{
						func_20();
						func_3();
					}
					if (func_72(&uLocal_446, cLocal_440, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_384 = true;
					}
				}
				if (bLocal_384)
				{
					func_113(2);
				}
				if (func_110(iLocal_424, 1500))
				{
					func_113(2);
				}
			}
			break;
	}
}

bool func_110(int iParam0, int iParam1)
{
	return (unk_0x17103F66FBB44C3C() - iParam0) > iParam1;
}

void func_111(int iParam0)
{
	if (func_22(Local_132[iParam0 /*19*/]))
	{
		unk_0x5B1A1DA8A0D20935(Local_132[iParam0 /*19*/]);
		unk_0x32D18ECD9E6F9BE2(Local_132[iParam0 /*19*/]);
		unk_0xD2062A6AC314B85E(Local_132[iParam0 /*19*/]);
		if (func_112(1, 0, 1))
		{
			func_96(Local_132[iParam0 /*19*/], 1);
			Local_132[iParam0 /*19*/].f_14 = 4;
			func_106(&(Local_132[iParam0 /*19*/].f_6));
		}
		else if (unk_0x859AF9B2709EF054(Local_132[iParam0 /*19*/]) == iLocal_611)
		{
			unk_0x1F6B0718EB363FC5(Local_132[iParam0 /*19*/], 30f);
			unk_0xA2972B846BDC7E33(Local_132[iParam0 /*19*/], 30f);
			unk_0x56382A5FCDB1CC28(Local_132[iParam0 /*19*/], 30f);
			unk_0xBA21D3FA3B9A9F32(Local_132[iParam0 /*19*/], 0);
			unk_0x64277E0EB39C1162(Local_132[iParam0 /*19*/], 1, 0);
			unk_0x64277E0EB39C1162(Local_132[iParam0 /*19*/], 3, 1);
			unk_0x64277E0EB39C1162(Local_132[iParam0 /*19*/], 5, 1);
			unk_0x64277E0EB39C1162(Local_132[iParam0 /*19*/], 0, 0);
			unk_0xA334EDA2335A13CA(Local_132[iParam0 /*19*/], 512, 1);
			unk_0x402A96371F34E6D8(Local_132[iParam0 /*19*/], unk_0x9F92518438215DD0(), -1, 0, 2);
			unk_0x23F243BF5B07DA90(Local_132[iParam0 /*19*/], unk_0x9F92518438215DD0(), -1);
			unk_0x4A1AC49BA4A747F7(Local_132[iParam0 /*19*/], 1);
			Local_132[iParam0 /*19*/].f_14 = 2;
		}
		else
		{
			unk_0x64277E0EB39C1162(Local_132[iParam0 /*19*/], 5, 0);
			unk_0x402A96371F34E6D8(Local_132[iParam0 /*19*/], unk_0x9F92518438215DD0(), -1, 0, 2);
			unk_0x23F243BF5B07DA90(Local_132[iParam0 /*19*/], unk_0x9F92518438215DD0(), -1);
			unk_0x4A1AC49BA4A747F7(Local_132[iParam0 /*19*/], 0);
			Local_132[iParam0 /*19*/].f_14 = 4;
		}
	}
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar0, 1);
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

void func_113(int iParam0)
{
	func_23(500, 1);
	func_114(func_120(Local_102.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_96070 = 1;
	}
	else
	{
		Global_96070 = 2;
	}
	func_517();
}

void func_114(int iParam0, int iParam1, int iParam2)
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
		func_119((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_115();
	}
}

void func_115()
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_118(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_117() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_116();
				}
			}
		}
	}
}

int func_116()
{
	if (func_406(0))
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

int func_117()
{
	return Global_24444;
}

int func_118(int iParam0, int iParam1)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_31();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_120(int iParam0)
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

void func_121()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_99)
	{
		case 0:
			func_65(&cLocal_618);
			func_64();
			if (func_35())
			{
				if (func_58(1, 10.5f, 1))
				{
					unk_0x717851935436D1B0(unk_0x9F92518438215DD0(), sLocal_441, 0, 0, 0);
					if (func_405(Local_335.f_0))
					{
						unk_0x717851935436D1B0(Local_335.f_0, sLocal_442, 0, 0, 0);
					}
					if (func_405(Local_111.f_9))
					{
						unk_0x717851935436D1B0(Local_111.f_9, sLocal_443, 0, 0, 0);
					}
					if (func_405(Local_343.f_0))
					{
						unk_0x717851935436D1B0(Local_343.f_0, sLocal_444, 0, 0, 0);
					}
					if (func_405(Local_349.f_0))
					{
						unk_0x717851935436D1B0(Local_349.f_0, sLocal_445, 0, 0, 0);
					}
					unk_0xEFAE0030469E9B12(0);
					unk_0x4EDE34FBADD967A6(0);
					func_23(800, 0);
					func_184(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_183(&Var0, &Var3, &fVar9);
					Var6 = { func_182() };
					if (func_179(Var6, 0))
					{
						func_172(Var0, Var3, fVar9, 2721.02f, 4140.34f, 43.66f, 257.67f, 1, 1, 1, 0, 0);
						func_123(2721.02f, 4140.34f, 43.66f, 257.67f, 0, 145);
					}
					else
					{
						func_172(Var0, Var3, fVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						func_123(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (func_22(Local_111.f_9))
					{
						if (unk_0x6AAACE62C58880BC(Local_111.f_9))
						{
							unk_0x1FA92C26AB9467D3(Local_111.f_9);
						}
						unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
						unk_0xFA51DC22F6E34F6E(Local_111.f_9, 2724.02f, 4145.08f, 43.29f, 1, 0, 0, 1);
						unk_0x03D97EDECF2E1859(Local_111.f_9, -84.2f);
						unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
					}
					iLocal_99 = 1;
				}
			}
			break;
		
		case 1:
			if (func_405(Local_343.f_0))
			{
				if (func_22(Local_335.f_0))
				{
					if (unk_0x87E70BB14C5C25EE(sLocal_442, 0) && unk_0x87E70BB14C5C25EE(sLocal_444, 0))
					{
						func_47();
					}
				}
			}
			if (unk_0x87E70BB14C5C25EE(sLocal_441, 0))
			{
				unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), 2724.193f, 4145.306f, 42.8324f, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), 76.4896f);
				unk_0xC9FC7EC443B3E63E(unk_0x9F92518438215DD0(), joaat("MotionState_Walk"), 0, 1, 0);
				unk_0x3F8D4F85B63FE448(unk_0xCFC72E446B0B3AD7(), 1f, 2000, 0, 1, 0);
			}
			if (unk_0x0DEEB038117360A3(0))
			{
				unk_0x5EF916489F3787FC(0f);
				unk_0x203B2685C1715644(0f, 1065353216);
			}
			if (!unk_0xC42238EA2EBA3C42())
			{
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (unk_0xC42238EA2EBA3C42())
			{
				unk_0x667FB252FBBF3EAC(0);
			}
			else
			{
				if (unk_0x8C177CD087379EBE())
				{
					unk_0x6308E81AF3BAB9A5();
				}
				if (bLocal_391)
				{
					func_25(1, 1, 1, 1);
				}
				if (func_22(Local_111.f_9))
				{
					if (unk_0x6AAACE62C58880BC(Local_111.f_9))
					{
						unk_0x1FA92C26AB9467D3(Local_111.f_9);
					}
				}
				func_40(&(Local_111.f_9), 1);
				if (func_22(Local_335.f_0))
				{
					unk_0x402A96371F34E6D8(Local_335.f_0, unk_0x9F92518438215DD0(), -1, 0, 2);
					unk_0xE8105B7E3908547D(Local_335.f_0, 1);
				}
				func_41(&Local_335, 1, 0, 1);
				func_122(5);
			}
			break;
	}
}

void func_122(int iParam0)
{
	iLocal_97 = iParam0;
	iLocal_99 = 0;
}

void func_123(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x746960881FB19A89(Global_91356.f_4))
	{
		if (unk_0xFC38B241541883D3(Global_91356.f_4, 0))
		{
			if (func_171(24) != Global_91356.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_168(unk_0x77009B1C011405A9(Global_91356.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_124(Global_91356.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_124(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x746960881FB19A89(Global_67138.f_484[25]) && unk_0xFC38B241541883D3(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2A210BAD0D74322B(iParam0) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus")) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_167(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_163(iParam0, &Var0);
		if (func_162(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0x77009B1C011405A9(iParam0, 1) };
			fParam4 = unk_0xE691E4EA6B4440C6(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9());
			}
		}
		func_155(iParam5, Var0, Param1, fParam4, func_161(iParam0));
		func_125(iParam5, iParam0, 0);
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 12) && !unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != unk_0xB6A50C909A8FABC3(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (unk_0x746960881FB19A89(iParam1))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			if (!unk_0x34E74FF8690AA4B1(iParam1))
			{
				unk_0x336AE92FD68DEF98(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97358.f_18371.f_4249 = func_141();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_171(iParam0);
					if ((unk_0x746960881FB19A89(iVar0) && unk_0xFC38B241541883D3(iVar0, 0)) && iParam1 != iVar0)
					{
						func_126(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_127(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
		if (!unk_0x746960881FB19A89(iVar0))
		{
			iVar0 = unk_0xDF49708B4996403C(iParam0, -1);
		}
		if (unk_0x746960881FB19A89(iVar0) && !unk_0x3E0478C40AB5B38D(iVar0))
		{
			if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97358.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97358.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97358.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97358.f_18371.f_4796 = 1;
	func_163(iParam0, &(Global_97358.f_18371.f_4742));
}

int func_127(int iParam0)
{
	if ((((((((((!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0)) || func_139(iParam0, 0, 0)) || func_139(iParam0, 1, 0)) || func_139(iParam0, 2, 0)) || func_161(iParam0) != 145) || func_138(iParam0)) || func_137(iParam0)) || func_136(iParam0)) || func_135(iParam0)) || !func_128(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		if (func_137(iParam0))
		{
		}
		if (func_137(iParam0))
		{
		}
		if (func_139(iParam0, 0, 0))
		{
		}
		if (func_139(iParam0, 1, 0))
		{
		}
		if (func_139(iParam0, 2, 0))
		{
		}
		if (func_161(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_128(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_129(iParam0))
	{
		return 0;
	}
	if (((unk_0x567194A60F82D51A(iParam0) || unk_0xDB519A4108C6BFB1(iParam0)) || unk_0xAAF77E03CD60491E(iParam0)) || unk_0x297BD02A9765671B(iParam0))
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

int func_129(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("buffalo3") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("gauntlet2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_134())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x7B787FDDFE6F942B())
		{
			if (unk_0x3B23C8D6B23157DE(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCB8350C6120AA79A(Var1.f_0))
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
		if ((((!func_133() && !func_132()) && !func_131()) && !func_130()) && !func_134())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x035E2C7B598704F7() || unk_0x708CE249B4F97BF8()) || unk_0x7F11C755C90EFEC5())
		{
		}
		else if (!func_131())
		{
			return 0;
		}
	}
	return 1;
}

int func_130()
{
	return 0;
}

int func_131()
{
	return 1;
}

int func_132()
{
	return 1;
}

int func_133()
{
	if (unk_0x9501317225249120(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	sVar1 = unk_0xDFECACF4B22FB69E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6B08EC9A88700FBB(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_129(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x746960881FB19A89(Global_87698[iVar0]) && unk_0xFC38B241541883D3(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == unk_0xB6A50C909A8FABC3(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x746960881FB19A89(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_140(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x94E72F17611BCD3C(Global_97358.f_5486[iVar9], 0))
		{
			if (unk_0x95E3E236782BBF37(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_141()
{
	var uVar0;
	
	func_151(&uVar0, unk_0xD9940DF735CED1D5());
	func_150(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_149(&uVar0, unk_0x3E15607264E063C3());
	func_144(&uVar0, unk_0xA2C54D866C588926());
	func_143(&uVar0, unk_0x35E06151CD8A2DD1());
	func_142(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_145(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_145(int iParam0, int iParam1)
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

var func_146(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_147(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(var uParam0)
{
	return uParam0 & 15;
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_152(var uParam0, int iParam1)
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
			uParam0->f_4 = func_153(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_153(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_153(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_153(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_153(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_153(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
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
			if (func_134())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_134())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97358.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_162(Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97358.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97358.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 19))
	{
		if (!func_162(Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x94E72F17611BCD3C(uParam0->f_9, 20))
	{
		if (!func_162(Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_153(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_81(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_154(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_154(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97358.f_7341.f_99.f_58[128] && !Global_97358.f_7341.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97358.f_7341.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
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
			else if (Global_97358.f_7341.f_99.f_58[118])
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
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_155(int iParam0, struct<54> Param1, struct<3> Param55, float fParam58, int iParam59)
{
	if (func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_160(iParam0);
			func_159(Param1, &(Global_97358.f_18371.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = fParam58;
			}
			else
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97358.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_156(iParam0, 1);
		}
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_158(iParam0, 0))
		{
			func_157(iParam0, 1, 0);
			func_157(iParam0, 2, 0);
			func_157(iParam0, 3, 0);
			func_157(iParam0, 4, 0);
			func_157(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_157(iParam0, 0, 0);
	}
}

void func_157(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_18371[iParam0]), iParam1);
	}
}

bool func_158(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x94E72F17611BCD3C(Global_97358.f_18371[iParam0], iParam1);
}

void func_159(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_160(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x746960881FB19A89(Global_67138.f_139[iParam0]))
		{
			unk_0x336AE92FD68DEF98(Global_67138.f_139[iParam0], 1, 1);
			unk_0x9187463EB4918A4D(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_156(iParam0, 0);
		}
	}
}

int func_161(int iParam0)
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 145;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_162(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_163(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		func_166(uParam1);
		uParam1->f_42 = unk_0xB6A50C909A8FABC3(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xDFECACF4B22FB69E(iParam0), 16);
		*uParam1 = unk_0x015D5CDAA9114947(iParam0);
		unk_0x9EB96E7956694DA9(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x4096E2FD42D248FC(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9A09BEE60599C8C6(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x754F7DC22DC17C57(iParam0);
		uParam1->f_43 = unk_0x19CE0669140A3681(iParam0);
		uParam1->f_45 = unk_0x87C86C986E8206D3(iParam0);
		uParam1->f_46 = unk_0x433D30FBB06F5E87(iParam0);
		unk_0x87C25793C98E3EDD(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x1B3DD3EA702F7E43(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			uParam1->f_44 = unk_0x110EA7EDEDCFBFE8(iParam0);
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (unk_0x39A71639E61C656C(iParam0))
			{
				switch (unk_0x5077B59B95490801(iParam0))
				{
					case 2:
					case 0:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x960C88BA5B643397(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 9);
		}
		if (unk_0x35329BF26006D691(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 10);
		}
		if (unk_0x93F3EEE519AAA9E3(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 13);
			unk_0xF16D2D3110DDCF5F(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x104FDCF227248C6F(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 12);
		}
		func_165(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), func_164(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8B13B9F670524CB7(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 11);
		}
		if (unk_0xB4289912C78431FE(iParam0, "IgnoredByQuickSave") && unk_0x8AEE5670B72C39C1(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 27);
		}
	}
}

int func_164(int iParam0)
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

int func_165(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*iParam0) == 0)
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
			if (unk_0xC39F5439AB30508A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68446DE1A840C25F(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_166(var uParam0)
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

void func_167(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_160(iParam0);
	func_156(iParam0, 0);
}

int func_168(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_169(Param0, iParam3, 1);
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

int func_169(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_85405[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85405[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_170(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, Global_85405[iVar0 /*10*/].f_3, 1);
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

bool func_170(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_5486[iParam0], 0);
}

int func_171(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

void func_172(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_173(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_173(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0x228A016F863DED95();
	if (unk_0x746960881FB19A89(iVar0))
	{
		if (!unk_0x34E74FF8690AA4B1(iVar0))
		{
			unk_0x336AE92FD68DEF98(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			if (bParam18)
			{
				func_178(iVar0);
			}
			if (unk_0xFE0FA79BC49EBB07(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x77009B1C011405A9(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_175(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (unk_0x343BE15E9FFCF907(iVar0, joaat("taxi")))
				{
					if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0() && unk_0xB5BBEB12C77EE430(iVar0, -1) != 0)
					{
						if (unk_0x91EAD4F2F9B5B38A(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x77009B1C011405A9(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_139(iVar0, func_79(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_174(Param11))
				{
					if (unk_0xFC38B241541883D3(iVar0, 0))
					{
						iVar13 = unk_0xB6A50C909A8FABC3(iVar0);
						unk_0x9F81F4E7145B08F8(iVar0, &Var4, &Var7);
						if (unk_0xAAF77E03CD60491E(iVar13))
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
				if (unk_0xFC38B241541883D3(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x8F9D4AA83F37F6E2(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x03D97EDECF2E1859(iVar0, fParam10);
						unk_0xFA51DC22F6E34F6E(iVar0, Param7, 1, 0, 0, 1);
						unk_0x77C765087051EDD6(iVar0);
						if (bParam17)
						{
							unk_0x6FD45FA39DD18625(iVar0, 0, 1);
							unk_0xE80930A2EBCF96CA(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x34E74FF8690AA4B1(iVar0) || !unk_0xAD2C236C4A4B83C9(iVar0, 1))
						{
							unk_0x336AE92FD68DEF98(iVar0, 1, 1);
						}
						if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iVar0, 0))
						{
							unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xCD3EBB4EAE50293F(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xCFD3E41398C3253C(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (unk_0x34E74FF8690AA4B1(iVar0))
					{
						unk_0x9187463EB4918A4D(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x34E74FF8690AA4B1(iVar0))
			{
				unk_0x336AE92FD68DEF98(iVar0, 1, 0);
			}
			iVar14 = unk_0xB5BBEB12C77EE430(iVar0, -1);
			if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
			{
				unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x4D5626140D724EC1(unk_0xB6A50C909A8FABC3(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xB5BBEB12C77EE430(iVar0, 0);
				if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
				{
					unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xB5BBEB12C77EE430(iVar0, 1);
				if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
				{
					unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xB5BBEB12C77EE430(iVar0, 2);
				if (unk_0x746960881FB19A89(iVar14) && !unk_0x3E0478C40AB5B38D(iVar14))
				{
					unk_0xFA51DC22F6E34F6E(iVar14, unk_0x77009B1C011405A9(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xCD3EBB4EAE50293F(&iVar0);
		}
	}
}

int func_174(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_177(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x20CBCBD58A2C73B4(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_176(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_176(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_176(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_176(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_176(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_176(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_176(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_176(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_176(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_176(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_176(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_176(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_176(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_176(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_176(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_176(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_176(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_177(struct<3> Param0)
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

void func_178(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (unk_0x9D878480FA8925BB(iParam0) <= 200f)
			{
				unk_0x8063FF52148C1749(iParam0, 500f);
			}
			if (unk_0x5252DDFA0FA75C54(iParam0) <= 700f)
			{
				unk_0x8063FF52148C1749(iParam0, 900f);
			}
			if (unk_0xFD181DDA4D8D6786(iParam0) < 200)
			{
				unk_0x8063FF52148C1749(iParam0, 500f);
			}
		}
	}
}

bool func_179(struct<3> Param0, int iParam3)
{
	return func_180(Global_91356.f_2167.f_12.f_42, Param0, iParam3);
}

int func_180(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_181() };
	}
	unk_0x6BD8057B0B6EC46D(iParam0, &Var0, &Var3);
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

Vector3 func_181()
{
	return 2.55f, 5.59f, 2.55f;
}

Vector3 func_182()
{
	return 3.01f, 11.01f, 6.01f;
}

int func_183(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 2728.995f, 4143.165f, 41.02986f };
	*uParam1 = { 2719.126f, 4144.691f, 47.88543f };
	*uParam2 = 13f;
	return 1;
}

void func_184(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0x2563F6EECD8726D3();
	if (unk_0x378E80A2B7D7C8DF(iVar0))
	{
		func_300(0);
		if (bParam9)
		{
			unk_0x2C3AE0E78CB57EB3(unk_0x2563F6EECD8726D3(), 1);
		}
		if (bParam8)
		{
			switch (func_79())
			{
				case 0:
					if (func_299(unk_0x9F92518438215DD0(), 8, 15))
					{
						func_186(unk_0x9F92518438215DD0(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_299(unk_0x9F92518438215DD0(), 9, 6))
					{
						func_186(unk_0x9F92518438215DD0(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_299(unk_0x9F92518438215DD0(), 8, 1) || func_299(unk_0x9F92518438215DD0(), 8, 10))
					{
						func_186(unk_0x9F92518438215DD0(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_299(unk_0x9F92518438215DD0(), 8, 4))
					{
						func_186(unk_0x9F92518438215DD0(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0xA82CB0D67E22220B(func_185(unk_0x2563F6EECD8726D3()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0xB7B8A91320C298DB(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x35875163F311FBEF(Param0, 30f);
		}
		unk_0x52106E0E9A3B74B8(Param0, 30f, 0);
		unk_0x6EAEC8403384110F(iVar0, 0, 0);
		unk_0x4BAAF4A818239FFF(iVar0, 0);
		unk_0x752045E2B7BD5844(iVar0, 1);
		if (bParam12)
		{
			unk_0xB3B57AEE7B7BA0E2(0);
			unk_0xC48BE7195D873776(0);
		}
		unk_0xDA31FF1629FE9693();
		if (iParam11 == 1)
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		if (iParam3 == 1)
		{
			unk_0xC658188535CE7FAF(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_42 = 0;
			if (func_405(unk_0x9F92518438215DD0()))
			{
				iLocal_42 = unk_0x017FCADD3D317F0F(unk_0x9F92518438215DD0());
				unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_23(500, 0);
		}
	}
}

Vector3 func_185(var uParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(uParam0), 0);
}

int func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (unk_0x3E0478C40AB5B38D(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0xB6A50C909A8FABC3(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { func_235(iVar10, iParam1, iParam2) };
		if (!func_234(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_227(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_225(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_225(iParam0, 9);
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
			iVar7 = func_221(iParam0, 1);
			if (!func_220(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_221(iParam0, 0);
			if (!func_219(iVar10, 14, iVar8) && !func_217(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_221(iParam0, 2);
			}
		}
		unk_0xEE71F3884E69C469(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { func_213(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { func_235(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { func_207(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { func_235(iVar10, 14, uVar27[iVar1]) };
							func_206(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							func_227(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_198(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_186(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_197(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0xB27BF64B02C0107E(iParam0, func_196(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, unk_0xA9B8775C8F23EB6B(iParam0, func_196(iVar0)));
						}
						else
						{
							unk_0xB27BF64B02C0107E(iParam0, func_196(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						func_227(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_198(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_186(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2 = (iVar2 + 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { func_235(iVar10, iVar0, func_195(iParam0, iVar0, -1)) };
				if (unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_194(iParam0, iVar10, &iVar4, 1))
							{
								func_186(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { func_213(iVar10, 0) };
						func_186(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { func_235(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_192(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_186(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_235(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_192(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_186(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_235(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_192(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_186(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_235(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_192(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_186(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_235(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_192(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_186(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { func_207(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { func_235(iVar10, 14, uVar67[iVar1]) };
			func_206(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			func_227(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_198(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_186(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_206(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		func_227(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_198(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_186(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0xB27BF64B02C0107E(iParam0, func_196(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, unk_0xA9B8775C8F23EB6B(iParam0, func_196(iParam1)));
		}
		else
		{
			unk_0xB27BF64B02C0107E(iParam0, func_196(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_198(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_186(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_189(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_194(iParam0, iVar10, &iVar4, 0))
		{
			func_186(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_187(iParam0, iVar10, &iVar4))
		{
			func_186(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_188(iParam1);
	if (Global_97358.f_1729.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_299(iParam0, Global_97358.f_1729.f_539[iVar0 /*65*/].f_64, Global_97358.f_1729.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_62;
			Global_97358.f_1729.f_539[iVar0 /*65*/].f_63 = -99;
			Global_97358.f_1729.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)
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

void func_189(int iParam0, int iParam1, int iParam2)
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
	if (func_191(iParam0, 12, iVar0))
	{
		if (func_190(iParam0, iParam1, iParam2))
		{
			iVar1 = func_188(iParam0);
			if (iParam1 == 3)
			{
				Global_97358.f_1729.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_97358.f_1729.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_190(int iParam0, int iParam1, int iParam2)
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

bool func_191(int iParam0, int iParam1, int iParam2)
{
	Global_68106[1 /*14*/] = { func_235(iParam0, iParam1, iParam2) };
	return unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 2);
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_207(iParam0, (*uParam4)[13]) };
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
	if (func_193(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_220(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_219(iParam0, iParam2, iParam3))
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
		else if (func_217(iParam0, iParam2, iParam3))
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
		if (func_220(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_219(iParam0, iParam2, iParam3))
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
		else if (func_217(iParam0, iParam2, iParam3))
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
		if (func_220(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_219(iParam0, iParam2, iParam3))
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
		else if (func_217(iParam0, iParam2, iParam3))
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

int func_193(int iParam0, int iParam1, int iParam2)
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

int func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_188(iParam1);
	if (Global_97358.f_1729.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_299(iParam0, Global_97358.f_1729.f_539[iVar0 /*65*/].f_61, Global_97358.f_1729.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_59;
			Global_97358.f_1729.f_539[iVar0 /*65*/].f_60 = -99;
			Global_97358.f_1729.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_299(iParam0, iParam1, iVar0))
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
				if (func_299(iParam0, iParam1, iVar1))
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
				return func_221(iParam0, iParam2);
			}
		}
		else
		{
			return func_225(iParam0, iParam1);
		}
	}
	return -99;
}

int func_196(int iParam0)
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

int func_197(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_188(iParam0);
		Global_97358.f_1729.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_97358.f_1729.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_225(iParam0, 1);
				iVar0 = func_205(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_225(iParam0, 2);
				iVar0 = func_205(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_197(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_204(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_203(iParam1, iParam3, &iVar0))
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
									if (!func_202(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_202(iParam0, 3, 135, 150))
									{
										iVar0 = func_201(iParam1, 3, 135, 150);
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
									if (!func_202(iParam0, 3, 209, 222))
									{
										iVar0 = func_201(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_202(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_201(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_201(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_201(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_201(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_202(iParam0, 3, 176, 191) && !func_202(iParam0, 3, 227, 242))
									{
										iVar0 = func_201(iParam1, 3, 176, 191);
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
								iVar4 = func_225(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_225(iParam0, 11);
								iVar5 = func_200(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_225(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_199(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_225(iParam0, 8);
								iVar8 = func_225(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_200(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_200(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_225(iParam0, 11);
								iVar0 = func_200(iParam1, -99, iVar9, 0);
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

int func_199(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_200(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_201(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_201(iParam0, 11, 25, 40);
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

int func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_191(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_225(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2)
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

int func_204(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_188(iParam0);
		Global_97358.f_1729.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_97358.f_1729.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2)
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

void func_206(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (iParam2 == -1)
	{
		unk_0xEB561D54613EF2E6(iParam0, uParam1);
	}
	else
	{
		unk_0x07FE9C31EC9DE225(iParam0, uParam1, iParam2, uParam3, unk_0x4B69FB3A5B09A1BA());
	}
}

struct<10> func_207(int iParam0, int iParam1)
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
					func_212(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_212(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_212(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_212(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_212(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_212(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_212(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_212(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_212(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_212(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_212(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_212(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_212(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_212(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_212(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_212(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_212(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_212(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_212(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_212(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_212(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_212(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_212(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_212(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_212(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_212(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_212(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_212(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_212(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_212(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_212(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_212(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_212(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_212(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_212(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_212(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_212(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_212(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_212(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_212(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_212(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_212(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_212(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_212(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_212(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_212(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_212(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_212(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_212(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_212(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_212(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_212(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_212(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_212(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_212(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_212(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_212(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_212(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_212(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_212(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_212(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_212(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_212(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_212(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_212(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_212(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_212(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_212(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_212(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_212(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_212(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_212(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_212(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_212(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_212(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_212(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_212(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_212(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_212(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_212(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_212(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_212(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_208(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x66ECB224560F3D29(iParam2, &Var1);
		if (!unk_0xCB8350C6120AA79A(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xC55BB458A5E637C4(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_209(iParam1, Var16.f_0, 14, iVar0);
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

int func_209(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA0EEFB6A0D1922AE(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x5A6C32E3BAE9C2BA(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x8DFAF9AA110A5E89(iVar17, &Var0);
			if (!unk_0xCB8350C6120AA79A(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_211(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xD9DCEA1A428C0D4C(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x5A6C32E3BAE9C2BA(iParam3, 6, -1, 0, -1, func_196(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xFAAB86B587497FC8(iVar37, &Var20);
			if (!unk_0xCB8350C6120AA79A(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_210(iParam0, func_196(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_210(int iParam0, int iParam1)
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

int func_211(int iParam0)
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

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_213(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_97358.f_7341.f_99.f_58[120])
					{
						func_216(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_216(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_216(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_216(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_216(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_216(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_216(&Var1, -99, -99, Global_97358.f_1729.f_539.f_196[0], Global_97358.f_1729.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_216(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_216(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_216(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_216(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_216(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_216(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_216(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_216(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_216(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_216(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_216(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_216(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_216(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_216(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_216(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_216(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_216(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_216(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_216(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_216(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_216(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_216(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_216(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_216(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_216(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_216(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_216(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_216(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_216(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_216(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_216(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_216(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_216(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_216(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_216(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_216(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_216(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_216(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_216(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_216(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_216(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_216(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_216(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_216(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_216(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_216(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_216(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_216(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_216(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_216(&Var1, -99, -99, Global_97358.f_1729.f_539.f_196[1], Global_97358.f_1729.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_216(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_216(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_216(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_216(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_216(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_216(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_216(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_216(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_216(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_216(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_216(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_216(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_216(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_216(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_216(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_216(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_216(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_216(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_216(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_216(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_216(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_216(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_216(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_216(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_216(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_216(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_216(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_216(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_216(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_216(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_216(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_216(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_216(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_216(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_216(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_216(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_216(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_216(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_216(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_216(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_216(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_216(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_216(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_216(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_216(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_216(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_216(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_216(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_216(&Var1, -99, -99, Global_97358.f_1729.f_539.f_196[2], Global_97358.f_1729.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_216(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_216(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_216(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_216(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_216(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_216(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_216(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_216(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_216(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_216(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_216(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_216(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_216(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_216(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_216(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_216(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_216(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_216(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_216(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_216(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_216(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_216(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_216(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_216(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_216(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_216(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_216(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_216(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_216(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_216(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_216(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_216(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_216(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_216(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_216(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_216(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_216(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_216(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_216(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_216(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_216(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_216(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_216(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_216(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_216(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_216(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_216(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_216(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_216(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_216(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_216(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_216(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_216(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_216(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_216(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_216(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_216(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_216(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_216(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_216(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_216(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_216(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_216(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_216(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_216(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_216(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_216(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_216(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_216(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_216(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_216(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_216(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_216(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_216(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_216(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_216(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_216(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_216(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_216(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_216(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_216(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_216(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_216(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_216(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_216(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_216(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_216(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_216(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_216(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_216(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_216(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_216(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_216(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_216(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_216(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_216(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_216(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_214(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	int iVar19;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x7B4FAE618BDD44E1(iVar0, 0);
	unk_0xA1299AE0872645B0((iParam2 - iParam3), &Var1);
	if (!unk_0xCB8350C6120AA79A(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x1ED8CED7FCFDA546(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_215(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_215(Var16.f_2)] = func_209(iParam1, Var16.f_0, func_215(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_215(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_215(int iParam0)
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

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

int func_217(int iParam0, int iParam1, int iParam2)
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
					else if (iParam2 >= 327)
					{
						return (unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 1, 3), -1842686353, 0));
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
					else if (iParam2 >= 327)
					{
						return (unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA0EEFB6A0D1922AE(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_211(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x5A6C32E3BAE9C2BA(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x8DFAF9AA110A5E89(iVar17, &Var0);
			if (!unk_0xCB8350C6120AA79A(Var0.f_0))
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
		unk_0xD9DCEA1A428C0D4C(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_210(iParam0, func_196(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		iVar41 = unk_0x5A6C32E3BAE9C2BA(iParam3, 6, -1, 0, -1, func_196(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xFAAB86B587497FC8(iVar38, &Var21);
			if (!unk_0xCB8350C6120AA79A(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
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
					uVar0 = func_218(iParam0, iParam2, 1, 3);
					if (unk_0x1B4B3F390E20C4EA(uVar0, joaat("HAT"), 0))
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
					uVar1 = func_218(iParam0, iParam2, 1, 4);
					if (unk_0x1B4B3F390E20C4EA(uVar1, joaat("HAT"), 0))
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

int func_220(int iParam0, int iParam1, int iParam2)
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
					return unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
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
					return unk_0x1B4B3F390E20C4EA(func_218(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3E0478C40AB5B38D(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xE4C3669C2BFF9D2E(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_224(iParam1);
	}
	iVar1 = unk_0x08C222396DF5E96D(iParam0, iParam1);
	return func_222(iParam0, iVar0, iVar1, iParam1);
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_224(iParam3);
	}
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	iVar1 = unk_0x0C806FE51314E43D(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_209(unk_0xB6A50C909A8FABC3(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_209(unk_0xB6A50C909A8FABC3(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xCBFBCF3D4A06B16E(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xBD76AFC3C82C424B(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_223(iParam0, iParam3));
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
	return func_224(iParam3);
}

int func_223(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
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

int func_224(int iParam0)
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

int func_225(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x3E0478C40AB5B38D(iParam0))
	{
		return -99;
	}
	iVar0 = func_196(iParam1);
	iVar1 = unk_0x27F7C2FB848CD525(iParam0, iVar0);
	iVar2 = unk_0xEB3E23B43A745CA1(iParam0, iVar0);
	return func_226(iParam0, iVar1, iVar2, iParam1);
}

int func_226(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_196(iParam3);
	iVar1 = unk_0xB1B2600C133C2E34(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x4C1CE1316B1C3956(uParam0, iVar0, iVar3);
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

void func_227(int iParam0)
{
	if (unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 1) && !unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 6))
	{
		func_233(iParam0, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 2, Global_68106[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 1) && unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_228(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_228(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_228(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_228(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68104;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_232(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_231(iVar2, iVar0, 0);
		unk_0xEDB9A377CD8B7F03(&uVar3, iVar1);
		func_229(iVar2, uVar3, iVar0, 1);
	}
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_230(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, iParam3);
	}
}

int func_230(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_230(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3015;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2543113)
		{
			iVar0 = unk_0x278B995341F26288(uParam0);
		}
		else
		{
			iVar0 = unk_0x1B799300CCF819F0(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x278B995341F26288(uParam0);
	}
	else
	{
		iVar0 = unk_0x1B799300CCF819F0(uParam0);
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
					*uParam2 = 1749;
					break;
				
				case 1:
					*uParam2 = 1750;
					break;
				
				case 2:
					*uParam2 = 1751;
					break;
				
				case 3:
					*uParam2 = 1752;
					break;
				
				case 4:
					*uParam2 = 1753;
					break;
				
				case 5:
					*uParam2 = 1754;
					break;
				
				case 6:
					*uParam2 = 1761;
					break;
				
				case 7:
					*uParam2 = 1762;
					break;
				
				case 8:
					*uParam2 = 1763;
					break;
				
				case 9:
					*uParam2 = 1764;
					break;
				
				case 10:
					*uParam2 = 1765;
					break;
				
				case 11:
					*uParam2 = 1766;
					break;
				
				case 12:
					*uParam2 = 1767;
					break;
				
				case 13:
					*uParam2 = 1775;
					break;
				
				case 14:
					*uParam2 = 1776;
					break;
				
				case 15:
					*uParam2 = 1877;
					break;
				
				case 16:
					*uParam2 = 1878;
					break;
				
				case 17:
					*uParam2 = 1909;
					break;
				
				case 18:
					*uParam2 = 1921;
					break;
				
				case 19:
					*uParam2 = 1922;
					break;
				
				case 20:
					*uParam2 = 1923;
					break;
				
				case 21:
					*uParam2 = 1924;
					break;
				
				case 22:
					*uParam2 = 1925;
					break;
				
				case 23:
					*uParam2 = 2029;
					break;
				
				case 24:
					*uParam2 = 2030;
					break;
				
				case 25:
					*uParam2 = 2056;
					break;
				
				case 26:
					*uParam2 = 2057;
					break;
				
				case 27:
					*uParam2 = 2058;
					break;
				
				case 28:
					*uParam2 = 2059;
					break;
				
				case 29:
					*uParam2 = 2060;
					break;
				
				case 30:
					*uParam2 = 2061;
					break;
				
				case 31:
					*uParam2 = 2062;
					break;
				
				case 32:
					*uParam2 = 2063;
					break;
				
				case 33:
					*uParam2 = 2064;
					break;
				
				case 34:
					*uParam2 = 2065;
					break;
				
				case 35:
					*uParam2 = 2312;
					break;
				
				case 36:
					*uParam2 = 2313;
					break;
				
				case 37:
					*uParam2 = 2349;
					break;
				
				case 38:
					*uParam2 = 2350;
					break;
				
				case 39:
					*uParam2 = 2351;
					break;
				
				case 40:
					*uParam2 = 2352;
					break;
				
				case 41:
					*uParam2 = 2411;
					break;
				
				case 42:
					*uParam2 = 2412;
					break;
				
				case 43:
					*uParam2 = 2413;
					break;
				
				case 44:
					*uParam2 = 2414;
					break;
				
				case 45:
					*uParam2 = 2415;
					break;
				
				case 46:
					*uParam2 = 2416;
					break;
				
				case 47:
					*uParam2 = 2417;
					break;
				
				case 48:
					*uParam2 = 2418;
					break;
				
				case 49:
					*uParam2 = 2419;
					break;
				
				case 50:
					*uParam2 = 2420;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1755;
					break;
				
				case 1:
					*uParam2 = 1756;
					break;
				
				case 2:
					*uParam2 = 1757;
					break;
				
				case 3:
					*uParam2 = 1758;
					break;
				
				case 4:
					*uParam2 = 1759;
					break;
				
				case 5:
					*uParam2 = 1760;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1910;
					break;
				
				case 18:
					*uParam2 = 1926;
					break;
				
				case 19:
					*uParam2 = 1927;
					break;
				
				case 20:
					*uParam2 = 1928;
					break;
				
				case 21:
					*uParam2 = 1929;
					break;
				
				case 22:
					*uParam2 = 1930;
					break;
				
				case 23:
					*uParam2 = 2031;
					break;
				
				case 24:
					*uParam2 = 2032;
					break;
				
				case 25:
					*uParam2 = 2066;
					break;
				
				case 26:
					*uParam2 = 2067;
					break;
				
				case 27:
					*uParam2 = 2068;
					break;
				
				case 28:
					*uParam2 = 2069;
					break;
				
				case 29:
					*uParam2 = 2070;
					break;
				
				case 30:
					*uParam2 = 2071;
					break;
				
				case 31:
					*uParam2 = 2072;
					break;
				
				case 32:
					*uParam2 = 2073;
					break;
				
				case 33:
					*uParam2 = 2074;
					break;
				
				case 34:
					*uParam2 = 2075;
					break;
				
				case 35:
					*uParam2 = 2314;
					break;
				
				case 36:
					*uParam2 = 2315;
					break;
				
				case 37:
					*uParam2 = 2353;
					break;
				
				case 38:
					*uParam2 = 2354;
					break;
				
				case 39:
					*uParam2 = 2355;
					break;
				
				case 40:
					*uParam2 = 2356;
					break;
				
				case 41:
					*uParam2 = 2421;
					break;
				
				case 42:
					*uParam2 = 2422;
					break;
				
				case 43:
					*uParam2 = 2423;
					break;
				
				case 44:
					*uParam2 = 2424;
					break;
				
				case 45:
					*uParam2 = 2425;
					break;
				
				case 46:
					*uParam2 = 2426;
					break;
				
				case 47:
					*uParam2 = 2427;
					break;
				
				case 48:
					*uParam2 = 2428;
					break;
				
				case 49:
					*uParam2 = 2429;
					break;
				
				case 50:
					*uParam2 = 2430;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3015;
}

int func_233(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x94E72F17611BCD3C(Global_97358.f_1729[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	if (!unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_235(int iParam0, int iParam1, int iParam2)
{
	func_298();
	if (iParam0 == joaat("player_zero"))
	{
		func_280(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_261(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_236(iParam1, iParam2);
	}
	return Global_68106[0 /*14*/];
}

void func_236(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_260(iParam1);
			break;
		
		case 2:
			func_259(iParam1);
			break;
		
		case 3:
			func_256(iParam1);
			break;
		
		case 4:
			func_255(iParam1);
			break;
		
		case 6:
			func_254(iParam1);
			break;
		
		case 5:
			func_253(iParam1);
			break;
		
		case 8:
			func_252(iParam1);
			break;
		
		case 9:
			func_251(iParam1);
			break;
		
		case 10:
			func_250(iParam1);
			break;
		
		case 1:
			func_249(iParam1);
			break;
		
		case 7:
			func_248(iParam1);
			break;
		
		case 11:
			func_247(iParam1);
			break;
		
		case 12:
			func_246(iParam1);
			break;
		
		case 13:
			func_245(iParam1);
			break;
		
		case 14:
			func_237(iParam1);
			break;
	}
}

void func_237(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 155);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_238(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_243(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (uParam0->f_2 < 0)
	{
	}
	if (unk_0x398F092142D37E17(sParam3) != unk_0x398F092142D37E17("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 5);
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 1);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 2);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 6);
		if (iParam1 == 1)
		{
			if (unk_0x1B4B3F390E20C4EA(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_242(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_6), 2);
			}
			if (!func_242(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_242(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_6), 2);
			}
			if (!func_242(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_242(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_6), 2);
			}
			if (!func_242(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 0);
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 5);
		if (func_233(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 1);
		}
		if (func_233(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 2);
		}
		if (!func_233(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_84(14))
			{
				uVar0 = func_231(func_241(iParam1, uParam0->f_2), Global_68104, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, uParam0->f_1))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 1);
				}
				iVar0 = func_231(func_240(iParam1, uParam0->f_2), Global_68104, 0);
				if (unk_0x94E72F17611BCD3C(iVar0, uParam0->f_1))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 2);
				}
				if (func_239(iParam1, uParam0->f_2, &iVar1))
				{
					iVar0 = func_231(iVar1, Global_68104, 0);
					if (!unk_0x94E72F17611BCD3C(iVar0, uParam0->f_1))
					{
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 4);
					}
				}
			}
		}
		else
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_6), 2);
		}
	}
}

bool func_239(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 970;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 971;
					break;
				
				case 3:
					*uParam2 = 1420;
					break;
				
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 9:
					*uParam2 = 1429;
					break;
				
				case 10:
					*uParam2 = 1431;
					break;
				
				case 1:
					*uParam2 = 1003;
					break;
				
				case 7:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
				
				case 12:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 9:
					*uParam2 = 1430;
					break;
				
				case 7:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	}
	return *uParam2 != 970;
}

int func_240(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 919;
					break;
				
				case 3:
					return 1405;
					break;
				
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 9:
					return 1414;
					break;
				
				case 10:
					return 1416;
					break;
				
				case 1:
					return 951;
					break;
				
				case 7:
					return 1417;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
				
				case 12:
					return 970;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 9:
					return 1415;
					break;
				
				case 7:
					return 1418;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 967;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
	}
	return 927;
}

int func_241(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 867;
					break;
				
				case 3:
					return 1390;
					break;
				
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 9:
					return 1399;
					break;
				
				case 10:
					return 1401;
					break;
				
				case 1:
					return 899;
					break;
				
				case 7:
					return 1402;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
				
				case 12:
					return 918;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 9:
					return 1400;
					break;
				
				case 7:
					return 1403;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 915;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
	}
	return 875;
}

int func_242(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68104;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_232(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_231(iVar2, iVar0, 0);
		return unk_0x94E72F17611BCD3C(uVar3, iVar1);
	}
	return 0;
}

int func_243(int iParam0)
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

void func_244(int iParam0, int iParam1, int iParam2)
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
	uVar1 = Global_68106[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x7B4FAE618BDD44E1(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA1299AE0872645B0(iVar17, &Var2);
			if (!unk_0xCB8350C6120AA79A(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_238(&(Global_68106[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_238(&(Global_68106[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xA0EEFB6A0D1922AE(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x5A6C32E3BAE9C2BA(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x8DFAF9AA110A5E89(iVar38, &Var20);
			if (!unk_0xCB8350C6120AA79A(Var20.f_0))
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
					func_238(&(Global_68106[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x1B4B3F390E20C4EA(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0xD9DCEA1A428C0D4C(&Var41);
		iVar59 = 0;
		iVar60 = unk_0x5A6C32E3BAE9C2BA(iVar1, 6, -1, 0, -1, func_196(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xFAAB86B587497FC8(iVar58, &Var41);
			if (!unk_0xCB8350C6120AA79A(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_238(&(Global_68106[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x1B4B3F390E20C4EA(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_245(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 9);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_246(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 48);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_247(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_244(iVar10, iParam0, 1);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_248(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_244(iVar10, iParam0, 1);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_249(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 6);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_250(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 33);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 17);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 18);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 5;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 7);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 84);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 104);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_256(int iParam0)
{
	if (iParam0 < 136)
	{
		func_258(iParam0);
	}
	else
	{
		func_257(iParam0);
	}
	if (Global_68106[0 /*14*/].f_2 == -1)
	{
		func_244(3, iParam0, 242);
	}
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 2;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 2;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 9);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_68106[0 /*14*/].f_5 = 2;
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
			func_244(iVar10, iParam0, 7);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_279(iParam1);
			break;
		
		case 2:
			func_278(iParam1);
			break;
		
		case 3:
			func_274(iParam1);
			break;
		
		case 4:
			func_273(iParam1);
			break;
		
		case 6:
			func_272(iParam1);
			break;
		
		case 5:
			func_271(iParam1);
			break;
		
		case 8:
			func_270(iParam1);
			break;
		
		case 9:
			func_269(iParam1);
			break;
		
		case 10:
			func_268(iParam1);
			break;
		
		case 1:
			func_267(iParam1);
			break;
		
		case 7:
			func_266(iParam1);
			break;
		
		case 11:
			func_265(iParam1);
			break;
		
		case 12:
			func_264(iParam1);
			break;
		
		case 13:
			func_263(iParam1);
			break;
		
		case 14:
			func_262(iParam1);
			break;
	}
}

void func_262(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 175);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 13;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 9);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 47);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 63);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_244(iVar10, iParam0, 1);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_267(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 5);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 53);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 12);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 77);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 5;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 7);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 134);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 117);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_274(int iParam0)
{
	if (iParam0 < 107)
	{
		func_277(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_276(iParam0);
	}
	else
	{
		func_275(iParam0);
	}
	if (Global_68106[0 /*14*/].f_2 == -1)
	{
		func_244(3, iParam0, 318);
	}
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 1;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 1;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 1;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 21);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_68106[0 /*14*/].f_5 = 1;
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
			func_244(iVar10, iParam0, 10);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_297(iParam1);
			break;
		
		case 2:
			func_296(iParam1);
			break;
		
		case 3:
			func_293(iParam1);
			break;
		
		case 4:
			func_292(iParam1);
			break;
		
		case 6:
			func_291(iParam1);
			break;
		
		case 5:
			func_290(iParam1);
			break;
		
		case 8:
			func_289(iParam1);
			break;
		
		case 9:
			func_288(iParam1);
			break;
		
		case 10:
			func_287(iParam1);
			break;
		
		case 1:
			func_286(iParam1);
			break;
		
		case 7:
			func_285(iParam1);
			break;
		
		case 11:
			func_284(iParam1);
			break;
		
		case 12:
			func_283(iParam1);
			break;
		
		case 13:
			func_282(iParam1);
			break;
		
		case 14:
			func_281(iParam1);
			break;
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
	iVar10 = 14;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 113);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 13;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 10);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 53);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 45);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_244(iVar10, iParam0, 1);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_286(int iParam0)
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
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 5);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 48);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 20);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 24);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 5;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 14);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 99);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 113);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_293(int iParam0)
{
	if (iParam0 < 60)
	{
		func_295(iParam0);
	}
	else
	{
		func_294(iParam0);
	}
	if (Global_68106[0 /*14*/].f_2 == -1)
	{
		func_244(3, iParam0, 181);
	}
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 0;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 0;
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
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 6);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_68106[0 /*14*/].f_5 = 0;
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
			func_244(iVar10, iParam0, 7);
			return;
			break;
	}
	func_238(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298()
{
	Global_68106[0 /*14*/].f_1 = -1;
	Global_68106[0 /*14*/].f_2 = -1;
	Global_68106[0 /*14*/].f_5 = -1;
	Global_68106[0 /*14*/].f_3 = -1;
	Global_68106[0 /*14*/].f_4 = -1;
	Global_68106[0 /*14*/].f_7 = 0;
	Global_68106[0 /*14*/].f_6 = 0;
	Global_68106[0 /*14*/].f_13 = -1;
	Global_68106[0 /*14*/].f_12 = 0;
	Global_68106[0 /*14*/] = 0;
	StringCopy(&(Global_68106[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (unk_0x3E0478C40AB5B38D(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	Global_68106[1 /*14*/] = { func_235(iVar0, iParam1, iParam2) };
	if (!unk_0x94E72F17611BCD3C(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_213(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_299(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { func_207(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_299(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { func_235(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_299(iParam0, 14, iVar4))
										{
											if (!func_192(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
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
						iVar1 = func_225(iParam0, iVar2);
						Global_68106[2 /*14*/] = { func_235(iVar0, iVar2, iVar1) };
						if (!func_192(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
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
		uVar32 = { func_207(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_299(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xE4C3669C2BFF9D2E(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (unk_0x08C222396DF5E96D(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == unk_0x27F7C2FB848CD525(iParam0, func_196(iParam1)) && Global_68106[1 /*14*/].f_4 == unk_0xEB3E23B43A745CA1(iParam0, func_196(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_300(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x2563F6EECD8726D3();
	if (!unk_0xCB90E9273A35BF89(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0xC70D4A06E38B2711(iVar0, bParam0, 16);
		unk_0xC70D4A06E38B2711(iVar0, bParam0, 32);
	}
	func_26(1, 1, 0, 0);
}

void func_301()
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_35();
	func_362();
	if (func_22(Local_111.f_9))
	{
		Var1 = { unk_0x77009B1C011405A9(Local_111.f_9, 0) };
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				unk_0xF2061C15946C53A2(5, joaat("player"), iLocal_611);
				unk_0xF2061C15946C53A2(5, iLocal_611, joaat("player"));
				iLocal_425 = unk_0xFD181DDA4D8D6786(Local_111.f_9);
				Local_673 = { unk_0x77009B1C011405A9(Local_111.f_9, 0) };
				func_340(&Local_676, Local_673);
				func_339(Local_111.f_9);
				if (Local_111.f_10 != 13 && Local_111.f_10 != 14)
				{
					unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
					Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 3000);
					Local_111.f_10 = 13;
				}
				if (func_22(Local_111.f_9))
				{
					if (!unk_0x2E6E8D325977B3EC(Local_111.f_8))
					{
						Local_111.f_8 = func_338(Local_111.f_9, 1, 0, 5);
					}
					unk_0x87659527DF5C44B5(Local_111.f_9);
				}
				iLocal_421 = -1;
				iLocal_422 = -1;
				iLocal_396 = 0;
				iLocal_368 = 0;
				iLocal_367 = 0;
				sLocal_434 = "BB1_J8";
				iLocal_409 = unk_0x17103F66FBB44C3C();
				func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_396)
				{
					func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					func_316(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_422 == -1)
						{
							iLocal_422 = unk_0x17103F66FBB44C3C();
						}
						if (iLocal_421 == -1)
						{
							iLocal_421 = unk_0x17103F66FBB44C3C();
						}
						else if (func_110(iLocal_421, 8000))
						{
							bVar0 = true;
						}
						if (func_313(Local_111.f_9, Local_627, bVar0, 0, 1, iLocal_425))
						{
							if ((func_110(iLocal_422, 5000) || func_162(Local_676, 0f, 0f, 0f)) || (!func_57(Var1, Local_676, 8.5f) && !func_57(Var1, Local_673, 8.5f)))
							{
								func_312();
								Local_111.f_17 = unk_0x17103F66FBB44C3C();
								func_310(&uLocal_43, 0, 0);
								iLocal_396 = 1;
							}
						}
						else
						{
							if (!iLocal_367)
							{
								if (!func_110(iLocal_409, 2500))
								{
									if (!func_60())
									{
										if (func_102(Local_111.f_9, Local_627, 30f))
										{
											if (func_72(&uLocal_446, cLocal_439, "BB1_J7", 4, 0, 0, 0))
											{
												iLocal_409 = unk_0x17103F66FBB44C3C();
												iLocal_367 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_367 = 1;
								}
							}
							else if (!func_60())
							{
								if (func_110(iLocal_409, unk_0x073B65E051D2F03E(5000, 12000)))
								{
									if (func_102(Local_111.f_9, Local_627, 30f))
									{
										if (unk_0x7E4B3ADE683EE23B(Local_111.f_9))
										{
											if (unk_0x073B65E051D2F03E(0, 101) < 30)
											{
												if (func_72(&uLocal_446, cLocal_440, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_409 = unk_0x17103F66FBB44C3C();
												}
											}
											else if (func_72(&uLocal_446, cLocal_439, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_409 = unk_0x17103F66FBB44C3C();
											}
										}
									}
								}
							}
							else
							{
								iLocal_409 = unk_0x17103F66FBB44C3C();
							}
							func_309(Local_111.f_9, Local_627, iLocal_422, 925353388);
						}
					}
					else
					{
						func_312();
						Local_111.f_17 = unk_0x17103F66FBB44C3C();
						func_310(&uLocal_43, 0, 0);
						iLocal_396 = 1;
					}
				}
				else
				{
					func_312();
					if (!func_102(Local_111.f_9, Local_627, 10f))
					{
						if (!iLocal_386)
						{
							if (!func_307(sLocal_434, 1))
							{
								func_305(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, &iLocal_413, 1, 1);
								iLocal_386 = 1;
							}
						}
						else
						{
							func_337(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, iLocal_413, 1);
						}
					}
					else
					{
						if (!iLocal_368)
						{
							if (!unk_0xBD280C076BC69C97(Local_111.f_9) && !unk_0x827151D7B70CB853(Local_111.f_9, 0))
							{
								if (func_304("BBS_APPSUS", 0, 0) || func_304("BBS_APPSUS2", 0, 0))
								{
									unk_0xDA31FF1629FE9693();
								}
								if (!func_60())
								{
									func_3();
								}
								if (func_72(&uLocal_446, cLocal_439, sLocal_434, 4, 0, 0, 0))
								{
									iLocal_368 = 1;
								}
							}
						}
						else if (!func_60())
						{
							iLocal_99 = 2;
						}
						func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					}
					if (func_302(&(Local_111.f_9)))
					{
						iLocal_401 = 1;
						iLocal_99 = 0;
					}
				}
				break;
			
			case 2:
				if (func_304("BBS_APPSUS", 0, 0) || func_304("BBS_APPSUS2", 0, 0))
				{
					unk_0xDA31FF1629FE9693();
				}
				unk_0xA65F8C84413BA46B(0);
				iLocal_368 = 1;
				func_312();
				unk_0x3801EEE153F0CE7A(5, joaat("player"), iLocal_611);
				unk_0x3801EEE153F0CE7A(5, iLocal_611, joaat("player"));
				func_107(&(Local_111.f_8));
				iLocal_368 = 1;
				Local_111.f_17 = unk_0x17103F66FBB44C3C();
				func_310(&uLocal_43, 0, 0);
				iLocal_397 = 0;
				iLocal_401 = 0;
				func_122(3);
				break;
			}
	}
}

int func_302(var uParam0)
{
	struct<3> Var0;
	
	if (func_22(*uParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(*uParam0, 0) };
		if (!func_303(uParam0))
		{
			if (unk_0xFDD233BBDD8E0FFE(Var0 - Vector(7f, 7f, 7f), Var0 + Vector(7f, 7f, 7f), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_303(var uParam0)
{
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (unk_0x827151D7B70CB853(*uParam0, 0))
		{
			if (unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0) == unk_0x1161215F69587BDA(*uParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_304(char* sParam0, int iParam1, int iParam2)
{
	unk_0x1A95252BC324DC59(sParam0);
	if (iParam1 == 1)
	{
		unk_0xDB4BC767CEF09274(iParam2);
	}
	return unk_0x776411DBC9EB2206();
}

void func_305(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		if (bParam5)
		{
			unk_0x016722B6E0559A9A(*uParam0, 1);
			unk_0x2A8C2BEEA4F7041F(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !func_60())
			{
				if (!unk_0x18DF50385FACBD8E() || func_304(sParam2, 0, 0))
				{
					func_306(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			unk_0x016722B6E0559A9A(*uParam0, 3);
			unk_0x2A8C2BEEA4F7041F(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !func_60())
			{
				if (!unk_0x18DF50385FACBD8E() || func_304(sParam1, 0, 0))
				{
					func_306(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = unk_0x17103F66FBB44C3C();
		*iParam4 = unk_0x17103F66FBB44C3C();
	}
}

void func_306(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0x51E13ACB7C47100D(iParam1, 1);
}

int func_307(char* sParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (func_60())
	{
		Var0 = { func_308() };
		if (unk_0x6B08EC9A88700FBB(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x6B08EC9A88700FBB(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_308()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

void func_309(int iParam0, struct<3> Param1, int iParam4, float fParam5)
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
	fVar4 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iParam0, 1), Param1);
	iVar5 = (unk_0x17103F66FBB44C3C() - iParam4);
	fParam5 = (fParam5 * IntToFloat(iVar5));
	if (fVar4 > fVar3 && unk_0xC7FF9739199F83C9(iParam0))
	{
		fVar0 = 1f;
	}
	else if (fVar4 > fVar2)
	{
		if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
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
	unk_0x0365EE015603E149(iParam0, fVar0);
}

void func_310(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_311(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_311(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

bool func_311(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_312()
{
	if (func_22(Local_111.f_9))
	{
		if (((Local_111.f_10 != 23 && Local_111.f_10 != 24) && Local_111.f_10 != 21) && Local_111.f_10 != 22)
		{
			unk_0x3801EEE153F0CE7A(5, joaat("player"), iLocal_611);
			unk_0x3801EEE153F0CE7A(5, iLocal_611, joaat("player"));
			if (unk_0x6AAACE62C58880BC(Local_111.f_9))
			{
				unk_0x1FA92C26AB9467D3(Local_111.f_9);
			}
			unk_0x5B1A1DA8A0D20935(Local_111.f_9);
			unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
			unk_0x512E0C109ACECCA1(Local_111.f_9, 0);
			unk_0x53C2D2C8854DB19E(Local_111.f_9);
			unk_0x0E31E88992A376CC(Local_111.f_9, 1);
			unk_0x3E5529EA76D127DA(Local_111.f_9, joaat("weapon_unarmed"), 1);
			unk_0xF48CD04AB4222AD4(Local_111.f_9, 0);
			unk_0x6071B76736765033(Local_111.f_9, 0);
			unk_0xA334EDA2335A13CA(Local_111.f_9, 1, 0);
			unk_0x64277E0EB39C1162(Local_111.f_9, 17, 1);
			unk_0x64277E0EB39C1162(Local_111.f_9, 0, 0);
			unk_0x64277E0EB39C1162(Local_111.f_9, 5, 0);
			if (unk_0x827151D7B70CB853(Local_111.f_9, 1))
			{
				unk_0xF811299AF81DB581(Local_111.f_9, 0, 0);
			}
			iLocal_428 = unk_0x17103F66FBB44C3C();
			Local_111.f_10 = 23;
		}
	}
}

int func_313(int iParam0, struct<3> Param1, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	if (func_22(iParam0))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iParam0, unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0xAFCAE556D7628D59(iParam0, 0, 2))
			{
				if (!unk_0xAFCAE556D7628D59(iParam0, joaat("weapon_stungun"), 0))
				{
					unk_0x92FA219EE3D5E765(iParam0);
					if (unk_0x4621AB9B760B0BB5(iParam0, &iVar0))
					{
						unk_0xE37828692CA291AC(iParam0);
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
								unk_0xE37828692CA291AC(iParam0);
								unk_0x92FA219EE3D5E765(iParam0);
								unk_0x87659527DF5C44B5(iParam0);
								return 1;
								break;
							}
						}
					}
			}
			unk_0xE37828692CA291AC(iParam0);
			unk_0x92FA219EE3D5E765(iParam0);
			unk_0x87659527DF5C44B5(iParam0);
			if (unk_0xFD181DDA4D8D6786(iParam0) < iParam7)
			{
				return 1;
			}
			if (unk_0xBD280C076BC69C97(iParam0))
			{
				return 1;
			}
			if (func_315(iParam0, Param1))
			{
				return 1;
			}
		}
		unk_0x87659527DF5C44B5(iParam0);
		if (bParam5)
		{
			if (func_314(iParam0, Param1, 1112014848, 1084227584))
			{
				return 1;
			}
		}
		if (bParam6)
		{
			if (unk_0x29CF5578FD16B3A2(iParam0, 0))
			{
				return 1;
			}
		}
		if (bParam4)
		{
			if (func_102(iParam0, Param1, 5f))
			{
				if (unk_0xBD280C076BC69C97(iParam0))
				{
					return 1;
				}
				if (func_102(iParam0, Param1, 1f))
				{
					return 1;
				}
			}
			if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				if (unk_0x30281E710B12FB9F(iParam0, unk_0x9F92518438215DD0()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_314(int iParam0, struct<3> Param1, float fParam4, float fParam5)
{
	if (func_102(iParam0, Param1, fParam4))
	{
		if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
		{
			if (unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iParam0, 1), fParam5, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0, struct<3> Param1)
{
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (unk_0xAEB8465A4A43949B(unk_0xCFC72E446B0B3AD7()) >= 0 && unk_0xAEB8465A4A43949B(unk_0xCFC72E446B0B3AD7()) < 500)
		{
			if (func_102(iParam0, Param1, 3.5f) || unk_0x30281E710B12FB9F(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_316(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_317(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_317(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_318(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_318(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		func_310(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_319(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_319(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_311(iVar0))
	{
		func_336();
	}
	if (func_335(iParam1) && unk_0xB3CC729BBAA21637(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
		{
			if (func_330(uParam0, bParam7, bParam9, 0))
			{
				func_327(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_324(iVar0))
				{
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_311(iVar0))
							{
								func_323(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
								{
									func_322(1);
								}
							}
						}
					}
				}
			}
			else if (func_324(iVar0))
			{
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_311(iVar0))
						{
							func_323(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_322(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_311(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_310(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_310(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_310(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_310(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_310(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
				{
					func_310(uParam0, iVar0, 1);
				}
			}
			if (!func_330(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_321(uParam0))
				{
					func_320(uParam0);
				}
			}
		}
	}
	else
	{
		func_310(uParam0, iVar0, 0);
	}
}

void func_320(var uParam0)
{
	if (func_335(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_321(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_322(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_323(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_324(char* sParam0)
{
	if (!func_325(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_311(sParam0)) || func_311("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_322(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_322(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_322(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_325(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		return 0;
	}
	if (func_17(0))
	{
		return 0;
	}
	if (func_326())
	{
		return 0;
	}
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_326()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

void func_327(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		func_310(uParam0, 0, 0);
	}
	if (func_162(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			iVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(iVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_328())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_328()
{
	return func_329(unk_0xCFC72E446B0B3AD7());
}

int func_329(int iParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_330(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_334(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_333(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_333(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_334(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_321(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_334(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_333(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_333(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_334(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (!func_334(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_333(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_333(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_334(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (func_332(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_331(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_331(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_332(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_321(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_325(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_336();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_331(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_325(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_332(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_325(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_333(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_325(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_334(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_325(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_335(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_336()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

void func_337(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		if ((unk_0x17103F66FBB44C3C() - *iParam3) > 500)
		{
			if (unk_0x706657F23AE63630(*uParam0) == 1)
			{
				unk_0x016722B6E0559A9A(*uParam0, 3);
				unk_0x2A8C2BEEA4F7041F(*uParam0, "BLIP_FRIEND");
				if ((unk_0x17103F66FBB44C3C() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x18DF50385FACBD8E() || func_304(sParam1, 0, 0))
					{
						func_306(sParam2, 7500, 0);
					}
				}
				*iParam3 = unk_0x17103F66FBB44C3C();
			}
			else
			{
				unk_0x016722B6E0559A9A(*uParam0, 1);
				unk_0x2A8C2BEEA4F7041F(*uParam0, "BLIP_ENEMY");
				if ((unk_0x17103F66FBB44C3C() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x18DF50385FACBD8E() || func_304(sParam2, 0, 0))
					{
						func_306(sParam1, 7500, 0);
					}
				}
				*iParam3 = unk_0x17103F66FBB44C3C();
			}
		}
	}
	if ((unk_0x17103F66FBB44C3C() - iParam4) > 7500)
	{
		if (func_304(sParam1, 0, 0))
		{
			unk_0xE9EEE16322458D65(sParam1);
		}
		if (func_304(sParam2, 0, 0))
		{
			unk_0xE9EEE16322458D65(sParam2);
		}
	}
}

int func_338(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_405(iParam0))
		{
			iVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
			unk_0xFEE42298F5E238BE(iVar0, iParam2);
			unk_0x15DE80E4F3BF69A9(iVar0, iParam3);
			unk_0xD4916ED85412C8D9(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0xD4916ED85412C8D9(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_339(int iParam0)
{
	unk_0xA50AD6983D49A772(uParam0, iLocal_611);
	unk_0x9001FCB58244C11D(iParam0, 177, 1);
	unk_0x9001FCB58244C11D(iParam0, 116, 1);
	unk_0x9001FCB58244C11D(iParam0, 42, 1);
	unk_0x9001FCB58244C11D(iParam0, 118, 1);
	unk_0x3443A772DB1327D0(iParam0, 10f, 5);
	unk_0x66ECAC609810906D(iParam0, 1);
	unk_0x4A1AC49BA4A747F7(iParam0, 1);
}

void func_340(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param1 - Vector(7f, 7f, 7f) };
	Var3 = { Param1 + Vector(7f, 7f, 7f) };
	if (unk_0xFDD233BBDD8E0FFE(Var0, Var3, 0))
	{
		if (unk_0x349F2C9808B8676A(Var0, Var3, joaat("weapon_grenade"), uParam0, 0))
		{
		}
		else if (unk_0x349F2C9808B8676A(Var0, Var3, joaat("weapon_molotov"), uParam0, 0))
		{
		}
		else if (unk_0x349F2C9808B8676A(Var0, Var3, joaat("weapon_smokegrenade"), uParam0, 0))
		{
		}
		else if (unk_0x349F2C9808B8676A(Var0, Var3, joaat("weapon_bzgas"), uParam0, 0))
		{
		}
		else if (unk_0x349F2C9808B8676A(Var0, Var3, joaat("weapon_stickybomb"), uParam0, 0))
		{
		}
		else if (unk_0x349F2C9808B8676A(Var0, Var3, joaat("weapon_flare"), uParam0, 0))
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

void func_341()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (func_22(Local_111.f_9))
	{
		if (iLocal_131 == 0)
		{
			func_352(&(Local_111.f_9), &bLocal_402);
			if (func_351())
			{
				if (iLocal_396 || iLocal_97 == 7)
				{
					if (bLocal_402)
					{
						unk_0xB08BAA85EDA206FD(Local_111.f_9, func_350(), 1048576000);
						iLocal_131 = 2;
					}
					else
					{
						unk_0xB08BAA85EDA206FD(Local_111.f_9, func_349(), 1048576000);
						iLocal_131 = 1;
					}
				}
			}
		}
		else if (iLocal_131 == 1)
		{
			func_352(&(Local_111.f_9), &bLocal_402);
			if (bLocal_402)
			{
				if (func_351())
				{
					unk_0xB08BAA85EDA206FD(Local_111.f_9, func_350(), 1048576000);
					iLocal_131 = 2;
				}
			}
		}
		if (!unk_0xB4A1AB9DECAE3AE0(unk_0x9F92518438215DD0()))
		{
			switch (Local_111.f_10)
			{
				case 0:
					if (func_102(Local_111.f_9, Local_627, 30f))
					{
						if (unk_0x3C17D9ED0E5F3FCA(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
						{
							unk_0xFB869E37B04C158F(Local_111.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -2f);
						}
						Local_111.f_10 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x3C17D9ED0E5F3FCA(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
					{
						func_36(&Local_284, 1);
						if (!unk_0x6A0619CAF42BCFDE(Local_111.f_9))
						{
							unk_0x18CA21B07F636243(Local_111.f_9, "WORLD_HUMAN_SMOKING", 0, 1);
							unk_0xE7F5E74491BCEA02(Local_111.f_9);
						}
						Local_111.f_10 = 2;
					}
					break;
				
				case 2:
					if (func_102(Local_111.f_9, Local_627, 20f))
					{
						if (!unk_0xD398F07877741739(Local_111.f_9, unk_0x9F92518438215DD0()))
						{
							unk_0x402A96371F34E6D8(Local_111.f_9, unk_0x9F92518438215DD0(), -1, 0, 2);
						}
					}
					else if (unk_0xD398F07877741739(Local_111.f_9, unk_0x9F92518438215DD0()))
					{
						unk_0xD2062A6AC314B85E(Local_111.f_9);
					}
					break;
				
				case 3:
					if (func_110(Local_111.f_18, unk_0x073B65E051D2F03E(250, 500)))
					{
						if (unk_0xFE7B766A3EC52BAD(Local_111.f_9))
						{
							unk_0xE7F5E74491BCEA02(Local_111.f_9);
						}
						unk_0x402A96371F34E6D8(Local_111.f_9, unk_0x9F92518438215DD0(), -1, 0, 2);
						unk_0x23F243BF5B07DA90(Local_111.f_9, unk_0x9F92518438215DD0(), -1);
						Local_111.f_10 = 4;
					}
					break;
				
				case 4:
					if (!func_62(Local_111.f_9, -875674219))
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 3;
					}
					break;
				
				case 5:
					if (!unk_0xD398F07877741739(Local_111.f_9, unk_0x9F92518438215DD0()))
					{
						unk_0x402A96371F34E6D8(Local_111.f_9, unk_0x9F92518438215DD0(), -1, 0, 2);
					}
					unk_0x92641D4778270335(Local_111.f_9, unk_0x9F92518438215DD0(), 20000, 2.5f, 1f, 1073741824, 0);
					unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
					Local_111.f_10 = 6;
					break;
				
				case 6:
					if (!func_102(Local_111.f_9, Local_627, 3.5f))
					{
						if (!func_62(Local_111.f_9, 1227113341))
						{
							Local_111.f_10 = 5;
						}
						else
						{
							unk_0x11C759AD0DE2965B(Local_111.f_9, 1.1f);
						}
					}
					else if (!func_62(Local_111.f_9, -875674219))
					{
						unk_0x23F243BF5B07DA90(Local_111.f_9, unk_0x9F92518438215DD0(), -1);
					}
					break;
				
				case 7:
					if (func_110(Local_111.f_18, unk_0x073B65E051D2F03E(250, 1000)))
					{
						if (unk_0xFE7B766A3EC52BAD(Local_111.f_9))
						{
							unk_0xE7F5E74491BCEA02(Local_111.f_9);
						}
						unk_0xBA21D3FA3B9A9F32(Local_111.f_9, 0);
						unk_0x64277E0EB39C1162(Local_111.f_9, 5, 1);
						unk_0x64277E0EB39C1162(Local_111.f_9, 0, 0);
						unk_0xF78316EFCA911012(Local_111.f_9, unk_0x9F92518438215DD0(), 0, 16);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
						Local_111.f_10 = 8;
					}
					break;
				
				case 8:
					if (!func_62(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 7;
					}
					break;
				
				case 9:
					unk_0x64277E0EB39C1162(Local_111.f_9, 5, 0);
					unk_0x29C0F4A5219281BA(Local_111.f_9, 1);
					if (!unk_0xBD280C076BC69C97(Local_111.f_9))
					{
						unk_0x7C9CAA98EE543E9C(Local_111.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					Local_111.f_10 = 10;
					break;
				
				case 10:
					if (!unk_0xBD280C076BC69C97(Local_111.f_9))
					{
						if (!func_62(Local_111.f_9, 474215631) && !func_62(Local_111.f_9, -1519143300))
						{
							if (!unk_0x5BFFEED2EB6664D5(Local_111.f_9))
							{
								unk_0xFB5ED763175F69A1(Local_111.f_9, "CODE_HUMAN_STAND_COWER");
								unk_0x7D1DC1A952433DD6(Local_111.f_9, -1);
								unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
							}
						}
					}
					break;
				
				case 29:
					unk_0x9DA0F3A686A566A6(Local_111.f_9, &iVar0, 1);
					if (iVar0 == joaat("weapon_unarmed"))
					{
						unk_0x46D3B8FF073CD238(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
					}
					unk_0x64277E0EB39C1162(Local_111.f_9, 0, 0);
					unk_0xBA21D3FA3B9A9F32(Local_111.f_9, 0);
					unk_0x488909512824324E(Local_111.f_9, 15);
					unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
					unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
					Local_111.f_10 = 30;
					break;
				
				case 30:
					if (!func_62(Local_111.f_9, 242628503))
					{
						uVar3 = unk_0x3250987ED5A577C0(5f, 8f);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_431);
						unk_0xB80F1F6FC7B0B392(0, unk_0x9F92518438215DD0(), uVar3, 30f);
						unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), 2000, 0);
						unk_0x3179CCC77CBAB31F(uLocal_431);
						unk_0xC7EBE3C9AC83FAAA(Local_111.f_9, uLocal_431);
						unk_0xCD02E3C29B8253A6(&uLocal_431);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
					}
					break;
				
				case 31:
					if (func_110(Local_111.f_18, unk_0x073B65E051D2F03E(250, 750)))
					{
						unk_0x64277E0EB39C1162(Local_111.f_9, 0, 1);
						unk_0xBA21D3FA3B9A9F32(Local_111.f_9, 0);
						unk_0x488909512824324E(Local_111.f_9, unk_0x073B65E051D2F03E(10, 22));
						unk_0xBB4C2CBE603AE372(Local_111.f_9, unk_0x073B65E051D2F03E(30, 60));
						unk_0x2D6448F975552ABA(Local_111.f_9, 2055493265);
						unk_0x9DA0F3A686A566A6(Local_111.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							unk_0x46D3B8FF073CD238(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
							unk_0x3E5529EA76D127DA(Local_111.f_9, joaat("weapon_pistol"), 0);
						}
						unk_0xF78316EFCA911012(Local_111.f_9, unk_0x9F92518438215DD0(), 0, 16);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
						Local_111.f_10 = 32;
					}
					break;
				
				case 32:
					if (!func_62(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 31;
					}
					break;
				
				case 13:
					if (func_110(Local_111.f_18, unk_0x073B65E051D2F03E(0, 500)))
					{
						if (unk_0xFE7B766A3EC52BAD(Local_111.f_9))
						{
							unk_0x6CF5859E545C671A(Local_111.f_9, Local_627);
						}
						unk_0x9DA0F3A686A566A6(Local_111.f_9, &iVar0, 1);
						if (iVar0 != joaat("weapon_unarmed"))
						{
							unk_0x53C2D2C8854DB19E(Local_111.f_9);
							unk_0x0E31E88992A376CC(Local_111.f_9, 1);
							unk_0x3E5529EA76D127DA(Local_111.f_9, joaat("weapon_unarmed"), 1);
							unk_0xF48CD04AB4222AD4(Local_111.f_9, 0);
						}
						unk_0xA334EDA2335A13CA(Local_111.f_9, 2, 0);
						unk_0xA334EDA2335A13CA(Local_111.f_9, 64, 0);
						unk_0xA334EDA2335A13CA(Local_111.f_9, 128, 0);
						unk_0xA334EDA2335A13CA(Local_111.f_9, 8, 0);
						unk_0xA334EDA2335A13CA(Local_111.f_9, 1, 0);
						unk_0xA334EDA2335A13CA(Local_111.f_9, 32, 0);
						unk_0x64277E0EB39C1162(Local_111.f_9, 5, 0);
						unk_0x64277E0EB39C1162(Local_111.f_9, 17, 1);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_431);
						if (unk_0x827151D7B70CB853(Local_111.f_9, 0))
						{
							unk_0xF811299AF81DB581(0, 0, 64);
						}
						unk_0x722E6B3A5162A6BB(0, unk_0x9F92518438215DD0(), 200f, -1, 0, 0);
						unk_0x3179CCC77CBAB31F(uLocal_431);
						unk_0xC7EBE3C9AC83FAAA(Local_111.f_9, uLocal_431);
						unk_0xCD02E3C29B8253A6(&uLocal_431);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
						unk_0xE8105B7E3908547D(Local_111.f_9, 1);
						Local_111.f_10 = 14;
					}
					break;
				
				case 14:
					if (!func_62(Local_111.f_9, 1805844857) && !unk_0x7E4B3ADE683EE23B(Local_111.f_9))
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 13;
					}
					break;
				
				case 15:
					unk_0xA334EDA2335A13CA(Local_111.f_9, 2, 1);
					unk_0xA334EDA2335A13CA(Local_111.f_9, 64, 0);
					unk_0xA334EDA2335A13CA(Local_111.f_9, 128, 0);
					unk_0xA334EDA2335A13CA(Local_111.f_9, 8, 0);
					unk_0xA334EDA2335A13CA(Local_111.f_9, 1, 0);
					unk_0xA334EDA2335A13CA(Local_111.f_9, 32, 0);
					unk_0x64277E0EB39C1162(Local_111.f_9, 5, 0);
					unk_0x64277E0EB39C1162(Local_111.f_9, 17, 1);
					unk_0xE69F90D298F4217D(Local_111.f_9, 237, 1);
					if (func_7(Local_247[0 /*6*/]))
					{
						if (((!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_247[0 /*6*/], 0) && func_102(Local_247[0 /*6*/], Local_247[0 /*6*/].f_1, 3f)) && func_348(unk_0xE691E4EA6B4440C6(Local_247[0 /*6*/]), Local_247[0 /*6*/].f_4, 20f)) && !func_347(Local_247[0 /*6*/], 2))
						{
							if (unk_0x44E080690DA76A2A(Local_111.f_9, Local_247[0 /*6*/], 0) && !unk_0xBCBBB7902DEFA79B(Local_111.f_9))
							{
								Local_111.f_10 = 16;
							}
							else if (func_110(Local_111.f_18, unk_0x073B65E051D2F03E(250, 350)))
							{
								func_36(&Local_284, 0);
								if (unk_0x3C17D9ED0E5F3FCA(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
								{
									unk_0xFB869E37B04C158F(Local_111.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -4f);
								}
								else if (unk_0xFE7B766A3EC52BAD(Local_111.f_9))
								{
									unk_0x6CF5859E545C671A(Local_111.f_9, Local_627);
								}
								else
								{
									unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
								}
								unk_0x4073360CA020BB84(Local_111.f_9, Local_247[0 /*6*/], 25000, -1, 3f, 8388608, 0);
								unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
								Local_111.f_10 = 16;
							}
						}
						else
						{
							Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
							Local_111.f_10 = 13;
						}
					}
					else
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 13;
					}
					break;
				
				case 16:
					unk_0xE69F90D298F4217D(Local_111.f_9, 237, 1);
					if (!func_7(Local_247[0 /*6*/]))
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 13;
					}
					else if ((((unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_247[0 /*6*/], 1) || unk_0xBCBBB7902DEFA79B(Local_111.f_9)) || !func_102(Local_247[0 /*6*/], Local_247[0 /*6*/].f_1, 3f)) || !func_348(unk_0xE691E4EA6B4440C6(Local_247[0 /*6*/]), Local_247[0 /*6*/].f_4, 20f)) || func_347(Local_247[0 /*6*/], 2))
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 5000);
						Local_111.f_10 = 13;
					}
					else if (unk_0x2A2DBEFFFC03A22F(Local_111.f_9, Local_247[0 /*6*/]))
					{
						Local_111.f_10 = 33;
					}
					else if (!func_62(Local_111.f_9, -1794415470))
					{
						Local_111.f_10 = 15;
					}
					break;
				
				case 17:
					if (func_7(Local_247[0 /*6*/]) && unk_0x2A2DBEFFFC03A22F(Local_111.f_9, Local_247[0 /*6*/]))
					{
						unk_0x7FC0EEAECC1615C3(Local_111.f_9, Local_247[0 /*6*/], unk_0x9F92518438215DD0(), 8, 30f, 786468, 350f, 30f, 1);
						unk_0x9001FCB58244C11D(Local_111.f_9, 173, 0);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
						Local_111.f_10 = 18;
					}
					else if (!unk_0x11CF47CA7B00BE4F(Local_111.f_9))
					{
						Local_111.f_10 = 13;
					}
					break;
				
				case 18:
					if (!func_62(Local_111.f_9, -1273030092))
					{
						Local_111.f_10 = 17;
					}
					break;
				
				case 19:
					unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
					unk_0x64277E0EB39C1162(Local_111.f_9, 5, 0);
					unk_0xFB5ED763175F69A1(Local_111.f_9, "CODE_HUMAN_STAND_COWER");
					unk_0x7D1DC1A952433DD6(Local_111.f_9, -1);
					unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
					Local_111.f_10 = 20;
					break;
				
				case 20:
					if (!unk_0xBD280C076BC69C97(Local_111.f_9))
					{
						if (!func_62(Local_111.f_9, 474215631))
						{
							Local_111.f_10 = 19;
						}
					}
					break;
				
				case 21:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
					{
						Local_111.f_10 = 23;
					}
					else if (unk_0x2AD1D34331F54918(func_344()))
					{
						if (unk_0xE962BD784DD0E442(Local_111.f_9, -1519143300) == 1)
						{
							unk_0x4B8E6C7BA767E85C(Local_111.f_9, 500);
						}
						else
						{
							unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
							unk_0x5B1A1DA8A0D20935(Local_111.f_9);
						}
						if (!unk_0x91690C37B3C4E5FA(Local_111.f_9, func_344()))
						{
							unk_0x78267FAB4E1661CE(Local_111.f_9, func_344());
						}
						unk_0xBB194B71F7231A74(func_344(), 0);
						unk_0x94FBF3A0016C142A(func_344(), 1.5f, 3.5f, -1082130432);
						unk_0xC70FD27B0FCC0545(Local_111.f_9, 0);
						unk_0xACBAA70A109E213A(Local_111.f_9, 1);
						unk_0x28A7497B4909E6A6(Local_111.f_9, 1);
						unk_0xA852C38A5A516356(Local_111.f_9, 1);
						unk_0x651889102FB859B8(Local_111.f_9, 1);
						unk_0x2C32C9708E9BAC80(Local_111.f_9, 0);
						unk_0x6BC2C03DAB147CEC(Local_111.f_9, 1);
						unk_0x9001FCB58244C11D(Local_111.f_9, 167, 1);
						unk_0x9001FCB58244C11D(Local_111.f_9, 118, 1);
						unk_0x69C5E202565B9651(Local_111.f_9, 1);
						unk_0x512E0C109ACECCA1(Local_111.f_9, 1);
						unk_0x9001FCB58244C11D(Local_111.f_9, 42, 1);
						unk_0x04B1E4FA412227A8(Local_111.f_9, 1);
						unk_0x70B8A7B71FA3BA7B(Local_111.f_9, 1);
						unk_0x452D7DCDB5C80860(Local_111.f_9, 2f);
						unk_0xA312EF9D25DFDA9B(Local_111.f_9, 2f);
						unk_0x651889102FB859B8(Local_111.f_9, 1);
						unk_0x9001FCB58244C11D(Local_111.f_9, 118, 1);
						unk_0xA334EDA2335A13CA(Local_111.f_9, 1, 0);
						unk_0x64277E0EB39C1162(Local_111.f_9, 17, 1);
						unk_0x64277E0EB39C1162(Local_111.f_9, 0, 0);
						unk_0xE69F90D298F4217D(Local_111.f_9, 237, 1);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
						Local_111.f_10 = 22;
					}
					break;
				
				case 22:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
					{
						Local_111.f_10 = 23;
					}
					else
					{
						if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
						{
							if (func_343())
							{
								iVar1 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
								if (!unk_0x44E080690DA76A2A(Local_111.f_9, iVar1, 0))
								{
									fVar4 = unk_0x9EF11DECA38804B6(iVar1);
									if (fVar4 < 1.75f && func_102(Local_111.f_9, Local_627, 8f))
									{
										if (!func_62(Local_111.f_9, -1794415470))
										{
											iVar2 = -1;
											if (unk_0xC3B2E5F1A156BA36(iVar1))
											{
												if (unk_0x4A33023BC86AAA7F(iVar1, 0) && unk_0x8C612717241D72F3(Local_111.f_9, iVar1, 0, 1, 0))
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
												unk_0x4073360CA020BB84(Local_111.f_9, iVar1, 25000, iVar2, 2f, 1048577, 0);
											}
										}
										else if (unk_0x11CF47CA7B00BE4F(Local_111.f_9))
										{
											if (unk_0xBD0F8DEB580D2E67(Local_111.f_9) != iVar1)
											{
												unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
											}
										}
									}
									else if (func_62(Local_111.f_9, -1794415470))
									{
										if (!unk_0x11CF47CA7B00BE4F(Local_111.f_9))
										{
											unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
										}
									}
								}
							}
							else if (func_62(Local_111.f_9, -1794415470))
							{
								unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
							}
						}
						else if (func_62(Local_111.f_9, -1794415470))
						{
							unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
						}
						if (unk_0xD398F07877741739(Local_111.f_9, unk_0x9F92518438215DD0()))
						{
							if (unk_0x11CF47CA7B00BE4F(Local_111.f_9))
							{
								unk_0xD2062A6AC314B85E(Local_111.f_9);
							}
						}
						else if (!unk_0x827151D7B70CB853(Local_111.f_9, 1))
						{
							if (!unk_0x11CF47CA7B00BE4F(Local_111.f_9))
							{
								unk_0x402A96371F34E6D8(Local_111.f_9, unk_0x9F92518438215DD0(), -1, 0, 2);
							}
						}
						unk_0xE69F90D298F4217D(Local_111.f_9, 237, 1);
					}
					break;
				
				case 23:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
					{
						if (unk_0x6AAACE62C58880BC(Local_111.f_9))
						{
							unk_0x1FA92C26AB9467D3(Local_111.f_9);
							unk_0x512E0C109ACECCA1(Local_111.f_9, 0);
							unk_0x9001FCB58244C11D(Local_111.f_9, 42, 0);
							unk_0x9001FCB58244C11D(Local_111.f_9, 118, 1);
						}
						unk_0x69C5E202565B9651(Local_111.f_9, 0);
						if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
						{
							if (func_62(Local_111.f_9, -1794415470))
							{
								unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
							}
						}
						if (((!unk_0xBD280C076BC69C97(Local_111.f_9) && !unk_0x29CF5578FD16B3A2(Local_111.f_9, 0)) && !unk_0xBCBBB7902DEFA79B(Local_111.f_9)) && !func_62(Local_111.f_9, -828834893))
						{
							unk_0x402A96371F34E6D8(Local_111.f_9, unk_0x9F92518438215DD0(), -1, 0, 2);
							if ((!func_342(Local_111.f_19, 10) && func_102(Local_111.f_9, Local_627, 50f)) || !func_110(iLocal_428, 2000))
							{
								if (unk_0x827151D7B70CB853(Local_111.f_9, 0))
								{
									unk_0xF811299AF81DB581(Local_111.f_9, 0, 0);
								}
								else if (((!unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6) && !unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), Local_111.f_9)) && !func_345()) || unk_0x5BFFEED2EB6664D5(Local_111.f_9))
								{
									unk_0x23F243BF5B07DA90(Local_111.f_9, unk_0x9F92518438215DD0(), -1);
								}
								else if (unk_0xE962BD784DD0E442(Local_111.f_9, -1519143300) == 1)
								{
									unk_0x4B8E6C7BA767E85C(Local_111.f_9, -1);
								}
								else
								{
									unk_0x481C3FB2324A7D3A(Local_111.f_9, -1, unk_0x9F92518438215DD0(), -1, 0);
								}
							}
							else if (!unk_0x827151D7B70CB853(Local_111.f_9, 0))
							{
								unk_0x23F243BF5B07DA90(Local_111.f_9, unk_0x9F92518438215DD0(), -1);
							}
							unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
							Local_111.f_10 = 24;
						}
					}
					else if (!iLocal_397)
					{
						Local_111.f_10 = 21;
					}
					else
					{
						Local_111.f_10 = 25;
					}
					break;
				
				case 24:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
					{
						if (!func_62(Local_111.f_9, -1519143300))
						{
							if (!func_62(Local_111.f_9, -875674219))
							{
								if (unk_0x827151D7B70CB853(Local_111.f_9, 0))
								{
									if (!func_342(Local_111.f_19, 10) && func_102(Local_111.f_9, Local_627, 50f))
									{
										unk_0xF811299AF81DB581(Local_111.f_9, 0, 0);
										Local_111.f_10 = 23;
									}
								}
								else
								{
									Local_111.f_10 = 23;
								}
							}
							else if (!func_342(Local_111.f_19, 10) && func_102(Local_111.f_9, Local_627, 50f))
							{
								if ((unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), Local_111.f_9)) || func_345())
								{
									Local_111.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_397)
					{
						Local_111.f_10 = 21;
					}
					else
					{
						Local_111.f_10 = 25;
					}
					break;
				
				case 25:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_111.f_10 = 23;
					}
					else
					{
						if (unk_0x6AAACE62C58880BC(Local_111.f_9))
						{
							unk_0x1FA92C26AB9467D3(Local_111.f_9);
							unk_0x512E0C109ACECCA1(Local_111.f_9, 0);
							unk_0x9001FCB58244C11D(Local_111.f_9, 42, 0);
						}
						unk_0x32D18ECD9E6F9BE2(Local_111.f_9);
						unk_0x402A96371F34E6D8(Local_111.f_9, unk_0x9F92518438215DD0(), -1, 0, 2);
						unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
						Local_111.f_10 = 26;
					}
					break;
				
				case 26:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_111.f_10 = 23;
					}
					else if (unk_0x5BFFEED2EB6664D5(Local_111.f_9))
					{
						unk_0x651889102FB859B8(Local_111.f_9, 1);
						unk_0xA852C38A5A516356(Local_111.f_9, 0);
					}
					else if ((!unk_0xBD280C076BC69C97(Local_111.f_9) && !unk_0x11579615465D25B4(Local_111.f_9)) && unk_0x04C9AA01BF03901E(Local_111.f_9))
					{
						if (!unk_0x53C8F92CF78772BF(Local_111.f_9, unk_0x9F92518438215DD0(), 45f))
						{
							if (!func_62(Local_111.f_9, -875674219))
							{
								unk_0x23F243BF5B07DA90(Local_111.f_9, unk_0x9F92518438215DD0(), -1);
							}
						}
					}
					break;
				
				case 27:
					break;
				
				case 28:
					break;
				
				case 33:
					unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
					iLocal_423 = unk_0x17103F66FBB44C3C();
					unk_0x512E0C109ACECCA1(Local_111.f_9, 1);
					Local_111.f_10 = 34;
					break;
				
				case 34:
					break;
				}
			}
	}
}

bool func_342(int iParam0, int iParam1)
{
	return (unk_0xD313E4EFACD47B38() - iParam0) > iParam1;
}

int func_343()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
	}
	else if (unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0()))
	{
		iVar0 = unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0());
	}
	if (!func_7(iVar0))
	{
		return 0;
	}
	else
	{
		if (unk_0x95A70C0B34435CA8(iVar0) == 0)
		{
			return 0;
		}
		iVar1 = unk_0xB6A50C909A8FABC3(iVar0);
		if (unk_0x8D759C5DD707B910(iVar1))
		{
			return 0;
		}
		if (unk_0x1B3D1C08625F69DF(iVar1))
		{
			return 0;
		}
		if (unk_0x0724E81841E756B7(iVar1))
		{
			return 0;
		}
	}
	return 1;
}

var func_344()
{
	return unk_0x0CD9BC7F312ED395(unk_0x2563F6EECD8726D3());
}

int func_345()
{
	if (!iLocal_368)
	{
		return 1;
	}
	if (func_307(sLocal_434, 0))
	{
		return 1;
	}
	if (iLocal_97 != 3 && iLocal_97 != 6)
	{
		return 1;
	}
	if (unk_0x11579615465D25B4(Local_111.f_9) || unk_0xBD280C076BC69C97(Local_111.f_9))
	{
		iLocal_428 = unk_0x17103F66FBB44C3C();
		return 1;
	}
	if (!func_110(iLocal_428, 2000))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (func_22(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
		if (unk_0xD18D82BE9A1A5E43(Var0, fParam4, 1))
		{
			return 1;
		}
		if (func_102(iParam0, Local_627, fParam2))
		{
			if (!func_342(iParam1, 10))
			{
				if (bParam6)
				{
					if (func_112(1, 0, 1))
					{
						if (unk_0xB7B97CFCB999E7C0(unk_0x9F92518438215DD0()) || unk_0xE12C4571691C7ED4(unk_0x9F92518438215DD0()))
						{
							return 1;
						}
					}
				}
				if (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iParam0))
				{
					return 1;
				}
				if (unk_0xA9526B5F78178A02(unk_0xCFC72E446B0B3AD7()))
				{
					if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iParam0))
					{
						return 1;
					}
					if (bParam3)
					{
						if (unk_0xA9526B5F78178A02(unk_0xCFC72E446B0B3AD7()))
						{
							if (unk_0x53C8F92CF78772BF(unk_0x9F92518438215DD0(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
				{
					return 1;
				}
				if (unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 1;
				}
				if (unk_0xB4A1AB9DECAE3AE0(unk_0x9F92518438215DD0()))
				{
					return 1;
				}
			}
		}
		if (unk_0xE99AF5B1B3F0BB7C(iParam0, unk_0x9F92518438215DD0(), 1))
		{
			unk_0x87659527DF5C44B5(iParam0);
			return 1;
		}
		if (unk_0x30281E710B12FB9F(iParam0, unk_0x9F92518438215DD0()) || unk_0xFAFDD5730377D8CC(iParam0, 56))
		{
			if (unk_0xBD280C076BC69C97(iParam0))
			{
				return 1;
			}
		}
		if (unk_0x24E7720869956FA9(-1, Var0, fParam5))
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
		if (unk_0xFDD233BBDD8E0FFE(Var3, Var6, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_7(iParam0))
	{
		iVar0 = 0;
		if (unk_0xD8E4239907299552(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xD8E4239907299552(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xD8E4239907299552(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xD8E4239907299552(iParam0, 5, 0))
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

int func_348(float fParam0, float fParam1, float fParam2)
{
	if (unk_0xE3DAC530D2CCDAE3((fParam0 - fParam1)) <= fParam2)
	{
		return 1;
	}
	return 0;
}

char* func_349()
{
	return "move_m@bail_bond_not_tazered";
}

char* func_350()
{
	return "move_m@bail_bond_tazered";
}

int func_351()
{
	unk_0x682EF355A788351B(func_349());
	unk_0x682EF355A788351B(func_350());
	if (unk_0x18E6A43566D33720(func_349()) && unk_0x18E6A43566D33720(func_350()))
	{
		return 1;
	}
	return 0;
}

void func_352(var uParam0, bool bParam1)
{
	if (unk_0x29CF5578FD16B3A2(*uParam0, 0))
	{
		*bParam1 = 1;
	}
}

void func_353(int iParam0, var uParam1, float fParam2, int iParam3)
{
	if (func_405(iParam0))
	{
		if (func_354(iParam0, unk_0x9F92518438215DD0(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = unk_0xD313E4EFACD47B38();
		}
	}
}

bool func_354(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_360(iParam0, iParam1);
	if (!func_405(iParam0) || !func_405(iParam1))
	{
		if (iVar4 != -1)
		{
			func_10(&(Local_55[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_358(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_357();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_55[iVar4 /*4*/].f_1 = iParam0;
		Local_55[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_355(&(Local_55[iVar4 /*4*/]), Var1, iParam1, &(Local_55[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x17103F66FBB44C3C() - Local_55[iVar4 /*4*/].f_3) < iParam4);
}

int func_355(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_405(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_356(iParam4, iParam7) };
		*uParam0 = unk_0xA14FCCC1B46CB913(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xD200D7E3AEDD340D(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x4E178F5D4155391A(iVar7))
	{
		func_405(iVar7);
		if (unk_0x240654B57CFFBFB3(iVar7) == iParam4)
		{
			if (bLocal_96)
			{
				unk_0x616891521BAA3559(Param1, unk_0x77009B1C011405A9(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x17103F66FBB44C3C();
			return 1;
		}
		return 0;
	}
	if (unk_0x2B1914308D0376C8(iVar7))
	{
		func_405(iVar7);
		if (unk_0x827151D7B70CB853(iParam4, 0))
		{
			if (unk_0x40A2BB73421EA79A(iVar7) == unk_0x1161215F69587BDA(iParam4, 0))
			{
				if (bLocal_96)
				{
					unk_0x616891521BAA3559(Param1, unk_0x77009B1C011405A9(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x17103F66FBB44C3C();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x073B65E051D2F03E(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x77009B1C011405A9(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x77009B1C011405A9(iParam0, 1);
}

int func_357()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		if ((Local_55[iVar0 /*4*/] == 0 && Local_55[iVar0 /*4*/].f_1 == 0) && Local_55[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_358(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_177(unk_0x77009B1C011405A9(iParam1, 1) - unk_0x77009B1C011405A9(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x83A30AB34278DD93(iParam0) };
	}
	else
	{
		Var3 = { func_177(unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 5f, 0f) - unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_359(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_359(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_360(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		if (Local_55[iVar0 /*4*/].f_1 == iParam0 && Local_55[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_361(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (func_405(iParam0))
	{
		if (func_354(unk_0x9F92518438215DD0(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = unk_0xD313E4EFACD47B38();
		}
	}
}

void func_362()
{
	if (func_57(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_624, 100f))
	{
		if (!func_363())
		{
			unk_0x4CE9C0B6BB26989C(&cLocal_618, 8);
			func_64();
			iLocal_400 = 1;
		}
	}
	else if (iLocal_400)
	{
		if (!func_57(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_624, 120f))
		{
			if (unk_0x8C177CD087379EBE())
			{
				unk_0x6308E81AF3BAB9A5();
				iLocal_400 = 0;
			}
		}
		else
		{
			func_64();
		}
	}
	if (iLocal_400)
	{
		if (func_363())
		{
			unk_0x6308E81AF3BAB9A5();
			iLocal_400 = 0;
		}
	}
}

bool func_363()
{
	return Global_87676;
}

void func_364()
{
	func_35();
	func_362();
	if (func_22(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				func_20();
				iLocal_370 = 0;
				iLocal_388 = 0;
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_397)
				{
					if (func_304("BBS_05", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_05");
					}
					func_107(&(Local_111.f_8));
					if (!func_102(Local_111.f_9, Local_627, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = unk_0x17103F66FBB44C3C();
							Local_111.f_10 = 25;
						}
						if (func_342(iLocal_420, 10))
						{
							if (!func_60())
							{
								if (!func_342(iLocal_420, 10))
								{
									if (func_72(&uLocal_446, cLocal_440, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_409 = unk_0x17103F66FBB44C3C();
									}
								}
							}
						}
						iLocal_397 = 1;
					}
					else if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
					{
						if (func_304("BBS_COPS", 0, 0))
						{
							unk_0xE9EEE16322458D65("BBS_COPS");
						}
						iLocal_370 = 1;
						if (!func_60())
						{
							iLocal_99 = 2;
						}
					}
					else if (!iLocal_369)
					{
						if (!func_307(sLocal_434, 1))
						{
							if (func_72(&uLocal_446, cLocal_440, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_369 = 1;
							}
						}
					}
					else if (!iLocal_388)
					{
						if (!func_304("BBS_COPS", 0, 0))
						{
							func_306("BBS_COPS", 7500, 0);
							iLocal_388 = 1;
						}
						else
						{
							func_365();
						}
					}
					else
					{
						func_365();
					}
				}
				else if (func_102(Local_111.f_9, Local_627, 8f))
				{
					if (Local_111.f_10 == 25 || Local_111.f_10 == 26)
					{
						Local_111.f_18 = unk_0x17103F66FBB44C3C();
						Local_111.f_10 = 21;
					}
					iLocal_388 = 0;
					if (func_304("BBS_05", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_05");
					}
					if (!func_60())
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							if (unk_0x073B65E051D2F03E(0, 2) == 0)
							{
								if (func_72(&uLocal_446, cLocal_440, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_409 = unk_0x17103F66FBB44C3C();
								}
							}
							else if (func_72(&uLocal_446, cLocal_439, "BB1_J5", 4, 0, 0, 0))
							{
								iLocal_409 = unk_0x17103F66FBB44C3C();
							}
						}
					}
					iLocal_397 = 0;
				}
				else
				{
					if (func_304("BBS_COPS", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_COPS");
					}
					if (!unk_0x2E6E8D325977B3EC(Local_111.f_8))
					{
						Local_111.f_8 = func_338(Local_111.f_9, 1, 1, 5);
					}
					if (!iLocal_389)
					{
						func_306("BBS_05", 7500, 1);
						iLocal_389 = 1;
					}
				}
				if (func_302(&(Local_111.f_9)))
				{
					iLocal_401 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				if (func_304("BBS_05", 0, 0))
				{
					unk_0xE9EEE16322458D65("BBS_05");
				}
				iLocal_370 = 1;
				func_107(&(Local_111.f_8));
				if (iLocal_401)
				{
					func_122(7);
				}
				else
				{
					if (func_304("BBS_COPS", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_COPS");
					}
					func_122(3);
				}
				break;
			}
	}
}

void func_365()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x18DF50385FACBD8E() && unk_0xF10205C2D28EABD5(203) != 0)
	{
		iVar1 = 1;
	}
	if (func_22(Local_111.f_9))
	{
		if (func_60())
		{
			iLocal_409 = unk_0x17103F66FBB44C3C();
		}
		if (!iLocal_377)
		{
			if (func_72(&uLocal_446, cLocal_439, "BB1_J6", 4, 0, 0, 0))
			{
				iLocal_377 = 1;
			}
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0x827151D7B70CB853(Local_111.f_9, 0) && unk_0x1161215F69587BDA(Local_111.f_9, 0) == iVar0)
			{
				if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
				{
					if (!iLocal_395)
					{
						if (!func_60())
						{
							iLocal_408 = unk_0x17103F66FBB44C3C();
							iLocal_395 = 1;
						}
					}
					else if (!iLocal_371[0])
					{
						if ((unk_0x17103F66FBB44C3C() - iLocal_408) > 7500)
						{
							func_368(0);
						}
					}
					else if (!iLocal_371[1])
					{
						if ((unk_0x17103F66FBB44C3C() - iLocal_408) > 10000)
						{
							func_368(1);
						}
					}
					else if (!iLocal_371[2])
					{
						if ((unk_0x17103F66FBB44C3C() - iLocal_408) > 10000)
						{
							func_368(2);
						}
					}
					if (unk_0x746960881FB19A89(iVar0))
					{
						if (unk_0x9EF11DECA38804B6(iVar0) < 0.5f)
						{
							if (!iLocal_382)
							{
								if (!func_60())
								{
									if (func_110(iLocal_426, 3500))
									{
										if (func_72(&uLocal_446, cLocal_439, "BB1_STOP", 4, 0, 0, 0))
										{
											iLocal_382 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_382)
						{
							if (!func_307("BB1_STOP", 1))
							{
								iLocal_426 = unk_0x17103F66FBB44C3C();
							}
						}
						else
						{
							iLocal_426 = unk_0x17103F66FBB44C3C();
						}
					}
				}
				else if (!iLocal_370)
				{
					if (func_72(&uLocal_446, cLocal_439, "BB1_J9", 4, 0, 0, 0))
					{
						iLocal_370 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_390)
				{
					if (!func_343())
					{
						func_323("BBS_VH1", -1);
						iLocal_390 = 1;
					}
				}
				iLocal_426 = unk_0x17103F66FBB44C3C();
			}
			iLocal_378 = 0;
			iLocal_379 = 0;
		}
		else
		{
			iLocal_426 = unk_0x17103F66FBB44C3C();
			iLocal_382 = 0;
			if (unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0()))
			{
				iVar0 = unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0());
				if (!iLocal_378)
				{
					if (func_343())
					{
						if (!unk_0x827151D7B70CB853(Local_111.f_9, 0))
						{
							if (!func_307("BBC_T6", 1))
							{
								if (func_72(&uLocal_446, cLocal_440, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_378 = 1;
								}
							}
						}
						func_367("BBS_VH1", 1);
					}
					else if (!func_307("BBC_T8", 1) && !func_307("BB1_WTF", 1))
					{
						if (unk_0x073B65E051D2F03E(0, 11) < 5)
						{
							if (func_72(&uLocal_446, cLocal_440, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_378 = 1;
							}
						}
						else if (func_72(&uLocal_446, cLocal_439, "BB1_WTF", 4, iVar1, 0, 0))
						{
							iLocal_378 = 1;
						}
					}
				}
				else if (!iLocal_381)
				{
					if (func_366(&iVar0))
					{
						if ((!func_307("BB1_JACK", 1) && !func_307("BBC_T6", 1)) && !func_307("BBC_T8", 1))
						{
							if (func_72(&uLocal_446, cLocal_439, "BB1_JACK", 4, iVar1, 0, 0))
							{
								iLocal_381 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_378 = 0;
				if (unk_0x827151D7B70CB853(Local_111.f_9, 0))
				{
					if (!iLocal_379)
					{
						if (!func_307("BBC_T7", 1) && !func_307("BB1_OUT", 1))
						{
							if (unk_0x073B65E051D2F03E(0, 11) < 5)
							{
								if (func_72(&uLocal_446, cLocal_440, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_379 = 1;
								}
							}
							else if (func_72(&uLocal_446, cLocal_439, "BB1_OUT", 4, iVar1, 0, 0))
							{
								iLocal_379 = 1;
							}
						}
					}
				}
				else if (Local_111.f_10 == 24 && func_62(Local_111.f_9, -1519143300))
				{
					if (func_102(Local_111.f_9, Local_627, 25f))
					{
						if (!func_307("BB1_J10", 1))
						{
							if (func_110(iLocal_410, unk_0x073B65E051D2F03E(2500, 5000)))
							{
								if (func_60())
								{
									func_3();
								}
								if (func_72(&uLocal_446, cLocal_439, "BB1_J10", 4, 0, 0, 0))
								{
									iLocal_410 = unk_0x17103F66FBB44C3C();
								}
							}
						}
						else
						{
							iLocal_410 = unk_0x17103F66FBB44C3C();
						}
					}
				}
				else
				{
					iLocal_410 = 0;
					if (!iLocal_370)
					{
						if (func_72(&uLocal_446, cLocal_439, "BB1_J9", 4, 0, 0, 0))
						{
							iLocal_409 = unk_0x17103F66FBB44C3C();
							iLocal_370 = 1;
						}
					}
					if (!func_60())
					{
						if (func_110(iLocal_409, unk_0x073B65E051D2F03E(3000, 6000)))
						{
							if (!func_102(Local_111.f_9, Local_627, 20f))
							{
								if (func_72(&uLocal_446, cLocal_439, "BB1_J4", 4, 0, 0, 0))
								{
									iLocal_409 = unk_0x17103F66FBB44C3C();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_366(int iParam0)
{
	int iVar0;
	
	if (func_7(*iParam0))
	{
		if (unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()))
		{
			return 1;
		}
		iVar0 = unk_0xEBF55D9C1033150C(unk_0x9F92518438215DD0());
		if (func_405(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_367(char* sParam0, int iParam1)
{
	if (func_311(sParam0))
	{
		unk_0x35611EEE7A1FFEDB(iParam1);
	}
}

void func_368(int iParam0)
{
	if (!iLocal_371[iParam0])
	{
		if (func_72(&uLocal_446, cLocal_439, sLocal_435[iParam0], 4, 0, 0, 0))
		{
			iLocal_371[iParam0] = 1;
			iLocal_395 = 0;
			iLocal_408 = 0;
			iLocal_377 = 1;
		}
	}
}

void func_369()
{
	func_35();
	func_362();
	if (func_22(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_397)
				{
					if (func_304("BBS_05", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_05");
					}
					func_107(&(Local_111.f_8));
					if (!func_102(Local_111.f_9, Local_627, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = unk_0x17103F66FBB44C3C();
							Local_111.f_10 = 25;
						}
						if (func_342(iLocal_420, 10))
						{
							if (!func_60())
							{
								if (!func_342(iLocal_420, 10))
								{
									if (func_72(&uLocal_446, cLocal_440, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_409 = unk_0x17103F66FBB44C3C();
									}
								}
							}
						}
						iLocal_369 = 1;
						iLocal_397 = 1;
					}
					else if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
					{
						unk_0x03B4804F126A64FF(unk_0xCFC72E446B0B3AD7());
						iLocal_369 = 1;
						iLocal_99 = 2;
					}
					else
					{
						if (!unk_0x2E6E8D325977B3EC(uLocal_403))
						{
							if (iLocal_385)
							{
								uLocal_403 = func_374(Local_624, 5, 1);
							}
						}
						if (!iLocal_369)
						{
							if (!func_307(sLocal_434, 1))
							{
								if (func_72(&uLocal_446, cLocal_440, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_369 = 1;
								}
							}
						}
						else if (!iLocal_385)
						{
							if (!func_60())
							{
								func_306("BBS_DROP", 7500, 0);
								iLocal_409 = unk_0x17103F66FBB44C3C();
								iLocal_385 = 1;
							}
						}
						else
						{
							func_365();
							func_372(&Local_335, Local_627, &iLocal_411, 5000, 1101004800);
						}
						if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_624, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_99 = 2;
						}
						if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
						{
							if (func_102(unk_0x9F92518438215DD0(), Local_624, 6.5f))
							{
								iLocal_99 = 2;
							}
						}
						else if (func_102(unk_0x9F92518438215DD0(), Local_624, 2.5f))
						{
							iLocal_99 = 2;
						}
					}
				}
				else
				{
					func_107(&uLocal_403);
					if (func_304("BBS_DROP", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_DROP");
					}
					if (func_102(Local_111.f_9, Local_627, 8f))
					{
						if (Local_111.f_10 == 25 || Local_111.f_10 == 26)
						{
							Local_111.f_18 = unk_0x17103F66FBB44C3C();
							Local_111.f_10 = 21;
						}
						if (func_304("BBS_05", 0, 0))
						{
							unk_0xE9EEE16322458D65("BBS_05");
						}
						if (!func_60())
						{
							if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
							{
								if (unk_0x073B65E051D2F03E(0, 2) == 0)
								{
									if (func_72(&uLocal_446, cLocal_440, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_409 = unk_0x17103F66FBB44C3C();
									}
								}
								else if (func_72(&uLocal_446, cLocal_439, "BB1_J5", 4, 0, 0, 0))
								{
									iLocal_409 = unk_0x17103F66FBB44C3C();
								}
							}
						}
						iLocal_397 = 0;
					}
					else
					{
						if (!unk_0x2E6E8D325977B3EC(Local_111.f_8))
						{
							Local_111.f_8 = func_338(Local_111.f_9, 1, 1, 5);
						}
						if (!iLocal_389)
						{
							func_306("BBS_05", 7500, 1);
							iLocal_389 = 1;
						}
					}
				}
				if (!bLocal_394)
				{
					bLocal_394 = func_370(Local_627, Local_102, 180f);
				}
				if (func_302(&(Local_111.f_9)))
				{
					iLocal_401 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				func_107(&uLocal_403);
				if (func_304("BBS_DROP", 0, 0))
				{
					unk_0xE9EEE16322458D65("BBS_DROP");
				}
				if (iLocal_401)
				{
					func_122(7);
				}
				else if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
				{
					func_122(6);
				}
				else
				{
					func_107(&(Local_111.f_8));
					if (func_304("BBS_05", 0, 0))
					{
						unk_0xE9EEE16322458D65("BBS_05");
					}
					if (!bLocal_394)
					{
						bLocal_394 = func_370(Local_627, Local_102, 0f);
					}
					func_122(4);
				}
				break;
			}
	}
}

int func_370(struct<3> Param0, struct<3> Param3, float fParam6)
{
	int iVar0;
	
	if (!func_371(Param0, Param3, fParam6))
	{
		unk_0x2250E32CE864C09F(3, 1);
		unk_0x2250E32CE864C09F(5, 1);
		if (iLocal_419 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_419 - 1))
			{
				func_41(&(Local_132[iVar0 /*19*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_415 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_415 - 1))
			{
				func_91(&(Local_247[iVar0 /*6*/]));
				iVar0++;
			}
		}
		func_37(&Local_284, 0);
		if (iLocal_414 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_414 - 1))
			{
				func_37(&(Local_290[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_417 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_417 - 1))
			{
				func_93(&(Local_327[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_371(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_372(int iParam0, struct<3> Param1, int iParam4, int iParam5, float fParam6)
{
	struct<3> Var0;
	var uVar3;
	char[] cVar168[8];
	char* sVar169;
	
	if (func_22(*iParam0))
	{
		if (!func_60())
		{
			Var0 = { unk_0x77009B1C011405A9(*iParam0, 1) };
			if (unk_0xB7A628320EFF8E47(Param1, Var0) < (fParam6 * fParam6))
			{
				if (unk_0x17103F66FBB44C3C() - *iParam4) > (iParam5 + unk_0x073B65E051D2F03E(0, 2000))
				{
					uVar3 = 16;
					func_88(&uVar3, 4, *iParam0, "MAUDE", 0, 1);
					cVar168 = "BBCAUD";
					sVar169 = "BBC_loiter";
					func_373(&uVar3, cVar168, sVar169, 4, 0, 0);
					*iParam4 = unk_0x17103F66FBB44C3C();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_373(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xEDB9A377CD8B7F03(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

int func_374(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0x15DE80E4F3BF69A9(iVar0, iParam3);
	unk_0xD4916ED85412C8D9(iVar0, 1f);
	unk_0xD8EEE815F0120FCE(iVar0, iParam4);
	return iVar0;
}

void func_375()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_22(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				if (Local_111.f_10 != 15 && Local_111.f_10 != 16)
				{
					Local_111.f_18 = unk_0x17103F66FBB44C3C();
					Local_111.f_10 = 15;
				}
				if (func_22(Local_111.f_9))
				{
					if (!unk_0x2E6E8D325977B3EC(Local_111.f_8))
					{
						Local_111.f_8 = func_338(Local_111.f_9, 1, 0, 5);
					}
					unk_0x87659527DF5C44B5(Local_111.f_9);
				}
				unk_0xA65F8C84413BA46B(2);
				func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_396)
				{
					func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					func_316(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_422 == -1)
						{
							iLocal_422 = unk_0x17103F66FBB44C3C();
						}
						if (iLocal_421 == -1)
						{
							iLocal_421 = unk_0x17103F66FBB44C3C();
						}
						else if (func_110(iLocal_421, 5000))
						{
							bVar0 = true;
						}
						if (func_313(Local_111.f_9, Local_627, bVar0, 0, 1, 170))
						{
							func_312();
							Local_111.f_17 = unk_0x17103F66FBB44C3C();
							func_310(&uLocal_43, 0, 0);
							iLocal_396 = 1;
						}
						else
						{
							if (!func_60())
							{
								if (func_110(iLocal_409, unk_0x073B65E051D2F03E(5000, 12000)))
								{
									if (func_102(Local_111.f_9, Local_627, 30f))
									{
										if (unk_0x7E4B3ADE683EE23B(Local_111.f_9))
										{
											if (unk_0x073B65E051D2F03E(0, 101) < 30)
											{
												if (func_72(&uLocal_446, cLocal_440, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_409 = unk_0x17103F66FBB44C3C();
												}
											}
											else if (func_72(&uLocal_446, cLocal_439, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_409 = unk_0x17103F66FBB44C3C();
											}
										}
									}
								}
							}
							else
							{
								iLocal_409 = unk_0x17103F66FBB44C3C();
							}
							func_309(Local_111.f_9, Local_627, iLocal_422, 925353388);
						}
					}
					else
					{
						if (Local_111.f_10 == 15 || Local_111.f_10 == 16)
						{
							if (!iLocal_367)
							{
								if (!func_60())
								{
									if (func_102(Local_111.f_9, Local_627, 30f))
									{
										if (func_72(&uLocal_446, cLocal_439, sLocal_433, 4, 0, 0, 0))
										{
											Local_111.f_17 = unk_0x17103F66FBB44C3C();
											iLocal_409 = unk_0x17103F66FBB44C3C();
											iLocal_367 = 1;
										}
									}
								}
							}
							if (func_313(Local_111.f_9, Local_627, bVar0, 0, 1, 170))
							{
								func_312();
								Local_111.f_17 = unk_0x17103F66FBB44C3C();
								func_310(&uLocal_43, 0, 0);
								iLocal_396 = 1;
							}
						}
						if (func_7(Local_247[0 /*6*/]))
						{
							if ((Local_111.f_10 == 34 || Local_111.f_10 == 17) || Local_111.f_10 == 18)
							{
								if (func_380(Local_111.f_9, Local_247[0 /*6*/], &iLocal_423, 2))
								{
									if (!func_60())
									{
										func_312();
										Local_111.f_17 = unk_0x17103F66FBB44C3C();
										func_310(&uLocal_43, 0, 0);
										iLocal_396 = 1;
									}
								}
								else
								{
									if (func_379(Local_111.f_9, Local_247[0 /*6*/], Local_247[0 /*6*/].f_5, &Local_630, &iLocal_407, iLocal_418))
									{
										if (Local_111.f_10 == 34)
										{
											Local_111.f_10 = 17;
										}
									}
									func_378(Local_111.f_8, Local_111.f_9, 150f, 0.65f, 0);
									func_377(Local_111.f_9, Local_247[0 /*6*/], Local_627);
								}
							}
						}
						else
						{
							func_312();
							Local_111.f_17 = unk_0x17103F66FBB44C3C();
							func_310(&uLocal_43, 0, 0);
							iLocal_396 = 1;
						}
					}
				}
				else
				{
					func_312();
					if (!func_102(Local_111.f_9, Local_627, 10f))
					{
						if (!iLocal_386)
						{
							if (!func_307(sLocal_434, 1))
							{
								func_305(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, &iLocal_413, 1, 1);
								iLocal_386 = 1;
							}
						}
						else
						{
							func_337(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, iLocal_413, 1);
						}
					}
					else
					{
						if (!iLocal_368)
						{
							if (!unk_0xBD280C076BC69C97(Local_111.f_9) && !unk_0x827151D7B70CB853(Local_111.f_9, 0))
							{
								if (func_304("BBS_APPSUS", 0, 0) || func_304("BBS_APPSUS2", 0, 0))
								{
									unk_0xDA31FF1629FE9693();
								}
								if (!func_60())
								{
									func_3();
								}
								if (func_72(&uLocal_446, cLocal_439, sLocal_434, 4, 0, 0, 0))
								{
									iLocal_368 = 1;
								}
							}
						}
						else if (!func_60())
						{
							iLocal_99 = 2;
						}
						func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					}
					if (func_302(&(Local_111.f_9)))
					{
						iLocal_401 = 1;
						iLocal_99 = 2;
					}
				}
				break;
			
			case 2:
				if (func_304("BBS_APPSUS", 0, 0) || func_304("BBS_APPSUS2", 0, 0))
				{
					unk_0xDA31FF1629FE9693();
				}
				unk_0xA65F8C84413BA46B(0);
				iLocal_368 = 1;
				unk_0x3801EEE153F0CE7A(5, joaat("player"), iLocal_611);
				unk_0x3801EEE153F0CE7A(5, iLocal_611, joaat("player"));
				func_107(&(Local_111.f_8));
				func_312();
				Local_111.f_17 = unk_0x17103F66FBB44C3C();
				func_310(&uLocal_43, 0, 0);
				func_376(1, &uLocal_430);
				if (iLocal_401)
				{
					func_122(7);
				}
				else
				{
					func_122(3);
				}
				break;
			}
	}
}

void func_376(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x676E460800A9E1B7(Var0, Var3, 0, 1, 1, 1);
		unk_0x24EA77E513B7621A(Var0, Var3);
		unk_0xCF023D488D3EAE4D(Var0, Var3, 0, 1);
		unk_0x03B100B01B4CC779(Var0, Var3);
		unk_0xE60172AD5C95C90B(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0xFC90BEDEE248C76D(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0xD643E324F7E6A17B(*uParam1, 0);
		unk_0x69A5FB1BDF9C17C4();
		unk_0xCF023D488D3EAE4D(Var0, Var3, 1, 1);
		unk_0xA2CF1D8BA5F3BD69(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

void func_377(int iParam0, int iParam1, struct<3> Param2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 64f;
	fVar2 = 1600f;
	fVar3 = 4900f;
	fVar4 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iParam0, 1), Param2);
	if (fVar4 > fVar3 && !unk_0x0FF9FE2CB115CFB9(iParam1))
	{
		fVar0 = 12f;
	}
	else if (fVar4 > fVar2)
	{
		if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
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
	if (unk_0xB5BBEB12C77EE430(iParam1, -1) == iParam0)
	{
		unk_0xB7E3E890C2B1B305(iParam0, fVar0);
	}
}

void func_378(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		if ((unk_0x746960881FB19A89(iParam1) && unk_0x746960881FB19A89(unk_0x9F92518438215DD0())) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x2B1914308D0376C8(iParam1))
			{
				if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam1), 0))
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam1, 1), 1);
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
						unk_0xA0BFA3F6C43DF44B(uParam0, 1);
						unk_0xFBF7E9E330FE936E(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA0BFA3F6C43DF44B(uParam0, 0);
						unk_0xFBF7E9E330FE936E(uParam0, 255);
					}
				}
			}
			else if (unk_0x4E178F5D4155391A(iParam1))
			{
				if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam1)))
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam1, 1), 1);
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
						unk_0xA0BFA3F6C43DF44B(uParam0, 1);
						unk_0xFBF7E9E330FE936E(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA0BFA3F6C43DF44B(uParam0, 0);
						unk_0xFBF7E9E330FE936E(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_379(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	if (iLocal_407 >= iParam5)
	{
		return 1;
	}
	if (!func_102(iParam1, *(uParam3[*iParam4 /*3*/]), 15f))
	{
		if (!func_62(iParam0, -1817882002) && !func_62(iParam0, -72074166))
		{
			if (iLocal_407 < 7)
			{
				unk_0xC96425701AF2C9C4(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, uParam2, 786468, 0f, 2f);
			}
			else
			{
				unk_0xCA4958DF32FAD2BF(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
			}
		}
	}
	else
	{
		*iParam4++;
		if (iLocal_407 >= iParam5)
		{
			return 1;
		}
		else if (iLocal_407 < 7)
		{
			unk_0xC96425701AF2C9C4(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, uParam2, 786468, 0f, 2f);
		}
		else
		{
			unk_0xCA4958DF32FAD2BF(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_22(iParam0))
	{
		if (func_7(iParam1))
		{
			if (func_347(iParam1, iParam3))
			{
				unk_0xF89257C590FF140F(iParam0, iParam1, 4, 2000);
				return (1 || unk_0xFD181DDA4D8D6786(iParam1) < 150);
				unk_0x6FD45FA39DD18625(iParam1, 0, 1);
				if (unk_0x9D878480FA8925BB(iParam1) > 100f)
				{
					unk_0x8063FF52148C1749(iParam1, 100f);
				}
				unk_0xEBEEAB881149E0EA(iParam1, 1);
				return 1;
			}
			else if (!unk_0x44E080690DA76A2A(iParam0, iParam1, 0))
			{
				return 1;
			}
			else if (unk_0x29CF5578FD16B3A2(iParam0, 0))
			{
				return 1;
			}
			else if (((unk_0xED6198B6F71F1E6F(iParam1, 2, 10000) || unk_0xED6198B6F71F1E6F(iParam1, 3, 20000)) || unk_0xED6198B6F71F1E6F(iParam1, 0, 10000)) || unk_0xED6198B6F71F1E6F(iParam1, 1, 10000))
			{
				return 1;
			}
			if (unk_0x0A93DB64A1052EB6(iParam1))
			{
				if (func_110(*iParam2, 3500))
				{
					return 1;
				}
			}
			else
			{
				*iParam2 = unk_0x17103F66FBB44C3C();
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_381()
{
	if (func_22(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 1);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				if (!unk_0x2E6E8D325977B3EC(Local_111.f_8))
				{
					Local_111.f_8 = func_338(Local_111.f_9, 1, 0, 5);
				}
				func_305(&(Local_111.f_8), "", "", &iLocal_412, &iLocal_413, 1, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				switch (iLocal_100)
				{
					case 2:
						if (!iLocal_376)
						{
							if (func_60())
							{
								func_3();
							}
							if (func_72(&uLocal_446, cLocal_440, "BBC_T14", 4, 0, 0, 0))
							{
								Local_111.f_17 = unk_0x17103F66FBB44C3C();
								iLocal_376 = 1;
							}
							func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						}
						else if (!iLocal_387)
						{
							if (!func_307("BBC_T14", 1))
							{
								func_305(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_412, &iLocal_413, 1, 1);
								iLocal_387 = 1;
							}
						}
						else
						{
							func_337(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_412, iLocal_413, 1);
							if (func_102(Local_111.f_9, Local_627, 25f) && func_384(Local_111.f_9, Local_627, 10f))
							{
								if (unk_0x5A93BC8FB7B95A04(unk_0x9F92518438215DD0()) || unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0))
								{
									if (func_383(&(Local_111.f_19)))
									{
										iLocal_100 = 1;
										iLocal_380 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 50000);
											Local_111.f_10 = 3;
										}
									}
									else if (!unk_0xB4A1AB9DECAE3AE0(unk_0x9F92518438215DD0()) && unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_111.f_9))
									{
										iLocal_100 = 1;
										iLocal_380 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
								else if (func_382(Local_111.f_9, iLocal_420, 0, 1103626240, 1086324736))
								{
									iLocal_100 = 0;
								}
								else if (func_102(Local_111.f_9, Local_627, 5f))
								{
									iLocal_100 = 0;
								}
								else if (func_383(&(Local_111.f_19)))
								{
									if (func_102(Local_111.f_9, Local_627, (25f - 1.5f)))
									{
										iLocal_100 = 1;
										iLocal_380 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
							}
						}
						if (func_346(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_380)
						{
							if (func_304("BBS_APHEND", 0, 0) || func_304("BBS_APHEND2", 0, 0))
							{
								unk_0xDA31FF1629FE9693();
							}
							if (func_60())
							{
								func_3();
							}
							if (func_72(&uLocal_446, cLocal_439, "BB1_J2", 4, 0, 0, 0))
							{
								Local_111.f_17 = unk_0x17103F66FBB44C3C();
								iLocal_409 = unk_0x17103F66FBB44C3C();
								iLocal_380 = 1;
							}
							func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						}
						else if (!iLocal_375)
						{
							if (!func_307("BBC_T14", 1) && !func_307("BB1_J2", 1))
							{
								if (func_304("BBS_APHEND", 0, 0) || func_304("BBS_APHEND2", 0, 0))
								{
									unk_0xDA31FF1629FE9693();
								}
								if (func_60())
								{
									func_3();
								}
								if (func_72(&uLocal_446, cLocal_440, "BBC_T1", 4, 0, 0, 0))
								{
									Local_111.f_17 = unk_0x17103F66FBB44C3C();
									iLocal_375 = 1;
								}
								else if (iLocal_100 == 1)
								{
									if (func_110(iLocal_409, 1250))
									{
										Local_111.f_17 = (unk_0x17103F66FBB44C3C() - 3000);
										iLocal_375 = 1;
									}
								}
							}
							else
							{
								iLocal_409 = unk_0x17103F66FBB44C3C();
							}
							func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						}
						else if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
						{
							if (func_110(Local_111.f_17, 500))
							{
								Local_111.f_18 = unk_0x17103F66FBB44C3C();
								Local_111.f_10 = 3;
								iLocal_99 = 2;
							}
						}
						else
						{
							iLocal_99 = 2;
						}
						if (func_346(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 3:
						func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						iLocal_99 = 2;
						break;
				}
				break;
			
			case 2:
				if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
				{
					Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 50000);
					Local_111.f_10 = 3;
				}
				Local_111.f_17 = unk_0x17103F66FBB44C3C();
				if (func_304("BBS_APHEND", 0, 0) || func_304("BBS_APHEND2", 0, 0))
				{
					unk_0xDA31FF1629FE9693();
				}
				func_337(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
				iLocal_412 = unk_0x17103F66FBB44C3C();
				iLocal_413 = unk_0x17103F66FBB44C3C();
				func_122(2);
				break;
			}
	}
}

int func_382(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)
{
	if (func_405(iParam0))
	{
		if (!func_342(iParam1, 10))
		{
			if (bParam2)
			{
				if (!func_102(Local_111.f_9, Local_627, fParam3))
				{
					return 0;
				}
				if (!func_384(iParam0, Local_627, fParam4))
				{
					return 0;
				}
			}
			if (unk_0x0FF9FE2CB115CFB9(iParam0))
			{
				if (!unk_0xC7FF9739199F83C9(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_383(var uParam0)
{
	if (!func_342(*uParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	fVar3 = unk_0xE3DAC530D2CCDAE3((Var0.f_2 - Param1.f_2));
	if (fVar3 <= fParam4)
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	switch (iLocal_99)
	{
		case 0:
			if (bLocal_391)
			{
				if (func_406(0) && !Global_96405)
				{
					func_23(800, 0);
				}
			}
			if (!Global_96405)
			{
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			func_386(&Local_102, &uLocal_446);
			if (func_22(Local_111.f_9))
			{
				func_361(Local_111.f_9, &iLocal_420, 1126825984, 1);
				func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
				func_341();
				if (func_102(Local_111.f_9, Local_627, 25f) && func_384(Local_111.f_9, Local_627, 10f))
				{
					if (unk_0x5A93BC8FB7B95A04(unk_0x9F92518438215DD0()) || unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0))
					{
						if (func_383(&(Local_111.f_19)))
						{
							iLocal_100 = 1;
							iLocal_99 = 2;
						}
						else if (!unk_0xB4A1AB9DECAE3AE0(unk_0x9F92518438215DD0()) && unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_111.f_9))
						{
							iLocal_100 = 1;
							iLocal_99 = 2;
						}
					}
					else if (func_382(Local_111.f_9, iLocal_420, 0, 1103626240, 1086324736))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (func_102(Local_111.f_9, Local_627, 5f))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (func_383(&(Local_111.f_19)))
					{
						if (func_102(Local_111.f_9, Local_627, (25f - 1.5f)))
						{
							iLocal_100 = 1;
							iLocal_99 = 2;
						}
					}
				}
				else if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), Local_111.f_9) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), Local_111.f_9))
				{
					iLocal_100 = 2;
					iLocal_99 = 2;
				}
				if (func_346(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_100 = 3;
					iLocal_99 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_100 == 3)
			{
				func_305(&(Local_111.f_8), "", "", &iLocal_412, &iLocal_413, 1, 0);
				func_122(2);
			}
			else
			{
				if (iLocal_100 == 1)
				{
					iLocal_380 = 0;
					if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
					{
						Local_111.f_18 = (unk_0x17103F66FBB44C3C() - 50000);
						Local_111.f_10 = 3;
					}
				}
				func_122(1);
			}
			break;
	}
}

void func_386(var uParam0, var uParam1)
{
	if (!uParam0->f_7)
	{
		if (func_389(26, func_391(uParam0->f_4), 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if ((!func_60() && !unk_0xE7C093C63744E17E(unk_0x9F92518438215DD0())) && !unk_0x18DF50385FACBD8E())
				{
					func_88(uParam1, 2, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
					if (func_73(uParam1, func_388(uParam0->f_4), func_387(uParam0->f_4), 4, 0, 0, 0))
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

char* func_387(int iParam0)
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

char* func_388(int iParam0)
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

int func_389(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_390(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = Global_35970[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_45154[iVar0 /*203*/].f_9)
	{
		if (Global_45154[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
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
		if ((Global_44792[iVar1 /*120*/].f_86[iVar3] && Global_44792[iVar1 /*120*/].f_18[iVar3] == Global_45154[iVar0 /*203*/].f_1) && Global_44792[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_44792[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return 0;
}

int func_390(int iParam0)
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
		if (Global_45154[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45154[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45154[iVar0 /*203*/].f_1;
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

int func_391(int iParam0)
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

void func_392()
{
	if (bLocal_391)
	{
		if (((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5) && iLocal_97 != 8)
		{
			if (unk_0x746960881FB19A89(Local_111.f_9))
			{
				if (unk_0x0BA451447C3B1A8D(Local_111.f_9) || unk_0x3E0478C40AB5B38D(Local_111.f_9))
				{
					func_122(8);
				}
			}
		}
	}
}

void func_393()
{
	if (bLocal_391)
	{
		if ((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5)
		{
			func_394();
			if (iLocal_101 != 0)
			{
				if (iLocal_101 == 1)
				{
					Global_96070 = 0;
					func_517();
				}
				else
				{
					func_122(9);
				}
			}
		}
	}
}

void func_394()
{
	if (unk_0x746960881FB19A89(Local_335.f_0))
	{
		if (unk_0x0BA451447C3B1A8D(Local_335.f_0) || unk_0x3E0478C40AB5B38D(Local_335.f_0))
		{
			iLocal_101 = 3;
			return;
		}
		if (iLocal_101 == 4)
		{
			return;
		}
		if (func_395(0))
		{
			iLocal_101 = 4;
			return;
		}
	}
	if (iLocal_101 == 2 || iLocal_101 == 1)
	{
		return;
	}
	if (iLocal_97 == 0)
	{
		if (!unk_0xB7A628320EFF8E47(Local_627, Local_102) <= ((Local_102.f_3 + 25f) * (Local_102.f_3 + 25f)))
		{
			if (unk_0xC7FF9739199F83C9(Local_111.f_9))
			{
				iLocal_101 = 1;
				return;
			}
		}
	}
	else if (unk_0x746960881FB19A89(Local_111.f_9))
	{
		if (!unk_0x0BA451447C3B1A8D(Local_111.f_9) && !unk_0x3E0478C40AB5B38D(Local_111.f_9))
		{
			if ((iLocal_97 == 2 || iLocal_97 == 1) || iLocal_97 == 7)
			{
				if (!func_102(Local_111.f_9, Local_627, 150f))
				{
					if (unk_0xC7FF9739199F83C9(Local_111.f_9))
					{
						iLocal_101 = 2;
						return;
					}
				}
			}
			else if (iLocal_97 == 3 || iLocal_97 == 6)
			{
				if (!func_102(Local_111.f_9, Local_627, 80f))
				{
					if (unk_0xC7FF9739199F83C9(Local_111.f_9))
					{
						iLocal_101 = 2;
						return;
					}
				}
			}
		}
	}
}

int func_395(bool bParam0)
{
	if (func_22(Local_335.f_0))
	{
		if ((unk_0x53E0A6267F3FFBEF(Local_335.f_0) || unk_0x9663302DF2957F36(Local_335.f_0)) || unk_0xABE5C64FCBE738EC(Local_335.f_0))
		{
			return 1;
		}
		if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_335.f_0))
			{
				return 1;
			}
			if (unk_0x746960881FB19A89(Local_343.f_0))
			{
				if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_343.f_0))
				{
					return 1;
				}
			}
			if (unk_0x746960881FB19A89(Local_355.f_0))
			{
				if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_355.f_0))
				{
					return 1;
				}
			}
			if (unk_0x746960881FB19A89(Local_349.f_0))
			{
				if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_349.f_0))
				{
					return 1;
				}
			}
		}
		if (unk_0xFAFDD5730377D8CC(Local_335.f_0, 60))
		{
			return 1;
		}
		if (unk_0xBD280C076BC69C97(Local_335.f_0))
		{
			if (unk_0x5093D6F9140AD109(Local_335.f_0, unk_0x9F92518438215DD0(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0xFAFDD5730377D8CC(Local_335.f_0, 50))
		{
			return 1;
		}
		if (func_401(Local_335.f_0, 1126825984))
		{
			return 1;
		}
		if (func_396(Local_335.f_0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x24E7720869956FA9(-1, unk_0x77009B1C011405A9(Local_335.f_0, 1), 15f))
		{
			return 1;
		}
		if (unk_0xFAFDD5730377D8CC(Local_335.f_0, 72))
		{
			return 1;
		}
		if (bParam0)
		{
			if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
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

int func_396(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_405(unk_0x9F92518438215DD0()) && func_405(iParam0))
	{
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_400(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_397(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x68616F991D40E2B5(unk_0x9F92518438215DD0()))
			{
				if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iParam0, 1), fVar0, 1))
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
				if (func_400(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_397(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_398(iParam0, fParam1))
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
			if (func_398(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xFDD233BBDD8E0FFE(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_398(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xDC9707EF999BC50C(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xDC9707EF999BC50C(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xDC9707EF999BC50C(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xDC9707EF999BC50C(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xDC9707EF999BC50C(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_399(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_399(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_177(Param1 - unk_0x77009B1C011405A9(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x83A30AB34278DD93(iParam0) };
	}
	else
	{
		Var3 = { func_177(unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 5f, 0f) - unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_359(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_400(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
		{
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_405(unk_0x9F92518438215DD0()) && func_405(iParam0))
	{
		if (func_403(iParam0) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iParam0))
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_402(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_402(int iParam0, float fParam1)
{
	return func_354(iParam0, unk_0x9F92518438215DD0(), fParam1, 1, 250, 7);
}

int func_403(int iParam0)
{
	if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iParam0) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
	{
		return 1;
	}
	return 0;
}

void func_404(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
	func_19(iParam0, Param1, fParam4, bParam5, 1);
	if (bParam6)
	{
		if (func_405(iParam0))
		{
			unk_0xF0875A1DC909B469(iParam0, 0, 0);
		}
	}
}

int func_405(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_406(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_407(int iParam0, bool bParam1)
{
	func_417(bParam1, 1);
	if (bParam1)
	{
		func_408();
	}
	iLocal_98 = iParam0;
	bLocal_391 = false;
	if (func_68())
	{
		iLocal_392 = 1;
	}
	else
	{
		iLocal_392 = 0;
	}
	if (!func_68())
	{
		if (iLocal_98 == 0)
		{
			if (func_405(unk_0x9F92518438215DD0()))
			{
				func_404(unk_0x9F92518438215DD0(), Local_664, fLocal_404, 0, 0);
				unk_0x5EF916489F3787FC(0f);
				unk_0x203B2685C1715644(0f, 1065353216);
				func_11(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 13, 5000, 0, 0);
				iLocal_392 = 1;
			}
		}
	}
	func_1(iLocal_98);
}

void func_408()
{
	func_409(1, 0);
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!func_68())
		{
			unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
			func_404(unk_0x9F92518438215DD0(), Local_664, fLocal_404, 0, 0);
			unk_0x5EF916489F3787FC(0f);
			unk_0x203B2685C1715644(0f, 1065353216);
		}
		unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 0, 0);
		unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
	}
	func_20();
	unk_0xED203B31B4F739E3(iLocal_611);
	func_459();
	func_122(0);
}

void func_409(bool bParam0, bool bParam1)
{
	unk_0xDA31FF1629FE9693();
	if (unk_0xC9EED58014EF1F40())
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
	if (Global_96070 == 0)
	{
		func_20();
	}
	unk_0xB1E35D138037D248(1f);
	unk_0x2250E32CE864C09F(2, 1);
	unk_0x2250E32CE864C09F(3, 1);
	unk_0x2250E32CE864C09F(4, 1);
	unk_0x2250E32CE864C09F(5, 1);
	unk_0xDF569D00AB746851(1);
	func_415(0);
	func_16(0, 0);
	unk_0xC48BE7195D873776(1);
	unk_0xB3B57AEE7B7BA0E2(1);
	func_414(0);
	unk_0xD16D705DB6C83F3B(0);
	unk_0xA65F8C84413BA46B(0);
	func_413(1);
	if (iLocal_97 > 2)
	{
		func_376(0, &uLocal_430);
	}
	unk_0xD643E324F7E6A17B(uLocal_429, 0);
	unk_0x69A5FB1BDF9C17C4();
	func_104(&uLocal_446, 2);
	func_104(&uLocal_446, 3);
	func_104(&uLocal_446, 4);
	func_310(&uLocal_43, 0, 0);
	unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
	unk_0xA4AD332FF0239A37(1f);
	func_25(1, 1, 1, 1);
	unk_0x8F85856697105E99(0);
	func_412(1, 1, 1);
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), true, 0);
	}
	if (func_22(unk_0x9F92518438215DD0()))
	{
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 1);
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 250, 1);
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	func_105();
	func_89(bParam0);
	func_410(bParam1);
}

void func_410(bool bParam0)
{
	if (bParam0)
	{
		unk_0x84FBD0BE7CDBEEA2(0, 1);
	}
	unk_0xE29F0AC6C728DD9C(func_99());
	unk_0xE29F0AC6C728DD9C("ODDJOBS@BAILBOND_QUARRY");
	func_411();
	unk_0x0880E86251A44B7F(Local_284.f_5);
}

void func_411()
{
	unk_0xF008ED878279EC4F(func_349());
	unk_0xF008ED878279EC4F(func_350());
}

void func_412(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x7F8517B594B45C45())
	{
		while (bVar0)
		{
			bVar0 = unk_0x7F8517B594B45C45();
			if (unk_0xC42238EA2EBA3C42())
			{
				unk_0x667FB252FBBF3EAC(0);
			}
			if (unk_0x8C177CD087379EBE())
			{
				unk_0x6308E81AF3BAB9A5();
			}
			if (unk_0x7F8517B594B45C45() && !unk_0xC42238EA2EBA3C42())
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

void func_413(int iParam0)
{
	Global_87673 = iParam0;
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF2061C15946C53A2(2, joaat("player"), 296331235);
		unk_0xF2061C15946C53A2(2, joaat("player"), 1166638144);
		unk_0xF2061C15946C53A2(2, joaat("player"), 2037579709);
		unk_0xF2061C15946C53A2(2, joaat("player"), 2017343592);
		unk_0xF2061C15946C53A2(2, joaat("player"), -1821475077);
		unk_0xF2061C15946C53A2(2, joaat("player"), 1782292358);
		unk_0x9519F66A5269C16A(unk_0xCFC72E446B0B3AD7(), 0);
	}
	else
	{
		unk_0xF2061C15946C53A2(255, joaat("player"), 296331235);
		unk_0xF2061C15946C53A2(255, joaat("player"), 1166638144);
		unk_0xF2061C15946C53A2(255, joaat("player"), 2037579709);
		unk_0xF2061C15946C53A2(255, joaat("player"), 2017343592);
		unk_0xF2061C15946C53A2(255, joaat("player"), -1821475077);
		unk_0xF2061C15946C53A2(255, joaat("player"), 1782292358);
		unk_0x9519F66A5269C16A(unk_0xCFC72E446B0B3AD7(), 1);
	}
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		func_416();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_416()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_417(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_412(0, 1, 1);
	}
	if (!unk_0x2E9CF5C574019636())
	{
		unk_0xC6EA7B53F52F1DF9(0);
	}
	func_184(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_418(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_458())
	{
		unk_0xE5556978B2858C53(0);
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 2);
		unk_0xAA7F469826C4FBBF(1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), false, 0);
		}
		Global_89958 = { Param0 };
		Global_89961 = fParam3;
		Global_89957 = 1;
		if (iParam4 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 14);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 24);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 24);
		}
		func_67(1);
	}
}

void func_419(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_458() || !func_456())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_453(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_451();
		while (!func_450())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		*iParam0 = func_439(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_162(Param1, 0f, 0f, 0f))
		{
			Param1 = { Global_93593.f_2167 };
			fParam4 = Global_93593.f_2167.f_6;
		}
		unk_0xFC90BEDEE248C76D(Param1, 5f, 1, 0, 0, 0);
		func_435(Param1, 5f, 0);
		if (func_81(iParam12))
		{
			func_434(iParam12, 0);
			while (!func_420(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0x3BC6D217451D6BB7(iParam10);
			while (!unk_0x149162179DBAEDB0(iParam10))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			*iParam0 = unk_0xB0694AD0A3BB8936(iParam10, Param1, fParam4, 1, 1);
			if (unk_0x746960881FB19A89(*iParam0) && !unk_0x0BA451447C3B1A8D(*iParam0))
			{
				if (iParam11 == 0)
				{
					unk_0xDFA36C740458266A(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					unk_0x0F8D3599CAFC9EEE(*iParam0, iParam11, iParam11);
				}
			}
			unk_0x0880E86251A44B7F(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((unk_0x746960881FB19A89(*iParam0) && !unk_0x0BA451447C3B1A8D(*iParam0)) && unk_0x746960881FB19A89(unk_0x9F92518438215DD0())) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			unk_0x4DB6897DB04DE279(unk_0x9F92518438215DD0(), *iParam0, -1);
			unk_0x77C765087051EDD6(*iParam0);
		}
	}
}

int func_420(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (func_81(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		func_154(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x746960881FB19A89(*iParam0))
		{
			if (unk_0xB6A50C909A8FABC3(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_97358.f_1729.f_539.f_3208) && Global_97358.f_7341.f_99.f_58[131])
		{
			Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x3BC6D217451D6BB7(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (unk_0x149162179DBAEDB0(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0xB0694AD0A3BB8936(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar79 + 1, !Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_433(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				unk_0x22501E8B882CF156(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_431(iParam0, &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_429(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				func_428(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x3BC6D217451D6BB7(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (unk_0x149162179DBAEDB0(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0xB0694AD0A3BB8936(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar80 + 1, !Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_433(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				unk_0x22501E8B882CF156(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_431(iParam0, &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_429(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				func_428(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x3BC6D217451D6BB7(Var5.f_0);
			if (unk_0x149162179DBAEDB0(Var5.f_0))
			{
				bVar81 = true;
				*iParam0 = unk_0xB0694AD0A3BB8936(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				StringCopy(&cVar82, unk_0xDFECACF4B22FB69E(*iParam0), 16);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Var5.f_24);
				}
				if (func_433(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Var5.f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Var5.f_64);
				unk_0x22501E8B882CF156(*iParam0, Var5.f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Var5.f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Var5.f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Var5.f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Var5.f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Var5.f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Var5.f_66);
						}
					}
				}
				func_431(iParam0, &(Var5.f_31), &(Var5.f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bagger") && !Global_97358.f_7341.f_99.f_58[118])
					{
						unk_0xE5BC3245AAD29D00(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_429(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_97358.f_1729.f_539.f_3208) && Global_97358.f_7341.f_99.f_58[131]) && unk_0xB6A50C909A8FABC3(*iParam0) == joaat("tailgater"))
				{
					unk_0x3E9FFBB0E33D344F(*iParam0, 6, 1, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 14, 7, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 11, 2, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 2, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 7, 5, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 0, 0, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 3, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 13, 1, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 4, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 12, 2, false);
					unk_0x88B205B70CF73BF1(*iParam0, 22, true);
					unk_0x92BB9830DC0F4EB5(*iParam0, 2);
					unk_0x3E9FFBB0E33D344F(*iParam0, 23, 11, false);
					unk_0x22501E8B882CF156(*iParam0, 2);
					Global_97358.f_1729.f_539.f_3208 = 1;
					func_421(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Var5.f_0);
				}
				if (bVar81)
				{
					func_428(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_421(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_81(iParam0) && unk_0x746960881FB19A89(*iParam1)) && unk_0xFC38B241541883D3(*iParam1, 0))
	{
		if (iParam2 > Global_97358.f_1729.f_539.f_1635)
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
			func_126(*iParam1, iParam0);
		}
		if (unk_0x2C1B23216A36AE4C(*iParam1) != 0)
		{
			unk_0xCC6111FBD13C5A22(*iParam1, 0);
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/] = unk_0xB6A50C909A8FABC3(*iParam1);
		if (unk_0x5B0D24105AA6799D(*iParam1, &iVar1))
		{
			Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = unk_0xB6A50C909A8FABC3(iVar1);
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = unk_0xFFA8CF72B5CABC31(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = unk_0xFD181DDA4D8D6786(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = unk_0x364F41CAA0A051EA(*iParam1, 1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = unk_0x364F41CAA0A051EA(*iParam1, 2);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = unk_0x364F41CAA0A051EA(*iParam1, 3);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = unk_0x364F41CAA0A051EA(*iParam1, 4);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = unk_0x364F41CAA0A051EA(*iParam1, 5);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = unk_0x364F41CAA0A051EA(*iParam1, 6);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = unk_0x364F41CAA0A051EA(*iParam1, 7);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = unk_0x364F41CAA0A051EA(*iParam1, 8);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = unk_0x364F41CAA0A051EA(*iParam1, 9);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = unk_0x364F41CAA0A051EA(*iParam1, 10);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = unk_0x364F41CAA0A051EA(*iParam1, 11);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = unk_0x364F41CAA0A051EA(*iParam1, 12);
		if (unk_0xD3FA39A943FC7567(*iParam1, 0))
		{
			iVar2 = unk_0x110EA7EDEDCFBFE8(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = unk_0x147076C287537800();
		StringCopy(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), unk_0xDFECACF4B22FB69E(*iParam1), 16);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = unk_0x015D5CDAA9114947(*iParam1);
		unk_0x9EB96E7956694DA9(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		unk_0x4096E2FD42D248FC(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		unk_0x9A09BEE60599C8C6(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = unk_0x960C88BA5B643397(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = unk_0x754F7DC22DC17C57(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = unk_0x19CE0669140A3681(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = unk_0x87C86C986E8206D3(*iParam1);
		unk_0x1B3DD3EA702F7E43(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_97358.f_1729.f_539.f_3209[iParam0] = 10;
		if ((unk_0xD3360834BEBE4E9A(*iParam1) >= 0 && unk_0xD3360834BEBE4E9A(*iParam1) < 255) && func_425(*iParam1, 0, &uVar0))
		{
			func_165(iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_97358.f_23343[iParam0 /*43*/].f_40 = 1;
				Global_97358.f_23343[iParam0 /*43*/] = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_97358.f_23343[iParam0 /*43*/].f_3 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_97358.f_23343[iParam0 /*43*/].f_4 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_97358.f_23343[iParam0 /*43*/].f_5 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_97358.f_23343[iParam0 /*43*/].f_6 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_97358.f_23343[iParam0 /*43*/].f_10 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_97358.f_23343[iParam0 /*43*/].f_16 = !Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_97358.f_23343[iParam0 /*43*/].f_19 = { Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_97358.f_23343[iParam0 /*43*/].f_23 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_97358.f_23343[iParam0 /*43*/].f_7 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_97358.f_23343[iParam0 /*43*/].f_8 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_97358.f_23343[iParam0 /*43*/].f_9 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_97358.f_23343[iParam0 /*43*/].f_11 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_97358.f_23343[iParam0 /*43*/].f_12 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_97358.f_23343[iParam0 /*43*/].f_13 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_97358.f_23343[iParam0 /*43*/].f_14 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_97358.f_23343[iParam0 /*43*/].f_15 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_97358.f_23343[iParam0 /*43*/].f_18 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_97358.f_23343[iParam0 /*43*/].f_17 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_97358.f_23343[iParam0 /*43*/].f_24 = unk_0x7C15DDD43A07A073(*iParam1, 11) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_25 = unk_0x7C15DDD43A07A073(*iParam1, 12) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_26 = unk_0x7C15DDD43A07A073(*iParam1, 4) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_27 = unk_0x7C15DDD43A07A073(*iParam1, 23) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_28 = unk_0x7C15DDD43A07A073(*iParam1, 14) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_29 = unk_0x7C15DDD43A07A073(*iParam1, 16) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_30 = unk_0x7C15DDD43A07A073(*iParam1, 15) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_32 = unk_0x7A4C6430918C2188(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[0] = unk_0xFC302D1081C4A3D6(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[1] = unk_0x252040D76D8F90AD(*iParam1, 14, 0);
				Global_97358.f_23343[iParam0 /*43*/].f_33[2] = unk_0x252040D76D8F90AD(*iParam1, 14, 1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[3] = unk_0x252040D76D8F90AD(*iParam1, 14, 2);
				Global_97358.f_23343[iParam0 /*43*/].f_33[4] = unk_0x252040D76D8F90AD(*iParam1, 14, 3);
				Global_97358.f_23343[iParam0 /*43*/].f_39 = unk_0x2253AE77175F5520(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_31 = func_424(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[0] = unk_0x55117DDDB4CA6989(*iParam1);
				unk_0xD7D4BA60D21D48C4(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_422(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_97358.f_23343[iParam0 /*43*/].f_1));
				unk_0xB45AB3D95FF01F3E(*iParam1, &iVar4, &uVar5);
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
				func_422(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_97358.f_23343[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_422(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_423(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

bool func_423(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

float func_424(int iParam0)
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
	if (((unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0xD3360834BEBE4E9A(iParam0) >= 0) && unk_0xD3360834BEBE4E9A(iParam0) < 255)
	{
		if (unk_0x2253AE77175F5520(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 0)
		{
			if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iParam0)))
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

int func_425(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	if (!func_426(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x2A210BAD0D74322B(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if ((func_136(iParam0) && unk_0xB6A50C909A8FABC3(iParam0) != joaat("sentinel2")) && unk_0xB6A50C909A8FABC3(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_426(int iParam0, bool bParam1, var uParam2)
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
	if (((!unk_0x80D7E1622143A2A0(iParam0) && !unk_0x8D759C5DD707B910(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_427(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_427(int iParam0)
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

void func_428(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			Global_87698[iVar0] = uParam0;
			Global_87708[iVar0] = iParam1;
			Global_87718[iVar0] = unk_0xB6A50C909A8FABC3(uParam0);
			if (unk_0x80D7E1622143A2A0(Global_87718[iVar0]))
			{
				Global_87746[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87746[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_429(var uParam0)
{
	if (!func_430(*uParam0))
	{
		unk_0x2125574BF8773B98(*uParam0, 5, !Global_97358.f_7341.f_99.f_58[119]);
	}
}

bool func_430(int iParam0)
{
	return unk_0x364F41CAA0A051EA(iParam0, 5);
}

int func_431(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xCC6111FBD13C5A22(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x88B205B70CF73BF1(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68446DE1A840C25F(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x791912F6570BB5BB(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_432(*uParam0))
	{
		unk_0x17E8CB2415E3DCFE(*uParam0, 1);
		unk_0xA27F610688163CA9(*uParam0, 1);
	}
	return 1;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x746960881FB19A89(uParam0) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0x2C1B23216A36AE4C(iParam0) > 0)
	{
		unk_0xCC6111FBD13C5A22(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x68446DE1A840C25F(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x5E843FC089111E3E(iParam0, iVar1, unk_0x68446DE1A840C25F(iParam0, iVar1)), 16);
				iVar2 = unk_0x398F092142D37E17(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x398F092142D37E17("MNU_CAGE") || iVar2 == unk_0x398F092142D37E17("SABRE_CAG"))
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

int func_433(var uParam0, var uParam1)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
	}
	else if (Global_97358.f_23343.f_261)
	{
		*uParam0 = { Global_97358.f_23343.f_267 };
		*uParam1 = Global_97358.f_23343.f_271;
		return 1;
	}
	return 0;
}

void func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (iParam0 == 145 || Global_87708[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == func_153(iParam0, iParam1))
				{
					if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Global_87698[iVar0], 0))
					{
						unk_0x336AE92FD68DEF98(Global_87698[iVar0], 0, 1);
						unk_0xCD3EBB4EAE50293F(&(Global_87698[iVar0]));
						Global_87708[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_435(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_152(&(Global_67138.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x91EAD4F2F9B5B38A(Param0, Global_67138.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_436(iVar0);
			}
		}
		iVar0++;
	}
}

void func_436(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x746960881FB19A89(Global_67138.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0xFC38B241541883D3(Global_67138.f_139[iParam0], 0))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Global_67138.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x336AE92FD68DEF98(Global_67138.f_139[iParam0], 1, 1);
				unk_0xCD3EBB4EAE50293F(&(Global_67138.f_139[iParam0]));
			}
		}
		Global_67138[iParam0] = 1;
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_158(iParam0, 0)) && Global_68047.f_42 == 0) && Global_97358.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] != 0) && Global_97358.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] > 3) && (!func_437(0, Global_67138.f_555[0 /*21*/].f_12) || !func_437(1, Global_67138.f_555[0 /*21*/].f_12)))
			{
				func_159(Global_97358.f_18371.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/], &Global_68047);
				Global_68101 = Global_97358.f_18371.f_4799;
			}
			func_156(iParam0, 0);
		}
	}
}

int func_437(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_438(&(Global_97358.f_18371.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_129(Global_97358.f_18371.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}

int func_438(var uParam0)
{
	return *uParam0;
}

int func_439(struct<3> Param0, float fParam3)
{
	return func_440(&(Global_93593.f_2167), Param0, fParam3, 0);
}

int func_440(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_449(uParam0))
	{
		if (func_162(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (unk_0xABDC7B22D1A3C451(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_448(uParam0))
		{
			unk_0xFC90BEDEE248C76D(Param1, 5f, 1, 0, 0, 0);
			func_435(Param1, 5f, 0);
			iVar0 = unk_0xB0694AD0A3BB8936(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (unk_0x746960881FB19A89(iVar0))
			{
				Var1 = { unk_0x77009B1C011405A9(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x18487241EBD142A4(iVar0, Param1, 0, 0, 1);
				}
				func_445(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x567194A60F82D51A(uParam0->f_12.f_42) || unk_0x21F73C20982A6AFA(uParam0->f_12.f_42))
				{
					if (!unk_0xD2E6C4C49FC734C5(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x77C765087051EDD6(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x80D7E1622143A2A0(unk_0xB6A50C909A8FABC3(iVar0)))
						{
							func_434(uParam0->f_11, 1);
						}
						else if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iVar0)))
						{
							func_434(uParam0->f_11, 2);
						}
					}
					unk_0x891096CB00F14680(iVar0, 0);
					unk_0xD38DD7BCFD31EEB5(iVar0, 0);
					unk_0xA27F610688163CA9(iVar0, 1);
					func_428(iVar0, uParam0->f_11);
				}
				else if ((!func_442(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x6B08EC9A88700FBB(unk_0xC2E9075570B5D2B9(), "startup_positioning"))
				{
					iVar8 = func_441(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_436(iVar8);
					}
				}
				if (((Global_89962 != 13 && Global_89962 != 10) && Global_89962 != 11) && Global_89962 != 12)
				{
					if (unk_0x398F092142D37E17(&(Global_89962.f_3)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_97358.f_18371.f_69[21 /*54*/].f_42)
						{
							func_156(24, 0);
							func_436(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_126(iVar0, uParam0->f_11);
				}
				unk_0x0880E86251A44B7F(uParam0->f_12.f_42);
				Var1 = { unk_0x77009B1C011405A9(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x746960881FB19A89(Global_67138.f_484[iVar0]) && !unk_0x0BA451447C3B1A8D(Global_67138.f_484[iVar0])) && unk_0xFC38B241541883D3(Global_67138.f_484[iVar0], 0))
		{
			unk_0x9EB96E7956694DA9(uParam0, &iVar1, &iVar2);
			unk_0x9EB96E7956694DA9(Global_67138.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0xB6A50C909A8FABC3(iParam0) == unk_0xB6A50C909A8FABC3(Global_67138.f_484[iVar0]) && unk_0x19CE0669140A3681(iParam0) == unk_0x19CE0669140A3681(Global_67138.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_442(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xB6A50C909A8FABC3(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_444(iParam0, Global_67138.f_139[38], 0))
			{
				func_436(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_444(iParam0, Global_67138.f_139[43], 1))
			{
				func_436(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xFC9FFBE3300B9CD9(unk_0x9F92518438215DD0(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_444(iParam0, uVar1[iVar6], 1) && func_443(unk_0x77009B1C011405A9(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam4 || func_162(Param1, 0f, 0f, 0f)) || unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam0, 1), unk_0x77009B1C011405A9(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xCD3EBB4EAE50293F(&iParam0);
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
			if ((unk_0x746960881FB19A89(Global_67138.f_484[14]) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0xFC38B241541883D3(Global_67138.f_484[14], 0))
			{
				if (unk_0xB6A50C909A8FABC3(Global_67138.f_484[14]) == joaat("luxor2") && unk_0x19CE0669140A3681(iParam0) == unk_0x19CE0669140A3681(Global_67138.f_484[14]))
				{
					func_436(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x746960881FB19A89(Global_67138.f_484[20]) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0xFC38B241541883D3(Global_67138.f_484[20], 0))
			{
				if (unk_0xB6A50C909A8FABC3(Global_67138.f_484[20]) == joaat("swift2") && unk_0x19CE0669140A3681(iParam0) == unk_0x19CE0669140A3681(Global_67138.f_484[20]))
				{
					func_436(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_443(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_444(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x746960881FB19A89(uParam1) && !unk_0x0BA451447C3B1A8D(iParam1)) && unk_0xFC38B241541883D3(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x9EB96E7956694DA9(uParam0, &iVar0, &iVar1);
			unk_0x9EB96E7956694DA9(iParam1, &iVar2, &iVar3);
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

void func_445(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(uParam0, 0))
	{
		if (unk_0x398F092142D37E17(&(uParam1->f_1)) != 0)
		{
			unk_0xE5BC3245AAD29D00(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x397FB8D6445AF794())
		{
			unk_0xD221FDA71C0FB50F(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x94E72F17611BCD3C(uParam1->f_53, 13))
		{
			unk_0x4AC5FABB99DE407C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xB6C3B85428F7BB61(iParam0);
		}
		if (unk_0x94E72F17611BCD3C(uParam1->f_53, 12))
		{
			unk_0xFF580FD82F9A32E0(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xA95FFB9A72C27114(iParam0);
		}
		unk_0x0F8D3599CAFC9EEE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x32C2810FAE38E8CD(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x94E72F17611BCD3C(uParam1->f_53, 15) || func_447(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_446())
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
		unk_0xB73F39951A7D1EFC(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0x22501E8B882CF156(iParam0, 0);
		}
		else
		{
			unk_0x22501E8B882CF156(iParam0, 0);
			unk_0x22501E8B882CF156(iParam0, uParam1->f_41);
		}
		unk_0x5C7436C87A3920CE(iParam0, !unk_0x94E72F17611BCD3C(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0x993B4D0D3CD44124(iParam0, uParam1->f_46);
		}
		unk_0x4952D08EF53A16B7(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0x1A0D21734A33F862(iParam0, 2, unk_0x94E72F17611BCD3C(uParam1->f_53, 28));
		unk_0x1A0D21734A33F862(iParam0, 3, unk_0x94E72F17611BCD3C(uParam1->f_53, 29));
		unk_0x1A0D21734A33F862(iParam0, 0, unk_0x94E72F17611BCD3C(uParam1->f_53, 30));
		unk_0x1A0D21734A33F862(iParam0, 1, unk_0x94E72F17611BCD3C(uParam1->f_53, 31));
		unk_0x042E8EAB80B3768F(iParam0, unk_0x94E72F17611BCD3C(uParam1->f_53, 10));
		if (unk_0x2C6B333180E1C5E9(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0xCFCA916635B00CF4(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(iParam0)))
			{
				if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x92BB9830DC0F4EB5(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x92BB9830DC0F4EB5(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x10216E300DCDE297(iParam0, 1);
			}
			else
			{
				unk_0x31A1CB20B1EC3E61(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_431(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0xAAF77E03CD60491E(uParam1->f_42) && !unk_0x567194A60F82D51A(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x94E72F17611BCD3C(uParam1->f_53, func_164(iVar0 + 1)))
				{
					if (!unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
					{
						unk_0x2125574BF8773B98(iParam0, iVar0 + 1, false);
					}
				}
				else if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
				{
					unk_0x2125574BF8773B98(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (!unk_0x94E72F17611BCD3C(uParam1->f_53, 23))
			{
				if (unk_0x94E72F17611BCD3C(uParam1->f_53, 22))
				{
					unk_0xDA06BD0F8C6042F9(iParam0, 2);
				}
				else
				{
					unk_0xDA06BD0F8C6042F9(iParam0, 3);
				}
			}
			else
			{
				unk_0xDA06BD0F8C6042F9(iParam0, 4);
			}
		}
		if (unk_0x94E72F17611BCD3C(uParam1->f_53, 27))
		{
			unk_0xA4EF8B99945FC54F(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xA4EF8B99945FC54F(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_446()
{
	return unk_0x9501317225249120(joaat("mpindependence"));
}

int func_447(int iParam0)
{
	var uVar0;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (unk_0xA27FA05139033EDE("MPBitset", 3))
			{
				if (unk_0xB4289912C78431FE(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x70BD1F58B07BE0C1(iParam0, "MPBitset");
				}
				return unk_0x94E72F17611BCD3C(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_448(var uParam0)
{
	if (func_449(uParam0))
	{
		if (unk_0x149162179DBAEDB0(uParam0->f_12.f_42))
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

int func_449(var uParam0)
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_129(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

bool func_450()
{
	return func_448(&(Global_93593.f_2167));
}

void func_451()
{
	func_452(&(Global_93593.f_2167));
}

void func_452(var uParam0)
{
	if (func_449(uParam0))
	{
		unk_0x3BC6D217451D6BB7(uParam0->f_12.f_42);
	}
}

int func_453(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x567194A60F82D51A(Global_93593.f_2167.f_12.f_42))
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0xAAF77E03CD60491E(Global_93593.f_2167.f_12.f_42))
	{
		return 0;
	}
	if (iParam2 == 0 && func_455(Global_93593.f_2167.f_12.f_42))
	{
		return 0;
	}
	if (iParam3 == 0 && unk_0xDB519A4108C6BFB1(Global_93593.f_2167.f_12.f_42))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_454())
		{
			return 0;
		}
	}
	return 1;
}

int func_454()
{
	float fVar0;
	
	if (!func_456())
	{
		return 0;
	}
	if ((unk_0x567194A60F82D51A(Global_93593.f_2167.f_12.f_42) || unk_0xDB519A4108C6BFB1(Global_93593.f_2167.f_12.f_42)) || unk_0x297BD02A9765671B(Global_93593.f_2167.f_12.f_42))
	{
		return 0;
	}
	fVar0 = unk_0xE1F06FC97613020F(Global_93593.f_2167.f_12.f_42);
	if (fVar0 < 37f)
	{
		return 0;
	}
	return 1;
}

int func_455(int iParam0)
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

bool func_456()
{
	return func_449(&(Global_93593.f_2167));
}

int func_457()
{
	if (!Global_89962 == 10 && !Global_89962 == 9)
	{
		return 0;
	}
	return Global_89962.f_2;
}

int func_458()
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
}

void func_459()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_467();
	while ((!func_56(0) || !func_56(1)) || !func_56(2))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 250, 0);
	}
	unk_0x4B38C66919CC2E48("ENEMIES", &iLocal_611);
	unk_0xF2061C15946C53A2(5, joaat("player"), iLocal_611);
	unk_0xF2061C15946C53A2(5, iLocal_611, joaat("player"));
	Var0 = { func_466(Local_102) };
	Var3 = { func_465(Local_102) };
	unk_0x24EA77E513B7621A(Var0, Var3);
	uLocal_429 = unk_0x676E460800A9E1B7(Var0, Var3, 0, 1, 1, 1);
	unk_0xFC90BEDEE248C76D(Local_102, 30f, 0, 0, 0, 0);
	unk_0x2250E32CE864C09F(2, 0);
	unk_0x2250E32CE864C09F(3, 0);
	unk_0x2250E32CE864C09F(4, 0);
	unk_0x2250E32CE864C09F(5, 0);
	unk_0xDF569D00AB746851(0);
	unk_0xB1E35D138037D248(0.2f);
	func_414(1);
	while (!func_462())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_460();
	if (func_22(unk_0x9F92518438215DD0()))
	{
		func_88(&uLocal_446, 2, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
		unk_0x12977F077B942364(unk_0x9F92518438215DD0(), 1);
	}
	if (func_22(Local_111.f_9))
	{
		func_88(&uLocal_446, 3, Local_111.f_9, sLocal_432, 0, 1);
		unk_0x12977F077B942364(Local_111.f_9, 1);
	}
}

void func_460()
{
	int iVar0;
	
	if (func_22(Local_111.f_9))
	{
		unk_0x5E4D9888EEC3124B(Local_111.f_9, 1);
		unk_0x651889102FB859B8(Local_111.f_9, 1);
		unk_0x6071B76736765033(Local_111.f_9, 100);
		unk_0x5C66176FC9E6724C(Local_111.f_9, 200);
		unk_0xF4CEAA6CE96E0DB3(Local_111.f_9, 1);
		unk_0x69C5E202565B9651(Local_111.f_9, 1);
		unk_0x04B1E4FA412227A8(Local_111.f_9, 1);
		unk_0x70B8A7B71FA3BA7B(Local_111.f_9, 1);
		unk_0x452D7DCDB5C80860(Local_111.f_9, 2f);
		unk_0xA312EF9D25DFDA9B(Local_111.f_9, 2f);
		unk_0x651889102FB859B8(Local_111.f_9, 1);
		unk_0xA852C38A5A516356(Local_111.f_9, 0);
		unk_0x9001FCB58244C11D(Local_111.f_9, 118, 1);
		unk_0x9001FCB58244C11D(Local_111.f_9, 137, 1);
		unk_0x9001FCB58244C11D(Local_111.f_9, 281, 1);
		if (Local_111.f_12 != 0)
		{
			unk_0x46D3B8FF073CD238(Local_111.f_9, Local_111.f_12, -1, 1, 1);
		}
		func_339(Local_111.f_9);
		func_461(Local_111.f_9, "TARGET_", 0);
		Local_111.f_10 = 0;
		unk_0x3E2A91442BB9855D(Local_111.f_9);
		unk_0x7CF15DD8B3815A0D(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 8f, -2f, -1, 1, 0, 0, 0, 0);
		if (!unk_0x746960881FB19A89(Local_284.f_0))
		{
			Local_284.f_0 = unk_0xA7DA1E6D4C99864B(joaat("prop_phone_ing"), unk_0x77009B1C011405A9(Local_111.f_9, 0), 1, 1, 0);
		}
		if (func_405(Local_284.f_0))
		{
			unk_0x80BA810554025DFF(Local_284.f_0, Local_111.f_9, unk_0xB8BF0926F5E41F7D(Local_111.f_9, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_22(Local_132[iVar0 /*19*/]))
		{
			func_339(Local_132[iVar0 /*19*/]);
			if (Local_132[iVar0 /*19*/].f_5 != 0)
			{
				unk_0x46D3B8FF073CD238(Local_132[iVar0 /*19*/], Local_132[iVar0 /*19*/].f_5, -1, 1, 1);
			}
			unk_0x9001FCB58244C11D(Local_132[iVar0 /*19*/], 137, 1);
			func_461(Local_132[iVar0 /*19*/], "BACKUP_", iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_415 - 1))
	{
		if (func_7(Local_247[iVar0 /*6*/]))
		{
			unk_0x6FD45FA39DD18625(Local_247[iVar0 /*6*/], 1, 1);
		}
		iVar0++;
	}
}

void func_461(var uParam0, char* sParam1, int iParam2)
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam1, 16);
	StringIntConCat(&cVar0, iParam2, 16);
	unk_0x44759218C5C621A3(uParam0, &cVar0);
}

int func_462()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_52(&(Local_111.f_9), Local_111.f_11, Local_111.f_13, Local_111.f_16, 1, 0, 0))
	{
		if (func_22(Local_111.f_9))
		{
			unk_0x4A1AC49BA4A747F7(Local_111.f_9, 1);
			iVar0++;
		}
	}
	if (iLocal_419 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_419 - 1))
		{
			if (func_52(&(Local_132[iVar2 /*19*/]), Local_132[iVar2 /*19*/].f_18, Local_132[iVar2 /*19*/].f_1, Local_132[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (func_22(Local_132[iVar2 /*19*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_419)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_419 - 1))
		{
			unk_0x0880E86251A44B7F(Local_132[iVar2 /*19*/].f_18);
			iVar2++;
		}
	}
	if (iLocal_415 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_415 - 1))
		{
			if (func_464(&(Local_247[iVar2 /*6*/]), Local_247[iVar2 /*6*/].f_5, Local_247[iVar2 /*6*/].f_1, Local_247[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_414 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_414 - 1))
		{
			if (func_55(&(Local_290[iVar2 /*9*/]), Local_290[iVar2 /*9*/].f_8, Local_290[iVar2 /*9*/].f_1, Local_290[iVar2 /*9*/].f_7, 1))
			{
				unk_0xD9B13F0A69759C12(Local_290[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_417 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_417 - 1))
		{
			if (func_463(&(Local_327[iVar2 /*7*/]), Local_327[iVar2 /*7*/].f_5, Local_327[iVar2 /*7*/].f_2, Local_327[iVar2 /*7*/].f_6, Local_327[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_419 + iLocal_415) + iLocal_416) + iLocal_414) + iLocal_417) + 1)
	{
		return 1;
	}
	return 0;
}

int func_463(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, bool bParam7)
{
	if (!unk_0x303D473D180EAA17(*uParam0))
	{
		if (func_54(iParam6))
		{
			*uParam0 = unk_0xF8670CA33A75995A(uParam1, Param2, uParam5, -1, 1, iParam6);
			if (unk_0x303D473D180EAA17(*uParam0))
			{
				if (unk_0x78210055FCA1A08A(*uParam0))
				{
					if (bParam7)
					{
						func_53(iParam6, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (unk_0x78210055FCA1A08A(*uParam0))
	{
		if (bParam7)
		{
			func_53(iParam6, 0);
		}
		return 1;
	}
	return 0;
}

int func_464(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x746960881FB19A89(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0xB0694AD0A3BB8936(iParam1, Param2, uParam5, 1, 1);
			if (unk_0x746960881FB19A89(*uParam0))
			{
				if (!unk_0x34E74FF8690AA4B1(*uParam0))
				{
					unk_0x336AE92FD68DEF98(*uParam0, 1, 0);
				}
				if (func_7(*uParam0))
				{
					unk_0xFA51DC22F6E34F6E(*uParam0, Param2, 1, 0, 0, 1);
					unk_0x03D97EDECF2E1859(*uParam0, fParam5);
				}
				unk_0x77C765087051EDD6(*uParam0);
				if (bParam6)
				{
					func_53(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam6)
		{
			func_53(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_465(struct<5> Param0, var uParam5, var uParam6, var uParam7)
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

Vector3 func_466(struct<5> Param0, var uParam5, var uParam6, var uParam7)
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

void func_467()
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_110 = 3;
	Local_111.f_11 = joaat("s_m_m_trucker_01");
	Local_111.f_13 = { 2945.036f, 2796.254f, 39.693f };
	Local_111.f_16 = 38.6771f;
	Local_111.f_12 = joaat("weapon_unarmed");
	Local_111.f_10 = 0;
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	func_9();
	iLocal_419 = 0;
	Local_247[0 /*6*/].f_5 = joaat("landstalker");
	Local_247[0 /*6*/].f_1 = { 2950.07f, 2796.39f, 40.35f };
	Local_247[0 /*6*/].f_4 = 338.45f;
	Local_247[1 /*6*/].f_5 = joaat("bjxl");
	Local_247[1 /*6*/].f_1 = { 2945.97f, 2790.77f, 40.37f };
	Local_247[1 /*6*/].f_4 = 28.22f;
	Local_284.f_5 = joaat("prop_phone_ing");
	iLocal_415 = 2;
	iLocal_416 = 0;
	iLocal_414 = 0;
	iLocal_417 = 0;
	Local_630[0 /*3*/] = { 2962.58f, 2817.19f, 42.29f };
	Local_630[1 /*3*/] = { 2942.482f, 2841.708f, 46.4443f };
	Local_630[2 /*3*/] = { 2909.12f, 2820.88f, 52.9f };
	Local_630[3 /*3*/] = { 2860.14f, 2816.9f, 52.56f };
	Local_630[4 /*3*/] = { 2821.638f, 2893.259f, 45.53f };
	Local_630[5 /*3*/] = { 2768.72f, 2950.61f, 39.78f };
	Local_630[6 /*3*/] = { 2712.31f, 2963.74f, 35.79f };
	Local_630[7 /*3*/] = { 2657.573f, 2981.731f, 38.9122f };
	Local_630[8 /*3*/] = { 2623.295f, 3077.358f, 46.24589f };
	iLocal_418 = 9;
	Local_664 = { 2883.023f, 2807.719f, 53.6941f };
	fLocal_404 = 256.3262f;
	Local_667 = { 2938.96f, 2783.275f, 38.5873f };
	fLocal_405 = 355.8176f;
	Local_670 = { 2947.246f, 2787.406f, 39.4516f };
	fLocal_406 = 306.625f;
	Local_673 = { 0f, 0f, 0f };
	Local_676 = { 0f, 0f, 0f };
	iLocal_100 = 4;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_377 = 1;
	iLocal_370 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_371[iVar0] = 0;
		iVar0++;
	}
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_380 = 1;
	iLocal_381 = 0;
	iLocal_382 = 0;
	iLocal_385 = 0;
	iLocal_386 = 0;
	iLocal_387 = 0;
	iLocal_388 = 0;
	iLocal_389 = 0;
	iLocal_390 = 0;
	iLocal_393 = 0;
	bLocal_394 = false;
	iLocal_395 = 0;
	iLocal_396 = 0;
	iLocal_397 = 0;
	iLocal_398 = 1;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	bLocal_402 = false;
	iLocal_383 = 1;
	bLocal_384 = false;
	iLocal_101 = 0;
	iLocal_408 = 0;
	iLocal_412 = 0;
	iLocal_413 = 0;
	iLocal_409 = 0;
	iLocal_407 = 0;
	iLocal_426 = 0;
	iLocal_411 = 0;
	iLocal_420 = 0;
	iLocal_421 = -1;
	iLocal_422 = -1;
	iLocal_423 = 0;
	iLocal_425 = 0;
	iLocal_427 = -1;
	Local_624 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_612, "", 24);
	Local_335.f_6 = func_478(62);
	Local_335.f_1 = { func_477() };
	Local_335.f_4 = func_476();
	Local_343.f_5 = func_475();
	Local_343.f_1 = { func_474() };
	Local_343.f_4 = func_473();
	Local_349.f_5 = func_472();
	Local_349.f_1 = { func_471() };
	Local_349.f_4 = func_470();
	Local_355.f_5 = func_46();
	Local_355.f_1 = { func_45() };
	Local_355.f_4 = func_44();
	Local_361.f_5 = func_43();
	Local_361.f_1 = { func_469() };
	Local_361.f_4 = func_468();
	sLocal_432 = "BailBond1Jumper";
	sLocal_433 = "BB1_J1";
	sLocal_434 = "BB1_J3";
	sLocal_435[0] = "BB1_VC1";
	sLocal_435[1] = "BB1_VC2";
	sLocal_435[2] = "BB1_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_371[iVar0] = 0;
		iVar0++;
	}
	iLocal_131 = 0;
}

float func_468()
{
	return 75.15f;
}

Vector3 func_469()
{
	return 2727.29f, 4145.9f, 44.16f;
}

float func_470()
{
	return 71f;
}

Vector3 func_471()
{
	return 2727.686f, 4145.715f, 44.08f;
}

int func_472()
{
	return joaat("prop_laptop_01a");
}

float func_473()
{
	return -91.28f;
}

Vector3 func_474()
{
	return 2728.35f, 4145.59f, 43.3f;
}

int func_475()
{
	return joaat("prop_table_03_chr");
}

float func_476()
{
	return 89.19f;
}

Vector3 func_477()
{
	return 2728.33f, 4145.6f, 43.89f;
}

int func_478(int iParam0)
{
	if (!func_81(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_479(bool bParam0)
{
	if (unk_0xDC8D2FA0A650F78B())
	{
		return 0;
	}
	if (Global_24446)
	{
		return 0;
	}
	if (func_84(6) || func_84(7))
	{
		return 0;
	}
	if (func_79() != 2)
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_489(4))
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
		{
			return 0;
		}
		if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
		if (!func_483(4))
		{
			return 0;
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
			{
				return 0;
			}
		}
		if (unk_0xC42238EA2EBA3C42())
		{
			return 0;
		}
		if (Global_67058)
		{
			return 0;
		}
		if (func_482() || func_481())
		{
			return 0;
		}
		if (func_480())
		{
			return 0;
		}
	}
	return 1;
}

int func_480()
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

int func_481()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_482()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_483(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_79();
				if (!func_81(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_482()) || Global_96405) || Global_24446) || func_488()) || func_86(8, -1)) || func_487()) || func_486()) || func_480()) || func_481()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_482()) || Global_24446) || func_488()) || func_86(8, -1)) || func_480()) || func_487()) || func_486()) || func_481()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_482()) || Global_96405) || Global_24446) || func_488()) || func_86(8, -1)) || func_480()) || func_487()) || func_486()) || func_481()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_482()) || Global_96405) || Global_24446) || func_488()) || func_86(8, -1)) || func_487()) || func_486()) || func_481()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_482() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_86(8, -1)) || func_481()) || func_485()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_86(8, -1) || func_487()) || func_486()) || func_485()) || func_484())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_482()) || Global_24446) || func_488()) || func_86(8, -1)) || func_486()) || func_480()) || func_481()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_482()) || func_486()) || Global_96405) || Global_24446) || func_488()) || Global_35957) || func_86(8, -1)) || func_480()) || func_485()) || func_481()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_482()) || Global_96405) || Global_24446) || func_488()) || func_86(8, -1)) || func_480()) || func_485()) || func_487()) || func_486()) || func_481())
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

var func_484()
{
	return Global_90001.f_1;
}

int func_485()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

bool func_486()
{
	return Global_90014.f_291 > 0;
}

bool func_487()
{
	return Global_90014.f_290 > 0;
}

var func_488()
{
	return Global_1315900;
}

bool func_489(int iParam0)
{
	return func_490(iParam0, Global_34913);
}

int func_490(int iParam0, int iParam1)
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

void func_491(int iParam0)
{
	func_516();
	if (!func_515())
	{
		if (Global_84542 == Global_89999)
		{
			Global_97358.f_28183.f_4[iParam0]++;
		}
		Global_84542 = Global_89999;
		func_492(unk_0xC2E9075570B5D2B9());
	}
}

void func_492(char* sParam0)
{
	if (Global_89962 != 12)
	{
		func_493(sParam0, 5, -1);
	}
}

int func_493(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_512();
	func_511();
	Global_89962 = 0;
	StringCopy(&(Global_89962.f_3), sParam0, 32);
	Global_89962.f_11 = iParam1;
	unk_0x4AE0002D6F44C2CE(1);
	unk_0x0A44F87E2FFEA3E8(0);
	unk_0x0C3843FC5EF9584D(0);
	func_14(1);
	func_415(1);
	func_508(0);
	func_507(1);
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 9);
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 6);
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 20);
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 21);
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 5);
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (unk_0xB602FFF24CBFD2C5(uVar0))
				{
					unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 5);
				}
			}
		}
	}
	unk_0x35611EEE7A1FFEDB(1);
	unk_0xDA31FF1629FE9693();
	func_506(0);
	func_505(1);
	Global_89962.f_2 = Global_89999;
	if (func_504())
	{
		if (func_503())
		{
			if (Global_89999 >= func_500())
			{
				if (!unk_0x94E72F17611BCD3C(Global_81155[iParam2 /*34*/].f_15, 16))
				{
					if (Global_97358.f_7341.f_328[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84543 = 1;
					}
				}
			}
		}
		else if (Global_89962.f_11 == 6)
		{
			func_495(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_97358.f_16828[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_494(unk_0xC2E9075570B5D2B9());
			if (iVar33 > -1)
			{
				if (Global_97358.f_28183.f_4[iVar33] >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
	}
	return 1;
}

int func_494(char* sParam0)
{
	if (unk_0x6B08EC9A88700FBB("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x6B08EC9A88700FBB("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x6B08EC9A88700FBB("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x6B08EC9A88700FBB("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_495(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_496(uParam1, "Abigail1", func_498(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 1:
			func_496(uParam1, "Abigail2", func_498(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 2:
			func_496(uParam1, "Barry1", func_498(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 3:
			func_496(uParam1, "Barry2", func_498(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_497(iParam0), 1, 1);
			break;
		
		case 4:
			func_496(uParam1, "Barry3", func_498(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 5:
			func_496(uParam1, "Barry3A", func_498(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 6:
			func_496(uParam1, "Barry3C", func_498(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 7:
			func_496(uParam1, "Barry4", func_498(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_497(iParam0), 0, 0);
			break;
		
		case 8:
			func_496(uParam1, "Dreyfuss1", func_498(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 9:
			func_496(uParam1, "Epsilon1", func_498(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 10:
			func_496(uParam1, "Epsilon2", func_498(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 11:
			func_496(uParam1, "Epsilon3", func_498(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 12:
			func_496(uParam1, "Epsilon4", func_498(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 13:
			func_496(uParam1, "Epsilon5", func_498(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 14:
			func_496(uParam1, "Epsilon6", func_498(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 15:
			func_496(uParam1, "Epsilon7", func_498(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 16:
			func_496(uParam1, "Epsilon8", func_498(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 17:
			func_496(uParam1, "Extreme1", func_498(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 18:
			func_496(uParam1, "Extreme2", func_498(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 19:
			func_496(uParam1, "Extreme3", func_498(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 20:
			func_496(uParam1, "Extreme4", func_498(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 21:
			func_496(uParam1, "Fanatic1", func_498(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_497(iParam0), 1, 0);
			break;
		
		case 22:
			func_496(uParam1, "Fanatic2", func_498(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_497(iParam0), 1, 0);
			break;
		
		case 23:
			func_496(uParam1, "Fanatic3", func_498(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_497(iParam0), 0, 1);
			break;
		
		case 24:
			func_496(uParam1, "Hao1", func_498(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_497(iParam0), 0, 1);
			break;
		
		case 25:
			func_496(uParam1, "Hunting1", func_498(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 26:
			func_496(uParam1, "Hunting2", func_498(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 27:
			func_496(uParam1, "Josh1", func_498(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 28:
			func_496(uParam1, "Josh2", func_498(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_497(iParam0), 1, 1);
			break;
		
		case 29:
			func_496(uParam1, "Josh3", func_498(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_497(iParam0), 1, 1);
			break;
		
		case 30:
			func_496(uParam1, "Josh4", func_498(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 31:
			func_496(uParam1, "Maude1", func_498(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 32:
			func_496(uParam1, "Minute1", func_498(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 33:
			func_496(uParam1, "Minute2", func_498(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 34:
			func_496(uParam1, "Minute3", func_498(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 35:
			func_496(uParam1, "MrsPhilips1", func_498(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 36:
			func_496(uParam1, "MrsPhilips2", func_498(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 37:
			func_496(uParam1, "Nigel1", func_498(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 38:
			func_496(uParam1, "Nigel1A", func_498(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_497(iParam0), 1, 1);
			break;
		
		case 39:
			func_496(uParam1, "Nigel1B", func_498(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_497(iParam0), 1, 1);
			break;
		
		case 40:
			func_496(uParam1, "Nigel1C", func_498(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_497(iParam0), 1, 1);
			break;
		
		case 41:
			func_496(uParam1, "Nigel1D", func_498(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_497(iParam0), 1, 1);
			break;
		
		case 42:
			func_496(uParam1, "Nigel2", func_498(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_497(iParam0), 1, 1);
			break;
		
		case 43:
			func_496(uParam1, "Nigel3", func_498(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_497(iParam0), 1, 1);
			break;
		
		case 44:
			func_496(uParam1, "Omega1", func_498(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 45:
			func_496(uParam1, "Omega2", func_498(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 46:
			func_496(uParam1, "Paparazzo1", func_498(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 47:
			func_496(uParam1, "Paparazzo2", func_498(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 48:
			func_496(uParam1, "Paparazzo3", func_498(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 49:
			func_496(uParam1, "Paparazzo3A", func_498(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 50:
			func_496(uParam1, "Paparazzo3B", func_498(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 51:
			func_496(uParam1, "Paparazzo4", func_498(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 52:
			func_496(uParam1, "Rampage1", func_498(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 54:
			func_496(uParam1, "Rampage3", func_498(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 55:
			func_496(uParam1, "Rampage4", func_498(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 56:
			func_496(uParam1, "Rampage5", func_498(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_497(iParam0), 0, 0);
			break;
		
		case 53:
			func_496(uParam1, "Rampage2", func_498(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_497(iParam0), 1, 0);
			break;
		
		case 57:
			func_496(uParam1, "TheLastOne", func_498(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 58:
			func_496(uParam1, "Tonya1", func_498(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 59:
			func_496(uParam1, "Tonya2", func_498(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 60:
			func_496(uParam1, "Tonya3", func_498(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 61:
			func_496(uParam1, "Tonya4", func_498(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		case 62:
			func_496(uParam1, "Tonya5", func_498(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_497(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_496(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_497(int iParam0)
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

struct<2> func_498(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_499(iParam0) };
	if (unk_0x9E9AFDBF482248F6(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_499(int iParam0)
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

int func_500()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_501(&(Global_89962.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_501(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x398F092142D37E17(uParam0);
	iVar1 = func_502(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_502(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_81155[iVar0 /*34*/].f_6 == iParam0)
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

int func_503()
{
	if ((((Global_89962.f_11 == 0 || Global_89962.f_11 == 1) || Global_89962.f_11 == 2) || Global_89962.f_11 == 3) || Global_89962.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_504()
{
	if ((((Global_89962.f_11 == 0 || Global_89962.f_11 == 1) || Global_89962.f_11 == 2) || Global_89962.f_11 == 6) || Global_89962.f_11 == 3)
	{
		return 1;
	}
	if (Global_89962.f_11 == 5)
	{
		if (func_494(&(Global_89962.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_505(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_35462 = 1;
	}
	else
	{
		Global_35462 = 0;
	}
}

void func_506(int iParam0)
{
	unk_0xC48BE7195D873776(iParam0);
	unk_0xB3B57AEE7B7BA0E2(iParam0);
}

void func_507(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2D600F28499293DD();
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 3);
	}
	else if (unk_0x94E72F17611BCD3C(Global_89962.f_20, 3))
	{
		unk_0x1B4F451D66F090A7();
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 3);
	}
}

void func_508(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x94E72F17611BCD3C(Global_89962.f_20, 4))
		{
			func_510();
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 4);
		}
	}
	else
	{
		func_509();
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 4);
	}
}

void func_509()
{
	Global_17098.f_5 = 1;
}

void func_510()
{
	Global_17098.f_5 = 0;
}

void func_511()
{
	Global_84543 = 0;
	Global_84544 = 0;
}

void func_512()
{
	Global_89962 = 13;
	Global_89962.f_1 = -1;
	Global_89962.f_2 = 0;
	Global_89962.f_30 = 0f;
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 25);
	Global_89996 = 0;
	func_505(0);
	func_514();
	func_513();
	Global_89962.f_18 = -1;
	Global_89962.f_19 = -1;
}

void func_513()
{
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 22);
	unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 8);
}

void func_514()
{
	if (Global_89962.f_16 != 0)
	{
		unk_0x76D57BAF1F432EA7(&(Global_89962.f_16));
		Global_89962.f_16 = 0;
	}
	if (Global_89962.f_17 != 0)
	{
		unk_0x76D57BAF1F432EA7(&(Global_89962.f_17));
		Global_89962.f_17 = 0;
	}
}

int func_515()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

void func_516()
{
	Global_89997 = 1;
	if (unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1))
	{
		if (unk_0x9E9AFDBF482248F6(&Global_68477))
		{
			switch (func_79())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x9E9AFDBF482248F6(&Global_68477))
		{
			switch (func_79())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 25);
	}
}

void func_517()
{
	if (iLocal_398)
	{
		func_409(0, 1);
	}
	unk_0xE60DEFFB2A853900();
}

