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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 37;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	float fLocal_146 = 0f;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<6> Local_151[16];
	var uLocal_248[4] = { 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	struct<16> Local_258[4];
	struct<78> Local_323 = { 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_401[4];
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
	var uLocal_445 = 4;
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
	var uLocal_456 = 2;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 60;
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
	var uLocal_535 = 2;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 60;
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
	var uLocal_614 = 2;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 60;
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
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 2;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 60;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_138 = 3f;
	fLocal_139 = 0f;
	fLocal_140 = 2f;
	fLocal_141 = 100f;
	fLocal_146 = 0.5f;
	iLocal_253 = -1;
	iLocal_255 = -1;
	ScriptParam_0.f_0 = 144;
	if (unk_0x3A711520F83BAE98())
	{
		func_212(ScriptParam_0);
	}
	func_211(1);
	while (true)
	{
		func_210();
		if (func_201())
		{
			func_200();
		}
		if (unk_0x3A711520F83BAE98())
		{
			func_1(&uLocal_410);
		}
		else
		{
			func_200();
		}
	}
}

void func_1(var uParam0)
{
	if (Local_323.f_0 < 11)
	{
		func_184(uParam0);
	}
	switch (*uParam0)
	{
		case 0:
			if (Local_323.f_0 > 3 && !Local_323.f_0 == 9)
			{
				func_183(uParam0, 11);
				return;
			}
			func_181(uParam0);
			break;
		
		case 1:
			func_178(uParam0);
			break;
		
		case 2:
			func_174(uParam0);
			break;
		
		case 3:
			func_170(uParam0);
			break;
		
		case 4:
			func_168(uParam0);
			break;
		
		case 5:
			func_166(uParam0);
			break;
		
		case 6:
			func_162(uParam0);
			break;
		
		case 7:
			func_125(uParam0);
			break;
		
		case 8:
			func_82(uParam0);
			break;
		
		case 9:
			func_58(uParam0);
			break;
		
		case 10:
			func_49(uParam0);
			break;
		
		case 11:
			func_29(uParam0);
			break;
	}
	switch (Local_323.f_0)
	{
		case 0:
			func_28(uParam0);
			break;
		
		case 1:
			func_27(uParam0);
			break;
		
		case 2:
			func_26(uParam0);
			break;
		
		case 3:
			func_25(uParam0);
			break;
		
		case 4:
			func_23(uParam0);
			break;
		
		case 5:
			func_22(uParam0);
			break;
		
		case 6:
			func_18(uParam0);
			break;
		
		case 7:
			func_17(uParam0);
			break;
		
		case 8:
			func_13(uParam0);
			break;
		
		case 9:
			func_4(uParam0);
			break;
		
		case 10:
			break;
		
		case 11:
			break;
	}
	func_2(uParam0);
}

void func_2(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 5))
	{
		unk_0x873070BEE2844FE5();
	}
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 5);
	if (((*uParam0 > 1 && *uParam0 < 11) && unk_0x34D11AB5BA7922C2(uParam0->f_34)) && !unk_0x0F30C1F1717A6437())
	{
		unk_0x28E092B1E386EB67(uParam0->f_34, 255, 255, 255, 255, 0);
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 17))
	{
		func_3(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 17);
	}
}

void func_3(var uParam0)
{
	unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Home", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, 255, 0);
}

void func_4(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		bVar0 = true;
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar3)) && Local_401[iVar3 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_401[iVar3 /*2*/].f_1, 6))
				{
					bVar2 = true;
				}
				if (unk_0xC80D31E4B587871C(Local_401[iVar3 /*2*/].f_1, 2))
				{
					bVar1 = true;
				}
				if (!unk_0xC80D31E4B587871C(Local_401[iVar3 /*2*/].f_1, 4))
				{
					bVar0 = false;
				}
			}
			else if (Local_323.f_7[iVar3] != 0)
			{
				Local_323.f_7[iVar3] = 0;
			}
			iVar3++;
		}
		if ((!func_12(&(uParam0->f_28)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_28), 0, 0);
		}
		else
		{
			if ((bVar2 || bVar1) || func_11(uParam0))
			{
				func_9(&(uParam0->f_28));
			}
			if (((func_8(&(uParam0->f_28), 3000, 0) && func_12(&(uParam0->f_28))) && !func_11(uParam0)) && !bVar1)
			{
				if (bVar0)
				{
					func_7(uParam0, 10);
					return;
				}
				else if (!bVar1)
				{
					Local_323.f_77 = 0;
					func_7(uParam0, 4);
					Local_323.f_1 = -1;
					return;
				}
			}
		}
		if (!func_12(&(uParam0->f_26)) && !bVar2)
		{
			func_10(&(uParam0->f_26), 0, 0);
		}
		else
		{
			if (bVar2)
			{
				func_9(&(uParam0->f_26));
				return;
			}
			if (func_8(&(uParam0->f_26), 10000, 0))
			{
				func_6(0);
				func_5(0, 0);
				Local_323.f_77 = 0;
				func_7(uParam0, 4);
			}
		}
	}
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3, 0))
		{
			unk_0x872F1C1F8587CCC7(&Global_1655667, 7);
		}
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 0);
	}
	else
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1655667, 4))
			{
				unk_0x0EE72DB1CD8A3B86(&Global_1655667, 4);
			}
			if (unk_0xC80D31E4B587871C(Global_1655667, 0))
			{
				unk_0x872F1C1F8587CCC7(&Global_1655667, 1);
				unk_0x0EE72DB1CD8A3B86(&Global_1655667, 0);
			}
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 0);
	}
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 1);
	}
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	Local_323.f_0 = iParam1;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			if (!unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 6) && (*uParam0 != 9 || *uParam0 != 3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13(var uParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (!func_12(&(uParam0->f_22)))
		{
			func_10(&(uParam0->f_22), 0, 0);
			if (Local_323.f_1 != -1)
			{
				Local_323.f_7[Local_323.f_1]++;
			}
			iVar0 = 0;
			while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
			{
				if (!unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
				{
					Local_323.f_7[iVar0] = 0;
				}
				iVar0++;
			}
		}
		else if (func_8(&(uParam0->f_22), 3000, 0))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
			{
				if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
				{
					if (!unk_0xC80D31E4B587871C(Local_401[iVar0 /*2*/].f_1, 2))
					{
						bVar1 = false;
					}
					else
					{
						iVar0++;
					}
					if (bVar1)
					{
						func_14(uParam0);
						func_5(1, 0);
						func_7(uParam0, 9);
					}
				}

void func_14(var uParam0)
{
	int iVar0;
	
	func_9(&(uParam0->f_12));
	func_9(&(uParam0->f_16));
	func_9(&(uParam0->f_18));
	func_9(&(uParam0->f_20));
	func_9(&(uParam0->f_22));
	func_9(&(uParam0->f_26));
	func_9(&(uParam0->f_28));
	func_9(&(uParam0->f_30));
	func_9(&(uParam0->f_24));
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 0);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 1);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 2);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 3);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 9);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 8);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 7);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 10);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 12);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 6);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 11);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 13);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 15);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 18);
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (iVar0 < 4)
		{
			uParam0->f_35[iVar0 /*79*/].f_3 = 0;
			uParam0->f_35[iVar0 /*79*/].f_17 = 1f;
		}
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			func_16(&(uParam0->f_35), 0, iVar0);
		}
		else
		{
			func_15(&(uParam0->f_35[iVar0 /*79*/].f_18));
			func_16(&(uParam0->f_35), 3, iVar0);
		}
		iVar0++;
	}
}

void func_15(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		iVar0++;
	}
}

void func_16(var uParam0, int iParam1, int iParam2)
{
	(*uParam0)[iParam2 /*79*/] = iParam1;
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar1 = 4;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
			{
				if (uParam0->f_35[iVar0 /*79*/] == 3)
				{
					iVar1 = (iVar1 - 1);
				}
				else if (uParam0->f_35[iVar0 /*79*/] == 2)
				{
					iVar2 = iVar0;
				}
			}
			else
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (!func_12(&(uParam0->f_24)))
			{
				func_10(&(uParam0->f_24), 0, 0);
			}
			else if (func_8(&(uParam0->f_24), 1000, 0))
			{
				func_7(uParam0, 8);
			}
			else if (func_8(&(uParam0->f_24), 500, 0))
			{
				if (iVar2 > -1)
				{
					Local_323.f_1 = iVar2;
				}
			}
		}
	}
}

void func_18(var uParam0)
{
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (func_12(&(uParam0->f_18)))
		{
			if (func_8(&(uParam0->f_18), 2000, 0) && !unk_0xC80D31E4B587871C(iLocal_254, 1))
			{
				func_19(unk_0xEBD55014C579F626() + 1250);
				unk_0x872F1C1F8587CCC7(&iLocal_254, 1);
			}
			if (func_8(&(uParam0->f_18), 3000, 0))
			{
				func_7(uParam0, 7);
				unk_0x0EE72DB1CD8A3B86(&iLocal_254, 1);
			}
		}
	}
}

void func_19(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 2017957426;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = uParam0;
	iVar3 = func_20(1);
	if (!iVar3 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 3, iVar3);
	}
}

var func_20(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_21(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
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

void func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = unk_0x5C6098C2BAD00378();
		if (iVar0 == 1)
		{
			func_7(uParam0, 10);
			return;
		}
		if (func_12(&(uParam0->f_16)))
		{
			if (func_8(&(uParam0->f_16), 2000, 0))
			{
				func_7(uParam0, 6);
			}
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (!func_12(&(uParam0->f_32)))
		{
			func_10(&(uParam0->f_32), 0, 0);
		}
		else if (func_8(&(uParam0->f_32), 1000, 0))
		{
			iVar0 = unk_0x5C6098C2BAD00378();
			if (iVar0 == 1)
			{
				func_7(uParam0, 10);
				return;
			}
			bVar4 = true;
			switch (Local_323.f_77)
			{
				case 0:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_401[iVar1 /*2*/] > -1)
						{
							Local_323.f_2[iVar1] = Local_401[iVar1 /*2*/];
						}
						else
						{
							Local_323.f_2[iVar1] = -1;
						}
						iVar1++;
					}
					Local_323.f_77 = 1;
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							if (Local_323.f_2[iVar1] == -1)
							{
								Local_323.f_2[iVar1] = func_24();
							}
						}
						iVar1++;
					}
					Local_323.f_77 = 2;
					break;
				
				case 2:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							iVar2 = 0;
							while (iVar2 <= (unk_0xB72D370CB7ABC3EF() - 1))
							{
								if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)))
								{
									if (iVar2 != iVar1 && (Local_323.f_2[iVar1] == Local_323.f_2[iVar2] || Local_323.f_2[iVar1] == -1))
									{
										Local_323.f_2[iVar1] = -1;
										Local_323.f_77 = 1;
										return;
									}
								}
								iVar2++;
							}
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							if (Local_323.f_2[iVar1] != -1)
							{
								iVar3 = func_24();
								if (iVar3 != -1 && iVar3 < Local_323.f_2[iVar1])
								{
									Local_323.f_2[iVar1] = iVar3;
									return;
								}
							}
						}
						iVar1++;
					}
					Local_323.f_77 = 3;
					break;
				
				case 3:
					iVar1 = 0;
					while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
						{
							if (!unk_0xC80D31E4B587871C(Local_401[iVar1 /*2*/].f_1, 5))
							{
								bVar4 = false;
							}
						}
						iVar1++;
					}
					if (bVar4)
					{
						func_9(&(uParam0->f_12));
						func_9(&(uParam0->f_32));
						func_7(uParam0, 5);
					}
					break;
				}
			}
	}
}

int func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (Local_323.f_2[iVar1] == iVar0)
			{
				iVar2 = 1;
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 1;
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)) && Local_401[iVar2 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_401[iVar2 /*2*/].f_1, 6))
				{
					bVar1 = true;
				}
				if (unk_0xC80D31E4B587871C(Local_401[iVar2 /*2*/].f_1, 2))
				{
					iVar0 = 0;
				}
			}
			iVar2++;
		}
		if ((!func_12(&(uParam0->f_14)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_14), 0, 0);
		}
		else
		{
			if (bVar1 || func_11(uParam0))
			{
				func_9(&(uParam0->f_14));
				return;
			}
			iVar3 = unk_0x5C6098C2BAD00378();
			if ((iVar0 && iVar3 > 1) || func_8(&(uParam0->f_14), 30000, 0))
			{
				if (!func_12(&(uParam0->f_12)))
				{
					func_10(&(uParam0->f_12), 0, 0);
				}
				else if (func_8(&(uParam0->f_12), 3000, 0) && !func_11(uParam0))
				{
					func_9(&(uParam0->f_12));
					if (iVar3 == 1)
					{
						func_7(uParam0, 10);
						return;
					}
					Local_323.f_77 = 0;
					func_7(uParam0, 4);
					func_6(0);
					func_5(0, 0);
				}
			}
		}
	}
}

void func_26(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_401[iVar1 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_401[iVar1 /*2*/].f_1, 1))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 3);
				}
			}

void func_27(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_401[iVar1 /*2*/] > -1)
			{
				if (!unk_0xC80D31E4B587871C(Local_401[iVar1 /*2*/].f_1, 0))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 2);
				}
			}

void func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				if (Local_401[iVar0 /*2*/] == -1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_7(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	unk_0xE02E32C69260FBB7("DLC_Exec_Arc_Mac_Playing_Game_Scene");
	unk_0x0B9D04994D02CC2F(uParam0->f_3);
	unk_0x0B9D04994D02CC2F(uParam0->f_7);
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		unk_0x0B9D04994D02CC2F(uParam0->f_35[unk_0x622FF3AE4B1D07C3() /*79*/].f_5);
	}
	if (unk_0x7CCE41E8E97028E7())
	{
		unk_0x8E7C072C41DF97BF();
	}
	func_47();
	Global_4456448.f_138520 = 0;
	func_46();
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_577 = 0;
	func_45(0, 1, 1, 0);
	func_44();
	func_43();
	unk_0xF40900F61CC88931(3, 1);
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_34));
	}
	if (func_41() && !unk_0x40189ECE75CF9724())
	{
		if (unk_0x3A711520F83BAE98())
		{
			func_32(unk_0x9EB17624F44A8DA4(), 1, 0);
		}
		else
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
	}
	func_31(1);
	func_183(uParam0, 12);
	func_211(0);
	func_30();
}

void func_30()
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_31(bool bParam0)
{
	Global_1655667.f_1 = 0;
	Global_1655667 = 0;
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3 = 0;
	}
	if (bParam0)
	{
		func_10(&(Global_1655667.f_2), 0, 0);
	}
	else
	{
		func_9(&(Global_1655667.f_2));
	}
}

void func_32(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xEBD8A0B96FCAF579())
		{
			unk_0x7635EA803CE40962(0);
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		uVar0 = iParam2;
		unk_0x59F2A26BF856E30A(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_41())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x552F39AE86E07792(iParam0) && unk_0x5BEF7A5AB8F17255(iParam0))
		{
			uVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_38(unk_0x9EB17624F44A8DA4(), 0) && !func_37()))
				{
					unk_0xB3A8974D2C811672(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x3A711520F83BAE98() && !bVar18)
					{
						unk_0xB68F1251512BDC18(0);
					}
					Global_2422736[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_36(uVar25) && !unk_0xDDF5130488C0B76A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(uVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(uVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(uVar25, false);
					}
					unk_0xFBA991D3A851E195(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(uVar25, false);
				}
				unk_0x5C5D33A1B2711D21(uVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(uVar25);
				unk_0x5718F894FDA63A9E(uVar25, 1);
				func_35();
				func_34();
				if (unk_0x56B73C6866440457())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x40189ECE75CF9724())
				{
				}
				Global_2422736[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_36(uVar25) && !unk_0xDDF5130488C0B76A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(uVar25, !bVar14, 0);
					}
					if (!unk_0xDFFD5F8C8ABCB7EF(uVar25))
					{
						if (!bVar20)
						{
							unk_0xEDC33A771FAEB393(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFBA991D3A851E195(uVar25, 1);
						}
					}
					if (func_33(Global_4456448.f_143970))
					{
						unk_0xEDC33A771FAEB393(uVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x8FA21D9CF7681249(iParam0, 0);
				}
				else
				{
					unk_0x8FA21D9CF7681249(iParam0, 1);
				}
				unk_0x5C5D33A1B2711D21(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x6728497EE586D1FE(uVar25) && !unk_0x88DDBE9908752BF0(uVar25, 0))
					{
						unk_0x957CEE967C939968(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar26);
		}
	}
}

bool func_33(int iParam0)
{
	return iParam0 == 17;
}

void func_34()
{
	struct<3> Var0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { Var0 };
}

void func_35()
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_36(var uParam0)
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x78F50AA8F955BEFC(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_37()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_38(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_39(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_40();
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

int func_40()
{
	return Global_1312736;
}

int func_41()
{
	if (func_42() == 0)
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	return Global_1312466.f_18;
}

void func_43()
{
	unk_0x137FC8E0F58D9E0B("LineArcadeMinigame");
	unk_0x751FF861325F816B("DLC_EXEC1/OFFICE_BOARDROOM");
	unk_0xF40900F61CC88931(3, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_1655667, 6);
	unk_0x0EE72DB1CD8A3B86(&Global_1655667, 7);
}

void func_44()
{
	Global_2436181.f_1040.f_10 = 0;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_46()
{
	if (Global_1656139)
	{
	}
	Global_1656139 = 0;
}

void func_47()
{
	if (!Global_1312568)
	{
		return;
	}
	func_48();
}

void func_48()
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_49(var uParam0)
{
	func_56(uParam0);
	func_52(uParam0);
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_51(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	}
	if (unk_0xCCCA18C9A006FF83(uParam0->f_7))
	{
		unk_0x4AFBCBFDE748D4E0(uParam0->f_7, "Game_Over_Blink", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	if (!func_12(&(uParam0->f_30)))
	{
		func_10(&(uParam0->f_30), 0, 0);
	}
	else if (func_8(&(uParam0->f_30), 5000, 0))
	{
		func_183(uParam0, 11);
		func_50(0);
	}
	if (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0xE8C126B7ADBB9D63(2, 202))
	{
		func_183(uParam0, 11);
		func_50(0);
	}
}

void func_50(bool bParam0)
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 5);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 5);
	}
}

void func_51(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "HIDE_LOBBY");
		unk_0x271AA5469AF471B3();
	}
}

void func_52(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 12))
	{
		func_53(uParam0, "DCTL_GAMEOVER", 0, 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 12);
	}
}

void func_53(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_55(sParam1);
		unk_0xD07D5CD276368D36(iParam2);
		unk_0xD07D5CD276368D36(iParam3);
		func_54("");
		unk_0x271AA5469AF471B3();
	}
}

void func_54(char* sParam0)
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_55(var uParam0)
{
	unk_0x7E099EB35339C80D(uParam0);
	unk_0x9748595E4799A2CF();
}

void func_56(var uParam0)
{
	int iVar0;
	
	iVar0 = 255;
	func_57(0f, 0f, 1f, 1f, 0, 0, 0, iVar0);
	unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Game", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, iVar0, 0);
}

void func_57(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_58(var uParam0)
{
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 15))
	{
		func_81(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 15);
	}
	func_56(uParam0);
	func_76(uParam0);
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x4FB260623DD93924(2, 200, 1);
	}
	if (!unk_0x0F30C1F1717A6437())
	{
		if ((unk_0xE8C126B7ADBB9D63(2, 201) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4))
		{
			func_75(3);
		}
		else if ((unk_0xE8C126B7ADBB9D63(2, 202) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4))
		{
			func_75(4);
		}
	}
	if (func_74())
	{
		func_6(1);
	}
	if (!unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 3) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 4))
		{
			unk_0x39A975B87A12AB75("DCTL_REPLAYHELP", 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 5);
		}
	}
	func_60(uParam0, 1);
	func_59(uParam0);
	if (Local_323.f_0 == 10)
	{
		unk_0x0B9D04994D02CC2F(uParam0->f_3);
		unk_0x4AFBCBFDE748D4E0(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 4);
		func_183(uParam0, 10);
		func_50(1);
		func_6(0);
		func_5(0, 0);
	}
	else if (Local_323.f_0 == 4)
	{
		if (unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4) || unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 2))
		{
			func_183(uParam0, 11);
			return;
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_254, 0);
		func_14(uParam0);
		func_6(0);
		func_5(0, 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 4);
		func_183(uParam0, 4);
	}
}

void func_59(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			if (unk_0xC80D31E4B587871C(Local_401[iVar0 /*2*/].f_1, 3) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 2))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 2);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 3))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 3);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_401[iVar0 /*2*/].f_1, 4) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 3))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 3);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 2))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 2);
				}
			}
		}
		iVar0++;
	}
}

void func_60(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_323.f_2[iLocal_253] != Local_401[iLocal_253 /*2*/])
	{
		Local_401[iLocal_253 /*2*/] = Local_323.f_2[iLocal_253];
	}
	if (!unk_0xC80D31E4B587871C(iLocal_254, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				if (Local_401[iVar0 /*2*/] > -1 && (unk_0xAB019B170BF1309C(&(Local_323.f_12[iVar0 /*16*/])) || unk_0xAB019B170BF1309C(&(Local_258[iVar0 /*16*/]))))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_254, 2);
				}
			}
			else if (!(unk_0xAB019B170BF1309C(&(Local_323.f_12[iVar0 /*16*/])) || unk_0xAB019B170BF1309C(&(Local_258[iVar0 /*16*/]))))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_254, 2);
			}
			iVar0++;
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_254, 2))
	{
		func_66();
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				if ((Local_401[iVar0 /*2*/] == -1 || unk_0xAB019B170BF1309C(&(Local_323.f_12[iVar0 /*16*/]))) || unk_0xAB019B170BF1309C(&(Local_258[iVar0 /*16*/])))
				{
					iVar1 = 0;
				}
			}
			else if (!unk_0xAB019B170BF1309C(&(Local_323.f_12[iVar0 /*16*/])) || !unk_0xAB019B170BF1309C(&(Local_258[iVar0 /*16*/])))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			if (bParam1)
			{
				func_61(uParam0, "DCTL_REPLAY", 0);
			}
			else
			{
				func_61(uParam0, "DCTL_INSERT", 0);
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_254, 2);
		}
	}
}

void func_61(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "INIT_LOBBY");
		func_55(sParam1);
		unk_0xD07D5CD276368D36(iParam2);
		func_62(0);
		func_62(1);
		func_62(2);
		func_62(3);
		if (iLocal_253 > -1 && Local_401[iLocal_253 /*2*/] > -1)
		{
			unk_0xD07D5CD276368D36(Local_401[iLocal_253 /*2*/]);
		}
		unk_0x271AA5469AF471B3();
	}
}

void func_62(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	Var0 = { func_65(iParam0) };
	Var16 = { func_63(iParam0) };
	unk_0x81D71E37E95798C1(&Var16);
	func_54(&Var0);
}

struct<16> func_63(int iParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, func_64(), 64);
	iVar16 = 0;
	while (iVar16 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar16)) && Local_401[iVar16 /*2*/] == iParam0)
		{
			Var0 = { Local_258[iVar16 /*16*/] };
		}
		iVar16++;
	}
	return Var0;
}

var func_64()
{
	var uVar0;
	
	return uVar0;
}

struct<16> func_65(int iParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = 0;
	while (iVar16 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar16)) && Local_401[iVar16 /*2*/] == iParam0)
		{
			Var0 = { Local_323.f_12[iVar16 /*16*/] };
		}
		iVar16++;
	}
	return Var0;
}

void func_66()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (iVar0 < 4)
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				StringCopy(&(Local_323.f_12[iVar0 /*16*/]), "", 64);
			}
			StringCopy(&(Local_258[iVar0 /*16*/]), func_64(), 64);
		}
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				StringCopy(&(Local_323.f_12[iVar0 /*16*/]), unk_0xDE2D3B9654C31EB3(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0))), 64);
			}
			iVar1 = func_67(unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0)));
			if (iVar1 != 0)
			{
				StringCopy(&(Local_258[iVar0 /*16*/]), unk_0xF85532D53BDB3017(iVar1), 64);
			}
		}
		iVar0++;
	}
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		func_68(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_68(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0, 1))
	{
		return;
	}
	if (func_70(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_69(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (!func_21(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_71(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_71(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1369337)
	{
		Global_1369176[iVar32 /*5*/] = { Global_1369176[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_72(&(Global_1369176[iVar32 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_72(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_73();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

int func_73()
{
	return -1;
}

int func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			if (unk_0xC80D31E4B587871C(Local_401[iVar1 /*2*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&(Local_401[iLocal_253 /*2*/].f_1), 2);
	unk_0x0EE72DB1CD8A3B86(&(Local_401[iLocal_253 /*2*/].f_1), 3);
	unk_0x0EE72DB1CD8A3B86(&(Local_401[iLocal_253 /*2*/].f_1), 4);
	unk_0x872F1C1F8587CCC7(&(Local_401[iLocal_253 /*2*/].f_1), iParam0);
}

void func_76(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_61(uParam0, "DCTL_REPLAY", 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 16);
	}
	func_79(uParam0);
	func_77(uParam0);
}

void func_77(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SET_MICS");
		unk_0xD07D5CD276368D36(func_78(0));
		unk_0xD07D5CD276368D36(func_78(1));
		unk_0xD07D5CD276368D36(func_78(2));
		unk_0xD07D5CD276368D36(func_78(3));
		unk_0x271AA5469AF471B3();
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] == iParam0)
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (!unk_0xE13E5EE64FACC268(iVar1))
			{
				return 0;
			}
			if (unk_0x52753E0E1429BC4E(iVar1))
			{
				return 1;
			}
			if (unk_0xA150D4260D19B58F(iVar1))
			{
				return 3;
			}
			return 2;
		}
		iVar0++;
	}
	return 0;
}

void func_79(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "UPDATE_LOBBY");
		func_80(0);
		func_80(1);
		func_80(2);
		func_80(3);
		unk_0x271AA5469AF471B3();
	}
}

void func_80(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Local_401.f_0)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_401[iVar1 /*2*/] == iParam0)
		{
			bVar0 = true;
			if (unk_0xC80D31E4B587871C(Local_401[iVar1 /*2*/].f_1, 3))
			{
				unk_0xD07D5CD276368D36(2);
			}
			else if (unk_0xC80D31E4B587871C(Local_401[iVar1 /*2*/].f_1, 4))
			{
				unk_0xD07D5CD276368D36(1);
			}
			else
			{
				unk_0xD07D5CD276368D36(0);
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		unk_0xD07D5CD276368D36(0);
	}
}

void func_81(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "HIDE_HUD");
		unk_0x271AA5469AF471B3();
	}
}

void func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 15))
	{
		func_81(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 15);
	}
	func_56(uParam0);
	func_122(uParam0);
	if (Local_323.f_0 >= 9)
	{
		func_5(1, 0);
		if (unk_0xCCCA18C9A006FF83(uParam0->f_3))
		{
			unk_0x4AFBCBFDE748D4E0(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		}
		iVar0 = func_121(3773, -1, 0);
		iVar0++;
		func_120(3773, iVar0, -1, 1, 0);
		if (Local_323.f_1 == iLocal_253)
		{
			iVar1 = func_121(3772, -1, 0);
			iVar1++;
			func_120(3772, iVar1, -1, 1, 0);
			if (iVar1 >= Global_262145.f_15634)
			{
				func_119(7551, 1, -1, 1);
				if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == joaat("mp_m_freemode_01"))
				{
					func_83(func_116(joaat("MP_exec_prizes_015_M"), 3), 1, 1, 0, 0, -1);
				}
				else
				{
					func_83(func_116(joaat("MP_exec_prizes_015_F"), 4), 1, 1, 0, 0, -1);
				}
			}
		}
		func_66();
		func_183(uParam0, 9);
	}
	if (!unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 2))
	{
		func_75(2);
	}
}

void func_83(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_115(1235, iParam5);
			}
		}
		else
		{
			func_115(1235, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_114(iParam0, iParam5))
		{
			func_111(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_109(iParam0) == 0)
			{
				func_103(12, func_108(iParam0, 3), func_107(iParam0, 3), func_106(iParam0, 3), func_105(iParam0, 3), -1, 0, 0, 0, -1, 0);
				func_102(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_97(iParam0, 1, iParam5);
		}
		if (Global_1357530.f_1043 == 0)
		{
			Global_1357530.f_1044 = iParam0;
		}
	}
	else
	{
		if (func_114(iParam0, iParam5))
		{
			func_111(iParam0, 0, iParam5);
			func_93(1235, -1, iParam5);
		}
		if (func_109(iParam0) == 1)
		{
			func_102(iParam0, 0);
		}
		if (func_92(iParam0, iParam5))
		{
			func_84(iParam0, 0, iParam5);
		}
	}
}

void func_84(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_92(iParam0, iParam2))
		{
			func_85(iParam0, 1, iParam2);
		}
	}
	else if (func_92(iParam0, iParam2))
	{
		func_85(iParam0, 0, iParam2);
	}
}

void func_85(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_91(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, func_90(iVar1));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, func_90(iVar1));
		}
		func_120(func_86(iParam0), iVar0, iParam2, 1, 0);
	}
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_89(iVar0);
	if ((func_88() == 0 || func_87() == 0) || (func_88() == 999 && func_87() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1045;
				break;
			
			case 1:
				return 1046;
				break;
			
			case 2:
				return 1047;
				break;
			
			case 3:
				return 1048;
				break;
			
			case 4:
				return 1049;
				break;
			
			case 5:
				return 1050;
				break;
			
			case 6:
				return 1484;
				break;
			
			case 7:
				return 1485;
				break;
			
			case 8:
				return 1486;
				break;
			
			case 9:
				return 1487;
				break;
			
			case 10:
				return 1944;
				break;
			
			case 11:
				return 1945;
				break;
			
			case 12:
				return 1946;
				break;
			
			case 13:
				return 2412;
				break;
			
			case 14:
				return 2432;
				break;
			
			case 15:
				return 2435;
				break;
			
			case 16:
				return 2438;
				break;
			
			case 17:
				return 2601;
				break;
			
			case 18:
				return 2604;
				break;
			
			case 19:
				return 2607;
				break;
			
			case 20:
				return 3767;
				break;
			
			case 21:
				return 3770;
				break;
			
			case 22:
				return 3845;
				break;
			
			case 23:
				return 3848;
				break;
			
			case 24:
				return 3851;
				break;
			
			case 25:
				return 3854;
				break;
			
			case 26:
				return 5345;
			
			case 27:
				return 5348;
				break;
			
			case 28:
				return 5450;
				break;
			
			case 29:
				return 5453;
				break;
			
			case 30:
				return 6412;
				break;
			
			case 31:
				return 6415;
				break;
		}
		return 7872;
	}
	return 7872;
}

int func_87()
{
	return Global_25234;
}

int func_88()
{
	return Global_25233;
}

