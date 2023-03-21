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
	struct<20> Local_132[6];
	int iLocal_253 = 0;
	struct<6> Local_254[6];
	struct<6> Local_291[8];
	struct<9> Local_340[4];
	struct<7> Local_377[1];
	struct<7> Local_385 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_392 = 0;
	struct<6> Local_393 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_399 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_405 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_411 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422[3] = { 0, 0, 0 };
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	bool bLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	bool bLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	bool bLocal_455 = 0;
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	float fLocal_458 = 0f;
	float fLocal_459 = 0f;
	float fLocal_460 = 0f;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	char* sLocal_485 = NULL;
	char* sLocal_486 = NULL;
	char* sLocal_487 = NULL;
	char* sLocal_488[3] = { NULL, NULL, NULL };
	char[] cLocal_492[8] = 0;
	char[] cLocal_493[8] = 0;
	char* sLocal_494 = NULL;
	char* sLocal_495 = NULL;
	char* sLocal_496 = NULL;
	char* sLocal_497 = NULL;
	char* sLocal_498 = NULL;
	var uLocal_499 = 16;
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
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	int iLocal_664 = 0;
	struct<3> Local_665 = { 0, 0, 0 } ;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	char cLocal_671[24] = "";
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	char cLocal_677[24] = "";
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	struct<6> Local_683 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_689 = { 0, 0, 0 } ;
	struct<3> Local_692 = { 0, 0, 0 } ;
	struct<3> Local_695 = { 0, 0, 0 } ;
	struct<3> Local_698 = { 0, 0, 0 } ;
	struct<3> Local_701 = { 0, 0, 0 } ;
	struct<3> Local_704 = { 0, 0, 0 } ;
	struct<3> Local_707 = { 0, 0, 0 } ;
	struct<3> Local_710 = { 0, 0, 0 } ;
	int iLocal_713 = 0;
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
	bLocal_442 = true;
	cLocal_492 = "BB2AUD";
	cLocal_493 = "BBCAUD";
	sLocal_494 = "Trevor";
	sLocal_495 = "Maude";
	sLocal_496 = "maude_criminal_2";
	sLocal_497 = "maude_chair";
	sLocal_498 = "maude_laptop";
	StringCopy(&Local_665, "", 24);
	StringCopy(&cLocal_671, "PostKilled_BailBond2", 24);
	StringCopy(&cLocal_677, "MAUDE_MCS_3", 24);
	StringCopy(&Local_683, "", 24);
	Local_103 = { ScriptParam_0 };
	if (unk_0xBCA819F9975BEDFA(83))
	{
		if (iLocal_98 == 0)
		{
			Global_100411 = 0;
			func_532();
		}
		else
		{
			Global_100411 = 3;
			func_506(1);
			func_532();
		}
	}
	if (!func_494(1))
	{
		Global_100411 = 0;
		func_532();
	}
	unk_0x7E34CF542225E666(1);
	func_474();
	if (func_473())
	{
		iVar0 = func_472();
		if (Global_86001 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				if (unk_0x8432EA469FDB418D(Global_96040.f_2311.f_12.f_66))
				{
					func_431(&iLocal_713, 225.012f, 2310.695f, 77.257f, 218.1301f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				else
				{
					func_431(&iLocal_713, 232.0044f, 2314.844f, 76.9871f, 173.0429f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				}
				func_430(Local_698, fLocal_458, 1, 0);
				iLocal_101 = 2;
				func_419(1, 0);
				break;
			
			case 1:
				func_431(&iLocal_713, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				func_430(Local_689, 254.9762f, 0, 0);
				func_419(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (func_418(0))
	{
		if (func_417(unk_0x17B5CC8A8615737D()))
		{
			func_416(unk_0x17B5CC8A8615737D(), Local_698, fLocal_458, 0, 0);
			unk_0xBA7CD73403732191(0f);
			unk_0x503F20CB07C55470(0f, 1065353216);
		}
	}
	while (true)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			unk_0x271C07D02388CBCB(unk_0xBE369BE1BC57A796());
			unk_0xA7C880975F63452B(unk_0xBE369BE1BC57A796());
			Local_692 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			func_405();
			func_404();
			switch (iLocal_98)
			{
				case 0:
					func_397();
					break;
				
				case 1:
					func_386();
					break;
				
				case 2:
					func_380();
					break;
				
				case 3:
					func_374();
					break;
				
				case 6:
					func_369();
					break;
				
				case 7:
					func_306();
					break;
				
				case 4:
					func_122();
					break;
				
				case 5:
					func_114(1);
					break;
				
				case 8:
					func_111();
					break;
				
				case 9:
					func_70();
					break;
			}
			if (bLocal_442 == 0)
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
		if (func_69())
		{
			func_67(0, -1, 0);
		}
		func_34(iLocal_98);
		if (iLocal_98 == 4)
		{
			func_23(1, 0, 1);
		}
		else
		{
			func_23(1, 1, 1);
		}
		bLocal_442 = true;
		iLocal_443 = 0;
		if (iLocal_98 == 5)
		{
			func_22(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	
	if (func_21(unk_0x17B5CC8A8615737D()))
	{
		func_19();
		unk_0xD12BCC85C2F8B1DE();
		if (unk_0x9E123D5FF2973C60())
		{
			unk_0x2E2945F5602A744F(1);
		}
		switch (iLocal_98)
		{
			case 0:
				if (iLocal_100 == 1)
				{
					if (!func_69())
					{
						func_18(unk_0x17B5CC8A8615737D(), Local_701, fLocal_459, 0, 1);
						if (func_21(Local_112.f_9))
						{
							func_17(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(Local_112.f_9, 1));
						}
						unk_0xBA7CD73403732191(0f);
						unk_0x503F20CB07C55470(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_99 == 1)
							{
								if (func_417(unk_0x17B5CC8A8615737D()))
								{
									func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
								}
							}
						}
					}
					iLocal_427 = 1;
					iLocal_101 = 2;
					func_7();
					iLocal_100 = 2;
				}
				break;
			
			case 1:
				iLocal_427 = 1;
				iLocal_426 = 1;
				if (iLocal_100 == 1)
				{
					if (!func_69())
					{
						func_18(unk_0x17B5CC8A8615737D(), Local_704, fLocal_460, 0, 1);
						unk_0xBA7CD73403732191(0f);
						unk_0x503F20CB07C55470(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_99 == 2)
							{
								if (func_417(unk_0x17B5CC8A8615737D()))
								{
									func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
								}
							}
						}
					}
					Local_112.f_17 = (unk_0x94E3E074F38DF86C() - 5000);
					func_7();
					iLocal_100 = 2;
				}
				break;
			
			case 2:
				iLocal_417 = 1;
				if (iLocal_100 == 1)
				{
					iLocal_448 = 1;
					iLocal_418 = 1;
					iLocal_419 = 1;
					if (iLocal_473 > 0)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_473 - 1))
						{
							if (func_21(Local_132[iVar0 /*20*/]))
							{
								unk_0xE9582AAEA2A5C794(Local_132[iVar0 /*20*/], joaat("weapon_sniperrifle"));
								unk_0x4B04B4FAE554FA03(Local_132[iVar0 /*20*/], 0);
							}
							iVar0++;
						}
					}
					if (!func_69())
					{
						func_5(Local_112.f_9, 5f);
						if (iLocal_443 == 0)
						{
							if (iLocal_99 == 3)
							{
								if (func_417(unk_0x17B5CC8A8615737D()))
								{
									func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
								}
							}
						}
					}
					func_19();
					func_3();
					func_7();
					iLocal_100 = 2;
				}
				break;
			
			case 3:
				iLocal_437 = 1;
				if (iLocal_100 == 1)
				{
					func_416(Local_112.f_9, Local_689, 0f, 0, 0);
					if (!func_69())
					{
						func_416(unk_0x17B5CC8A8615737D(), Local_689, 254.9762f, 0, 0);
						unk_0xBA7CD73403732191(0f);
						unk_0x503F20CB07C55470(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_99 == 4)
							{
								if (func_417(unk_0x17B5CC8A8615737D()))
								{
									func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
								}
							}
						}
					}
					func_7();
					iLocal_100 = 2;
				}
				break;
			
			case 4:
				if (iLocal_100 == 1)
				{
					if (unk_0x1B76B77EDF24A933())
					{
						unk_0x404A255180289CD1(0);
					}
				}
				break;
			
			case 6:
				if (iLocal_100 == 1)
				{
					unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
					unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
					func_7();
				}
				break;
			
			case 7:
				if (iLocal_100 == 1)
				{
					iLocal_419 = 1;
					if (!func_69())
					{
						func_5(Local_112.f_9, 2.5f);
						if (iLocal_443 == 0)
						{
							if (iLocal_99 == 3)
							{
								if (func_417(unk_0x17B5CC8A8615737D()))
								{
									func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
								}
							}
						}
					}
					func_19();
					func_3();
					func_7();
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
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

int func_5(int iParam0, float fParam1)
{
	struct<3> Var0;
	
	if (func_21(iParam0))
	{
		if (func_6(unk_0x57240623C1BC6E88(iParam0, 1), &Var0, fParam1, 0))
		{
			unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Var0, 1, 0, 0, 1);
			func_17(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iParam0, 1));
			return 1;
		}
	}
	return 0;
}

bool func_6(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	
	Var1 = { unk_0x3CE07141081BBC2B(Param0, unk_0x6B1497B2FDBC8466(0f, 360f), 0f, uParam4, 0f) };
	if (unk_0x4F34E573D7F5024B(Var1, &uVar0, 0))
	{
		Var1.f_2 = uVar0;
	}
	*uParam3 = { Var1 };
	return unk_0xA9CBE5CF275A6B93(Var1, iParam5, uParam3, 0);
}

void func_7()
{
	int iVar0;
	
	func_8();
	Local_112.f_17 = 0;
	Local_112.f_18 = 0;
	Local_112.f_19 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_473 - 1))
	{
		Local_132[iVar0 /*20*/].f_15 = 0;
		Local_132[iVar0 /*20*/].f_16 = 0;
		Local_132[iVar0 /*20*/].f_17 = 0;
		iVar0++;
	}
}

void func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56.f_0)
	{
		func_9(&(Local_56[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_10(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xB1399416C9156684(Param0, fParam3, iParam4, 127);
	if (unk_0x5EBBA0877DBAC8A8(uVar0))
	{
		iVar1 = (unk_0x94E3E074F38DF86C() + iParam5);
		while (!unk_0x3D01C3117AA19C90(uVar0) && unk_0x94E3E074F38DF86C() < iVar1)
		{
			if (bParam7)
			{
				func_12();
			}
			if (bParam6)
			{
				func_11();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x94E3E074F38DF86C() < iVar1)
		{
		}
		unk_0xF032432C4371EF58(uVar0);
	}
}

void func_11()
{
	Global_17151.f_6 = 1;
}

void func_12()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_16(0))
		{
			func_13(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_13(int iParam0)
{
	if (Global_14604)
	{
		func_15(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_14())
	{
		Global_14443.f_1 = 3;
	}
}

int func_14()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_16(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_16(int iParam0)
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

void func_17(int iParam0, struct<2> Param1, Vector3 vParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	fVar4 = (Param1.f_0 - Var0.f_0);
	fVar5 = (Param1.f_1 - Var0.f_1);
	if (fVar5 != 0f)
	{
		fVar3 = unk_0xB318EAE363BA0C2D(fVar4, fVar5);
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
	unk_0x0608D50823C6AA6D(iParam0, fVar3);
}

int func_18(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_417(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x4F34E573D7F5024B(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0x5DC8C2F2F8A363C2(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x0608D50823C6AA6D(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_19()
{
	Global_14611 = 0;
	func_20();
}

void func_20()
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

int func_21(int iParam0)
{
	if (func_417(iParam0))
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_22(int iParam0, bool bParam1)
{
	if (unk_0x25BD4C26D84038CD() || unk_0x46EEE08565CE19CA())
	{
		if (!unk_0x5C0856D86B18EE57())
		{
			unk_0xC7845898207D067F(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x30F06AB0772AFB80())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	func_24(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x503F20CB07C55470(0f, 1065353216);
		unk_0xBA7CD73403732191(0f);
	}
	if (iParam1 == 1)
	{
		func_22(500, 0);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0x592069F95C314814();
	unk_0x8549D98B1C1FCFA7(uVar0, 0);
	unk_0xC8C3338D4DBC00FE(iVar0, iParam3, 0);
	func_25(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x2D28D5B324F77D2D(1);
		unk_0xE418A8E16B02C0AC(1);
	}
	unk_0x2E2945F5602A744F(1);
	if (iParam0 == 1)
	{
		unk_0x990821B6B4780D69(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_43 != 0 && iLocal_43 != joaat("object")) && iLocal_43 != joaat("gadget_parachute"))
		{
			if (func_417(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iLocal_43, 0))
				{
					unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), iLocal_43, 0);
				}
			}
		}
	}
	if (func_21(unk_0x17B5CC8A8615737D()))
	{
		unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
	}
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_33(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_14())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_33(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_30(unk_0xBE369BE1BC57A796())) && !func_27(unk_0xBE369BE1BC57A796(), 0)) && !func_26())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_30(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_26()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315213[iVar1] == 1)
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

int func_29()
{
	return Global_1312735;
}

int func_30(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_32(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_33(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

void func_34(int iParam0)
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		switch (iParam0)
		{
			case 4:
				func_66(&cLocal_677);
				func_65();
				while (!func_58(1, 1093140480, 0) || !func_35())
				{
					func_66(&cLocal_677);
					func_65();
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
}

int func_35()
{
	if (func_57(Local_692, Local_385.f_1, 210f))
	{
		if (!iLocal_452)
		{
			if ((func_56(2) && func_55(&Local_393, Local_393.f_5, Local_393.f_1, Local_393.f_4, 1)) && func_55(&Local_399, Local_399.f_5, Local_399.f_1, Local_399.f_4, 1))
			{
				if (func_52(&Local_385, Local_385.f_6, Local_385.f_1, Local_385.f_4, 1, 0, 1))
				{
					func_47();
					iLocal_452 = 1;
				}
			}
		}
		if (!unk_0x23E9113C762466ED(Local_405.f_0))
		{
			if (func_57(Local_692, Local_405.f_1, 150f))
			{
				if (unk_0x8B98C3C1BE2D3F12(Local_405.f_1, 10f, func_46(), 0))
				{
					Local_405.f_0 = unk_0x29280EF6724677F5(Local_405.f_1, 10f, func_46(), 1, 0, 1);
					if (func_417(Local_405.f_0))
					{
						unk_0x5DC8C2F2F8A363C2(Local_405.f_0, func_45(), 1, 0, 0, 1);
						unk_0x0608D50823C6AA6D(Local_405.f_0, func_44());
						unk_0x98F0FA127445E343(Local_405.f_0, 1);
					}
				}
			}
		}
		if (!unk_0x23E9113C762466ED(Local_411.f_0))
		{
			if (func_57(Local_692, Local_411.f_1, 150f))
			{
				if (unk_0x8B98C3C1BE2D3F12(Local_411.f_1, 10f, func_43(), 0))
				{
					Local_411.f_0 = unk_0x29280EF6724677F5(Local_411.f_1, 10f, func_43(), 1, 0, 1);
				}
			}
		}
	}
	else if (!unk_0xF7E1BD8196545EE3(Local_385.f_1, 2.5f))
	{
		func_40(&Local_385, 1);
		unk_0xF9FFB9857F3120F8(func_39());
		func_36(&Local_393, 1);
		func_36(&Local_399, 1);
		func_36(&Local_405, 0);
		func_36(&Local_411, 0);
		iLocal_452 = 0;
	}
	return iLocal_452;
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

void func_37(var uParam0, bool bParam1)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF928485DD4C9E3C3(*uParam0))
		{
			unk_0xB2E72B5CFE1EC372(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x7572E8CAC3330ACE(uParam0);
		}
		else
		{
			unk_0x6CCB4081AEF003A1(*uParam0);
		}
	}
}

void func_38(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF928485DD4C9E3C3(*uParam0))
		{
			unk_0xB2E72B5CFE1EC372(*uParam0, 1, 1);
		}
		unk_0x1AAFEA627BB9C402(uParam0);
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
	if (unk_0x23E9113C762466ED(*iParam0))
	{
		if (!unk_0xCA41A00932714525(*iParam0))
		{
			unk_0x4114B83B329702FF(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFFAC04A19BFE8F03(*iParam0);
			}
			unk_0x650BB0E111420EAF(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC61640A821F277C(*iParam0, 0);
			}
		}
		unk_0x6500ADB01E821BC0(iParam0);
	}
}

void func_42(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(*uParam0, 0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
		}
		if (!unk_0xC26429B504BA534D(*uParam0))
		{
			unk_0xF0F77C99098F999B(*uParam0, 1, 0);
		}
		unk_0x478AE709A466CB7E(uParam0);
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
	
	if (func_21(Local_385.f_0))
	{
		if (func_417(Local_393.f_0))
		{
			if (func_56(2))
			{
				uVar0 = unk_0x356EABB012B22D07(func_51(), func_50(), 2);
				unk_0x8B06F7FDDA8B98FB(uVar0, 1);
				unk_0xD3BB86584359B533(uVar0, 0);
				unk_0xA17D768ED938600C(Local_385.f_0, uVar0, func_39(), func_49(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				unk_0x9C8510D976CE0748(Local_393.f_0, uVar0, func_48(), func_39(), 1000f, -8f, iVar1, 1148846080);
				unk_0xCC61640A821F277C(Local_385.f_0, 1);
				unk_0x4DF0B516187EED5A(Local_385.f_0, 0);
				unk_0x6F65279C9BC14EDB(Local_385.f_0, 0);
				unk_0x3BB70315907D9456(Local_385.f_0, joaat("player"));
				unk_0x6C6C9684BB95A6C5(Local_385.f_0, 0);
				unk_0x84E4BE19D702B6C5(Local_385.f_0, 0);
				unk_0x650BB0E111420EAF(Local_385.f_0, 1);
				unk_0x6018E338F7ABCE75(Local_385.f_0, 118, 0);
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
	if (!unk_0x23E9113C762466ED(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0x2AD5F4170F4ACBEB(26, iParam1, Param2, uParam5, 1, 1);
			if (unk_0x23E9113C762466ED(*uParam0))
			{
				if (bParam7)
				{
					unk_0x98F0FA127445E343(*uParam0, 1);
				}
				if (bParam8)
				{
					if (!unk_0xCA41A00932714525(*uParam0))
					{
						unk_0xCC61640A821F277C(*uParam0, 1);
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
			if (unk_0x9F746898F7881612(iParam0))
			{
				unk_0x924CDE68BA2ED3BA(iParam0);
			}
		}
		else
		{
			unk_0x924CDE68BA2ED3BA(iParam0);
		}
	}
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xE1324F59713746FA(iParam0);
	if (unk_0x9F746898F7881612(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_55(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x23E9113C762466ED(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0x521A82CF998EDB21(iParam1, Param2, 1, 1, 0);
			if (unk_0x23E9113C762466ED(*uParam0))
			{
				unk_0x0608D50823C6AA6D(*uParam0, uParam5);
				unk_0xF880A68A9F678D9F(*uParam0, 1);
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
			unk_0xA73AE78D2491E6E1("BBONDS", 0);
			if (unk_0x657558590DD37F85(0))
			{
				return 1;
			}
			break;
		
		case 2:
			unk_0xA0E7D0E8FE126EE8(func_39());
			if (unk_0xF4F8AE8DD0F08C1E(func_39()))
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xA0E7D0E8FE126EE8("oddjobs@bailbond_surf_farm");
			if (unk_0xF4F8AE8DD0F08C1E("oddjobs@bailbond_surf_farm"))
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
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if ((!unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()) && !unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D())) && !unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
		{
			if (!func_63(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_62(unk_0x17B5CC8A8615737D(), -828834893))
				{
					unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 0, 0);
				}
			}
			if (unk_0x14E01C4EC4170496(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_61();
	if (func_60())
	{
		func_19();
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
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
	}
	return 1;
}

bool func_59()
{
	bool bVar0;
	
	bVar0 = unk_0x77888DFE5B94E7E5();
	if (!Global_69701)
	{
		if (!bVar0)
		{
			Global_69701 = 1;
		}
	}
	return bVar0;
}

int func_60()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	unk_0xD1BB2AD73E7FC3A7(0, 21, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 37, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 25, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 141, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 24, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 257, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 22, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 23, 1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_21(iParam0))
	{
		if (unk_0x1F8F07D86DA1A701(iParam0, iParam1) == 1 || unk_0x1F8F07D86DA1A701(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_64(uParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(uParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_64(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

void func_65()
{
	if (func_417(Local_112.f_9))
	{
		if (unk_0x6E5BBCE1B1E5B2EB())
		{
			unk_0x0A970CDB1CD24DA6(sLocal_496, Local_112.f_9, 0);
		}
	}
	if (func_417(Local_385.f_0))
	{
		if (unk_0x6E5BBCE1B1E5B2EB())
		{
			unk_0x0A970CDB1CD24DA6(sLocal_495, Local_385.f_0, 0);
		}
	}
}

void func_66(char[4] cParam0)
{
	func_25(1, 1, 0, 0);
	unk_0xF7CF05FEB40E538B(cParam0, 8);
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	if (func_473() && func_69())
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
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
			}
		}
		unk_0xACBDD7C9D459A6D9();
		func_68(0);
	}
}

void func_68(int iParam0)
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

bool func_69()
{
	return unk_0x48B8265059381CD0(Global_91491.f_20, 13);
}

void func_70()
{
	char* sVar0;
	int iVar1;
	
	sVar0 = 0;
	switch (iLocal_100)
	{
		case 0:
			unk_0xD12BCC85C2F8B1DE();
			unk_0x2E2945F5602A744F(1);
			if (func_60())
			{
				func_19();
			}
			func_107();
			Global_100411 = 3;
			if (iLocal_102 == 4)
			{
				if (func_21(Local_385.f_0))
				{
					func_106(&uLocal_499, 4);
					func_105(Local_385.f_0, 0);
					if (!unk_0x872115A210435770(Local_385.f_0))
					{
						if (func_104(Local_385.f_0, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 35f))
						{
							unk_0x22217EB6A9BAC6EE(Local_385.f_0, 0);
							func_102(Local_385.f_0, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (func_21(Local_385.f_0))
				{
					func_105(Local_385.f_0, 0);
				}
				if (unk_0x23E9113C762466ED(Local_399.f_0))
				{
					unk_0x98F0FA127445E343(Local_399.f_0, 0);
				}
				if (unk_0x23E9113C762466ED(Local_405.f_0))
				{
					unk_0x98F0FA127445E343(Local_405.f_0, 0);
				}
				unk_0xA0E7D0E8FE126EE8(func_101());
				if (func_99(&Local_385, &Local_393, &iLocal_480))
				{
					iLocal_444 = 1;
				}
			}
			else if (iLocal_102 == 2)
			{
				iLocal_434 = 0;
				StringCopy(&Local_665, "BBC_T12", 24);
			}
			if (func_21(Local_112.f_9))
			{
				if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
				{
					unk_0xFB2D342CDD441DD9(Local_112.f_9);
				}
				func_98(Local_112.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_473 - 1))
			{
				func_98(Local_132[iVar1 /*20*/], 1);
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
			func_506(1);
			iLocal_100 = 1;
			break;
		
		case 1:
			if (func_96())
			{
				func_90(1);
				func_532();
			}
			else
			{
				if (!iLocal_434)
				{
					if (func_60())
					{
						func_3();
					}
					if (iLocal_102 == 4)
					{
						if (func_21(Local_385.f_0))
						{
							if (func_104(Local_385.f_0, Local_692, 35f))
							{
								func_89(&uLocal_499, 4, Local_385.f_0, "MAUDE", 0, 1);
								if (func_73(&uLocal_499, cLocal_493, &Local_665, 4, 0, 0, 0))
								{
									iLocal_434 = 1;
								}
							}
						}
					}
					else if (func_73(&uLocal_499, cLocal_493, &Local_665, 4, 0, 0, 0))
					{
						iLocal_434 = 1;
					}
				}
				if (iLocal_102 == 4)
				{
					if (!iLocal_444)
					{
						unk_0xA0E7D0E8FE126EE8(func_101());
						if (func_99(&Local_385, &Local_393, &iLocal_480))
						{
							iLocal_444 = 1;
						}
					}
					else if (func_21(Local_385.f_0))
					{
						if (!func_62(Local_385.f_0, 1805844857))
						{
							if (!unk_0x48368B3E430594FA(Local_385.f_0))
							{
								if (!unk_0x5132972D2BBC5A62(Local_385.f_0, func_101(), func_72(), 3))
								{
									func_71(&Local_385);
									unk_0xCA58071CE9CCE891(Local_385.f_0, unk_0x17B5CC8A8615737D(), 50f, -1, 0, 0);
									unk_0x650BB0E111420EAF(Local_385.f_0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_71(int iParam0)
{
	if (func_21(*iParam0))
	{
		unk_0xB195EE9DB37DA7F2(*iParam0, 2, 0);
		unk_0xB195EE9DB37DA7F2(*iParam0, 64, 0);
		unk_0xB195EE9DB37DA7F2(*iParam0, 128, 0);
		unk_0xB195EE9DB37DA7F2(*iParam0, 8, 0);
		unk_0xB195EE9DB37DA7F2(*iParam0, 1, 0);
		unk_0xB195EE9DB37DA7F2(*iParam0, 32, 0);
		unk_0xC96275575DC981A9(*iParam0, 5, 0);
		unk_0xC96275575DC981A9(*iParam0, 17, 1);
		unk_0x6018E338F7ABCE75(*iParam0, 118, 1);
	}
}

char* func_72()
{
	return "female_Flee_Table_Left_Maude";
}

int func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (unk_0x75342B3CD0FB5275())
		{
			if (unk_0xBE675F7A607B46B0(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_74(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
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
					func_20();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_86();
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
				func_79();
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
				if (func_78())
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
			if (func_14())
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
			func_77();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_76();
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
		func_20();
	}
	return 0;
}

void func_76()
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

void func_77()
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

int func_78()
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

void func_79()
{
	if (func_85(14))
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
		Global_14443 = func_80();
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

int func_80()
{
	func_81();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_81()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_84(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_83(unk_0x17B5CC8A8615737D());
			if (func_82(iVar0) && (!func_85(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_82(Global_101700.f_2095.f_539.f_3549))
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

bool func_82(int iParam0)
{
	return iParam0 < 3;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_84(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_84(int iParam0)
{
	if (func_82(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_85(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_86()
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

bool func_87(int iParam0, int iParam1)
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_89(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_90(bool bParam0)
{
	int iVar0;
	
	if (iLocal_471 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_471 - 1))
		{
			func_36(&(Local_291[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_469 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_469 - 1))
		{
			func_36(&(Local_340[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_472 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_472 - 1))
		{
			func_95(&(Local_377[iVar0 /*7*/]));
			iVar0++;
		}
	}
	func_36(&Local_393, bParam0);
	func_36(&Local_399, bParam0);
	func_36(&Local_405, 0);
	func_36(&Local_411, 0);
	if (func_21(Local_112.f_9))
	{
		if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
		{
			if (unk_0x143230304C45DBF3(Local_112.f_9, unk_0xDC8370280C455166(unk_0xBE369BE1BC57A796())))
			{
				unk_0xFB2D342CDD441DD9(Local_112.f_9);
			}
		}
		unk_0x4114B83B329702FF(Local_112.f_9, 0);
		unk_0xCC61640A821F277C(Local_112.f_9, 0);
		if (Global_100411 == 0)
		{
			unk_0x650BB0E111420EAF(Local_112.f_9, 0);
		}
		else
		{
			unk_0x650BB0E111420EAF(Local_112.f_9, 1);
		}
	}
	func_40(&(Local_112.f_9), bParam0);
	if (func_21(Local_385.f_0))
	{
		unk_0xCC61640A821F277C(Local_385.f_0, 0);
		unk_0x650BB0E111420EAF(Local_385.f_0, 1);
	}
	func_40(&Local_385, bParam0);
	if (iLocal_473 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_473 - 1))
		{
			if (iLocal_111 == 4)
			{
				if (func_21(Local_132[iVar0 /*20*/]))
				{
					unk_0x3BB70315907D9456(Local_132[iVar0 /*20*/], -2065892691);
					unk_0xCC61640A821F277C(Local_132[iVar0 /*20*/], 0);
					if (Global_100411 == 0)
					{
						unk_0x650BB0E111420EAF(Local_132[iVar0 /*20*/], 0);
					}
					else
					{
						unk_0x650BB0E111420EAF(Local_132[iVar0 /*20*/], 1);
					}
				}
			}
			func_40(&(Local_132[iVar0 /*20*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_470 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_470 - 1))
		{
			func_91(&(Local_254[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_93(uParam0);
	}
	else
	{
		func_92(uParam0);
	}
}

void func_92(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		unk_0xA929B2923D14E2F8(*uParam0, 0);
		if (unk_0xC26429B504BA534D(*uParam0) && unk_0x45CA7F42CA715849(*uParam0, 1))
		{
			unk_0x921CF98C637B0043(uParam0);
		}
	}
}

void func_93(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xC26429B504BA534D(*uParam0))
		{
			unk_0xF0F77C99098F999B(*uParam0, 1, 0);
		}
		if (func_94(*uParam0))
		{
			if (unk_0xC26429B504BA534D(*uParam0) && unk_0x45CA7F42CA715849(*uParam0, 1))
			{
				if (func_417(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *uParam0, 0))
					{
						unk_0x921CF98C637B0043(uParam0);
						return;
					}
				}
				unk_0x813865264334331D(uParam0);
			}
		}
		else
		{
			if (func_417(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *uParam0, 0))
				{
					unk_0x921CF98C637B0043(uParam0);
					return;
				}
			}
			unk_0x813865264334331D(uParam0);
		}
	}
}

int func_94(int iParam0)
{
	if (func_417(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_95(var uParam0)
{
	if (unk_0xAF6D1E258B973F1D(*uParam0))
	{
		unk_0xC2E11A6D29A07A71(*uParam0);
	}
}

int func_96()
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

void func_97(char* sParam0)
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

void func_98(int iParam0, bool bParam1)
{
	if (func_21(iParam0))
	{
		unk_0xC96275575DC981A9(iParam0, 5, 0);
		unk_0xC96275575DC981A9(iParam0, 17, 1);
		unk_0xB195EE9DB37DA7F2(iParam0, 512, 0);
		if (!func_62(iParam0, 1805844857))
		{
			unk_0x15848523A8959DBC(iParam0);
			unk_0xFFAC04A19BFE8F03(iParam0);
			unk_0x4718A774D9248520(iParam0, unk_0x17B5CC8A8615737D(), 3000, 0, 2);
			unk_0xCA58071CE9CCE891(iParam0, unk_0x17B5CC8A8615737D(), 10000f, -1, 0, 0);
		}
		if (bParam1)
		{
			unk_0xCC61640A821F277C(iParam0, 1);
		}
		unk_0x650BB0E111420EAF(iParam0, 1);
	}
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_21(*iParam0))
	{
		if (unk_0x5132972D2BBC5A62(*iParam0, func_39(), func_49(), 3))
		{
			if (!unk_0x7F4AE93855973529(*iParam0) || unk_0x7276DD47CA44085D(*iParam0))
			{
				unk_0xA0E7D0E8FE126EE8(func_101());
				if (unk_0xF4F8AE8DD0F08C1E(func_101()))
				{
					*iParam2 = unk_0x356EABB012B22D07(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x8B06F7FDDA8B98FB(*iParam2, 0);
					unk_0xD3BB86584359B533(*iParam2, 0);
					if (func_62(*iParam0, 1785177548))
					{
						unk_0x36CA2EF7ACE06D15(*iParam0, -1000f, 1);
					}
					unk_0xA17D768ED938600C(*iParam0, *iParam2, func_101(), func_72(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xDEAF24B058321A05(*iParam0, 0, 0);
					if (func_417(*iParam1))
					{
						if (unk_0x5132972D2BBC5A62(*iParam1, func_39(), func_48(), 3))
						{
							unk_0x36CA2EF7ACE06D15(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0x9C8510D976CE0748(*iParam1, *iParam2, func_100(), func_101(), 16f, -4f, iVar0, 1148846080);
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
	unk_0xECF05B7D463A3321(iParam0, sParam1, sParam2, func_103(iParam3), 0);
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
	return unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_105(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_21(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x0E29C61F26D96FDB(0, iVar1);
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
		if (unk_0x81E2E02C57D459E6(iParam0))
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
	func_110(iLocal_473);
	func_109(&(Local_112.f_8));
	func_108(&Local_112);
	func_109(&uLocal_456);
}

void func_108(var uParam0)
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

void func_109(var uParam0)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x5ACBCE67F0494242(*uParam0, 0);
		unk_0x020DF7300725ECAB(uParam0);
	}
}

void func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		func_108(&(Local_132[iVar0 /*20*/].f_6));
		iVar0++;
	}
}

void func_111()
{
	int iVar0;
	struct<6> Var1;
	
	Var1 = 4;
	Var1.f_5 = 3;
	switch (iLocal_100)
	{
		case 0:
			unk_0xD12BCC85C2F8B1DE();
			unk_0x2E2945F5602A744F(1);
			if (func_60())
			{
				func_19();
			}
			func_107();
			func_40(&Local_385, 1);
			unk_0xDE574EA7A7A2CAF8(5, joaat("player"), iLocal_664);
			unk_0xDE574EA7A7A2CAF8(5, iLocal_664, joaat("player"));
			iVar0 = 0;
			while (iVar0 <= (iLocal_473 - 1))
			{
				if (func_21(Local_132[iVar0 /*20*/]))
				{
					unk_0x3BB70315907D9456(Local_132[iVar0 /*20*/], iLocal_664);
					if (!unk_0x48368B3E430594FA(Local_132[iVar0 /*20*/]))
					{
						func_113(iVar0);
					}
				}
				iVar0++;
			}
			iLocal_477 = unk_0x94E3E074F38DF86C();
			iLocal_100 = 1;
			break;
		
		case 1:
			if (func_112(iLocal_477, 500))
			{
				if (!iLocal_435)
				{
					if (func_60())
					{
						func_19();
						func_3();
					}
					if (func_73(&uLocal_499, cLocal_493, "BBC_PK1", 4, 0, 0, 0))
					{
						iLocal_435 = 1;
					}
				}
				if (!iLocal_445)
				{
					unk_0xFCDDC89C28E82BB4(&cLocal_671);
					if (unk_0x32B1F051FF487881(&cLocal_671))
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_473 - 1))
						{
							if (iVar0 < Var1.f_0)
							{
								Var1[iVar0] = Local_132[iVar0 /*20*/];
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (iLocal_470 - 1))
						{
							if (iVar0 < Var1.f_5)
							{
								Var1.f_5[iVar0] = Local_254[iVar0 /*6*/];
							}
							iVar0++;
						}
						unk_0xB8BA7F44DF1575E1(&cLocal_671, &Var1, 9, 512);
						unk_0x07481837BFD9C1CD(&cLocal_671);
						iLocal_445 = 1;
					}
				}
				if (iLocal_435 && iLocal_445)
				{
					func_114(2);
				}
				if (func_112(iLocal_477, 1500))
				{
					func_114(2);
				}
			}
			break;
	}
}

bool func_112(int iParam0, int iParam1)
{
	return (unk_0x94E3E074F38DF86C() - iParam0) > iParam1;
}

void func_113(int iParam0)
{
	if (func_21(Local_132[iParam0 /*20*/]))
	{
		unk_0xFFAC04A19BFE8F03(Local_132[iParam0 /*20*/]);
		unk_0x15848523A8959DBC(Local_132[iParam0 /*20*/]);
		unk_0xEF9294ED57E4AC3D(Local_132[iParam0 /*20*/]);
		unk_0xB84298F7B203EA5A(Local_132[iParam0 /*20*/], 30f);
		unk_0x9593ABA7B045F264(Local_132[iParam0 /*20*/], 30f);
		unk_0x1247C00E9DC4EDDD(Local_132[iParam0 /*20*/], 30f);
		unk_0x73655D4147D2FFBC(Local_132[iParam0 /*20*/], 0);
		unk_0xC96275575DC981A9(Local_132[iParam0 /*20*/], 1, 0);
		unk_0xC96275575DC981A9(Local_132[iParam0 /*20*/], 3, 1);
		unk_0xC96275575DC981A9(Local_132[iParam0 /*20*/], 5, 1);
		unk_0xC96275575DC981A9(Local_132[iParam0 /*20*/], 0, 1);
		unk_0xB195EE9DB37DA7F2(Local_132[iParam0 /*20*/], 512, 1);
		unk_0xFA4023BBD5BCB8B5(Local_132[iParam0 /*20*/], unk_0x0E29C61F26D96FDB(10, 20));
		unk_0x5B36DF5C54D0170F(Local_132[iParam0 /*20*/], unk_0x0E29C61F26D96FDB(15, 20));
		unk_0x9CE039D54B14B412(Local_132[iParam0 /*20*/], 445831135);
		if (unk_0x0E29C61F26D96FDB(0, 2) == 0)
		{
			unk_0x6DE4D679A0565F8A(Local_132[iParam0 /*20*/], unk_0x57240623C1BC6E88(Local_132[iParam0 /*20*/], 1), 45f, 0, 0);
		}
		else
		{
			unk_0x6DE4D679A0565F8A(Local_132[iParam0 /*20*/], unk_0x57240623C1BC6E88(Local_132[iParam0 /*20*/], 1), 35f, 0, 0);
		}
		unk_0x4718A774D9248520(Local_132[iParam0 /*20*/], unk_0x17B5CC8A8615737D(), 3000, 0, 2);
		unk_0x7DD7196E1A0C1D43(Local_132[iParam0 /*20*/], unk_0x17B5CC8A8615737D(), 0, 16);
		unk_0xCC61640A821F277C(Local_132[iParam0 /*20*/], 0);
		Local_132[iParam0 /*20*/].f_14 = 2;
	}
}

void func_114(int iParam0)
{
	func_22(500, 1);
	func_115(func_121(Local_103.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_100411 = 1;
	}
	else
	{
		Global_100411 = 2;
	}
	func_532();
}

void func_115(int iParam0, int iParam1, int iParam2)
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
		func_120((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_116();
	}
}

void func_116()
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
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_119(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_118() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_117();
				}
			}
		}
	}
}

int func_117()
{
	if (func_418(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

int func_118()
{
	return Global_25190;
}

int func_119(int iParam0, int iParam1)
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

int func_120(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_121(int iParam0)
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

void func_122()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_100)
	{
		case 0:
			func_66(&cLocal_677);
			func_65();
			if (func_35())
			{
				if (func_58(1, 10.5f, 1))
				{
					unk_0xD9C496FEAA81FF4A(unk_0x17B5CC8A8615737D(), sLocal_494, 0, 0, 0);
					if (func_417(Local_385.f_0))
					{
						unk_0xD9C496FEAA81FF4A(Local_385.f_0, sLocal_495, 0, 0, 0);
					}
					if (func_417(Local_112.f_9))
					{
						unk_0xD9C496FEAA81FF4A(Local_112.f_9, sLocal_496, 0, 0, 0);
					}
					if (func_417(Local_393.f_0))
					{
						unk_0xD9C496FEAA81FF4A(Local_393.f_0, sLocal_497, 0, 0, 0);
					}
					if (func_417(Local_399.f_0))
					{
						unk_0xD9C496FEAA81FF4A(Local_399.f_0, sLocal_498, 0, 0, 0);
					}
					unk_0x51C344BE3DCB5CB5(0);
					unk_0x4EDE34FBADD967A6(0);
					func_22(800, 0);
					func_188(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_187(&Var0, &Var3, &fVar9);
					Var6 = { func_186() };
					if (func_183(Var6, 0))
					{
						func_176(Var0, Var3, fVar9, 2719.87f, 4143.46f, 43.46f, 261.91f, 1, 1, 1, 0, 0);
						func_124(2719.87f, 4143.46f, 43.46f, 261.91f, 0, 145);
					}
					else
					{
						func_176(Var0, Var3, fVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						func_124(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (func_21(Local_112.f_9))
					{
						if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
						{
							unk_0xFB2D342CDD441DD9(Local_112.f_9);
						}
						unk_0x15848523A8959DBC(Local_112.f_9);
						unk_0x5DC8C2F2F8A363C2(Local_112.f_9, 2724.02f, 4145.08f, 43.29f, 1, 0, 0, 1);
						unk_0x0608D50823C6AA6D(Local_112.f_9, -84.2f);
						unk_0x15848523A8959DBC(Local_112.f_9);
					}
					bLocal_450 = false;
					iLocal_100 = 1;
				}
			}
			break;
		
		case 1:
			if (func_417(Local_393.f_0))
			{
				if (func_21(Local_385.f_0))
				{
					if (unk_0x649012AFAC9B7CD0(sLocal_495, 0) && unk_0x649012AFAC9B7CD0(sLocal_497, 0))
					{
						func_47();
					}
				}
			}
			if (unk_0x649012AFAC9B7CD0(sLocal_494, 0))
			{
				unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Walk"), 0, 1, 0);
				unk_0x5436326547492A67(unk_0xBE369BE1BC57A796(), 1f, 2000, 0, 1, 0);
				bLocal_450 = true;
			}
			if (!bLocal_450)
			{
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(0f, 1065353216);
			}
			if (!unk_0x1B76B77EDF24A933())
			{
				if (unk_0x8AE74E6771D8FA39() && unk_0x25BD4C26D84038CD())
				{
					unk_0xBA7CD73403732191(0f);
					unk_0x503F20CB07C55470(0f, 1065353216);
				}
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (unk_0x1B76B77EDF24A933())
			{
				unk_0x404A255180289CD1(0);
			}
			else
			{
				if (unk_0x77888DFE5B94E7E5())
				{
					unk_0xB5BD48559882D958();
				}
				if (bLocal_442)
				{
					func_24(1, 1, 1, 1);
				}
				if (func_21(Local_112.f_9))
				{
					if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
					{
						unk_0xFB2D342CDD441DD9(Local_112.f_9);
					}
				}
				func_40(&(Local_112.f_9), 1);
				if (func_21(Local_385.f_0))
				{
					unk_0x4718A774D9248520(Local_385.f_0, unk_0x17B5CC8A8615737D(), -1, 0, 2);
					unk_0x650BB0E111420EAF(Local_385.f_0, 1);
				}
				func_41(&Local_385, 1, 0, 1);
				func_123(5);
			}
			break;
	}
}

void func_123(int iParam0)
{
	iLocal_98 = iParam0;
	iLocal_100 = 0;
}

void func_124(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x23E9113C762466ED(Global_93635.f_4))
	{
		if (unk_0x45CD66F0A131E554(Global_93635.f_4, 0))
		{
			if (func_175(24) != Global_93635.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_172(unk_0x57240623C1BC6E88(Global_93635.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_125(Global_93635.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_125(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
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
		func_171(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_167(iParam0, &Var0);
		if (func_166(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x57240623C1BC6E88(iParam0, 1) };
			fParam4 = unk_0x638527C9799F2AE4(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) != joaat("vehicle_gen_controller"))
			{
				Global_69519 = unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5());
			}
		}
		func_159(iParam5, &Var0, Param1, fParam4, func_165(iParam0));
		func_126(iParam5, iParam0, 0);
	}
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_156(&(Global_68531.f_555[0 /*21*/]), iParam0))
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
				Global_101700.f_31389.f_4801 = func_145();
			}
			if (iParam1 != Global_68531.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_175(iParam0);
					if ((unk_0x23E9113C762466ED(iVar0) && unk_0x45CD66F0A131E554(iVar0, 0)) && iParam1 != iVar0)
					{
						func_127(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_128(iParam0))
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
	func_167(iParam0, &(Global_101700.f_31389.f_5510));
}

int func_128(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_143(iParam0, 0, 0)) || func_143(iParam0, 1, 0)) || func_143(iParam0, 2, 0)) || func_165(iParam0) != 145) || func_142(iParam0)) || func_141(iParam0)) || func_140(iParam0)) || func_139(iParam0)) || !func_129(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_141(iParam0))
		{
		}
		if (func_141(iParam0))
		{
		}
		if (func_143(iParam0, 0, 0))
		{
		}
		if (func_143(iParam0, 1, 0))
		{
		}
		if (func_143(iParam0, 2, 0))
		{
		}
		if (func_165(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_129(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_130(iParam0, 0))
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

int func_130(int iParam0, bool bParam1)
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
		if (!func_138())
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
		if ((((!func_137() && !func_136()) && !func_135()) && !func_134()) && !func_138())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_135())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_133(iParam0))
		{
			return 0;
		}
	}
	if (!func_131(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_131(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_132())
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

int func_132()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
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

int func_134()
{
	return 0;
}

int func_135()
{
	return 1;
}

int func_136()
{
	return 1;
}

int func_137()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_138()
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
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
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

int func_139(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	sVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_130(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
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

int func_141(int iParam0)
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

int func_142(int iParam0)
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

int func_143(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_144(iParam1, iVar0, &sVar1, &iVar9))
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

int func_144(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_145()
{
	var uVar0;
	
	func_155(&uVar0, unk_0x0956E4296D9CC40A());
	func_154(&uVar0, unk_0x32883EAC7DC86C40());
	func_153(&uVar0, unk_0x80BC37C67CB292E5());
	func_148(&uVar0, unk_0x202B089E6328ABFA());
	func_147(&uVar0, unk_0xCD8338A83E1BCC14());
	func_146(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

void func_146(var uParam0, int iParam1)
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

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_152(*uParam0);
	iVar1 = func_150(*uParam0);
	if (iParam1 < 1 || iParam1 > func_149(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_149(int iParam0, int iParam1)
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

var func_150(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_151(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_151(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_152(var uParam0)
{
	return uParam0 & 15;
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_156(var uParam0, int iParam1)
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
			uParam0->f_4 = func_157(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_157(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_157(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_157(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_157(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_157(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_157(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_157(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_157(2, 1);
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
			if (func_138())
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
			if (func_138())
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
		if (!func_166(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_166(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x48B8265059381CD0(uParam0->f_9, 20))
	{
		if (!func_166(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_157(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_82(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_158(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_158(int iParam0, var uParam1, int iParam2)
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

void func_159(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_156(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 10))
		{
			func_164(iParam0);
			func_163(uParam1, &(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 11))
			{
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_160(iParam0, 1);
		}
	}
}

void func_160(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_162(iParam0, 0))
		{
			func_161(iParam0, 1, 0);
			func_161(iParam0, 2, 0);
			func_161(iParam0, 3, 0);
			func_161(iParam0, 4, 0);
			func_161(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else
	{
		func_161(iParam0, 0, 0);
	}
}

void func_161(int iParam0, int iParam1, bool bParam2)
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

bool func_162(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_101700.f_31389[iParam0], iParam1);
}

void func_163(var uParam0, var uParam1)
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

void func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_139[iParam0]))
		{
			unk_0xF0F77C99098F999B(Global_68531.f_139[iParam0], 1, 1);
			unk_0x921CF98C637B0043(&(Global_68531.f_139[iParam0]));
			Global_68531.f_139[iParam0] = 0;
		}
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 13))
		{
			func_160(iParam0, 0);
		}
	}
}

int func_165(int iParam0)
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

bool func_166(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_167(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_170(uParam1);
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
		func_169(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_168(iVar0 + 1));
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

int func_168(int iParam0)
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

int func_169(int iParam0, var uParam1, var uParam2)
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

void func_170(var uParam0)
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

void func_171(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_164(iParam0);
	func_160(iParam0, 0);
}

int func_172(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_173(Param0, iParam3, 1);
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

int func_173(struct<3> Param0, int iParam3, int iParam4)
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
				if (func_174(iVar0) || iParam4 == 0)
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

bool func_174(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_101700.f_6188[iParam0], 0);
}

int func_175(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

void func_176(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_177(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_177(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
				func_182(iVar0);
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
					if (func_179(iVar0, Param0, Param3, fParam6))
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
				if (func_143(iVar0, func_80(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_178(Param11))
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

int func_178(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
		Var0 = { func_181(Param1 - Param4) };
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
		if (((((((((((((((func_180(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_180(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_180(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_180(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_180(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_180(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_180(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_180(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_180(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_180(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_180(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_180(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_180(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_180(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_180(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_180(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_181(struct<3> Param0)
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

void func_182(int iParam0)
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

bool func_183(struct<3> Param0, int iParam3)
{
	return func_184(Global_93635.f_2311.f_12.f_66, Param0, iParam3);
}

int func_184(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_185() };
	}
	unk_0x9475086C69ACF470(iParam0, &Var0, &Var3);
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

Vector3 func_185()
{
	return 2.55f, 5.665f, 2.55f;
}

Vector3 func_186()
{
	return 3.01f, 11.01f, 6.01f;
}

int func_187(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 2728.995f, 4143.165f, 41.02986f };
	*uParam1 = { 2719.126f, 4144.691f, 47.88543f };
	*uParam2 = 13f;
	return 1;
}

void func_188(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0x592069F95C314814();
	if (unk_0xCF7855B965948E97(iVar0))
	{
		func_305(0);
		if (bParam9)
		{
			unk_0x6E56C821FA64C1F3(unk_0x592069F95C314814(), 1);
		}
		if (bParam8)
		{
			switch (func_80())
			{
				case 0:
					if (func_304(unk_0x17B5CC8A8615737D(), 8, 15))
					{
						func_190(unk_0x17B5CC8A8615737D(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_304(unk_0x17B5CC8A8615737D(), 9, 6))
					{
						func_190(unk_0x17B5CC8A8615737D(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_304(unk_0x17B5CC8A8615737D(), 8, 1) || func_304(unk_0x17B5CC8A8615737D(), 8, 10))
					{
						func_190(unk_0x17B5CC8A8615737D(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_304(unk_0x17B5CC8A8615737D(), 8, 4))
					{
						func_190(unk_0x17B5CC8A8615737D(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x26D48449559660BA(func_189(unk_0x592069F95C314814()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0x3FE1DC991D646A3B(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x8F088665928570EA(Param0, 30f);
		}
		unk_0x7B408F9F309B3E56(Param0, 30f, 0);
		unk_0x809D9B021F305A70(iVar0, 0, 0);
		unk_0xD189588DEC407D28(iVar0, 0);
		unk_0x8549D98B1C1FCFA7(iVar0, 1);
		if (bParam12)
		{
			unk_0x2D28D5B324F77D2D(0);
			unk_0xE418A8E16B02C0AC(0);
		}
		unk_0xD12BCC85C2F8B1DE();
		if (iParam11 == 1)
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (iParam3 == 1)
		{
			unk_0x990821B6B4780D69(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_43 = 0;
			if (func_417(unk_0x17B5CC8A8615737D()))
			{
				iLocal_43 = unk_0x7FE5AAFFD84F38D2(unk_0x17B5CC8A8615737D());
				unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_22(500, 0);
		}
	}
}

Vector3 func_189(var uParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(uParam0), 0);
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	
	if (unk_0xCA41A00932714525(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x0324EEB10F81965F(iParam0);
	if (iParam5 == 0)
	{
		Global_69523[1 /*14*/] = { func_240(iVar10, iParam1, iParam2) };
		if (!func_239(iParam3))
		{
			Global_69522 = (Global_69522 - 1);
			return 0;
		}
		func_232(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_230(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_230(iParam0, 9);
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
			iVar7 = func_229(iParam0, 1);
			if (!func_228(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_229(iParam0, 0);
			if (!func_227(iVar10, 14, iVar8, -1) && !func_226(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_229(iParam0, 2);
			}
		}
		unk_0x77DA108F7A79FB28(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_69566 };
		}
		else
		{
			uVar11 = { func_222(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69523[1 /*14*/] = { func_240(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_69583 };
						}
						else
						{
							uVar28 = { func_219(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69523[1 /*14*/] = { func_240(iVar10, 14, uVar28[iVar1]) };
							func_210(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
							func_232(14);
							if (Global_69522 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_202(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_190(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							func_201(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x2F933BB106547968(iParam0, func_200(iVar0), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, unk_0x15D0CB3C99F0F8B0(iParam0, func_200(iVar0)));
						}
						else
						{
							unk_0x2F933BB106547968(iParam0, func_200(iVar0), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_232(iVar0);
						if (Global_69522 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_202(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_190(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69523[1 /*14*/] = { func_240(iVar10, iVar0, func_199(iParam0, iVar0, -1)) };
				if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_198(iParam0, iVar10, &iVar4, 1))
							{
								func_190(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_222(iVar10, 0) };
						func_190(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_240(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_196(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_190(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_240(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_196(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_190(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_240(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_196(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_190(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_240(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_196(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_190(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_240(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_196(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_190(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_219(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69523[1 /*14*/] = { func_240(iVar10, 14, uVar69[iVar1]) };
			func_210(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_232(14);
			if (Global_69522 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_202(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_190(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_210(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_232(iParam1);
		if (Global_69522 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_202(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_190(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x2F933BB106547968(iParam0, func_200(iParam1), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, unk_0x15D0CB3C99F0F8B0(iParam0, func_200(iParam1)));
		}
		else
		{
			unk_0x2F933BB106547968(iParam0, func_200(iParam1), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_202(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_190(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_193(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1)
	{
		if (func_198(iParam0, iVar10, &iVar4, 0))
		{
			func_190(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_191(iParam0, iVar10, &iVar4))
		{
			func_190(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522 = (Global_69522 - 1);
	return 1;
}

int func_191(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_192(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_304(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64, Global_101700.f_2095.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0)
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

void func_193(int iParam0, int iParam1, int iParam2)
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
	if (func_195(iParam0, 12, iVar0))
	{
		if (func_194(iParam0, iParam1, iParam2))
		{
			iVar1 = func_192(iParam0);
			if (iParam1 == 3)
			{
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_194(int iParam0, int iParam1, int iParam2)
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

bool func_195(int iParam0, int iParam1, int iParam2)
{
	Global_69523[1 /*14*/] = { func_240(iParam0, iParam1, iParam2) };
	return unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 2);
}

int func_196(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_219(iParam0, (*uParam4)[13]) };
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
	if (func_197(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_228(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_227(iParam0, iParam2, iParam3, -1))
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
		else if (func_226(iParam0, iParam2, iParam3, -1))
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
		if (func_228(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_227(iParam0, iParam2, iParam3, -1))
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
		else if (func_226(iParam0, iParam2, iParam3, -1))
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
		if (func_228(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_227(iParam0, iParam2, iParam3, -1))
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
		else if (func_226(iParam0, iParam2, iParam3, -1))
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

int func_197(int iParam0, int iParam1, int iParam2)
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

int func_198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_192(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_304(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61, Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_304(iParam0, iParam1, iVar0))
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
				if (func_304(iParam0, iParam1, iVar1))
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
				return func_229(iParam0, iParam2);
			}
		}
		else
		{
			return func_230(iParam0, iParam1);
		}
	}
	return -99;
}

int func_200(int iParam0)
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

int func_201(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_192(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_230(iParam0, 1);
				iVar0 = func_209(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_230(iParam0, 2);
				iVar0 = func_209(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_201(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_208(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_207(iParam1, iParam3, &iVar0))
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
									if (!func_206(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_206(iParam0, 3, 135, 150))
									{
										iVar0 = func_205(iParam1, 3, 135, 150);
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
									if (!func_206(iParam0, 3, 209, 222))
									{
										iVar0 = func_205(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_206(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_205(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_205(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_205(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_205(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_206(iParam0, 3, 176, 191) && !func_206(iParam0, 3, 227, 242))
									{
										iVar0 = func_205(iParam1, 3, 176, 191);
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
								iVar4 = func_230(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_230(iParam0, 11);
								iVar5 = func_204(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_230(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_203(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_230(iParam0, 8);
								iVar8 = func_230(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_204(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_204(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_230(iParam0, 11);
								iVar0 = func_204(iParam1, -99, iVar9, 0);
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

int func_203(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_204(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_205(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_205(iParam0, 11, 25, 40);
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

int func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_195(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_230(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, int iParam2)
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

int func_208(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_192(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, int iParam2)
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

void func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x53BF0F279B4289EA(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x6018E338F7ABCE75(iParam0, 34, 0);
			unk_0x6018E338F7ABCE75(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xCAA97B7826076AFA(iParam0, iParam1, iParam2, iParam3, unk_0x63C468D583002D23());
		if (iParam1 == 0)
		{
			iVar0 = func_215(iParam0, iParam2, iParam3, iParam1);
			if (func_211(unk_0x0324EEB10F81965F(iParam0), 14, iVar0, unk_0x8315E8D74F0CC85D(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x6018E338F7ABCE75(iParam0, 34, 1);
				unk_0x6018E338F7ABCE75(iParam0, 36, 1);
			}
			else
			{
				unk_0x6018E338F7ABCE75(iParam0, 34, 0);
				unk_0x6018E338F7ABCE75(iParam0, 36, 0);
			}
		}
	}
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_212(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HELMET"), 1)))
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
						iParam3 = func_212(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_212(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA61F5F01E6B7823E(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_214(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0xF9D165820B09B032(iVar17, &Var0);
			if (!unk_0x5D46F50AE982AB28(Var0.f_0))
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
		unk_0x69407F3B7F2A9AB2(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_213(iParam0, func_200(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2]) && Global_69645.f_13[iParam2] != 0)
		{
			return Global_69645.f_13[iParam2];
		}
		iVar41 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 0, -1, func_200(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xE6F167D1AE3B7FD1(iVar38, &Var21);
			if (!unk_0x5D46F50AE982AB28(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_213(int iParam0, int iParam1)
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

int func_214(int iParam0)
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

int func_215(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_218(iParam3);
	}
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	iVar1 = unk_0x8315E8D74F0CC85D(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_217(unk_0x0324EEB10F81965F(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_217(unk_0x0324EEB10F81965F(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x092E56DBB01C4882(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1D948F0050408132(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_216(iParam0, iParam3));
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
	return func_218(iParam3);
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
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

int func_217(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA61F5F01E6B7823E(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xF9D165820B09B032(iVar17, &Var0);
			if (!unk_0x5D46F50AE982AB28(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_214(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x69407F3B7F2A9AB2(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 0, -1, func_200(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xE6F167D1AE3B7FD1(iVar37, &Var20);
			if (!unk_0x5D46F50AE982AB28(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_213(iParam0, func_200(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_218(int iParam0)
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

struct<10> func_219(int iParam0, int iParam1)
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
					func_221(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_221(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_221(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_221(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_221(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_221(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_221(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_221(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_221(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_221(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_221(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_220(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_221(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_221(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_221(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_221(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_221(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_221(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_221(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_221(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_221(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_221(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_220(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_221(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_221(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_221(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_221(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_221(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_221(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_221(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_221(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_221(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_221(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_220(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_221(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_221(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_221(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_221(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_221(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_221(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_221(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_221(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_221(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_221(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_221(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_221(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_221(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_221(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_221(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_221(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_221(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_221(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_221(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_221(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_221(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_221(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_221(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_221(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_221(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_221(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_220(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_221(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_221(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_221(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_221(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_221(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_221(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_221(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_221(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_221(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_221(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_221(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_221(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_221(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_221(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_221(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_221(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_221(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_221(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_221(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_221(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_221(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_221(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_221(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_221(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_221(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_220(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xB615ADF659C5D565(iParam2, &Var1);
		if (!unk_0x5D46F50AE982AB28(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x79388F76277D529B(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_217(iParam1, Var16.f_0, 14, iVar0);
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

void func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_222(int iParam0, int iParam1)
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
					if (Global_101700.f_8044.f_99.f_58[120])
					{
						func_225(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_225(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_225(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_225(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_225(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_225(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_225(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_225(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_225(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_225(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_225(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_225(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_225(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_225(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_225(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_225(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_225(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_225(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_225(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_225(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_225(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_225(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_225(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_225(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_225(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_225(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_225(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_225(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_225(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_225(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_225(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_225(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_225(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_225(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_225(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_225(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_225(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_225(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_225(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_225(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_225(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_225(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_225(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_225(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_225(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_225(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_225(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_225(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_225(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_225(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_225(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_225(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_225(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_225(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_225(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_225(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_225(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_225(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_225(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_225(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_225(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_225(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_225(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_225(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_225(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_225(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_225(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_225(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_225(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_225(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_225(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_225(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_225(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_225(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_225(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_225(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_225(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_225(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_225(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_225(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_225(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_225(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_225(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_225(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_225(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_225(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_225(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_225(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_225(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_225(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_225(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_225(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_225(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_225(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_225(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_225(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_225(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_225(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_225(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_225(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_225(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_225(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_225(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_225(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_225(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_225(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_225(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_225(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_225(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_225(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_225(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_225(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_225(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_225(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_225(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_225(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_225(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_225(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_225(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_225(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_225(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_225(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_225(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_225(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_225(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_225(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_225(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_225(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_225(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_225(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_225(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_225(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_225(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_225(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_225(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_225(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_225(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_225(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_225(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_225(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_225(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_225(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_225(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_225(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_225(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_225(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_225(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_225(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_225(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_225(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_225(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_225(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_225(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_225(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_225(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_225(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_225(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_225(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_225(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_225(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_225(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_225(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_225(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_225(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_225(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_225(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_225(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_225(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_225(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_225(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_225(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_225(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_225(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_225(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_225(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_225(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_225(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_225(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_225(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_225(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_225(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_225(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_225(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_225(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_225(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_225(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_225(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_225(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_225(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_225(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_225(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_225(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_225(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_225(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_225(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_225(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_225(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_225(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_225(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_225(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_225(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_225(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_225(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3)
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
	unk_0x7B9598A1DCBD186F(iVar0, 0);
	unk_0xA56F6F017CB97DFE((iParam2 - iParam3), &Var1);
	if (!unk_0x5D46F50AE982AB28(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xABF16728DFC48025(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x69407F3B7F2A9AB2(&Var19);
						unk_0xCD8FF71467FFD88E(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_224(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_224(Var16.f_2)] = func_217(iParam1, Var16.f_0, func_224(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_224(Var16.f_2)] = Var16.f_1;
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

int func_224(int iParam0)
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

void func_225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_226(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_212(iParam0, iParam2, 14, 3);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 1) || unk_0x0B547E4E2D1A8F1F(func_212(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_212(iParam0, iParam2, 1, 3);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0) || unk_0x0B547E4E2D1A8F1F(func_212(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_212(iParam0, iParam2, 14, 4);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 1) || unk_0x0B547E4E2D1A8F1F(func_212(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_212(iParam0, iParam2, 1, 4);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0) || unk_0x0B547E4E2D1A8F1F(func_212(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_212(iParam0, iParam2, 1, 3);
					}
					if (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0))
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
						iParam3 = func_212(iParam0, iParam2, 1, 4);
					}
					if (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0))
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

int func_228(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_212(iParam0, iParam2, 14, 3);
					}
					return unk_0x0B547E4E2D1A8F1F(iParam3, joaat("GLASSES"), 1);
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
						iParam3 = func_212(iParam0, iParam2, 14, 4);
					}
					return unk_0x0B547E4E2D1A8F1F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA41A00932714525(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xB50239D338267F95(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_218(iParam1);
	}
	iVar1 = unk_0xBE372F0FD574ACB1(iParam0, iParam1);
	return func_215(iParam0, iVar0, iVar1, iParam1);
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xCA41A00932714525(iParam0))
	{
		return -99;
	}
	iVar0 = func_200(iParam1);
	iVar1 = unk_0xC72E4A160D2D5004(iParam0, iVar0);
	iVar2 = unk_0x9E9290608A6EFB37(iParam0, iVar0);
	return func_231(iParam0, iVar1, iVar2, iParam1);
}

int func_231(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_200(iParam3);
	iVar1 = unk_0xC351741D5A347BCE(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xD9BF60A9D14F12C8(uParam0, iVar0, iVar3);
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

void func_232(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 1) && !unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 6))
	{
		func_238(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 1) && unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_233(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_233(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_233(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69521;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_237(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_236(iVar2, iVar0, 0);
		unk_0xEB79FECD9022AAF0(&uVar3, iVar1);
		func_234(iVar2, uVar3, iVar0, 1, 0);
	}
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_235(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, iParam3);
	}
}

int func_235(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_235(iParam1)];
	if (unk_0x7FE4F330D3D74809(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_237(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 6022;
	if ((bParam4 && Global_2592887) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 966;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 966;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 966;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 966;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 966;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 966;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 966;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 966;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 930;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 930;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 930;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 930;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 930;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 930;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 930;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 930;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 930;
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
						*uParam2 = 1018;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1018;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1018;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1018;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1018;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1018;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1018;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1018;
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
						*uParam2 = 966;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 966;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 966;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 966;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 966;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 966;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 966;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 966;
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
						*uParam2 = 1018;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1018;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1018;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1018;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1018;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1018;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1018;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1018;
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
		if (Global_2592887)
		{
			iVar0 = unk_0x1EC7846EE87D4DF2(iParam0);
		}
		else
		{
			iVar0 = unk_0xE8FEEF250EAC0115(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x1EC7846EE87D4DF2(iParam0);
	}
	else
	{
		iVar0 = unk_0xE8FEEF250EAC0115(iParam0);
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
					*uParam2 = 1753;
					break;
				
				case 1:
					*uParam2 = 1754;
					break;
				
				case 2:
					*uParam2 = 1755;
					break;
				
				case 3:
					*uParam2 = 1756;
					break;
				
				case 4:
					*uParam2 = 1757;
					break;
				
				case 5:
					*uParam2 = 1758;
					break;
				
				case 6:
					*uParam2 = 1765;
					break;
				
				case 7:
					*uParam2 = 1766;
					break;
				
				case 8:
					*uParam2 = 1767;
					break;
				
				case 9:
					*uParam2 = 1768;
					break;
				
				case 10:
					*uParam2 = 1769;
					break;
				
				case 11:
					*uParam2 = 1770;
					break;
				
				case 12:
					*uParam2 = 1771;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1913;
					break;
				
				case 18:
					*uParam2 = 1927;
					break;
				
				case 19:
					*uParam2 = 1928;
					break;
				
				case 20:
					*uParam2 = 1929;
					break;
				
				case 21:
					*uParam2 = 1930;
					break;
				
				case 22:
					*uParam2 = 1931;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2062;
					break;
				
				case 26:
					*uParam2 = 2063;
					break;
				
				case 27:
					*uParam2 = 2064;
					break;
				
				case 28:
					*uParam2 = 2065;
					break;
				
				case 29:
					*uParam2 = 2066;
					break;
				
				case 30:
					*uParam2 = 2067;
					break;
				
				case 31:
					*uParam2 = 2068;
					break;
				
				case 32:
					*uParam2 = 2069;
					break;
				
				case 33:
					*uParam2 = 2070;
					break;
				
				case 34:
					*uParam2 = 2071;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2433;
					break;
				
				case 42:
					*uParam2 = 2434;
					break;
				
				case 43:
					*uParam2 = 2435;
					break;
				
				case 44:
					*uParam2 = 2436;
					break;
				
				case 45:
					*uParam2 = 2437;
					break;
				
				case 46:
					*uParam2 = 2438;
					break;
				
				case 47:
					*uParam2 = 2439;
					break;
				
				case 48:
					*uParam2 = 2440;
					break;
				
				case 49:
					*uParam2 = 2441;
					break;
				
				case 50:
					*uParam2 = 2442;
					break;
				
				case 51:
					*uParam2 = 2571;
					break;
				
				case 52:
					*uParam2 = 2572;
					break;
				
				case 53:
					*uParam2 = 2573;
					break;
				
				case 54:
					*uParam2 = 2574;
					break;
				
				case 55:
					*uParam2 = 2575;
					break;
				
				case 56:
					*uParam2 = 2576;
					break;
				
				case 57:
					*uParam2 = 2577;
					break;
				
				case 58:
					*uParam2 = 2578;
					break;
				
				case 59:
					*uParam2 = 2579;
					break;
				
				case 60:
					*uParam2 = 2580;
					break;
				
				case 61:
					*uParam2 = 2581;
					break;
				
				case 62:
					*uParam2 = 3178;
					break;
				
				case 63:
					*uParam2 = 3179;
					break;
				
				case 64:
					*uParam2 = 3180;
					break;
				
				case 65:
					*uParam2 = 3181;
					break;
				
				case 66:
					*uParam2 = 3182;
					break;
				
				case 67:
					*uParam2 = 3183;
					break;
				
				case 68:
					*uParam2 = 3651;
					break;
				
				case 69:
					*uParam2 = 3652;
					break;
				
				case 70:
					*uParam2 = 3653;
					break;
				
				case 71:
					*uParam2 = 3654;
					break;
				
				case 72:
					*uParam2 = 3655;
					break;
				
				case 73:
					*uParam2 = 3656;
					break;
				
				case 74:
					*uParam2 = 3657;
					break;
				
				case 75:
					*uParam2 = 3658;
					break;
				
				case 76:
					*uParam2 = 3659;
					break;
				
				case 77:
					*uParam2 = 3660;
					break;
				
				case 78:
					*uParam2 = 3764;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3765;
					break;
				
				case 80:
					*uParam2 = 3766;
					break;
				
				case 81:
					*uParam2 = 3767;
					break;
				
				case 82:
					*uParam2 = 3768;
					break;
				
				case 83:
					*uParam2 = 3769;
					break;
				
				case 84:
					*uParam2 = 3770;
					break;
				
				case 85:
					*uParam2 = 3771;
					break;
				
				case 86:
					*uParam2 = 3874;
					break;
				
				case 87:
					*uParam2 = 3875;
					break;
				
				case 88:
					*uParam2 = 3876;
					break;
				
				case 89:
					*uParam2 = 5309;
					break;
				
				case 90:
					*uParam2 = 5310;
					break;
				
				case 91:
					*uParam2 = 5311;
					break;
				
				case 92:
					*uParam2 = 5312;
					break;
				
				case 93:
					*uParam2 = 5313;
					break;
				
				case 94:
					*uParam2 = 5314;
					break;
				
				case 95:
					*uParam2 = 5315;
					break;
				
				case 96:
					*uParam2 = 5316;
					break;
				
				case 97:
					*uParam2 = 5317;
					break;
				
				case 98:
					*uParam2 = 5318;
					break;
				
				case 99:
					*uParam2 = 5319;
					break;
				
				case 100:
					*uParam2 = 5320;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1772;
					break;
				
				case 7:
					*uParam2 = 1773;
					break;
				
				case 8:
					*uParam2 = 1774;
					break;
				
				case 9:
					*uParam2 = 1775;
					break;
				
				case 10:
					*uParam2 = 1776;
					break;
				
				case 11:
					*uParam2 = 1777;
					break;
				
				case 12:
					*uParam2 = 1778;
					break;
				
				case 13:
					*uParam2 = 1781;
					break;
				
				case 14:
					*uParam2 = 1782;
					break;
				
				case 15:
					*uParam2 = 1883;
					break;
				
				case 16:
					*uParam2 = 1884;
					break;
				
				case 17:
					*uParam2 = 1914;
					break;
				
				case 18:
					*uParam2 = 1932;
					break;
				
				case 19:
					*uParam2 = 1933;
					break;
				
				case 20:
					*uParam2 = 1934;
					break;
				
				case 21:
					*uParam2 = 1935;
					break;
				
				case 22:
					*uParam2 = 1936;
					break;
				
				case 23:
					*uParam2 = 2037;
					break;
				
				case 24:
					*uParam2 = 2038;
					break;
				
				case 25:
					*uParam2 = 2072;
					break;
				
				case 26:
					*uParam2 = 2073;
					break;
				
				case 27:
					*uParam2 = 2074;
					break;
				
				case 28:
					*uParam2 = 2075;
					break;
				
				case 29:
					*uParam2 = 2076;
					break;
				
				case 30:
					*uParam2 = 2077;
					break;
				
				case 31:
					*uParam2 = 2078;
					break;
				
				case 32:
					*uParam2 = 2079;
					break;
				
				case 33:
					*uParam2 = 2080;
					break;
				
				case 34:
					*uParam2 = 2081;
					break;
				
				case 35:
					*uParam2 = 2320;
					break;
				
				case 36:
					*uParam2 = 2321;
					break;
				
				case 37:
					*uParam2 = 2375;
					break;
				
				case 38:
					*uParam2 = 2376;
					break;
				
				case 39:
					*uParam2 = 2377;
					break;
				
				case 40:
					*uParam2 = 2378;
					break;
				
				case 41:
					*uParam2 = 2443;
					break;
				
				case 42:
					*uParam2 = 2444;
					break;
				
				case 43:
					*uParam2 = 2445;
					break;
				
				case 44:
					*uParam2 = 2446;
					break;
				
				case 45:
					*uParam2 = 2447;
					break;
				
				case 46:
					*uParam2 = 2448;
					break;
				
				case 47:
					*uParam2 = 2449;
					break;
				
				case 48:
					*uParam2 = 2450;
					break;
				
				case 49:
					*uParam2 = 2451;
					break;
				
				case 50:
					*uParam2 = 2452;
					break;
				
				case 51:
					*uParam2 = 2582;
					break;
				
				case 52:
					*uParam2 = 2583;
					break;
				
				case 53:
					*uParam2 = 2584;
					break;
				
				case 54:
					*uParam2 = 2585;
					break;
				
				case 55:
					*uParam2 = 2586;
					break;
				
				case 56:
					*uParam2 = 2587;
					break;
				
				case 57:
					*uParam2 = 2588;
					break;
				
				case 58:
					*uParam2 = 2589;
					break;
				
				case 59:
					*uParam2 = 2590;
					break;
				
				case 60:
					*uParam2 = 2591;
					break;
				
				case 61:
					*uParam2 = 2592;
					break;
				
				case 62:
					*uParam2 = 3184;
					break;
				
				case 63:
					*uParam2 = 3185;
					break;
				
				case 64:
					*uParam2 = 3186;
					break;
				
				case 65:
					*uParam2 = 3187;
					break;
				
				case 66:
					*uParam2 = 3188;
					break;
				
				case 67:
					*uParam2 = 3189;
					break;
				
				case 68:
					*uParam2 = 3661;
					break;
				
				case 69:
					*uParam2 = 3662;
					break;
				
				case 70:
					*uParam2 = 3663;
					break;
				
				case 71:
					*uParam2 = 3664;
					break;
				
				case 72:
					*uParam2 = 3665;
					break;
				
				case 73:
					*uParam2 = 3666;
					break;
				
				case 74:
					*uParam2 = 3667;
					break;
				
				case 75:
					*uParam2 = 3668;
					break;
				
				case 76:
					*uParam2 = 3669;
					break;
				
				case 77:
					*uParam2 = 3670;
					break;
				
				case 78:
					*uParam2 = 3772;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3773;
					break;
				
				case 80:
					*uParam2 = 3774;
					break;
				
				case 81:
					*uParam2 = 3775;
					break;
				
				case 82:
					*uParam2 = 3776;
					break;
				
				case 83:
					*uParam2 = 3777;
					break;
				
				case 84:
					*uParam2 = 3778;
					break;
				
				case 85:
					*uParam2 = 3779;
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
					*uParam2 = 5321;
					break;
				
				case 90:
					*uParam2 = 5322;
					break;
				
				case 91:
					*uParam2 = 5323;
					break;
				
				case 92:
					*uParam2 = 5324;
					break;
				
				case 93:
					*uParam2 = 5325;
					break;
				
				case 94:
					*uParam2 = 5326;
					break;
				
				case 95:
					*uParam2 = 5327;
					break;
				
				case 96:
					*uParam2 = 5328;
					break;
				
				case 97:
					*uParam2 = 5329;
					break;
				
				case 98:
					*uParam2 = 5330;
					break;
				
				case 99:
					*uParam2 = 5331;
					break;
				
				case 100:
					*uParam2 = 5332;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 6022;
}

int func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_240(int iParam0, int iParam1, int iParam2)
{
	func_303();
	if (iParam0 == joaat("player_zero"))
	{
		func_285(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_266(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_241(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

void func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_265(iParam1);
			break;
		
		case 2:
			func_264(iParam1);
			break;
		
		case 3:
			func_261(iParam1);
			break;
		
		case 4:
			func_260(iParam1);
			break;
		
		case 6:
			func_259(iParam1);
			break;
		
		case 5:
			func_258(iParam1);
			break;
		
		case 8:
			func_257(iParam1);
			break;
		
		case 9:
			func_256(iParam1);
			break;
		
		case 10:
			func_255(iParam1);
			break;
		
		case 1:
			func_254(iParam1);
			break;
		
		case 7:
			func_253(iParam1);
			break;
		
		case 11:
			func_252(iParam1);
			break;
		
		case 12:
			func_251(iParam1);
			break;
		
		case 13:
			func_250(iParam1);
			break;
		
		case 14:
			func_242(iParam1);
			break;
	}
}

void func_242(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 155);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_243(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_248(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x765F5B806B517045(sParam3) != unk_0x765F5B806B517045("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 5);
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 6);
		if (func_85(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x0B547E4E2D1A8F1F(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_247(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_6), 2);
			}
			if (!func_247(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_247(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_6), 2);
			}
			if (!func_247(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_247(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_6), 2);
			}
			if (!func_247(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 0);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 5);
		if (func_238(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
		}
		if (func_238(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		}
		if (!func_238(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_85(14))
			{
				return;
			}
			uVar0 = func_236(func_246(iParam1, uParam0->f_2), Global_69521, 0);
			if (unk_0x48B8265059381CD0(uVar0, uParam0->f_1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
			}
			iVar0 = func_236(func_245(iParam1, uParam0->f_2), Global_69521, 0);
			if (unk_0x48B8265059381CD0(iVar0, uParam0->f_1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
			}
			if (func_244(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_236(iVar1, Global_69521, 0);
				if (!unk_0x48B8265059381CD0(iVar0, uParam0->f_1))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		}
	}
}

bool func_244(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 973;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 3:
					*uParam2 = 1424;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 9:
					*uParam2 = 1433;
					break;
				
				case 10:
					*uParam2 = 1435;
					break;
				
				case 1:
					*uParam2 = 1006;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
				
				case 12:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 975;
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
				
				case 7:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	}
	return *uParam2 != 973;
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 3:
					return 1409;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 9:
					return 1418;
					break;
				
				case 10:
					return 1420;
					break;
				
				case 1:
					return 954;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
				
				case 12:
					return 973;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 923;
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
				
				case 7:
					return 1422;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 971;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
	}
	return 930;
}

int func_246(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 3:
					return 1394;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 9:
					return 1403;
					break;
				
				case 10:
					return 1405;
					break;
				
				case 1:
					return 902;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
				
				case 12:
					return 921;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 871;
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
				
				case 7:
					return 1407;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 919;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
	}
	return 878;
}

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69521;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_237(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_236(iVar2, iVar0, 0);
		return unk_0x48B8265059381CD0(uVar3, iVar1);
	}
	return 0;
}

int func_248(int iParam0)
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

void func_249(int iParam0, int iParam1, int iParam2)
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
	uVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x7B9598A1DCBD186F(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA56F6F017CB97DFE(iVar17, &Var2);
			if (!unk_0x5D46F50AE982AB28(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_243(&(Global_69523[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_243(&(Global_69523[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xA61F5F01E6B7823E(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xE423D4D72B60A747(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0xF9D165820B09B032(iVar38, &Var20);
			if (!unk_0x5D46F50AE982AB28(Var20.f_0))
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
					func_243(&(Global_69523[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x0B547E4E2D1A8F1F(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x69407F3B7F2A9AB2(&Var41);
		iVar59 = 0;
		iVar60 = unk_0xE423D4D72B60A747(iVar1, 6, -1, 0, -1, func_200(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xE6F167D1AE3B7FD1(iVar58, &Var41);
			if (!unk_0x5D46F50AE982AB28(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_243(&(Global_69523[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x0B547E4E2D1A8F1F(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
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
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 9);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 48);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_249(iVar10, iParam0, 1);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_249(iVar10, iParam0, 1);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 6);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 33);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 17);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 18);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 7);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 84);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 104);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_261(int iParam0)
{
	if (iParam0 < 136)
	{
		func_263(iParam0);
	}
	else
	{
		func_262(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1)
	{
		func_249(3, iParam0, 242);
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
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	Global_69523[0 /*14*/].f_5 = 2;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 9);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_249(iVar10, iParam0, 7);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_266(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_284(iParam1);
			break;
		
		case 2:
			func_283(iParam1);
			break;
		
		case 3:
			func_279(iParam1);
			break;
		
		case 4:
			func_278(iParam1);
			break;
		
		case 6:
			func_277(iParam1);
			break;
		
		case 5:
			func_276(iParam1);
			break;
		
		case 8:
			func_275(iParam1);
			break;
		
		case 9:
			func_274(iParam1);
			break;
		
		case 10:
			func_273(iParam1);
			break;
		
		case 1:
			func_272(iParam1);
			break;
		
		case 7:
			func_271(iParam1);
			break;
		
		case 11:
			func_270(iParam1);
			break;
		
		case 12:
			func_269(iParam1);
			break;
		
		case 13:
			func_268(iParam1);
			break;
		
		case 14:
			func_267(iParam1);
			break;
	}
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
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 175);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 9);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 47);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 63);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_249(iVar10, iParam0, 1);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 5);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 53);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 12);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 77);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 7);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 134);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 117);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_279(int iParam0)
{
	if (iParam0 < 107)
	{
		func_282(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_281(iParam0);
	}
	else
	{
		func_280(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1)
	{
		func_249(3, iParam0, 318);
	}
}

void func_280(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 1;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	Global_69523[0 /*14*/].f_5 = 1;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	Global_69523[0 /*14*/].f_5 = 1;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 21);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_249(iVar10, iParam0, 10);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_302(iParam1);
			break;
		
		case 2:
			func_301(iParam1);
			break;
		
		case 3:
			func_298(iParam1);
			break;
		
		case 4:
			func_297(iParam1);
			break;
		
		case 6:
			func_296(iParam1);
			break;
		
		case 5:
			func_295(iParam1);
			break;
		
		case 8:
			func_294(iParam1);
			break;
		
		case 9:
			func_293(iParam1);
			break;
		
		case 10:
			func_292(iParam1);
			break;
		
		case 1:
			func_291(iParam1);
			break;
		
		case 7:
			func_290(iParam1);
			break;
		
		case 11:
			func_289(iParam1);
			break;
		
		case 12:
			func_288(iParam1);
			break;
		
		case 13:
			func_287(iParam1);
			break;
		
		case 14:
			func_286(iParam1);
			break;
	}
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
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 113);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 10);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 53);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 45);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_249(iVar10, iParam0, 1);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 5);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 48);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 20);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 24);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 14);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 99);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 113);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_298(int iParam0)
{
	if (iParam0 < 60)
	{
		func_300(iParam0);
	}
	else
	{
		func_299(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1)
	{
		func_249(3, iParam0, 181);
	}
}

void func_299(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 0;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	Global_69523[0 /*14*/].f_5 = 0;
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
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 6);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_249(iVar10, iParam0, 7);
			return;
			break;
	}
	func_243(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_303()
{
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&(Global_69523[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_304(int iParam0, int iParam1, int iParam2)
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
	
	if (unk_0xCA41A00932714525(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	Global_69523[1 /*14*/] = { func_240(iVar0, iParam1, iParam2) };
	if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_222(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_304(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_219(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_304(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69523[2 /*14*/] = { func_240(iVar0, 14, iVar4) };
									if (Global_69523[2 /*14*/].f_12 == iVar3)
									{
										if (func_304(iParam0, 14, iVar4))
										{
											if (!func_196(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69523[2 /*14*/])))
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
						iVar1 = func_230(iParam0, iVar2);
						Global_69523[2 /*14*/] = { func_240(iVar0, iVar2, iVar1) };
						if (!func_196(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69523[2 /*14*/])))
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
		uVar33 = { func_219(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_304(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB50239D338267F95(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 && (unk_0xBE372F0FD574ACB1(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 || Global_69523[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == unk_0xC72E4A160D2D5004(iParam0, func_200(iParam1)) && Global_69523[1 /*14*/].f_4 == unk_0x9E9290608A6EFB37(iParam0, func_200(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_305(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x592069F95C314814();
	if (!unk_0xCEB2A4290BD633BE(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0xC8C3338D4DBC00FE(iVar0, bParam0, 16);
		unk_0xC8C3338D4DBC00FE(iVar0, bParam0, 32);
	}
	func_25(1, 1, 0, 0);
}

void func_306()
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_35();
	func_367();
	if (func_21(Local_112.f_9))
	{
		Var1 = { unk_0x57240623C1BC6E88(Local_112.f_9, 0) };
		func_366(Local_112.f_9, &iLocal_474, 1126825984, 7);
		func_358(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_346();
		switch (iLocal_100)
		{
			case 0:
				unk_0xDE574EA7A7A2CAF8(5, joaat("player"), iLocal_664);
				unk_0xDE574EA7A7A2CAF8(5, iLocal_664, joaat("player"));
				iLocal_478 = unk_0xB5DF060B138CD2EA(Local_112.f_9);
				Local_707 = { unk_0x57240623C1BC6E88(Local_112.f_9, 0) };
				func_345(&Local_710, Local_707);
				func_344(Local_112.f_9);
				if (Local_112.f_10 != 13 && Local_112.f_10 != 14)
				{
					unk_0x15848523A8959DBC(Local_112.f_9);
					Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 3000);
					Local_112.f_10 = 13;
				}
				if (func_21(Local_112.f_9))
				{
					if (!unk_0xA3794949321E107C(Local_112.f_8))
					{
						Local_112.f_8 = func_343(Local_112.f_9, 1, 0, 5);
					}
					unk_0xCF458DC2F9000261(Local_112.f_9);
				}
				iLocal_475 = -1;
				iLocal_476 = -1;
				iLocal_448 = 0;
				iLocal_418 = 0;
				iLocal_417 = 0;
				sLocal_487 = "BB2_J8";
				iLocal_463 = unk_0x94E3E074F38DF86C();
				func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_448)
				{
					func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
					func_321(&uLocal_44, Local_112.f_9, 0, 0, 1, 1, 1);
					if (Local_112.f_10 == 13 || Local_112.f_10 == 14)
					{
						if (iLocal_476 == -1)
						{
							iLocal_476 = unk_0x94E3E074F38DF86C();
						}
						if (iLocal_475 == -1)
						{
							iLocal_475 = unk_0x94E3E074F38DF86C();
						}
						else if (func_112(iLocal_475, 8000))
						{
							bVar0 = true;
						}
						if (func_318(Local_112.f_9, Local_692, bVar0, 0, 1, iLocal_478))
						{
							if ((func_112(iLocal_476, 5000) || func_166(Local_710, 0f, 0f, 0f, 0)) || (!func_57(Var1, Local_710, 8.5f) && !func_57(Var1, Local_707, 8.5f)))
							{
								func_317();
								Local_112.f_17 = unk_0x94E3E074F38DF86C();
								func_315(&uLocal_44, 0, 0);
								iLocal_448 = 1;
							}
						}
						else
						{
							if (!iLocal_417)
							{
								if (!func_112(iLocal_463, 2500))
								{
									if (!func_60())
									{
										if (func_104(Local_112.f_9, Local_692, 30f))
										{
											if (func_73(&uLocal_499, cLocal_492, "BB2_J7", 4, 0, 0, 0))
											{
												iLocal_463 = unk_0x94E3E074F38DF86C();
												iLocal_417 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_417 = 1;
								}
							}
							else if (!func_60())
							{
								if (func_112(iLocal_463, unk_0x0E29C61F26D96FDB(5000, 12000)))
								{
									if (func_104(Local_112.f_9, Local_692, 30f))
									{
										if (unk_0x48368B3E430594FA(Local_112.f_9))
										{
											if (unk_0x0E29C61F26D96FDB(0, 101) < 30)
											{
												if (func_73(&uLocal_499, cLocal_493, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_463 = unk_0x94E3E074F38DF86C();
												}
											}
											else if (func_73(&uLocal_499, cLocal_492, "BB2_FLEE", 4, 0, 0, 0))
											{
												iLocal_463 = unk_0x94E3E074F38DF86C();
											}
										}
									}
								}
							}
							else
							{
								iLocal_463 = unk_0x94E3E074F38DF86C();
							}
							func_314(Local_112.f_9, Local_692, iLocal_476, 925353388);
						}
					}
					else
					{
						func_317();
						Local_112.f_17 = unk_0x94E3E074F38DF86C();
						func_315(&uLocal_44, 0, 0);
						iLocal_448 = 1;
					}
				}
				else
				{
					func_317();
					if (!func_104(Local_112.f_9, Local_692, 10f))
					{
						if (!iLocal_437)
						{
							if (!func_312(sLocal_487, 1))
							{
								func_310(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_466, &iLocal_467, 1, 1);
								iLocal_437 = 1;
							}
						}
						else
						{
							func_342(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_466, iLocal_467, 1);
						}
					}
					else
					{
						if (!iLocal_418)
						{
							if (!unk_0x7F4AE93855973529(Local_112.f_9) && !unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
							{
								if (func_309("BBS_APPSUS", 0, 0) || func_309("BBS_APPSUS2", 0, 0))
								{
									unk_0xD12BCC85C2F8B1DE();
								}
								if (!func_60())
								{
									func_3();
								}
								if (func_73(&uLocal_499, cLocal_492, sLocal_487, 4, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (!func_60())
						{
							iLocal_100 = 2;
						}
						func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
					}
					if (func_307(&(Local_112.f_9)))
					{
						iLocal_454 = 1;
						iLocal_100 = 0;
					}
				}
				break;
			
			case 2:
				if (func_309("BBS_APPSUS", 0, 0) || func_309("BBS_APPSUS2", 0, 0))
				{
					unk_0xD12BCC85C2F8B1DE();
				}
				unk_0xFFE4319CE7BE2DBA(0);
				iLocal_418 = 1;
				func_317();
				unk_0x3DAB418001EEA955(5, joaat("player"), iLocal_664);
				unk_0x3DAB418001EEA955(5, iLocal_664, joaat("player"));
				func_109(&(Local_112.f_8));
				iLocal_418 = 1;
				Local_112.f_17 = unk_0x94E3E074F38DF86C();
				func_315(&uLocal_44, 0, 0);
				iLocal_449 = 0;
				iLocal_454 = 0;
				iLocal_419 = 1;
				func_123(3);
				break;
			}
	}
}

int func_307(var uParam0)
{
	struct<3> Var0;
	
	if (func_21(*uParam0))
	{
		Var0 = { unk_0x57240623C1BC6E88(*uParam0, 0) };
		if (!func_308(uParam0))
		{
			if (unk_0x3BA3AD8AC9469C63(Var0 - Vector(7f, 7f, 7f), Var0 + Vector(7f, 7f, 7f), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xFD0FE723227D5AB6(*uParam0, 0))
		{
			if (unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0) == unk_0x60604E51E30D25B8(*uParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_309(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5A99EA84320AB387(sParam0);
	if (iParam1 == 1)
	{
		unk_0x34D84D73B5DF8E80(iParam2);
	}
	return unk_0x2B886121A03F928A();
}

void func_310(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		if (bParam5)
		{
			unk_0xCC930AE12D020496(*uParam0, 1);
			unk_0xAAF15482D9DB27D9(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !func_60())
			{
				if (!unk_0x75342B3CD0FB5275() || func_309(sParam2, 0, 0))
				{
					func_311(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			unk_0xCC930AE12D020496(*uParam0, 3);
			unk_0xAAF15482D9DB27D9(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !func_60())
			{
				if (!unk_0x75342B3CD0FB5275() || func_309(sParam1, 0, 0))
				{
					func_311(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = unk_0x94E3E074F38DF86C();
		*iParam4 = unk_0x94E3E074F38DF86C();
	}
}

void func_311(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

int func_312(char* sParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (func_60())
	{
		Var0 = { func_313() };
		if (unk_0x6A7B0D91FD88D9EE(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x6A7B0D91FD88D9EE(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_313()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

void func_314(int iParam0, struct<3> Param1, int iParam4, float fParam5)
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
	fVar4 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, 1), Param1);
	iVar5 = (unk_0x94E3E074F38DF86C() - iParam4);
	fParam5 = (fParam5 * IntToFloat(iVar5));
	if (fVar4 > fVar3 && unk_0xF6563E19EDE84B8C(iParam0))
	{
		fVar0 = 1f;
	}
	else if (fVar4 > fVar2)
	{
		if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
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
	unk_0x7B0D34D6C9709C7A(iParam0, fVar0);
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x72B6EAB729050F5B(iParam2);
		unk_0x8BBC558C75738A6D("FocusIn");
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x73624B45C8E405BA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD3115E7F7876D6E6(uParam0->f_3))
	{
		if (func_316(uParam0->f_3))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
	if (!unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (func_316(sVar0))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
}

bool func_316(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_317()
{
	if (func_21(Local_112.f_9))
	{
		if (((Local_112.f_10 != 23 && Local_112.f_10 != 24) && Local_112.f_10 != 21) && Local_112.f_10 != 22)
		{
			unk_0x3DAB418001EEA955(5, joaat("player"), iLocal_664);
			unk_0x3DAB418001EEA955(5, iLocal_664, joaat("player"));
			if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
			{
				unk_0xFB2D342CDD441DD9(Local_112.f_9);
			}
			unk_0xFFAC04A19BFE8F03(Local_112.f_9);
			unk_0x15848523A8959DBC(Local_112.f_9);
			unk_0xE123B8AA81BD49CF(Local_112.f_9);
			unk_0x39DF32F630CC12A7(Local_112.f_9, 1);
			unk_0x0B25AB3A7FA0683C(Local_112.f_9, joaat("weapon_unarmed"), 1);
			unk_0x6F2C1CD778FB751C(Local_112.f_9, 0);
			unk_0x06B74CD245641716(Local_112.f_9, 0);
			unk_0xB195EE9DB37DA7F2(Local_112.f_9, 1, 0);
			unk_0xC96275575DC981A9(Local_112.f_9, 17, 1);
			unk_0xC96275575DC981A9(Local_112.f_9, 0, 0);
			unk_0xC96275575DC981A9(Local_112.f_9, 5, 0);
			if (unk_0xFD0FE723227D5AB6(Local_112.f_9, 1))
			{
				unk_0x83150B7E65C16AFE(Local_112.f_9, 0, 0);
			}
			iLocal_481 = unk_0x94E3E074F38DF86C();
			Local_112.f_10 = 23;
		}
	}
}

int func_318(int iParam0, struct<3> Param1, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	if (func_21(iParam0))
	{
		if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0xD5C8AEE22F8A47C7(iParam0, 0, 2))
			{
				if (!unk_0xD5C8AEE22F8A47C7(iParam0, joaat("weapon_stungun"), 0))
				{
					unk_0xE7DDE11F818A6118(iParam0);
					if (unk_0xBCAFF9F764C4479E(iParam0, &iVar0))
					{
						unk_0xC0C56F3B3B52658A(iParam0);
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
								unk_0xC0C56F3B3B52658A(iParam0);
								unk_0xE7DDE11F818A6118(iParam0);
								unk_0xCF458DC2F9000261(iParam0);
								return 1;
								break;
							}
						}
					}
			}
			unk_0xC0C56F3B3B52658A(iParam0);
			unk_0xE7DDE11F818A6118(iParam0);
			unk_0xCF458DC2F9000261(iParam0);
			if (unk_0xB5DF060B138CD2EA(iParam0) < iParam7)
			{
				return 1;
			}
			if (unk_0x7F4AE93855973529(iParam0))
			{
				return 1;
			}
			if (func_320(iParam0, Param1))
			{
				return 1;
			}
		}
		unk_0xCF458DC2F9000261(iParam0);
		if (bParam5)
		{
			if (func_319(iParam0, Param1, 1112014848, 1084227584))
			{
				return 1;
			}
		}
		if (bParam6)
		{
			if (unk_0xB965476E8F962C70(iParam0, 0))
			{
				return 1;
			}
		}
		if (bParam4)
		{
			if (func_104(iParam0, Param1, 5f))
			{
				if (unk_0x7F4AE93855973529(iParam0))
				{
					return 1;
				}
				if (func_104(iParam0, Param1, 1f))
				{
					return 1;
				}
			}
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0xB42101338C533CB4(iParam0, unk_0x17B5CC8A8615737D()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_319(int iParam0, struct<3> Param1, float fParam4, float fParam5)
{
	if (func_104(iParam0, Param1, fParam4))
	{
		if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x579A94EB2BF9398F(unk_0x57240623C1BC6E88(iParam0, 1), fParam5, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_320(int iParam0, struct<3> Param1)
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xF23F82CD34BEF310(unk_0xBE369BE1BC57A796()) >= 0 && unk_0xF23F82CD34BEF310(unk_0xBE369BE1BC57A796()) < 500)
		{
			if (func_104(iParam0, Param1, 3.5f) || unk_0xB42101338C533CB4(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_322(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_322(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_323(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_323(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		func_315(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_324(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_324(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xAB01297DD4A8577F())
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD3115E7F7876D6E6(iVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_316(iVar0))
	{
		func_341();
	}
	if (func_340(iParam1) && unk_0xADA6DD2D53C59AF0(iParam1))
	{
		iVar1 = 0;
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			unk_0xCC614957B282546F(unk_0xB80CAAF3D65FBC1F(iParam1));
			unk_0x5A0679AC515DA45F(unk_0xB80CAAF3D65FBC1F(iParam1), 1);
			if (unk_0x4B08F3A62DC9B336(unk_0xB80CAAF3D65FBC1F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x3983CCB0D958159C(iParam1))
		{
			unk_0x1976D6B36CACBFE7(unk_0xBFC71CD990E479DB(iParam1));
			if (unk_0x7D86ADEE79DE4C72(unk_0xBFC71CD990E479DB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam1))
		{
			unk_0xA8A81E4A8E21148C(unk_0xACDCB2312E61BD53(iParam1));
			if (unk_0xC61161F0BC70D70C(unk_0xACDCB2312E61BD53(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xAB01297DD4A8577F())
		{
			if (func_335(uParam0, bParam7, bParam9, 0))
			{
				func_332(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_329(iVar0))
				{
					if ((unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0)) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if ((iVar1 && !unk_0x9E123D5FF2973C60()) && uParam8)
						{
							if (!func_316(iVar0))
							{
								func_328(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
								{
									func_327(1);
								}
							}
						}
					}
				}
			}
			else if (func_329(iVar0))
			{
				if (unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0))
				{
					if (((unk_0x1DCFA79E268F3EE5(iParam1) && iVar1) && !unk_0x9E123D5FF2973C60()) && uParam8)
					{
						if (!func_316(iVar0))
						{
							func_328(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
							{
								func_327(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD3115E7F7876D6E6(sParam5))
			{
				if (func_316(sParam5))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
			{
				if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
					{
						func_315(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
				{
					func_315(uParam0, iVar0, 1);
				}
			}
			if (!func_335(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_326(uParam0))
				{
					func_325(uParam0);
				}
			}
		}
	}
	else
	{
		func_315(uParam0, iVar0, 0);
	}
}

void func_325(var uParam0)
{
	if (func_340(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x73624B45C8E405BA(1);
		unk_0x72B6EAB729050F5B(0);
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		unk_0x8BBC558C75738A6D("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_326(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x94E3E074F38DF86C()
		{
			return 1;
		}
	}
	return 0;
}

int func_327(bool bParam0)
{
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101700.f_9008.f_100++;
			}
			return Global_101700.f_9008.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101700.f_9008.f_101++;
			}
			return Global_101700.f_9008.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101700.f_9008.f_102++;
			}
			return Global_101700.f_9008.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_328(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_329(char* sParam0)
{
	if (!func_330(1, 1, 0))
	{
		if ((!unk_0x9C88EB7B70229335(sParam0) && func_316(sParam0)) || func_316("CMN_HINT"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return 0;
	}
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (func_327(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_327(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_327(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_330(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
	{
		return 0;
	}
	if (func_16(0))
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	if (unk_0x349B6C82BE3EF6DD())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53003)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
			{
				return 0;
			}
			if (unk_0x54271E538645DBDB())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_331()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

void func_332(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		func_315(uParam0, 0, 0);
	}
	if (func_166(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			iVar0 = unk_0xB80CAAF3D65FBC1F(iParam1);
			if (!unk_0xFD0FE723227D5AB6(iVar0, 0))
			{
				if (unk_0x0764AC92F08BEC9E(iVar0))
				{
					if (!func_333())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x81E2E02C57D459E6(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x73624B45C8E405BA(0);
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
	unk_0x986AC95588E8693B(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iParam1, -1, iVar3, iVar4);
	unk_0x9AF1ABF0E97411BF("FocusIn", 0, 0);
	unk_0x4A5D4AD0FE6ACF73("HINT_CAM_SCENE");
	unk_0x4988C48537D1AE4F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x94E3E074F38DF86C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_333()
{
	return func_334(unk_0xBE369BE1BC57A796());
}

int func_334(int iParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_335(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_338(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_338(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_339(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_326(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (!func_339(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x94E3E074F38DF86C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_338(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_338(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (!func_339(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_338(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_338(bParam1, bParam2, bParam3) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_339(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (func_337(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_336(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || func_336(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_337(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_326(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_330(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_341();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_336(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_330(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_337(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_330(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_338(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_330(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_339(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_330(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x3983CCB0D958159C(iParam0))
		{
			if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_341()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

void func_342(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		if ((unk_0x94E3E074F38DF86C() - *iParam3) > 500)
		{
			if (unk_0xB1E66230B78B5E30(*uParam0) == 1)
			{
				unk_0xCC930AE12D020496(*uParam0, 3);
				unk_0xAAF15482D9DB27D9(*uParam0, "BLIP_FRIEND");
				if ((unk_0x94E3E074F38DF86C() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x75342B3CD0FB5275() || func_309(sParam1, 0, 0))
					{
						func_311(sParam2, 7500, 0);
					}
				}
				*iParam3 = unk_0x94E3E074F38DF86C();
			}
			else
			{
				unk_0xCC930AE12D020496(*uParam0, 1);
				unk_0xAAF15482D9DB27D9(*uParam0, "BLIP_ENEMY");
				if ((unk_0x94E3E074F38DF86C() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x75342B3CD0FB5275() || func_309(sParam2, 0, 0))
					{
						func_311(sParam1, 7500, 0);
					}
				}
				*iParam3 = unk_0x94E3E074F38DF86C();
			}
		}
	}
	if ((unk_0x94E3E074F38DF86C() - iParam4) > 7500)
	{
		if (func_309(sParam1, 0, 0))
		{
			unk_0x69E47427C5084888(sParam1);
		}
		if (func_309(sParam2, 0, 0))
		{
			unk_0x69E47427C5084888(sParam2);
		}
	}
}

int func_343(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_417(iParam0))
		{
			iVar0 = unk_0xF1FE04D602EA392E(iParam0);
			unk_0xB8F5F7438C07CC5E(iVar0, iParam2);
			unk_0x84DAB725836026C6(iVar0, iParam3);
			unk_0x00EA14207118EEE2(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x00EA14207118EEE2(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_344(int iParam0)
{
	unk_0x3BB70315907D9456(uParam0, iLocal_664);
	unk_0x6018E338F7ABCE75(iParam0, 177, 1);
	unk_0x6018E338F7ABCE75(iParam0, 116, 1);
	unk_0x6018E338F7ABCE75(iParam0, 42, 1);
	unk_0x6018E338F7ABCE75(iParam0, 118, 1);
	unk_0x8DFE8FABD0A1066E(iParam0, 10f, 5);
	unk_0xCCEA0D9BEB843226(iParam0, 1);
	unk_0xCC61640A821F277C(iParam0, 1);
}

void func_345(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param1 - Vector(7f, 7f, 7f) };
	Var3 = { Param1 + Vector(7f, 7f, 7f) };
	if (unk_0x3BA3AD8AC9469C63(Var0, Var3, 0))
	{
		if (unk_0xBA964BDF5A395EDC(Var0, Var3, joaat("weapon_grenade"), uParam0, 0))
		{
		}
		else if (unk_0xBA964BDF5A395EDC(Var0, Var3, joaat("weapon_molotov"), uParam0, 0))
		{
		}
		else if (unk_0xBA964BDF5A395EDC(Var0, Var3, joaat("weapon_smokegrenade"), uParam0, 0))
		{
		}
		else if (unk_0xBA964BDF5A395EDC(Var0, Var3, joaat("weapon_bzgas"), uParam0, 0))
		{
		}
		else if (unk_0xBA964BDF5A395EDC(Var0, Var3, joaat("weapon_stickybomb"), uParam0, 0))
		{
		}
		else if (unk_0xBA964BDF5A395EDC(Var0, Var3, joaat("weapon_flare"), uParam0, 0))
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

void func_346()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_21(Local_112.f_9))
	{
		if (iLocal_253 == 0)
		{
			func_357(&(Local_112.f_9), &bLocal_455);
			if (func_356())
			{
				if (iLocal_448 || iLocal_98 == 7)
				{
					if (bLocal_455)
					{
						unk_0x64A85DB6D037D644(Local_112.f_9, func_355(), 1048576000);
						iLocal_253 = 2;
					}
					else
					{
						unk_0x64A85DB6D037D644(Local_112.f_9, func_354(), 1048576000);
						iLocal_253 = 1;
					}
				}
			}
		}
		else if (iLocal_253 == 1)
		{
			func_357(&(Local_112.f_9), &bLocal_455);
			if (bLocal_455)
			{
				if (func_356())
				{
					unk_0x64A85DB6D037D644(Local_112.f_9, func_355(), 1048576000);
					iLocal_253 = 2;
				}
			}
		}
		if (!unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()))
		{
			switch (Local_112.f_10)
			{
				case 0:
					if (func_104(Local_112.f_9, Local_692, 20f))
					{
						if (!unk_0x1D0EB673E1AE9A25(Local_112.f_9, unk_0x17B5CC8A8615737D()))
						{
							unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
						}
					}
					else if (unk_0x1D0EB673E1AE9A25(Local_112.f_9, unk_0x17B5CC8A8615737D()))
					{
						unk_0xEF9294ED57E4AC3D(Local_112.f_9);
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_112(Local_112.f_18, unk_0x0E29C61F26D96FDB(250, 500)))
					{
						if (unk_0x0B1B005A46EF4C32(Local_112.f_9))
						{
							unk_0xD4D420EA885FC154(Local_112.f_9);
						}
						unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
						unk_0x6349785089ED32B4(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1);
						Local_112.f_10 = 4;
					}
					break;
				
				case 4:
					if (!func_62(Local_112.f_9, -875674219))
					{
						Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 5000);
						Local_112.f_10 = 3;
					}
					break;
				
				case 5:
					if (!unk_0x1D0EB673E1AE9A25(Local_112.f_9, unk_0x17B5CC8A8615737D()))
					{
						unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
					}
					unk_0x834EF3BF2E6A8D29(Local_112.f_9, unk_0x17B5CC8A8615737D(), 20000, 2.5f, 1f, 1073741824, 0);
					unk_0xCC61640A821F277C(Local_112.f_9, 1);
					Local_112.f_10 = 6;
					break;
				
				case 6:
					if (!func_104(Local_112.f_9, Local_692, 3.5f))
					{
						if (!func_62(Local_112.f_9, 1227113341))
						{
							Local_112.f_10 = 5;
						}
						else
						{
							unk_0x8F98DF9961F0D013(Local_112.f_9, 1.1f);
						}
					}
					else if (!func_62(Local_112.f_9, -875674219))
					{
						unk_0x6349785089ED32B4(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1);
					}
					break;
				
				case 7:
					if (func_112(Local_112.f_18, unk_0x0E29C61F26D96FDB(250, 1000)))
					{
						if (unk_0x0B1B005A46EF4C32(Local_112.f_9))
						{
							unk_0xD4D420EA885FC154(Local_112.f_9);
						}
						unk_0x73655D4147D2FFBC(Local_112.f_9, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 5, 1);
						unk_0xC96275575DC981A9(Local_112.f_9, 0, 0);
						unk_0x7DD7196E1A0C1D43(Local_112.f_9, unk_0x17B5CC8A8615737D(), 0, 16);
						unk_0xCC61640A821F277C(Local_112.f_9, 1);
						Local_112.f_10 = 8;
					}
					break;
				
				case 8:
					if (!func_62(Local_112.f_9, 780511057))
					{
						Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 5000);
						Local_112.f_10 = 7;
					}
					break;
				
				case 9:
					unk_0xC96275575DC981A9(Local_112.f_9, 5, 0);
					unk_0x78F48B47DB1C3316(Local_112.f_9, 1);
					if (!unk_0x7F4AE93855973529(Local_112.f_9))
					{
						unk_0xE9062A1E9EC059E7(Local_112.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					Local_112.f_10 = 10;
					break;
				
				case 10:
					if (!unk_0x7F4AE93855973529(Local_112.f_9))
					{
						if (!func_62(Local_112.f_9, 474215631) && !func_62(Local_112.f_9, -1519143300))
						{
							if (!unk_0xA77EE6C138A588EB(Local_112.f_9))
							{
								unk_0x25E44A12DC982C36(Local_112.f_9, "CODE_HUMAN_STAND_COWER");
								unk_0x4E61D536D3C86A36(Local_112.f_9, -1);
								unk_0xCC61640A821F277C(Local_112.f_9, 1);
							}
						}
					}
					break;
				
				case 29:
					if (func_112(Local_112.f_18, unk_0x0E29C61F26D96FDB(250, 500)))
					{
						unk_0xB84298F7B203EA5A(Local_112.f_9, 30f);
						unk_0x9593ABA7B045F264(Local_112.f_9, 30f);
						unk_0x1247C00E9DC4EDDD(Local_112.f_9, 30f);
						unk_0xC96275575DC981A9(Local_112.f_9, 1, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 3, 1);
						unk_0xC96275575DC981A9(Local_112.f_9, 5, 1);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 512, 1);
						unk_0xC96275575DC981A9(Local_112.f_9, 0, 1);
						unk_0xC96275575DC981A9(Local_112.f_9, 14, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 28, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 37, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 43, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 45, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 50, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 51, 0);
						unk_0x73655D4147D2FFBC(Local_112.f_9, 2);
						unk_0x2937901439E611F5(Local_112.f_9, 1);
						unk_0xFA4023BBD5BCB8B5(Local_112.f_9, unk_0x0E29C61F26D96FDB(10, 22));
						unk_0x5B36DF5C54D0170F(Local_112.f_9, unk_0x0E29C61F26D96FDB(30, 60));
						unk_0x9CE039D54B14B412(Local_112.f_9, 2055493265);
						unk_0x5CD8291F2C5E0AD1(Local_112.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							unk_0xC1B7B5C6FDC0755B(Local_112.f_9, joaat("weapon_pistol"), -1, 0, 1);
							unk_0x0B25AB3A7FA0683C(Local_112.f_9, joaat("weapon_pistol"), 0);
						}
						unk_0x7DD7196E1A0C1D43(Local_112.f_9, unk_0x17B5CC8A8615737D(), 0, 16);
						unk_0x34BD4F801E611586(Local_112.f_9, Local_695, 30f);
						unk_0xCC61640A821F277C(Local_112.f_9, 1);
						Local_112.f_10 = 30;
					}
					break;
				
				case 30:
					if (!func_62(Local_112.f_9, 780511057))
					{
						Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 5000);
						Local_112.f_10 = 29;
					}
					break;
				
				case 13:
					if (func_112(Local_112.f_18, unk_0x0E29C61F26D96FDB(0, 500)))
					{
						if (unk_0x0B1B005A46EF4C32(Local_112.f_9))
						{
							unk_0x43A5B92AFDE81292(Local_112.f_9, Local_692);
						}
						unk_0x5CD8291F2C5E0AD1(Local_112.f_9, &iVar0, 1);
						if (iVar0 != joaat("weapon_unarmed"))
						{
							unk_0xE123B8AA81BD49CF(Local_112.f_9);
							unk_0x39DF32F630CC12A7(Local_112.f_9, 1);
							unk_0x0B25AB3A7FA0683C(Local_112.f_9, joaat("weapon_unarmed"), 1);
							unk_0x6F2C1CD778FB751C(Local_112.f_9, 0);
						}
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 2, 0);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 64, 0);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 128, 0);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 8, 0);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 1, 0);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 32, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 5, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 17, 1);
						unk_0x86DD54980FE55567(&uLocal_484);
						if (unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
						{
							unk_0x83150B7E65C16AFE(0, 0, 64);
						}
						unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 200f, -1, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_484);
						unk_0x00E85C3B3BD34B10(Local_112.f_9, uLocal_484);
						unk_0x08377FB2AE4C6899(&uLocal_484);
						unk_0xCC61640A821F277C(Local_112.f_9, 1);
						unk_0x650BB0E111420EAF(Local_112.f_9, 1);
						Local_112.f_10 = 14;
					}
					break;
				
				case 14:
					if (!func_62(Local_112.f_9, 1805844857) && !unk_0x48368B3E430594FA(Local_112.f_9))
					{
						Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 5000);
						Local_112.f_10 = 13;
					}
					break;
				
				case 15:
					unk_0xB195EE9DB37DA7F2(Local_112.f_9, 2, 1);
					unk_0xB195EE9DB37DA7F2(Local_112.f_9, 64, 0);
					unk_0xB195EE9DB37DA7F2(Local_112.f_9, 128, 0);
					unk_0xB195EE9DB37DA7F2(Local_112.f_9, 8, 0);
					unk_0xB195EE9DB37DA7F2(Local_112.f_9, 1, 0);
					unk_0xB195EE9DB37DA7F2(Local_112.f_9, 32, 0);
					unk_0xC96275575DC981A9(Local_112.f_9, 5, 0);
					unk_0xC96275575DC981A9(Local_112.f_9, 17, 1);
					unk_0x6018E338F7ABCE75(Local_112.f_9, 173, 1);
					unk_0x0E21DA99F698AF06(Local_112.f_9, 237, 1);
					unk_0x316B8FE556E99FA1(Local_112.f_9, 3f);
					if (func_94(Local_254[0 /*6*/]))
					{
						if ((!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_254[0 /*6*/], 0) && func_104(Local_254[0 /*6*/], Local_254[0 /*6*/].f_1, 3f)) && func_353(unk_0x638527C9799F2AE4(Local_254[0 /*6*/]), Local_254[0 /*6*/].f_4, 20f))
						{
							if (unk_0x2315BB1606BC3DC3(Local_112.f_9, Local_254[0 /*6*/], 0) && !unk_0x4FF557C7B233F003(Local_112.f_9))
							{
								Local_112.f_10 = 16;
							}
							else if (func_112(Local_112.f_18, unk_0x0E29C61F26D96FDB(250, 350)))
							{
								if (unk_0x0B1B005A46EF4C32(Local_112.f_9))
								{
									unk_0x43A5B92AFDE81292(Local_112.f_9, Local_692);
								}
								else
								{
									unk_0x15848523A8959DBC(Local_112.f_9);
								}
								unk_0x3AD5401AC8DD9226(Local_112.f_9, Local_254[0 /*6*/], 25000, -1, 2f, 8388608, 0);
								unk_0xCC61640A821F277C(Local_112.f_9, 1);
								Local_112.f_10 = 16;
							}
						}
						else
						{
							Local_112.f_10 = 13;
						}
					}
					else
					{
						Local_112.f_10 = 13;
					}
					break;
				
				case 16:
					if (!func_94(Local_254[0 /*6*/]))
					{
						Local_112.f_10 = 13;
					}
					else if (((unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_254[0 /*6*/], 0) || unk_0x4FF557C7B233F003(Local_112.f_9)) || !func_104(Local_254[0 /*6*/], Local_254[0 /*6*/].f_1, 3f)) || !func_353(unk_0x638527C9799F2AE4(Local_254[0 /*6*/]), Local_254[0 /*6*/].f_4, 20f))
					{
						Local_112.f_10 = 13;
					}
					else if (unk_0x7B816C72877502C5(Local_112.f_9, Local_254[0 /*6*/]))
					{
						Local_112.f_10 = 31;
					}
					else if (!func_62(Local_112.f_9, -1794415470))
					{
						Local_112.f_10 = 15;
					}
					unk_0x316B8FE556E99FA1(Local_112.f_9, 2f);
					break;
				
				case 17:
					if (func_94(Local_254[0 /*6*/]) && unk_0x7B816C72877502C5(Local_112.f_9, Local_254[0 /*6*/]))
					{
						unk_0xA0F84EA3D7C06982(Local_112.f_9, Local_254[0 /*6*/], unk_0x17B5CC8A8615737D(), 8, 30f, 786468, 350f, 30f, 1);
						unk_0x6018E338F7ABCE75(Local_112.f_9, 173, 0);
						unk_0xCC61640A821F277C(Local_112.f_9, 1);
						Local_112.f_10 = 18;
					}
					else if (!unk_0x9172DCBCA2E183EC(Local_112.f_9))
					{
						Local_112.f_10 = 13;
					}
					break;
				
				case 18:
					if (!func_62(Local_112.f_9, -1273030092))
					{
						Local_112.f_10 = 17;
					}
					break;
				
				case 19:
					unk_0x15848523A8959DBC(Local_112.f_9);
					unk_0xC96275575DC981A9(Local_112.f_9, 5, 0);
					unk_0x25E44A12DC982C36(Local_112.f_9, "CODE_HUMAN_STAND_COWER");
					unk_0x4E61D536D3C86A36(Local_112.f_9, -1);
					unk_0xCC61640A821F277C(Local_112.f_9, 1);
					Local_112.f_10 = 20;
					break;
				
				case 20:
					if (!unk_0x7F4AE93855973529(Local_112.f_9))
					{
						if (!func_62(Local_112.f_9, 474215631))
						{
							Local_112.f_10 = 19;
						}
					}
					break;
				
				case 21:
					if (func_351(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_350())
					{
						Local_112.f_10 = 23;
					}
					else if (unk_0xA383F5B15F4F8356(func_349()))
					{
						if (unk_0x1F8F07D86DA1A701(Local_112.f_9, -1519143300) == 1)
						{
							unk_0xB81A66FC0F60A73C(Local_112.f_9, 500);
						}
						else
						{
							unk_0x15848523A8959DBC(Local_112.f_9);
							unk_0xFFAC04A19BFE8F03(Local_112.f_9);
						}
						if (!unk_0x143230304C45DBF3(Local_112.f_9, func_349()))
						{
							unk_0xD25D00F8613DE69F(Local_112.f_9, func_349());
						}
						unk_0xD80C7E92F2CAB25C(func_349(), 0);
						unk_0x59B89354BBE1A4E7(func_349(), 1.5f, 3.5f, -1082130432);
						unk_0x346D6A5BC2F879E2(Local_112.f_9, 0);
						unk_0x6C6C9684BB95A6C5(Local_112.f_9, 1);
						unk_0x652C108992DBE98F(Local_112.f_9, 1);
						unk_0xD58AE07026EDCFAE(Local_112.f_9, 1);
						unk_0xAC81755AD10CE43D(Local_112.f_9, 1);
						unk_0x84E4BE19D702B6C5(Local_112.f_9, 0);
						unk_0x1654F934DC232402(Local_112.f_9, 1);
						unk_0x6018E338F7ABCE75(Local_112.f_9, 167, 1);
						unk_0x6018E338F7ABCE75(Local_112.f_9, 118, 1);
						unk_0x6FE87B0CB5BE8FB1(Local_112.f_9, 1);
						unk_0x4114B83B329702FF(Local_112.f_9, 1);
						unk_0x6018E338F7ABCE75(Local_112.f_9, 42, 1);
						unk_0x2BFFCC859E7DDFFF(Local_112.f_9, 1);
						unk_0x2F944797D47913A7(Local_112.f_9, 1);
						unk_0xA09E96F8EA5F37C4(Local_112.f_9, 2f);
						unk_0x86534A8EC2C9DA71(Local_112.f_9, 2f);
						unk_0xAC81755AD10CE43D(Local_112.f_9, 1);
						unk_0x6018E338F7ABCE75(Local_112.f_9, 118, 1);
						unk_0xB195EE9DB37DA7F2(Local_112.f_9, 1, 0);
						unk_0xC96275575DC981A9(Local_112.f_9, 17, 1);
						unk_0xC96275575DC981A9(Local_112.f_9, 0, 0);
						unk_0x0E21DA99F698AF06(Local_112.f_9, 237, 1);
						unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
						unk_0xCC61640A821F277C(Local_112.f_9, 1);
						Local_112.f_10 = 22;
					}
					break;
				
				case 22:
					if (func_351(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_350())
					{
						Local_112.f_10 = 23;
					}
					else
					{
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							if (func_348())
							{
								iVar1 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
								if (!unk_0x2315BB1606BC3DC3(Local_112.f_9, iVar1, 0))
								{
									fVar3 = unk_0x13B7ACE69D27E3E4(iVar1);
									if (fVar3 < 1.75f && func_104(Local_112.f_9, Local_692, 8f))
									{
										if (!func_62(Local_112.f_9, -1794415470))
										{
											iVar2 = -1;
											if (unk_0x10C3BF43D462F5D4(iVar1))
											{
												if (unk_0xC0FA8EEF6413F866(iVar1, 0, 0) && unk_0x1626793F639090A0(Local_112.f_9, iVar1, 0, 1, 0))
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
												unk_0x3AD5401AC8DD9226(Local_112.f_9, iVar1, 25000, iVar2, 2f, 1048577, 0);
											}
										}
										else if (unk_0x9172DCBCA2E183EC(Local_112.f_9))
										{
											if (unk_0xF566689615D97192(Local_112.f_9) != iVar1)
											{
												unk_0x15848523A8959DBC(Local_112.f_9);
											}
										}
									}
									else if (func_62(Local_112.f_9, -1794415470))
									{
										if (!unk_0x9172DCBCA2E183EC(Local_112.f_9))
										{
											unk_0x15848523A8959DBC(Local_112.f_9);
										}
									}
								}
							}
							else if (func_62(Local_112.f_9, -1794415470))
							{
								unk_0x15848523A8959DBC(Local_112.f_9);
							}
						}
						else if (func_62(Local_112.f_9, -1794415470))
						{
							unk_0x15848523A8959DBC(Local_112.f_9);
						}
						if (unk_0x1D0EB673E1AE9A25(Local_112.f_9, unk_0x17B5CC8A8615737D()))
						{
							if (unk_0x9172DCBCA2E183EC(Local_112.f_9))
							{
								unk_0xEF9294ED57E4AC3D(Local_112.f_9);
							}
						}
						else if (!unk_0xFD0FE723227D5AB6(Local_112.f_9, 1))
						{
							if (!unk_0x9172DCBCA2E183EC(Local_112.f_9))
							{
								unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
							}
						}
						unk_0x0E21DA99F698AF06(Local_112.f_9, 237, 1);
					}
					break;
				
				case 23:
					if (func_351(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_350())
					{
						if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
						{
							unk_0xFB2D342CDD441DD9(Local_112.f_9);
							unk_0x4114B83B329702FF(Local_112.f_9, 0);
							unk_0x6018E338F7ABCE75(Local_112.f_9, 42, 0);
							unk_0x6018E338F7ABCE75(Local_112.f_9, 118, 1);
						}
						unk_0x6FE87B0CB5BE8FB1(Local_112.f_9, 0);
						if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							if (func_62(Local_112.f_9, -1794415470))
							{
								unk_0x15848523A8959DBC(Local_112.f_9);
							}
						}
						if (((!unk_0x7F4AE93855973529(Local_112.f_9) && !unk_0xB965476E8F962C70(Local_112.f_9, 0)) && !unk_0x4FF557C7B233F003(Local_112.f_9)) && !func_62(Local_112.f_9, -828834893))
						{
							unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
							if ((!func_347(Local_112.f_19, 10) && func_104(Local_112.f_9, Local_692, 50f)) || !func_112(iLocal_481, 2000))
							{
								if (unk_0xFD0FE723227D5AB6(Local_112.f_9, 1))
								{
									unk_0x83150B7E65C16AFE(Local_112.f_9, 0, 0);
								}
								else if (((!unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6) && !unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), Local_112.f_9)) && !func_350()) || unk_0xA77EE6C138A588EB(Local_112.f_9))
								{
									unk_0x6349785089ED32B4(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1);
								}
								else if (unk_0x1F8F07D86DA1A701(Local_112.f_9, -1519143300) == 1)
								{
									unk_0xB81A66FC0F60A73C(Local_112.f_9, -1);
								}
								else
								{
									unk_0xD3C1FC2A6E8F1095(Local_112.f_9, -1, unk_0x17B5CC8A8615737D(), -1, 0);
								}
							}
							else if (!unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
							{
								unk_0x6349785089ED32B4(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1);
							}
							unk_0xCC61640A821F277C(Local_112.f_9, 1);
							Local_112.f_10 = 24;
						}
					}
					else if (!iLocal_449)
					{
						Local_112.f_10 = 21;
					}
					else
					{
						Local_112.f_10 = 25;
					}
					break;
				
				case 24:
					if (func_351(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_350())
					{
						if (!func_62(Local_112.f_9, -1519143300))
						{
							if (!func_62(Local_112.f_9, -875674219))
							{
								if (unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
								{
									if (!func_347(Local_112.f_19, 10) && func_104(Local_112.f_9, Local_692, 50f))
									{
										unk_0x83150B7E65C16AFE(Local_112.f_9, 0, 0);
										Local_112.f_10 = 23;
									}
								}
								else
								{
									Local_112.f_10 = 23;
								}
							}
							else if (!func_347(Local_112.f_19, 10) && func_104(Local_112.f_9, Local_692, 50f))
							{
								if ((unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), Local_112.f_9)) || func_350())
								{
									Local_112.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_449)
					{
						Local_112.f_10 = 21;
					}
					else
					{
						Local_112.f_10 = 25;
					}
					break;
				
				case 25:
					if (func_351(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_112.f_10 = 23;
					}
					else
					{
						if (unk_0xF30AB065E07D2B0F(Local_112.f_9))
						{
							unk_0xFB2D342CDD441DD9(Local_112.f_9);
							unk_0x4114B83B329702FF(Local_112.f_9, 0);
							unk_0x6018E338F7ABCE75(Local_112.f_9, 42, 0);
						}
						unk_0x15848523A8959DBC(Local_112.f_9);
						unk_0x4718A774D9248520(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1, 0, 2);
						unk_0xCC61640A821F277C(Local_112.f_9, 1);
						Local_112.f_10 = 26;
					}
					break;
				
				case 26:
					if (func_351(Local_112.f_9, Local_112.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_112.f_10 = 23;
					}
					else if (unk_0xA77EE6C138A588EB(Local_112.f_9))
					{
						unk_0xAC81755AD10CE43D(Local_112.f_9, 1);
						unk_0xD58AE07026EDCFAE(Local_112.f_9, 0);
					}
					else if ((!unk_0x7F4AE93855973529(Local_112.f_9) && !unk_0x7276DD47CA44085D(Local_112.f_9)) && unk_0x9EFEA3B33DE2B966(Local_112.f_9))
					{
						if (!unk_0xCAA82A181F15BFF5(Local_112.f_9, unk_0x17B5CC8A8615737D(), 45f))
						{
							if (!func_62(Local_112.f_9, -875674219))
							{
								unk_0x6349785089ED32B4(Local_112.f_9, unk_0x17B5CC8A8615737D(), -1);
							}
						}
					}
					break;
				
				case 27:
					break;
				
				case 28:
					break;
				
				case 31:
					unk_0xCC61640A821F277C(Local_112.f_9, 1);
					Local_112.f_10 = 32;
					break;
				
				case 32:
					break;
				}
			}
	}
}

bool func_347(int iParam0, int iParam1)
{
	return (unk_0x0385EDD8AAEC86F4() - iParam0) > iParam1;
}

int func_348()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
	}
	else if (unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D()))
	{
		iVar0 = unk_0xF566689615D97192(unk_0x17B5CC8A8615737D());
	}
	if (!func_94(iVar0))
	{
		return 0;
	}
	else
	{
		if (unk_0x58060A1B26EA2597(iVar0) == 0)
		{
			return 0;
		}
		iVar1 = unk_0x0324EEB10F81965F(iVar0);
		if (unk_0xD28959FE5BC2D14D(iVar1))
		{
			return 0;
		}
		if (unk_0x4A0388DBE0CE87AA(iVar1))
		{
			return 0;
		}
		if (unk_0xBA3A0947FBDD9ADD(iVar1))
		{
			return 0;
		}
	}
	return 1;
}

var func_349()
{
	return unk_0xDC8370280C455166(unk_0x592069F95C314814());
}

int func_350()
{
	if (!iLocal_418)
	{
		return 1;
	}
	if (func_312(sLocal_487, 0))
	{
		return 1;
	}
	if (iLocal_98 != 3 && iLocal_98 != 6)
	{
		return 1;
	}
	if (unk_0x7276DD47CA44085D(Local_112.f_9) || unk_0x7F4AE93855973529(Local_112.f_9))
	{
		iLocal_481 = unk_0x94E3E074F38DF86C();
		return 1;
	}
	if (!func_112(iLocal_481, 2000))
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (func_21(iParam0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
		if (unk_0x579A94EB2BF9398F(Var0, fParam4, 1))
		{
			return 1;
		}
		if (func_104(iParam0, Local_692, fParam2))
		{
			if (!func_347(iParam1, 10))
			{
				if (bParam6)
				{
					if (func_352(1, 0, 1))
					{
						if (unk_0xAFA764E7E6249161(unk_0x17B5CC8A8615737D()) || unk_0x9A68600819F7F8C3(unk_0x17B5CC8A8615737D()))
						{
							return 1;
						}
					}
				}
				if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iParam0))
				{
					return 1;
				}
				if (unk_0xE58A1B5558D2DC66(unk_0xBE369BE1BC57A796()))
				{
					if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iParam0))
					{
						return 1;
					}
					if (bParam3)
					{
						if (unk_0xE58A1B5558D2DC66(unk_0xBE369BE1BC57A796()))
						{
							if (unk_0xCAA82A181F15BFF5(unk_0x17B5CC8A8615737D(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
				{
					return 1;
				}
				if (unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 1;
				}
				if (unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()))
				{
					return 1;
				}
			}
		}
		if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
		{
			unk_0xCF458DC2F9000261(iParam0);
			return 1;
		}
		if (unk_0xB42101338C533CB4(iParam0, unk_0x17B5CC8A8615737D()) || unk_0x080A2F4FECE019B1(iParam0, 56))
		{
			if (unk_0x7F4AE93855973529(iParam0))
			{
				return 1;
			}
		}
		if (unk_0x3C04DDC5730997E5(-1, Var0, fParam5))
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
		if (unk_0x3BA3AD8AC9469C63(Var3, Var6, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_352(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1);
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

int func_353(float fParam0, float fParam1, float fParam2)
{
	if (unk_0xE851F22ED3518011((fParam0 - fParam1)) <= fParam2)
	{
		return 1;
	}
	return 0;
}

char* func_354()
{
	return "move_m@bail_bond_not_tazered";
}

char* func_355()
{
	return "move_m@bail_bond_tazered";
}

int func_356()
{
	unk_0xEFA1E47456B98380(func_354());
	unk_0xEFA1E47456B98380(func_355());
	if (unk_0x69EB2CB272E0AD5D(func_354()) && unk_0x69EB2CB272E0AD5D(func_355()))
	{
		return 1;
	}
	return 0;
}

void func_357(var uParam0, bool bParam1)
{
	if (unk_0xB965476E8F962C70(*uParam0, 0))
	{
		*bParam1 = 1;
	}
}

void func_358(int iParam0, var uParam1, float fParam2, int iParam3)
{
	if (func_417(iParam0))
	{
		if (func_359(iParam0, unk_0x17B5CC8A8615737D(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = unk_0x0385EDD8AAEC86F4();
		}
	}
}

bool func_359(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_365(iParam0, iParam1);
	if (!func_417(iParam0) || !func_417(iParam1))
	{
		if (iVar4 != -1)
		{
			func_9(&(Local_56[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_363(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_362();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_56[iVar4 /*4*/].f_1 = iParam0;
		Local_56[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x425DAA25CBB7EDE2(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_360(&(Local_56[iVar4 /*4*/]), Var1, iParam1, &(Local_56[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x94E3E074F38DF86C() - Local_56[iVar4 /*4*/].f_3) < iParam4);
}

int func_360(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_417(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_361(iParam4, iParam7) };
		*uParam0 = unk_0xEA2B91A5203A20DF(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x20122FD3E8B8C933(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x80E9CA64E9C8E070(iVar7))
	{
		func_417(iVar7);
		if (unk_0xB80CAAF3D65FBC1F(iVar7) == iParam4)
		{
			if (bLocal_97)
			{
				unk_0xB40FB5D5A6A33BCE(Param1, unk_0x57240623C1BC6E88(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x94E3E074F38DF86C();
			return 1;
		}
		return 0;
	}
	if (unk_0x3983CCB0D958159C(iVar7))
	{
		func_417(iVar7);
		if (unk_0xFD0FE723227D5AB6(iParam4, 0))
		{
			if (unk_0xBFC71CD990E479DB(iVar7) == unk_0x60604E51E30D25B8(iParam4, 0))
			{
				if (bLocal_97)
				{
					unk_0xB40FB5D5A6A33BCE(Param1, unk_0x57240623C1BC6E88(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x94E3E074F38DF86C();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_361(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x0E29C61F26D96FDB(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x57240623C1BC6E88(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x425DAA25CBB7EDE2(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x425DAA25CBB7EDE2(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x425DAA25CBB7EDE2(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x425DAA25CBB7EDE2(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x425DAA25CBB7EDE2(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x425DAA25CBB7EDE2(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x57240623C1BC6E88(iParam0, 1);
}

int func_362()
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

int func_363(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_181(unk_0x57240623C1BC6E88(iParam1, 1) - unk_0x57240623C1BC6E88(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x8C79B6FF2A91C93F(iParam0) };
	}
	else
	{
		Var3 = { func_181(unk_0x425DAA25CBB7EDE2(iParam0, 31086, 0f, 5f, 0f) - unk_0x425DAA25CBB7EDE2(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_364(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_364(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_365(int iParam0, int iParam1)
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

void func_366(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (func_417(iParam0))
	{
		if (func_359(unk_0x17B5CC8A8615737D(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = unk_0x0385EDD8AAEC86F4();
		}
	}
}

void func_367()
{
	if (func_57(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_689, 100f))
	{
		if (!func_368())
		{
			unk_0xF7CF05FEB40E538B(&cLocal_677, 8);
			func_65();
			iLocal_453 = 1;
		}
	}
	else if (iLocal_453)
	{
		if (!func_57(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_689, 120f))
		{
			if (unk_0x77888DFE5B94E7E5())
			{
				unk_0xB5BD48559882D958();
				iLocal_453 = 0;
			}
		}
		else
		{
			func_65();
		}
	}
	if (iLocal_453)
	{
		if (func_368())
		{
			unk_0xB5BD48559882D958();
			iLocal_453 = 0;
		}
	}
}

bool func_368()
{
	return Global_89133;
}

void func_369()
{
	func_35();
	func_367();
	if (func_21(Local_112.f_9))
	{
		func_366(Local_112.f_9, &iLocal_474, 1126825984, 7);
		func_358(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_346();
		switch (iLocal_100)
		{
			case 0:
				func_19();
				iLocal_420 = 0;
				iLocal_439 = 0;
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_449)
				{
					if (func_309("BBS_05", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_05");
					}
					func_109(&(Local_112.f_8));
					if (!func_104(Local_112.f_9, Local_692, 25f))
					{
						if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
						{
							Local_112.f_18 = unk_0x94E3E074F38DF86C();
							Local_112.f_10 = 25;
						}
						if (func_347(iLocal_474, 10))
						{
							if (!func_60())
							{
								if (func_73(&uLocal_499, cLocal_493, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_463 = unk_0x94E3E074F38DF86C();
								}
							}
						}
						iLocal_449 = 1;
					}
					else if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
					{
						if (func_309("BBS_COPS", 0, 0))
						{
							unk_0x69E47427C5084888("BBS_COPS");
						}
						iLocal_420 = 1;
						if (!func_60())
						{
							iLocal_100 = 2;
						}
					}
					else if (!iLocal_419)
					{
						if (!func_312(sLocal_487, 1))
						{
							if (func_73(&uLocal_499, cLocal_493, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_419 = 1;
							}
						}
					}
					else if (!iLocal_439)
					{
						if (!func_309("BBS_COPS", 0, 0))
						{
							func_311("BBS_COPS", 7500, 0);
							iLocal_439 = 1;
						}
					}
					else
					{
						func_370();
					}
				}
				else if (func_104(Local_112.f_9, Local_692, 8f))
				{
					if (Local_112.f_10 == 25 || Local_112.f_10 == 26)
					{
						Local_112.f_18 = unk_0x94E3E074F38DF86C();
						Local_112.f_10 = 21;
					}
					iLocal_439 = 0;
					if (func_309("BBS_05", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_05");
					}
					if (!func_60())
					{
						if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
						{
							if (unk_0x0E29C61F26D96FDB(0, 2) == 0)
							{
								if (func_73(&uLocal_499, cLocal_493, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_463 = unk_0x94E3E074F38DF86C();
								}
							}
							else if (func_73(&uLocal_499, cLocal_492, "BB2_J5", 4, 0, 0, 0))
							{
								iLocal_463 = unk_0x94E3E074F38DF86C();
							}
						}
					}
					iLocal_449 = 0;
				}
				else
				{
					if (func_309("BBS_COPS", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_COPS");
					}
					if (!unk_0xA3794949321E107C(Local_112.f_8))
					{
						Local_112.f_8 = func_343(Local_112.f_9, 1, 1, 5);
					}
					if (!iLocal_440)
					{
						func_311("BBS_05", 7500, 1);
						iLocal_440 = 1;
					}
				}
				if (func_307(&(Local_112.f_9)))
				{
					iLocal_454 = 1;
					iLocal_100 = 2;
				}
				break;
			
			case 2:
				if (func_309("BBS_05", 0, 0))
				{
					unk_0x69E47427C5084888("BBS_05");
				}
				iLocal_420 = 1;
				func_109(&(Local_112.f_8));
				if (iLocal_454)
				{
					func_123(7);
				}
				else
				{
					if (func_309("BBS_COPS", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_COPS");
					}
					func_123(3);
				}
				break;
			}
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x75342B3CD0FB5275() && unk_0xBE675F7A607B46B0(203) != 0)
	{
		iVar1 = 1;
	}
	if (func_21(Local_112.f_9))
	{
		if (func_60())
		{
			iLocal_463 = unk_0x94E3E074F38DF86C();
		}
		if (!iLocal_421)
		{
			if (func_73(&uLocal_499, cLocal_492, "BB2_J6", 4, 0, 0, 0))
			{
				iLocal_421 = 1;
			}
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0xFD0FE723227D5AB6(Local_112.f_9, 0) && unk_0x60604E51E30D25B8(Local_112.f_9, 0) == iVar0)
			{
				if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					if (!iLocal_447)
					{
						if (!func_60())
						{
							iLocal_462 = unk_0x94E3E074F38DF86C();
							iLocal_447 = 1;
						}
					}
					else if (!iLocal_422[0])
					{
						if ((unk_0x94E3E074F38DF86C() - iLocal_462) > 7500)
						{
							func_373(0);
						}
					}
					else if (!iLocal_422[1])
					{
						if ((unk_0x94E3E074F38DF86C() - iLocal_462) > 10000)
						{
							func_373(1);
						}
					}
					else if (!iLocal_422[2])
					{
						if ((unk_0x94E3E074F38DF86C() - iLocal_462) > 10000)
						{
							func_373(2);
						}
					}
					if (unk_0x23E9113C762466ED(iVar0))
					{
						if (unk_0x13B7ACE69D27E3E4(iVar0) < 0.5f)
						{
							if (!iLocal_433)
							{
								if (!func_60())
								{
									if (func_112(iLocal_479, 3500))
									{
										if (func_73(&uLocal_499, cLocal_492, "BB2_STOP", 4, 0, 0, 0))
										{
											iLocal_433 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_433)
						{
							if (!func_312("BB2_STOP", 1))
							{
								iLocal_479 = unk_0x94E3E074F38DF86C();
							}
						}
						else
						{
							iLocal_479 = unk_0x94E3E074F38DF86C();
						}
					}
				}
				else if (!iLocal_420)
				{
					if (func_73(&uLocal_499, cLocal_492, "BB2_J9", 4, 0, 0, 0))
					{
						iLocal_420 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_441)
				{
					if (!func_348())
					{
						func_328("BBS_VH1", -1);
						iLocal_441 = 1;
					}
				}
				iLocal_479 = unk_0x94E3E074F38DF86C();
			}
			iLocal_428 = 0;
			iLocal_429 = 0;
		}
		else
		{
			iLocal_479 = unk_0x94E3E074F38DF86C();
			iLocal_433 = 0;
			if (unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = unk_0xF566689615D97192(unk_0x17B5CC8A8615737D());
				if (!iLocal_428)
				{
					if (func_348())
					{
						if (!unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
						{
							if (!func_312("BBC_T6", 1))
							{
								if (func_73(&uLocal_499, cLocal_493, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_428 = 1;
								}
							}
						}
						func_372("BBS_VH1", 1);
					}
					else if (!func_312("BBC_T8", 1) && !func_312("BB2_WTF", 1))
					{
						if (unk_0x0E29C61F26D96FDB(0, 11) < 5)
						{
							if (func_73(&uLocal_499, cLocal_493, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_428 = 1;
							}
						}
						else if (func_73(&uLocal_499, cLocal_492, "BB2_WTF", 4, iVar1, 0, 0))
						{
							iLocal_428 = 1;
						}
					}
				}
				else if (!iLocal_432)
				{
					if (func_371(&iVar0))
					{
						if ((!func_312("BB2_JACK", 1) && !func_312("BBC_T6", 1)) && !func_312("BBC_T8", 1))
						{
							if (func_73(&uLocal_499, cLocal_492, "BB2_JACK", 4, iVar1, 0, 0))
							{
								iLocal_432 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_428 = 0;
				if (unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
				{
					if (!iLocal_429)
					{
						if (!func_312("BBC_T7", 1) && !func_312("BB2_OUT", 1))
						{
							if (unk_0x0E29C61F26D96FDB(0, 11) < 5)
							{
								if (func_73(&uLocal_499, cLocal_493, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_429 = 1;
								}
							}
							else if (func_73(&uLocal_499, cLocal_492, "BB2_OUT", 4, iVar1, 0, 0))
							{
								iLocal_429 = 1;
							}
						}
					}
				}
				else if (Local_112.f_10 == 24 && func_62(Local_112.f_9, -1519143300))
				{
					if (func_104(Local_112.f_9, Local_692, 25f))
					{
						if (!func_312("BB2_J10", 1))
						{
							if (func_112(iLocal_464, unk_0x0E29C61F26D96FDB(2500, 5000)))
							{
								if (func_60())
								{
									func_3();
								}
								if (func_73(&uLocal_499, cLocal_492, "BB2_J10", 4, 0, 0, 0))
								{
									iLocal_464 = unk_0x94E3E074F38DF86C();
								}
							}
						}
						else
						{
							iLocal_464 = unk_0x94E3E074F38DF86C();
						}
					}
				}
				else
				{
					iLocal_464 = 0;
					if (!iLocal_420)
					{
						if (func_73(&uLocal_499, cLocal_492, "BB2_J9", 4, 0, 0, 0))
						{
							iLocal_463 = unk_0x94E3E074F38DF86C();
							iLocal_420 = 1;
						}
					}
					if (!func_60())
					{
						if (func_112(iLocal_463, unk_0x0E29C61F26D96FDB(3000, 6000)))
						{
							if (!func_104(Local_112.f_9, Local_692, 20f))
							{
								if (func_73(&uLocal_499, cLocal_492, "BB2_J4", 4, 0, 0, 0))
								{
									iLocal_463 = unk_0x94E3E074F38DF86C();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_371(int iParam0)
{
	int iVar0;
	
	if (func_94(*iParam0))
	{
		if (unk_0x34D81E587C110E92(unk_0x17B5CC8A8615737D()))
		{
			return 1;
		}
		iVar0 = unk_0xB14331E50C01A61B(unk_0x17B5CC8A8615737D());
		if (func_417(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_372(char* sParam0, int iParam1)
{
	if (func_316(sParam0))
	{
		unk_0x2E2945F5602A744F(iParam1);
	}
}

void func_373(int iParam0)
{
	if (!iLocal_422[iParam0])
	{
		if (func_73(&uLocal_499, cLocal_492, sLocal_488[iParam0], 4, 0, 0, 0))
		{
			iLocal_422[iParam0] = 1;
			iLocal_447 = 0;
			iLocal_462 = 0;
		}
	}
}

void func_374()
{
	func_35();
	func_367();
	if (func_21(Local_112.f_9))
	{
		func_366(Local_112.f_9, &iLocal_474, 1126825984, 7);
		func_358(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_346();
		switch (iLocal_100)
		{
			case 0:
				iLocal_100 = 1;
				break;
			
			case 1:
				if (!iLocal_449)
				{
					if (func_309("BBS_05", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_05");
					}
					func_109(&(Local_112.f_8));
					if (!func_104(Local_112.f_9, Local_692, 25f))
					{
						if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
						{
							Local_112.f_18 = unk_0x94E3E074F38DF86C();
							Local_112.f_10 = 25;
						}
						if (func_347(iLocal_474, 10))
						{
							if (!func_60())
							{
								if (func_73(&uLocal_499, cLocal_493, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_463 = unk_0x94E3E074F38DF86C();
								}
							}
						}
						iLocal_419 = 1;
						iLocal_449 = 1;
					}
					else if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
					{
						unk_0x1B7B205820ED9CE2(unk_0xBE369BE1BC57A796());
						iLocal_419 = 1;
						iLocal_100 = 2;
					}
					else
					{
						if (!unk_0xA3794949321E107C(uLocal_456))
						{
							if (iLocal_436)
							{
								uLocal_456 = func_379(Local_689, 5, 1);
							}
						}
						if (!iLocal_419)
						{
							if (!func_312(sLocal_487, 1))
							{
								if (func_73(&uLocal_499, cLocal_493, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_419 = 1;
								}
							}
						}
						else if (!iLocal_436)
						{
							if (!func_60())
							{
								func_311("BBS_DROP", 7500, 0);
								iLocal_463 = unk_0x94E3E074F38DF86C();
								iLocal_436 = 1;
							}
						}
						else
						{
							func_370();
							func_377(&Local_385, Local_692, &iLocal_465, 5000, 1101004800);
						}
						if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_689, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_100 = 2;
						}
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							if (func_104(unk_0x17B5CC8A8615737D(), Local_689, 6.5f))
							{
								iLocal_100 = 2;
							}
						}
						else if (func_104(unk_0x17B5CC8A8615737D(), Local_689, 2.5f))
						{
							iLocal_100 = 2;
						}
					}
				}
				else
				{
					func_109(&uLocal_456);
					if (func_309("BBS_DROP", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_DROP");
					}
					if (func_104(Local_112.f_9, Local_692, 8f))
					{
						if (Local_112.f_10 == 25 || Local_112.f_10 == 26)
						{
							Local_112.f_18 = unk_0x94E3E074F38DF86C();
							Local_112.f_10 = 21;
						}
						if (func_309("BBS_05", 0, 0))
						{
							unk_0x69E47427C5084888("BBS_05");
						}
						if (!func_60())
						{
							if (Local_112.f_10 == 21 || Local_112.f_10 == 22)
							{
								if (unk_0x0E29C61F26D96FDB(0, 2) == 0)
								{
									if (func_73(&uLocal_499, cLocal_493, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_463 = unk_0x94E3E074F38DF86C();
									}
								}
								else if (func_73(&uLocal_499, cLocal_492, "BB2_J5", 4, 0, 0, 0))
								{
									iLocal_463 = unk_0x94E3E074F38DF86C();
								}
							}
						}
						iLocal_449 = 0;
					}
					else
					{
						if (!unk_0xA3794949321E107C(Local_112.f_8))
						{
							Local_112.f_8 = func_343(Local_112.f_9, 1, 1, 5);
						}
						if (!iLocal_440)
						{
							func_311("BBS_05", 7500, 1);
							iLocal_440 = 1;
						}
					}
				}
				if (!bLocal_446)
				{
					bLocal_446 = func_375(Local_692, Local_103, 180f);
				}
				if (func_307(&(Local_112.f_9)))
				{
					iLocal_454 = 1;
					iLocal_100 = 2;
				}
				break;
			
			case 2:
				func_109(&uLocal_456);
				if (func_309("BBS_DROP", 0, 0))
				{
					unk_0x69E47427C5084888("BBS_DROP");
				}
				if (iLocal_454)
				{
					func_123(7);
				}
				else if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					func_123(6);
				}
				else
				{
					func_109(&(Local_112.f_8));
					if (func_309("BBS_05", 0, 0))
					{
						unk_0x69E47427C5084888("BBS_05");
					}
					if (!bLocal_446)
					{
						bLocal_446 = func_375(Local_692, Local_103, 0f);
					}
					func_123(4);
				}
				break;
			}
	}
}

int func_375(struct<3> Param0, struct<3> Param3, float fParam6)
{
	int iVar0;
	
	if (!func_376(Param0, Param3, fParam6))
	{
		unk_0xFCBD7340FBF1FE46(3, 1);
		unk_0xFCBD7340FBF1FE46(5, 1);
		if (iLocal_473 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_473 - 1))
			{
				func_41(&(Local_132[iVar0 /*20*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_470 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_470 - 1))
			{
				func_92(&(Local_254[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_471 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_471 - 1))
			{
				func_37(&(Local_291[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_469 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_469 - 1))
			{
				func_37(&(Local_340[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_472 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_472 - 1))
			{
				func_95(&(Local_377[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_376(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_377(int iParam0, struct<3> Param1, int iParam4, int iParam5, float fParam6)
{
	struct<3> Var0;
	var uVar3;
	char[] cVar168[8];
	char* sVar169;
	
	if (func_21(*iParam0))
	{
		if (!func_60())
		{
			Var0 = { unk_0x57240623C1BC6E88(*iParam0, 1) };
			if (unk_0xB7A628320EFF8E47(Param1, Var0) < (fParam6 * fParam6))
			{
				if (unk_0x94E3E074F38DF86C() - *iParam4) > (iParam5 + unk_0x0E29C61F26D96FDB(0, 2000))
				{
					uVar3 = 16;
					func_89(&uVar3, 4, *iParam0, "MAUDE", 0, 1);
					cVar168 = "BBCAUD";
					sVar169 = "BBC_loiter";
					func_378(&uVar3, cVar168, sVar169, 4, 0, 0);
					*iParam4 = unk_0x94E3E074F38DF86C();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_378(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xEB79FECD9022AAF0(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

int func_379(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x84DAB725836026C6(iVar0, iParam3);
	unk_0x00EA14207118EEE2(iVar0, 1f);
	unk_0x5ACBCE67F0494242(iVar0, iParam4);
	return iVar0;
}

void func_380()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_21(Local_112.f_9))
	{
		func_366(Local_112.f_9, &iLocal_474, 1126825984, 7);
		func_358(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_346();
		switch (iLocal_100)
		{
			case 0:
				if (Local_112.f_10 != 29 && Local_112.f_10 != 30)
				{
					Local_112.f_18 = unk_0x94E3E074F38DF86C();
					Local_112.f_10 = 29;
				}
				func_385(iLocal_473);
				if (func_21(Local_112.f_9))
				{
					if (!unk_0xA3794949321E107C(Local_112.f_8))
					{
						Local_112.f_8 = func_343(Local_112.f_9, 1, 0, 5);
					}
					unk_0xCF458DC2F9000261(Local_112.f_9);
				}
				func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
				iLocal_100 = 1;
				break;
			
			case 1:
				func_383(iLocal_473);
				if (!iLocal_448)
				{
					func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
					func_321(&uLocal_44, Local_112.f_9, 0, 0, 1, 1, 1);
					if (!iLocal_417)
					{
						if (func_104(Local_112.f_9, Local_692, 30f))
						{
							if (!func_60())
							{
								if (func_73(&uLocal_499, cLocal_492, sLocal_486, 4, 0, 0, 0))
								{
									Local_112.f_17 = unk_0x94E3E074F38DF86C();
									iLocal_463 = unk_0x94E3E074F38DF86C();
									iLocal_417 = 1;
								}
							}
						}
						else
						{
							iLocal_417 = 1;
						}
					}
					if (Local_112.f_10 == 13 || Local_112.f_10 == 14)
					{
						if (iLocal_476 == -1)
						{
							iLocal_476 = unk_0x94E3E074F38DF86C();
						}
						if (iLocal_475 == -1)
						{
							iLocal_475 = unk_0x94E3E074F38DF86C();
						}
						else if (func_112(iLocal_475, 5000))
						{
							bVar0 = true;
						}
						if (func_318(Local_112.f_9, Local_692, bVar0, 0, 1, 170))
						{
							func_317();
							func_382(iLocal_473);
							Local_112.f_17 = unk_0x94E3E074F38DF86C();
							func_315(&uLocal_44, 0, 0);
							iLocal_448 = 1;
						}
						else
						{
							if (!func_60())
							{
								if (func_112(iLocal_463, unk_0x0E29C61F26D96FDB(5000, 12000)))
								{
									if (func_104(Local_112.f_9, Local_692, 30f))
									{
										if (unk_0x48368B3E430594FA(Local_112.f_9))
										{
											if (unk_0x0E29C61F26D96FDB(0, 101) < 30)
											{
												if (func_73(&uLocal_499, cLocal_493, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_463 = unk_0x94E3E074F38DF86C();
												}
											}
											else if (func_73(&uLocal_499, cLocal_492, "BB2_FLEE", 4, 0, 0, 0))
											{
												iLocal_463 = unk_0x94E3E074F38DF86C();
											}
										}
									}
								}
							}
							else
							{
								iLocal_463 = unk_0x94E3E074F38DF86C();
							}
							func_314(Local_112.f_9, Local_692, iLocal_476, 925353388);
						}
					}
					else if ((iLocal_468 > 0 && func_104(Local_112.f_9, Local_692, 85f)) || unk_0xB5DF060B138CD2EA(Local_112.f_9) < 200)
					{
						Local_112.f_10 = 13;
						Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 5000);
						iLocal_475 = unk_0x94E3E074F38DF86C();
						if (unk_0x23E9113C762466ED(Local_112.f_9))
						{
							unk_0xCF458DC2F9000261(Local_112.f_9);
						}
					}
					else if (!func_60())
					{
						if (func_112(iLocal_463, unk_0x0E29C61F26D96FDB(3500, 7000)))
						{
							if (func_104(Local_112.f_9, Local_692, 30f))
							{
								if (unk_0x0E29C61F26D96FDB(0, 101) < 30)
								{
									if (func_73(&uLocal_499, cLocal_493, "BBC_T2", 4, 0, 0, 0))
									{
										iLocal_463 = unk_0x94E3E074F38DF86C();
									}
								}
								else if (func_73(&uLocal_499, cLocal_492, "BB2_SHOOT", 4, 0, 0, 0))
								{
									iLocal_463 = unk_0x94E3E074F38DF86C();
								}
							}
						}
					}
					else
					{
						iLocal_463 = unk_0x94E3E074F38DF86C();
					}
				}
				else
				{
					func_317();
					if (!func_104(Local_112.f_9, Local_692, 10f))
					{
						if (!iLocal_437)
						{
							if (!func_312(sLocal_487, 1))
							{
								func_310(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_466, &iLocal_467, 1, 1);
								iLocal_437 = 1;
							}
						}
						else
						{
							func_342(&(Local_112.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_466, iLocal_467, 1);
						}
					}
					else
					{
						if (!iLocal_418)
						{
							if (!unk_0x7F4AE93855973529(Local_112.f_9) && !unk_0xFD0FE723227D5AB6(Local_112.f_9, 0))
							{
								if (func_309("BBS_APPSUS", 0, 0) || func_309("BBS_APPSUS2", 0, 0))
								{
									unk_0xD12BCC85C2F8B1DE();
								}
								if (!func_60())
								{
									func_3();
								}
								if (func_73(&uLocal_499, cLocal_492, sLocal_487, 4, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (!func_60())
						{
							iLocal_100 = 2;
						}
						func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
					}
					if (func_307(&(Local_112.f_9)))
					{
						iLocal_454 = 1;
						iLocal_100 = 2;
					}
				}
				break;
			
			case 2:
				if (func_309("BBS_APPSUS", 0, 0) || func_309("BBS_APPSUS2", 0, 0))
				{
					unk_0xD12BCC85C2F8B1DE();
				}
				iLocal_418 = 1;
				unk_0x3DAB418001EEA955(5, joaat("player"), iLocal_664);
				unk_0x3DAB418001EEA955(5, iLocal_664, joaat("player"));
				func_382(iLocal_473);
				func_109(&(Local_112.f_8));
				func_110(iLocal_468);
				func_317();
				Local_112.f_17 = unk_0x94E3E074F38DF86C();
				func_315(&uLocal_44, 0, 0);
				func_381(1, &uLocal_483);
				if (iLocal_454)
				{
					func_123(7);
				}
				else
				{
					func_123(3);
				}
				break;
			}
	}
}

void func_381(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0xD1D19967E553E144(Var0, Var3, 0, 1, 1, 1);
		unk_0xB57996B091C5D677(Var0, Var3);
		unk_0xB82FD68B5DE68F01(Var0, Var3, 0, 1);
		unk_0x862504E4C5E80C78(Var0, Var3, 0);
		unk_0xE6FC8C18754D8C2D(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x1B60289D0F2A2E3C(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x571422CE42B47889(*uParam1, 0);
		unk_0xB61819CCF7A3F445();
		unk_0xB82FD68B5DE68F01(Var0, Var3, 1, 1);
		unk_0xE7281B4166C6A4CD(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

void func_382(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (Local_132[iVar0 /*20*/].f_14 != 5)
		{
			func_98(Local_132[iVar0 /*20*/], 1);
			Local_132[iVar0 /*20*/].f_14 = 4;
			func_108(&(Local_132[iVar0 /*20*/].f_6));
		}
		iVar0++;
	}
}

void func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (func_21(Local_132[iVar0 /*20*/]))
		{
			func_358(Local_132[iVar0 /*20*/], &(Local_132[iVar0 /*20*/].f_17), 1126825984, 7);
			switch (Local_132[iVar0 /*20*/].f_14)
			{
				case 0:
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							iVar2 = 250;
							break;
						
						case 1:
							iVar2 = unk_0x0E29C61F26D96FDB(750, 1250);
							break;
						
						case 2:
							iVar2 = unk_0x0E29C61F26D96FDB(1500, 2000);
							break;
						
						case 3:
							iVar2 = unk_0x0E29C61F26D96FDB(2500, 3000);
							break;
						
						default:
							iVar2 = unk_0x0E29C61F26D96FDB(500, 1500);
							break;
					}
					if (func_112(Local_132[iVar0 /*20*/].f_15, iVar2))
					{
						func_113(iVar0);
					}
					break;
				
				case 2:
					func_384(Local_132[iVar0 /*20*/], &(Local_132[iVar0 /*20*/].f_6), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
					break;
				
				case 3:
					if (!func_62(Local_132[iVar0 /*20*/], -2017877118))
					{
						func_113(iVar0);
					}
					break;
				
				case 4:
					if (!func_62(Local_132[iVar0 /*20*/], 1805844857))
					{
						func_98(Local_132[iVar0 /*20*/], 1);
					}
					func_108(&(Local_132[iVar0 /*20*/].f_6));
					break;
			}
		}
		else
		{
			if (Local_132[iVar0 /*20*/].f_14 != 5)
			{
				func_108(&(Local_132[iVar0 /*20*/].f_6));
				Local_132[iVar0 /*20*/].f_14 = 5;
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_468 = iVar1;
}

int func_384(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
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

void func_385(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (func_21(Local_132[iVar0 /*20*/]))
		{
			Local_132[iVar0 /*20*/].f_15 = unk_0x94E3E074F38DF86C();
			Local_132[iVar0 /*20*/].f_14 = 1;
		}
		iVar0++;
	}
}

void func_386()
{
	if (func_21(Local_112.f_9))
	{
		func_366(Local_112.f_9, &iLocal_474, 1126825984, 1);
		func_358(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
		func_346();
		switch (iLocal_100)
		{
			case 0:
				if (!unk_0xA3794949321E107C(Local_112.f_8))
				{
					Local_112.f_8 = func_343(Local_112.f_9, 1, 0, 5);
				}
				func_310(&(Local_112.f_8), "", "", &iLocal_466, &iLocal_467, 1, 0);
				iLocal_100 = 1;
				break;
			
			case 1:
				switch (iLocal_101)
				{
					case 2:
						if (!iLocal_427)
						{
							if (func_60())
							{
								func_3();
							}
							if (func_73(&uLocal_499, cLocal_493, "BBC_T14", 4, 0, 0, 0))
							{
								Local_112.f_17 = unk_0x94E3E074F38DF86C();
								iLocal_427 = 1;
							}
							func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
						}
						else if (!iLocal_438)
						{
							if (!func_312("BBC_T14", 1))
							{
								func_310(&(Local_112.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_466, &iLocal_467, 1, 1);
								iLocal_438 = 1;
							}
						}
						else
						{
							func_342(&(Local_112.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_466, iLocal_467, 1);
							if (func_104(Local_112.f_9, Local_692, 22f) && func_396(Local_112.f_9, Local_692, 10f))
							{
								if (unk_0x4BF0D40F31431B8F(unk_0x17B5CC8A8615737D()) || unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
								{
									if (func_395(&(Local_112.f_19)))
									{
										iLocal_101 = 1;
										iLocal_430 = 0;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 50000);
											Local_112.f_10 = 3;
										}
									}
									else if (!unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()) && unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_112.f_9))
									{
										iLocal_101 = 1;
										iLocal_430 = 0;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 50000);
											Local_112.f_10 = 3;
										}
									}
								}
								else if (func_394(Local_112.f_9, iLocal_474, 0, 1102053376, 1086324736))
								{
									iLocal_101 = 0;
								}
								else if (func_104(Local_112.f_9, Local_692, 5f))
								{
									iLocal_101 = 0;
								}
								else if (func_395(&(Local_112.f_19)))
								{
									if (func_104(Local_112.f_9, Local_692, (22f - 1.5f)))
									{
										iLocal_101 = 1;
										iLocal_430 = 0;
										if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
										{
											Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 50000);
											Local_112.f_10 = 3;
										}
									}
								}
							}
							func_390();
						}
						if (func_351(Local_112.f_9, Local_112.f_19, 22f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_100 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_430)
						{
							if (func_309("BBS_APHEND", 0, 0) || func_309("BBS_APHEND2", 0, 0))
							{
								unk_0xD12BCC85C2F8B1DE();
							}
							if (func_60())
							{
								func_3();
							}
							if (func_73(&uLocal_499, cLocal_492, "BB2_J2", 4, 0, 0, 0))
							{
								Local_112.f_17 = unk_0x94E3E074F38DF86C();
								iLocal_463 = unk_0x94E3E074F38DF86C();
								iLocal_430 = 1;
							}
							func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
						}
						else if (!iLocal_426)
						{
							if (!func_312("BBC_T14", 1) && !func_312("BB2_J2", 1))
							{
								if (func_309("BBS_APHEND", 0, 0) || func_309("BBS_APHEND2", 0, 0))
								{
									unk_0xD12BCC85C2F8B1DE();
								}
								if (func_60())
								{
									func_3();
								}
								if (func_73(&uLocal_499, cLocal_493, "BBC_T1", 4, 0, 0, 0))
								{
									Local_112.f_17 = unk_0x94E3E074F38DF86C();
									iLocal_426 = 1;
								}
								else if (iLocal_101 == 1)
								{
									if (func_112(iLocal_463, 1250))
									{
										Local_112.f_17 = (unk_0x94E3E074F38DF86C() - 3000);
										iLocal_426 = 1;
									}
								}
							}
							else
							{
								iLocal_463 = unk_0x94E3E074F38DF86C();
							}
							func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
						}
						else if (func_112(Local_112.f_17, 500))
						{
							if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
							{
								Local_112.f_18 = unk_0x94E3E074F38DF86C();
								Local_112.f_10 = 3;
							}
							iLocal_100 = 2;
						}
						if (func_351(Local_112.f_9, Local_112.f_19, 22f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_100 = 2;
						}
						break;
					
					case 3:
						func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
						iLocal_100 = 2;
						break;
				}
				break;
			
			case 2:
				if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
				{
					Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 50000);
					Local_112.f_10 = 3;
				}
				Local_112.f_17 = unk_0x94E3E074F38DF86C();
				if (func_309("BBS_APHEND", 0, 0) || func_309("BBS_APHEND2", 0, 0))
				{
					unk_0xD12BCC85C2F8B1DE();
				}
				func_387(0);
				func_342(&(Local_112.f_8), "", "", &iLocal_466, iLocal_467, 0);
				iLocal_466 = unk_0x94E3E074F38DF86C();
				iLocal_467 = unk_0x94E3E074F38DF86C();
				func_123(2);
				break;
			}
	}
}

void func_387(bool bParam0)
{
	if (func_312("BB2_AMB", 0))
	{
		if (bParam0)
		{
			func_388();
		}
		else
		{
			func_3();
		}
	}
}

void func_388()
{
	Global_14611 = 0;
	func_389();
}

void func_389()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_390()
{
	if (!iLocal_431)
	{
		if (!func_60())
		{
			if (func_104(Local_112.f_9, Local_692, (22f + 5f)))
			{
				iLocal_457 = 0;
				if (unk_0x75342B3CD0FB5275())
				{
					iLocal_457 = 1;
				}
				if (unk_0x9C88EB7B70229335(&Local_683))
				{
					if (func_73(&uLocal_499, cLocal_492, "BB2_AMB", 1, iLocal_457, 0, 0))
					{
						iLocal_431 = 1;
					}
				}
				else if (func_392(&uLocal_499, cLocal_492, "BB2_AMB", &Local_683, 1, iLocal_457, 0))
				{
					iLocal_431 = 1;
					StringCopy(&Local_683, "", 24);
				}
			}
		}
	}
	else if (func_312("BB2_AMB", 0))
	{
		if (!func_104(Local_112.f_9, Local_692, (22f + 10f)))
		{
			Local_683 = { func_391() };
			if (!unk_0x9C88EB7B70229335(&Local_683))
			{
				iLocal_431 = 0;
				func_388();
			}
		}
		else if (iLocal_457 == 0)
		{
			if (unk_0x75342B3CD0FB5275())
			{
				Local_683 = { func_391() };
				if (!unk_0x9C88EB7B70229335(&Local_683))
				{
					iLocal_431 = 0;
					func_388();
				}
			}
		}
		else if (!unk_0x75342B3CD0FB5275())
		{
			Local_683 = { func_391() };
			if (!unk_0x9C88EB7B70229335(&Local_683))
			{
				iLocal_431 = 0;
				func_388();
			}
		}
	}
}

struct<6> func_391()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xD8D502167864F70D();
		iVar6 = (iVar6 + Global_16755);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x63A528817609801B(&(Global_14613[iVar7 /*6*/])))
			{
				return Global_14613[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x63A528817609801B(&(Global_14613[iVar8 /*6*/])))
					{
						return Global_14613[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_392(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam5 == 0)
	{
		if (unk_0x75342B3CD0FB5275())
		{
			if (unk_0xBE675F7A607B46B0(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_393(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_393(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_75(sParam2, iParam4, 0);
}

int func_394(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)
{
	if (func_417(iParam0))
	{
		if (!func_347(iParam1, 10))
		{
			if (bParam2)
			{
				if (!func_104(Local_112.f_9, Local_692, fParam3))
				{
					return 0;
				}
				if (!func_396(iParam0, Local_692, fParam4))
				{
					return 0;
				}
			}
			if (unk_0x1DCFA79E268F3EE5(iParam0))
			{
				if (!unk_0xF6563E19EDE84B8C(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_395(var uParam0)
{
	if (!func_347(*uParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_396(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	fVar3 = unk_0xE851F22ED3518011((Var0.f_2 - Param1.f_2));
	if (fVar3 <= fParam4)
	{
		return 1;
	}
	return 0;
}

void func_397()
{
	switch (iLocal_100)
	{
		case 0:
			if (bLocal_442)
			{
				if (func_418(0) && !Global_100747)
				{
					func_22(800, 0);
				}
			}
			if (!Global_100747)
			{
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			func_398(&Local_103, &uLocal_499);
			if (func_21(Local_112.f_9))
			{
				func_366(Local_112.f_9, &iLocal_474, 1126825984, 1);
				func_358(Local_112.f_9, &(Local_112.f_19), 1126825984, 7);
				func_346();
				if (func_104(Local_112.f_9, Local_692, 22f) && func_396(Local_112.f_9, Local_692, 10f))
				{
					if (unk_0x4BF0D40F31431B8F(unk_0x17B5CC8A8615737D()) || unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
					{
						if (func_395(&(Local_112.f_19)))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
						else if (!unk_0xDC7181F6D0A035D1(unk_0x17B5CC8A8615737D()) && unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_112.f_9))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
					}
					else if (func_394(Local_112.f_9, iLocal_474, 0, 1102053376, 1086324736))
					{
						iLocal_101 = 0;
						iLocal_100 = 2;
					}
					else if (func_104(Local_112.f_9, Local_692, 5f))
					{
						iLocal_101 = 0;
						iLocal_100 = 2;
					}
					else if (func_395(&(Local_112.f_19)))
					{
						if (func_104(Local_112.f_9, Local_692, (22f - 1.5f)))
						{
							iLocal_101 = 1;
							iLocal_100 = 2;
						}
					}
				}
				else if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), Local_112.f_9) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), Local_112.f_9))
				{
					iLocal_101 = 2;
					iLocal_100 = 2;
				}
				if (func_351(Local_112.f_9, Local_112.f_19, 22f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_101 = 3;
					iLocal_100 = 2;
				}
			}
			func_390();
			break;
		
		case 2:
			if (iLocal_101 == 3)
			{
				func_387(0);
				func_310(&(Local_112.f_8), "", "", &iLocal_466, &iLocal_467, 1, 0);
				func_123(2);
			}
			else
			{
				if (iLocal_101 == 1)
				{
					iLocal_430 = 0;
					if (Local_112.f_10 != 3 && Local_112.f_10 != 4)
					{
						Local_112.f_18 = (unk_0x94E3E074F38DF86C() - 50000);
						Local_112.f_10 = 3;
					}
				}
				func_123(1);
			}
			break;
	}
}

void func_398(var uParam0, var uParam1)
{
	if (!uParam0->f_7)
	{
		if (func_401(26, func_403(uParam0->f_4), 0))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if ((!func_60() && !unk_0x872115A210435770(unk_0x17B5CC8A8615737D())) && !unk_0x75342B3CD0FB5275())
				{
					func_89(uParam1, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
					if (func_74(uParam1, func_400(uParam0->f_4), func_399(uParam0->f_4), 4, 0, 0, 0))
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

char* func_399(int iParam0)
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

char* func_400(int iParam0)
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

int func_401(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_402(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = Global_36925[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_46225[iVar0 /*203*/].f_9)
	{
		if (Global_46225[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
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
		if ((Global_45863[iVar1 /*120*/].f_86[iVar3] && Global_45863[iVar1 /*120*/].f_18[iVar3] == Global_46225[iVar0 /*203*/].f_1) && Global_45863[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_45863[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return 0;
}

int func_402(int iParam0)
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
		if (Global_46225[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46225[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46225[iVar0 /*203*/].f_1;
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

int func_403(int iParam0)
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

void func_404()
{
	if (bLocal_442)
	{
		if (((iLocal_98 != 9 && iLocal_98 != 4) && iLocal_98 != 5) && iLocal_98 != 8)
		{
			if (unk_0x23E9113C762466ED(Local_112.f_9))
			{
				if (unk_0xA929B2923D14E2F8(Local_112.f_9, 0) || unk_0xCA41A00932714525(Local_112.f_9))
				{
					func_123(8);
				}
			}
		}
	}
}

void func_405()
{
	if (bLocal_442)
	{
		if ((iLocal_98 != 9 && iLocal_98 != 4) && iLocal_98 != 5)
		{
			func_406();
			if (iLocal_102 != 0)
			{
				if (iLocal_102 == 1)
				{
					Global_100411 = 0;
					func_532();
				}
				else
				{
					func_123(9);
				}
			}
		}
	}
}

void func_406()
{
	if (unk_0x23E9113C762466ED(Local_385.f_0))
	{
		if (unk_0xA929B2923D14E2F8(Local_385.f_0, 0) || unk_0xCA41A00932714525(Local_385.f_0))
		{
			iLocal_102 = 3;
			return;
		}
		if (iLocal_102 == 4)
		{
			return;
		}
		if (func_407(0))
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
		if (!unk_0xB7A628320EFF8E47(Local_692, Local_103) <= ((Local_103.f_3 + 25f) * (Local_103.f_3 + 25f)))
		{
			if (unk_0xF6563E19EDE84B8C(Local_112.f_9))
			{
				iLocal_102 = 1;
				return;
			}
		}
	}
	else if (unk_0x23E9113C762466ED(Local_112.f_9))
	{
		if (!unk_0xA929B2923D14E2F8(Local_112.f_9, 0) && !unk_0xCA41A00932714525(Local_112.f_9))
		{
			if ((iLocal_98 == 2 || iLocal_98 == 1) || iLocal_98 == 7)
			{
				if (!func_104(Local_112.f_9, Local_692, 150f))
				{
					if (unk_0xF6563E19EDE84B8C(Local_112.f_9))
					{
						iLocal_102 = 2;
						return;
					}
				}
			}
			else if (iLocal_98 == 3 || iLocal_98 == 6)
			{
				if (!func_104(Local_112.f_9, Local_692, 80f))
				{
					if (unk_0xF6563E19EDE84B8C(Local_112.f_9))
					{
						iLocal_102 = 2;
						return;
					}
				}
			}
		}
	}
}

int func_407(bool bParam0)
{
	if (func_21(Local_385.f_0))
	{
		if ((unk_0x15CAF505CC185675(Local_385.f_0) || unk_0x502D8CF96961DF1A(Local_385.f_0)) || unk_0xC951922EF432DFAE(Local_385.f_0))
		{
			return 1;
		}
		if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_385.f_0))
			{
				return 1;
			}
			if (unk_0x23E9113C762466ED(Local_393.f_0))
			{
				if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_393.f_0))
				{
					return 1;
				}
			}
			if (unk_0x23E9113C762466ED(Local_405.f_0))
			{
				if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_405.f_0))
				{
					return 1;
				}
			}
			if (unk_0x23E9113C762466ED(Local_399.f_0))
			{
				if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), Local_399.f_0))
				{
					return 1;
				}
			}
		}
		if (unk_0x080A2F4FECE019B1(Local_385.f_0, 60))
		{
			return 1;
		}
		if (unk_0x7F4AE93855973529(Local_385.f_0))
		{
			if (unk_0x4E84D2C9B54F79BA(Local_385.f_0, unk_0x17B5CC8A8615737D(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x080A2F4FECE019B1(Local_385.f_0, 50))
		{
			return 1;
		}
		if (func_413(Local_385.f_0, 1126825984))
		{
			return 1;
		}
		if (func_408(Local_385.f_0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x3C04DDC5730997E5(-1, unk_0x57240623C1BC6E88(Local_385.f_0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x080A2F4FECE019B1(Local_385.f_0, 72))
		{
			return 1;
		}
		if (bParam0)
		{
			if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
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

int func_408(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_417(unk_0x17B5CC8A8615737D()) && func_417(iParam0))
	{
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_412(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_409(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xDC93048D895B2146(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0x579A94EB2BF9398F(unk_0x57240623C1BC6E88(iParam0, 1), fVar0, 1))
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
				if (func_412(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_409(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_409(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xD2980844C684075E(unk_0x57240623C1BC6E88(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xD2980844C684075E(unk_0x57240623C1BC6E88(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xD2980844C684075E(unk_0x57240623C1BC6E88(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xD2980844C684075E(unk_0x57240623C1BC6E88(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_410(iParam0, fParam1))
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
			if (func_410(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x3BA3AD8AC9469C63(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_410(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x97200EC3027D534D(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x97200EC3027D534D(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x97200EC3027D534D(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x97200EC3027D534D(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x97200EC3027D534D(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_411(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_411(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_181(Param1 - unk_0x57240623C1BC6E88(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x8C79B6FF2A91C93F(iParam0) };
	}
	else
	{
		Var3 = { func_181(unk_0x425DAA25CBB7EDE2(iParam0, 31086, 0f, 5f, 0f) - unk_0x425DAA25CBB7EDE2(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_364(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_412(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x579A94EB2BF9398F(unk_0x57240623C1BC6E88(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_413(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_417(unk_0x17B5CC8A8615737D()) && func_417(iParam0))
	{
		if (func_415(iParam0) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iParam0))
		{
			if (unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_414(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_414(int iParam0, float fParam1)
{
	return func_359(iParam0, unk_0x17B5CC8A8615737D(), fParam1, 1, 250, 7);
}

int func_415(int iParam0)
{
	if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iParam0) && unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6))
	{
		return 1;
	}
	return 0;
}

void func_416(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
	func_18(iParam0, Param1, fParam4, bParam5, 1);
	if (bParam6)
	{
		if (func_417(iParam0))
		{
			unk_0xDEAF24B058321A05(iParam0, 0, 0);
		}
	}
}

int func_417(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_418(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_419(int iParam0, bool bParam1)
{
	func_429(bParam1, 1);
	if (bParam1)
	{
		func_420();
	}
	iLocal_99 = iParam0;
	bLocal_442 = false;
	if (func_69())
	{
		iLocal_443 = 1;
	}
	else
	{
		iLocal_443 = 0;
	}
	if (!func_69())
	{
		if (iLocal_99 == 0)
		{
			if (func_417(unk_0x17B5CC8A8615737D()))
			{
				func_416(unk_0x17B5CC8A8615737D(), Local_698, fLocal_458, 0, 0);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(0f, 1065353216);
				func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
				iLocal_443 = 1;
			}
		}
	}
	func_1(iLocal_99);
}

void func_420()
{
	func_421(1, 0);
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (!func_69())
		{
			unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
			func_416(unk_0x17B5CC8A8615737D(), Local_698, fLocal_458, 0, 0);
			unk_0xBA7CD73403732191(0f);
			unk_0x503F20CB07C55470(0f, 1065353216);
		}
		unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
	}
	func_19();
	unk_0x111E99E32A85B908(iLocal_664);
	func_474();
	func_123(0);
}

void func_421(bool bParam0, bool bParam1)
{
	unk_0xD12BCC85C2F8B1DE();
	if (unk_0x9E123D5FF2973C60())
	{
		unk_0x2E2945F5602A744F(1);
	}
	if (Global_100411 == 0)
	{
		func_19();
	}
	unk_0x000E46314C3A507F(1f);
	unk_0xFCBD7340FBF1FE46(2, 1);
	unk_0xFCBD7340FBF1FE46(3, 1);
	unk_0xFCBD7340FBF1FE46(4, 1);
	unk_0xFCBD7340FBF1FE46(5, 1);
	unk_0x59D2C41577DCED43(1);
	func_427(0);
	func_15(0, 0);
	unk_0xE418A8E16B02C0AC(1);
	unk_0x2D28D5B324F77D2D(1);
	func_426(0);
	unk_0x82ED97CBD659E983(0);
	func_425(1);
	if (iLocal_98 > 2)
	{
		func_381(0, &uLocal_483);
	}
	unk_0x571422CE42B47889(uLocal_482, 0);
	unk_0xB61819CCF7A3F445();
	func_106(&uLocal_499, 2);
	func_106(&uLocal_499, 3);
	func_106(&uLocal_499, 4);
	func_315(&uLocal_44, 0, 0);
	unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
	unk_0x8ADF92E4B51709E2(1f);
	func_24(1, 1, 1, 1);
	unk_0x011AE968D1EA959B(0);
	func_424(1, 1, 1);
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
	}
	if (func_21(unk_0x17B5CC8A8615737D()))
	{
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 1);
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 250, 1);
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	func_107();
	func_90(bParam0);
	func_422(bParam1);
	unk_0x07481837BFD9C1CD(&cLocal_671);
}

void func_422(bool bParam0)
{
	if (bParam0)
	{
		unk_0x6DB5F7460B043A80(0, 1);
	}
	unk_0xF9FFB9857F3120F8("oddjobs@bailbond_surf_farm");
	unk_0xF9FFB9857F3120F8(func_101());
	func_423();
}

void func_423()
{
	unk_0xA617A761C0955C65(func_354());
	unk_0xA617A761C0955C65(func_355());
}

void func_424(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x80A7A5165A9C7607())
	{
		while (bVar0)
		{
			bVar0 = unk_0x80A7A5165A9C7607();
			if (unk_0x1B76B77EDF24A933())
			{
				unk_0x404A255180289CD1(0);
			}
			if (unk_0x77888DFE5B94E7E5())
			{
				unk_0xB5BD48559882D958();
			}
			if (unk_0x80A7A5165A9C7607() && !unk_0x1B76B77EDF24A933())
			{
				bVar0 = false;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (bParam0)
		{
			func_24(iParam1, iParam2, 1, 1);
		}
	}
}

void func_425(int iParam0)
{
	Global_89130 = iParam0;
}

void func_426(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDE574EA7A7A2CAF8(2, joaat("player"), 296331235);
		unk_0xDE574EA7A7A2CAF8(2, joaat("player"), 1166638144);
		unk_0xDE574EA7A7A2CAF8(2, joaat("player"), 2037579709);
		unk_0xDE574EA7A7A2CAF8(2, joaat("player"), 2017343592);
		unk_0xDE574EA7A7A2CAF8(2, joaat("player"), -1821475077);
		unk_0xDE574EA7A7A2CAF8(2, joaat("player"), 1782292358);
		unk_0x60DB1BD4EAA89D0D(unk_0xBE369BE1BC57A796(), 0);
	}
	else
	{
		unk_0xDE574EA7A7A2CAF8(255, joaat("player"), 296331235);
		unk_0xDE574EA7A7A2CAF8(255, joaat("player"), 1166638144);
		unk_0xDE574EA7A7A2CAF8(255, joaat("player"), 2037579709);
		unk_0xDE574EA7A7A2CAF8(255, joaat("player"), 2017343592);
		unk_0xDE574EA7A7A2CAF8(255, joaat("player"), -1821475077);
		unk_0xDE574EA7A7A2CAF8(255, joaat("player"), 1782292358);
		unk_0x60DB1BD4EAA89D0D(unk_0xBE369BE1BC57A796(), 1);
	}
}

void func_427(bool bParam0)
{
	if (bParam0)
	{
		func_428();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_16(0))
		{
			func_13(0);
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

void func_428()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_429(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_424(0, 1, 1);
	}
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(0);
	}
	func_188(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_430(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_473())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 2);
		unk_0xD278B72A700DC2DC(1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), false, 0);
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
		func_68(1);
	}
}

void func_431(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_473() || !func_471())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_468(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_466();
		while (!func_465())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		*iParam0 = func_453(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_166(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_96040.f_2311 };
			fParam4 = Global_96040.f_2311.f_6;
		}
		unk_0x1B60289D0F2A2E3C(Param1, 5f, 1, 0, 0, 0);
		func_449(Param1, 5f, 0);
		if (func_82(iParam12))
		{
			func_448(iParam12, 0);
			while (!func_432(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xE1324F59713746FA(iParam10);
			while (!unk_0x9F746898F7881612(iParam10))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			*iParam0 = unk_0x692A2891A2BA7352(iParam10, Param1, fParam4, 1, 1);
			if (unk_0x23E9113C762466ED(*iParam0) && !unk_0xA929B2923D14E2F8(*iParam0, 0))
			{
				if (iParam11 == 0)
				{
					unk_0xEF9B9F466C3E73F6(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					unk_0x357EE036FE09513D(*iParam0, iParam11, iParam11);
				}
			}
			unk_0x924CDE68BA2ED3BA(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((unk_0x23E9113C762466ED(*iParam0) && !unk_0xA929B2923D14E2F8(*iParam0, 0)) && unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D())) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), *iParam0, -1);
			unk_0x482AE8C0EAF5AE07(*iParam0, 1084227584);
		}
	}
}

int func_432(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_82(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_158(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x23E9113C762466ED(*iParam0))
		{
			if (unk_0x0324EEB10F81965F(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_101700.f_2095.f_539.f_3544) && Global_101700.f_8044.f_99.f_58[131])
		{
			Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xE1324F59713746FA(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x9F746898F7881612(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x692A2891A2BA7352(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0x482AE8C0EAF5AE07(*iParam0, 1084227584);
				unk_0xB7A086F89FD711C4(*iParam0, 0);
				unk_0x0F2AE8B51289309C(*iParam0, 0);
				unk_0x2B9B4DCEF80D1566(*iParam0, 1);
				unk_0x4B04B4FAE554FA03(*iParam0, 1250);
				unk_0xEC0212C05F98C1DF(*iParam0, 1250f);
				unk_0x27202347A1928002(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x357EE036FE09513D(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB9A1BA07F229F6AC(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xC2BFC2AEE65D5595(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0x70888C5F297D3D80(*iParam0, iVar103 + 1, !Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x821778A7A73E847F(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_447(&uVar1, &uVar0))
				{
					unk_0xBFA6D869BA395202(*iParam0, &uVar1);
					unk_0xE0B7A718D08DF2B6(*iParam0, uVar0);
				}
				else
				{
					unk_0xBFA6D869BA395202(*iParam0, &(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x65787AE258BCF6F8())
					{
						unk_0xE0B7A718D08DF2B6(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xF487CED93F263DA0(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5DED87DD8464517B(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xA3C6B7F3E39994ED(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x4EC6390E64BE867C(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x0C93CB3C1E004C79(*iParam0, 2, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x0C93CB3C1E004C79(*iParam0, 3, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x0C93CB3C1E004C79(*iParam0, 0, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x0C93CB3C1E004C79(*iParam0, 1, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xD374022FAFC7605F(*iParam0) > 1 && Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x866129976ECB1FB9(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(*iParam0)))
					{
						if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(*iParam0)))
						{
							if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE8356B7E1B731437(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE8356B7E1B731437(*iParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_443(iParam0, &(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x74E356CF63E0D10F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x0324EEB10F81965F(*iParam0) == joaat("bodhi2"))
					{
						func_441(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x924CDE68BA2ED3BA(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_440(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xE1324F59713746FA(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x9F746898F7881612(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x692A2891A2BA7352(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0x482AE8C0EAF5AE07(*iParam0, 1084227584);
				unk_0xB7A086F89FD711C4(*iParam0, 0);
				unk_0x0F2AE8B51289309C(*iParam0, 0);
				unk_0x2B9B4DCEF80D1566(*iParam0, 1);
				unk_0x4B04B4FAE554FA03(*iParam0, 1250);
				unk_0xEC0212C05F98C1DF(*iParam0, 1250f);
				unk_0x27202347A1928002(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x357EE036FE09513D(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xB9A1BA07F229F6AC(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xC2BFC2AEE65D5595(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0x70888C5F297D3D80(*iParam0, iVar104 + 1, !Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x821778A7A73E847F(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_447(&uVar1, &uVar0))
				{
					unk_0xBFA6D869BA395202(*iParam0, &uVar1);
					unk_0xE0B7A718D08DF2B6(*iParam0, uVar0);
				}
				else
				{
					unk_0xBFA6D869BA395202(*iParam0, &(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x65787AE258BCF6F8())
					{
						unk_0xE0B7A718D08DF2B6(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xF487CED93F263DA0(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x5DED87DD8464517B(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xA3C6B7F3E39994ED(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x4EC6390E64BE867C(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x0C93CB3C1E004C79(*iParam0, 2, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x0C93CB3C1E004C79(*iParam0, 3, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x0C93CB3C1E004C79(*iParam0, 0, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x0C93CB3C1E004C79(*iParam0, 1, unk_0x48B8265059381CD0(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xD374022FAFC7605F(*iParam0) > 1 && Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x866129976ECB1FB9(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(*iParam0)))
					{
						if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(*iParam0)))
						{
							if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE8356B7E1B731437(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE8356B7E1B731437(*iParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_443(iParam0, &(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x74E356CF63E0D10F(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x0324EEB10F81965F(*iParam0) == joaat("bodhi2"))
					{
						func_441(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x924CDE68BA2ED3BA(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_440(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xE1324F59713746FA(Var5.f_0);
			if (unk_0x9F746898F7881612(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x692A2891A2BA7352(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x482AE8C0EAF5AE07(*iParam0, 1084227584);
				unk_0xB7A086F89FD711C4(*iParam0, 0);
				unk_0x0F2AE8B51289309C(*iParam0, 0);
				unk_0x2B9B4DCEF80D1566(*iParam0, 1);
				StringCopy(&cVar106, unk_0xE184AC3A4DAF353D(*iParam0), 16);
				unk_0x4B04B4FAE554FA03(*iParam0, 1250);
				unk_0xEC0212C05F98C1DF(*iParam0, 1250f);
				unk_0x27202347A1928002(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x357EE036FE09513D(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xB9A1BA07F229F6AC(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xC2BFC2AEE65D5595(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0x70888C5F297D3D80(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x821778A7A73E847F(*iParam0, Var5.f_24);
				}
				if (func_447(&uVar1, &uVar0))
				{
					unk_0xBFA6D869BA395202(*iParam0, &uVar1);
					unk_0xE0B7A718D08DF2B6(*iParam0, uVar0);
				}
				else
				{
					unk_0xBFA6D869BA395202(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x65787AE258BCF6F8())
					{
						unk_0xE0B7A718D08DF2B6(*iParam0, Var5.f_26);
					}
				}
				unk_0xF487CED93F263DA0(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x5DED87DD8464517B(*iParam0, Var5.f_88);
				unk_0xA3C6B7F3E39994ED(*iParam0, Var5.f_87);
				unk_0x4EC6390E64BE867C(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x0C93CB3C1E004C79(*iParam0, 2, unk_0x48B8265059381CD0(Var5.f_92, 28));
				unk_0x0C93CB3C1E004C79(*iParam0, 3, unk_0x48B8265059381CD0(Var5.f_92, 29));
				unk_0x0C93CB3C1E004C79(*iParam0, 0, unk_0x48B8265059381CD0(Var5.f_92, 30));
				unk_0x0C93CB3C1E004C79(*iParam0, 1, unk_0x48B8265059381CD0(Var5.f_92, 31));
				if (unk_0xD374022FAFC7605F(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0x866129976ECB1FB9(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(*iParam0)))
					{
						if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xE8356B7E1B731437(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xE8356B7E1B731437(*iParam0, Var5.f_90);
						}
					}
				}
				func_443(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x74E356CF63E0D10F(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x0324EEB10F81965F(*iParam0) == joaat("bagger") && !Global_101700.f_8044.f_99.f_58[118])
					{
						unk_0xBFA6D869BA395202(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x0324EEB10F81965F(*iParam0) == joaat("bodhi2"))
					{
						func_441(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101700.f_2095.f_539.f_3544) && Global_101700.f_8044.f_99.f_58[131]) && unk_0x0324EEB10F81965F(*iParam0) == joaat("tailgater"))
				{
					unk_0xE8BE9EFA248A9414(*iParam0, 6, 1, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 14, 7, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 11, 2, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 2, 3, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 7, 5, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 0, 0, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 3, 3, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 13, 1, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 4, 3, false);
					unk_0xE8BE9EFA248A9414(*iParam0, 12, 2, false);
					unk_0xA6EBC11A2C89D4A1(*iParam0, 22, true);
					unk_0xE8356B7E1B731437(*iParam0, 2);
					unk_0xE8BE9EFA248A9414(*iParam0, 23, 11, false);
					unk_0xA3C6B7F3E39994ED(*iParam0, 2);
					Global_101700.f_2095.f_539.f_3544 = 1;
					func_433(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x924CDE68BA2ED3BA(Var5.f_0);
				}
				if (bVar105)
				{
					func_440(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_433(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_82(iParam0) && unk_0x23E9113C762466ED(*iParam1)) && unk_0x45CD66F0A131E554(*iParam1, 0))
	{
		if (iParam2 > Global_101700.f_2095.f_539.f_1635)
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
			func_127(*iParam1, iParam0);
		}
		if (unk_0xFA4A2220118417AE(*iParam1) != 0)
		{
			unk_0x5991FAEA924B5EE0(*iParam1, 0);
		}
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0x0324EEB10F81965F(*iParam1);
		if (unk_0x1FB3B232C7EAF710(*iParam1, &iVar1))
		{
			Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x0324EEB10F81965F(iVar1);
		}
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xC89933A0F05DA78A(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xB5DF060B138CD2EA(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xA13396827DE7EB7C(*iParam1, 1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xA13396827DE7EB7C(*iParam1, 2);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xA13396827DE7EB7C(*iParam1, 3);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xA13396827DE7EB7C(*iParam1, 4);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xA13396827DE7EB7C(*iParam1, 5);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xA13396827DE7EB7C(*iParam1, 6);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xA13396827DE7EB7C(*iParam1, 7);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xA13396827DE7EB7C(*iParam1, 8);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xA13396827DE7EB7C(*iParam1, 9);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xA13396827DE7EB7C(*iParam1, 10);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xA13396827DE7EB7C(*iParam1, 11);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xA13396827DE7EB7C(*iParam1, 12);
		if (unk_0x4555FC519F5B33E3(*iParam1, 0))
		{
			iVar2 = unk_0x575D47C669B84572(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x04F0F99162081258();
		StringCopy(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xE184AC3A4DAF353D(*iParam1), 16);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x420AD4B7A2DA4F74(*iParam1);
		unk_0x3C5D9FD265196560(*iParam1, &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x5CE46A3E89B49FAE(*iParam1, &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xEFB6EA0CF01B73B1(*iParam1, &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x3AAC868F49EC1E0A(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xB3A30C9CBD0AF035(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x7C73B96D4046CE64(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x5AADFFFE972FF9B9(*iParam1);
		unk_0x86916C0F8ACCF8A7(*iParam1, &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xA2BD8E71E4EDAA75(*iParam1, 2))
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(*iParam1, 3))
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(*iParam1, 0))
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(*iParam1, 1))
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101700.f_2095.f_539.f_3545[iParam0] = 10;
		if ((unk_0x868D450960EE0901(*iParam1) >= 0 && unk_0x868D450960EE0901(*iParam1) < 255) && func_437(*iParam1, 0, &uVar0))
		{
			func_169(iParam1, &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_101700.f_19077[iParam0 /*43*/].f_40 = 1;
				Global_101700.f_19077[iParam0 /*43*/] = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101700.f_19077[iParam0 /*43*/].f_3 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101700.f_19077[iParam0 /*43*/].f_4 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101700.f_19077[iParam0 /*43*/].f_5 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101700.f_19077[iParam0 /*43*/].f_6 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101700.f_19077[iParam0 /*43*/].f_10 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101700.f_19077[iParam0 /*43*/].f_16 = !Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101700.f_19077[iParam0 /*43*/].f_19 = { Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_101700.f_19077[iParam0 /*43*/].f_23 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101700.f_19077[iParam0 /*43*/].f_7 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101700.f_19077[iParam0 /*43*/].f_8 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101700.f_19077[iParam0 /*43*/].f_9 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101700.f_19077[iParam0 /*43*/].f_11 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101700.f_19077[iParam0 /*43*/].f_12 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101700.f_19077[iParam0 /*43*/].f_13 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101700.f_19077[iParam0 /*43*/].f_14 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101700.f_19077[iParam0 /*43*/].f_15 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101700.f_19077[iParam0 /*43*/].f_18 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101700.f_19077[iParam0 /*43*/].f_17 = Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101700.f_19077[iParam0 /*43*/].f_24 = unk_0xF218D5E7A1FA1079(*iParam1, 11) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_25 = unk_0xF218D5E7A1FA1079(*iParam1, 12) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_26 = unk_0xF218D5E7A1FA1079(*iParam1, 4) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_27 = unk_0xF218D5E7A1FA1079(*iParam1, 23) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_28 = unk_0xF218D5E7A1FA1079(*iParam1, 14) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_29 = unk_0xF218D5E7A1FA1079(*iParam1, 16) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_30 = unk_0xF218D5E7A1FA1079(*iParam1, 15) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_32 = unk_0x4EBF6609CFA4454A(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[0] = unk_0x67CC15893A6C9DFC(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[1] = unk_0x3808C96E29A151A9(*iParam1, 14, 0);
				Global_101700.f_19077[iParam0 /*43*/].f_33[2] = unk_0x3808C96E29A151A9(*iParam1, 14, 1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[3] = unk_0x3808C96E29A151A9(*iParam1, 14, 2);
				Global_101700.f_19077[iParam0 /*43*/].f_33[4] = unk_0x3808C96E29A151A9(*iParam1, 14, 3);
				Global_101700.f_19077[iParam0 /*43*/].f_39 = unk_0x8811FF219A0B1C20(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_31 = func_436(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[0] = unk_0x40785CB62CE2D8DF(*iParam1);
				unk_0x79E4DD2A35D7ED5E(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_434(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101700.f_19077[iParam0 /*43*/].f_1));
				unk_0x9FE3CA9817DE8656(*iParam1, &iVar4, &uVar5);
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
				func_434(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101700.f_19077[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_434(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_435(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

bool func_435(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

float func_436(int iParam0)
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
	if (((unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x868D450960EE0901(iParam0) >= 0) && unk_0x868D450960EE0901(iParam0) < 255)
	{
		if (unk_0x8811FF219A0B1C20(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x8811FF219A0B1C20(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x8811FF219A0B1C20(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x8811FF219A0B1C20(iParam0) == 0)
		{
			if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iParam0)))
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

int func_437(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(unk_0x0324EEB10F81965F(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	if (!func_438(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x3C6792805E3BEB1B(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x63C468D583002D23())
	{
		if ((func_140(iParam0) && unk_0x0324EEB10F81965F(iParam0) != joaat("sentinel2")) && unk_0x0324EEB10F81965F(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_438(int iParam0, bool bParam1, var uParam2)
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
	if ((((((!unk_0xC2AFD5CFEDC8F22A(iParam0) && !unk_0xD28959FE5BC2D14D(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera"))
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
	if (unk_0x63C468D583002D23())
	{
		if (func_439(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x63C468D583002D23())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_439(int iParam0)
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

void func_440(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			Global_89155[iVar0] = uParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = unk_0x0324EEB10F81965F(uParam0);
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

void func_441(var uParam0)
{
	if (!func_442(*uParam0))
	{
		unk_0x70888C5F297D3D80(*uParam0, 5, !Global_101700.f_8044.f_99.f_58[119]);
	}
}

bool func_442(int iParam0)
{
	return unk_0xA13396827DE7EB7C(iParam0, 5);
}

int func_443(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x5991FAEA924B5EE0(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xA6EBC11A2C89D4A1(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68BE46B0EA4FCFAF(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x8762285499CFD42B(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xE8BE9EFA248A9414(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xE8BE9EFA248A9414(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xE8BE9EFA248A9414(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_446(unk_0x0324EEB10F81965F(*uParam0), 1) && unk_0x68BE46B0EA4FCFAF(*uParam0, 24) != func_445(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xE8BE9EFA248A9414(*uParam0, 24, func_445(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_444(*uParam0))
	{
		unk_0xF8EDF3B7E8D2CD26(*uParam0, 1);
		unk_0x2B9B4DCEF80D1566(*uParam0, 1);
	}
	return 1;
}

int func_444(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x23E9113C762466ED(uParam0) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0xFA4A2220118417AE(iParam0) > 0)
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

int func_445(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x23E9113C762466ED(uParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
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

int func_446(int iParam0, int iParam1)
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

int func_447(var uParam0, var uParam1)
{
	if (unk_0x63C468D583002D23())
	{
	}
	else if (Global_101700.f_19077.f_261)
	{
		*uParam0 = { Global_101700.f_19077.f_267 };
		*uParam1 = Global_101700.f_19077.f_271;
		return 1;
	}
	return 0;
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x0324EEB10F81965F(Global_89155[iVar0]) == func_157(iParam0, iParam1))
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

void func_449(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_156(&(Global_68531.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x3DC4639D5F23DEA2(Param0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_450(iVar0);
			}
		}
		iVar0++;
	}
}

void func_450(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_68531.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_162(iParam0, 0)) && Global_69440.f_66 == 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3) && (!func_451(0, Global_68531.f_555[0 /*21*/].f_12) || !func_451(1, Global_68531.f_555[0 /*21*/].f_12)))
			{
				func_163(&(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]), &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_160(iParam0, 0);
		}
	}
}

int func_451(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_452(&(Global_101700.f_31389.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_130(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_452(var uParam0)
{
	return *uParam0;
}

int func_453(struct<3> Param0, float fParam3)
{
	return func_454(&(Global_96040.f_2311), Param0, fParam3, 0);
}

int func_454(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_464(uParam0))
	{
		if (func_166(Param1, 0f, 0f, 0f, 0))
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
		if (func_463(uParam0))
		{
			unk_0x1B60289D0F2A2E3C(Param1, 5f, 1, 0, 0, 0);
			func_449(Param1, 5f, 0);
			iVar0 = unk_0x692A2891A2BA7352(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x23E9113C762466ED(iVar0))
			{
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x394AE1BE8F25AC5B(iVar0, Param1, 0, 0, 1);
				}
				func_459(iVar0, &(uParam0->f_12), 0, 1);
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
							func_448(uParam0->f_11, 1);
						}
						else if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_448(uParam0->f_11, 2);
						}
					}
					unk_0xB7A086F89FD711C4(iVar0, 0);
					unk_0x0F2AE8B51289309C(iVar0, 0);
					unk_0x2B9B4DCEF80D1566(iVar0, 1);
					func_440(iVar0, uParam0->f_11);
				}
				else if ((!func_456(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x6A7B0D91FD88D9EE(unk_0x6AF6B39BFDB53CB5(), "startup_positioning"))
				{
					iVar8 = func_455(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_450(iVar8);
					}
				}
				if (((Global_91491 != 13 && Global_91491 != 10) && Global_91491 != 11) && Global_91491 != 12)
				{
					if (unk_0x765F5B806B517045(&(Global_91491.f_3)) == Global_69519)
					{
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66)
						{
							func_160(24, 0);
							func_450(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_127(iVar0, uParam0->f_11);
				}
				unk_0x924CDE68BA2ED3BA(uParam0->f_12.f_66);
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_455(int iParam0)
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
			unk_0x3C5D9FD265196560(uParam0, &iVar1, &iVar2);
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

int func_456(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x0324EEB10F81965F(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_458(iParam0, Global_68531.f_139[38], 0))
			{
				func_450(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_458(iParam0, Global_68531.f_139[43], 1))
			{
				func_450(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_458(iParam0, uVar1[iVar6], 1) && func_457(unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_166(Param1, 0f, 0f, 0f, 0)) || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 1) < 10f)
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
					func_450(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[20]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[20], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[20]) == joaat("swift2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[20]))
				{
					func_450(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_457(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_458(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x23E9113C762466ED(uParam1) && !unk_0xA929B2923D14E2F8(iParam1, 0)) && unk_0x45CD66F0A131E554(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x3C5D9FD265196560(uParam0, &iVar0, &iVar1);
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

void func_459(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(uParam0, 0))
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
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_168(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_168(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_168(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_168(iVar1 + 1));
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
		if (((unk_0x48B8265059381CD0(uParam1->f_77, 15) || func_462(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_461())
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
						func_460(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_460(iParam0, uParam1->f_69);
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
			func_443(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xC5082382D5482C0C(uParam1->f_66) && !unk_0xA55B002FED5A9858(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, func_168(iVar2 + 1)))
				{
					if (!unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
					{
						unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
				{
					unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x0324EEB10F81965F(iParam0) == joaat("sheava") || unk_0x0324EEB10F81965F(iParam0) == joaat("omnis")) || unk_0x0324EEB10F81965F(iParam0) == joaat("le7b"))
		{
			if (unk_0x68BE46B0EA4FCFAF(iParam0, 0) == -1)
			{
				unk_0x70888C5F297D3D80(iParam0, 1, false);
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

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFA4A2220118417AE(uParam0) > 0)
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

bool func_461()
{
	return unk_0x6948821CC8D52AC2(joaat("mpindependence"));
}

int func_462(int iParam0)
{
	var uVar0;
	
	if (unk_0x23E9113C762466ED(uParam0))
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

int func_463(var uParam0)
{
	if (func_464(uParam0))
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

int func_464(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_130(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_457(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_465()
{
	return func_463(&(Global_96040.f_2311));
}

void func_466()
{
	func_467(&(Global_96040.f_2311));
}

void func_467(var uParam0)
{
	if (func_464(uParam0))
	{
		unk_0xE1324F59713746FA(uParam0->f_12.f_66);
	}
}

int func_468(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA55B002FED5A9858(Global_96040.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0xC5082382D5482C0C(Global_96040.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam2 == 0 && func_470(Global_96040.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam3 == 0 && unk_0x8432EA469FDB418D(Global_96040.f_2311.f_12.f_66))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_469())
		{
			return 0;
		}
	}
	return 1;
}

int func_469()
{
	float fVar0;
	
	if (!func_471())
	{
		return 0;
	}
	if ((unk_0xA55B002FED5A9858(Global_96040.f_2311.f_12.f_66) || unk_0x8432EA469FDB418D(Global_96040.f_2311.f_12.f_66)) || unk_0x3B548F49528B5FA7(Global_96040.f_2311.f_12.f_66))
	{
		return 0;
	}
	fVar0 = unk_0x0F6789FB42DEAFB6(Global_96040.f_2311.f_12.f_66);
	if (fVar0 < 37f)
	{
		return 0;
	}
	return 1;
}

int func_470(int iParam0)
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

bool func_471()
{
	return func_464(&(Global_96040.f_2311));
}

int func_472()
{
	if (!Global_91491 == 10 && !Global_91491 == 9)
	{
		return 0;
	}
	return Global_91491.f_2;
}

int func_473()
{
	if (Global_91491 == 10 || Global_91491 == 9)
	{
		return 1;
	}
	return 0;
}

void func_474()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_482();
	while (!func_56(0) || !func_56(1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 250, 0);
	}
	unk_0x1EF7A8224AE81790("ENEMIES", &iLocal_664);
	unk_0xDE574EA7A7A2CAF8(5, joaat("player"), iLocal_664);
	unk_0xDE574EA7A7A2CAF8(5, iLocal_664, joaat("player"));
	Var0 = { func_481(Local_103) };
	Var3 = { func_480(Local_103) };
	unk_0xB57996B091C5D677(Var0, Var3);
	uLocal_482 = unk_0xD1D19967E553E144(Var0, Var3, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(Local_103, 15f, 0, 0, 0, 0);
	unk_0xFCBD7340FBF1FE46(2, 0);
	unk_0xFCBD7340FBF1FE46(3, 0);
	unk_0xFCBD7340FBF1FE46(4, 0);
	unk_0xFCBD7340FBF1FE46(5, 0);
	unk_0x59D2C41577DCED43(0);
	unk_0x000E46314C3A507F(0.1f);
	func_426(1);
	while (!func_477())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_475();
	if (func_21(unk_0x17B5CC8A8615737D()))
	{
		func_89(&uLocal_499, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
		unk_0x8E601051A3FDE8ED(unk_0x17B5CC8A8615737D(), 1);
	}
	if (func_21(Local_112.f_9))
	{
		func_89(&uLocal_499, 3, Local_112.f_9, sLocal_485, 0, 1);
		unk_0x8E601051A3FDE8ED(Local_112.f_9, 1);
	}
}

void func_475()
{
	int iVar0;
	
	if (func_21(Local_112.f_9))
	{
		unk_0x22217EB6A9BAC6EE(Local_112.f_9, 1);
		unk_0xAC81755AD10CE43D(Local_112.f_9, 1);
		unk_0x06B74CD245641716(Local_112.f_9, 100);
		unk_0x4B04B4FAE554FA03(Local_112.f_9, 200);
		unk_0x2732F3B9AFC5F703(Local_112.f_9, 1);
		unk_0x6FE87B0CB5BE8FB1(Local_112.f_9, 1);
		unk_0x2BFFCC859E7DDFFF(Local_112.f_9, 1);
		unk_0x2F944797D47913A7(Local_112.f_9, 1);
		unk_0xA09E96F8EA5F37C4(Local_112.f_9, 2f);
		unk_0x86534A8EC2C9DA71(Local_112.f_9, 2f);
		unk_0xAC81755AD10CE43D(Local_112.f_9, 1);
		unk_0xD58AE07026EDCFAE(Local_112.f_9, 0);
		unk_0x6018E338F7ABCE75(Local_112.f_9, 118, 1);
		unk_0x6018E338F7ABCE75(Local_112.f_9, 137, 1);
		unk_0x6018E338F7ABCE75(Local_112.f_9, 281, 1);
		if (Local_112.f_12 != 0)
		{
			unk_0xC1B7B5C6FDC0755B(Local_112.f_9, Local_112.f_12, -1, 1, 1);
		}
		func_344(Local_112.f_9);
		func_476(Local_112.f_9, "TARGET_", 0);
		Local_112.f_10 = 0;
		unk_0x2F933BB106547968(Local_112.f_9, 0, 0, 0, 0);
		unk_0x2F933BB106547968(Local_112.f_9, 2, 0, 1, 0);
		unk_0x2F933BB106547968(Local_112.f_9, 3, 1, 0, 0);
		unk_0x2F933BB106547968(Local_112.f_9, 4, 0, 2, 0);
		unk_0x2F933BB106547968(Local_112.f_9, 8, 0, 0, 0);
		unk_0x86DD54980FE55567(&uLocal_484);
		unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x85111902FC00A5CF(uLocal_484, 1);
		unk_0x007AE2AA9E15FA7B(uLocal_484);
		unk_0x00E85C3B3BD34B10(Local_112.f_9, uLocal_484);
		unk_0x08377FB2AE4C6899(&uLocal_484);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_21(Local_132[iVar0 /*20*/]))
		{
			func_344(Local_132[iVar0 /*20*/]);
			if (Local_132[iVar0 /*20*/].f_5 != 0)
			{
				unk_0xC1B7B5C6FDC0755B(Local_132[iVar0 /*20*/], Local_132[iVar0 /*20*/].f_5, -1, 1, 1);
			}
			unk_0x6018E338F7ABCE75(Local_132[iVar0 /*20*/], 137, 1);
			func_476(Local_132[iVar0 /*20*/], "BACKUP_", iVar0);
			if (func_94(Local_254[0 /*6*/]))
			{
				if (iVar0 == 1)
				{
					unk_0xFCB4AA590A0D6A59(Local_132[iVar0 /*20*/], Local_254[0 /*6*/], -1);
					unk_0xC96275575DC981A9(Local_132[iVar0 /*20*/], 1, 0);
				}
				else if (iVar0 == 2)
				{
					unk_0xFCB4AA590A0D6A59(Local_132[iVar0 /*20*/], Local_254[0 /*6*/], 2);
				}
				else if (iVar0 == 3)
				{
					unk_0xFCB4AA590A0D6A59(Local_132[iVar0 /*20*/], Local_254[0 /*6*/], 1);
				}
			}
			switch (iVar0)
			{
				case 0:
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 0, 0, 2, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 2, 1, 0, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 3, 0, 1, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 4, 0, 0, 0);
					break;
				
				case 1:
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 0, 0, 3, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 2, 0, 0, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 3, 2, 0, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 4, 0, 1, 0);
					break;
				
				case 2:
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 0, 1, 1, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 2, 0, 1, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 3, 0, 2, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 4, 0, 2, 0);
					break;
				
				case 3:
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 0, 0, 0, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 2, 0, 2, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 3, 1, 2, 0);
					unk_0x2F933BB106547968(Local_132[iVar0 /*20*/], 4, 0, 2, 0);
					break;
			}
			if (iVar0 == 0)
			{
				unk_0x86DD54980FE55567(&uLocal_484);
				unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x85111902FC00A5CF(uLocal_484, 1);
				unk_0x007AE2AA9E15FA7B(uLocal_484);
				unk_0x00E85C3B3BD34B10(Local_132[iVar0 /*20*/], uLocal_484);
				unk_0x08377FB2AE4C6899(&uLocal_484);
				if (func_21(Local_132[iVar0 /*20*/]))
				{
					func_89(&uLocal_499, 4, Local_132[iVar0 /*20*/], "HILLBILLY", 0, 1);
					unk_0x8E601051A3FDE8ED(Local_132[iVar0 /*20*/], 1);
				}
			}
		}
		iVar0++;
	}
}

void func_476(var uParam0, char* sParam1, int iParam2)
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam1, 16);
	StringIntConCat(&cVar0, iParam2, 16);
	unk_0x3BEB2E27EBD72589(uParam0, &cVar0);
}

int func_477()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_52(&(Local_112.f_9), Local_112.f_11, Local_112.f_13, Local_112.f_16, 1, 0, 0))
	{
		if (func_21(Local_112.f_9))
		{
			unk_0xCC61640A821F277C(Local_112.f_9, 1);
			iVar0++;
		}
	}
	if (iLocal_473 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_473 - 1))
		{
			if (func_52(&(Local_132[iVar2 /*20*/]), Local_132[iVar2 /*20*/].f_19, Local_132[iVar2 /*20*/].f_1, Local_132[iVar2 /*20*/].f_4, 0, 0, 0))
			{
				if (func_21(Local_132[iVar2 /*20*/]))
				{
					unk_0x6018E338F7ABCE75(Local_132[iVar2 /*20*/], 132, 1);
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_473)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_473 - 1))
		{
			unk_0x924CDE68BA2ED3BA(Local_132[iVar2 /*20*/].f_19);
			iVar2++;
		}
	}
	if (iLocal_470 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_470 - 1))
		{
			if (func_479(&(Local_254[iVar2 /*6*/]), Local_254[iVar2 /*6*/].f_5, Local_254[iVar2 /*6*/].f_1, Local_254[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_471 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_471 - 1))
		{
			if (func_55(&(Local_291[iVar2 /*6*/]), Local_291[iVar2 /*6*/].f_5, Local_291[iVar2 /*6*/].f_1, Local_291[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_469 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_469 - 1))
		{
			if (func_55(&(Local_340[iVar2 /*9*/]), Local_340[iVar2 /*9*/].f_8, Local_340[iVar2 /*9*/].f_1, Local_340[iVar2 /*9*/].f_7, 1))
			{
				unk_0x98F0FA127445E343(Local_340[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_472 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_472 - 1))
		{
			if (func_478(&(Local_377[iVar2 /*7*/]), Local_377[iVar2 /*7*/].f_5, Local_377[iVar2 /*7*/].f_2, Local_377[iVar2 /*7*/].f_6, Local_377[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_473 + iLocal_470) + iLocal_471) + iLocal_469) + iLocal_472) + 1)
	{
		return 1;
	}
	return 0;
}

int func_478(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, bool bParam7)
{
	if (!unk_0xAF6D1E258B973F1D(*uParam0))
	{
		if (func_54(iParam6))
		{
			*uParam0 = unk_0xA26C2D9EE51CAC7D(uParam1, Param2, uParam5, -1, 1, iParam6);
			if (unk_0xAF6D1E258B973F1D(*uParam0))
			{
				if (unk_0x160653C8E405076A(*uParam0))
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
	else if (unk_0x160653C8E405076A(*uParam0))
	{
		if (bParam7)
		{
			func_53(iParam6, 0);
		}
		return 1;
	}
	return 0;
}

int func_479(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x23E9113C762466ED(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0x692A2891A2BA7352(iParam1, Param2, uParam5, 1, 1);
			if (unk_0x23E9113C762466ED(*uParam0))
			{
				if (!unk_0xC26429B504BA534D(*uParam0))
				{
					unk_0xF0F77C99098F999B(*uParam0, 1, 0);
				}
				if (func_94(*uParam0))
				{
					unk_0x5DC8C2F2F8A363C2(*uParam0, Param2, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(*uParam0, fParam5);
				}
				unk_0x482AE8C0EAF5AE07(*uParam0, 1084227584);
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

Vector3 func_480(struct<5> Param0, var uParam5, var uParam6, var uParam7)
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

Vector3 func_481(struct<5> Param0, var uParam5, var uParam6, var uParam7)
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

void func_482()
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_111 = 4;
	Local_112.f_11 = joaat("a_m_y_salton_01");
	Local_112.f_13 = { 162.5572f, 2289.158f, 93.1489f };
	Local_112.f_16 = 292.4985f;
	Local_112.f_12 = joaat("weapon_pistol");
	Local_112.f_10 = 0;
	Local_112.f_17 = 0;
	Local_112.f_18 = 0;
	Local_112.f_19 = 0;
	func_8();
	Local_132[0 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_132[0 /*20*/].f_1 = { 164.3371f, 2290.645f, 93.1434f };
	Local_132[0 /*20*/].f_4 = 119.9981f;
	Local_132[0 /*20*/].f_5 = joaat("weapon_pistol");
	Local_132[1 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_132[1 /*20*/].f_1 = { 162.4443f, 2283.816f, 92.9438f };
	Local_132[1 /*20*/].f_4 = 299.9979f;
	Local_132[1 /*20*/].f_5 = joaat("weapon_pistol");
	Local_132[2 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_132[2 /*20*/].f_1 = { 163.1961f, 2282.257f, 93.6852f };
	Local_132[2 /*20*/].f_4 = 299.9979f;
	Local_132[2 /*20*/].f_5 = joaat("weapon_pistol");
	Local_132[3 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_132[3 /*20*/].f_1 = { 163.9295f, 2283.512f, 92.6928f };
	Local_132[3 /*20*/].f_4 = 299.9979f;
	Local_132[3 /*20*/].f_5 = joaat("weapon_pistol");
	iVar0 = 0;
	while (iVar0 <= (iLocal_473 - 1))
	{
		Local_132[iVar0 /*20*/].f_15 = 0;
		Local_132[iVar0 /*20*/].f_16 = 0;
		Local_132[iVar0 /*20*/].f_17 = 0;
		Local_132[iVar0 /*20*/].f_14 = 0;
		iVar0++;
	}
	iLocal_473 = 4;
	Local_254[0 /*6*/].f_5 = joaat("bison");
	Local_254[0 /*6*/].f_1 = { 167.6809f, 2285.204f, 92.2978f };
	Local_254[0 /*6*/].f_4 = 164.9999f;
	Local_254[1 /*6*/].f_5 = joaat("gauntlet");
	Local_254[1 /*6*/].f_1 = { 183.4f, 2287.07f, 91.09f };
	Local_254[1 /*6*/].f_4 = 208.2f;
	iLocal_470 = 2;
	iLocal_471 = 0;
	iLocal_469 = 0;
	iLocal_472 = 0;
	Local_698 = { 232.541f, 2321.896f, 76.1228f };
	fLocal_458 = 129.6421f;
	Local_701 = { 190.8215f, 2284.055f, 88.3843f };
	fLocal_459 = 76.0608f;
	Local_704 = { 181.1229f, 2289.56f, 91.2944f };
	fLocal_460 = 103.4559f;
	Local_707 = { 0f, 0f, 0f };
	Local_710 = { 0f, 0f, 0f };
	iLocal_101 = 4;
	iLocal_417 = 0;
	iLocal_418 = 0;
	iLocal_419 = 0;
	iLocal_421 = 1;
	iLocal_420 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_422[iVar0] = 0;
		iVar0++;
	}
	iLocal_426 = 0;
	iLocal_427 = 0;
	iLocal_428 = 0;
	iLocal_429 = 0;
	iLocal_430 = 1;
	iLocal_431 = 0;
	iLocal_432 = 0;
	iLocal_433 = 0;
	iLocal_436 = 0;
	iLocal_438 = 0;
	iLocal_439 = 0;
	iLocal_440 = 0;
	iLocal_441 = 0;
	bLocal_446 = false;
	iLocal_447 = 0;
	iLocal_448 = 0;
	iLocal_449 = 0;
	bLocal_450 = false;
	iLocal_451 = 1;
	iLocal_452 = 0;
	iLocal_453 = 0;
	iLocal_454 = 0;
	iLocal_434 = 1;
	iLocal_435 = 0;
	iLocal_445 = 0;
	iLocal_444 = 0;
	bLocal_455 = false;
	iLocal_102 = 0;
	iLocal_468 = 0;
	iLocal_462 = 0;
	iLocal_466 = 0;
	iLocal_467 = 0;
	iLocal_463 = 0;
	iLocal_464 = 0;
	iLocal_465 = 0;
	iLocal_461 = 0;
	iLocal_479 = 0;
	iLocal_474 = 0;
	iLocal_475 = -1;
	iLocal_476 = -1;
	iLocal_478 = 0;
	iLocal_480 = -1;
	Local_695 = { 166.4233f, 2285.507f, 92.5205f };
	Local_689 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_665, "", 24);
	StringCopy(&Local_683, "", 24);
	Local_385.f_6 = func_493(62);
	Local_385.f_1 = { func_492() };
	Local_385.f_4 = func_491();
	Local_393.f_5 = func_490();
	Local_393.f_1 = { func_489() };
	Local_393.f_4 = func_488();
	Local_399.f_5 = func_487();
	Local_399.f_1 = { func_486() };
	Local_399.f_4 = func_485();
	Local_405.f_5 = func_46();
	Local_405.f_1 = { func_45() };
	Local_405.f_4 = func_44();
	Local_411.f_5 = func_43();
	Local_411.f_1 = { func_484() };
	Local_411.f_4 = func_483();
	sLocal_485 = "BailBond2Jumper";
	sLocal_486 = "BB2_J1";
	sLocal_487 = "BB2_J3";
	sLocal_488[0] = "BB2_VC1";
	sLocal_488[1] = "BB2_VC2";
	sLocal_488[2] = "BB2_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_422[iVar0] = 0;
		iVar0++;
	}
	iLocal_253 = 0;
}

float func_483()
{
	return 75.15f;
}

Vector3 func_484()
{
	return 2727.29f, 4145.9f, 44.16f;
}

float func_485()
{
	return 71f;
}

Vector3 func_486()
{
	return 2727.686f, 4145.715f, 44.08f;
}

int func_487()
{
	return joaat("prop_laptop_01a");
}

float func_488()
{
	return -91.28f;
}

Vector3 func_489()
{
	return 2728.35f, 4145.59f, 43.3f;
}

int func_490()
{
	return joaat("prop_table_03_chr");
}

float func_491()
{
	return 89.19f;
}

Vector3 func_492()
{
	return 2728.33f, 4145.6f, 43.89f;
}

int func_493(int iParam0)
{
	if (!func_82(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_494(bool bParam0)
{
	if (unk_0xE6235D8850CC396F())
	{
		return 0;
	}
	if (Global_25192)
	{
		return 0;
	}
	if (func_85(6) || func_85(7))
	{
		return 0;
	}
	if (func_80() != 2)
	{
		return 0;
	}
	if (unk_0x1B76B77EDF24A933())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_504(4))
		{
			return 0;
		}
		if (unk_0xD3718ACF1D7AD57E())
		{
			return 0;
		}
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
		if (!func_498(4))
		{
			return 0;
		}
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				return 0;
			}
		}
		if (unk_0x1B76B77EDF24A933())
		{
			return 0;
		}
		if (Global_68131)
		{
			return 0;
		}
		if (func_497() || func_496())
		{
			return 0;
		}
		if (func_495())
		{
			return 0;
		}
	}
	return 1;
}

int func_495()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

int func_496()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_497()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = func_80();
				if (!func_82(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_497()) || Global_100747) || Global_25192) || func_503()) || func_87(8, -1)) || func_502()) || func_501()) || func_495()) || func_496()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1) || func_497()) || Global_25192) || func_503()) || func_87(8, -1)) || func_495()) || func_502()) || func_501()) || func_496()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_497()) || Global_100747) || Global_25192) || func_503()) || func_87(8, -1)) || func_495()) || func_502()) || func_501()) || func_496()) || Global_101700.f_6647.f_919[iVar0] == 5) || Global_36328 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_497()) || Global_100747) || Global_25192) || func_503()) || func_87(8, -1)) || func_502()) || func_501()) || func_496()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_497() || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || func_87(8, -1)) || func_496()) || func_500()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_87(8, -1) || func_502()) || func_501()) || func_500()) || func_499())
						{
							return 0;
						}
						if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
						{
							if ((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_497()) || Global_25192) || func_503()) || func_87(8, -1)) || func_501()) || func_495()) || func_496()) || Global_101700.f_6647.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || func_497()) || func_501()) || Global_100747) || Global_25192) || func_503()) || Global_36912) || func_87(8, -1)) || func_495()) || func_500()) || func_496()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_497()) || Global_100747) || Global_25192) || func_503()) || func_87(8, -1)) || func_495()) || func_500()) || func_502()) || func_501()) || func_496())
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

var func_499()
{
	return Global_91530.f_1;
}

int func_500()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

bool func_501()
{
	return Global_91543.f_304 > 0;
}

bool func_502()
{
	return Global_91543.f_303 > 0;
}

var func_503()
{
	return Global_1315233;
}

bool func_504(int iParam0)
{
	return func_505(iParam0, Global_35781);
}

int func_505(int iParam0, int iParam1)
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

void func_506(int iParam0)
{
	func_531();
	if (!func_530())
	{
		if (Global_85999 == Global_91528)
		{
			Global_101700.f_23945.f_4[iParam0]++;
		}
		Global_85999 = Global_91528;
		func_507(unk_0x6AF6B39BFDB53CB5());
	}
}

void func_507(char* sParam0)
{
	if (Global_91491 != 12)
	{
		func_508(sParam0, 5, -1);
	}
}

int func_508(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_527();
	func_526();
	Global_91491 = 0;
	StringCopy(&(Global_91491.f_3), sParam0, 32);
	Global_91491.f_11 = iParam1;
	unk_0xFEBB03103CA42EBA(1);
	unk_0x853F52F88ADE73F4(0);
	unk_0x32FDBF4A41B0698D(0);
	func_13(1);
	func_427(1);
	func_523(0);
	func_522(1);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 9);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 6);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 20);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 21);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 5);
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if (unk_0x879A5482D4D7A218(uVar0))
				{
					unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 5);
				}
			}
		}
	}
	unk_0x2E2945F5602A744F(1);
	unk_0xD12BCC85C2F8B1DE();
	func_521(0);
	func_520(1);
	Global_91491.f_2 = Global_91528;
	if (func_519())
	{
		if (func_518())
		{
			if (Global_91528 >= func_515())
			{
				if (!unk_0x48B8265059381CD0(Global_82612[iParam2 /*34*/].f_15, 16))
				{
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6)
		{
			func_510(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2)
				{
					Global_86000 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_509(unk_0x6AF6B39BFDB53CB5());
			if (iVar33 > -1)
			{
				if (Global_101700.f_23945.f_4[iVar33] >= 2)
				{
					Global_86000 = 1;
				}
			}
		}
	}
	return 1;
}

int func_509(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE("BailBond1", uParam0))
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

void func_510(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_511(uParam1, "Abigail1", func_513(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 1:
			func_511(uParam1, "Abigail2", func_513(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 2:
			func_511(uParam1, "Barry1", func_513(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 3:
			func_511(uParam1, "Barry2", func_513(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_512(iParam0), 1, 1);
			break;
		
		case 4:
			func_511(uParam1, "Barry3", func_513(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 5:
			func_511(uParam1, "Barry3A", func_513(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 6:
			func_511(uParam1, "Barry3C", func_513(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 7:
			func_511(uParam1, "Barry4", func_513(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_512(iParam0), 0, 0);
			break;
		
		case 8:
			func_511(uParam1, "Dreyfuss1", func_513(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 9:
			func_511(uParam1, "Epsilon1", func_513(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 10:
			func_511(uParam1, "Epsilon2", func_513(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 11:
			func_511(uParam1, "Epsilon3", func_513(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 12:
			func_511(uParam1, "Epsilon4", func_513(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 13:
			func_511(uParam1, "Epsilon5", func_513(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 14:
			func_511(uParam1, "Epsilon6", func_513(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 15:
			func_511(uParam1, "Epsilon7", func_513(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 16:
			func_511(uParam1, "Epsilon8", func_513(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 17:
			func_511(uParam1, "Extreme1", func_513(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 18:
			func_511(uParam1, "Extreme2", func_513(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 19:
			func_511(uParam1, "Extreme3", func_513(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 20:
			func_511(uParam1, "Extreme4", func_513(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 21:
			func_511(uParam1, "Fanatic1", func_513(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_512(iParam0), 1, 0);
			break;
		
		case 22:
			func_511(uParam1, "Fanatic2", func_513(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_512(iParam0), 1, 0);
			break;
		
		case 23:
			func_511(uParam1, "Fanatic3", func_513(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_512(iParam0), 0, 1);
			break;
		
		case 24:
			func_511(uParam1, "Hao1", func_513(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_512(iParam0), 0, 1);
			break;
		
		case 25:
			func_511(uParam1, "Hunting1", func_513(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 26:
			func_511(uParam1, "Hunting2", func_513(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 27:
			func_511(uParam1, "Josh1", func_513(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 28:
			func_511(uParam1, "Josh2", func_513(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_512(iParam0), 1, 1);
			break;
		
		case 29:
			func_511(uParam1, "Josh3", func_513(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_512(iParam0), 1, 1);
			break;
		
		case 30:
			func_511(uParam1, "Josh4", func_513(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 31:
			func_511(uParam1, "Maude1", func_513(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 32:
			func_511(uParam1, "Minute1", func_513(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 33:
			func_511(uParam1, "Minute2", func_513(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 34:
			func_511(uParam1, "Minute3", func_513(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 35:
			func_511(uParam1, "MrsPhilips1", func_513(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 36:
			func_511(uParam1, "MrsPhilips2", func_513(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 37:
			func_511(uParam1, "Nigel1", func_513(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 38:
			func_511(uParam1, "Nigel1A", func_513(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_512(iParam0), 1, 1);
			break;
		
		case 39:
			func_511(uParam1, "Nigel1B", func_513(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_512(iParam0), 1, 1);
			break;
		
		case 40:
			func_511(uParam1, "Nigel1C", func_513(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_512(iParam0), 1, 1);
			break;
		
		case 41:
			func_511(uParam1, "Nigel1D", func_513(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_512(iParam0), 1, 1);
			break;
		
		case 42:
			func_511(uParam1, "Nigel2", func_513(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_512(iParam0), 1, 1);
			break;
		
		case 43:
			func_511(uParam1, "Nigel3", func_513(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_512(iParam0), 1, 1);
			break;
		
		case 44:
			func_511(uParam1, "Omega1", func_513(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 45:
			func_511(uParam1, "Omega2", func_513(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 46:
			func_511(uParam1, "Paparazzo1", func_513(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 47:
			func_511(uParam1, "Paparazzo2", func_513(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 48:
			func_511(uParam1, "Paparazzo3", func_513(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 49:
			func_511(uParam1, "Paparazzo3A", func_513(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 50:
			func_511(uParam1, "Paparazzo3B", func_513(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 51:
			func_511(uParam1, "Paparazzo4", func_513(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 52:
			func_511(uParam1, "Rampage1", func_513(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 54:
			func_511(uParam1, "Rampage3", func_513(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 55:
			func_511(uParam1, "Rampage4", func_513(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 56:
			func_511(uParam1, "Rampage5", func_513(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_512(iParam0), 0, 0);
			break;
		
		case 53:
			func_511(uParam1, "Rampage2", func_513(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_512(iParam0), 1, 0);
			break;
		
		case 57:
			func_511(uParam1, "TheLastOne", func_513(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 58:
			func_511(uParam1, "Tonya1", func_513(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 59:
			func_511(uParam1, "Tonya2", func_513(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 60:
			func_511(uParam1, "Tonya3", func_513(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 61:
			func_511(uParam1, "Tonya4", func_513(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		case 62:
			func_511(uParam1, "Tonya5", func_513(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_512(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_511(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_512(int iParam0)
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

struct<2> func_513(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_514(iParam0) };
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

struct<2> func_514(int iParam0)
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

int func_515()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_516(&(Global_91491.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_516(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x765F5B806B517045(uParam0);
	iVar1 = func_517(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_517(int iParam0, bool bParam1)
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

int func_518()
{
	if ((((Global_91491.f_11 == 0 || Global_91491.f_11 == 1) || Global_91491.f_11 == 2) || Global_91491.f_11 == 3) || Global_91491.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_519()
{
	if ((((Global_91491.f_11 == 0 || Global_91491.f_11 == 1) || Global_91491.f_11 == 2) || Global_91491.f_11 == 6) || Global_91491.f_11 == 3)
	{
		return 1;
	}
	if (Global_91491.f_11 == 5)
	{
		if (func_509(&(Global_91491.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_520(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36330 = 1;
	}
	else
	{
		Global_36330 = 0;
	}
}

void func_521(int iParam0)
{
	unk_0xE418A8E16B02C0AC(iParam0);
	unk_0x2D28D5B324F77D2D(iParam0);
}

void func_522(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD57128A757C0216E();
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 3);
	}
	else if (unk_0x48B8265059381CD0(Global_91491.f_20, 3))
	{
		unk_0x42DE1068884C3BE9();
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 3);
	}
}

void func_523(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x48B8265059381CD0(Global_91491.f_20, 4))
		{
			func_525();
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 4);
		}
	}
	else
	{
		func_524();
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 4);
	}
}

void func_524()
{
	Global_17151.f_5 = 1;
}

void func_525()
{
	Global_17151.f_5 = 0;
}

void func_526()
{
	Global_86000 = 0;
	Global_86001 = 0;
}

void func_527()
{
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 25);
	Global_91525 = 0;
	func_520(0);
	func_529();
	func_528();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

void func_528()
{
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 22);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 8);
}

void func_529()
{
	if (Global_91491.f_16 != 0)
	{
		unk_0x33CBABDFE7B17924(&(Global_91491.f_16));
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0)
	{
		unk_0x33CBABDFE7B17924(&(Global_91491.f_17));
		Global_91491.f_17 = 0;
	}
}

int func_530()
{
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

void func_531()
{
	Global_91526 = 1;
	if (unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_80())
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
			switch (func_80())
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

void func_532()
{
	if (iLocal_451)
	{
		func_421(0, 1);
	}
	unk_0x921053BAF754303D();
}