int func_89(int iParam0)
{
	return (iParam0 / 32);
}

int func_90(int iParam0)
{
	return (iParam0 % 32);
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_86(iParam0);
	if (iVar0 == 7872)
	{
		return 0;
	}
	uVar1 = func_121(iVar0, iParam1, 0);
	return uVar1;
}

bool func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_90(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(iVar0, iVar1);
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_121(iParam0, func_96(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_95(iParam0))
	{
		func_120(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_94(iParam0, iVar0, iParam2, 1);
	}
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_96(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_96(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_96(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_96(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_96(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_96(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_96(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_96(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_96(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_96(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_96(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_96(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_96(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_96(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_96(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_96(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_96(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_96(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_96(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_96(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_96(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_96(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_96(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_96(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_96(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_96(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_96(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_96(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_96(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_96(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_96(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_96(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_96(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_95(int iParam0)
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_96(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_40();
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

void func_97(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_101(iParam0))
		{
			func_98(iParam0, 1, iParam2);
		}
	}
	else if (func_101(iParam0))
	{
		func_98(iParam0, 0, iParam2);
	}
}

void func_98(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, func_90(iVar1));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, func_90(iVar1));
		}
		func_120(func_99(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_89(iVar0);
	if ((func_88() == 0 || func_87() == 0) || (func_88() == 999 && func_87() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1040;
				break;
			
			case 1:
				return 1041;
				break;
			
			case 2:
				return 1042;
				break;
			
			case 3:
				return 1043;
				break;
			
			case 4:
				return 1044;
				break;
			
			case 5:
				return 1488;
				break;
			
			case 6:
				return 1489;
				break;
			
			case 7:
				return 1490;
				break;
			
			case 8:
				return 1491;
				break;
			
			case 9:
				return 1940;
				break;
			
			case 10:
				return 1941;
				break;
			
			case 11:
				return 1942;
				break;
			
			case 12:
				return 1943;
				break;
			
			case 13:
				return 2413;
				break;
			
			case 14:
				return 2433;
				break;
			
			case 15:
				return 2436;
				break;
			
			case 16:
				return 2439;
				break;
			
			case 17:
				return 2602;
				break;
			
			case 18:
				return 2605;
				break;
			
			case 19:
				return 2608;
				break;
			
			case 20:
				return 3768;
				break;
			
			case 21:
				return 3771;
				break;
			
			case 22:
				return 3846;
				break;
			
			case 23:
				return 3849;
				break;
			
			case 24:
				return 3852;
				break;
			
			case 25:
				return 3855;
				break;
			
			case 26:
				return 5346;
				break;
			
			case 27:
				return 5349;
				break;
			
			case 28:
				return 5451;
				break;
			
			case 29:
				return 5454;
				break;
			
			case 30:
				return 6413;
				break;
			
			case 31:
				return 6416;
				break;
			}
	}
	return 7872;
}

var func_100(var uParam0)
{
	var uVar0;
	
	uVar0 = func_121(func_99(uParam0), -1, 0);
	return uVar0;
}

bool func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(uParam0);
	iVar1 = uParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_90(iVar1));
}

void func_102(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2521687.f_1032[func_89(iVar0)]), func_90(iVar0));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2521687.f_1032[func_89(iVar0)]), func_90(iVar0));
		}
	}
}

void func_103(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_104(&Global_1365212);
	Global_1365212[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1365212[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1365212[iVar0 /*106*/].f_97 = iParam5;
	Global_1365212[iVar0 /*106*/].f_104 = iParam9;
	Global_1365212[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		StringCopy(&(Global_1365212[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_104(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_105(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_106(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_107(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_108(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_90(iVar1));
}

var func_110(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_2521687.f_1032[func_89(iParam0)];
	return uVar0;
}

void func_111(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_113(iParam0) == 7872)
	{
		return;
	}
	iVar0 = func_112(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, func_90(iVar1));
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, func_90(iVar1));
		}
		func_120(func_113(iParam0), iVar0, iParam2, 1, 0);
	}
}

var func_112(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_121(func_113(uParam0), iParam1, 0);
	return uVar0;
}

int func_113(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_89(iVar0);
	if ((func_88() == 0 || func_87() == 0) || (func_88() == 999 && func_87() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1035;
				break;
			
			case 1:
				return 1036;
				break;
			
			case 2:
				return 1037;
				break;
			
			case 3:
				return 1038;
				break;
			
			case 4:
				return 1039;
				break;
			
			case 5:
				return 1499;
				break;
			
			case 6:
				return 1753;
				break;
			
			case 7:
				return 1947;
				break;
			
			case 8:
				return 1948;
				break;
			
			case 9:
				return 1949;
				break;
			
			case 10:
				return 1950;
				break;
			
			case 11:
				return 1951;
				break;
			
			case 12:
				return 1952;
				break;
			
			case 13:
				return 2411;
				break;
			
			case 14:
				return 2431;
				break;
			
			case 15:
				return 2434;
				break;
			
			case 16:
				return 2437;
				break;
			
			case 17:
				return 2600;
				break;
			
			case 18:
				return 2603;
				break;
			
			case 19:
				return 2606;
				break;
			
			case 20:
				return 3766;
				break;
			
			case 21:
				return 3769;
				break;
			
			case 22:
				return 3844;
				break;
			
			case 23:
				return 3847;
				break;
			
			case 24:
				return 3850;
				break;
			
			case 25:
				return 3853;
				break;
			
			case 26:
				return 5344;
				break;
			
			case 27:
				return 5347;
				break;
			
			case 28:
				return 5449;
				break;
			
			case 29:
				return 5452;
				break;
			
			case 30:
				return 6411;
				break;
			
			case 31:
				return 6414;
				break;
			}
	}
	return 7872;
}

bool func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_113(iParam0) == 7872)
	{
		return 0;
	}
	iVar0 = func_112(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_90(iVar1));
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_121(iParam0, func_96(iParam1), 0);
	iVar0++;
	if (!func_95(iParam0))
	{
		func_120(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_94(iParam0, iVar0, iParam1, 1);
	}
}

int func_116(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_118(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_117(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = unk_0xE94DD0E75DE69D1E(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (unk_0x5260EED750B93264(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_117(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_Bea_F_Chest_002"):
			iVar0 = 0;
			break;
		
		case joaat("MP_Bea_F_Back_001"):
			iVar0 = 1;
			break;
		
		case joaat("MP_Bea_F_LArm_000"):
			iVar0 = 2;
			break;
		
		case joaat("MP_Bea_F_Back_000"):
			iVar0 = 3;
			break;
		
		case joaat("MP_Bea_F_Should_001"):
			iVar0 = 4;
			break;
		
		case joaat("MP_Bea_F_Back_002"):
			iVar0 = 5;
			break;
		
		case joaat("MP_Bea_F_RSide_000"):
			iVar0 = 6;
			break;
		
		case joaat("MP_Bea_F_RLeg_000"):
			iVar0 = 7;
			break;
		
		case joaat("MP_Bea_F_Neck_000"):
			iVar0 = 8;
			break;
		
		case joaat("MP_Bea_F_Stom_001"):
			iVar0 = 9;
			break;
		
		case joaat("MP_Bea_F_Stom_002"):
			iVar0 = 10;
			break;
		
		case joaat("MP_Bea_F_Should_000"):
			iVar0 = 11;
			break;
		
		case joaat("MP_Bea_F_Chest_000"):
			iVar0 = 12;
			break;
		
		case joaat("MP_Bea_F_Chest_001"):
			iVar0 = 13;
			break;
		
		case joaat("MP_Bea_F_Stom_000"):
			iVar0 = 14;
			break;
		
		case joaat("MP_Bea_F_RArm_001"):
			iVar0 = 15;
			break;
		
		case joaat("MP_Bea_F_LArm_001"):
			iVar0 = 16;
			break;
		
		case joaat("MP_Val_F_Tshirt_A"):
			iVar0 = 17;
			break;
		
		case joaat("MP_Val_F_Tshirt_B"):
			iVar0 = 18;
			break;
		
		case joaat("MP_Val_F_Tshirt_C"):
			iVar0 = 19;
			break;
		
		case joaat("MP_Val_F_Tshirt_D"):
			iVar0 = 20;
			break;
		
		case joaat("MP_Val_F_Tshirt_E"):
			iVar0 = 21;
			break;
		
		case joaat("MP_Val_F_Tshirt_F"):
			iVar0 = 22;
			break;
		
		case joaat("MP_Val_F_Tshirt_G"):
			iVar0 = 23;
			break;
		
		case joaat("MP_Val_F_Tshirt_H"):
			iVar0 = 24;
			break;
		
		case joaat("MP_Val_F_Tshirt_I"):
			iVar0 = 25;
			break;
		
		case joaat("MP_Val_F_Tshirt_J"):
			iVar0 = 26;
			break;
		
		case joaat("MP_Val_F_Tshirt_K"):
			iVar0 = 27;
			break;
		
		case joaat("MP_Val_F_Tshirt_L"):
			iVar0 = 28;
			break;
		
		case joaat("MP_Val_F_Tshirt_M"):
			iVar0 = 29;
			break;
		
		case joaat("MP_Val_F_Tshirt_N"):
			iVar0 = 30;
			break;
		
		case joaat("MP_Val_F_Tshirt_O"):
			iVar0 = 31;
			break;
		
		case joaat("MP_Val_F_Tshirt_P"):
			iVar0 = 32;
			break;
		
		case joaat("MP_Val_F_Tshirt_Q"):
			iVar0 = 33;
			break;
		
		case joaat("MP_Val_F_Tshirt_R"):
			iVar0 = 34;
			break;
		
		case joaat("MP_Val_F_Tshirt_S"):
			iVar0 = 35;
			break;
		
		case joaat("MP_Val_F_Tshirt_T"):
			iVar0 = 36;
			break;
		
		case joaat("MP_Buis_F_Back_000"):
			iVar0 = 37;
			break;
		
		case joaat("MP_Buis_F_Back_001"):
			iVar0 = 38;
			break;
		
		case joaat("MP_Buis_F_Chest_000"):
			iVar0 = 39;
			break;
		
		case joaat("MP_Buis_F_Chest_001"):
			iVar0 = 40;
			break;
		
		case joaat("MP_Buis_F_Chest_002"):
			iVar0 = 41;
			break;
		
		case joaat("MP_Buis_F_LArm_000"):
			iVar0 = 42;
			break;
		
		case joaat("MP_Buis_F_LLeg_000"):
			iVar0 = 43;
			break;
		
		case joaat("MP_Buis_F_Neck_000"):
			iVar0 = 44;
			break;
		
		case joaat("MP_Buis_F_Neck_001"):
			iVar0 = 45;
			break;
		
		case joaat("MP_Buis_F_RArm_000"):
			iVar0 = 46;
			break;
		
		case joaat("MP_Buis_F_RLeg_000"):
			iVar0 = 47;
			break;
		
		case joaat("MP_Buis_F_Stom_000"):
			iVar0 = 48;
			break;
		
		case joaat("MP_Buis_F_Stom_001"):
			iVar0 = 49;
			break;
		
		case joaat("MP_Buis_F_Stom_002"):
			iVar0 = 50;
			break;
		
		case joaat("MP_Female_Crew_Tat_000"):
			iVar0 = 51;
			break;
		
		case joaat("MP_Female_Crew_Tat_001"):
			iVar0 = 52;
			break;
		
		case joaat("FM_Bus_F_Hair_a"):
			iVar0 = 53;
			break;
		
		case joaat("FM_Bus_F_Hair_b"):
			iVar0 = 54;
			break;
		
		case joaat("FM_Bus_F_Hair_c"):
			iVar0 = 55;
			break;
		
		case joaat("FM_Bus_F_Hair_d"):
			iVar0 = 56;
			break;
		
		case joaat("FM_Bus_F_Hair_e"):
			iVar0 = 57;
			break;
		
		case joaat("FM_Hip_F_Tat_000"):
			iVar0 = 58;
			break;
		
		case joaat("FM_Hip_F_Tat_001"):
			iVar0 = 59;
			break;
		
		case joaat("FM_Hip_F_Tat_002"):
			iVar0 = 60;
			break;
		
		case joaat("FM_Hip_F_Tat_003"):
			iVar0 = 61;
			break;
		
		case joaat("FM_Hip_F_Tat_004"):
			iVar0 = 62;
			break;
		
		case joaat("FM_Hip_F_Tat_005"):
			iVar0 = 63;
			break;
		
		case joaat("FM_Hip_F_Tat_006"):
			iVar0 = 64;
			break;
		
		case joaat("FM_Hip_F_Tat_007"):
			iVar0 = 65;
			break;
		
		case joaat("FM_Hip_F_Tat_008"):
			iVar0 = 66;
			break;
		
		case joaat("FM_Hip_F_Tat_009"):
			iVar0 = 67;
			break;
		
		case joaat("FM_Hip_F_Tat_010"):
			iVar0 = 68;
			break;
		
		case joaat("FM_Hip_F_Tat_011"):
			iVar0 = 69;
			break;
		
		case joaat("FM_Hip_F_Tat_012"):
			iVar0 = 70;
			break;
		
		case joaat("FM_Hip_F_Tat_013"):
			iVar0 = 71;
			break;
		
		case joaat("FM_Hip_F_Tat_014"):
			iVar0 = 72;
			break;
		
		case joaat("FM_Hip_F_Tat_015"):
			iVar0 = 73;
			break;
		
		case joaat("FM_Hip_F_Tat_016"):
			iVar0 = 74;
			break;
		
		case joaat("FM_Hip_F_Tat_017"):
			iVar0 = 75;
			break;
		
		case joaat("FM_Hip_F_Tat_018"):
			iVar0 = 76;
			break;
		
		case joaat("FM_Hip_F_Tat_019"):
			iVar0 = 77;
			break;
		
		case joaat("FM_Hip_F_Tat_020"):
			iVar0 = 78;
			break;
		
		case joaat("FM_Hip_F_Tat_021"):
			iVar0 = 79;
			break;
		
		case joaat("FM_Hip_F_Tat_022"):
			iVar0 = 80;
			break;
		
		case joaat("FM_Hip_F_Tat_023"):
			iVar0 = 81;
			break;
		
		case joaat("FM_Hip_F_Tat_024"):
			iVar0 = 82;
			break;
		
		case joaat("FM_Hip_F_Tat_025"):
			iVar0 = 83;
			break;
		
		case joaat("FM_Hip_F_Tat_026"):
			iVar0 = 84;
			break;
		
		case joaat("FM_Hip_F_Tat_027"):
			iVar0 = 85;
			break;
		
		case joaat("FM_Hip_F_Tat_028"):
			iVar0 = 86;
			break;
		
		case joaat("FM_Hip_F_Tat_029"):
			iVar0 = 87;
			break;
		
		case joaat("FM_Hip_F_Tat_030"):
			iVar0 = 88;
			break;
		
		case joaat("FM_Hip_F_Tat_031"):
			iVar0 = 89;
			break;
		
		case joaat("FM_Hip_F_Tat_032"):
			iVar0 = 90;
			break;
		
		case joaat("FM_Hip_F_Tat_033"):
			iVar0 = 91;
			break;
		
		case joaat("FM_Hip_F_Tat_034"):
			iVar0 = 92;
			break;
		
		case joaat("FM_Hip_F_Tat_035"):
			iVar0 = 93;
			break;
		
		case joaat("FM_Hip_F_Tat_036"):
			iVar0 = 94;
			break;
		
		case joaat("FM_Hip_F_Tat_037"):
			iVar0 = 95;
			break;
		
		case joaat("FM_Hip_F_Tat_038"):
			iVar0 = 96;
			break;
		
		case joaat("FM_Hip_F_Tat_039"):
			iVar0 = 97;
			break;
		
		case joaat("FM_Hip_F_Tat_040"):
			iVar0 = 98;
			break;
		
		case joaat("FM_Hip_F_Tat_041"):
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case joaat("FM_Hip_F_Tat_042"):
			iVar0 = 100;
			break;
		
		case joaat("FM_Hip_F_Tat_043"):
			iVar0 = 101;
			break;
		
		case joaat("FM_Hip_F_Tat_044"):
			iVar0 = 102;
			break;
		
		case joaat("FM_Hip_F_Tat_045"):
			iVar0 = 103;
			break;
		
		case joaat("FM_Hip_F_Tat_046"):
			iVar0 = 104;
			break;
		
		case joaat("FM_Hip_F_Tat_047"):
			iVar0 = 105;
			break;
		
		case joaat("FM_Hip_F_Tat_048"):
			iVar0 = 106;
			break;
		
		case joaat("FM_F_Hair_017_a"):
			iVar0 = 107;
			break;
		
		case joaat("FM_F_Hair_017_b"):
			iVar0 = 108;
			break;
		
		case joaat("FM_F_Hair_017_c"):
			iVar0 = 109;
			break;
		
		case joaat("FM_F_Hair_017_d"):
			iVar0 = 110;
			break;
		
		case joaat("FM_F_Hair_017_e"):
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case joaat("FM_F_Hair_019_a"):
			iVar0 = 117;
			break;
		
		case joaat("FM_F_Hair_019_b"):
			iVar0 = 118;
			break;
		
		case joaat("FM_F_Hair_019_c"):
			iVar0 = 119;
			break;
		
		case joaat("FM_F_Hair_019_d"):
			iVar0 = 120;
			break;
		
		case joaat("FM_F_Hair_019_e"):
			iVar0 = 121;
			break;
		
		case joaat("FM_F_Hair_020_a"):
			iVar0 = 122;
			break;
		
		case joaat("FM_F_Hair_020_b"):
			iVar0 = 123;
			break;
		
		case joaat("FM_F_Hair_020_c"):
			iVar0 = 124;
			break;
		
		case joaat("FM_F_Hair_020_d"):
			iVar0 = 125;
			break;
		
		case joaat("FM_F_Hair_020_e"):
			iVar0 = 126;
			break;
		
		case joaat("FM_Hip_F_Hair_000_a"):
			iVar0 = 127;
			break;
		
		case joaat("FM_Hip_F_Hair_000_b"):
			iVar0 = 128;
			break;
		
		case joaat("FM_Hip_F_Hair_000_c"):
			iVar0 = 129;
			break;
		
		case joaat("FM_Hip_F_Hair_000_d"):
			iVar0 = 130;
			break;
		
		case joaat("FM_Hip_F_Hair_000_e"):
			iVar0 = 131;
			break;
		
		case joaat("FM_Hip_F_Tshirt_000"):
			iVar0 = 132;
			break;
		
		case joaat("FM_Hip_F_Tshirt_001"):
			iVar0 = 133;
			break;
		
		case joaat("FM_Hip_F_Tshirt_002"):
			iVar0 = 134;
			break;
		
		case joaat("FM_Hip_F_Tshirt_003"):
			iVar0 = 135;
			break;
		
		case joaat("FM_Hip_F_Tshirt_004"):
			iVar0 = 136;
			break;
		
		case joaat("FM_Hip_F_Tshirt_005"):
			iVar0 = 137;
			break;
		
		case joaat("FM_Hip_F_Tshirt_006"):
			iVar0 = 138;
			break;
		
		case joaat("FM_Hip_F_Tshirt_007"):
			iVar0 = 139;
			break;
		
		case joaat("FM_Hip_F_Tshirt_008"):
			iVar0 = 140;
			break;
		
		case joaat("FM_Hip_F_Tshirt_009"):
			iVar0 = 141;
			break;
		
		case joaat("FM_Hip_F_Tshirt_010"):
			iVar0 = 142;
			break;
		
		case joaat("FM_Hip_F_Tshirt_011"):
			iVar0 = 143;
			break;
		
		case joaat("FM_Hip_F_Tshirt_012"):
			iVar0 = 144;
			break;
		
		case joaat("FM_Hip_F_Tshirt_013"):
			iVar0 = 145;
			break;
		
		case joaat("FM_Hip_F_Tshirt_014"):
			iVar0 = 146;
			break;
		
		case joaat("FM_Hip_F_Tshirt_015"):
			iVar0 = 147;
			break;
		
		case joaat("FM_Hip_F_Tshirt_016"):
			iVar0 = 148;
			break;
		
		case joaat("FM_Hip_F_Tshirt_017"):
			iVar0 = 149;
			break;
		
		case joaat("FM_Hip_F_Tshirt_018"):
			iVar0 = 150;
			break;
		
		case joaat("FM_Hip_F_Tshirt_019"):
			iVar0 = 151;
			break;
		
		case joaat("FM_Hip_F_Tshirt_020"):
			iVar0 = 152;
			break;
		
		case joaat("FM_Hip_F_Tshirt_021"):
			iVar0 = 153;
			break;
		
		case joaat("FM_Hip_F_Tshirt_022"):
			iVar0 = 154;
			break;
		
		case joaat("FM_Hip_F_Retro_000"):
			iVar0 = 155;
			break;
		
		case joaat("FM_Hip_F_Retro_001"):
			iVar0 = 156;
			break;
		
		case joaat("FM_Hip_F_Retro_002"):
			iVar0 = 157;
			break;
		
		case joaat("FM_Hip_F_Retro_003"):
			iVar0 = 158;
			break;
		
		case joaat("FM_Hip_F_Retro_004"):
			iVar0 = 159;
			break;
		
		case joaat("FM_Hip_F_Retro_005"):
			iVar0 = 160;
			break;
		
		case joaat("FM_Hip_F_Retro_006"):
			iVar0 = 161;
			break;
		
		case joaat("FM_Hip_F_Retro_007"):
			iVar0 = 162;
			break;
		
		case joaat("FM_Hip_F_Retro_008"):
			iVar0 = 163;
			break;
		
		case joaat("FM_Hip_F_Retro_009"):
			iVar0 = 164;
			break;
		
		case joaat("FM_Hip_F_Retro_010"):
			iVar0 = 165;
			break;
		
		case joaat("FM_Hip_F_Retro_011"):
			iVar0 = 166;
			break;
		
		case joaat("FM_Hip_F_Retro_012"):
			iVar0 = 167;
			break;
		
		case joaat("FM_Hip_F_Retro_013"):
			iVar0 = 168;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_000"):
			iVar0 = 169;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_001"):
			iVar0 = 170;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_002"):
			iVar0 = 171;
			break;
		
		case joaat("FM_Ind_F_Tshirt_000"):
			iVar0 = 172;
			break;
		
		case joaat("FM_Ind_F_Tshirt_001"):
			iVar0 = 173;
			break;
		
		case joaat("FM_Ind_F_Tshirt_002"):
			iVar0 = 174;
			break;
		
		case joaat("FM_Ind_F_Tshirt_003"):
			iVar0 = 175;
			break;
		
		case joaat("FM_Ind_F_Tshirt_004"):
			iVar0 = 176;
			break;
		
		case joaat("FM_Ind_F_Tshirt_005"):
			iVar0 = 177;
			break;
		
		case joaat("FM_Ind_F_Tshirt_007"):
			iVar0 = 178;
			break;
		
		case joaat("FM_Ind_F_Tshirt_008"):
			iVar0 = 179;
			break;
		
		case joaat("FM_Ind_F_Tshirt_009"):
			iVar0 = 180;
			break;
		
		case joaat("FM_Ind_F_Tshirt_010"):
			iVar0 = 181;
			break;
		
		case joaat("FM_Ind_F_Tshirt_011"):
			iVar0 = 182;
			break;
		
		case joaat("FM_Ind_F_Tshirt_012"):
			iVar0 = 183;
			break;
		
		case joaat("FM_Ind_F_Tshirt_013"):
			iVar0 = 184;
			break;
		
		case joaat("FM_Ind_F_Tshirt_014"):
			iVar0 = 185;
			break;
		
		case joaat("FM_Ind_F_Tshirt_015"):
			iVar0 = 186;
			break;
		
		case joaat("FM_Ind_F_Tshirt_017"):
			iVar0 = 187;
			break;
		
		case joaat("FM_Ind_F_Tshirt_019"):
			iVar0 = 188;
			break;
		
		case joaat("FM_Ind_F_Tshirt_020"):
			iVar0 = 189;
			break;
		
		case joaat("FM_Ind_F_Tshirt_021"):
			iVar0 = 190;
			break;
		
		case joaat("FM_Ind_F_Tshirt_022"):
			iVar0 = 191;
			break;
		
		case joaat("FM_Ind_F_Tshirt_023"):
			iVar0 = 192;
			break;
		
		case joaat("FM_Ind_F_Tshirt_024"):
			iVar0 = 193;
			break;
		
		case joaat("FM_Ind_F_Tshirt_025"):
			iVar0 = 194;
			break;
		
		case joaat("FM_Ind_F_Tshirt_026"):
			iVar0 = 195;
			break;
		
		case joaat("FM_Ind_F_Award_000"):
			iVar0 = 196;
			break;
		
		case joaat("MP_Fli_F_Tshirt_000"):
			iVar0 = 197;
			break;
		
		case joaat("FM_LTS_F_Tshirt_000"):
			iVar0 = 198;
			break;
		
		case joaat("MP_FM_OGA_000_f"):
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_FM_OGA_001_f"):
			iVar0 = 200;
			break;
		
		case joaat("MP_FM_OGA_002_f"):
			iVar0 = 201;
			break;
		
		case joaat("MP_FM_OGA_003_f"):
			iVar0 = 202;
			break;
		
		case joaat("NG_F_Hair_001"):
			iVar0 = 203;
			break;
		
		case joaat("NG_F_Hair_002"):
			iVar0 = 204;
			break;
		
		case joaat("NG_F_Hair_003"):
			iVar0 = 205;
			break;
		
		case joaat("NG_F_Hair_004"):
			iVar0 = 206;
			break;
		
		case joaat("NG_F_Hair_005"):
			iVar0 = 207;
			break;
		
		case joaat("NG_F_Hair_006"):
			iVar0 = 208;
			break;
		
		case joaat("NG_F_Hair_007"):
			iVar0 = 209;
			break;
		
		case joaat("NG_F_Hair_008"):
			iVar0 = 210;
			break;
		
		case joaat("NG_F_Hair_009"):
			iVar0 = 211;
			break;
		
		case joaat("NG_F_Hair_010"):
			iVar0 = 212;
			break;
		
		case joaat("NG_F_Hair_011"):
			iVar0 = 213;
			break;
		
		case joaat("NG_F_Hair_012"):
			iVar0 = 214;
			break;
		
		case joaat("NG_F_Hair_013"):
			iVar0 = 215;
			break;
		
		case joaat("NG_F_Hair_014"):
			iVar0 = 216;
			break;
		
		case joaat("NG_F_Hair_015"):
			iVar0 = 217;
			break;
		
		case joaat("NGBea_F_Hair_000"):
			iVar0 = 218;
			break;
		
		case joaat("NGBea_F_Hair_001"):
			iVar0 = 219;
			break;
		
		case joaat("NGBus_F_Hair_000"):
			iVar0 = 220;
			break;
		
		case joaat("NGBus_F_Hair_001"):
			iVar0 = 221;
			break;
		
		case joaat("NGHip_F_Hair_000"):
			iVar0 = 222;
			break;
		
		case joaat("NGHip_F_Hair_001"):
			iVar0 = 223;
			break;
		
		case joaat("NGInd_F_Hair_000"):
			iVar0 = 224;
			break;
		
		case joaat("MP_Xmas2_F_Tat_000"):
			iVar0 = 225;
			break;
		
		case joaat("MP_Xmas2_F_Tat_001"):
			iVar0 = 226;
			break;
		
		case joaat("MP_Xmas2_F_Tat_002"):
			iVar0 = 227;
			break;
		
		case joaat("MP_Xmas2_F_Tat_003"):
			iVar0 = 228;
			break;
		
		case joaat("MP_Xmas2_F_Tat_004"):
			iVar0 = 229;
			break;
		
		case joaat("MP_Xmas2_F_Tat_005"):
			iVar0 = 230;
			break;
		
		case joaat("MP_Xmas2_F_Tat_006"):
			iVar0 = 231;
			break;
		
		case joaat("MP_Xmas2_F_Tat_007"):
			iVar0 = 232;
			break;
		
		case joaat("MP_Xmas2_F_Tat_008"):
			iVar0 = 233;
			break;
		
		case joaat("MP_Xmas2_F_Tat_009"):
			iVar0 = 234;
			break;
		
		case joaat("MP_Xmas2_F_Tat_010"):
			iVar0 = 235;
			break;
		
		case joaat("MP_Xmas2_F_Tat_011"):
			iVar0 = 236;
			break;
		
		case joaat("MP_Xmas2_F_Tat_012"):
			iVar0 = 237;
			break;
		
		case joaat("MP_Xmas2_F_Tat_013"):
			iVar0 = 238;
			break;
		
		case joaat("MP_Xmas2_F_Tat_014"):
			iVar0 = 239;
			break;
		
		case joaat("MP_Xmas2_F_Tat_015"):
			iVar0 = 240;
			break;
		
		case joaat("MP_Xmas2_F_Tat_016"):
			iVar0 = 241;
			break;
		
		case joaat("MP_Xmas2_F_Tat_017"):
			iVar0 = 242;
			break;
		
		case joaat("MP_Xmas2_F_Tat_018"):
			iVar0 = 243;
			break;
		
		case joaat("MP_Xmas2_F_Tat_019"):
			iVar0 = 244;
			break;
		
		case joaat("MP_Xmas2_F_Tat_020"):
			iVar0 = 245;
			break;
		
		case joaat("MP_Xmas2_F_Tat_021"):
			iVar0 = 246;
			break;
		
		case joaat("MP_Xmas2_F_Tat_022"):
			iVar0 = 247;
			break;
		
		case joaat("MP_Xmas2_F_Tat_023"):
			iVar0 = 248;
			break;
		
		case joaat("MP_Xmas2_F_Tat_024"):
			iVar0 = 249;
			break;
		
		case joaat("MP_Xmas2_F_Tat_025"):
			iVar0 = 250;
			break;
		
		case joaat("MP_Xmas2_F_Tat_026"):
			iVar0 = 251;
			break;
		
		case joaat("MP_Xmas2_F_Tat_027"):
			iVar0 = 252;
			break;
		
		case joaat("MP_Xmas2_F_Tat_028"):
			iVar0 = 253;
			break;
		
		case joaat("MP_Xmas2_F_Tat_029"):
			iVar0 = 254;
			break;
		
		case joaat("MP_Award_F_Tshirt_004"):
			iVar0 = 255;
			break;
		
		case joaat("MP_Award_F_Tshirt_005"):
			iVar0 = 256;
			break;
		
		case joaat("MP_Award_F_Tshirt_006"):
			iVar0 = 257;
			break;
		
		case joaat("MP_Award_F_Tshirt_007"):
			iVar0 = 258;
			break;
		
		case joaat("MP_Award_F_Tshirt_008"):
			iVar0 = 259;
			break;
		
		case joaat("MP_Award_F_Tshirt_009"):
			iVar0 = 260;
			break;
		
		case joaat("MP_Award_F_Tshirt_010"):
			iVar0 = 261;
			break;
		
		case joaat("MP_Award_F_Tshirt_011"):
			iVar0 = 262;
			break;
		
		case joaat("MP_Award_F_Tshirt_012"):
			iVar0 = 263;
			break;
		
		case joaat("MP_Award_F_Tshirt_013"):
			iVar0 = 264;
			break;
		
		case joaat("MP_Bugstar_A"):
			iVar0 = 265;
			break;
		
		case joaat("MP_Bugstar_B"):
			iVar0 = 266;
			break;
		
		case joaat("MP_Bugstar_C"):
			iVar0 = 267;
			break;
		
		case joaat("MP_Rogers_A"):
			iVar0 = 268;
			break;
		
		case joaat("MP_Rogers_B"):
			iVar0 = 269;
			break;
		
		case joaat("MP_Als_A"):
			iVar0 = 270;
			break;
		
		case joaat("MP_Als_B"):
			iVar0 = 271;
			break;
		
		case joaat("MP_Power_A"):
			iVar0 = 272;
			break;
		
		case joaat("MP_Power_B"):
			iVar0 = 273;
			break;
		
		case joaat("MP_Elite_F_Tshirt"):
			iVar0 = 274;
			break;
		
		case joaat("MP_Elite_F_Tshirt_1"):
			iVar0 = 275;
			break;
		
		case joaat("MP_Elite_F_Tshirt_2"):
			iVar0 = 276;
			break;
		
		case joaat("MP_FAKE_DIS_000_F"):
			iVar0 = 277;
			break;
		
		case joaat("MP_FAKE_DIS_001_F"):
			iVar0 = 278;
			break;
		
		case joaat("MP_FAKE_DS_000_F"):
			iVar0 = 279;
			break;
		
		case joaat("MP_FAKE_ENEMA_000_F"):
			iVar0 = 280;
			break;
		
		case joaat("MP_FAKE_LB_000_F"):
			iVar0 = 281;
			break;
		
		case joaat("MP_FAKE_LC_000_F"):
			iVar0 = 282;
			break;
		
		case joaat("MP_FAKE_SC_000_F"):
			iVar0 = 283;
			break;
		
		case joaat("MP_FAKE_Vap_000_F"):
			iVar0 = 284;
			break;
		
		case joaat("MP_FAKE_Per_000_F"):
			iVar0 = 285;
			break;
		
		case joaat("MP_FAKE_SN_000_F"):
			iVar0 = 286;
			break;
		
		case joaat("MP_LUXE_Per_001_F"):
			iVar0 = 287;
			break;
		
		case joaat("MP_LUXE_SN_003_F"):
			iVar0 = 288;
			break;
		
		case joaat("MP_LUXE_SN_007_F"):
			iVar0 = 289;
			break;
		
		case joaat("MP_LUXE_SN_004_F"):
			iVar0 = 290;
			break;
		
		case joaat("MP_LUXE_SN_001_F"):
			iVar0 = 291;
			break;
		
		case joaat("MP_LUXE_SN_000_F"):
			iVar0 = 292;
			break;
		
		case joaat("MP_LUXE_DIX_000_F"):
			iVar0 = 293;
			break;
		
		case joaat("MP_LUXE_DIX_001_F"):
			iVar0 = 294;
			break;
		
		case joaat("MP_LUXE_DIX_002_F"):
			iVar0 = 295;
			break;
		
		case joaat("MP_LUXE_ENEMA_000_F"):
			iVar0 = 296;
			break;
		
		case joaat("MP_LUXE_SC_000_F"):
			iVar0 = 297;
			break;
		
		case joaat("MP_LUXE_LC_010_F"):
			iVar0 = 298;
			break;
		
		case joaat("MP_LUXE_LC_011_F"):
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_LUXE_SN_002_F"):
			iVar0 = 303;
			break;
		
		case joaat("MP_LUXE_TAT_000_F"):
			iVar0 = 304;
			break;
		
		case joaat("MP_LUXE_TAT_001_F"):
			iVar0 = 305;
			break;
		
		case joaat("MP_LUXE_TAT_003_F"):
			iVar0 = 306;
			break;
		
		case joaat("MP_LUXE_TAT_004_F"):
			iVar0 = 307;
			break;
		
		case joaat("MP_LUXE_TAT_006_F"):
			iVar0 = 308;
			break;
		
		case joaat("MP_LUXE_TAT_007_F"):
			iVar0 = 309;
			break;
		
		case joaat("MP_LUXE_TAT_008_F"):
			iVar0 = 310;
			break;
		
		case joaat("MP_LUXE_TAT_009_F"):
			iVar0 = 311;
			break;
		
		case joaat("MP_LUXE_TAT_013_F"):
			iVar0 = 312;
			break;
		
		case joaat("MP_LUXE_TAT_014_F"):
			iVar0 = 313;
			break;
		
		case joaat("MP_LUXE_TAT_015_F"):
			iVar0 = 314;
			break;
		
		case joaat("MP_LUXE_TAT_019_F"):
			iVar0 = 315;
			break;
		
		case joaat("MP_LUXE_TAT_020_F"):
			iVar0 = 316;
			break;
		
		case joaat("MP_LUXE_TAT_021_F"):
			iVar0 = 317;
			break;
		
		case joaat("MP_LUXE_TAT_024_F"):
			iVar0 = 318;
			break;
		
		case joaat("MP_FILM_000_F"):
			iVar0 = 319;
			break;
		
		case joaat("MP_FILM_001_F"):
			iVar0 = 320;
			break;
		
		case joaat("MP_FILM_002_F"):
			iVar0 = 321;
			break;
		
		case joaat("MP_FILM_003_F"):
			iVar0 = 322;
			break;
		
		case joaat("MP_FILM_004_F"):
			iVar0 = 323;
			break;
		
		case joaat("MP_FILM_005_F"):
			iVar0 = 324;
			break;
		
		case joaat("MP_FILM_006_F"):
			iVar0 = 325;
			break;
		
		case joaat("MP_FILM_007_F"):
			iVar0 = 326;
			break;
		
		case joaat("MP_FILM_008_F"):
			iVar0 = 327;
			break;
		
		case joaat("MP_FILM_009_F"):
			iVar0 = 328;
			break;
		
		case joaat("MP_LUXE_TAT_002_F"):
			iVar0 = 329;
			break;
		
		case joaat("MP_LUXE_TAT_005_F"):
			iVar0 = 330;
			break;
		
		case joaat("MP_LUXE_TAT_010_F"):
			iVar0 = 331;
			break;
		
		case joaat("MP_LUXE_TAT_011_F"):
			iVar0 = 332;
			break;
		
		case joaat("MP_LUXE_TAT_012_F"):
			iVar0 = 333;
			break;
		
		case joaat("MP_LUXE_TAT_016_F"):
			iVar0 = 334;
			break;
		
		case joaat("MP_LUXE_TAT_017_F"):
			iVar0 = 335;
			break;
		
		case joaat("MP_LUXE_TAT_018_F"):
			iVar0 = 336;
			break;
		
		case joaat("MP_LUXE_TAT_022_F"):
			iVar0 = 337;
			break;
		
		case joaat("MP_LUXE_TAT_023_F"):
			iVar0 = 338;
			break;
		
		case joaat("MP_LUXE_TAT_025_F"):
			iVar0 = 339;
			break;
		
		case joaat("MP_LUXE_TAT_026_F"):
			iVar0 = 340;
			break;
		
		case joaat("MP_LUXE_TAT_027_F"):
			iVar0 = 341;
			break;
		
		case joaat("MP_LUXE_TAT_028_F"):
			iVar0 = 342;
			break;
		
		case joaat("MP_LUXE_TAT_029_F"):
			iVar0 = 343;
			break;
		
		case joaat("MP_LUXE_TAT_030_F"):
			iVar0 = 344;
			break;
		
		case joaat("MP_LUXE_TAT_031_F"):
			iVar0 = 345;
			break;
		
		case joaat("MP_LUXE_VDG_000_F"):
			iVar0 = 346;
			break;
		
		case joaat("MP_LUXE_VDG_001_F"):
			iVar0 = 347;
			break;
		
		case joaat("MP_LUXE_VDG_002_F"):
			iVar0 = 348;
			break;
		
		case joaat("MP_LUXE_VDG_004_F"):
			iVar0 = 349;
			break;
		
		case joaat("MP_LUXE_VDG_005_F"):
			iVar0 = 350;
			break;
		
		case joaat("MP_LUXE_VDG_006_F"):
			iVar0 = 351;
			break;
		
		case joaat("MP_LUXE_LC_000_F"):
			iVar0 = 352;
			break;
		
		case joaat("MP_LUXE_LC_001_F"):
			iVar0 = 353;
			break;
		
		case joaat("MP_LUXE_LC_002_F"):
			iVar0 = 354;
			break;
		
		case joaat("MP_LUXE_LC_003_F"):
			iVar0 = 355;
			break;
		
		case joaat("MP_LUXE_LC_006_F"):
			iVar0 = 356;
			break;
		
		case joaat("MP_LUXE_LC_007_F"):
			iVar0 = 357;
			break;
		
		case joaat("MP_LUXE_LC_008_F"):
			iVar0 = 358;
			break;
		
		case joaat("MP_LUXE_LC_009_F"):
			iVar0 = 359;
			break;
		
		case joaat("MP_LUXE_LC_012_F"):
			iVar0 = 360;
			break;
		
		case joaat("MP_LUXE_LC_013_F"):
			iVar0 = 361;
			break;
		
		case joaat("MP_LUXE_LC_014_F"):
			iVar0 = 362;
			break;
		
		case joaat("MP_LUXE_LC_015_F"):
			iVar0 = 363;
			break;
		
		case joaat("MP_LR_Tat_001_F"):
			iVar0 = 364;
			break;
		
		case joaat("MP_LR_Tat_002_F"):
			iVar0 = 365;
			break;
		
		case joaat("MP_LR_Tat_004_F"):
			iVar0 = 366;
			break;
		
		case joaat("MP_LR_Tat_005_F"):
			iVar0 = 367;
			break;
		
		case joaat("MP_LR_Tat_007_F"):
			iVar0 = 368;
			break;
		
		case joaat("MP_LR_Tat_009_F"):
			iVar0 = 369;
			break;
		
		case joaat("MP_LR_Tat_010_F"):
			iVar0 = 370;
			break;
		
		case joaat("MP_LR_Tat_013_F"):
			iVar0 = 371;
			break;
		
		case joaat("MP_LR_Tat_014_F"):
			iVar0 = 372;
			break;
		
		case joaat("MP_LR_Tat_015_F"):
			iVar0 = 373;
			break;
		
		case joaat("MP_LR_Tat_017_F"):
			iVar0 = 374;
			break;
		
		case joaat("MP_LR_Tat_020_F"):
			iVar0 = 375;
			break;
		
		case joaat("MP_LR_Tat_021_F"):
			iVar0 = 376;
			break;
		
		case joaat("MP_LR_Tat_023_F"):
			iVar0 = 377;
			break;
		
		case joaat("MP_LR_Tat_026_F"):
			iVar0 = 378;
			break;
		
		case joaat("MP_LR_Tat_027_F"):
			iVar0 = 379;
			break;
		
		case joaat("MP_LR_Tat_033_F"):
			iVar0 = 380;
			break;
		
		case joaat("MP_Broker_000_F"):
			iVar0 = 381;
			break;
		
		case joaat("MP_Broker_001_F"):
			iVar0 = 382;
			break;
		
		case joaat("MP_Broker_002_F"):
			iVar0 = 383;
			break;
		
		case joaat("MP_Broker_003_F"):
			iVar0 = 384;
			break;
		
		case joaat("MP_Magnetics_000_F"):
			iVar0 = 385;
			break;
		
		case joaat("MP_Magnetics_005_F"):
			iVar0 = 386;
			break;
		
		case joaat("MP_Broker_004_F"):
			iVar0 = 387;
			break;
		
		case joaat("MP_Broker_005_F"):
			iVar0 = 388;
			break;
		
		case joaat("MP_Magnetics_001_F"):
			iVar0 = 389;
			break;
		
		case joaat("MP_Magnetics_002_F"):
			iVar0 = 390;
			break;
		
		case joaat("MP_Magnetics_003_F"):
			iVar0 = 391;
			break;
		
		case joaat("MP_Magnetics_004_F"):
			iVar0 = 392;
			break;
		
		case joaat("MP_Trickster_000_F"):
			iVar0 = 393;
			break;
		
		case joaat("MP_Trickster_002_F"):
			iVar0 = 394;
			break;
		
		case joaat("MP_Trickster_004_F"):
			iVar0 = 395;
			break;
		
		case joaat("MP_Trickster_006_F"):
			iVar0 = 396;
			break;
		
		case joaat("MP_Trickster_010_F"):
			iVar0 = 397;
			break;
		
		case joaat("MP_Trickster_001_F"):
			iVar0 = 398;
			break;
		
		case joaat("MP_Trickster_003_F"):
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Trickster_005_F"):
			iVar0 = 400;
			break;
		
		case joaat("MP_Trickster_007_F"):
			iVar0 = 401;
			break;
		
		case joaat("Blank_TuckedTShirt_0"):
			iVar0 = 402;
			break;
		
		case joaat("Blank_TuckedTShirt_1"):
			iVar0 = 403;
			break;
		
		case joaat("Blank_TuckedTShirt_2"):
			iVar0 = 404;
			break;
		
		case joaat("Blank_FSportsSweater_0"):
			iVar0 = 405;
			break;
		
		case joaat("Blank_FSportsSweater_1"):
			iVar0 = 406;
			break;
		
		case joaat("Blank_FSportsSweater_2"):
			iVar0 = 407;
			break;
		
		case joaat("Blank_FSportsSweater_3"):
			iVar0 = 408;
			break;
		
		case joaat("LR_F_Hair_000"):
			iVar0 = 409;
			break;
		
		case joaat("LR_F_Hair_001"):
			iVar0 = 410;
			break;
		
		case joaat("LR_F_Hair_002"):
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case joaat("MP_Bennys_000_F"):
			iVar0 = 413;
			break;
		
		case joaat("MP_Bennys_001_F"):
			iVar0 = 414;
			break;
		
		case joaat("HW_Tee_000_F"):
			iVar0 = 415;
			break;
		
		case joaat("HW_Tee_001_F"):
			iVar0 = 416;
			break;
		
		case joaat("HW_Tee_002_F"):
			iVar0 = 417;
			break;
		
		case joaat("HW_Tee_003_F"):
			iVar0 = 418;
			break;
		
		case joaat("HW_Tee_004_F"):
			iVar0 = 419;
			break;
		
		case joaat("HW_Tee_005_F"):
			iVar0 = 420;
			break;
		
		case joaat("HW_Tee_006_F"):
			iVar0 = 421;
			break;
		
		case joaat("HW_Tee_007_F"):
			iVar0 = 422;
			break;
		
		case joaat("HW_Tee_008_F"):
			iVar0 = 423;
			break;
		
		case joaat("HW_Tee_009_F"):
			iVar0 = 424;
			break;
		
		case joaat("HW_Tee_010_F"):
			iVar0 = 425;
			break;
		
		case joaat("HW_Tee_011_F"):
			iVar0 = 426;
			break;
		
		case joaat("HW_Tee_012_F"):
			iVar0 = 427;
			break;
		
		case joaat("MP_IHeartLC_001_F"):
			iVar0 = 428;
			break;
		
		case joaat("MP_LR_Tat_000_F"):
			iVar0 = 429;
			break;
		
		case joaat("MP_LR_Tat_003_F"):
			iVar0 = 430;
			break;
		
		case joaat("MP_LR_Tat_006_F"):
			iVar0 = 431;
			break;
		
		case joaat("MP_LR_Tat_008_F"):
			iVar0 = 432;
			break;
		
		case joaat("MP_LR_Tat_011_F"):
			iVar0 = 433;
			break;
		
		case joaat("MP_LR_Tat_012_F"):
			iVar0 = 434;
			break;
		
		case joaat("MP_LR_Tat_016_F"):
			iVar0 = 435;
			break;
		
		case joaat("MP_LR_Tat_018_F"):
			iVar0 = 436;
			break;
		
		case joaat("MP_LR_Tat_019_F"):
			iVar0 = 437;
			break;
		
		case joaat("MP_LR_Tat_022_F"):
			iVar0 = 438;
			break;
		
		case joaat("MP_LR_Tat_028_F"):
			iVar0 = 439;
			break;
		
		case joaat("MP_LR_Tat_029_F"):
			iVar0 = 440;
			break;
		
		case joaat("MP_LR_Tat_030_F"):
			iVar0 = 441;
			break;
		
		case joaat("MP_LR_Tat_031_F"):
			iVar0 = 442;
			break;
		
		case joaat("MP_LR_Tat_032_F"):
			iVar0 = 443;
			break;
		
		case joaat("MP_LR_Tat_035_F"):
			iVar0 = 444;
			break;
		
		case joaat("Blank_RolledTShirt_0"):
			iVar0 = 445;
			break;
		
		case joaat("Blank_RolledTShirt_1"):
			iVar0 = 446;
			break;
		
		case joaat("Blank_RolledTShirt_2"):
			iVar0 = 447;
			break;
		
		case joaat("Blank_Sports_F_0"):
			iVar0 = 448;
			break;
		
		case joaat("Blank_Sports_F_1"):
			iVar0 = 449;
			break;
		
		case joaat("Blank_Sports_F_2"):
			iVar0 = 450;
			break;
		
		case joaat("MP_Chianski_000_F"):
			iVar0 = 451;
			break;
		
		case joaat("MP_Chianski_001_F"):
			iVar0 = 452;
			break;
		
		case joaat("MP_Chianski_002_F"):
			iVar0 = 453;
			break;
		
		case joaat("MP_Chianski_003_F"):
			iVar0 = 454;
			break;
		
		case joaat("MP_Chianski_004_F"):
			iVar0 = 455;
			break;
		
		case joaat("MP_Chianski_005_F"):
			iVar0 = 456;
			break;
		
		case joaat("MP_Chianski_006_F"):
			iVar0 = 457;
			break;
		
		case joaat("MP_Hntr_001_F"):
			iVar0 = 458;
			break;
		
		case joaat("MP_Hntr_005_F"):
			iVar0 = 459;
			break;
		
		case joaat("MP_Hntr_010_F"):
			iVar0 = 460;
			break;
		
		case joaat("MP_Hntr_011_F"):
			iVar0 = 461;
			break;
		
		case joaat("MP_Dense_000_F"):
			iVar0 = 462;
			break;
		
		case joaat("MP_Dense_001_F"):
			iVar0 = 463;
			break;
		
		case joaat("MP_Dense_002_F"):
			iVar0 = 464;
			break;
		
		case joaat("MP_Dense_003_F"):
			iVar0 = 465;
			break;
		
		case joaat("MP_Dense_004_F"):
			iVar0 = 466;
			break;
		
		case joaat("MP_Dense_005_F"):
			iVar0 = 467;
			break;
		
		case joaat("MP_Dense_006_F"):
			iVar0 = 468;
			break;
		
		case joaat("MP_Dense_007_F"):
			iVar0 = 469;
			break;
		
		case joaat("MP_Hntr_000_F"):
			iVar0 = 470;
			break;
		
		case joaat("MP_Hntr_002_F"):
			iVar0 = 471;
			break;
		
		case joaat("MP_Hntr_003_F"):
			iVar0 = 472;
			break;
		
		case joaat("MP_Hntr_004_F"):
			iVar0 = 473;
			break;
		
		case joaat("MP_Hntr_006_F"):
			iVar0 = 474;
			break;
		
		case joaat("MP_Hntr_007_F"):
			iVar0 = 475;
			break;
		
		case joaat("MP_Hntr_008_F"):
			iVar0 = 476;
			break;
		
		case joaat("MP_Hntr_009_F"):
			iVar0 = 477;
			break;
		
		case joaat("MP_Hntr_012_F"):
			iVar0 = 478;
			break;
		
		case joaat("LR_F_Hair_003"):
			iVar0 = 479;
			break;
		
		case joaat("LR_F_Hair_004"):
			iVar0 = 480;
			break;
		
		case joaat("LR_F_Hair_006"):
			iVar0 = 481;
			break;
		
		case joaat("MP_Securoserv_000_F"):
			iVar0 = 482;
			break;
		
		case joaat("MP_Securoserv_000_Fb"):
			iVar0 = 483;
			break;
		
		case joaat("MP_exec_teams_000_F"):
			iVar0 = 484;
			break;
		
		case joaat("MP_exec_teams_001_F"):
			iVar0 = 485;
			break;
		
		case joaat("MP_exec_teams_002_F"):
			iVar0 = 486;
			break;
		
		case joaat("MP_exec_teams_003_F"):
			iVar0 = 487;
			break;
		
		case joaat("MP_exec_prizes_000_F"):
			iVar0 = 488;
			break;
		
		case joaat("MP_exec_prizes_001_F"):
			iVar0 = 489;
			break;
		
		case joaat("MP_exec_prizes_002_F"):
			iVar0 = 490;
			break;
		
		case joaat("MP_exec_prizes_003_F"):
			iVar0 = 491;
			break;
		
		case joaat("MP_exec_prizes_004_F"):
			iVar0 = 492;
			break;
		
		case joaat("MP_exec_prizes_005_F"):
			iVar0 = 493;
			break;
		
		case joaat("MP_exec_prizes_006_F"):
			iVar0 = 494;
			break;
		
		case joaat("MP_exec_prizes_007_F"):
			iVar0 = 495;
			break;
		
		case joaat("MP_exec_prizes_008_F"):
			iVar0 = 496;
			break;
		
		case joaat("MP_exec_prizes_009_F"):
			iVar0 = 497;
			break;
		
		case joaat("MP_exec_prizes_010_F"):
			iVar0 = 498;
			break;
		
		case joaat("MP_exec_prizes_011_F"):
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_exec_prizes_012_F"):
			iVar0 = 500;
			break;
		
		case joaat("MP_exec_prizes_013_F"):
			iVar0 = 501;
			break;
		
		case joaat("MP_exec_prizes_014_F"):
			iVar0 = 502;
			break;
		
		case joaat("MP_exec_prizes_015_F"):
			iVar0 = 503;
			break;
		
		case joaat("MP_MP_Stunt_Tat_000_F"):
			iVar0 = 504;
			break;
		
		case joaat("MP_MP_Stunt_tat_001_F"):
			iVar0 = 505;
			break;
		
		case joaat("MP_MP_Stunt_tat_002_F"):
			iVar0 = 506;
			break;
		
		case joaat("MP_MP_Stunt_tat_003_F"):
			iVar0 = 507;
			break;
		
		case joaat("MP_MP_Stunt_tat_004_F"):
			iVar0 = 508;
			break;
		
		case joaat("MP_MP_Stunt_tat_005_F"):
			iVar0 = 509;
			break;
		
		case joaat("MP_MP_Stunt_tat_006_F"):
			iVar0 = 510;
			break;
		
		case joaat("MP_MP_Stunt_tat_007_F"):
			iVar0 = 511;
			break;
		
		case joaat("MP_MP_Stunt_tat_008_F"):
			iVar0 = 512;
			break;
		
		case joaat("MP_MP_Stunt_tat_009_F"):
			iVar0 = 513;
			break;
		
		case joaat("MP_MP_Stunt_tat_010_F"):
			iVar0 = 514;
			break;
		
		case joaat("MP_MP_Stunt_tat_011_F"):
			iVar0 = 515;
			break;
		
		case joaat("MP_MP_Stunt_tat_012_F"):
			iVar0 = 516;
			break;
		
		case joaat("MP_MP_Stunt_tat_013_F"):
			iVar0 = 517;
			break;
		
		case joaat("MP_MP_Stunt_tat_014_F"):
			iVar0 = 518;
			break;
		
		case joaat("MP_MP_Stunt_tat_015_F"):
			iVar0 = 519;
			break;
		
		case joaat("MP_MP_Stunt_tat_016_F"):
			iVar0 = 520;
			break;
		
		case joaat("MP_MP_Stunt_tat_017_F"):
			iVar0 = 521;
			break;
		
		case joaat("MP_MP_Stunt_tat_018_F"):
			iVar0 = 522;
			break;
		
		case joaat("MP_MP_Stunt_tat_019_F"):
			iVar0 = 523;
			break;
		
		case joaat("MP_MP_Stunt_tat_020_F"):
			iVar0 = 524;
			break;
		
		case joaat("MP_MP_Stunt_tat_021_F"):
			iVar0 = 525;
			break;
		
		case joaat("MP_MP_Stunt_tat_022_F"):
			iVar0 = 526;
			break;
		
		case joaat("MP_MP_Stunt_tat_023_F"):
			iVar0 = 527;
			break;
		
		case joaat("MP_MP_Stunt_tat_024_F"):
			iVar0 = 528;
			break;
		
		case joaat("MP_MP_Stunt_tat_025_F"):
			iVar0 = 529;
			break;
		
		case joaat("MP_MP_Stunt_tat_026_F"):
			iVar0 = 530;
			break;
		
		case joaat("MP_MP_Stunt_tat_027_F"):
			iVar0 = 531;
			break;
		
		case joaat("MP_MP_Stunt_tat_028_F"):
			iVar0 = 532;
			break;
		
		case joaat("MP_MP_Stunt_tat_029_F"):
			iVar0 = 533;
			break;
		
		case joaat("MP_MP_Stunt_tat_030_F"):
			iVar0 = 534;
			break;
		
		case joaat("MP_MP_Stunt_tat_031_F"):
			iVar0 = 535;
			break;
		
		case joaat("MP_MP_Stunt_tat_032_F"):
			iVar0 = 536;
			break;
		
		case joaat("MP_MP_Stunt_tat_033_F"):
			iVar0 = 537;
			break;
		
		case joaat("MP_MP_Stunt_tat_034_F"):
			iVar0 = 538;
			break;
		
		case joaat("MP_MP_Stunt_tat_035_F"):
			iVar0 = 539;
			break;
		
		case joaat("MP_MP_Stunt_tat_036_F"):
			iVar0 = 540;
			break;
		
		case joaat("MP_MP_Stunt_tat_037_F"):
			iVar0 = 541;
			break;
		
		case joaat("MP_MP_Stunt_tat_038_F"):
			iVar0 = 542;
			break;
		
		case joaat("MP_MP_Stunt_tat_039_F"):
			iVar0 = 543;
			break;
		
		case joaat("MP_MP_Stunt_tat_040_F"):
			iVar0 = 544;
			break;
		
		case joaat("MP_MP_Stunt_tat_041_F"):
			iVar0 = 545;
			break;
		
		case joaat("MP_MP_Stunt_tat_042_F"):
			iVar0 = 546;
			break;
		
		case joaat("MP_MP_Stunt_tat_043_F"):
			iVar0 = 547;
			break;
		
		case joaat("MP_MP_Stunt_tat_044_F"):
			iVar0 = 548;
			break;
		
		case joaat("MP_MP_Stunt_tat_045_F"):
			iVar0 = 549;
			break;
		
		case joaat("MP_MP_Stunt_tat_046_F"):
			iVar0 = 550;
			break;
		
		case joaat("MP_MP_Stunt_tat_047_F"):
			iVar0 = 551;
			break;
		
		case joaat("MP_MP_Stunt_tat_048_F"):
			iVar0 = 552;
			break;
		
		case joaat("MP_MP_Stunt_tat_049_F"):
			iVar0 = 553;
			break;
		
		case joaat("MP_MP_Biker_Tat_000_F"):
			iVar0 = 554;
			break;
		
		case joaat("MP_MP_Biker_Tat_001_F"):
			iVar0 = 555;
			break;
		
		case joaat("MP_Biker_Hair_000_F"):
			iVar0 = 556;
			break;
		
		case joaat("MP_Biker_Hair_001_F"):
			iVar0 = 557;
			break;
		
		case joaat("MP_Biker_Hair_002_F"):
			iVar0 = 558;
			break;
		
		case joaat("MP_MP_Biker_Tat_002_F"):
			iVar0 = 559;
			break;
		
		case joaat("MP_MP_Biker_Tat_003_F"):
			iVar0 = 560;
			break;
		
		case joaat("MP_MP_Biker_Tat_004_F"):
			iVar0 = 561;
			break;
		
		case joaat("MP_MP_Biker_Tat_005_F"):
			iVar0 = 562;
			break;
		
		case joaat("MP_MP_Biker_Tat_006_F"):
			iVar0 = 563;
			break;
		
		case joaat("MP_MP_Biker_Tat_007_F"):
			iVar0 = 564;
			break;
		
		case joaat("MP_MP_Biker_Tat_008_F"):
			iVar0 = 565;
			break;
		
		case joaat("MP_MP_Biker_Tat_009_F"):
			iVar0 = 566;
			break;
		
		case joaat("MP_MP_Biker_Tat_010_F"):
			iVar0 = 567;
			break;
		
		case joaat("MP_MP_Biker_Tat_011_F"):
			iVar0 = 568;
			break;
		
		case joaat("MP_MP_Biker_Tat_012_F"):
			iVar0 = 569;
			break;
		
		case joaat("MP_MP_Biker_Tat_013_F"):
			iVar0 = 570;
			break;
		
		case joaat("MP_MP_Biker_Tat_014_F"):
			iVar0 = 571;
			break;
		
		case joaat("MP_MP_Biker_Tat_015_F"):
			iVar0 = 572;
			break;
		
		case joaat("MP_MP_Biker_Tat_016_F"):
			iVar0 = 573;
			break;
		
		case joaat("MP_MP_Biker_Tat_017_F"):
			iVar0 = 574;
			break;
		
		case joaat("MP_MP_Biker_Tat_018_F"):
			iVar0 = 575;
			break;
		
		case joaat("MP_MP_Biker_Tat_019_F"):
			iVar0 = 576;
			break;
		
		case joaat("MP_MP_Biker_Tat_020_F"):
			iVar0 = 577;
			break;
		
		case joaat("MP_MP_Biker_Tat_021_F"):
			iVar0 = 578;
			break;
		
		case joaat("MP_MP_Biker_Tat_022_F"):
			iVar0 = 579;
			break;
		
		case joaat("MP_MP_Biker_Tat_023_F"):
			iVar0 = 580;
			break;
		
		case joaat("MP_MP_Biker_Tat_024_F"):
			iVar0 = 581;
			break;
		
		case joaat("MP_Biker_Tee_000_F"):
			iVar0 = 582;
			break;
		
		case joaat("MP_Biker_Tee_001_F"):
			iVar0 = 583;
			break;
		
		case joaat("MP_Biker_Tee_002_F"):
			iVar0 = 584;
			break;
		
		case joaat("MP_Biker_Tee_003_F"):
			iVar0 = 585;
			break;
		
		case joaat("MP_Biker_Tee_004_F"):
			iVar0 = 586;
			break;
		
		case joaat("MP_Biker_Tee_005_F"):
			iVar0 = 587;
			break;
		
		case joaat("MP_Biker_Tee_006_F"):
			iVar0 = 588;
			break;
		
		case joaat("MP_Biker_Tee_007_F"):
			iVar0 = 589;
			break;
		
		case joaat("MP_Biker_Tee_008_F"):
			iVar0 = 590;
			break;
		
		case joaat("MP_Biker_Tee_009_F"):
			iVar0 = 591;
			break;
		
		case joaat("MP_Biker_Tee_010_F"):
			iVar0 = 592;
			break;
		
		case joaat("MP_Biker_Tee_011_F"):
			iVar0 = 593;
			break;
		
		case joaat("MP_Biker_Tee_012_F"):
			iVar0 = 594;
			break;
		
		case joaat("MP_Biker_Tee_013_F"):
			iVar0 = 595;
			break;
		
		case joaat("MP_Biker_Tee_014_F"):
			iVar0 = 596;
			break;
		
		case joaat("MP_Biker_Tee_015_F"):
			iVar0 = 597;
			break;
		
		case joaat("MP_Biker_Tee_016_F"):
			iVar0 = 598;
			break;
		
		case joaat("MP_Biker_Tee_017_F"):
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_018_F"):
			iVar0 = 600;
			break;
		
		case joaat("MP_Biker_Tee_019_F"):
			iVar0 = 601;
			break;
		
		case joaat("MP_Biker_Tee_020_F"):
			iVar0 = 602;
			break;
		
		case joaat("MP_Biker_Tee_021_F"):
			iVar0 = 603;
			break;
		
		case joaat("MP_Biker_Tee_022_F"):
			iVar0 = 604;
			break;
		
		case joaat("MP_Biker_Tee_023_F"):
			iVar0 = 605;
			break;
		
		case joaat("MP_Biker_Tee_024_F"):
			iVar0 = 606;
			break;
		
		case joaat("MP_Biker_Tee_025_F"):
			iVar0 = 607;
			break;
		
		case joaat("MP_Biker_Tee_026_F"):
			iVar0 = 608;
			break;
		
		case joaat("MP_Biker_Tee_027_F"):
			iVar0 = 609;
			break;
		
		case joaat("MP_Biker_Tee_028_F"):
			iVar0 = 610;
			break;
		
		case joaat("MP_Biker_Tee_029_F"):
			iVar0 = 611;
			break;
		
		case joaat("MP_Biker_Tee_030_F"):
			iVar0 = 612;
			break;
		
		case joaat("MP_Biker_Tee_031_F"):
			iVar0 = 613;
			break;
		
		case joaat("MP_Biker_Tee_032_F"):
			iVar0 = 614;
			break;
		
		case joaat("MP_Biker_Tee_033_F"):
			iVar0 = 615;
			break;
		
		case joaat("MP_Biker_Tee_034_F"):
			iVar0 = 616;
			break;
		
		case joaat("MP_Biker_Tee_035_F"):
			iVar0 = 617;
			break;
		
		case joaat("MP_Biker_Tee_036_F"):
			iVar0 = 618;
			break;
		
		case joaat("MP_Biker_Tee_037_F"):
			iVar0 = 619;
			break;
		
		case joaat("MP_Biker_Tee_038_F"):
			iVar0 = 620;
			break;
		
		case joaat("MP_Biker_Tee_039_F"):
			iVar0 = 621;
			break;
		
		case joaat("MP_Biker_Tee_040_F"):
			iVar0 = 622;
			break;
		
		case joaat("MP_Biker_Tee_041_F"):
			iVar0 = 623;
			break;
		
		case joaat("MP_Biker_Tee_042_F"):
			iVar0 = 624;
			break;
		
		case joaat("MP_Biker_Tee_043_F"):
			iVar0 = 625;
			break;
		
		case joaat("MP_Biker_Tee_044_F"):
			iVar0 = 626;
			break;
		
		case joaat("MP_Biker_Tee_045_F"):
			iVar0 = 627;
			break;
		
		case joaat("MP_Biker_Tee_046_F"):
			iVar0 = 628;
			break;
		
		case joaat("MP_Biker_Tee_047_F"):
			iVar0 = 629;
			break;
		
		case joaat("MP_Biker_Tee_048_F"):
			iVar0 = 630;
			break;
		
		case joaat("MP_Biker_Tee_049_F"):
			iVar0 = 631;
			break;
		
		case joaat("MP_Biker_Tee_050_F"):
			iVar0 = 632;
			break;
		
		case joaat("MP_Biker_Tee_051_F"):
			iVar0 = 633;
			break;
		
		case joaat("MP_Biker_Tee_052_F"):
			iVar0 = 634;
			break;
		
		case joaat("MP_Biker_Tee_053_F"):
			iVar0 = 635;
			break;
		
		case joaat("MP_Biker_Tee_054_F"):
			iVar0 = 636;
			break;
		
		case joaat("MP_Biker_Tee_055_F"):
			iVar0 = 637;
			break;
		
		case joaat("MP_Biker_Award_000_F"):
			iVar0 = 638;
			break;
		
		case joaat("MP_Biker_Award_001_F"):
			iVar0 = 639;
			break;
		
		case joaat("MP_Biker_Hair_003_F"):
			iVar0 = 640;
			break;
		
		case joaat("NG_F_Hair_014"):
			iVar0 = 641;
			break;
		
		case joaat("MP_Biker_Rank_000_F"):
			iVar0 = 642;
			break;
		
		case joaat("MP_Biker_Rank_001_F"):
			iVar0 = 643;
			break;
		
		case joaat("MP_Biker_Rank_002_F"):
			iVar0 = 644;
			break;
		
		case joaat("MP_Biker_Rank_003_F"):
			iVar0 = 645;
			break;
		
		case joaat("MP_Biker_Rank_004_F"):
			iVar0 = 646;
			break;
		
		case joaat("MP_Biker_Rank_005_F"):
			iVar0 = 647;
			break;
		
		case joaat("MP_Biker_Rank_006_F"):
			iVar0 = 648;
			break;
		
		case joaat("MP_Biker_Rank_007_F"):
			iVar0 = 649;
			break;
		
		case joaat("MP_Biker_Rank_008_F"):
			iVar0 = 650;
			break;
		
		case joaat("MP_Biker_Rank_009_F"):
			iVar0 = 651;
			break;
		
		case joaat("MP_Biker_Rank_010_F"):
			iVar0 = 652;
			break;
		
		case joaat("MP_Biker_Rank_011_F"):
			iVar0 = 653;
			break;
		
		case joaat("MP_Biker_Rank_012_F"):
			iVar0 = 654;
			break;
		
		case joaat("MP_Biker_Rank_013_F"):
			iVar0 = 655;
			break;
		
		case joaat("MP_Biker_Rank_014_F"):
			iVar0 = 656;
			break;
		
		case joaat("MP_Biker_Rank_015_F"):
			iVar0 = 657;
			break;
		
		case joaat("MP_Biker_Rank_016_F"):
			iVar0 = 658;
			break;
		
		case joaat("MP_Biker_Rank_017_F"):
			iVar0 = 659;
			break;
		
		case joaat("Blank_Hoody_F_0"):
			iVar0 = 660;
			break;
		
		case joaat("Blank_Hoody_F_1"):
			iVar0 = 661;
			break;
		
		case joaat("MP_MP_Biker_Tat_025_F"):
			iVar0 = 662;
			break;
		
		case joaat("MP_MP_Biker_Tat_026_F"):
			iVar0 = 663;
			break;
		
		case joaat("MP_MP_Biker_Tat_027_F"):
			iVar0 = 664;
			break;
		
		case joaat("MP_MP_Biker_Tat_028_F"):
			iVar0 = 665;
			break;
		
		case joaat("MP_MP_Biker_Tat_029_F"):
			iVar0 = 666;
			break;
		
		case joaat("MP_MP_Biker_Tat_030_F"):
			iVar0 = 667;
			break;
		
		case joaat("MP_MP_Biker_Tat_031_F"):
			iVar0 = 668;
			break;
		
		case joaat("MP_MP_Biker_Tat_032_F"):
			iVar0 = 669;
			break;
		
		case joaat("MP_MP_Biker_Tat_033_F"):
			iVar0 = 670;
			break;
		
		case joaat("MP_MP_Biker_Tat_034_F"):
			iVar0 = 671;
			break;
		
		case joaat("MP_MP_Biker_Tat_035_F"):
			iVar0 = 672;
			break;
		
		case joaat("MP_MP_Biker_Tat_036_F"):
			iVar0 = 673;
			break;
		
		case joaat("MP_MP_Biker_Tat_037_F"):
			iVar0 = 674;
			break;
		
		case joaat("MP_MP_Biker_Tat_038_F"):
			iVar0 = 675;
			break;
		
		case joaat("MP_MP_Biker_Tat_039_F"):
			iVar0 = 676;
			break;
		
		case joaat("MP_MP_Biker_Tat_040_F"):
			iVar0 = 677;
			break;
		
		case joaat("MP_MP_Biker_Tat_041_F"):
			iVar0 = 678;
			break;
		
		case joaat("MP_MP_Biker_Tat_042_F"):
			iVar0 = 679;
			break;
		
		case joaat("MP_MP_Biker_Tat_043_F"):
			iVar0 = 680;
			break;
		
		case joaat("MP_MP_Biker_Tat_044_F"):
			iVar0 = 681;
			break;
		
		case joaat("MP_MP_Biker_Tat_045_F"):
			iVar0 = 682;
			break;
		
		case joaat("MP_MP_Biker_Tat_046_F"):
			iVar0 = 683;
			break;
		
		case joaat("MP_MP_Biker_Tat_047_F"):
			iVar0 = 684;
			break;
		
		case joaat("MP_MP_Biker_Tat_048_F"):
			iVar0 = 685;
			break;
		
		case joaat("MP_MP_Biker_Tat_049_F"):
			iVar0 = 686;
			break;
		
		case joaat("MP_MP_Biker_Tat_050_F"):
			iVar0 = 687;
			break;
		
		case joaat("MP_MP_Biker_Tat_051_F"):
			iVar0 = 688;
			break;
		
		case joaat("MP_MP_Biker_Tat_052_F"):
			iVar0 = 689;
			break;
		
		case joaat("MP_MP_Biker_Tat_053_F"):
			iVar0 = 690;
			break;
		
		case joaat("MP_MP_Biker_Tat_054_F"):
			iVar0 = 691;
			break;
		
		case joaat("MP_MP_Biker_Tat_055_F"):
			iVar0 = 692;
			break;
		
		case joaat("MP_MP_Biker_Tat_056_F"):
			iVar0 = 693;
			break;
		
		case joaat("MP_MP_Biker_Tat_057_F"):
			iVar0 = 694;
			break;
		
		case joaat("MP_MP_Biker_Tat_058_F"):
			iVar0 = 695;
			break;
		
		case joaat("MP_Biker_Hair_004_F"):
			iVar0 = 696;
			break;
		
		case joaat("MP_MP_Biker_Tat_059_F"):
			iVar0 = 697;
			break;
		
		case joaat("MP_MP_Biker_Tat_060_F"):
			iVar0 = 698;
			break;
		
		case joaat("MP_Biker_Hair_005_F"):
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Hair_006_F"):
			iVar0 = 700;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_000_F"):
			iVar0 = 701;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_001_F"):
			iVar0 = 702;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_002_F"):
			iVar0 = 703;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_003_F"):
			iVar0 = 704;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_004_F"):
			iVar0 = 705;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_005_F"):
			iVar0 = 706;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_006_F"):
			iVar0 = 707;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_007_F"):
			iVar0 = 708;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_008_F"):
			iVar0 = 709;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_009_F"):
			iVar0 = 710;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_010_F"):
			iVar0 = 711;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_011_F"):
			iVar0 = 712;
			break;
		
		case joaat("MP_Gunrunning_Hair_F_000_F"):
			iVar0 = 713;
			break;
		
		case joaat("MP_Gunrunning_Hair_F_001_F"):
			iVar0 = 714;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_000_F"):
			iVar0 = 715;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_001_F"):
			iVar0 = 716;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_002_F"):
			iVar0 = 717;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_003_F"):
			iVar0 = 718;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_004_F"):
			iVar0 = 719;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_005_F"):
			iVar0 = 720;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_006_F"):
			iVar0 = 721;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_007_F"):
			iVar0 = 722;
			break;
		
		case joaat("MP_Gunrunning_Award_000_F"):
			iVar0 = 723;
			break;
		
		case joaat("MP_Gunrunning_Award_001_F"):
			iVar0 = 724;
			break;
		
		case joaat("MP_Gunrunning_Award_002_F"):
			iVar0 = 725;
			break;
		
		case joaat("MP_Gunrunning_Award_003_F"):
			iVar0 = 726;
			break;
		
		case joaat("MP_Gunrunning_Award_004_F"):
			iVar0 = 727;
			break;
		
		case joaat("MP_Gunrunning_Award_005_F"):
			iVar0 = 728;
			break;
		
		case joaat("MP_Gunrunning_Award_006_F"):
			iVar0 = 729;
			break;
		
		case joaat("MP_Gunrunning_Award_007_F"):
			iVar0 = 730;
			break;
		
		case joaat("MP_Gunrunning_Award_008_F"):
			iVar0 = 731;
			break;
		
		case joaat("MP_Gunrunning_Award_009_F"):
			iVar0 = 732;
			break;
		
		case joaat("MP_Gunrunning_Award_010_F"):
			iVar0 = 733;
			break;
		
		case joaat("MP_Gunrunning_Award_011_F"):
			iVar0 = 734;
			break;
		
		case joaat("MP_Gunrunning_Award_012_F"):
			iVar0 = 735;
			break;
		
		case joaat("MP_Gunrunning_Award_013_F"):
			iVar0 = 736;
			break;
		
		case joaat("MP_Gunrunning_Award_014_F"):
			iVar0 = 737;
			break;
		
		case joaat("MP_Gunrunning_Award_015_F"):
			iVar0 = 738;
			break;
		
		case joaat("MP_Gunrunning_Award_016_F"):
			iVar0 = 739;
			break;
		
		case joaat("MP_Gunrunning_Award_017_F"):
			iVar0 = 740;
			break;
		
		case joaat("MP_Gunrunning_Award_018_F"):
			iVar0 = 741;
			break;
		
		case joaat("Blank_GunrunTShirt_1"):
			iVar0 = 742;
			break;
		
		case joaat("Blank_GunrunTShirt_2"):
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_008_F"):
			iVar0 = 746;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_009_F"):
			iVar0 = 747;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_010_F"):
			iVar0 = 748;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_011_F"):
			iVar0 = 749;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_012_F"):
			iVar0 = 750;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_013_F"):
			iVar0 = 751;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_014_F"):
			iVar0 = 752;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_015_F"):
			iVar0 = 753;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_016_F"):
			iVar0 = 754;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_017_F"):
			iVar0 = 755;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_018_F"):
			iVar0 = 756;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_019_F"):
			iVar0 = 757;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_020_F"):
			iVar0 = 758;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_021_F"):
			iVar0 = 759;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_022_F"):
			iVar0 = 760;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_023_F"):
			iVar0 = 761;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_024_F"):
			iVar0 = 762;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_025_F"):
			iVar0 = 763;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_026_F"):
			iVar0 = 764;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_027_F"):
			iVar0 = 765;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_028_F"):
			iVar0 = 766;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_029_F"):
			iVar0 = 767;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_030_F"):
			iVar0 = 768;
			break;
		
		case joaat("MP_Gunrunning_Award_025_F"):
			iVar0 = 769;
			break;
		
		case joaat("MP_Gunrunning_Award_020_F"):
			iVar0 = 770;
			break;
		
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
			iVar0 = 771;
			break;
		
		case joaat("MP_Gunrunning_Award_021_F"):
			iVar0 = 772;
			break;
		
		case joaat("MP_Gunrunning_Award_026_F"):
			iVar0 = 773;
			break;
		
		case joaat("MP_Gunrunning_Award_023_F"):
			iVar0 = 774;
			break;
		
		case joaat("MP_Gunrunning_Award_024_F"):
			iVar0 = 775;
			break;
		
		case joaat("MP_Airraces_Tattoo_000_F"):
			iVar0 = 776;
			break;
		
		case joaat("MP_Airraces_Tattoo_001_F"):
			iVar0 = 777;
			break;
		
		case joaat("MP_Airraces_Tattoo_002_F"):
			iVar0 = 778;
			break;
		
		case joaat("MP_Airraces_Tattoo_003_F"):
			iVar0 = 779;
			break;
		
		case joaat("MP_Airraces_Tattoo_004_F"):
			iVar0 = 780;
			break;
		
		case joaat("MP_Airraces_Tattoo_005_F"):
			iVar0 = 781;
			break;
		
		case joaat("MP_Airraces_Tattoo_006_F"):
			iVar0 = 782;
			break;
		
		case joaat("MP_Airraces_Tattoo_007_F"):
			iVar0 = 783;
			break;
		
		case joaat("MP_Smuggler_Tattoo_000_F"):
			iVar0 = 784;
			break;
		
		case joaat("MP_Smuggler_Tattoo_001_F"):
			iVar0 = 785;
			break;
		
		case joaat("MP_Smuggler_Tattoo_002_F"):
			iVar0 = 786;
			break;
		
		case joaat("MP_Smuggler_Tattoo_003_F"):
			iVar0 = 787;
			break;
		
		case joaat("MP_Smuggler_Tattoo_004_F"):
			iVar0 = 788;
			break;
		
		case joaat("MP_Smuggler_Tattoo_005_F"):
			iVar0 = 789;
			break;
		
		case joaat("MP_Smuggler_Tattoo_006_F"):
			iVar0 = 790;
			break;
		
		case joaat("MP_Smuggler_Tattoo_007_F"):
			iVar0 = 791;
			break;
		
		case joaat("MP_Smuggler_Tattoo_008_F"):
			iVar0 = 792;
			break;
		
		case joaat("MP_Smuggler_Tattoo_009_F"):
			iVar0 = 793;
			break;
		
		case joaat("MP_Smuggler_Tattoo_010_F"):
			iVar0 = 794;
			break;
		
		case joaat("MP_Smuggler_Tattoo_011_F"):
			iVar0 = 795;
			break;
		
		case joaat("MP_Smuggler_Tattoo_012_F"):
			iVar0 = 796;
			break;
		
		case joaat("MP_Smuggler_Tattoo_013_F"):
			iVar0 = 797;
			break;
		
		case joaat("MP_Smuggler_Tattoo_014_F"):
			iVar0 = 798;
			break;
		
		case joaat("MP_Smuggler_Tattoo_015_F"):
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Smuggler_Tattoo_016_F"):
			iVar0 = 800;
			break;
		
		case joaat("MP_Smuggler_Tattoo_017_F"):
			iVar0 = 801;
			break;
		
		case joaat("MP_Smuggler_Tattoo_018_F"):
			iVar0 = 802;
			break;
		
		case joaat("MP_Smuggler_Tattoo_019_F"):
			iVar0 = 803;
			break;
		
		case joaat("MP_Smuggler_Tattoo_020_F"):
			iVar0 = 804;
			break;
		
		case joaat("MP_Smuggler_Tattoo_021_F"):
			iVar0 = 805;
			break;
		
		case joaat("MP_Smuggler_Tattoo_022_F"):
			iVar0 = 806;
			break;
		
		case joaat("MP_Smuggler_Tattoo_023_F"):
			iVar0 = 807;
			break;
		
		case joaat("MP_Smuggler_Tattoo_024_F"):
			iVar0 = 808;
			break;
		
		case joaat("MP_Smuggler_Tattoo_025_F"):
			iVar0 = 809;
			break;
		
		case joaat("F_TankTop_Smug_5_3_a"):
			iVar0 = 810;
			break;
		
		case joaat("F_TankTop_Smug_5_17_a"):
			iVar0 = 811;
			break;
		
		case joaat("F_TankTop_Smug_5_10_a"):
			iVar0 = 812;
			break;
		
		case joaat("F_TankTop_Smug_5_11_a"):
			iVar0 = 813;
			break;
		
		case joaat("F_TankTop_Smug_5_12_a"):
			iVar0 = 814;
			break;
		
		case joaat("F_TankTop_Smug_5_13_a"):
			iVar0 = 815;
			break;
		
		case joaat("F_TankTop_Smug_5_20_a"):
			iVar0 = 816;
			break;
		
		case joaat("F_TankTop_Smug_5_21_a"):
			iVar0 = 817;
			break;
		
		case joaat("F_TankTop_Smug_5_23_a"):
			iVar0 = 818;
			break;
		
		case joaat("F_TankTop_Smug_5_22_a"):
			iVar0 = 819;
			break;
		
		case joaat("F_TankTop_Smug_5_5_a"):
			iVar0 = 820;
			break;
		
		case joaat("F_TankTop_Smug_5_18_a"):
			iVar0 = 821;
			break;
		
		case joaat("F_TankTop_Smug_5_0_a"):
			iVar0 = 822;
			break;
		
		case joaat("F_TankTop_Smug_5_3_b"):
			iVar0 = 823;
			break;
		
		case joaat("F_TankTop_Smug_5_25_a"):
			iVar0 = 824;
			break;
		
		case joaat("F_TankTop_Smug_5_7_a"):
			iVar0 = 825;
			break;
		
		case joaat("F_TankTop_Smug_5_4_a"):
			iVar0 = 826;
			break;
		
		case joaat("F_TankTop_Smug_5_1_a"):
			iVar0 = 827;
			break;
		
		case joaat("F_TankTop_Smug_5_9_a"):
			iVar0 = 828;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_118(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_Bea_M_LArm_001"):
			iVar0 = 0;
			break;
		
		case joaat("MP_Bea_M_Back_000"):
			iVar0 = 1;
			break;
		
		case joaat("MP_Bea_M_Chest_000"):
			iVar0 = 2;
			break;
		
		case joaat("MP_Bea_M_Chest_001"):
			iVar0 = 3;
			break;
		
		case joaat("MP_Bea_M_Head_000"):
			iVar0 = 4;
			break;
		
		case joaat("MP_Bea_M_Head_001"):
			iVar0 = 5;
			break;
		
		case joaat("MP_Bea_M_Stom_000"):
			iVar0 = 6;
			break;
		
		case joaat("MP_Bea_M_LArm_000"):
			iVar0 = 7;
			break;
		
		case joaat("MP_Bea_M_Rleg_000"):
			iVar0 = 8;
			break;
		
		case joaat("MP_Bea_M_RArm_000"):
			iVar0 = 9;
			break;
		
		case joaat("MP_Bea_M_Lleg_000"):
			iVar0 = 10;
			break;
		
		case joaat("MP_Bea_M_Neck_000"):
			iVar0 = 11;
			break;
		
		case joaat("MP_Bea_M_Neck_001"):
			iVar0 = 12;
			break;
		
		case joaat("MP_Bea_M_RArm_001"):
			iVar0 = 13;
			break;
		
		case joaat("MP_Bea_M_Head_002"):
			iVar0 = 14;
			break;
		
		case joaat("MP_Bea_M_Stom_001"):
			iVar0 = 15;
			break;
		
		case joaat("MP_Val_M_Tshirt_A"):
			iVar0 = 16;
			break;
		
		case joaat("MP_Val_M_Tshirt_B"):
			iVar0 = 17;
			break;
		
		case joaat("MP_Val_M_Tshirt_C"):
			iVar0 = 18;
			break;
		
		case joaat("MP_Val_M_Tshirt_D"):
			iVar0 = 19;
			break;
		
		case joaat("MP_Val_M_Tshirt_E"):
			iVar0 = 20;
			break;
		
		case joaat("MP_Val_M_Tshirt_F"):
			iVar0 = 21;
			break;
		
		case joaat("MP_Val_M_Tshirt_G"):
			iVar0 = 22;
			break;
		
		case joaat("MP_Val_M_Tshirt_H"):
			iVar0 = 23;
			break;
		
		case joaat("MP_Val_M_Tshirt_I"):
			iVar0 = 24;
			break;
		
		case joaat("MP_Val_M_Tshirt_J"):
			iVar0 = 25;
			break;
		
		case joaat("MP_Val_M_Tshirt_K"):
			iVar0 = 26;
			break;
		
		case joaat("MP_Val_M_Tshirt_L"):
			iVar0 = 27;
			break;
		
		case joaat("MP_Val_M_Tshirt_M"):
			iVar0 = 28;
			break;
		
		case joaat("MP_Val_M_Tshirt_N"):
			iVar0 = 29;
			break;
		
		case joaat("MP_Val_M_Tshirt_O"):
			iVar0 = 30;
			break;
		
		case joaat("MP_Val_M_Tshirt_P"):
			iVar0 = 31;
			break;
		
		case joaat("MP_Val_M_Tshirt_Q"):
			iVar0 = 32;
			break;
		
		case joaat("MP_Val_M_Tshirt_R"):
			iVar0 = 33;
			break;
		
		case joaat("MP_Val_M_Tshirt_S"):
			iVar0 = 34;
			break;
		
		case joaat("MP_Val_M_Tshirt_T"):
			iVar0 = 35;
			break;
		
		case joaat("MP_Buis_M_Back_000"):
			iVar0 = 36;
			break;
		
		case joaat("MP_Buis_M_Chest_000"):
			iVar0 = 37;
			break;
		
		case joaat("MP_Buis_M_Chest_001"):
			iVar0 = 38;
			break;
		
		case joaat("MP_Buis_M_LeftArm_000"):
			iVar0 = 39;
			break;
		
		case joaat("MP_Buis_M_LeftArm_001"):
			iVar0 = 40;
			break;
		
		case joaat("MP_Buis_M_Neck_000"):
			iVar0 = 41;
			break;
		
		case joaat("MP_Buis_M_Neck_001"):
			iVar0 = 42;
			break;
		
		case joaat("MP_Buis_M_Neck_002"):
			iVar0 = 43;
			break;
		
		case joaat("MP_Buis_M_Neck_003"):
			iVar0 = 44;
			break;
		
		case joaat("MP_Buis_M_RightArm_000"):
			iVar0 = 45;
			break;
		
		case joaat("MP_Buis_M_RightArm_001"):
			iVar0 = 46;
			break;
		
		case joaat("MP_Buis_M_Stomach_000"):
			iVar0 = 47;
			break;
		
		case joaat("MP_Male_Crew_Tat_000"):
			iVar0 = 48;
			break;
		
		case joaat("MP_Male_Crew_Tat_001"):
			iVar0 = 49;
			break;
		
		case joaat("FM_Bus_M_Hair_000_a"):
			iVar0 = 50;
			break;
		
		case joaat("FM_Bus_M_Hair_000_b"):
			iVar0 = 51;
			break;
		
		case joaat("FM_Bus_M_Hair_000_c"):
			iVar0 = 52;
			break;
		
		case joaat("FM_Bus_M_Hair_000_d"):
			iVar0 = 53;
			break;
		
		case joaat("FM_Bus_M_Hair_000_e"):
			iVar0 = 54;
			break;
		
		case joaat("FM_Bus_M_Hair_001_a"):
			iVar0 = 55;
			break;
		
		case joaat("FM_Bus_M_Hair_001_b"):
			iVar0 = 56;
			break;
		
		case joaat("FM_Bus_M_Hair_001_c"):
			iVar0 = 57;
			break;
		
		case joaat("FM_Bus_M_Hair_001_d"):
			iVar0 = 58;
			break;
		
		case joaat("FM_Bus_M_Hair_001_e"):
			iVar0 = 59;
			break;
		
		case joaat("FM_Hip_M_Tat_000"):
			iVar0 = 60;
			break;
		
		case joaat("FM_Hip_M_Tat_001"):
			iVar0 = 61;
			break;
		
		case joaat("FM_Hip_M_Tat_002"):
			iVar0 = 62;
			break;
		
		case joaat("FM_Hip_M_Tat_003"):
			iVar0 = 63;
			break;
		
		case joaat("FM_Hip_M_Tat_004"):
			iVar0 = 64;
			break;
		
		case joaat("FM_Hip_M_Tat_005"):
			iVar0 = 65;
			break;
		
		case joaat("FM_Hip_M_Tat_006"):
			iVar0 = 66;
			break;
		
		case joaat("FM_Hip_M_Tat_007"):
			iVar0 = 67;
			break;
		
		case joaat("FM_Hip_M_Tat_008"):
			iVar0 = 68;
			break;
		
		case joaat("FM_Hip_M_Tat_009"):
			iVar0 = 69;
			break;
		
		case joaat("FM_Hip_M_Tat_010"):
			iVar0 = 70;
			break;
		
		case joaat("FM_Hip_M_Tat_011"):
			iVar0 = 71;
			break;
		
		case joaat("FM_Hip_M_Tat_012"):
			iVar0 = 72;
			break;
		
		case joaat("FM_Hip_M_Tat_013"):
			iVar0 = 73;
			break;
		
		case joaat("FM_Hip_M_Tat_014"):
			iVar0 = 74;
			break;
		
		case joaat("FM_Hip_M_Tat_015"):
			iVar0 = 75;
			break;
		
		case joaat("FM_Hip_M_Tat_016"):
			iVar0 = 76;
			break;
		
		case joaat("FM_Hip_M_Tat_017"):
			iVar0 = 77;
			break;
		
		case joaat("FM_Hip_M_Tat_018"):
			iVar0 = 78;
			break;
		
		case joaat("FM_Hip_M_Tat_019"):
			iVar0 = 79;
			break;
		
		case joaat("FM_Hip_M_Tat_020"):
			iVar0 = 80;
			break;
		
		case joaat("FM_Hip_M_Tat_021"):
			iVar0 = 81;
			break;
		
		case joaat("FM_Hip_M_Tat_022"):
			iVar0 = 82;
			break;
		
		case joaat("FM_Hip_M_Tat_023"):
			iVar0 = 83;
			break;
		
		case joaat("FM_Hip_M_Tat_024"):
			iVar0 = 84;
			break;
		
		case joaat("FM_Hip_M_Tat_025"):
			iVar0 = 85;
			break;
		
		case joaat("FM_Hip_M_Tat_026"):
			iVar0 = 86;
			break;
		
		case joaat("FM_Hip_M_Tat_027"):
			iVar0 = 87;
			break;
		
		case joaat("FM_Hip_M_Tat_028"):
			iVar0 = 88;
			break;
		
		case joaat("FM_Hip_M_Tat_029"):
			iVar0 = 89;
			break;
		
		case joaat("FM_Hip_M_Tat_030"):
			iVar0 = 90;
			break;
		
		case joaat("FM_Hip_M_Tat_031"):
			iVar0 = 91;
			break;
		
		case joaat("FM_Hip_M_Tat_032"):
			iVar0 = 92;
			break;
		
		case joaat("FM_Hip_M_Tat_033"):
			iVar0 = 93;
			break;
		
		case joaat("FM_Hip_M_Tat_034"):
			iVar0 = 94;
			break;
		
		case joaat("FM_Hip_M_Tat_035"):
			iVar0 = 95;
			break;
		
		case joaat("FM_Hip_M_Tat_036"):
			iVar0 = 96;
			break;
		
		case joaat("FM_Hip_M_Tat_037"):
			iVar0 = 97;
			break;
		
		case joaat("FM_Hip_M_Tat_038"):
			iVar0 = 98;
			break;
		
		case joaat("FM_Hip_M_Tat_039"):
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case joaat("FM_Hip_M_Tat_040"):
			iVar0 = 100;
			break;
		
		case joaat("FM_Hip_M_Tat_041"):
			iVar0 = 101;
			break;
		
		case joaat("FM_Hip_M_Tat_042"):
			iVar0 = 102;
			break;
		
		case joaat("FM_Hip_M_Tat_043"):
			iVar0 = 103;
			break;
		
		case joaat("FM_Hip_M_Tat_044"):
			iVar0 = 104;
			break;
		
		case joaat("FM_Hip_M_Tat_045"):
			iVar0 = 105;
			break;
		
		case joaat("FM_Hip_M_Tat_046"):
			iVar0 = 106;
			break;
		
		case joaat("FM_Hip_M_Tat_047"):
			iVar0 = 107;
			break;
		
		case joaat("FM_Hip_M_Tat_048"):
			iVar0 = 108;
			break;
		
		case joaat("FM_Hip_M_Hair_000_a"):
			iVar0 = 109;
			break;
		
		case joaat("FM_Hip_M_Hair_000_b"):
			iVar0 = 110;
			break;
		
		case joaat("FM_Hip_M_Hair_000_c"):
			iVar0 = 111;
			break;
		
		case joaat("FM_Hip_M_Hair_000_d"):
			iVar0 = 112;
			break;
		
		case joaat("FM_Hip_M_Hair_000_e"):
			iVar0 = 113;
			break;
		
		case joaat("FM_Hip_M_Hair_001_a"):
			iVar0 = 114;
			break;
		
		case joaat("FM_Hip_M_Hair_001_b"):
			iVar0 = 115;
			break;
		
		case joaat("FM_Hip_M_Hair_001_c"):
			iVar0 = 116;
			break;
		
		case joaat("FM_Hip_M_Hair_001_d"):
			iVar0 = 117;
			break;
		
		case joaat("FM_Hip_M_Hair_001_e"):
			iVar0 = 118;
			break;
		
		case joaat("FM_Hip_M_Tshirt_000"):
			iVar0 = 119;
			break;
		
		case joaat("FM_Hip_M_Tshirt_001"):
			iVar0 = 120;
			break;
		
		case joaat("FM_Hip_M_Tshirt_002"):
			iVar0 = 121;
			break;
		
		case joaat("FM_Hip_M_Tshirt_003"):
			iVar0 = 122;
			break;
		
		case joaat("FM_Hip_M_Tshirt_004"):
			iVar0 = 123;
			break;
		
		case joaat("FM_Hip_M_Tshirt_005"):
			iVar0 = 124;
			break;
		
		case joaat("FM_Hip_M_Tshirt_006"):
			iVar0 = 125;
			break;
		
		case joaat("FM_Hip_M_Tshirt_007"):
			iVar0 = 126;
			break;
		
		case joaat("FM_Hip_M_Tshirt_008"):
			iVar0 = 127;
			break;
		
		case joaat("FM_Hip_M_Tshirt_009"):
			iVar0 = 128;
			break;
		
		case joaat("FM_Hip_M_Tshirt_010"):
			iVar0 = 129;
			break;
		
		case joaat("FM_Hip_M_Tshirt_011"):
			iVar0 = 130;
			break;
		
		case joaat("FM_Hip_M_Tshirt_012"):
			iVar0 = 131;
			break;
		
		case joaat("FM_Hip_M_Tshirt_013"):
			iVar0 = 132;
			break;
		
		case joaat("FM_Hip_M_Tshirt_014"):
			iVar0 = 133;
			break;
		
		case joaat("FM_Hip_M_Tshirt_015"):
			iVar0 = 134;
			break;
		
		case joaat("FM_Hip_M_Tshirt_016"):
			iVar0 = 135;
			break;
		
		case joaat("FM_Hip_M_Tshirt_017"):
			iVar0 = 136;
			break;
		
		case joaat("FM_Hip_M_Tshirt_018"):
			iVar0 = 137;
			break;
		
		case joaat("FM_Hip_M_Tshirt_019"):
			iVar0 = 138;
			break;
		
		case joaat("FM_Hip_M_Tshirt_020"):
			iVar0 = 139;
			break;
		
		case joaat("FM_Hip_M_Tshirt_021"):
			iVar0 = 140;
			break;
		
		case joaat("FM_Hip_M_Tshirt_022"):
			iVar0 = 141;
			break;
		
		case joaat("FM_Hip_M_Retro_000"):
			iVar0 = 142;
			break;
		
		case joaat("FM_Hip_M_Retro_001"):
			iVar0 = 143;
			break;
		
		case joaat("FM_Hip_M_Retro_002"):
			iVar0 = 144;
			break;
		
		case joaat("FM_Hip_M_Retro_003"):
			iVar0 = 145;
			break;
		
		case joaat("FM_Hip_M_Retro_004"):
			iVar0 = 146;
			break;
		
		case joaat("FM_Hip_M_Retro_005"):
			iVar0 = 147;
			break;
		
		case joaat("FM_Hip_M_Retro_006"):
			iVar0 = 148;
			break;
		
		case joaat("FM_Hip_M_Retro_007"):
			iVar0 = 149;
			break;
		
		case joaat("FM_Hip_M_Retro_008"):
			iVar0 = 150;
			break;
		
		case joaat("FM_Hip_M_Retro_009"):
			iVar0 = 151;
			break;
		
		case joaat("FM_Hip_M_Retro_010"):
			iVar0 = 152;
			break;
		
		case joaat("FM_Hip_M_Retro_011"):
			iVar0 = 153;
			break;
		
		case joaat("FM_Hip_M_Retro_012"):
			iVar0 = 154;
			break;
		
		case joaat("FM_Hip_M_Retro_013"):
			iVar0 = 155;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_000"):
			iVar0 = 156;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_001"):
			iVar0 = 157;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_002"):
			iVar0 = 158;
			break;
		
		case joaat("FM_Ind_M_Tshirt_000"):
			iVar0 = 159;
			break;
		
		case joaat("FM_Ind_M_Tshirt_001"):
			iVar0 = 160;
			break;
		
		case joaat("FM_Ind_M_Tshirt_002"):
			iVar0 = 161;
			break;
		
		case joaat("FM_Ind_M_Tshirt_003"):
			iVar0 = 162;
			break;
		
		case joaat("FM_Ind_M_Tshirt_004"):
			iVar0 = 163;
			break;
		
		case joaat("FM_Ind_M_Tshirt_005"):
			iVar0 = 164;
			break;
		
		case joaat("FM_Ind_M_Tshirt_007"):
			iVar0 = 165;
			break;
		
		case joaat("FM_Ind_M_Tshirt_008"):
			iVar0 = 166;
			break;
		
		case joaat("FM_Ind_M_Tshirt_009"):
			iVar0 = 167;
			break;
		
		case joaat("FM_Ind_M_Tshirt_010"):
			iVar0 = 168;
			break;
		
		case joaat("FM_Ind_M_Tshirt_011"):
			iVar0 = 169;
			break;
		
		case joaat("FM_Ind_M_Tshirt_012"):
			iVar0 = 170;
			break;
		
		case joaat("FM_Ind_M_Tshirt_013"):
			iVar0 = 171;
			break;
		
		case joaat("FM_Ind_M_Tshirt_014"):
			iVar0 = 172;
			break;
		
		case joaat("FM_Ind_M_Tshirt_015"):
			iVar0 = 173;
			break;
		
		case joaat("FM_Ind_M_Tshirt_017"):
			iVar0 = 174;
			break;
		
		case joaat("FM_Ind_M_Tshirt_019"):
			iVar0 = 175;
			break;
		
		case joaat("FM_Ind_M_Tshirt_020"):
			iVar0 = 176;
			break;
		
		case joaat("FM_Ind_M_Tshirt_021"):
			iVar0 = 177;
			break;
		
		case joaat("FM_Ind_M_Tshirt_022"):
			iVar0 = 178;
			break;
		
		case joaat("FM_Ind_M_Tshirt_023"):
			iVar0 = 179;
			break;
		
		case joaat("FM_Ind_M_Tshirt_024"):
			iVar0 = 180;
			break;
		
		case joaat("FM_Ind_M_Tshirt_025"):
			iVar0 = 181;
			break;
		
		case joaat("FM_Ind_M_Tshirt_026"):
			iVar0 = 182;
			break;
		
		case joaat("FM_Ind_M_Award_000"):
			iVar0 = 183;
			break;
		
		case joaat("MP_Fli_M_Tshirt_000"):
			iVar0 = 184;
			break;
		
		case joaat("FM_LTS_M_Tshirt_000"):
			iVar0 = 185;
			break;
		
		case joaat("MP_FM_OGA_000_m"):
			iVar0 = 186;
			break;
		
		case joaat("MP_FM_OGA_001_m"):
			iVar0 = 187;
			break;
		
		case joaat("MP_FM_OGA_002_m"):
			iVar0 = 188;
			break;
		
		case joaat("MP_FM_OGA_003_m"):
			iVar0 = 189;
			break;
		
		case joaat("NG_M_Hair_001"):
			iVar0 = 190;
			break;
		
		case joaat("NG_M_Hair_002"):
			iVar0 = 191;
			break;
		
		case joaat("NG_M_Hair_003"):
			iVar0 = 192;
			break;
		
		case joaat("NG_M_Hair_004"):
			iVar0 = 193;
			break;
		
		case joaat("NG_M_Hair_005"):
			iVar0 = 194;
			break;
		
		case joaat("NG_M_Hair_006"):
			iVar0 = 195;
			break;
		
		case joaat("NG_M_Hair_007"):
			iVar0 = 196;
			break;
		
		case joaat("NG_M_Hair_008"):
			iVar0 = 197;
			break;
		
		case joaat("NG_M_Hair_009"):
			iVar0 = 198;
			break;
		
		case joaat("NG_M_Hair_010"):
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case joaat("NG_M_Hair_011"):
			iVar0 = 200;
			break;
		
		case joaat("NG_M_Hair_012"):
			iVar0 = 201;
			break;
		
		case joaat("NG_M_Hair_013"):
			iVar0 = 202;
			break;
		
		case joaat("NG_M_Hair_014"):
			iVar0 = 203;
			break;
		
		case joaat("NG_M_Hair_015"):
			iVar0 = 204;
			break;
		
		case joaat("NGBea_M_Hair_000"):
			iVar0 = 205;
			break;
		
		case joaat("NGBea_M_Hair_001"):
			iVar0 = 206;
			break;
		
		case joaat("NGBus_M_Hair_000"):
			iVar0 = 207;
			break;
		
		case joaat("NGBus_M_Hair_001"):
			iVar0 = 208;
			break;
		
		case joaat("NGHip_M_Hair_000"):
			iVar0 = 209;
			break;
		
		case joaat("NGHip_M_Hair_001"):
			iVar0 = 210;
			break;
		
		case joaat("NGInd_M_Hair_000"):
			iVar0 = 211;
			break;
		
		case joaat("MP_Xmas2_M_Tat_000"):
			iVar0 = 212;
			break;
		
		case joaat("MP_Xmas2_M_Tat_001"):
			iVar0 = 213;
			break;
		
		case joaat("MP_Xmas2_M_Tat_002"):
			iVar0 = 214;
			break;
		
		case joaat("MP_Xmas2_M_Tat_003"):
			iVar0 = 215;
			break;
		
		case joaat("MP_Xmas2_M_Tat_004"):
			iVar0 = 216;
			break;
		
		case joaat("MP_Xmas2_M_Tat_005"):
			iVar0 = 217;
			break;
		
		case joaat("MP_Xmas2_M_Tat_006"):
			iVar0 = 218;
			break;
		
		case joaat("MP_Xmas2_M_Tat_007"):
			iVar0 = 219;
			break;
		
		case joaat("MP_Xmas2_M_Tat_008"):
			iVar0 = 220;
			break;
		
		case joaat("MP_Xmas2_M_Tat_009"):
			iVar0 = 221;
			break;
		
		case joaat("MP_Xmas2_M_Tat_010"):
			iVar0 = 222;
			break;
		
		case joaat("MP_Xmas2_M_Tat_011"):
			iVar0 = 223;
			break;
		
		case joaat("MP_Xmas2_M_Tat_012"):
			iVar0 = 224;
			break;
		
		case joaat("MP_Xmas2_M_Tat_013"):
			iVar0 = 225;
			break;
		
		case joaat("MP_Xmas2_M_Tat_014"):
			iVar0 = 226;
			break;
		
		case joaat("MP_Xmas2_M_Tat_015"):
			iVar0 = 227;
			break;
		
		case joaat("MP_Xmas2_M_Tat_016"):
			iVar0 = 228;
			break;
		
		case joaat("MP_Xmas2_M_Tat_017"):
			iVar0 = 229;
			break;
		
		case joaat("MP_Xmas2_M_Tat_018"):
			iVar0 = 230;
			break;
		
		case joaat("MP_Xmas2_M_Tat_019"):
			iVar0 = 231;
			break;
		
		case joaat("MP_Xmas2_M_Tat_020"):
			iVar0 = 232;
			break;
		
		case joaat("MP_Xmas2_M_Tat_021"):
			iVar0 = 233;
			break;
		
		case joaat("MP_Xmas2_M_Tat_022"):
			iVar0 = 234;
			break;
		
		case joaat("MP_Xmas2_M_Tat_023"):
			iVar0 = 235;
			break;
		
		case joaat("MP_Xmas2_M_Tat_024"):
			iVar0 = 236;
			break;
		
		case joaat("MP_Xmas2_M_Tat_025"):
			iVar0 = 237;
			break;
		
		case joaat("MP_Xmas2_M_Tat_026"):
			iVar0 = 238;
			break;
		
		case joaat("MP_Xmas2_M_Tat_027"):
			iVar0 = 239;
			break;
		
		case joaat("MP_Xmas2_M_Tat_028"):
			iVar0 = 240;
			break;
		
		case joaat("MP_Xmas2_M_Tat_029"):
			iVar0 = 241;
			break;
		
		case joaat("MP_Award_M_Tshirt_004"):
			iVar0 = 242;
			break;
		
		case joaat("MP_Award_M_Tshirt_005"):
			iVar0 = 243;
			break;
		
		case joaat("MP_Award_M_Tshirt_006"):
			iVar0 = 244;
			break;
		
		case joaat("MP_Award_M_Tshirt_007"):
			iVar0 = 245;
			break;
		
		case joaat("MP_Award_M_Tshirt_008"):
			iVar0 = 246;
			break;
		
		case joaat("MP_Award_M_Tshirt_009"):
			iVar0 = 247;
			break;
		
		case joaat("MP_Award_M_Tshirt_010"):
			iVar0 = 248;
			break;
		
		case joaat("MP_Award_M_Tshirt_011"):
			iVar0 = 249;
			break;
		
		case joaat("MP_Award_M_Tshirt_012"):
			iVar0 = 250;
			break;
		
		case joaat("MP_Award_M_Tshirt_013"):
			iVar0 = 251;
			break;
		
		case joaat("MP_Bugstar_A"):
			iVar0 = 252;
			break;
		
		case joaat("MP_Bugstar_B"):
			iVar0 = 253;
			break;
		
		case joaat("MP_Bugstar_C"):
			iVar0 = 254;
			break;
		
		case joaat("MP_Rogers_A"):
			iVar0 = 255;
			break;
		
		case joaat("MP_Rogers_B"):
			iVar0 = 256;
			break;
		
		case joaat("MP_Als_A"):
			iVar0 = 257;
			break;
		
		case joaat("MP_Als_B"):
			iVar0 = 258;
			break;
		
		case joaat("MP_Power_A"):
			iVar0 = 259;
			break;
		
		case joaat("MP_Power_B"):
			iVar0 = 260;
			break;
		
		case joaat("MP_Elite_M_Tshirt"):
			iVar0 = 261;
			break;
		
		case joaat("MP_Elite_M_Tshirt_1"):
			iVar0 = 262;
			break;
		
		case joaat("MP_Elite_M_Tshirt_2"):
			iVar0 = 263;
			break;
		
		case joaat("MP_FAKE_DIS_000_M"):
			iVar0 = 264;
			break;
		
		case joaat("MP_FAKE_DIS_001_M"):
			iVar0 = 265;
			break;
		
		case joaat("MP_FAKE_DS_000_M"):
			iVar0 = 266;
			break;
		
		case joaat("MP_FAKE_ENEMA_000_M"):
			iVar0 = 267;
			break;
		
		case joaat("MP_FAKE_LB_000_M"):
			iVar0 = 268;
			break;
		
		case joaat("MP_FAKE_LC_000_M"):
			iVar0 = 269;
			break;
		
		case joaat("MP_FAKE_SC_000_M"):
			iVar0 = 270;
			break;
		
		case joaat("MP_FAKE_Vap_000_M"):
			iVar0 = 271;
			break;
		
		case joaat("MP_FAKE_Per_000_M"):
			iVar0 = 272;
			break;
		
		case joaat("MP_FAKE_SN_000_M"):
			iVar0 = 273;
			break;
		
		case joaat("MP_LUXE_Per_001_M"):
			iVar0 = 274;
			break;
		
		case joaat("MP_LUXE_SN_000_M"):
			iVar0 = 275;
			break;
		
		case joaat("MP_LUXE_SN_001_M"):
			iVar0 = 276;
			break;
		
		case joaat("MP_LUXE_SN_003_M"):
			iVar0 = 277;
			break;
		
		case joaat("MP_LUXE_SN_004_M"):
			iVar0 = 278;
			break;
		
		case joaat("MP_LUXE_SN_005_M"):
			iVar0 = 279;
			break;
		
		case joaat("MP_LUXE_SN_006_M"):
			iVar0 = 280;
			break;
		
		case joaat("MP_LUXE_SN_007_M"):
			iVar0 = 281;
			break;
		
		case joaat("MP_LUXE_DIX_000_M"):
			iVar0 = 282;
			break;
		
		case joaat("MP_LUXE_DIX_001_M"):
			iVar0 = 283;
			break;
		
		case joaat("MP_LUXE_DIX_002_M"):
			iVar0 = 284;
			break;
		
		case joaat("MP_LUXE_ENEMA_000_M"):
			iVar0 = 285;
			break;
		
		case joaat("MP_LUXE_LC_010_M"):
			iVar0 = 286;
			break;
		
		case joaat("MP_LUXE_LC_011_M"):
			iVar0 = 287;
			break;
		
		case joaat("MP_LUXE_SC_000_M"):
			iVar0 = 288;
			break;
		
		case joaat("MP_LUXE_SN_002_M"):
			iVar0 = 289;
			break;
		
		case joaat("MP_LUXE_TAT_000_M"):
			iVar0 = 290;
			break;
		
		case joaat("MP_LUXE_TAT_001_M"):
			iVar0 = 291;
			break;
		
		case joaat("MP_LUXE_TAT_003_M"):
			iVar0 = 292;
			break;
		
		case joaat("MP_LUXE_TAT_004_M"):
			iVar0 = 293;
			break;
		
		case joaat("MP_LUXE_TAT_006_M"):
			iVar0 = 294;
			break;
		
		case joaat("MP_LUXE_TAT_007_M"):
			iVar0 = 295;
			break;
		
		case joaat("MP_LUXE_TAT_008_M"):
			iVar0 = 296;
			break;
		
		case joaat("MP_LUXE_TAT_009_M"):
			iVar0 = 297;
			break;
		
		case joaat("MP_LUXE_TAT_013_M"):
			iVar0 = 298;
			break;
		
		case joaat("MP_LUXE_TAT_014_M"):
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_LUXE_TAT_015_M"):
			iVar0 = 300;
			break;
		
		case joaat("MP_LUXE_TAT_019_M"):
			iVar0 = 301;
			break;
		
		case joaat("MP_LUXE_TAT_020_M"):
			iVar0 = 302;
			break;
		
		case joaat("MP_LUXE_TAT_021_M"):
			iVar0 = 303;
			break;
		
		case joaat("MP_LUXE_TAT_024_M"):
			iVar0 = 304;
			break;
		
		case joaat("MP_FILM_000_M"):
			iVar0 = 305;
			break;
		
		case joaat("MP_FILM_001_M"):
			iVar0 = 306;
			break;
		
		case joaat("MP_FILM_002_M"):
			iVar0 = 307;
			break;
		
		case joaat("MP_FILM_003_M"):
			iVar0 = 308;
			break;
		
		case joaat("MP_FILM_004_M"):
			iVar0 = 309;
			break;
		
		case joaat("MP_FILM_005_M"):
			iVar0 = 310;
			break;
		
		case joaat("MP_FILM_006_M"):
			iVar0 = 311;
			break;
		
		case joaat("MP_FILM_007_M"):
			iVar0 = 312;
			break;
		
		case joaat("MP_FILM_008_M"):
			iVar0 = 313;
			break;
		
		case joaat("MP_FILM_009_M"):
			iVar0 = 314;
			break;
		
		case joaat("MP_LUXE_TAT_002_M"):
			iVar0 = 315;
			break;
		
		case joaat("MP_LUXE_TAT_005_M"):
			iVar0 = 316;
			break;
		
		case joaat("MP_LUXE_TAT_010_M"):
			iVar0 = 317;
			break;
		
		case joaat("MP_LUXE_TAT_011_M"):
			iVar0 = 318;
			break;
		
		case joaat("MP_LUXE_TAT_012_M"):
			iVar0 = 319;
			break;
		
		case joaat("MP_LUXE_TAT_016_M"):
			iVar0 = 320;
			break;
		
		case joaat("MP_LUXE_TAT_017_M"):
			iVar0 = 321;
			break;
		
		case joaat("MP_LUXE_TAT_018_M"):
			iVar0 = 322;
			break;
		
		case joaat("MP_LUXE_TAT_022_M"):
			iVar0 = 323;
			break;
		
		case joaat("MP_LUXE_TAT_023_M"):
			iVar0 = 324;
			break;
		
		case joaat("MP_LUXE_TAT_025_M"):
			iVar0 = 325;
			break;
		
		case joaat("MP_LUXE_TAT_026_M"):
			iVar0 = 326;
			break;
		
		case joaat("MP_LUXE_TAT_027_M"):
			iVar0 = 327;
			break;
		
		case joaat("MP_LUXE_TAT_028_M"):
			iVar0 = 328;
			break;
		
		case joaat("MP_LUXE_TAT_029_M"):
			iVar0 = 329;
			break;
		
		case joaat("MP_LUXE_TAT_030_M"):
			iVar0 = 330;
			break;
		
		case joaat("MP_LUXE_TAT_031_M"):
			iVar0 = 331;
			break;
		
		case joaat("MP_LUXE_LC_000_M"):
			iVar0 = 332;
			break;
		
		case joaat("MP_LUXE_LC_001_M"):
			iVar0 = 333;
			break;
		
		case joaat("MP_LUXE_LC_002_M"):
			iVar0 = 334;
			break;
		
		case joaat("MP_LUXE_LC_003_M"):
			iVar0 = 335;
			break;
		
		case joaat("MP_LUXE_LC_006_M"):
			iVar0 = 336;
			break;
		
		case joaat("MP_LUXE_LC_007_M"):
			iVar0 = 337;
			break;
		
		case joaat("MP_LUXE_LC_008_M"):
			iVar0 = 338;
			break;
		
		case joaat("MP_LUXE_LC_009_M"):
			iVar0 = 339;
			break;
		
		case joaat("MP_LUXE_LC_012_M"):
			iVar0 = 340;
			break;
		
		case joaat("MP_LUXE_LC_013_M"):
			iVar0 = 341;
			break;
		
		case joaat("MP_LUXE_LC_014_M"):
			iVar0 = 342;
			break;
		
		case joaat("MP_LUXE_LC_015_M"):
			iVar0 = 343;
			break;
		
		case joaat("MP_LUXE_VDG_000_M"):
			iVar0 = 344;
			break;
		
		case joaat("MP_LUXE_VDG_001_M"):
			iVar0 = 345;
			break;
		
		case joaat("MP_LUXE_VDG_002_M"):
			iVar0 = 346;
			break;
		
		case joaat("MP_LUXE_VDG_004_M"):
			iVar0 = 347;
			break;
		
		case joaat("MP_LUXE_VDG_005_M"):
			iVar0 = 348;
			break;
		
		case joaat("MP_LUXE_VDG_006_M"):
			iVar0 = 349;
			break;
		
		case joaat("MP_LR_Tat_001_M"):
			iVar0 = 350;
			break;
		
		case joaat("MP_LR_Tat_002_M"):
			iVar0 = 351;
			break;
		
		case joaat("MP_LR_Tat_004_M"):
			iVar0 = 352;
			break;
		
		case joaat("MP_LR_Tat_005_M"):
			iVar0 = 353;
			break;
		
		case joaat("MP_LR_Tat_007_M"):
			iVar0 = 354;
			break;
		
		case joaat("MP_LR_Tat_009_M"):
			iVar0 = 355;
			break;
		
		case joaat("MP_LR_Tat_010_M"):
			iVar0 = 356;
			break;
		
		case joaat("MP_LR_Tat_013_M"):
			iVar0 = 357;
			break;
		
		case joaat("MP_LR_Tat_014_M"):
			iVar0 = 358;
			break;
		
		case joaat("MP_LR_Tat_015_M"):
			iVar0 = 359;
			break;
		
		case joaat("MP_LR_Tat_017_M"):
			iVar0 = 360;
			break;
		
		case joaat("MP_LR_Tat_020_M"):
			iVar0 = 361;
			break;
		
		case joaat("MP_LR_Tat_021_M"):
			iVar0 = 362;
			break;
		
		case joaat("MP_LR_Tat_023_M"):
			iVar0 = 363;
			break;
		
		case joaat("MP_LR_Tat_026_M"):
			iVar0 = 364;
			break;
		
		case joaat("MP_LR_Tat_027_M"):
			iVar0 = 365;
			break;
		
		case joaat("MP_LR_Tat_033_M"):
			iVar0 = 366;
			break;
		
		case joaat("MP_Trickster_000_M"):
			iVar0 = 367;
			break;
		
		case joaat("MP_Trickster_002_M"):
			iVar0 = 368;
			break;
		
		case joaat("MP_Trickster_004_M"):
			iVar0 = 369;
			break;
		
		case joaat("MP_Trickster_006_M"):
			iVar0 = 370;
			break;
		
		case joaat("MP_Trickster_010_M"):
			iVar0 = 371;
			break;
		
		case joaat("MP_Trickster_001_M"):
			iVar0 = 372;
			break;
		
		case joaat("MP_Trickster_003_M"):
			iVar0 = 373;
			break;
		
		case joaat("MP_Trickster_005_M"):
			iVar0 = 374;
			break;
		
		case joaat("MP_Trickster_007_M"):
			iVar0 = 375;
			break;
		
		case joaat("MP_Trickster_008_M"):
			iVar0 = 376;
			break;
		
		case joaat("MP_Trickster_009_M"):
			iVar0 = 377;
			break;
		
		case joaat("MP_Broker_000_M"):
			iVar0 = 378;
			break;
		
		case joaat("MP_Broker_001_M"):
			iVar0 = 379;
			break;
		
		case joaat("MP_Broker_002_M"):
			iVar0 = 380;
			break;
		
		case joaat("MP_Broker_003_M"):
			iVar0 = 381;
			break;
		
		case joaat("MP_Magnetics_000_M"):
			iVar0 = 382;
			break;
		
		case joaat("MP_Magnetics_005_M"):
			iVar0 = 383;
			break;
		
		case joaat("MP_Broker_004_M"):
			iVar0 = 384;
			break;
		
		case joaat("MP_Broker_005_M"):
			iVar0 = 385;
			break;
		
		case joaat("MP_Magnetics_001_M"):
			iVar0 = 386;
			break;
		
		case joaat("MP_Magnetics_002_M"):
			iVar0 = 387;
			break;
		
		case joaat("MP_Magnetics_003_M"):
			iVar0 = 388;
			break;
		
		case joaat("MP_Magnetics_004_M"):
			iVar0 = 389;
			break;
		
		case joaat("Blank_SportsTShirt_0"):
			iVar0 = 390;
			break;
		
		case joaat("Blank_SportsTShirt_1"):
			iVar0 = 391;
			break;
		
		case joaat("Blank_SportsTShirt_2"):
			iVar0 = 392;
			break;
		
		case joaat("Blank_Sports_0"):
			iVar0 = 393;
			break;
		
		case joaat("Blank_Sports_1"):
			iVar0 = 394;
			break;
		
		case joaat("Blank_Sports_2"):
			iVar0 = 395;
			break;
		
		case joaat("Blank_SportsSweater_0"):
			iVar0 = 396;
			break;
		
		case joaat("Blank_SportsSweater_1"):
			iVar0 = 397;
			break;
		
		case joaat("Blank_SportsSweater_2"):
			iVar0 = 398;
			break;
		
		case joaat("Blank_SportsSweater_3"):
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case joaat("LR_M_Hair_000"):
			iVar0 = 400;
			break;
		
		case joaat("LR_M_Hair_001"):
			iVar0 = 401;
			break;
		
		case joaat("LR_M_Hair_002"):
			iVar0 = 402;
			break;
		
		case joaat("LR_M_Hair_003"):
			iVar0 = 403;
			break;
		
		case joaat("MP_Bennys_000_M"):
			iVar0 = 404;
			break;
		
		case joaat("MP_Bennys_001_M"):
			iVar0 = 405;
			break;
		
		case joaat("HW_Tee_000_M"):
			iVar0 = 406;
			break;
		
		case joaat("HW_Tee_001_M"):
			iVar0 = 407;
			break;
		
		case joaat("HW_Tee_002_M"):
			iVar0 = 408;
			break;
		
		case joaat("HW_Tee_003_M"):
			iVar0 = 409;
			break;
		
		case joaat("HW_Tee_004_M"):
			iVar0 = 410;
			break;
		
		case joaat("HW_Tee_005_M"):
			iVar0 = 411;
			break;
		
		case joaat("HW_Tee_006_M"):
			iVar0 = 412;
			break;
		
		case joaat("HW_Tee_007_M"):
			iVar0 = 413;
			break;
		
		case joaat("HW_Tee_008_M"):
			iVar0 = 414;
			break;
		
		case joaat("HW_Tee_009_M"):
			iVar0 = 415;
			break;
		
		case joaat("HW_Tee_010_M"):
			iVar0 = 416;
			break;
		
		case joaat("HW_Tee_011_M"):
			iVar0 = 417;
			break;
		
		case joaat("HW_Tee_012_M"):
			iVar0 = 418;
			break;
		
		case joaat("MP_IHeartLC_000_M"):
			iVar0 = 419;
			break;
		
		case joaat("MP_LR_Tat_000_M"):
			iVar0 = 420;
			break;
		
		case joaat("MP_LR_Tat_003_M"):
			iVar0 = 421;
			break;
		
		case joaat("MP_LR_Tat_006_M"):
			iVar0 = 422;
			break;
		
		case joaat("MP_LR_Tat_008_M"):
			iVar0 = 423;
			break;
		
		case joaat("MP_LR_Tat_011_M"):
			iVar0 = 424;
			break;
		
		case joaat("MP_LR_Tat_012_M"):
			iVar0 = 425;
			break;
		
		case joaat("MP_LR_Tat_016_M"):
			iVar0 = 426;
			break;
		
		case joaat("MP_LR_Tat_018_M"):
			iVar0 = 427;
			break;
		
		case joaat("MP_LR_Tat_019_M"):
			iVar0 = 428;
			break;
		
		case joaat("MP_LR_Tat_022_M"):
			iVar0 = 429;
			break;
		
		case joaat("MP_LR_Tat_028_M"):
			iVar0 = 430;
			break;
		
		case joaat("MP_LR_Tat_029_M"):
			iVar0 = 431;
			break;
		
		case joaat("MP_LR_Tat_030_M"):
			iVar0 = 432;
			break;
		
		case joaat("MP_LR_Tat_031_M"):
			iVar0 = 433;
			break;
		
		case joaat("MP_LR_Tat_032_M"):
			iVar0 = 434;
			break;
		
		case joaat("MP_LR_Tat_035_M"):
			iVar0 = 435;
			break;
		
		case joaat("MP_Hntr_000_M"):
			iVar0 = 436;
			break;
		
		case joaat("MP_Hntr_002_M"):
			iVar0 = 437;
			break;
		
		case joaat("MP_Hntr_003_M"):
			iVar0 = 438;
			break;
		
		case joaat("MP_Hntr_004_M"):
			iVar0 = 439;
			break;
		
		case joaat("MP_Hntr_006_M"):
			iVar0 = 440;
			break;
		
		case joaat("MP_Hntr_007_M"):
			iVar0 = 441;
			break;
		
		case joaat("MP_Hntr_008_M"):
			iVar0 = 442;
			break;
		
		case joaat("MP_Hntr_009_M"):
			iVar0 = 443;
			break;
		
		case joaat("MP_Hntr_012_M"):
			iVar0 = 444;
			break;
		
		case joaat("MP_Chianski_000_M"):
			iVar0 = 445;
			break;
		
		case joaat("MP_Chianski_001_M"):
			iVar0 = 446;
			break;
		
		case joaat("MP_Chianski_002_M"):
			iVar0 = 447;
			break;
		
		case joaat("MP_Chianski_003_M"):
			iVar0 = 448;
			break;
		
		case joaat("MP_Chianski_004_M"):
			iVar0 = 449;
			break;
		
		case joaat("MP_Chianski_005_M"):
			iVar0 = 450;
			break;
		
		case joaat("MP_Chianski_006_M"):
			iVar0 = 451;
			break;
		
		case joaat("MP_Hntr_001_M"):
			iVar0 = 452;
			break;
		
		case joaat("MP_Hntr_005_M"):
			iVar0 = 453;
			break;
		
		case joaat("MP_Hntr_010_M"):
			iVar0 = 454;
			break;
		
		case joaat("MP_Hntr_011_M"):
			iVar0 = 455;
			break;
		
		case joaat("MP_Dense_000_M"):
			iVar0 = 456;
			break;
		
		case joaat("MP_Dense_001_M"):
			iVar0 = 457;
			break;
		
		case joaat("MP_Dense_002_M"):
			iVar0 = 458;
			break;
		
		case joaat("MP_Dense_003_M"):
			iVar0 = 459;
			break;
		
		case joaat("MP_Dense_004_M"):
			iVar0 = 460;
			break;
		
		case joaat("MP_Dense_005_M"):
			iVar0 = 461;
			break;
		
		case joaat("MP_Dense_006_M"):
			iVar0 = 462;
			break;
		
		case joaat("MP_Dense_007_M"):
			iVar0 = 463;
			break;
		
		case joaat("LR_M_Hair_004"):
			iVar0 = 464;
			break;
		
		case joaat("LR_M_Hair_005"):
			iVar0 = 465;
			break;
		
		case joaat("LR_M_Hair_006"):
			iVar0 = 466;
			break;
		
		case joaat("Blank_Red_ValentinesTee"):
			iVar0 = 467;
			break;
		
		case joaat("Blank_Black_ValentinesTee"):
			iVar0 = 468;
			break;
		
		case joaat("Blank_White_ValentinesTee"):
			iVar0 = 469;
			break;
		
		case joaat("MP_Securoserv_000_M"):
			iVar0 = 470;
			break;
		
		case joaat("MP_Securoserv_000_Mb"):
			iVar0 = 471;
			break;
		
		case joaat("MP_exec_teams_000_M"):
			iVar0 = 472;
			break;
		
		case joaat("MP_exec_teams_001_M"):
			iVar0 = 473;
			break;
		
		case joaat("MP_exec_teams_002_M"):
			iVar0 = 474;
			break;
		
		case joaat("MP_exec_teams_003_M"):
			iVar0 = 475;
			break;
		
		case joaat("MP_exec_prizes_000_M"):
			iVar0 = 476;
			break;
		
		case joaat("MP_exec_prizes_001_M"):
			iVar0 = 477;
			break;
		
		case joaat("MP_exec_prizes_002_M"):
			iVar0 = 478;
			break;
		
		case joaat("MP_exec_prizes_003_M"):
			iVar0 = 479;
			break;
		
		case joaat("MP_exec_prizes_004_M"):
			iVar0 = 480;
			break;
		
		case joaat("MP_exec_prizes_005_M"):
			iVar0 = 481;
			break;
		
		case joaat("MP_exec_prizes_006_M"):
			iVar0 = 482;
			break;
		
		case joaat("MP_exec_prizes_007_M"):
			iVar0 = 483;
			break;
		
		case joaat("MP_exec_prizes_008_M"):
			iVar0 = 484;
			break;
		
		case joaat("MP_exec_prizes_009_M"):
			iVar0 = 485;
			break;
		
		case joaat("MP_exec_prizes_010_M"):
			iVar0 = 486;
			break;
		
		case joaat("MP_exec_prizes_011_M"):
			iVar0 = 487;
			break;
		
		case joaat("MP_exec_prizes_012_M"):
			iVar0 = 488;
			break;
		
		case joaat("MP_exec_prizes_013_M"):
			iVar0 = 489;
			break;
		
		case joaat("MP_exec_prizes_014_M"):
			iVar0 = 490;
			break;
		
		case joaat("MP_exec_prizes_015_M"):
			iVar0 = 491;
			break;
		
		case joaat("MP_MP_Stunt_Tat_000_M"):
			iVar0 = 492;
			break;
		
		case joaat("MP_MP_Stunt_tat_001_M"):
			iVar0 = 493;
			break;
		
		case joaat("MP_MP_Stunt_tat_002_M"):
			iVar0 = 494;
			break;
		
		case joaat("MP_MP_Stunt_tat_003_M"):
			iVar0 = 495;
			break;
		
		case joaat("MP_MP_Stunt_tat_004_M"):
			iVar0 = 496;
			break;
		
		case joaat("MP_MP_Stunt_tat_005_M"):
			iVar0 = 497;
			break;
		
		case joaat("MP_MP_Stunt_tat_006_M"):
			iVar0 = 498;
			break;
		
		case joaat("MP_MP_Stunt_tat_007_M"):
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_MP_Stunt_tat_008_M"):
			iVar0 = 500;
			break;
		
		case joaat("MP_MP_Stunt_tat_009_M"):
			iVar0 = 501;
			break;
		
		case joaat("MP_MP_Stunt_tat_010_M"):
			iVar0 = 502;
			break;
		
		case joaat("MP_MP_Stunt_tat_011_M"):
			iVar0 = 503;
			break;
		
		case joaat("MP_MP_Stunt_tat_012_M"):
			iVar0 = 504;
			break;
		
		case joaat("MP_MP_Stunt_tat_013_M"):
			iVar0 = 505;
			break;
		
		case joaat("MP_MP_Stunt_tat_014_M"):
			iVar0 = 506;
			break;
		
		case joaat("MP_MP_Stunt_tat_015_M"):
			iVar0 = 507;
			break;
		
		case joaat("MP_MP_Stunt_tat_016_M"):
			iVar0 = 508;
			break;
		
		case joaat("MP_MP_Stunt_tat_017_M"):
			iVar0 = 509;
			break;
		
		case joaat("MP_MP_Stunt_tat_018_M"):
			iVar0 = 510;
			break;
		
		case joaat("MP_MP_Stunt_tat_019_M"):
			iVar0 = 511;
			break;
		
		case joaat("MP_MP_Stunt_tat_020_M"):
			iVar0 = 512;
			break;
		
		case joaat("MP_MP_Stunt_tat_021_M"):
			iVar0 = 513;
			break;
		
		case joaat("MP_MP_Stunt_tat_022_M"):
			iVar0 = 514;
			break;
		
		case joaat("MP_MP_Stunt_tat_023_M"):
			iVar0 = 515;
			break;
		
		case joaat("MP_MP_Stunt_tat_024_M"):
			iVar0 = 516;
			break;
		
		case joaat("MP_MP_Stunt_tat_025_M"):
			iVar0 = 517;
			break;
		
		case joaat("MP_MP_Stunt_tat_026_M"):
			iVar0 = 518;
			break;
		
		case joaat("MP_MP_Stunt_tat_027_M"):
			iVar0 = 519;
			break;
		
		case joaat("MP_MP_Stunt_tat_028_M"):
			iVar0 = 520;
			break;
		
		case joaat("MP_MP_Stunt_tat_029_M"):
			iVar0 = 521;
			break;
		
		case joaat("MP_MP_Stunt_tat_030_M"):
			iVar0 = 522;
			break;
		
		case joaat("MP_MP_Stunt_tat_031_M"):
			iVar0 = 523;
			break;
		
		case joaat("MP_MP_Stunt_tat_032_M"):
			iVar0 = 524;
			break;
		
		case joaat("MP_MP_Stunt_tat_033_M"):
			iVar0 = 525;
			break;
		
		case joaat("MP_MP_Stunt_tat_034_M"):
			iVar0 = 526;
			break;
		
		case joaat("MP_MP_Stunt_tat_035_M"):
			iVar0 = 527;
			break;
		
		case joaat("MP_MP_Stunt_tat_036_M"):
			iVar0 = 528;
			break;
		
		case joaat("MP_MP_Stunt_tat_037_M"):
			iVar0 = 529;
			break;
		
		case joaat("MP_MP_Stunt_tat_038_M"):
			iVar0 = 530;
			break;
		
		case joaat("MP_MP_Stunt_tat_039_M"):
			iVar0 = 531;
			break;
		
		case joaat("MP_MP_Stunt_tat_040_M"):
			iVar0 = 532;
			break;
		
		case joaat("MP_MP_Stunt_tat_041_M"):
			iVar0 = 533;
			break;
		
		case joaat("MP_MP_Stunt_tat_042_M"):
			iVar0 = 534;
			break;
		
		case joaat("MP_MP_Stunt_tat_043_M"):
			iVar0 = 535;
			break;
		
		case joaat("MP_MP_Stunt_tat_044_M"):
			iVar0 = 536;
			break;
		
		case joaat("MP_MP_Stunt_tat_045_M"):
			iVar0 = 537;
			break;
		
		case joaat("MP_MP_Stunt_tat_046_M"):
			iVar0 = 538;
			break;
		
		case joaat("MP_MP_Stunt_tat_047_M"):
			iVar0 = 539;
			break;
		
		case joaat("MP_MP_Stunt_tat_048_M"):
			iVar0 = 540;
			break;
		
		case joaat("MP_MP_Stunt_tat_049_M"):
			iVar0 = 541;
			break;
		
		case joaat("MP_MP_Biker_Tat_000_M"):
			iVar0 = 542;
			break;
		
		case joaat("MP_MP_Biker_Tat_001_M"):
			iVar0 = 543;
			break;
		
		case joaat("MP_Biker_Hair_000_M"):
			iVar0 = 544;
			break;
		
		case joaat("MP_Biker_Hair_001_M"):
			iVar0 = 545;
			break;
		
		case joaat("MP_MP_Biker_Tat_002_M"):
			iVar0 = 546;
			break;
		
		case joaat("MP_MP_Biker_Tat_003_M"):
			iVar0 = 547;
			break;
		
		case joaat("MP_MP_Biker_Tat_004_M"):
			iVar0 = 548;
			break;
		
		case joaat("MP_MP_Biker_Tat_005_M"):
			iVar0 = 549;
			break;
		
		case joaat("MP_MP_Biker_Tat_006_M"):
			iVar0 = 550;
			break;
		
		case joaat("MP_MP_Biker_Tat_007_M"):
			iVar0 = 551;
			break;
		
		case joaat("MP_MP_Biker_Tat_008_M"):
			iVar0 = 552;
			break;
		
		case joaat("MP_MP_Biker_Tat_009_M"):
			iVar0 = 553;
			break;
		
		case joaat("MP_MP_Biker_Tat_010_M"):
			iVar0 = 554;
			break;
		
		case joaat("MP_MP_Biker_Tat_011_M"):
			iVar0 = 555;
			break;
		
		case joaat("MP_MP_Biker_Tat_012_M"):
			iVar0 = 556;
			break;
		
		case joaat("MP_MP_Biker_Tat_013_M"):
			iVar0 = 557;
			break;
		
		case joaat("MP_MP_Biker_Tat_014_M"):
			iVar0 = 558;
			break;
		
		case joaat("MP_MP_Biker_Tat_015_M"):
			iVar0 = 559;
			break;
		
		case joaat("MP_MP_Biker_Tat_016_M"):
			iVar0 = 560;
			break;
		
		case joaat("MP_MP_Biker_Tat_017_M"):
			iVar0 = 561;
			break;
		
		case joaat("MP_MP_Biker_Tat_018_M"):
			iVar0 = 562;
			break;
		
		case joaat("MP_MP_Biker_Tat_019_M"):
			iVar0 = 563;
			break;
		
		case joaat("MP_MP_Biker_Tat_020_M"):
			iVar0 = 564;
			break;
		
		case joaat("MP_MP_Biker_Tat_021_M"):
			iVar0 = 565;
			break;
		
		case joaat("MP_MP_Biker_Tat_022_M"):
			iVar0 = 566;
			break;
		
		case joaat("MP_MP_Biker_Tat_023_M"):
			iVar0 = 567;
			break;
		
		case joaat("MP_MP_Biker_Tat_024_M"):
			iVar0 = 568;
			break;
		
		case joaat("MP_Biker_Tee_000_M"):
			iVar0 = 569;
			break;
		
		case joaat("MP_Biker_Tee_001_M"):
			iVar0 = 570;
			break;
		
		case joaat("MP_Biker_Tee_002_M"):
			iVar0 = 571;
			break;
		
		case joaat("MP_Biker_Tee_003_M"):
			iVar0 = 572;
			break;
		
		case joaat("MP_Biker_Tee_004_M"):
			iVar0 = 573;
			break;
		
		case joaat("MP_Biker_Tee_005_M"):
			iVar0 = 574;
			break;
		
		case joaat("MP_Biker_Tee_006_M"):
			iVar0 = 575;
			break;
		
		case joaat("MP_Biker_Tee_007_M"):
			iVar0 = 576;
			break;
		
		case joaat("MP_Biker_Tee_008_M"):
			iVar0 = 577;
			break;
		
		case joaat("MP_Biker_Tee_009_M"):
			iVar0 = 578;
			break;
		
		case joaat("MP_Biker_Tee_010_M"):
			iVar0 = 579;
			break;
		
		case joaat("MP_Biker_Tee_011_M"):
			iVar0 = 580;
			break;
		
		case joaat("MP_Biker_Tee_012_M"):
			iVar0 = 581;
			break;
		
		case joaat("MP_Biker_Tee_013_M"):
			iVar0 = 582;
			break;
		
		case joaat("MP_Biker_Tee_014_M"):
			iVar0 = 583;
			break;
		
		case joaat("MP_Biker_Tee_015_M"):
			iVar0 = 584;
			break;
		
		case joaat("MP_Biker_Tee_016_M"):
			iVar0 = 585;
			break;
		
		case joaat("MP_Biker_Tee_017_M"):
			iVar0 = 586;
			break;
		
		case joaat("MP_Biker_Tee_018_M"):
			iVar0 = 587;
			break;
		
		case joaat("MP_Biker_Tee_019_M"):
			iVar0 = 588;
			break;
		
		case joaat("MP_Biker_Tee_020_M"):
			iVar0 = 589;
			break;
		
		case joaat("MP_Biker_Tee_021_M"):
			iVar0 = 590;
			break;
		
		case joaat("MP_Biker_Tee_022_M"):
			iVar0 = 591;
			break;
		
		case joaat("MP_Biker_Tee_023_M"):
			iVar0 = 592;
			break;
		
		case joaat("MP_Biker_Tee_024_M"):
			iVar0 = 593;
			break;
		
		case joaat("MP_Biker_Tee_025_M"):
			iVar0 = 594;
			break;
		
		case joaat("MP_Biker_Tee_026_M"):
			iVar0 = 595;
			break;
		
		case joaat("MP_Biker_Tee_027_M"):
			iVar0 = 596;
			break;
		
		case joaat("MP_Biker_Tee_028_M"):
			iVar0 = 597;
			break;
		
		case joaat("MP_Biker_Tee_029_M"):
			iVar0 = 598;
			break;
		
		case joaat("MP_Biker_Tee_030_M"):
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_031_M"):
			iVar0 = 600;
			break;
		
		case joaat("MP_Biker_Tee_032_M"):
			iVar0 = 601;
			break;
		
		case joaat("MP_Biker_Tee_033_M"):
			iVar0 = 602;
			break;
		
		case joaat("MP_Biker_Tee_034_M"):
			iVar0 = 603;
			break;
		
		case joaat("MP_Biker_Tee_035_M"):
			iVar0 = 604;
			break;
		
		case joaat("MP_Biker_Tee_036_M"):
			iVar0 = 605;
			break;
		
		case joaat("MP_Biker_Tee_037_M"):
			iVar0 = 606;
			break;
		
		case joaat("MP_Biker_Tee_038_M"):
			iVar0 = 607;
			break;
		
		case joaat("MP_Biker_Tee_039_M"):
			iVar0 = 608;
			break;
		
		case joaat("MP_Biker_Tee_040_M"):
			iVar0 = 609;
			break;
		
		case joaat("MP_Biker_Tee_041_M"):
			iVar0 = 610;
			break;
		
		case joaat("MP_Biker_Tee_042_M"):
			iVar0 = 611;
			break;
		
		case joaat("MP_Biker_Tee_043_M"):
			iVar0 = 612;
			break;
		
		case joaat("MP_Biker_Tee_044_M"):
			iVar0 = 613;
			break;
		
		case joaat("MP_Biker_Tee_045_M"):
			iVar0 = 614;
			break;
		
		case joaat("MP_Biker_Tee_046_M"):
			iVar0 = 615;
			break;
		
		case joaat("MP_Biker_Tee_047_M"):
			iVar0 = 616;
			break;
		
		case joaat("MP_Biker_Tee_048_M"):
			iVar0 = 617;
			break;
		
		case joaat("MP_Biker_Tee_049_M"):
			iVar0 = 618;
			break;
		
		case joaat("MP_Biker_Tee_050_M"):
			iVar0 = 619;
			break;
		
		case joaat("MP_Biker_Tee_051_M"):
			iVar0 = 620;
			break;
		
		case joaat("MP_Biker_Tee_052_M"):
			iVar0 = 621;
			break;
		
		case joaat("MP_Biker_Tee_053_M"):
			iVar0 = 622;
			break;
		
		case joaat("MP_Biker_Tee_054_M"):
			iVar0 = 623;
			break;
		
		case joaat("MP_Biker_Tee_055_M"):
			iVar0 = 624;
			break;
		
		case joaat("MP_Biker_Award_000_M"):
			iVar0 = 625;
			break;
		
		case joaat("MP_Biker_Award_001_M"):
			iVar0 = 626;
			break;
		
		case joaat("MP_Biker_Hair_002_M"):
			iVar0 = 627;
			break;
		
		case joaat("MP_Biker_Hair_003_M"):
			iVar0 = 628;
			break;
		
		case joaat("MP_Biker_Rank_000_M"):
			iVar0 = 629;
			break;
		
		case joaat("MP_Biker_Rank_001_M"):
			iVar0 = 630;
			break;
		
		case joaat("MP_Biker_Rank_002_M"):
			iVar0 = 631;
			break;
		
		case joaat("MP_Biker_Rank_003_M"):
			iVar0 = 632;
			break;
		
		case joaat("MP_Biker_Rank_004_M"):
			iVar0 = 633;
			break;
		
		case joaat("MP_Biker_Rank_005_M"):
			iVar0 = 634;
			break;
		
		case joaat("MP_Biker_Rank_006_M"):
			iVar0 = 635;
			break;
		
		case joaat("MP_Biker_Rank_007_M"):
			iVar0 = 636;
			break;
		
		case joaat("MP_Biker_Rank_008_M"):
			iVar0 = 637;
			break;
		
		case joaat("MP_Biker_Rank_009_M"):
			iVar0 = 638;
			break;
		
		case joaat("MP_Biker_Rank_010_M"):
			iVar0 = 639;
			break;
		
		case joaat("MP_Biker_Rank_011_M"):
			iVar0 = 640;
			break;
		
		case joaat("MP_Biker_Rank_012_M"):
			iVar0 = 641;
			break;
		
		case joaat("MP_Biker_Rank_013_M"):
			iVar0 = 642;
			break;
		
		case joaat("MP_Biker_Rank_014_M"):
			iVar0 = 643;
			break;
		
		case joaat("MP_Biker_Rank_015_M"):
			iVar0 = 644;
			break;
		
		case joaat("MP_Biker_Rank_016_M"):
			iVar0 = 645;
			break;
		
		case joaat("MP_Biker_Rank_017_M"):
			iVar0 = 646;
			break;
		
		case joaat("Blank_Hoody_M_0"):
			iVar0 = 647;
			break;
		
		case joaat("Blank_Hoody_M_1"):
			iVar0 = 648;
			break;
		
		case joaat("MP_MP_Biker_Tat_025_M"):
			iVar0 = 649;
			break;
		
		case joaat("MP_MP_Biker_Tat_026_M"):
			iVar0 = 650;
			break;
		
		case joaat("MP_MP_Biker_Tat_027_M"):
			iVar0 = 651;
			break;
		
		case joaat("MP_MP_Biker_Tat_028_M"):
			iVar0 = 652;
			break;
		
		case joaat("MP_MP_Biker_Tat_029_M"):
			iVar0 = 653;
			break;
		
		case joaat("MP_MP_Biker_Tat_030_M"):
			iVar0 = 654;
			break;
		
		case joaat("MP_MP_Biker_Tat_031_M"):
			iVar0 = 655;
			break;
		
		case joaat("MP_MP_Biker_Tat_032_M"):
			iVar0 = 656;
			break;
		
		case joaat("MP_MP_Biker_Tat_033_M"):
			iVar0 = 657;
			break;
		
		case joaat("MP_MP_Biker_Tat_034_M"):
			iVar0 = 658;
			break;
		
		case joaat("MP_MP_Biker_Tat_035_M"):
			iVar0 = 659;
			break;
		
		case joaat("MP_MP_Biker_Tat_036_M"):
			iVar0 = 660;
			break;
		
		case joaat("MP_MP_Biker_Tat_037_M"):
			iVar0 = 661;
			break;
		
		case joaat("MP_MP_Biker_Tat_038_M"):
			iVar0 = 662;
			break;
		
		case joaat("MP_MP_Biker_Tat_039_M"):
			iVar0 = 663;
			break;
		
		case joaat("MP_MP_Biker_Tat_040_M"):
			iVar0 = 664;
			break;
		
		case joaat("MP_MP_Biker_Tat_041_M"):
			iVar0 = 665;
			break;
		
		case joaat("MP_MP_Biker_Tat_042_M"):
			iVar0 = 666;
			break;
		
		case joaat("MP_MP_Biker_Tat_043_M"):
			iVar0 = 667;
			break;
		
		case joaat("MP_MP_Biker_Tat_044_M"):
			iVar0 = 668;
			break;
		
		case joaat("MP_MP_Biker_Tat_045_M"):
			iVar0 = 669;
			break;
		
		case joaat("MP_MP_Biker_Tat_046_M"):
			iVar0 = 670;
			break;
		
		case joaat("MP_MP_Biker_Tat_047_M"):
			iVar0 = 671;
			break;
		
		case joaat("MP_MP_Biker_Tat_048_M"):
			iVar0 = 672;
			break;
		
		case joaat("MP_MP_Biker_Tat_049_M"):
			iVar0 = 673;
			break;
		
		case joaat("MP_MP_Biker_Tat_050_M"):
			iVar0 = 674;
			break;
		
		case joaat("MP_MP_Biker_Tat_051_M"):
			iVar0 = 675;
			break;
		
		case joaat("MP_MP_Biker_Tat_052_M"):
			iVar0 = 676;
			break;
		
		case joaat("MP_MP_Biker_Tat_053_M"):
			iVar0 = 677;
			break;
		
		case joaat("MP_MP_Biker_Tat_054_M"):
			iVar0 = 678;
			break;
		
		case joaat("MP_MP_Biker_Tat_055_M"):
			iVar0 = 679;
			break;
		
		case joaat("MP_MP_Biker_Tat_056_M"):
			iVar0 = 680;
			break;
		
		case joaat("MP_MP_Biker_Tat_057_M"):
			iVar0 = 681;
			break;
		
		case joaat("MP_MP_Biker_Tat_058_M"):
			iVar0 = 682;
			break;
		
		case joaat("MP_Biker_Hair_004_M"):
			iVar0 = 683;
			break;
		
		case joaat("MP_MP_Biker_Tat_059_M"):
			iVar0 = 684;
			break;
		
		case joaat("MP_MP_Biker_Tat_060_M"):
			iVar0 = 685;
			break;
		
		case joaat("MP_Biker_Hair_005_M"):
			iVar0 = 686;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_000_M"):
			iVar0 = 687;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_001_M"):
			iVar0 = 688;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_002_M"):
			iVar0 = 689;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_003_M"):
			iVar0 = 690;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_004_M"):
			iVar0 = 691;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_005_M"):
			iVar0 = 692;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_006_M"):
			iVar0 = 693;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_007_M"):
			iVar0 = 694;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_008_M"):
			iVar0 = 695;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_009_M"):
			iVar0 = 696;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_010_M"):
			iVar0 = 697;
			break;
		
		case joaat("MP_MP_ImportExport_Tat_011_M"):
			iVar0 = 698;
			break;
		
		case joaat("MP_Gunrunning_Hair_M_000_M"):
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Hair_M_001_M"):
			iVar0 = 700;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_000_M"):
			iVar0 = 701;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_001_M"):
			iVar0 = 702;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_002_M"):
			iVar0 = 703;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_003_M"):
			iVar0 = 704;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_004_M"):
			iVar0 = 705;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_005_M"):
			iVar0 = 706;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_006_M"):
			iVar0 = 707;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_007_M"):
			iVar0 = 708;
			break;
		
		case joaat("MP_Gunrunning_Award_000_M"):
			iVar0 = 709;
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
			iVar0 = 710;
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
			iVar0 = 711;
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
			iVar0 = 712;
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
			iVar0 = 713;
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
			iVar0 = 714;
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
			iVar0 = 715;
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
			iVar0 = 716;
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
			iVar0 = 717;
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
			iVar0 = 718;
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
			iVar0 = 719;
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
			iVar0 = 720;
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
			iVar0 = 721;
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
			iVar0 = 722;
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
			iVar0 = 723;
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
			iVar0 = 724;
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
			iVar0 = 725;
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
			iVar0 = 726;
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
			iVar0 = 727;
			break;
		
		case joaat("Blank_GunrunTShirt_1_M"):
			iVar0 = 728;
			break;
		
		case joaat("Blank_GunrunTShirt_2_M"):
			iVar0 = 729;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_008_M"):
			iVar0 = 730;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_009_M"):
			iVar0 = 731;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_010_M"):
			iVar0 = 732;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_011_M"):
			iVar0 = 733;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_012_M"):
			iVar0 = 734;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_013_M"):
			iVar0 = 735;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_014_M"):
			iVar0 = 736;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_015_M"):
			iVar0 = 737;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_016_M"):
			iVar0 = 738;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_017_M"):
			iVar0 = 739;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_018_M"):
			iVar0 = 740;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_019_M"):
			iVar0 = 741;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_020_M"):
			iVar0 = 742;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_021_M"):
			iVar0 = 743;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_022_M"):
			iVar0 = 744;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_023_M"):
			iVar0 = 745;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_024_M"):
			iVar0 = 746;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_025_M"):
			iVar0 = 747;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_026_M"):
			iVar0 = 748;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_027_M"):
			iVar0 = 749;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_028_M"):
			iVar0 = 750;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_029_M"):
			iVar0 = 751;
			break;
		
		case joaat("MP_Gunrunning_Tattoo_030_M"):
			iVar0 = 752;
			break;
		
		case joaat("MP_Gunrunning_Award_019_M"):
			iVar0 = 753;
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
			iVar0 = 754;
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
			iVar0 = 755;
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
			iVar0 = 756;
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
			iVar0 = 757;
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
			iVar0 = 758;
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
			iVar0 = 759;
			break;
		
		case joaat("MP_Airraces_Tattoo_000_M"):
			iVar0 = 760;
			break;
		
		case joaat("MP_Airraces_Tattoo_001_M"):
			iVar0 = 761;
			break;
		
		case joaat("MP_Airraces_Tattoo_002_M"):
			iVar0 = 762;
			break;
		
		case joaat("MP_Airraces_Tattoo_003_M"):
			iVar0 = 763;
			break;
		
		case joaat("MP_Airraces_Tattoo_004_M"):
			iVar0 = 764;
			break;
		
		case joaat("MP_Airraces_Tattoo_005_M"):
			iVar0 = 765;
			break;
		
		case joaat("MP_Airraces_Tattoo_006_M"):
			iVar0 = 766;
			break;
		
		case joaat("MP_Airraces_Tattoo_007_M"):
			iVar0 = 767;
			break;
		
		case joaat("MP_Smuggler_Tattoo_000_M"):
			iVar0 = 768;
			break;
		
		case joaat("MP_Smuggler_Tattoo_001_M"):
			iVar0 = 769;
			break;
		
		case joaat("MP_Smuggler_Tattoo_002_M"):
			iVar0 = 770;
			break;
		
		case joaat("MP_Smuggler_Tattoo_003_M"):
			iVar0 = 771;
			break;
		
		case joaat("MP_Smuggler_Tattoo_004_M"):
			iVar0 = 772;
			break;
		
		case joaat("MP_Smuggler_Tattoo_005_M"):
			iVar0 = 773;
			break;
		
		case joaat("MP_Smuggler_Tattoo_006_M"):
			iVar0 = 774;
			break;
		
		case joaat("MP_Smuggler_Tattoo_007_M"):
			iVar0 = 775;
			break;
		
		case joaat("MP_Smuggler_Tattoo_008_M"):
			iVar0 = 776;
			break;
		
		case joaat("MP_Smuggler_Tattoo_009_M"):
			iVar0 = 777;
			break;
		
		case joaat("MP_Smuggler_Tattoo_010_M"):
			iVar0 = 778;
			break;
		
		case joaat("MP_Smuggler_Tattoo_011_M"):
			iVar0 = 779;
			break;
		
		case joaat("MP_Smuggler_Tattoo_012_M"):
			iVar0 = 780;
			break;
		
		case joaat("MP_Smuggler_Tattoo_013_M"):
			iVar0 = 781;
			break;
		
		case joaat("MP_Smuggler_Tattoo_014_M"):
			iVar0 = 782;
			break;
		
		case joaat("MP_Smuggler_Tattoo_015_M"):
			iVar0 = 783;
			break;
		
		case joaat("MP_Smuggler_Tattoo_016_M"):
			iVar0 = 784;
			break;
		
		case joaat("MP_Smuggler_Tattoo_017_M"):
			iVar0 = 785;
			break;
		
		case joaat("MP_Smuggler_Tattoo_018_M"):
			iVar0 = 786;
			break;
		
		case joaat("MP_Smuggler_Tattoo_019_M"):
			iVar0 = 787;
			break;
		
		case joaat("MP_Smuggler_Tattoo_020_M"):
			iVar0 = 788;
			break;
		
		case joaat("MP_Smuggler_Tattoo_021_M"):
			iVar0 = 789;
			break;
		
		case joaat("MP_Smuggler_Tattoo_022_M"):
			iVar0 = 790;
			break;
		
		case joaat("MP_Smuggler_Tattoo_023_M"):
			iVar0 = 791;
			break;
		
		case joaat("MP_Smuggler_Tattoo_024_M"):
			iVar0 = 792;
			break;
		
		case joaat("MP_Smuggler_Tattoo_025_M"):
			iVar0 = 793;
			break;
		
		case joaat("M_TankTop_Smug_5_3_a"):
			iVar0 = 794;
			break;
		
		case joaat("M_TankTop_Smug_5_17_a"):
			iVar0 = 795;
			break;
		
		case joaat("M_TankTop_Smug_5_10_a"):
			iVar0 = 796;
			break;
		
		case joaat("M_TankTop_Smug_5_11_a"):
			iVar0 = 797;
			break;
		
		case joaat("M_TankTop_Smug_5_12_a"):
			iVar0 = 798;
			break;
		
		case joaat("M_TankTop_Smug_5_13_a"):
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case joaat("M_TankTop_Smug_5_20_a"):
			iVar0 = 800;
			break;
		
		case joaat("M_TankTop_Smug_5_21_a"):
			iVar0 = 801;
			break;
		
		case joaat("M_TankTop_Smug_5_23_a"):
			iVar0 = 802;
			break;
		
		case joaat("M_TankTop_Smug_5_22_a"):
			iVar0 = 803;
			break;
		
		case joaat("M_TankTop_Smug_5_5_a"):
			iVar0 = 804;
			break;
		
		case joaat("M_TankTop_Smug_5_18_a"):
			iVar0 = 805;
			break;
		
		case joaat("M_TankTop_Smug_5_0_a"):
			iVar0 = 806;
			break;
		
		case joaat("M_TankTop_Smug_5_3_b"):
			iVar0 = 807;
			break;
		
		case joaat("M_TankTop_Smug_5_25_a"):
			iVar0 = 808;
			break;
		
		case joaat("M_TankTop_Smug_5_7_a"):
			iVar0 = 809;
			break;
		
		case joaat("M_TankTop_Smug_5_4_a"):
			iVar0 = 810;
			break;
		
		case joaat("M_TankTop_Smug_5_1_a"):
			iVar0 = 811;
			break;
		
		case joaat("M_TankTop_Smug_5_9_a"):
			iVar0 = 812;
			break;
		
		case joaat("Blank_White_SmugglerRolled"):
			iVar0 = 813;
			break;
		
		case joaat("Blank_Black_SmugglerRolled"):
			iVar0 = 814;
			break;
		
		case joaat("Blank_Red_SmugglerRolled"):
			iVar0 = 815;
			break;
		
		case joaat("Blank_Moss_SmugglerRolled"):
			iVar0 = 816;
			break;
		
		case joaat("Blank_Sand_SmugglerRolled"):
			iVar0 = 817;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_40();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_96(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_96(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	if (Local_323.f_1 != -1)
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 11))
		{
			Var0 = { func_65(Local_401[Local_323.f_1 /*2*/]) };
			iVar16 = func_124(Local_401[Local_323.f_1 /*2*/]);
			func_123(uParam0, "DCTL_WINNERV2", &Var0, 0, 1, iVar16);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 11);
		}
	}
	else if (!unk_0xC80D31E4B587871C(uParam0->f_2, 11))
	{
		func_53(uParam0, "DCTL_DRAW", 0, 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 11);
	}
}

void func_123(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_55(sParam1);
		unk_0xD07D5CD276368D36(iParam3);
		unk_0xD07D5CD276368D36(iParam4);
		func_54(sParam2);
		unk_0xD07D5CD276368D36(iParam5);
		unk_0x271AA5469AF471B3();
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 211;
		
		case 1:
			return 213;
		
		case 2:
			return 210;
		
		case 3:
			return 209;
		
		default:
	}
	return 0;
}

void func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			uParam0->f_35[iVar0 /*79*/].f_8 = uParam0->f_35[iVar0 /*79*/].f_2;
			uParam0->f_35[iVar0 /*79*/].f_9 = uParam0->f_35[iVar0 /*79*/].f_2;
		}
		iVar0++;
	}
	func_156(uParam0);
	func_150(uParam0);
	func_148(uParam0);
	func_144(uParam0);
	func_143(uParam0);
	if (unk_0xC80D31E4B587871C(iLocal_254, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
			{
				func_128(uParam0, &(uParam0->f_35), iVar0);
				if (unk_0xC80D31E4B587871C(iLocal_254, (11 + iVar0)))
				{
					unk_0x0EE72DB1CD8A3B86(&iLocal_254, (11 + iVar0));
				}
				if (unk_0xC80D31E4B587871C(iLocal_254, (7 + iVar0)))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_254, (11 + iVar0));
					unk_0x0EE72DB1CD8A3B86(&iLocal_254, (7 + iVar0));
				}
			}
			else if (uParam0->f_35[iVar0 /*79*/] == 2)
			{
				func_16(&(uParam0->f_35), 3, iVar0);
				uParam0->f_35[iVar0 /*79*/].f_1 = 0;
			}
			iVar0++;
		}
		if (!func_12(&uLocal_256))
		{
			func_10(&uLocal_256, 0, 0);
		}
		else if (func_8(&uLocal_256, 500, 0))
		{
			iVar1 = unk_0x5C6098C2BAD00378();
			if (iVar1 == 1)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_183(uParam0, 10);
				return;
			}
			func_126(4, func_127(uParam0->f_35[iLocal_253 /*79*/].f_14, uParam0->f_35[iLocal_253 /*79*/].f_15, 9974), iLocal_253, 99999);
			func_9(&uLocal_256);
		}
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 4) && uParam0->f_35[iLocal_253 /*79*/] == 2)
		{
			unk_0x39A975B87A12AB75("DCTL_GAMEHELP", 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 5);
		}
		if (Local_323.f_0 >= 8)
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Music_Win", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				unk_0x0B9D04994D02CC2F(uParam0->f_35[iVar0 /*79*/].f_5);
				iVar0++;
			}
			if (unk_0x7CCE41E8E97028E7())
			{
				unk_0x8E7C072C41DF97BF();
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_254, 0);
			func_183(uParam0, 8);
		}
	}
	else if (iLocal_255 != -1 && unk_0xEBD55014C579F626() >= iLocal_255)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_254, 0);
	}
}

void func_126(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_0 = -650311207;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar6 = func_20(0);
	if (!iVar6 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iVar6);
	}
}

float func_127(float fParam0, float fParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

void func_128(var uParam0, var uParam1, int iParam2)
{
	switch ((*uParam1)[iParam2 /*79*/])
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_401[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
				
				case 1:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_401[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
				
				case 2:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_401[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
				
				case 3:
					(uParam1[iParam2 /*79*/])->f_4 = 0;
					(uParam1[iParam2 /*79*/])->f_1 = 255;
					(uParam1[iParam2 /*79*/])->f_3 = 0;
					(uParam1[iParam2 /*79*/])->f_9 = -1;
					func_142(Local_401[iParam2 /*2*/], &((uParam1[iParam2 /*79*/])->f_2), &((uParam1[iParam2 /*79*/])->f_14), &((uParam1[iParam2 /*79*/])->f_15), &((uParam1[iParam2 /*79*/])->f_8));
					break;
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_254, (15 + iParam2));
			func_141(uParam1, iParam2);
			func_15(&((uParam1[iParam2 /*79*/])->f_18));
			func_16(uParam1, 1, iParam2);
			break;
		
		case 1:
			if (Local_323.f_0 == 7)
			{
				func_16(uParam1, 2, iParam2);
			}
			break;
		
		case 2:
			if (iParam2 == iLocal_253)
			{
				if (!unk_0x0F30C1F1717A6437())
				{
					func_140(uParam1);
				}
			}
			if (func_139(uParam0) <= 1)
			{
				(uParam1[iParam2 /*79*/])->f_17 = 0f;
				(uParam1[iParam2 /*79*/])->f_9 = (uParam1[iParam2 /*79*/])->f_2;
			}
			if (!unk_0xC80D31E4B587871C(iLocal_254, (3 + iParam2)))
			{
				func_136(uParam0, uParam1, iParam2);
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_254, (3 + iParam2));
			if (iParam2 == iLocal_253)
			{
				func_132(uParam0, uParam1, 1);
				if (func_131(uParam0, uParam1, iLocal_253))
				{
					func_130(iLocal_253);
				}
			}
			else if (func_131(uParam0, uParam1, iParam2))
			{
				(uParam1[iParam2 /*79*/])->f_17 = 0f;
			}
			break;
		
		case 3:
			func_129(uParam1, iParam2);
			break;
	}
}

void func_129(var uParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = unk_0xBBDA792448DB5A89((uParam0[iParam1 /*79*/])->f_1);
	fVar0 = (fVar0 - (300f * unk_0x0000000050597EE2()));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	(uParam0[iParam1 /*79*/])->f_1 = unk_0xF34EE736CF047844(fVar0);
}

void func_130(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1737286402;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam0;
	iVar3 = func_20(1);
	if (!iVar3 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 3, iVar3);
	}
}

int func_131(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0.5f - ((0.5f - (uParam1[iParam2 /*79*/])->f_14) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	switch ((uParam1[iParam2 /*79*/])->f_2)
	{
		case 0:
			if (((uParam1[iParam2 /*79*/])->f_15 - (0.012f * 0.42f)) <= 0.229f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (((uParam1[iParam2 /*79*/])->f_15 + (0.012f * 0.42f)) >= 0.851f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 - (fVar1 * 0.42f)) <= (0.5f - (0.339f * uParam0->f_9))
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 + (fVar1 * 0.42f)) >= (0.5f + (0.343f * uParam0->f_9))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_132(var uParam0, var uParam1, bool bParam2)
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
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	float fVar27;
	
	fVar0 = (0.5f - ((0.5f - (uParam1[iLocal_253 /*79*/])->f_14) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	iVar20 = ((uParam1[iLocal_253 /*79*/])->f_4 - 1);
	if (iVar20 > -1 && iVar20 < 59)
	{
		func_135((uParam1[iLocal_253 /*79*/])->f_18[iVar20], &fVar12, &fVar13, 9974);
		if ((uParam1[iLocal_253 /*79*/])->f_2 == 2)
		{
			fVar14 = ((uParam1[iLocal_253 /*79*/])->f_14 + (fVar1 * 0.5f));
			fVar15 = (uParam1[iLocal_253 /*79*/])->f_15;
			if (fVar14 > fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_253 /*79*/])->f_2 == 3)
		{
			fVar14 = ((uParam1[iLocal_253 /*79*/])->f_14 - (fVar1 * 0.5f));
			fVar15 = (uParam1[iLocal_253 /*79*/])->f_15;
			if (fVar14 < fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_253 /*79*/])->f_2 == 0)
		{
			fVar14 = (uParam1[iLocal_253 /*79*/])->f_14;
			fVar15 = ((uParam1[iLocal_253 /*79*/])->f_15 + (0.012f * 0.5f));
			if (fVar15 > fVar13)
			{
				fVar15 = fVar13;
			}
		}
		else if ((uParam1[iLocal_253 /*79*/])->f_2 == 1)
		{
			fVar14 = (uParam1[iLocal_253 /*79*/])->f_14;
			fVar15 = ((uParam1[iLocal_253 /*79*/])->f_15 - (0.012f * 0.5f));
			if (fVar15 < fVar13)
			{
				fVar15 = fVar13;
			}
		}
	}
	iVar21 = 0;
	while (iVar21 <= 3)
	{
		bVar23 = false;
		if (iVar21 == iLocal_253)
		{
		}
		else if ((*uParam1)[iVar21 /*79*/] == 2 && (*uParam1)[iLocal_253 /*79*/] == 2)
		{
			iVar22 = 0;
			while (iVar22 <= 59)
			{
				func_135((uParam1[iVar21 /*79*/])->f_18[iVar22], &fVar2, &fVar3, 9974);
				if (fVar2 != 0f || fVar3 != 0f)
				{
					if (iVar22 + 1 >= 60)
					{
						fVar4 = (uParam1[iVar21 /*79*/])->f_14;
						fVar5 = (uParam1[iVar21 /*79*/])->f_15;
					}
					else
					{
						func_135((uParam1[iVar21 /*79*/])->f_18[iVar22 + 1], &fVar4, &fVar5, 9974);
						if (fVar4 == 0f && fVar5 == 0f)
						{
							fVar4 = (uParam1[iVar21 /*79*/])->f_14;
							fVar5 = (uParam1[iVar21 /*79*/])->f_15;
						}
					}
					fVar6 = (fVar4 - fVar2);
					fVar7 = (fVar5 - fVar3);
					fVar8 = (fVar2 + (fVar6 * 0.5f));
					fVar9 = (fVar3 + (fVar7 * 0.5f));
					if (unk_0xE97272C977DEADD3(fVar6) > 0.001f)
					{
						fVar10 = (unk_0xE97272C977DEADD3(fVar6) + (0.003f * 0.5f));
						fVar11 = (0.003f * uParam0->f_8);
					}
					else if (unk_0xE97272C977DEADD3(fVar7) > 0.001f)
					{
						fVar10 = 0.003f;
						fVar11 = (unk_0xE97272C977DEADD3(fVar7) + ((0.003f * 0.5f) * uParam0->f_8));
					}
					else
					{
						fVar10 = 0.0001f;
						fVar11 = 0.0001f;
					}
					fVar24 = (0.5f - ((0.5f - fVar8) * uParam0->f_9));
					fVar25 = (fVar10 * uParam0->f_9);
					bVar26 = false;
					if ((uParam1[iLocal_253 /*79*/])->f_2 == 2 || (uParam1[iLocal_253 /*79*/])->f_2 == 3)
					{
						bVar26 = func_134(fVar0, (uParam1[iLocal_253 /*79*/])->f_15, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, (fVar25 * 0.95f), fVar11);
					}
					if ((uParam1[iLocal_253 /*79*/])->f_2 == 0 || (uParam1[iLocal_253 /*79*/])->f_2 == 1)
					{
						bVar26 = func_134(fVar0, (uParam1[iLocal_253 /*79*/])->f_15, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, fVar25, (fVar11 * 0.95f));
					}
					if (bVar26)
					{
						if (bParam2)
						{
							func_130(iLocal_253);
						}
						bVar23 = true;
					}
					else if (!unk_0xC80D31E4B587871C(iLocal_254, (7 + iVar21)) && unk_0xC80D31E4B587871C(iLocal_254, (11 + iVar21)))
					{
						if (iVar22 == ((uParam1[iVar21 /*79*/])->f_4 - 1))
						{
							if (((fVar12 != 0f && fVar13 != 0f) && fVar14 != 0f) && fVar15 != 0f)
							{
								func_133(uParam0, fVar12, fVar13, fVar14, fVar15, &fVar16, &fVar17, &fVar18, &fVar19, 0.0015f);
								if (func_134(fVar24, fVar9, fVar25, fVar11, fVar16, fVar17, fVar18, fVar19))
								{
									if (bParam2)
									{
										func_130(iLocal_253);
									}
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar22++;
			}
			if (!bVar23)
			{
				fVar27 = (0.5f - ((0.5f - (uParam1[iVar21 /*79*/])->f_14) * uParam0->f_9));
				if (func_134(fVar0, (uParam1[iLocal_253 /*79*/])->f_15, (fVar1 * 0.42f), (0.012f * 0.42f), fVar27, (uParam1[iVar21 /*79*/])->f_15, (fVar1 * 0.42f), (0.012f * 0.42f)))
				{
					if (bParam2)
					{
						func_130(iLocal_253);
					}
				}
			}
		}
		iVar21++;
	}
}

void func_133(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	float fVar0;
	float fVar1;
	
	if (fParam9 == 0f)
	{
		fParam9 = 0.003f;
	}
	fVar0 = (fParam3 - fParam1);
	fVar1 = (fParam4 - fParam2);
	*uParam5 = (fParam1 + (fVar0 * 0.5f));
	*uParam6 = (fParam2 + (fVar1 * 0.5f));
	if (unk_0xE97272C977DEADD3(fVar0) > 0.001f)
	{
		*uParam7 = (unk_0xE97272C977DEADD3(fVar0) + (fParam9 * 0.5f));
		*uParam8 = (fParam9 * uParam0->f_8);
	}
	else
	{
		*uParam7 = fParam9;
		*uParam8 = (unk_0xE97272C977DEADD3(fVar1) + ((fParam9 * 0.5f) * uParam0->f_8));
	}
	*uParam5 = (0.5f - ((0.5f - *uParam5) * uParam0->f_9));
	*uParam7 = (*uParam7 * uParam0->f_9);
}

int func_134(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f))
	{
		return 0;
	}
	return 1;
}

void func_135(float fParam0, float fParam1, float fParam2, int iParam3)
{
	*fParam1 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

void func_136(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iParam2)) && (*uParam1)[iParam2 /*79*/] == 2)
	{
		if (unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
		{
			if (Local_401[iParam2 /*2*/] == 0)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_1", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_401[iParam2 /*2*/] == 1)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_2", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_401[iParam2 /*2*/] == 2)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_3", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_5, "Trail_4", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
		}
		if (!unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
		{
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "X", (uParam1[iParam2 /*79*/])->f_14);
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "Y", (uParam1[iParam2 /*79*/])->f_15);
		}
	}
	if ((uParam1[iParam2 /*79*/])->f_9 != (uParam1[iParam2 /*79*/])->f_2 && (uParam1[iParam2 /*79*/])->f_4 > 0)
	{
		func_135((uParam1[iParam2 /*79*/])->f_18[((uParam1[iParam2 /*79*/])->f_4 - 1)], &fVar0, &fVar1, 9974);
		fVar4 = 0.2f;
		if (((((uParam1[iParam2 /*79*/])->f_9 == 0 && (uParam1[iParam2 /*79*/])->f_10[1] == 1) || ((uParam1[iParam2 /*79*/])->f_9 == 1 && (uParam1[iParam2 /*79*/])->f_10[1] == 0)) || ((uParam1[iParam2 /*79*/])->f_9 == 2 && (uParam1[iParam2 /*79*/])->f_10[1] == 3)) || ((uParam1[iParam2 /*79*/])->f_9 == 3 && (uParam1[iParam2 /*79*/])->f_10[1] == 2))
		{
			fVar4 = 0.25f;
		}
		if ((uParam1[iParam2 /*79*/])->f_9 == 0 || (uParam1[iParam2 /*79*/])->f_9 == 1)
		{
			fVar2 = unk_0xE97272C977DEADD3(((uParam1[iParam2 /*79*/])->f_14 - fVar0));
			fVar3 = ((0.0068f * uParam0->f_8) * fVar4);
		}
		else if ((uParam1[iParam2 /*79*/])->f_9 == 2 || (uParam1[iParam2 /*79*/])->f_9 == 3)
		{
			fVar2 = unk_0xE97272C977DEADD3(((uParam1[iParam2 /*79*/])->f_15 - fVar1));
			fVar3 = ((0.0068f * uParam0->f_8) * (fVar4 * uParam0->f_8));
		}
		if (fVar2 >= fVar3 || (iParam2 != iLocal_253 && !unk_0xC80D31E4B587871C(iLocal_254, (15 + iParam2))))
		{
			if (iParam2 == iLocal_253)
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_7, "Turn", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_126((uParam1[iParam2 /*79*/])->f_9, func_127((uParam1[iParam2 /*79*/])->f_14, (uParam1[iParam2 /*79*/])->f_15, 9974), iLocal_253, uLocal_248[iLocal_253]);
				func_9(&uLocal_256);
				uLocal_248[iLocal_253]++;
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0((uParam1[iParam2 /*79*/])->f_7, "Turn_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_7, "X", (uParam1[iParam2 /*79*/])->f_14);
			unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_7, "Y", (uParam1[iParam2 /*79*/])->f_15);
			if (!unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
			{
				unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "Turning", 1f);
			}
			(uParam1[iParam2 /*79*/])->f_2 = (uParam1[iParam2 /*79*/])->f_9;
			(uParam1[iParam2 /*79*/])->f_10[1] = (uParam1[iParam2 /*79*/])->f_10[0];
			(uParam1[iParam2 /*79*/])->f_10[0] = (uParam1[iParam2 /*79*/])->f_2;
			(uParam1[iParam2 /*79*/])->f_13 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else if (!unk_0xCCCA18C9A006FF83((uParam1[iParam2 /*79*/])->f_5))
	{
		unk_0x922FC70048B5A79D((uParam1[iParam2 /*79*/])->f_5, "Turning", 0f);
	}
	func_138(uParam0, iParam2);
	func_137(uParam0, uParam1, iParam2);
	func_141(uParam1, iParam2);
	unk_0x872F1C1F8587CCC7(&iLocal_254, (3 + iParam2));
}

void func_137(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0.06f * (uParam1[iParam2 /*79*/])->f_17);
	fVar1 = ((0.06f * (uParam1[iParam2 /*79*/])->f_17) * uParam0->f_8);
	switch ((uParam1[iParam2 /*79*/])->f_2)
	{
		case 0:
			(uParam1[iParam2 /*79*/])->f_15 = ((uParam1[iParam2 /*79*/])->f_15 - (fVar1 * unk_0x0000000050597EE2()));
			break;
		
		case 1:
			(uParam1[iParam2 /*79*/])->f_15 = ((uParam1[iParam2 /*79*/])->f_15 + (fVar1 * unk_0x0000000050597EE2()));
			break;
		
		case 2:
			(uParam1[iParam2 /*79*/])->f_14 = ((uParam1[iParam2 /*79*/])->f_14 - (fVar0 * unk_0x0000000050597EE2()));
			break;
		
		case 3:
			(uParam1[iParam2 /*79*/])->f_14 = ((uParam1[iParam2 /*79*/])->f_14 + (fVar0 * unk_0x0000000050597EE2()));
			break;
	}
	(uParam1[iParam2 /*79*/])->f_17 = 1f;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (uParam0->f_35[iParam1 /*79*/].f_4 == 0)
	{
		uParam0->f_35[iParam1 /*79*/].f_18[uParam0->f_35[iParam1 /*79*/].f_4] = func_127(uParam0->f_35[iParam1 /*79*/].f_14, uParam0->f_35[iParam1 /*79*/].f_15, 9974);
		uParam0->f_35[iParam1 /*79*/].f_4++;
	}
	if (uParam0->f_35[iParam1 /*79*/].f_2 != uParam0->f_35[iParam1 /*79*/].f_8)
	{
		if (uParam0->f_35[iParam1 /*79*/].f_4 >= 60)
		{
			iVar0 = 0;
			while (iVar0 <= 59)
			{
				if (iVar0 == 59)
				{
					uParam0->f_35[iParam1 /*79*/].f_18[iVar0] = func_127(uParam0->f_35[iParam1 /*79*/].f_14, uParam0->f_35[iParam1 /*79*/].f_15, 9974);
				}
				else
				{
					fVar1 = 0f;
					fVar2 = 0f;
					func_135(uParam0->f_35[iParam1 /*79*/].f_18[iVar0 + 1], &fVar1, &fVar2, 9974);
					uParam0->f_35[iParam1 /*79*/].f_18[iVar0] = func_127(fVar1, fVar2, 9974);
				}
				iVar0++;
			}
		}
		else
		{
			uParam0->f_35[iParam1 /*79*/].f_18[uParam0->f_35[iParam1 /*79*/].f_4] = func_127(uParam0->f_35[iParam1 /*79*/].f_14, uParam0->f_35[iParam1 /*79*/].f_15, 9974);
			uParam0->f_35[iParam1 /*79*/].f_4++;
		}
		uParam0->f_35[iParam1 /*79*/].f_8 = uParam0->f_35[iParam1 /*79*/].f_2;
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)) && Local_401[iVar1 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar1 /*79*/] != 3)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_140(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if ((uParam0[iLocal_253 /*79*/])->f_9 < 0)
	{
		(uParam0[iLocal_253 /*79*/])->f_9 = (uParam0[iLocal_253 /*79*/])->f_2;
	}
	if ((unk_0x53C562FD2B9E3AB0() - (uParam0[iLocal_253 /*79*/])->f_13) >= 66)
	{
		fVar0 = unk_0x869308DF4F5FB0C3(2, 218);
		fVar1 = unk_0x869308DF4F5FB0C3(2, 219);
		if (fVar1 < -0.65f || unk_0xF2B58F79D29425B4(2, 188))
		{
			if ((uParam0[iLocal_253 /*79*/])->f_2 != 1)
			{
				(uParam0[iLocal_253 /*79*/])->f_9 = 0;
			}
		}
		if (fVar1 > 0.65f || unk_0xF2B58F79D29425B4(2, 187))
		{
			if ((uParam0[iLocal_253 /*79*/])->f_2 != 0)
			{
				(uParam0[iLocal_253 /*79*/])->f_9 = 1;
			}
		}
		if (fVar0 < -0.65f || unk_0xF2B58F79D29425B4(2, 189))
		{
			if ((uParam0[iLocal_253 /*79*/])->f_2 != 3)
			{
				(uParam0[iLocal_253 /*79*/])->f_9 = 2;
			}
		}
		if (fVar0 > 0.65f || unk_0xF2B58F79D29425B4(2, 190))
		{
			if ((uParam0[iLocal_253 /*79*/])->f_2 != 2)
			{
				(uParam0[iLocal_253 /*79*/])->f_9 = 3;
			}
		}
	}
}

void func_141(var uParam0, int iParam1)
{
	switch ((uParam0[iParam1 /*79*/])->f_2)
	{
		case 0:
			(uParam0[iParam1 /*79*/])->f_16 = 0f;
			break;
		
		case 1:
			(uParam0[iParam1 /*79*/])->f_16 = 180f;
			break;
		
		case 2:
			(uParam0[iParam1 /*79*/])->f_16 = 270f;
			break;
		
		case 3:
			(uParam0[iParam1 /*79*/])->f_16 = 90f;
			break;
	}
}

void func_142(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*fParam2 = (0.5f + -0.32f);
			*fParam3 = 0.54f;
			*iParam1 = 3;
			*iParam4 = 3;
			break;
		
		case 1:
			*fParam2 = (0.5f + 0.321f);
			*fParam3 = 0.54f;
			*iParam1 = 2;
			*iParam4 = 2;
			break;
		
		case 2:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.26f;
			*iParam1 = 1;
			*iParam4 = 1;
			break;
		
		case 3:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.822f;
			*iParam1 = 0;
			*iParam4 = 0;
			break;
	}
}

void func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_35[iVar0 /*79*/] == 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (*uParam0 < 7)
	{
		unk_0x8028488F650E6677("Music_Stream", "DLC_EXEC_ARC_MAC_SOUNDS");
	}
	else if (iVar1 > 1)
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 3))
		{
			unk_0x4929A4FD75F576BD();
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 3);
		}
	}
	else if (unk_0x7CCE41E8E97028E7())
	{
		unk_0x8E7C072C41DF97BF();
	}
}

void func_144(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 15))
	{
		func_145(uParam0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 15);
	}
	func_77(uParam0);
}

void func_145(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SHOW_HUD");
		func_146(0);
		func_146(1);
		func_146(2);
		func_146(3);
		if (iLocal_253 > -1 && Local_401[iLocal_253 /*2*/] > -1)
		{
			unk_0xD07D5CD276368D36(Local_401[iLocal_253 /*2*/]);
		}
		unk_0x271AA5469AF471B3();
	}
}

void func_146(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	int iVar32;
	
	Var0 = { func_65(iParam0) };
	Var16 = { func_63(iParam0) };
	iVar32 = func_147(iParam0);
	unk_0xD07D5CD276368D36(iVar32);
	unk_0x81D71E37E95798C1(&Var16);
	func_54(&Var0);
}

int func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] == iParam0)
		{
			return Local_323.f_7[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_148(var uParam0)
{
	if (!func_8(&(uParam0->f_20), 1000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 10))
		{
			func_53(uParam0, "DCTL_COUNTDOWNGO", 0, 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_2, 10))
	{
		func_149(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 10);
	}
}

void func_149(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "CLEAR_CENTRAL_MESSAGE");
		unk_0x271AA5469AF471B3();
	}
}

void func_150(var uParam0)
{
	int iVar0;
	
	func_56(uParam0);
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar0 /*79*/].f_1 != 0)
			{
				func_151(uParam0, &(uParam0->f_35), iVar0);
			}
		}
		iVar0++;
	}
}

void func_151(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	func_152(Local_401[iParam2 /*2*/], &iVar0, &iVar1, &iVar2);
	if ((*uParam1)[iParam2 /*79*/] == 3)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	fVar3 = (0.5f - ((0.5f - (uParam1[iParam2 /*79*/])->f_14) * uParam0->f_9));
	fVar4 = (0.0068f * uParam0->f_9);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		func_135((uParam1[iParam2 /*79*/])->f_18[iVar5], &fVar7, &fVar8, 9974);
		if (fVar7 != 0f || fVar8 != 0f)
		{
			if (iVar5 + 1 >= 60)
			{
				fVar9 = (uParam1[iParam2 /*79*/])->f_14;
				fVar10 = (uParam1[iParam2 /*79*/])->f_15;
			}
			else
			{
				func_135((uParam1[iParam2 /*79*/])->f_18[iVar5 + 1], &fVar9, &fVar10, 9974);
				if (fVar9 == 0f && fVar10 == 0f)
				{
					fVar9 = (uParam1[iParam2 /*79*/])->f_14;
					fVar10 = (uParam1[iParam2 /*79*/])->f_15;
				}
			}
			fVar11 = (fVar9 - fVar7);
			fVar12 = (fVar10 - fVar8);
			fVar13 = (fVar7 + (fVar11 * 0.5f));
			fVar14 = (fVar8 + (fVar12 * 0.5f));
			if (unk_0xE97272C977DEADD3(fVar11) > 0.001f)
			{
				if (fVar11 > 0f)
				{
					iVar6 = 3;
				}
				else
				{
					iVar6 = 2;
				}
				fVar15 = 90f;
				fVar16 = (unk_0xE97272C977DEADD3(fVar11) + 0.003f);
				fVar17 = (0.003f * uParam0->f_8);
			}
			if (unk_0xE97272C977DEADD3(fVar12) > 0.001f)
			{
				if (fVar12 > 0f)
				{
					iVar6 = 1;
				}
				else
				{
					iVar6 = 0;
				}
				fVar15 = 0f;
				fVar16 = 0.003f;
				fVar17 = (unk_0xE97272C977DEADD3(fVar12) + ((0.003f * 0.5f) * uParam0->f_8));
			}
			fVar18 = (0.5f - ((0.5f - fVar13) * uParam0->f_9));
			fVar19 = (fVar16 * uParam0->f_9);
			unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "Tail", fVar18, fVar14, fVar19, fVar17, fVar15, iVar0, iVar1, iVar2, (uParam1[iParam2 /*79*/])->f_1, 0);
			if (iParam2 == iLocal_253)
			{
				if ((*uParam1)[iParam2 /*79*/] == 2)
				{
					bVar20 = false;
					if ((uParam1[iParam2 /*79*/])->f_2 == 2 || (uParam1[iParam2 /*79*/])->f_2 == 3)
					{
						bVar20 = func_134(fVar3, (uParam1[iParam2 /*79*/])->f_15, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, (fVar19 * 0.95f), fVar17);
					}
					if ((uParam1[iParam2 /*79*/])->f_2 == 0 || (uParam1[iParam2 /*79*/])->f_2 == 1)
					{
						bVar20 = func_134(fVar3, (uParam1[iParam2 /*79*/])->f_15, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, fVar19, (fVar17 * 0.95f));
					}
					if (bVar20)
					{
						bVar21 = false;
						if (iVar5 == ((uParam1[iParam2 /*79*/])->f_4 - 3))
						{
							if (iVar6 == (uParam1[iParam2 /*79*/])->f_2)
							{
								bVar21 = true;
							}
						}
						if (iVar5 < ((uParam1[iParam2 /*79*/])->f_4 - 2) && !bVar21)
						{
							func_130(iParam2);
						}
					}
				}
			}
			fVar15 = 0f;
			fVar16 = 0f;
			fVar17 = 0f;
		}
		iVar5++;
	}
	unk_0xEFB3EC0CDCC33841("LineArcadeMinigame", "HeadPixel", fVar3, (uParam1[iParam2 /*79*/])->f_15, fVar4, 0.012f, (uParam1[iParam2 /*79*/])->f_16, iVar0, iVar1, iVar2, (uParam1[iParam2 /*79*/])->f_1, 0);
}

void func_152(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_153(func_154(func_124(iParam0)), uParam1, uParam2, uParam3, &uVar0);
}

void func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x53E140A02F0B3D1A(uParam0, 24, 31);
	*uParam2 = unk_0x53E140A02F0B3D1A(uParam0, 16, 23);
	*uParam3 = unk_0x53E140A02F0B3D1A(uParam0, 8, 15);
	*uParam4 = unk_0x53E140A02F0B3D1A(uParam0, 0, 7);
}

var func_154(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x31758B9A51671C43(uParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_155(uVar0, uVar1, uVar2, uVar3);
}

var func_155(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0x5A269A13022C028E(&uVar0, 24, 31, uParam0);
	unk_0x5A269A13022C028E(&uVar0, 16, 23, uParam1);
	unk_0x5A269A13022C028E(&uVar0, 8, 15, uParam2);
	unk_0x5A269A13022C028E(&uVar0, 0, 7, uParam3);
	return uVar0;
}

void func_156(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var7;
	struct<3> Var10;
	struct<6> Var13;
	int iVar206;
	int iVar207;
	float fVar208;
	float fVar209;
	int iVar210;
	int iVar211;
	struct<6> Var212;
	int iVar218;
	float fVar219;
	float fVar220;
	float fVar221;
	float fVar222;
	int iVar223;
	int iVar224;
	int iVar225;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var13 = 32;
	Var13.f_1.f_2 = -1;
	Var13.f_1.f_3 = -1082130432;
	Var13.f_1.f_4 = -1;
	Var13.f_1.f_5 = -1;
	Var13.f_1.f_6.f_2 = -1;
	Var13.f_1.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_4 = -1;
	Var13.f_1.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var13.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	iVar206 = 0;
	iVar207 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		if (unk_0xA387B84DA2EB1BEE(1, iVar0) == 171)
		{
			if (unk_0xC80D31E4B587871C(iLocal_254, 0))
			{
				if (unk_0x575EF325DA5E3F04(1, iVar0, &Var1, 6))
				{
					if (Var1.f_0 == -650311207)
					{
						if (iVar206 < 16)
						{
							Var13[iVar206 /*6*/] = { Var1 };
							if (!unk_0xC80D31E4B587871C(iLocal_254, (7 + Var1.f_4)))
							{
								unk_0x872F1C1F8587CCC7(&iLocal_254, (7 + Var1.f_4));
							}
							iVar206++;
						}
					}
				}
				if (unk_0x575EF325DA5E3F04(1, iVar0, &Var7, 3))
				{
					if (Var7.f_0 == 1737286402)
					{
						func_161(&(uParam0->f_35), Var7.f_2);
					}
				}
			}
			else if (unk_0x575EF325DA5E3F04(1, iVar0, &Var10, 3))
			{
				if (Var10.f_0 == 2017957426)
				{
					iLocal_255 = Var10.f_2;
				}
			}
		}
		iVar0++;
	}
	Var212.f_2 = -1;
	Var212.f_3 = -1082130432;
	Var212.f_4 = -1;
	Var212.f_5 = -1;
	iVar210 = iVar206;
	while (iVar210 <= 15)
	{
		if (Local_151[iVar210 /*6*/].f_5 < 99999 && Local_151[iVar210 /*6*/].f_5 > -1)
		{
			Var13[(iVar206 + iVar210) /*6*/] = { Local_151[iVar210 /*6*/] };
			Local_151[iVar210 /*6*/] = { Var212 };
			iVar211++;
		}
		iVar210++;
	}
	iVar206 = (iVar206 + iVar211);
	if (iVar206 > 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar206 - 1))
		{
			iVar0++;
		}
		func_159(&Var13, 0, (iVar206 - 1));
		iVar0 = 0;
		while (iVar0 <= (iVar206 - 1))
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar206 - 1))
	{
		func_135(Var13[iVar0 /*6*/].f_3, &fVar208, &fVar209, 9974);
		if (Var13[iVar0 /*6*/].f_5 < 99999)
		{
			if (!uLocal_248[Var13[iVar0 /*6*/].f_4] == Var13[iVar0 /*6*/].f_4 * 10000)
			{
				if (Var13[iVar0 /*6*/].f_5 > uLocal_248[Var13[iVar0 /*6*/].f_4] + 2)
				{
					iVar218 = 0;
					if (func_158(&iVar218))
					{
						Local_151[iVar218 /*6*/] = { Var13[iVar0 /*6*/] };
					}
					if (Var13[iVar0 /*6*/].f_5 > uLocal_248[Var13[iVar0 /*6*/].f_4] + 4)
					{
						uLocal_248[Var13[iVar0 /*6*/].f_4]++;
					}
					Jump @2259; //curOff = 1568
				}
				else if (Var13[iVar0 /*6*/].f_5 < uLocal_248[Var13[iVar0 /*6*/].f_4])
				{
				}
				else
				{
					if (Var13[iVar0 /*6*/].f_5 == uLocal_248[Var13[iVar0 /*6*/].f_4] + 2)
					{
						fVar219 = 0f;
						fVar220 = 0f;
						fVar221 = 0f;
						fVar222 = 0f;
						iVar223 = -1;
						if (uParam0->f_35[Var13[iVar0 /*6*/].f_4 /*79*/].f_4 > 0)
						{
							func_135(uParam0->f_35[Var13[iVar0 /*6*/].f_4 /*79*/].f_18[(uParam0->f_35[Var13[iVar0 /*6*/].f_4 /*79*/].f_4 - 1)], &fVar221, &fVar222, 9974);
						}
						else
						{
							iVar224 = 0;
							iVar225 = 0;
							func_142(Local_401[Var13[iVar0 /*6*/].f_4 /*2*/], &iVar224, &fVar221, &fVar222, &iVar225);
						}
						switch (uParam0->f_35[Var13[iVar0 /*6*/].f_4 /*79*/].f_2)
						{
							case 0:
							case 1:
								if (fVar221 > fVar208)
								{
									iVar223 = 3;
								}
								else
								{
									iVar223 = 2;
								}
								break;
							
							case 3:
							case 2:
								if (fVar222 > fVar209)
								{
									iVar223 = 1;
								}
								else
								{
									iVar223 = 0;
								}
								break;
						}
						switch (iVar223)
						{
							case 0:
								fVar219 = fVar208;
								fVar220 = fVar222;
								break;
							
							case 1:
								fVar219 = fVar208;
								fVar220 = fVar222;
								break;
							
							case 3:
								fVar219 = fVar221;
								fVar220 = fVar209;
								break;
							
							case 2:
								fVar219 = fVar221;
								fVar220 = fVar209;
								break;
						}
						func_157(uParam0, Var13[iVar0 /*6*/].f_4, iVar223, fVar219, fVar220, &iVar207);
						func_136(uParam0, &(uParam0->f_35), Var13[iVar0 /*6*/].f_4);
						func_157(uParam0, Var13[iVar0 /*6*/].f_4, Var13[iVar0 /*6*/].f_2, fVar208, fVar209, &iVar207);
						func_136(uParam0, &(uParam0->f_35), Var13[iVar0 /*6*/].f_4);
					}
					else
					{
						if (!Var13[iVar0 /*6*/].f_5 == uLocal_248[Var13[iVar0 /*6*/].f_4] + 1 && !Var13[iVar0 /*6*/].f_5 == Var13[iVar0 /*6*/].f_4 * 10000)
						{
						}
						func_135(Var13[iVar0 /*6*/].f_3, &fVar208, &fVar209, 9974);
						func_157(uParam0, Var13[iVar0 /*6*/].f_4, Var13[iVar0 /*6*/].f_2, fVar208, fVar209, &iVar207);
						func_136(uParam0, &(uParam0->f_35), Var13[iVar0 /*6*/].f_4);
					}
					uLocal_248[Var13[iVar0 /*6*/].f_4] = Var13[iVar0 /*6*/].f_5;
					Jump @2259; //curOff = 2131
					if (Var13[iVar0 /*6*/].f_2 == 4 && !unk_0xC80D31E4B587871C(iVar207, Var13[iVar0 /*6*/].f_4))
					{
						if (!unk_0xC80D31E4B587871C(iLocal_254, (15 + Var13[iVar0 /*6*/].f_4)))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_254, (15 + Var13[iVar0 /*6*/].f_4));
						}
						uParam0->f_35[Var13[iVar0 /*6*/].f_4 /*79*/].f_14 = fVar208;
						uParam0->f_35[Var13[iVar0 /*6*/].f_4 /*79*/].f_15 = fVar209;
						func_136(uParam0, &(uParam0->f_35), Var13[iVar0 /*6*/].f_4);
					}
				}
				iVar0++;
			}

void func_157(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	uParam0->f_35[iParam1 /*79*/].f_9 = iParam2;
	uParam0->f_35[iParam1 /*79*/].f_14 = fParam3;
	uParam0->f_35[iParam1 /*79*/].f_15 = fParam4;
	if (unk_0xC80D31E4B587871C(*iParam5, iParam1))
	{
		uParam0->f_35[iParam1 /*79*/].f_8 = uParam0->f_35[iParam1 /*79*/].f_2;
	}
	else
	{
		unk_0x872F1C1F8587CCC7(iParam5, iParam1);
	}
}

int func_158(int iParam0)
{
	*iParam0 = 0;
	while (*iParam0 <= 15)
	{
		if (Local_151[*iParam0 /*6*/].f_5 == -1)
		{
			return 1;
		}
		*iParam0++;
	}
	return 0;
}

void func_159(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_160(uParam0, iParam1, iParam2);
	if (iParam1 < (iVar0 - 1))
	{
		func_159(uParam0, iParam1, (iVar0 - 1));
	}
	if (iVar0 < iParam2)
	{
		func_159(uParam0, iVar0, iParam2);
	}
}

int func_160(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	int iVar8;
	
	iVar0 = iParam1;
	iVar1 = iParam2;
	Var2.f_2 = -1;
	Var2.f_3 = -1082130432;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar8 = (uParam0[((iParam1 + iParam2) / 2) /*6*/])->f_5;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*6*/])->f_5 < iVar8)
		{
			iVar0++;
		}
		while ((uParam0[iVar1 /*6*/])->f_5 > iVar8)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var2 = { *(uParam0[iVar0 /*6*/]) };
			*(uParam0[iVar0 /*6*/]) = { *(uParam0[iVar1 /*6*/]) };
			*(uParam0[iVar1 /*6*/]) = { Var2 };
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	return iVar0;
}

void func_161(var uParam0, int iParam1)
{
	if (!unk_0xCCCA18C9A006FF83((uParam0[iParam1 /*79*/])->f_5))
	{
		unk_0x0B9D04994D02CC2F((uParam0[iParam1 /*79*/])->f_5);
	}
	if (iParam1 == iLocal_253)
	{
		unk_0x4AFBCBFDE748D4E0((uParam0[iParam1 /*79*/])->f_6, "Crash", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	else
	{
		unk_0x4AFBCBFDE748D4E0((uParam0[iParam1 /*79*/])->f_6, "Crash_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	unk_0x922FC70048B5A79D((uParam0[iParam1 /*79*/])->f_6, "X", (uParam0[iParam1 /*79*/])->f_14);
	unk_0x922FC70048B5A79D((uParam0[iParam1 /*79*/])->f_6, "Y", (uParam0[iParam1 /*79*/])->f_15);
	func_16(uParam0, 3, iParam1);
}

void func_162(var uParam0)
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_18)))
	{
		func_10(&(uParam0->f_18), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			func_128(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	func_150(uParam0);
	func_165(uParam0);
	func_144(uParam0);
	func_156(uParam0);
	func_164(uParam0);
	func_143(uParam0);
	if (Local_323.f_0 >= 7)
	{
		unk_0x0B9D04994D02CC2F(uParam0->f_3);
		unk_0x4AFBCBFDE748D4E0(-1, "Go", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		func_9(&(uParam0->f_18));
		func_163();
		func_183(uParam0, 7);
	}
}

void func_163()
{
	int iVar0;
	struct<6> Var1;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uLocal_248[iVar0] = iVar0 * 10000;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Local_151[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
}

void func_164(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 2))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 2);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 1);
		}
	}
	else if (!unk_0xC80D31E4B587871C(uParam0->f_2, 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 0);
	}
}

void func_165(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 7))
		{
			func_53(uParam0, "DCTL_COUNTDOWN3", 0, 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 7);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_2, 8))
		{
			func_53(uParam0, "DCTL_COUNTDOWN2", 0, 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 8);
		}
	}
	else if (!unk_0xC80D31E4B587871C(uParam0->f_2, 9))
	{
		func_53(uParam0, "DCTL_COUNTDOWN1", 0, 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 9);
	}
}

void func_166(var uParam0)
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_16)))
	{
		func_10(&(uParam0->f_16), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			func_128(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_51(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 18))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Ready", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 18);
	}
	func_150(uParam0);
	func_167(uParam0);
	func_144(uParam0);
	func_143(uParam0);
	if (Local_323.f_0 == 10)
	{
		func_183(uParam0, 10);
		func_50(1);
	}
	else if (Local_323.f_0 >= 6)
	{
		func_183(uParam0, 6);
	}
}

void func_167(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 6))
	{
		func_53(uParam0, "DCTL_READY", 0, 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 6);
	}
}

void func_168(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	func_56(uParam0);
	func_169(uParam0);
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		func_51(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 16);
	}
	if (Local_323.f_77 == 3 && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 5))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
			{
				if (Local_323.f_2[iVar1] == -1)
				{
					bVar0 = false;
				}
				else
				{
					if (iVar1 == iLocal_253)
					{
						Local_401[iLocal_253 /*2*/] = Local_323.f_2[iLocal_253];
						func_142(Local_401[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*79*/].f_2), &(uParam0->f_35[iVar1 /*79*/].f_14), &(uParam0->f_35[iVar1 /*79*/].f_15), &(uParam0->f_35[iVar1 /*79*/].f_8));
					}
					else if (Local_401[iVar1 /*2*/] == Local_323.f_2[iVar1])
					{
						func_142(Local_401[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*79*/].f_2), &(uParam0->f_35[iVar1 /*79*/].f_14), &(uParam0->f_35[iVar1 /*79*/].f_15), &(uParam0->f_35[iVar1 /*79*/].f_8));
					}
					else
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (bVar0)
				{
					unk_0x872F1C1F8587CCC7(&(Local_401[iLocal_253 /*2*/].f_1), 5);
				}
				if (Local_323.f_0 == 10)
				{
					unk_0x0B9D04994D02CC2F(uParam0->f_3);
					unk_0x4AFBCBFDE748D4E0(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_183(uParam0, 10);
					func_50(0);
				}
				else if (Local_323.f_0 >= 5)
				{
					uParam0->f_5 = unk_0x5C6098C2BAD00378();
					unk_0x922FC70048B5A79D(uParam0->f_3, "FadeOut", 7f);
					func_66();
					func_183(uParam0, 5);
					unk_0x0EE72DB1CD8A3B86(&(Local_401[iLocal_253 /*2*/].f_1), 5);
				}
			}

void func_169(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 13))
	{
		func_53(uParam0, "DCTL_LOADING", 0, 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 13);
	}
}

void func_170(var uParam0)
{
	if (unk_0xC80D31E4B587871C(uParam0->f_2, 14))
	{
		func_173(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_2), 14);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 17);
	}
	func_56(uParam0);
	func_172(uParam0);
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x4FB260623DD93924(2, 200, 1);
	}
	if (!unk_0x0F30C1F1717A6437())
	{
		if ((unk_0xE8C126B7ADBB9D63(2, 201) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4))
		{
			func_75(3);
		}
		if ((unk_0xE8C126B7ADBB9D63(2, 202) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4))
		{
			func_75(4);
		}
	}
	if (func_74())
	{
		func_6(1);
	}
	if ((!unk_0xC80D31E4B587871C(uParam0->f_2, 4) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 3)) && !unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4))
	{
		unk_0x39A975B87A12AB75("DCTL_TITLEHELP", 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 5);
	}
	func_171(uParam0);
	func_143(uParam0);
	func_60(uParam0, 0);
	if (Local_323.f_0 > 3)
	{
		if (unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 4) || unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 2))
		{
			func_183(uParam0, 11);
		}
		else
		{
			if (Local_323.f_0 == 10)
			{
				func_6(0);
				func_5(0, 0);
				func_183(uParam0, 10);
				func_50(1);
				return;
			}
			func_14(uParam0);
			func_6(0);
			func_5(0, 0);
			if (Local_323.f_0 == 4)
			{
				func_183(uParam0, 4);
			}
			else
			{
				uParam0->f_5 = unk_0x5C6098C2BAD00378();
				unk_0x922FC70048B5A79D(uParam0->f_3, "FadeOut", 7f);
				func_183(uParam0, 5);
			}
		}
	}
	else if (unk_0xCCCA18C9A006FF83(uParam0->f_3))
	{
		unk_0x4AFBCBFDE748D4E0(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
}

void func_171(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)) && Local_401[iVar0 /*2*/] > -1)
		{
			if (unk_0xC80D31E4B587871C(Local_401[iVar0 /*2*/].f_1, 3) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 0))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 0);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 1))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 1);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_401[iVar0 /*2*/].f_1, 4) && !unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 1))
			{
				unk_0x4AFBCBFDE748D4E0(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_35[iVar0 /*79*/].f_3), 1);
				if (unk_0xC80D31E4B587871C(uParam0->f_35[iVar0 /*79*/].f_3, 0))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_35[iVar0 /*79*/].f_3), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_172(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_2, 16))
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 16);
	}
	func_61(uParam0, "DCTL_INSERT", 0);
	func_79(uParam0);
	func_77(uParam0);
}

void func_173(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "HIDE_LOADING_SCREEN");
		unk_0x271AA5469AF471B3();
	}
}

void func_174(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 1))
	{
		if (unk_0x3A711520F83BAE98())
		{
			func_32(unk_0x9EB17624F44A8DA4(), 0, 0);
			func_177();
		}
		else
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		func_45(1, 0, 1, 0);
		unk_0xE859EF37EA7362D3("DLC_Exec_Arc_Mac_Playing_Game_Scene");
		func_176(uParam0);
		func_10(&(uParam0->f_10), 0, 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 14);
		unk_0x872F1C1F8587CCC7(&(Local_401[iLocal_253 /*2*/].f_1), 1);
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				unk_0x4AFBCBFDE748D4E0(-1, "Degenatron_Logo", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_175(uParam0, 1);
				break;
			
			case 1:
				if (func_8(&(uParam0->f_10), 1800, 0))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Degenatron_Star", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_175(uParam0, 2);
				}
				break;
			
			case 2:
				if (func_8(&(uParam0->f_10), 2250, 0))
				{
					if (unk_0xCCCA18C9A006FF83(uParam0->f_3))
					{
						unk_0x4AFBCBFDE748D4E0(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					}
					func_175(uParam0, 3);
				}
				break;
		}
		if (func_8(&(uParam0->f_10), 2200, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2), 17);
		}
		if (func_8(&(uParam0->f_10), 6000, 0) || ((uParam0->f_1 == 3 && func_8(&(uParam0->f_10), 3000, 0)) && unk_0xE8C126B7ADBB9D63(2, 201)))
		{
			unk_0x872F1C1F8587CCC7(&(Local_401[iLocal_253 /*2*/].f_1), 6);
			func_66();
			if (Local_323.f_0 == 9)
			{
				func_183(uParam0, 9);
			}
			else if (Local_323.f_0 >= 3)
			{
				func_183(uParam0, 3);
			}
		}
	}
}

void func_175(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_176(var uParam0)
{
	if (unk_0x34D11AB5BA7922C2(uParam0->f_34))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_34, "SHOW_LOADING_SCREEN");
		unk_0x271AA5469AF471B3();
	}
}

void func_177()
{
	Global_2436181.f_1040.f_10 = 1;
}

void func_178(var uParam0)
{
	if (!unk_0xC80D31E4B587871C(Local_401[iLocal_253 /*2*/].f_1, 0))
	{
		func_180();
		uParam0->f_34 = unk_0xD704C81492296A37("dont_cross_the_line");
		if (func_179() && unk_0x34D11AB5BA7922C2(uParam0->f_34))
		{
			unk_0x872F1C1F8587CCC7(&(Local_401[iLocal_253 /*2*/].f_1), 0);
			func_183(uParam0, 2);
		}
	}
}

int func_179()
{
	if ((unk_0x1CF95440F1970B4F("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1) && unk_0xA51ADD51711B4A15("LineArcadeMinigame")) && unk_0x9F0887BCBFCF3C2F(3))
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (unk_0x1CF95440F1970B4F("DLC_EXEC1/OFFICE_BOARDROOM", 0, -1))
	{
		unk_0x128A5DCCD09CCA17("LineArcadeMinigame", 0);
		unk_0xBCBC53983EC3B1BA("DCTL", 3);
		unk_0x872F1C1F8587CCC7(&Global_1655667, 6);
		return 1;
	}
	return 0;
}

void func_181(var uParam0)
{
	int iVar0;
	
	if (iLocal_253 == -1)
	{
		Global_4456448.f_138520 = 1;
		uParam0->f_8 = func_182();
		uParam0->f_3 = unk_0xD0CA83418A236CB4();
		uParam0->f_6 = unk_0xD0CA83418A236CB4();
		uParam0->f_7 = unk_0xD0CA83418A236CB4();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_35[iVar0 /*79*/].f_5 = unk_0xD0CA83418A236CB4();
			uParam0->f_35[iVar0 /*79*/].f_6 = unk_0xD0CA83418A236CB4();
			uParam0->f_35[iVar0 /*79*/].f_7 = unk_0xD0CA83418A236CB4();
			iVar0++;
		}
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_577 = 1;
		iLocal_253 = unk_0x622FF3AE4B1D07C3();
		Local_401[iLocal_253 /*2*/] = -1;
		uParam0->f_34 = 0;
		func_75(2);
		func_175(uParam0, 0);
	}
	if (Local_401[iLocal_253 /*2*/] == -1)
	{
		if (Local_323.f_2[iLocal_253] > -1)
		{
			Local_401[iLocal_253 /*2*/] = Local_323.f_2[iLocal_253];
		}
	}
	else
	{
		func_183(uParam0, 1);
	}
	func_6(0);
}

float func_182()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (unk_0xB9D80B12FE4456A5())
	{
		if (fVar2 >= 4f)
		{
			fVar2 = (fVar2 / 3f);
		}
	}
	return fVar2;
}

void func_183(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	*uParam0 = iParam1;
}

void func_184(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	unk_0xD67F08F0EFD84A54(0);
	unk_0xD67F08F0EFD84A54(2);
	unk_0xAE8C92295C8F2D18(0);
	func_199(1);
	func_198(4, -1);
	unk_0xFF00C7D00D8D8AAE(19);
	func_197();
	func_196();
	func_195();
	unk_0x0467A3C1EFB3B8F0();
	if (!func_193(unk_0x9EB17624F44A8DA4()))
	{
		func_183(uParam0, 11);
	}
	if (!func_41())
	{
		func_183(uParam0, 11);
	}
	func_192();
	unk_0x9B16F08390FCC31C();
	if (Local_323.f_0 > 2)
	{
		func_187(0);
	}
	func_185(uParam0);
	if (!unk_0x0F30C1F1717A6437() && Local_323.f_0 > 2)
	{
		unk_0x36853D5037847BF3();
		unk_0x5A66A86A47AC3B57(1);
	}
	if (unk_0x8E1421E2A2A2FBD4() && !Local_323.f_0 == 4)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
			{
				if (Local_323.f_2[iVar1] == -1)
				{
					Local_323.f_2[iVar1] = func_24();
					bVar0 = true;
				}
			}
			else if (Local_323.f_2[iVar1] != -1)
			{
				Local_323.f_2[iVar1] = -1;
				bVar0 = true;
			}
			iVar1++;
		}
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= (unk_0xB72D370CB7ABC3EF() - 1))
			{
				if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
				{
					iVar2 = 0;
					while (iVar2 <= (unk_0xB72D370CB7ABC3EF() - 1))
					{
						if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)))
						{
							if (iVar2 != iVar1 && (Local_323.f_2[iVar1] == Local_323.f_2[iVar2] || Local_323.f_2[iVar1] == -1))
							{
								Local_323.f_2[iVar1] = -1;
								return;
							}
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

void func_185(var uParam0)
{
	uParam0->f_8 = func_182();
	uParam0->f_9 = func_186(uParam0->f_8);
}

float func_186(float fParam0)
{
	return (1.778f / fParam0);
}

void func_187(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_191(0))
		{
			func_188(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_188(int iParam0)
{
	if (Global_14615)
	{
		func_190(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_189())
	{
		Global_14453.f_1 = 3;
	}
}

int func_189()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_190(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_191(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_191(int iParam0)
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

void func_192()
{
	Global_17162.f_134 = 1;
}

int func_193(int iParam0)
{
	if (func_194(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

void func_195()
{
	Global_2512808.f_4500 = 0;
}

void func_196()
{
	Global_17162.f_6 = 1;
}

void func_197()
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), unk_0x436287B7DB306165(), 24);
	Global_1312568.f_7 = unk_0x8B948C59217A295D(&(Global_1312568.f_1));
}

void func_198(int iParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357530.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_199(int iParam0)
{
	Global_1359035.f_1079 = iParam0;
}

void func_200()
{
	func_29(&uLocal_410);
	func_30();
}

int func_201()
{
	var uVar0;
	
	func_207(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_206())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_205())
	{
		return 1;
	}
	if (func_204(157))
	{
		if (!func_203())
		{
			return 1;
		}
	}
	if (func_204(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_202() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_202()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_202()
{
	switch (func_88())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_203()
{
	return Global_2447174.f_586;
}

int func_204(int iParam0)
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_205()
{
	return Global_2456830;
}

bool func_206()
{
	return Global_2447174.f_581;
}

void func_207(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_208(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_208(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 3))
	{
		if (func_21(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x25D049AAC4603E65(Var0.f_1);
			if (unk_0x6ADD12BF4D6D2587(uVar3))
			{
				if (unk_0x88DDBE9908752BF0(uVar3, 0))
				{
					uVar4 = unk_0xDFD115BB10FE46A9(uVar3, 0);
					if (unk_0x1FE6625767FB8CBF(uVar4, Var0.f_2) && unk_0x8C504A60C2F379BD())
					{
						if (func_209(uVar4, &bVar5))
						{
							unk_0x38CCEC620E3BB265(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x5380482A432E314E(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_209(var uParam0, var uParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x9761C10D57B68069(uParam0))
		{
			if (unk_0x828686E167EA3FD3(uParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(uParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(uParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_210()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_211(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3, 3))
		{
			func_180();
		}
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 3);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_3), 3);
	}
}

void func_212(struct<21> Param0)
{
	func_216(4, Param0);
	if (!func_214(0, -1, 1))
	{
		func_200();
	}
	unk_0x6E3ED3AE1C20445F(&Local_323, 78);
	unk_0xE7BC983D1386C9EE(&Local_401, 9);
	if (!func_213())
	{
		func_200();
	}
}

int func_213()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_206())
		{
			return 0;
		}
		if (func_204(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_214(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
		if (!func_215())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_206())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_204(155))
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_30();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_30();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_215()
{
	return Global_1312831;
}

void func_216(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_30();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

