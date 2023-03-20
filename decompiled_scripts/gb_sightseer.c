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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64[5] = { 0, 0, 0, 0, 0 };
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<2> Local_80 = { 0, 0 } ;
	struct<2> Local_82[8];
	struct<2> Local_99 = { 0, 0 } ;
	struct<4> Local_101[8];
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 8;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 2;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 8;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 8;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	float fLocal_183 = 0f;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	var uLocal_191 = 0;
	struct<60> Local_192 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_252[32];
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	var uLocal_453 = 0;
	struct<3> Local_454 = { 0, 0, 0 } ;
	var uLocal_457 = 0;
	struct<18> Local_458 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 1015222895;
	var uLocal_482 = 1021665346;
	var uLocal_483 = 0;
	var uLocal_484 = 255;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = -1;
	var uLocal_494 = 996499522;
	var uLocal_495 = 1002740646;
	var uLocal_496 = 0;
	var uLocal_497 = 60;
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
	var uLocal_558 = 1016296636;
	var uLocal_559 = 220;
	var uLocal_560 = 255;
	var uLocal_561 = 255;
	var uLocal_562 = 255;
	var uLocal_563 = 255;
	var uLocal_564 = 255;
	var uLocal_565 = 255;
	var uLocal_566 = 4096;
	var uLocal_567 = 40;
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
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
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
	var uLocal_736 = 4;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 1065353216;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 1056964608;
	var uLocal_746 = 1056964608;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	struct<3> Local_753[20];
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_18 = "NULL";
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
	fLocal_63 = 0f;
	fLocal_70 = 0f;
	fLocal_71 = 0f;
	fLocal_72 = 0f;
	fLocal_135 = 0.62f;
	fLocal_136 = 0.51f;
	fLocal_137 = 0.55f;
	fLocal_138 = 25f;
	fLocal_183 = ((0.05f + 0.275f) - 0.01f);
	fLocal_186 = -0.05f;
	fLocal_187 = 0.92f;
	fLocal_188 = 1.94f;
	fLocal_189 = 2.99f;
	fLocal_190 = 3.7f;
	iLocal_747 = -1;
	iLocal_748 = -1;
	iLocal_750 = -1;
	iLocal_751 = -1;
	if (unk_0x0E063DDE8855EC52() && func_705(unk_0x4D29100D094E5511(), 0, 1))
	{
		func_693(ScriptParam_0);
	}
	else
	{
		func_675();
	}
	while (true)
	{
		func_674();
		if (func_666())
		{
			func_675();
		}
		Global_1727400.f_2 = Local_192.f_58;
		Global_1727400.f_3 = Local_192.f_59;
		switch (func_665(unk_0x7025777635AB04C0()))
		{
			case 0:
				if (func_664() == 1)
				{
					func_663();
					if (func_662())
					{
						func_649(142, 1, -1);
						unk_0x193107EFB9C9FD44(3);
						if (!func_648())
						{
							unk_0x9142BC6FF567DB85(unk_0x4D29100D094E5511(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_649(142, 0, -1);
						unk_0x9142BC6FF567DB85(unk_0x4D29100D094E5511(), joaat("pickup_portable_package"), 0);
					}
					Local_252[unk_0x7025777635AB04C0() /*6*/] = 1;
				}
				else if (func_664() == 4)
				{
					Local_252[unk_0x7025777635AB04C0() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_645())
				{
					Local_252[unk_0x7025777635AB04C0() /*6*/] = 2;
				}
				if (func_664() == 1)
				{
					func_342();
					func_339();
					if (func_662() || func_338())
					{
						func_210(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
					}
					func_168();
				}
				else if (func_664() == 4)
				{
					Local_252[unk_0x7025777635AB04C0() /*6*/] = 3;
				}
				func_165();
				break;
			
			case 3:
				func_164(&(Local_192.f_49));
				if (func_163(&(Local_192.f_49)))
				{
					Local_252[unk_0x7025777635AB04C0() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_252[unk_0x7025777635AB04C0() /*6*/] = 4;
			
			case 4:
				func_675();
				break;
		}
		if (unk_0x96BA6BF1BA1235CC())
		{
			switch (func_664())
			{
				case 0:
					if (func_156())
					{
						unk_0xF37879D27F66F1AF(&(Local_192.f_58), &(Local_192.f_59));
						Local_192.f_0 = 1;
						Local_192.f_33 = unk_0x7025777635AB04C0();
						Local_192.f_34 = unk_0x4D29100D094E5511();
						func_649(142, 1, -1);
					}
					break;
				
				case 1:
					func_154();
					func_4();
					if (func_2())
					{
						Local_192.f_0 = 4;
					}
					else if (func_1())
					{
						Local_192.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_192.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 1))
			{
				Local_192.f_32 = 2;
			}
			else if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 3))
			{
				Local_192.f_32 = 2;
			}
			else if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 4))
			{
				Local_192.f_32 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (Local_192.f_5 == 0)
	{
		if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 6))
		{
			if (!func_9(&(Local_192.f_53)))
			{
				func_8(&(Local_192.f_53), 0, 0);
			}
			else if (func_6(&(Local_192.f_53), func_7(), 0))
			{
				unk_0x26545538B51562AD(&(Local_192.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (unk_0x0E063DDE8855EC52() && !bParam2)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (!func_9(&(Local_192.f_51)))
	{
		func_8(&(Local_192.f_51), 0, 0);
	}
	else if (func_6(&(Local_192.f_51), func_11(), 0))
	{
		unk_0x26545538B51562AD(&(Local_192.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_10441;
}

void func_12()
{
	int iVar0;
	
	if (Local_192.f_33 < 0)
	{
		return;
	}
	if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(Local_192.f_33)))
	{
		if (Local_252[Local_192.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_252[Local_192.f_33 /*6*/].f_4 - 1);
			if (!unk_0xF426A5DE932B3BEE(Local_192.f_4, iVar0))
			{
				Local_192.f_36 = iVar0;
				if (func_13())
				{
					unk_0x26545538B51562AD(&(Local_192.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()
{
	int iVar0;
	struct<25> Var1;
	struct<3> Var26;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0xE1CAA98B09E043C9(Local_192.f_3))
	{
		unk_0x97C59C4E8349D15F(iVar0);
		if (unk_0x875098323FCA8FE6(iVar0))
		{
			if (unk_0x2F600AC3146D596F(1))
			{
				Var26 = { func_153() };
				if (func_14(Var26, 5f, &Local_454, &uLocal_457, Var1))
				{
					Local_192.f_3 = unk_0x8B513DBDB3BBB4A6(unk_0x2293A3AE5AB781DD(joaat("pickup_portable_package"), Local_454, 1, iVar0));
					unk_0x018805F05877E2E2(unk_0xBB4FAC4BA02ED087(Local_192.f_3), Local_454 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x0049DE0B34213B12(iVar0);
					unk_0xDC994C828DF12354(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 1);
					unk_0x11E5A77701DB020B(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 1);
					unk_0x0D57406034E1603A(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 1);
					unk_0x77E24407E71C2B27(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 0);
					unk_0xE7CD799CF8963ACB(unk_0xBB4FAC4BA02ED087(Local_192.f_3));
					func_8(&(Local_192.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0xE1CAA98B09E043C9(Local_192.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var44;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = { Param0 };
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_15(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var44 = { Param0 - Var0[0 /*3*/] };
			if (Var44.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar83;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404956.f_1484 == *uParam0 || !Global_2404956.f_1484.f_1 == uParam0->f_1) || !Global_2404956.f_1484.f_2 == uParam0->f_2) || !Global_2404956.f_1487 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404956.f_1498 == uParam0->f_8 || !Global_2404956.f_1498.f_1 == uParam0->f_8.f_1) || !Global_2404956.f_1498.f_2 == uParam0->f_8.f_2) || !Global_2404956.f_1501 == uParam0->f_11) || !Global_2404956.f_1501.f_1 == uParam0->f_11.f_1) || !Global_2404956.f_1501.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404956.f_1498 == uParam0->f_8 || !Global_2404956.f_1498.f_1 == uParam0->f_8.f_1) || !Global_2404956.f_1498.f_2 == uParam0->f_8.f_2) || !Global_2404956.f_1501 == uParam0->f_11) || !Global_2404956.f_1501.f_1 == uParam0->f_11.f_1) || !Global_2404956.f_1501.f_2 == uParam0->f_11.f_2) || !Global_2404956.f_1504 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404956.f_1482 == 1)
		{
			if (unk_0xA6C3B54732ED5989(Global_2404956.f_1491))
			{
				if (Global_2404956.f_1491 == unk_0xF42B3EF31F918DB2())
				{
					if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1488) < func_152(0))
					{
						return 0;
					}
				}
				else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1488) < func_152(0))
				{
					return 0;
				}
			}
			unk_0xD94F43C18FA6FE8C();
			unk_0xE415370974A8A44B();
			func_151();
		}
		Global_2404956.f_1482 = 0;
	}
	else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1488) > func_152(0))
	{
		Global_2404956.f_1489 = unk_0x20D394965B47B01A();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x5B8694CEA5B5F33F(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404956.f_1482)
	{
		unk_0xD94F43C18FA6FE8C();
		unk_0xE415370974A8A44B();
		func_151();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_150(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xD0BF3829C5A8019D())
		{
			Global_2404956.f_1505 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404956.f_1484 = { *uParam0 };
					Global_2404956.f_1487 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404956.f_1498 = { uParam0->f_8 };
					Global_2404956.f_1501 = { uParam0->f_11 };
					Global_2404956.f_1504 = 0f;
					Global_2404956.f_1484 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404956.f_1498 = { uParam0->f_8 };
					Global_2404956.f_1501 = { uParam0->f_11 };
					Global_2404956.f_1504 = uParam0->f_14;
					Global_2404956.f_1484 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_149(Var8.f_0, Var8.f_1);
			}
			Global_2404956.f_1483 = 1;
			Global_2404956.f_1482 = 1;
			Global_2404956.f_1489 = unk_0x20D394965B47B01A();
			Global_2404956.f_1488 = unk_0x20D394965B47B01A();
			Global_2404956.f_1491 = unk_0xF42B3EF31F918DB2();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404956.f_1482)
	{
		if (Global_2404956.f_1483 == 1)
		{
			if (unk_0x8A51433F74CC1603(fVar4, fVar5, fVar6, fVar7) || unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 5000)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_23;
					Var26.f_55 = uParam0->f_16;
					func_130(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_129(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404956.f_1483 = 9;
				}
				else
				{
					Global_2404956.f_1483 = 2;
				}
			}
		}
		if (Global_2404956.f_1483 == 2)
		{
			if ((unk_0xA487150A6E5396A7(Var11, Var14) || unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 15000) || unk_0x1B85DA5A73D7685B(Var11, Var14) == 0)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				if (uParam0->f_5 && !func_126(unk_0x4D29100D094E5511(), 0))
				{
					Global_2404956.f_1483 = 3;
				}
				else
				{
					Global_2404956.f_1483 = 4;
				}
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1493) > 7000)
			{
				func_125(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404956.f_1483 == 3)
		{
			if (func_124() || unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 10000)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				Global_2404956.f_1483 = 4;
			}
		}
		if (Global_2404956.f_1483 == 4)
		{
			if (unk_0xD0BF3829C5A8019D())
			{
				unk_0xD94F43C18FA6FE8C();
				unk_0xE415370974A8A44B();
			}
			else
			{
				iVar0 = 0;
				func_119();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x71E724DD506FEB18(unk_0x4D29100D094E5511(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = unk_0x20D394965B47B01A();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 1:
							func_118(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x09DA62667263C2F4(unk_0x4D29100D094E5511(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = unk_0x20D394965B47B01A();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 2:
							if (unk_0x09DA62667263C2F4(unk_0x4D29100D094E5511(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = unk_0x20D394965B47B01A();
								Global_2404956.f_1483 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404956.f_1489 = unk_0x20D394965B47B01A();
					Global_2404956.f_1483 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xC13DB4071F6455E5(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_118(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x273C7CAA66502CBC(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x273C7CAA66502CBC(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404956.f_1483 == 5)
		{
			if (func_56(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404956.f_1509.f_5)
				{
					Global_2404956.f_1489 = unk_0x20D394965B47B01A();
					Global_2404956.f_1483 = 6;
				}
				else
				{
					Global_2404956.f_1489 = unk_0x20D394965B47B01A();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xCBE9F57FCC3C2A5A(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404956.f_1483 = 9;
				}
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 20000)
			{
				unk_0xD94F43C18FA6FE8C();
				unk_0xE415370974A8A44B();
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 6)
		{
			iVar0 = 0;
			Global_2404956.f_1509.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_55(uParam0->f_4))
				{
					if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_54(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404956.f_1489 = unk_0x20D394965B47B01A();
			Global_2404956.f_1483 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xC13DB4071F6455E5(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_118(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x273C7CAA66502CBC(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x273C7CAA66502CBC(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404956.f_1483 == 7)
		{
			if (func_56(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404956.f_1617[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_129(Global_2404956.f_1617[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404956.f_1617[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_52(Global_2404956.f_1617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404956.f_1617[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xCC0EABB8FAB8D0DE(Global_2404956.f_1617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404956.f_1617[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_18(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xCBE9F57FCC3C2A5A(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404956.f_1483 = 9;
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 20000)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404956.f_468))
				{
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_16(uParam2, &(Global_2404956.f_1509.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar83 = false;
				}
				else
				{
					bVar83 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404956.f_1484 };
				func_18(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404956.f_1489 = unk_0x20D394965B47B01A();
			Global_2404956.f_1483 = 9;
		}
		if (Global_2404956.f_1483 == 9)
		{
			Global_2404956.f_1482 = 0;
			unk_0xD94F43C18FA6FE8C();
			unk_0xE415370974A8A44B();
			func_151();
			return 1;
		}
		Global_2404956.f_1488 = unk_0x20D394965B47B01A();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*8*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*8*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*8*/];
		iVar0++;
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar61;
	int iVar62;
	bool bVar63;
	int iVar64;
	struct<3> Var65;
	struct<3> Var68;
	struct<3> Var71;
	float fVar74;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	if (bParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var65 = { *uParam5 };
						if (func_55(uParam5->f_4) || !unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_54(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_54(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_20(*uParam0, &Var0, iVar64, iParam3, 1))
	{
	}
	else
	{
		bVar63 = true;
	}
	if (bVar63)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = { uParam6->f_13[iVar62 /*3*/] };
			Var4.f_45[iVar62] = uParam6->f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_130(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var68 = { *uParam5 };
				fVar74 = uParam5->f_4;
				break;
			
			case 1:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				break;
			
			case 2:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				fVar74 = uParam5->f_14;
				break;
		}
		if (!func_19(Var0, uParam5->f_7, Var68, Var71, fVar74))
		{
			if (func_20(*uParam0, &Var0, iVar64, iParam3, 0))
			{
				if (!func_19(Var0, uParam5->f_7, Var68, Var71, fVar74))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var68 };
					}
					if (unk_0xF1F1EBE69E9A0DE7(Var0, &uVar61, 0))
					{
						Var0.f_2 = uVar61;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var68 };
				}
				if (unk_0xF1F1EBE69E9A0DE7(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404956.f_603 = 1;
}

int func_19(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_52(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xCC0EABB8FAB8D0DE(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_51(Param0, uParam3))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xFE3A173C654E331A(Param0, 0, uParam3, iParam4))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_30(Global_2404956.f_481, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_22(*uParam3, 1056964608))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_27(unk_0x4D29100D094E5511(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_23(Param0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_34300 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_34300)
			{
				if (Global_1617379.f_34303[iVar0 /*89*/].f_16 != 0)
				{
					if (func_23(Param0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_43061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_43061)
			{
				if (Global_1617379.f_43065[iVar0 /*127*/].f_12 != 0)
				{
					if (func_23(Param0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_23(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_26(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_25(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_24(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x43698C98CC255554((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x43698C98CC255554((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x43698C98CC255554((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xCC0EABB8FAB8D0DE(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x9151153185C776B3(iParam0))
	{
		unk_0x3DE83953A8E7C5D3(iParam0, fParam1, fParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_25(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_26(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_24(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_27(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_28(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0);
}

bool func_29(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
}

int func_30(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_45(Param0))
	{
		if (func_44(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_33(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_32(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_31(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_31(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		func_25(&Var0, 0f, 0f, unk_0x5C02660403071A83(0f, 360f));
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_32(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404956.f_1716[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_41(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_35(&Var2, &(Global_2404956.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_41(Var2, &uVar1) || func_34(Var2))
			{
				Var2 = { *uParam0 };
				func_35(&Var2, &(Global_2404956.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_34(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404956.f_548 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404956.f_545);
		if (fVar0 < Global_2404956.f_548)
		{
			return 1;
		}
	}
	return 0;
}

void func_35(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_40(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404956.f_1714) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_40(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_40(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_31(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404956.f_1714) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_39(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_36(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_36(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_38(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x1E765DC28DD319DF(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_37(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_37(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_38(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_38(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x1E765DC28DD319DF(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_37(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_37(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_37(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_38(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_39(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_40(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_31(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_39(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_36(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x73C1A9AD53AC8AD8(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_129(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_52(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xCC0EABB8FAB8D0DE(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_41(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_43();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_42(Param0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_129(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404956.f_1714) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_52(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_43()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_44(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_42(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407408[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407408[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_35(&Var1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_44(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_35(&Var1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404956.f_484)
	{
		if (!func_49(unk_0x4D29100D094E5511(), 1))
		{
			return 1;
		}
		if (!func_48(Param0, 1008981770))
		{
			if (!func_44(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_44(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_47(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_46(&(Global_2404956.f_39[iVar0 /*12*/])) };
				if (!func_44(&Var1, 0, 0, 0))
				{
					if (!func_44(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_46(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_47(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_42(Param0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_48(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_42(Param0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_49(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_50(iParam0) != 0;
	}
	return func_27(iParam0, bParam1);
}

int func_50(int iParam0)
{
	if (func_705(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_51(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404956.f_1281[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404956.f_1281[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_52(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_53(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_54(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_55(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_56(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404956.f_1509.f_1 == 0 && Global_2404956.f_1509 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x835D05FAF56BD37E(&(Global_2404956.f_1509.f_1)))
			{
				case 0:
					func_116(uParam1, uParam2);
					if (!Global_2404956.f_1509.f_2)
					{
						if (uParam2->f_7 && Global_2404956.f_512.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
							}
							if (uParam1->f_5 && func_17(Global_2404956.f_468))
							{
								if (!Global_2404956.f_1509.f_5)
								{
									Global_2404956.f_1509.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_116(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xD0BF3829C5A8019D())
		{
			if (!unk_0x3D091970DABE4DB3())
			{
				if (unk_0xC98399F47A7AC247())
				{
					func_116(uParam1, uParam2);
					Global_2404956.f_1509.f_1 = unk_0xED704F01835650FD();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xE415370974A8A44B();
				func_116(uParam1, uParam2);
				if (!Global_2404956.f_1509.f_2)
				{
					Global_2404956.f_1509.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_113(Global_2404956.f_512, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64));
	}
	if (uParam2->f_7 && !Global_2404956.f_1509.f_4)
	{
		Global_2404956.f_1509.f_4 = 1;
		func_61(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404956.f_1509.f_1 > 0 || Global_2404956.f_1509 > 0)
	{
		if (uParam1->f_5 || unk_0xD0BF3829C5A8019D())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404956.f_1509.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404956.f_1509.f_3)
					{
						iVar4 = Global_2404956.f_1509.f_3 + 1;
					}
					if (iVar4 > (Global_2404956.f_1509.f_1 - 1))
					{
						iVar4 = (Global_2404956.f_1509.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x5D219BF05C81BF80(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x5ABF8BB98EC00BD1(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x9381F8B552B5520E(iVar4);
					}
					else
					{
						unk_0x1385778FE1237147(iVar4, &iVar5);
					}
					func_61(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404956.f_1509.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404956.f_1509.f_1;
		}
		if (Global_2404956.f_1509.f_1 == iVar4)
		{
			if (uParam1->f_5 && func_17(Global_2404956.f_468))
			{
				if (Global_2404956.f_1509.f_2)
				{
					func_16(uParam0, &(Global_2404956.f_1509.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_16(uParam0, &(Global_2404956.f_1509.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x3A5708FEE1B560A9(0, Global_2404956.f_1509.f_1);
				unk_0x5D219BF05C81BF80(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_57(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
		if (uParam1->f_5 && func_17(Global_2404956.f_468))
		{
			if (!Global_2404956.f_1509.f_5)
			{
				Global_2404956.f_1509.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_18(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
		func_60(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_57(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_59(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2408374[iVar4])
	{
		if (func_58(Var1, &(Global_2407545[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_36(&Var1, Global_2407545[iVar4 /*92*/][iVar0 /*7*/], Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408374[8])
	{
		if (func_58(Var1, &(Global_2407545[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_36(&Var1, Global_2407545[iVar4 /*92*/][iVar0 /*7*/], Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_58(struct<3> Param0, var uParam3)
{
	return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_59(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408384[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408384[1])
	{
		if (Param0.f_0 < Global_2408388[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408384[2])
	{
		if (Param0.f_0 < Global_2408388[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408388[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408388[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

void func_60(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404956.f_1617[(3 - iVar0) /*3*/] = { Global_2404956.f_1617[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404956.f_1617[0 /*3*/] = { Param0 };
}

void func_61(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	int iVar15;
	struct<8> Var16;
	bool bVar24;
	bool bVar25;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404956.f_468 == 1)
		{
			if (unk_0x43698C98CC255554((Global_2404956.f_481.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (func_110(unk_0x4D29100D094E5511()))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_109(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x04FC55004AEAC297(unk_0x27D769C59BC9D030(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x04FC55004AEAC297(unk_0x27D769C59BC9D030(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_108(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar14 = false;
			}
		}
		iVar10++;
	}
	if (bVar14)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_102(Param0, fParam3, uParam4->f_15, func_107(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404956.f_1;
		}
	}
	else if (!func_99(Param0, 25f, unk_0x4D29100D094E5511(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_98(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_98(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404956.f_625)
		{
			Var11 = { Global_2404956.f_481 };
			if (Global_2404956.f_468 == 26)
			{
				Var11 = { Global_2404956.f_512.f_18 };
			}
			if (func_45(Var11))
			{
				if ((!func_44(&Param0, 0, 0, 0) && !func_33(&Param0, 0, 0)) && !func_97(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_33(&Param0, 0, 0) && !func_97(&Param0, 0)) && !func_32(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_96(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_95(unk_0x4D29100D094E5511()) && func_93(unk_0x4D29100D094E5511())))
		{
			if (!func_92(&Param0, &(Global_2404956.f_1509.f_64), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_93(unk_0x4D29100D094E5511()))
		{
			if (!func_91(Param0, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_90(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_90(Param0))
			{
				if (func_17(Global_2404956.f_468))
				{
					if (func_48(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_89(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404956.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_57(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (func_22(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_88(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var16.f_2 = 1176256410;
	bVar24 = false;
	bVar25 = false;
	iVar15 = 0;
	while (iVar15 < 3)
	{
		if (iVar7 >= Global_2404956.f_1509.f_6[iVar15 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar24)
				{
					if (bParam6)
					{
						uParam5->f_4 = 0;
						bVar4 = false;
					}
					else
					{
						bVar4 = true;
					}
					if (uParam4->f_21)
					{
						fVar0 = func_80(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_80(Param0, Global_2404956.f_1484, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar24 = true;
				}
				if ((func_17(Global_2404956.f_468) && iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar25)
					{
						fVar2 = func_78(Param0);
						bVar25 = true;
					}
					if (fVar2 < Global_2404956.f_1509.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_77(Var16, iVar15);
						Global_2404956.f_1509.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar0 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_1 = fVar0;
					func_77(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
			else
			{
				if (!bVar24)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_76(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_63(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_62(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_62(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar24 = true;
				}
				if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar3 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_3 = fVar3;
					func_77(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
		}
		iVar15++;
	}
}

float func_62(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_63(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_705(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x4D29100D094E5511() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_66(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0xEDB589A956C2855F(iVar11) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
					{
						if (!unk_0xEDB589A956C2855F(iVar11) == -1 || !func_49(unk_0x4D29100D094E5511(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar11) || !bParam6)
					{
						if (func_65(iVar11))
						{
							Var5 = { func_64(iVar11) };
							if (!iVar11 == unk_0x4D29100D094E5511())
							{
								Var8 = { unk_0x272C9705DEFA6893(unk_0xC834A7C58DEB59B4(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x676D4CD42E0837CA(Param0, Var5, 1);
							fVar2 = unk_0x676D4CD42E0837CA(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_64(int iParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

int func_65(int iParam0)
{
	if (unk_0xDF5FCBDBA9ECE63C(unk_0xC834A7C58DEB59B4(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (func_705(iParam0, 0, 1))
	{
		if (!func_74(iParam0))
		{
			if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam0))
			{
				if (!unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
				{
					if (func_27(unk_0x4D29100D094E5511(), 1))
					{
						if (!func_73(unk_0xEDB589A956C2855F(iParam0), unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
				{
					if (!func_27(unk_0x4D29100D094E5511(), 1))
					{
						if (!func_67(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_72(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	Global_2459440 = { func_71(iParam0) };
	if (unk_0xCD9EF71963819AF0(&Global_2459440))
	{
		return 1;
	}
	if (func_68(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (!iVar0 == func_69())
	{
		if (iVar0 == func_70(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_69()
{
	return -1;
}

int func_70(int iParam0)
{
	if (iParam0 != func_69())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_69();
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(iParam0, &Var0, 13);
	return Var0;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0x4A95235C630E7410())
	{
		Global_2459440 = { func_71(iParam0) };
		Global_2459453 = { func_71(iParam1) };
		if (unk_0x5363E9DA9285526E(&Global_2459440))
		{
			if (unk_0x5363E9DA9285526E(&Global_2459453))
			{
				unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440);
				unk_0xCA2992FB3936A00C(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 0);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 1);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 2);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 4);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 5);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 6);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 8);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 9);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 10);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 12);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 13);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 14);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_74(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return 1;
	}
	if (func_75())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

float func_76(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_705(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_705(iVar1, 1, 1))
		{
			if (!func_126(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if (func_65(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam7 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

void func_77(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404956.f_1509.f_6[iParam8 /*8*/] };
	Global_2404956.f_1509.f_6[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_77(Var0, iParam8 + 1);
	}
}

float func_78(struct<3> Param0)
{
	var uVar0;
	
	return func_79(Param0, &(Global_2404956.f_39), &uVar0);
}

float func_79(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404956.f_1714) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_80(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_62(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_62(func_63(Param0, 1, 0, 0, 1), 0f, func_87(), func_85(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_62(func_83(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && !func_49(unk_0x4D29100D094E5511(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_62(func_82(Param0, unk_0x4D29100D094E5511(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_81(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_62(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_62(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_62(unk_0x2A488C176D52CCA5(Global_2404956.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_81(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xACD6C8E078389F4E(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x98FC5491A0C1C7C7(uVar3))
	{
		unk_0x77812F84643C3C4A(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x43698C98CC255554((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_82(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_705(iVar3, 0, 1))
			{
				if (unk_0xEDB589A956C2855F(iVar3) != unk_0xEDB589A956C2855F(iParam3) || (unk_0xEDB589A956C2855F(iVar3) == -1 && unk_0xEDB589A956C2855F(iParam3) == -1))
				{
					if (Global_2413760.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_83(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xFCB979DB36343941(unk_0x27D769C59BC9D030(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD2CFFE76B625AE55(uVar6[iVar2]))
		{
			if (!unk_0x2006A8C1BA2AFE80(uVar6[iVar2], 0))
			{
				if (func_84(uVar6[iVar2]))
				{
					Var3 = { unk_0xA8CFDE65C45F813B(uVar6[iVar2], 1) };
					fVar1 = unk_0x676D4CD42E0837CA(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF384805745D7A349(uParam0);
	switch (unk_0x8B16618F631DB43B(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x8B16618F631DB43B(iVar0, Global_1574198[unk_0x4D29100D094E5511()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 0)
	{
		iVar1 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x8B16618F631DB43B(iVar0, Global_1573909[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_85()
{
	if (func_86())
	{
		if ((unk_0xEC6E5897335290DD(Global_2404956.f_39.f_67) || unk_0xDBFA5C79D9B3D622(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_86()
{
	if (Global_2404956.f_39.f_65 && !Global_2404956.f_39.f_295)
	{
		if (!func_74(unk_0x4D29100D094E5511()))
		{
			return 1;
		}
	}
	return 0;
}

float func_87()
{
	if (func_86())
	{
		if ((unk_0xEC6E5897335290DD(Global_2404956.f_39.f_67) || unk_0xDBFA5C79D9B3D622(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_88(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x058784EB5BE12044(Param0, fParam7)) || (fVar0 > 0f && unk_0x838311C5B5F34E30(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x5EDE06C252535A86(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x5EDE06C252535A86(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_89(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404956.f_39.f_55)
	{
		if (unk_0xBFF8C08B5EEF0974(Global_2404956.f_39.f_56))
		{
			if (!unk_0x76D34DF1CE9FE002(Param0))
			{
				uVar0 = unk_0x53DE78F24F01D352(Param0);
				if (unk_0xBFF8C08B5EEF0974(uVar0))
				{
					iVar1 = unk_0x8BADF2859140B49D(uVar0);
					if (!iVar1 == Global_2404956.f_39.f_57)
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
		}
	}
	return 1;
}

int func_90(struct<3> Param0)
{
	switch (Global_2404956.f_1505)
	{
		case 0:
			return func_129(Param0, Global_2404956.f_1484, Global_2404956.f_1487, 0, 0);
			break;
		
		case 1:
			return func_52(Param0, Global_2404956.f_1498, Global_2404956.f_1501, 0, 0);
			break;
		
		case 2:
			return unk_0xCC0EABB8FAB8D0DE(Param0, Global_2404956.f_1498, Global_2404956.f_1501, Global_2404956.f_1504, 0, 1);
			break;
	}
	return 0;
}

int func_91(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0xCC0EABB8FAB8D0DE(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_92(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_31(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_93(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_94(iParam0))
			{
				if (Global_1587523[iParam0 /*444*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_94(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

int func_95(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_96(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404956.f_1617[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if (func_34(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			func_31(&Var1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_41(Var1, &uVar0) || func_34(Var1))
			{
				Var1 = { *uParam0 };
				func_31(&Var1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_98(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_705(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x676D4CD42E0837CA(func_64(unk_0x4D29100D094E5511()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_705(iVar1, 1, 1))
		{
			if (!func_126(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if ((func_65(iVar1) || !bParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x676D4CD42E0837CA(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam8 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x676D4CD42E0837CA(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_101(Param0, fParam3, iParam4, iParam5, 0) || func_100(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_100(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413760.f_556[iVar0] == 0)
			{
				if (func_23(Param0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
				{
					if (func_705(iVar1, 0, 1) && func_705(iParam3, 0, 1))
					{
						return 1;
					}
					else
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

int func_101(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (bParam6)
			{
				if (func_705(iVar1, 0, 1) && func_705(iParam4, 0, 1))
				{
					if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_705(iVar1, 0, 1) && func_705(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_64(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_705(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_64(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_102(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404956.f_1 = 0;
	if (!func_99(Param0, 0.5f, unk_0x4D29100D094E5511(), 0, 0))
	{
		Global_2404956.f_1++;
		if (bParam5)
		{
			if (func_150(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
				if (!func_106(Param0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_22(Param0, 1056964608))
					{
						Global_2404956.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
			}
		}
		else if (!bParam4)
		{
			if (func_150(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
				if (!func_106(Param0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_103(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404956.f_1++;
						if (!func_22(Param0, 1056964608))
						{
							Global_2404956.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
			}
		}
		else if (func_150(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
			if (!func_106(Param0, fParam12))
			{
				Global_2404956.f_1++;
				if (!func_103(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404956.f_1++;
					if (!func_22(Param0, 1056964608))
					{
						Global_2404956.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
		}
	}
	return 0;
}

int func_103(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x4D29100D094E5511() == iVar1)
		{
			if ((func_705(iVar1, 1, 1) && func_65(iVar1)) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (!func_105(unk_0x4D29100D094E5511(), iVar1, -2, 0))
				{
					if (func_104(func_64(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_104(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0xCC0EABB8FAB8D0DE(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == iParam2;
	}
	return unk_0xEDB589A956C2855F(iParam0) == iParam2;
}

int func_106(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_705(iVar1, 1, 1) && func_65(iVar1)) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
		{
			if ((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && unk_0xEDB589A956C2855F(iVar1) == -1) && !func_49(unk_0x4D29100D094E5511(), 1))
			{
				return 0;
			}
			else if ((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && !unk_0x4D29100D094E5511() == iVar1) || !func_105(unk_0x4D29100D094E5511(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_64(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_107(int iParam0)
{
	if ((Global_2404956.f_468 == 9 || Global_2404956.f_468 == 9) || (Global_2404956.f_468 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam8 == 0)
		{
			if (func_705(iVar1, bParam4, bParam5))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam7 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_65(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && iParam9) && bParam6) && func_67(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (unk_0x676D4CD42E0837CA(func_64(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_705(iVar1, 1, 1))
			{
				if ((!func_126(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1)) && iVar1 != unk_0x4D29100D094E5511())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xEDB589A956C2855F(iVar1) == iVar3)
					{
						if (unk_0x676D4CD42E0837CA(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	if ((func_49(iParam0, 1) || func_112(iParam0)) || func_111(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return 0;
}

void func_113(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_115(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var16, Param0) < unk_0x2A488C176D52CCA5(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359394[iVar1 /*3*/] };
				func_114(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_114(var uParam0, var uParam1, int iParam2)
{
	Global_2409351 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_114(&Global_2409351, uParam1, iParam2 + 1);
	}
}

void func_115(var uParam0, var uParam1, int iParam2)
{
	Global_2409347 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_115(&Global_2409347, uParam1, iParam2 + 1);
	}
}

void func_116(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			if (func_117(Global_2404956.f_1281[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404956.f_1281[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404956.f_1281[iVar0 /*4*/] };
					fVar4 = unk_0xCBE9F57FCC3C2A5A(Var1.f_0, Var1.f_1);
				}
				func_61(Global_2404956.f_1281[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404956.f_1509++;
			}
			iVar0++;
		}
	}
}

int func_117(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_19(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_19(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_118(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_53(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_119()
{
	func_123();
	func_122();
	func_121();
	func_120();
}

void func_120()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404956.f_1509.f_64[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_121()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404956.f_1509.f_31[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_122()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404956.f_1509.f_6[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_123()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404956.f_1509 = { Var0 };
}

var func_124()
{
	return Global_1310987.f_4;
}

void func_125(var uParam0, var uParam1)
{
	func_151();
	func_149(uParam0, uParam1);
}

bool func_126(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_127(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_127(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_128();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_128()
{
	return Global_1312747;
}

bool func_129(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_130(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404956.f_1150 > 0 && func_148(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_131(uParam0, uParam1, uParam2);
	}
}

void func_131(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	var uVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_30(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_147(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2409361.f_162 = 0;
	Global_2409361.f_163 = 0;
	Global_2409361.f_164 = -99;
	Global_2409361.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409361[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409361.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xACD6C8E078389F4E(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x98FC5491A0C1C7C7(iVar8))
		{
			unk_0x77812F84643C3C4A(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409361.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409361.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC61F08A082469192(iVar8)) || unk_0x8810C33CA8D476DD(iVar8))
			{
				unk_0x94BBFE6F5B663AC9(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_97(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_146(Var1))
									{
										if (!func_22(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_145(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_147(&Var1, 0)) || uParam2->f_48 == 0)
														{
															Var1 = { func_143(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
															if (!bVar12)
															{
																if (bVar11)
																{
																	iVar0 = (iVar0 + -1);
																}
															}
															if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
															{
																if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																{
																	if ((uParam2->f_12 && !func_138(Var1, uVar4, uParam2->f_34, unk_0x4D29100D094E5511(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_30(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																		{
																			if (uParam2->f_8)
																			{
																				iVar17 = uParam2->f_31;
																				bVar18 = true;
																				iVar19 = 1;
																				fVar20 = uParam2->f_49;
																				if (!uParam2->f_55)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (uParam2->f_17)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					if (uParam2->f_33 == 1)
																					{
																						fVar20 = (fVar20 * 0.375f);
																					}
																				}
																				else
																				{
																					bVar18 = true;
																					iVar19 = 1;
																					if (uParam2->f_28)
																					{
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																				}
																				iVar21 = 0;
																				if (uParam2->f_3 > 7f)
																				{
																					if (func_150(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_150(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_137(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || uParam2->f_33 >= 2)
																				{
																					if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (uParam2->f_52)
																						{
																							iVar22 = func_136(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162)
																									{
																										Global_2409361[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409361.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409361.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409361.f_162 == 0)
																								{
																									Global_2409361[0 /*3*/] = { Var1 };
																									Global_2409361.f_121[0] = uVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409361[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_135(Var1, uVar4, iVar16);
																												iVar16 = Global_2409361.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409361.f_162++;
																								if (Global_2409361.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409361[Global_2409361.f_162 /*3*/] = { Var1 };
																								Global_2409361.f_121[Global_2409361.f_162] = uVar4;
																								Global_2409361.f_162++;
																								if (func_145(Var1, uParam2))
																								{
																									Global_2409361.f_163++;
																								}
																								if (Global_2409361.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						*uParam0 = { Var1 };
																						*uParam1 = uVar4;
																						return;
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			else
																			{
																				*uParam0 = { Var1 };
																				*uParam1 = uVar4;
																				return;
																			}
																		}
																	}
																	else
																	{
																		iVar15++;
																	}
																}
																else
																{
																	iVar0 = 100;
																}
															}
														}
														else
														{
															iVar0++;
														}
													}
													else if (!uParam2->f_32)
													{
														iVar0 = 100;
													}
												}
												else
												{
													iVar0++;
												}
											}
											else
											{
												iVar0++;
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2409361.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409361[0 /*3*/] };
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
					else
					{
						if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
						{
							func_133(0, uParam2);
						}
						iVar24 = unk_0x3A5708FEE1B560A9(0, Global_2409361.f_162);
						Var25 = { Global_2409361[0 /*3*/] };
						uVar28 = Global_2409361.f_121[0];
						Global_2409361[0 /*3*/] = { Global_2409361[iVar24 /*3*/] };
						Global_2409361.f_121[0] = Global_2409361.f_121[iVar24];
						Global_2409361[iVar24 /*3*/] = { Var25 };
						Global_2409361.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409361[0 /*3*/] };
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_131(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x3A5708FEE1B560A9((1 + iVar15), (40 + iVar15));
						unk_0xEFE2D8C4B92E42FD(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_143(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_30(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_147(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_131(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = uVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_131(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_132(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409361.f_164 = iVar8;
	}
}

void func_132(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_99(*(uParam0[iVar2 /*4*/]), 5f, unk_0x4D29100D094E5511(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_133(int iParam0, var uParam1)
{
	if (!func_145(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162 = (Global_2409361.f_162 - 1);
		func_134(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
		{
			func_133(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_133(iParam0 + 1, uParam1);
	}
}

void func_134(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409361[iParam0 /*3*/] = { Global_2409361[iParam0 + 1 /*3*/] };
			Global_2409361.f_121[iParam0] = Global_2409361.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_135(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409361[iParam4 /*3*/] };
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = { Param0 };
	Global_2409361.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_135(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_136(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_66(iVar5))
		{
			Var1 = { func_64(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_137(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam9 == 0)
		{
			if (func_705(iVar1, bParam5, bParam6))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam8 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_65(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && iParam10) && bParam7) && func_67(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (func_23(func_64(iVar1), Param0, uParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_142(Param0, uParam3, iParam4, iParam5, iParam6) || func_139(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_139(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_141(Param0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_140(Param0, uParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
				{
					if (func_705(iVar1, 0, 1) && func_705(iParam5, 0, 1))
					{
						return 1;
					}
					else
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

int func_140(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_23(Param0, Param5, uParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_24(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x43698C98CC255554((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x43698C98CC255554((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x43698C98CC255554((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_25(&Var23, 0f, 0f, uParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_25(&Var26, 0f, 0f, uParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_23(Var1[iVar0 /*3*/], Param5, uParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_141(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_26(iParam3, 1008981770);
	fVar1 = func_26(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_142(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_705(iVar1, 0, 1) && func_705(iParam5, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (func_23(Global_2413760.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_23(func_64(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_23(Global_2413760.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_705(iVar1, 0, 0))
			{
				if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
				{
					if (func_23(func_64(iVar1), Param0, uParam3, iParam4, 1036831949))
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

Vector3 func_143(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_144(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x94BBFE6F5B663AC9(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x53F874E7C513393E(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_24(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_144(Param0, *uParam3, Param6))
		{
			if (bParam5)
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x8E183FB8F99DD2D7(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x65CAD66C4C6B66F6(Param0, *uParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_24(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_144(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_25(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_37(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_129(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_52(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xCC0EABB8FAB8D0DE(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_146(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_59(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[iVar1])
	{
		if (func_58(Param0, &(Global_2408393[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_58(Param0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_147(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_129(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_52(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xCC0EABB8FAB8D0DE(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_40(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_148(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404956.f_1150 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_30(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_147(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2409361.f_162 = 0;
		Global_2409361.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409361[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409361.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1150)
		{
			Var1 = { Global_2404956.f_1151[iVar0 /*4*/] };
			uVar4 = Global_2404956.f_1151[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_138(Var1, uVar4, uParam2->f_34, unk_0x4D29100D094E5511(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_30(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
						{
							if (uParam2->f_8)
							{
								iVar6 = uParam2->f_31;
								bVar7 = true;
								iVar8 = 1;
								fVar9 = uParam2->f_49;
								if (!uParam2->f_55)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (uParam2->f_17)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									if (uParam2->f_33 == 1)
									{
										fVar9 = (fVar9 * 0.375f);
									}
								}
								else
								{
									bVar7 = true;
									iVar8 = 1;
									if (uParam2->f_28)
									{
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
								}
								bVar10 = false;
								if (uParam2->f_3 > 7f)
								{
									if (func_150(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_150(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_137(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
								{
									bVar10 = true;
								}
								if (bVar10)
								{
									if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
									{
										fVar12 = 0f;
										if (uParam2->f_52)
										{
											iVar11 = func_136(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162)
													{
														Global_2409361[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409361.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409361.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409361.f_162 == 0)
												{
													Global_2409361[0 /*3*/] = { Var1 };
													Global_2409361.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409361[iVar5 /*3*/], uParam2->f_35))
															{
																func_135(Var1, uVar4, iVar5);
																iVar5 = Global_2409361.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
											else
											{
												Global_2409361[Global_2409361.f_162 /*3*/] = { Var1 };
												Global_2409361.f_121[Global_2409361.f_162] = uVar4;
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = { Var1 };
										*uParam1 = uVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = { Var1 };
								*uParam1 = uVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409361.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409361[0 /*3*/] };
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
				{
					func_133(0, uParam2);
				}
				iVar13 = unk_0x3A5708FEE1B560A9(0, Global_2409361.f_162);
				Var14 = { Global_2409361[0 /*3*/] };
				uVar17 = Global_2409361.f_121[0];
				Global_2409361[0 /*3*/] = { Global_2409361[iVar13 /*3*/] };
				Global_2409361.f_121[0] = Global_2409361.f_121[iVar13];
				Global_2409361[iVar13 /*3*/] = { Var14 };
				Global_2409361.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409361[0 /*3*/] };
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_148(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_131(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_149(var uParam0, var uParam1)
{
	unk_0x963FDDD262945634(uParam0, uParam1, 0.1f);
	Global_2404956.f_1492 = unk_0xF42B3EF31F918DB2();
	Global_2404956.f_1490 = 1;
	Global_2404956.f_1493 = unk_0x20D394965B47B01A();
}

int func_150(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x058784EB5BE12044(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x838311C5B5F34E30(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x838311C5B5F34E30(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x5EDE06C252535A86(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam13)
	{
		if (unk_0x7E5CC56729CE6D59(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_108(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_98(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404956++;
	return 1;
}

void func_151()
{
	if (Global_2404956.f_1490)
	{
		if (unk_0xF42B3EF31F918DB2() == Global_2404956.f_1492)
		{
			unk_0xF2EC7ABCE01822BF();
		}
		else
		{
			unk_0xF2EC7ABCE01822BF();
		}
		Global_2404956.f_1490 = 0;
	}
}

int func_152(bool bParam0)
{
	if (unk_0x3934E959DB2478D3())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_153()
{
	return Local_192.f_38[Local_192.f_36 /*3*/];
}

void func_154()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_192.f_0 != 4)
	{
		iLocal_447 = 0;
		while (iLocal_447 < unk_0xD81B83309CFE36FF())
		{
			if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iLocal_447)))
			{
				iVar2 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(iLocal_447));
				if (func_705(iVar2, 1, 1))
				{
				}
				if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 1))
				{
					if (unk_0xF426A5DE932B3BEE(Local_252[iLocal_447 /*6*/].f_1, 2))
					{
						if (Local_192.f_37 != iVar2)
						{
							Local_192.f_37 = iVar2;
						}
					}
				}
				if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 1))
				{
					if (Local_252[iLocal_447 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_252[iLocal_447 /*6*/].f_5);
					}
				}
				if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 4))
				{
					if (unk_0xF426A5DE932B3BEE(Local_252[iLocal_447 /*6*/].f_1, 5))
					{
						unk_0x26545538B51562AD(&(Local_192.f_1), 4);
						Local_192.f_35 = iVar2;
					}
				}
				if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0xF426A5DE932B3BEE(Local_192.f_1, 1) || unk_0xF426A5DE932B3BEE(Local_192.f_1, 3)) || unk_0xF426A5DE932B3BEE(Local_192.f_1, 4)) || unk_0xF426A5DE932B3BEE(Local_192.f_1, 5))
						{
							if (!unk_0xF426A5DE932B3BEE(Local_252[iLocal_447 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 5))
			{
				if (Local_192.f_33 > -1)
				{
					if (iLocal_447 == Local_192.f_33)
					{
						unk_0x26545538B51562AD(&(Local_192.f_1), 5);
					}
				}
			}
			iLocal_447++;
		}
		if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 1))
		{
			iVar0 = (iVar0 + Local_192.f_6);
			if (iVar0 >= func_155())
			{
				unk_0x26545538B51562AD(&(Local_192.f_1), 1);
			}
			if (Local_192.f_5 != iVar0)
			{
				if (Local_192.f_5 < iVar0)
				{
					Local_192.f_5 = iVar0;
				}
				else if (Local_192.f_6 != (Local_192.f_5 - iVar0))
				{
					Local_192.f_6 = (Local_192.f_5 - iVar0);
				}
			}
		}
		if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0x26545538B51562AD(&(Local_192.f_1), 2);
			}
		}
	}
}

int func_155()
{
	return Global_262145.f_10443;
}

int func_156()
{
	int iVar0;
	int iVar1;
	
	if (func_160() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_159(Local_192.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x3A5708FEE1B560A9(0, 20);
				if (func_157(iVar1))
				{
					Local_192.f_38[iVar0 /*3*/] = { Local_753[iVar1 /*3*/] };
					Local_753[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_159(Local_192.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_157(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_159(Local_753[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_159(Local_192.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0x676D4CD42E0837CA(Local_192.f_38[iVar0 /*3*/], Local_753[iParam0 /*3*/], 1);
				if (fVar1 < func_158())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_158()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_10444);
}

bool func_159(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_160()
{
	int iVar0;
	
	if (Local_192.f_48 != -1)
	{
		return Local_192.f_48;
	}
	iVar0 = unk_0x3A5708FEE1B560A9(0, 4);
	if (!func_162(iVar0))
	{
		Local_192.f_48 = iVar0;
		func_161();
	}
	return Local_192.f_48;
}

void func_161()
{
	switch (Local_192.f_48)
	{
		case 0:
			Local_753[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			Local_753[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			Local_753[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_753[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_753[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_753[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_753[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_753[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			Local_753[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_753[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			Local_753[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_753[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_753[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			Local_753[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			Local_753[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_753[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_753[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			Local_753[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_753[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_753[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			Local_753[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			Local_753[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			Local_753[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_753[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_753[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			Local_753[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			Local_753[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			Local_753[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_753[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_753[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_753[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_753[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			Local_753[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_753[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_753[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_753[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_753[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			Local_753[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_753[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			Local_753[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			Local_753[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			Local_753[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			Local_753[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			Local_753[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_753[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_753[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			Local_753[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			Local_753[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			Local_753[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_753[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			Local_753[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			Local_753[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			Local_753[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			Local_753[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			Local_753[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			Local_753[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			Local_753[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			Local_753[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_753[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			Local_753[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			Local_753[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			Local_753[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			Local_753[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_753[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			Local_753[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			Local_753[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			Local_753[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			Local_753[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_753[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			Local_753[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			Local_753[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			Local_753[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_753[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			Local_753[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			Local_753[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			Local_753[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_753[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			Local_753[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			Local_753[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			Local_753[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10386;
		
		case 1:
			return Global_262145.f_10387;
		
		case 2:
			return Global_262145.f_10385;
		
		case 3:
			return Global_262145.f_10384;
		
		default:
	}
	return 0;
}

int func_163(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_164(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x96BA6BF1BA1235CC())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_165()
{
	func_167();
	if (unk_0xF426A5DE932B3BEE(iLocal_446, 9))
	{
		return;
	}
	if (func_662())
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_446, 0))
		{
			unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 1);
			unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 1);
			unk_0x26545538B51562AD(&iLocal_446, 0);
		}
		if (!unk_0xF426A5DE932B3BEE(iLocal_446, 1))
		{
			if (unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_START"))
			{
				unk_0x26545538B51562AD(&iLocal_446, 1);
			}
		}
		if (unk_0xF426A5DE932B3BEE(iLocal_446, 1))
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 3))
			{
				if (Local_192.f_5 == 1)
				{
					if (unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_MID"))
					{
						unk_0x26545538B51562AD(&iLocal_446, 3);
					}
				}
			}
		}
		if (unk_0xF426A5DE932B3BEE(iLocal_446, 3))
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 4))
			{
				if (Local_192.f_5 == 2)
				{
					if (unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_FINAL"))
					{
						unk_0x26545538B51562AD(&iLocal_446, 4);
					}
				}
			}
		}
		if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 1) || unk_0xF426A5DE932B3BEE(Local_192.f_1, 4))
		{
			if (unk_0xF426A5DE932B3BEE(iLocal_446, 4))
			{
				if (!unk_0xF426A5DE932B3BEE(iLocal_446, 6))
				{
					if (unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_STOP"))
					{
						unk_0x26545538B51562AD(&iLocal_446, 6);
						unk_0x26545538B51562AD(&iLocal_446, 2);
						unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 0);
						unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_338())
	{
		if (func_166(unk_0x4D29100D094E5511(), 20))
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 0))
			{
				unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 1);
				unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 1);
				unk_0x26545538B51562AD(&iLocal_446, 0);
			}
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 7))
			{
				if (unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0x26545538B51562AD(&iLocal_446, 7);
				}
			}
			if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 1) || unk_0xF426A5DE932B3BEE(Local_192.f_1, 4))
			{
				if (unk_0xF426A5DE932B3BEE(iLocal_446, 7))
				{
					if (!unk_0xF426A5DE932B3BEE(iLocal_446, 6))
					{
						if (unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_STOP"))
						{
							unk_0x26545538B51562AD(&iLocal_446, 6);
							unk_0x26545538B51562AD(&iLocal_446, 2);
							unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 0);
							unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_166(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

void func_167()
{
	if (unk_0xF426A5DE932B3BEE(iLocal_446, 8))
	{
		if (unk_0xF426A5DE932B3BEE(iLocal_446, 9))
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 10))
			{
				if (unk_0xF426A5DE932B3BEE(iLocal_446, 11))
				{
					if (!unk_0xF426A5DE932B3BEE(iLocal_446, 12))
					{
						unk_0xB690D98009ECA44C(1);
						unk_0xF01E9C7FDA2976B1("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xF426A5DE932B3BEE(iLocal_446, 15))
				{
					if (unk_0x68BD4F826EFDDC53("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x26545538B51562AD(&iLocal_446, 15);
					}
				}
				if (unk_0xF426A5DE932B3BEE(iLocal_446, 15))
				{
					if (!unk_0xF426A5DE932B3BEE(iLocal_446, 13))
					{
						if (unk_0x68BD4F826EFDDC53("APT_FADE_IN_RADIO"))
						{
							unk_0x26545538B51562AD(&iLocal_446, 13);
						}
					}
					if (unk_0xF426A5DE932B3BEE(iLocal_446, 13))
					{
						unk_0x26545538B51562AD(&iLocal_446, 10);
					}
				}
			}
		}
	}
}

void func_168()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_662() && !func_338())
	{
		return;
	}
	if (Local_192.f_34 > -1)
	{
		iVar3 = unk_0x6EED86A16F7EA8F2(Local_192.f_34);
		if (unk_0x27C9C05A6B4E58D2(iVar3))
		{
			Var0 = { unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iVar3), 0) };
		}
	}
	if (!func_159(Var0, 0f, 0f, 0f, 0))
	{
		func_169(142, Var0, &uLocal_821, 1140457472, 1144750080, 0);
	}
}

void func_169(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_112(unk_0x4D29100D094E5511()) && !func_209(unk_0x4D29100D094E5511())) && !unk_0xF426A5DE932B3BEE(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1, 8)) && (func_208(unk_0x4D29100D094E5511()) || func_207(unk_0x4D29100D094E5511())))
	{
		return;
	}
	Global_1727391 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Param1);
	func_203(iParam0, fVar0);
	if (unk_0x1E114237D972903B() && unk_0xE0D1D679E4B5371F() == 15)
	{
		if (func_202(unk_0x4D29100D094E5511()) || func_200(unk_0x4D29100D094E5511()))
		{
			if (!unk_0x1E83AF5FFE7732D0(1344549371))
			{
				unk_0x3D275368655C2DE8(1344549371);
			}
		}
		else if (unk_0x1E83AF5FFE7732D0(1344549371))
		{
			unk_0xF006BF9DA519F097(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_199(unk_0x4D29100D094E5511(), 21))
		{
			func_198(Param1, 1, 0);
		}
		if (!*uParam4 && func_705(unk_0x4D29100D094E5511(), 1, 1))
		{
			*uParam4 = 1;
			if (func_197(iParam0))
			{
				unk_0xE71148ED586F1ED1(func_196(iParam0));
				if (func_195(iParam0, -1))
				{
					unk_0x193107EFB9C9FD44(0);
					if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
					{
						unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 1);
						unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 1);
					}
					unk_0x26545538B51562AD(&(Global_1727391.f_3), 0);
				}
			}
			if (func_194(iParam0))
			{
				fVar1 = func_193(iParam0);
				if (fVar1 != 1f)
				{
					func_190(fVar1);
					unk_0x26545538B51562AD(&(Global_1727391.f_3), 1);
				}
			}
			if (!Global_2391042)
			{
				if (func_189(iParam0) && func_202(unk_0x4D29100D094E5511()))
				{
					func_188(1);
					func_187(2);
				}
			}
			func_186(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_166(unk_0x4D29100D094E5511(), 19))
			{
				func_185(19);
			}
		}
		if (*uParam4 && func_705(unk_0x4D29100D094E5511(), 1, 1))
		{
			*uParam4 = 0;
			if (func_197(iParam0))
			{
				if (unk_0xF426A5DE932B3BEE(Global_1727391.f_3, 0))
				{
					unk_0xE71148ED586F1ED1(1f);
					unk_0x193107EFB9C9FD44(5);
					unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 0);
				}
			}
			if (func_194(iParam0))
			{
				func_184();
				unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 1);
			}
			if (iParam7 && !func_112(unk_0x4D29100D094E5511()))
			{
				if (func_183(unk_0x4D29100D094E5511()) != 152)
				{
					func_172();
				}
			}
			if (func_171(2))
			{
				func_188(0);
				func_170(2);
			}
		}
	}
}

void func_170(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4660.f_18), iParam0);
}

bool func_171(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4660.f_18, iParam0);
}

void func_172()
{
	Global_2404956.f_20 = { Global_2406765 };
	Global_2404956.f_22 = { Global_2406767 };
	func_181();
	func_173(1, 1);
}

void func_173(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404956.f_39 = { Global_2406784 };
	}
	else
	{
		Global_2404956.f_39 = { Global_2406784 };
		Global_2404956.f_39.f_49 = { Global_2406784.f_49 };
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (bParam0)
	{
		func_180();
	}
	func_176(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_175(0);
	func_174();
}

void func_174()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == unk_0xF42B3EF31F918DB2())
	{
		Global_2404956.f_469 = { Var0 };
	}
}

void func_175(bool bParam0)
{
	if (bParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_176(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_178();
		func_177(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_178();
		func_177(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = unk_0xF42B3EF31F918DB2();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

void func_178()
{
	func_179();
	Global_2404956.f_635 = 0;
}

void func_179()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_180()
{
	Global_2404956.f_347 = { Global_2407092 };
}

void func_181()
{
	func_182();
	Global_2404956.f_1280 = 0;
}

void func_182()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404956.f_1281[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_183(int iParam0)
{
	if (func_111(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

void func_184()
{
	if (unk_0xA6C3B54732ED5989(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == unk_0xF42B3EF31F918DB2() && Global_2460486.f_4655 < 1f)
		{
			return;
		}
	}
	Global_2460486.f_4656 = -1;
	Global_2460486.f_4655 = 1f;
}

void func_185(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_4), iParam0);
}

void func_186(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_4), iParam0);
}

void func_187(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_188(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

void func_190(float fParam0)
{
	float fVar0;
	
	if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == func_191())
	{
		return;
	}
	fVar0 = (Global_2460486.f_4655 - fParam0);
	if (unk_0xA6C3B54732ED5989(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == unk_0xF42B3EF31F918DB2() && unk_0x43698C98CC255554(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2460486.f_4655 = fParam0;
	Global_2460486.f_4656 = unk_0xF42B3EF31F918DB2();
}

int func_191()
{
	switch (func_192())
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

int func_192()
{
	return Global_25120;
}

float func_193(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return 1;
		
		default:
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
	}
	return 0;
}

float func_196(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

void func_198(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404956.f_39.f_49 = { Param0 };
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

bool func_199(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_200(int iParam0)
{
	if (func_201(iParam0))
	{
		if (func_202(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_69())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_69())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_166(iParam0, 9);
	}
	return 0;
}

void func_203(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_206(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_204();
	}
}

void func_204()
{
	if (!func_205(unk_0x4D29100D094E5511()))
	{
		func_186(25);
	}
}

bool func_205(int iParam0)
{
	return func_166(iParam0, 25);
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10461;
		
		case 142:
			return Global_262145.f_10449;
		
		case 157:
			return Global_262145.f_10416;
		
		case 159:
			return Global_262145.f_10399;
		
		case 162:
			return Global_262145.f_10510;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 0);
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return 0;
}

bool func_209(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 2);
}

void func_210(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_328(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_326() || iParam2 == 24)
	{
		if (func_282(uParam1, iParam2, uParam3, Global_1573685, 0, func_324()))
		{
			func_281(1);
			if ((!func_279() && !func_277()) || unk_0xF426A5DE932B3BEE(Global_2460486.f_4426, 1))
			{
				if (func_276())
				{
					func_273();
				}
				else
				{
					unk_0xCAC481F47E89A9DD(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_272(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_271(uParam1);
							if (unk_0xF426A5DE932B3BEE(uParam3->f_33, 7))
							{
								unk_0xF17F4B0641AB2DE1(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_705(unk_0x6EED86A16F7EA8F2(iVar52), 0, 1))
								{
									iVar35 = unk_0x6EED86A16F7EA8F2(iVar52);
									if (!func_126(iVar35, 0))
									{
										if ((unk_0xF05E4A287C3CAFE3(iVar35, unk_0x4D29100D094E5511()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_94(iVar35))
										{
											iVar44 = iVar35;
											if (func_201(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_268(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_266(unk_0x4D29100D094E5511(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_264())
							{
								if (func_705(unk_0x6EED86A16F7EA8F2(iVar52), 0, 1))
								{
									iVar35 = unk_0x6EED86A16F7EA8F2(iVar52);
								}
								else
								{
									iVar35 = func_69();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_263(iVar35) && func_258(iVar35, iParam2)) && func_705(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = { func_253(iVar35) };
								if (iVar35 == unk_0x4D29100D094E5511())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xD358A441FAC2240C(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_71(iVar35) };
								iVar37 = func_247(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x58CA63150E166003(iVar37);
								}
								Global_1573685++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_264())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_242(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_241(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_235(iVar35, 0);
								if (bVar34)
								{
									if (func_234(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_233(iParam5))
								{
									func_232(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_232(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x26545538B51562AD(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x6EED86A16F7EA8F2(iVar52);
							if (func_705(iVar35, 0, 1) && !unk_0xF426A5DE932B3BEE(iVar49, iVar35))
							{
								iVar35 = unk_0x6EED86A16F7EA8F2(iVar52);
							}
							else
							{
								iVar35 = func_69();
							}
							if (func_263(iVar35))
							{
								if (func_705(unk_0x6EED86A16F7EA8F2(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = { func_253(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_71(iVar35) };
									iVar37 = func_247(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x58CA63150E166003(iVar37);
									}
									Global_1573685++;
									iVar51 = func_235(iVar35, 1);
									if (bVar34)
									{
										if (func_234(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_224(unk_0xD358A441FAC2240C(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xF426A5DE932B3BEE(uParam3->f_33, 11))
						{
							func_221(uParam3, uParam1);
						}
						func_220(&(uParam3->f_21));
						func_219();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xF426A5DE932B3BEE(uParam3->f_33, 7))
						{
							func_218(uParam3, uParam1);
							func_217(uParam1, 0, 1);
							unk_0x26545538B51562AD(&(uParam3->f_33), 7);
						}
						func_218(uParam3, uParam1);
						if (!unk_0xF426A5DE932B3BEE(uParam3->f_33, 11))
						{
							unk_0x26545538B51562AD(&(uParam3->f_33), 11);
						}
						if (func_213(uParam3))
						{
							Global_1573833 = 1;
						}
						func_211(uParam3);
						if (Global_1573833 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x4C3CEC038B6637D7(*uParam1))
					{
						unk_0x5F817444B4379247(7);
						unk_0xFF51FA5E68E9F7D4(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x5F817444B4379247(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_219();
			func_272(0);
			if (unk_0xF426A5DE932B3BEE(uParam3->f_33, 7))
			{
				unk_0xF17F4B0641AB2DE1(&(uParam3->f_33), 7);
			}
			if (unk_0xF426A5DE932B3BEE(uParam3->f_33, 10))
			{
				unk_0xF17F4B0641AB2DE1(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xDAAA6512AF15CB42();
}

void func_211(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_220(&(uParam0->f_21));
		func_212(0);
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_213(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x6EED86A16F7EA8F2(uParam0->f_37);
	if (iVar15 != func_69() && func_705(iVar15, 0, 1))
	{
		Var2 = { func_71(iVar15) };
		iVar1 = func_216(uParam0, uParam0->f_37);
		if (func_215(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x82C57D04FE3EAC10(&Var2))
					{
						if (unk_0xA060414787093051(&Var2))
						{
							iVar16 = 1;
							func_214(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x6683F2299FA7C267(&Var2))
					{
						iVar16 = 1;
						func_214(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x82C57D04FE3EAC10(&Var2))
					{
						if (!unk_0xA060414787093051(&Var2))
						{
							iVar16 = 1;
							func_214(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_214(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x82C57D04FE3EAC10(&Var2))
					{
						if (!unk_0x6683F2299FA7C267(&Var2))
						{
							iVar16 = 1;
							func_214(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x6683F2299FA7C267(&Var2))
					{
						iVar16 = 1;
						func_214(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_214(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_215(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5C131CC0633E1D17(&uParam0, 13);
}

var func_216(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_217(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x8CED8F78CC31BEF2(*uParam0, "COLLAPSE"))
	{
		unk_0x6A784D1EF2D72A23(iParam1);
		unk_0x7E5FA681CB7A2EF7();
	}
	if (iParam2 == 1)
	{
		if (unk_0x8CED8F78CC31BEF2(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E5FA681CB7A2EF7();
		}
	}
}

void func_218(var uParam0, var uParam1)
{
	if (!unk_0xF426A5DE932B3BEE(uParam0->f_33, 10))
	{
		unk_0x8CED8F78CC31BEF2(*uParam1, "SET_HIGHLIGHT");
		unk_0xD2DC8221939F80F7(uParam0->f_35);
		unk_0x7E5FA681CB7A2EF7();
		unk_0x26545538B51562AD(&(uParam0->f_33), 10);
	}
}

void func_219()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_220(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_221(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6EED86A16F7EA8F2(iVar0);
		if (iVar2 != func_69())
		{
			if (func_705(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_223(uParam0->f_38[iVar0 /*2*/], 0);
					func_222(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x4C3CEC038B6637D7(*uParam0))
	{
		if (unk_0x8CED8F78CC31BEF2(*uParam0, "SET_ICON"))
		{
			unk_0xD2DC8221939F80F7(iParam1);
			unk_0xD2DC8221939F80F7(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD2DC8221939F80F7(iParam3);
			}
			unk_0x7E5FA681CB7A2EF7();
		}
	}
}

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_224(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_231() && iParam3 < func_230())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x8CED8F78CC31BEF2(*uParam1, sVar1))
		{
			unk_0xD2DC8221939F80F7(iParam3);
			if (unk_0xF426A5DE932B3BEE(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_229("");
			}
			else
			{
				unk_0xD2DC8221939F80F7(iParam9);
			}
			func_229(sParam0);
			unk_0xD2DC8221939F80F7(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_229("");
			}
			else
			{
				unk_0xD2DC8221939F80F7(65);
			}
			unk_0xD2DC8221939F80F7(-1);
			func_229("");
			if (uParam2->f_108 == 6)
			{
				func_229("");
			}
			else
			{
				func_229(&sParam4);
			}
			unk_0x6A784D1EF2D72A23(uParam2->f_36);
			unk_0xED9ED095377C804A(sParam8);
			unk_0xED9ED095377C804A(sParam8);
			if (func_228(uParam2))
			{
				func_227("DPAD_FRIEND");
			}
			else if (func_226(uParam2))
			{
				func_227("DPAD_FRIEND");
			}
			else if (func_225(uParam2))
			{
				func_227("DPAD_CREW");
			}
			else
			{
				func_227("");
			}
			unk_0x7E5FA681CB7A2EF7();
		}
	}
}

bool func_225(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(uParam0->f_33, 6);
}

bool func_226(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(uParam0->f_33, 5);
}

void func_227(char* sParam0)
{
	unk_0x37B602106C6E0E91(sParam0);
	unk_0xD3076D52458B36EF();
}

int func_228(var uParam0)
{
	if (func_226(uParam0) && func_225(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_229(char* sParam0)
{
	unk_0x238A63F9EFBCDF35(sParam0);
}

int func_230()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_231()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_232(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_231() && iParam2 < func_230())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x4C3CEC038B6637D7(*uParam0))
		{
			if (unk_0x8CED8F78CC31BEF2(*uParam0, sVar1))
			{
				unk_0xD2DC8221939F80F7(iParam2);
				if (unk_0xF426A5DE932B3BEE(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_229("");
				}
				else
				{
					unk_0xD2DC8221939F80F7(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x75CB9E30BA492FF0(sParam15))
				{
					func_227(sParam15);
				}
				else
				{
					func_229(&(uParam1->f_1));
				}
				unk_0xD2DC8221939F80F7(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_229("");
				}
				else
				{
					unk_0xD2DC8221939F80F7(65);
				}
				if (iParam11 == 1)
				{
					unk_0xD2DC8221939F80F7(iVar0);
				}
				else
				{
					unk_0xD2DC8221939F80F7(-1);
				}
				if (func_264())
				{
					func_229("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x75CB9E30BA492FF0(sParam15))
				{
					unk_0x37B602106C6E0E91("FM_AE_ONE_INT");
					unk_0x2B088D6251C2080D(sParam15);
					unk_0x90805938ADF0F45C(iParam17);
					unk_0xD3076D52458B36EF();
				}
				else if (uParam1->f_108 == 5 && !unk_0x75CB9E30BA492FF0(sParam15))
				{
					unk_0x37B602106C6E0E91("FM_AE_ONE_INT");
					unk_0x2B088D6251C2080D(sParam15);
					unk_0x90805938ADF0F45C(iParam17);
					unk_0xD3076D52458B36EF();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x75CB9E30BA492FF0(sParam15)) && !unk_0x75CB9E30BA492FF0(sParam16))
				{
					unk_0x37B602106C6E0E91("FM_AE_TWO_INT");
					unk_0x2B088D6251C2080D(sParam15);
					unk_0x2B088D6251C2080D(sParam16);
					unk_0x90805938ADF0F45C(iParam17);
					unk_0xD3076D52458B36EF();
				}
				else if (uParam1->f_108 == 8 && !unk_0x75CB9E30BA492FF0(&(uParam1->f_104)))
				{
					unk_0x37B602106C6E0E91("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x40F69525B6A7FC01(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x90805938ADF0F45C(iParam9);
					}
					unk_0x2B088D6251C2080D(&(uParam1->f_104));
					unk_0xD3076D52458B36EF();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x37B602106C6E0E91("FM_AE_CASH");
					unk_0x156EDFC2A5E490AA(iParam9, 1);
					unk_0xD3076D52458B36EF();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x75CB9E30BA492FF0(&(uParam1->f_104)))
					{
						func_227(&(uParam1->f_104));
					}
					else
					{
						func_229("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x37B602106C6E0E91("STRING");
					unk_0x633D9F40100E396A(iParam13, 6);
					unk_0xD3076D52458B36EF();
				}
				else if (fParam12 != -1f)
				{
					unk_0x37B602106C6E0E91("NUMBER");
					unk_0x40F69525B6A7FC01(fParam12, 1);
					unk_0xD3076D52458B36EF();
				}
				else if (iParam9 != -1)
				{
					unk_0xD2DC8221939F80F7(iParam9);
				}
				else
				{
					func_229("");
				}
				if (uParam1->f_108 == 6)
				{
					func_229("");
				}
				else
				{
					func_229(&sParam3);
				}
				unk_0x6A784D1EF2D72A23(uParam1->f_36);
				if (iParam11 == 1 || unk_0x75CB9E30BA492FF0(sParam7))
				{
					func_229("");
					func_229("");
				}
				else
				{
					unk_0xED9ED095377C804A(sParam7);
					unk_0xED9ED095377C804A(sParam7);
				}
				if (func_228(uParam1))
				{
					func_227("DPAD_FRIEND");
				}
				else if (func_226(uParam1))
				{
					func_227("DPAD_FRIEND");
				}
				else if (func_225(uParam1))
				{
					func_227("DPAD_CREW");
				}
				else
				{
					func_227("");
				}
				unk_0x7E5FA681CB7A2EF7();
			}
		}
	}
}

int func_233(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_234(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_201(iParam0))
		{
			return 0;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_69();
}

int func_235(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_112(iParam0)) && !func_240(iParam0))
	{
		iVar0 = func_239();
	}
	iVar1 = func_238(iParam0);
	if (!iVar1 == -1)
	{
		return func_236(iVar1);
	}
	return iVar0;
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_237(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

var func_237(int iParam0)
{
	return Global_2413760.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_238(int iParam0)
{
	if (!iParam0 == func_69())
	{
		if (func_234(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_239()
{
	return 21;
}

bool func_240(int iParam0)
{
	return func_166(iParam0, 20);
}

char* func_241(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xA1943F485519B496())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xA1943F485519B496())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_242(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_246(iParam3))
	{
		*fParam1 = (func_243(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_233(iParam3))
	{
		*fParam1 = (func_243(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xA1943F485519B496())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_245(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xA1943F485519B496())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_244(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_244(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_245(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = func_250(iParam0);
	if (iVar0 == -1)
	{
		func_248(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_248(int iParam0, bool bParam1)
{
	if (!func_705(iParam0, 0, 1))
	{
		return;
	}
	if (func_250(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_249(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (bParam1)
	{
	}
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (!func_705(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xFA327DED74E597D3(Global_1348553[iVar0 /*5*/].f_2) && unk_0x5818D1F68D744B23(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_251(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_251(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (unk_0xFA327DED74E597D3(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x58CA63150E166003(Global_1348553[iParam0 /*5*/].f_2), 64);
			unk_0x2CF7CD0925B8CCF0(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xDABE58CCA5E17DDC(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = { Global_1348553[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_252(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714 = (Global_1348714 - 1);
}

void func_252(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_69();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x0E063DDE8855EC52())
	{
		uParam0->f_3 = unk_0x20D394965B47B01A();
	}
}

struct<4> func_253(int iParam0)
{
	struct<4> Var0;
	
	if (func_705(iParam0, 0, 1))
	{
		Global_2459440 = { func_71(iParam0) };
		if (unk_0xD0333FE560420AC5())
		{
			if (func_215(Global_2459440))
			{
				if (!unk_0xA68EEF5FA3062966(&Global_2459440))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x01B09CB427A5F1A1(0))
		{
			return Var0;
		}
		if (func_257(&Global_2459440))
		{
			Global_2459370 = { func_255(iParam0) };
			func_254(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_254(var uParam0, var uParam1)
{
	unk_0x6BEECC5B002B6FF5(uParam0, 35, uParam1);
}

struct<35> func_255(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_256(iParam0))
	{
		return Global_1315947[unk_0x4D29100D094E5511() /*35*/];
	}
	Var0 = { func_71(iParam0) };
	unk_0xCA2992FB3936A00C(&Var13, 35, &Var0);
	return Var13;
}

int func_256(int iParam0)
{
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0)
{
	if (unk_0x5EA3D33CA93D854E())
	{
		if (unk_0x4A95235C630E7410() && unk_0x5363E9DA9285526E(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_209(iParam0) || func_262(iParam0)) || func_261(iParam0))
		{
			return 0;
		}
	}
	if (!func_260(iParam0))
	{
		return 0;
	}
	if ((!func_259(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_94(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)
{
	if (func_705(iParam0, 0, 1))
	{
		if (func_705(unk_0x4D29100D094E5511(), 0, 1))
		{
			if (unk_0xF05E4A287C3CAFE3(iParam0, unk_0x4D29100D094E5511()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_260(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_131, 22);
}

bool func_261(int iParam0)
{
	if (func_209(iParam0))
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 10) || unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 9));
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return 0;
	}
	if (func_126(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xF426A5DE932B3BEE(Global_1587523[iVar0 /*444*/].f_131, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_264()
{
	switch (func_265(unk_0x4D29100D094E5511()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_240(unk_0x4D29100D094E5511()))
	{
		switch (func_183(unk_0x4D29100D094E5511()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

int func_266(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_267(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_267(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_705(unk_0x6EED86A16F7EA8F2(iVar0), 0, 1))
		{
			iVar1 = unk_0x6EED86A16F7EA8F2(iVar0);
			if (!func_126(iVar1, 0))
			{
				if ((unk_0xF05E4A287C3CAFE3(iVar1, unk_0x4D29100D094E5511()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_94(iVar1))
				{
					if (func_269(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_269(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_69())
	{
		if (!bParam2)
		{
			if (func_270(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_69())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return 0;
}

int func_270(int iParam0, int iParam1)
{
	if (iParam1 != func_69())
	{
		if (iParam0 != func_69())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_69())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_271(var uParam0)
{
	if (unk_0x4C3CEC038B6637D7(*uParam0))
	{
		unk_0x8CED8F78CC31BEF2(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD2DC8221939F80F7(0);
		unk_0x7E5FA681CB7A2EF7();
	}
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_273()
{
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4426, 1))
	{
		if (func_275())
		{
			func_274();
		}
	}
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_275()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

int func_276()
{
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4426, 0) && func_275())
	{
		return 1;
	}
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4426, 1) && func_275())
	{
		return 1;
	}
	return 0;
}

int func_277()
{
	if (func_275())
	{
		if (func_278(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return 1;
		
		default:
	}
	return 0;
}

int func_279()
{
	if (func_275())
	{
		if (func_280(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_281(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

int func_282(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_323(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_322();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_321())
		{
			if (func_320() > 0 && Global_1573687)
			{
				unk_0x5CAB188C6F4100F3();
				unk_0xD4E4E96CC60AD4AA(fVar7);
				unk_0x28981D48C12CB95E(18);
				if (unk_0x46768B1495288824())
				{
					unk_0x48900F4DFADD5528();
				}
				unk_0x28981D48C12CB95E(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_308())
		{
			func_307(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4429, 26))
	{
		func_307(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_320() == 1)
		{
			func_306(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_307(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x46768B1495288824())
		{
			unk_0x48900F4DFADD5528();
		}
		unk_0x28981D48C12CB95E(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_320() == 0 && !bParam5))
		{
			func_307(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_305();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x5CAB188C6F4100F3();
				}
				unk_0x28981D48C12CB95E(18);
			}
			if (unk_0xF426A5DE932B3BEE(uParam2->f_33, 0))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				unk_0xD4E4E96CC60AD4AA(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573686)
					{
						unk_0xF17F4B0641AB2DE1(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_305();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x5CAB188C6F4100F3();
					}
					unk_0x28981D48C12CB95E(18);
				}
				unk_0xD4E4E96CC60AD4AA(fVar7);
				if (func_306(bVar6, uParam0, 0))
				{
					func_271(uParam0);
					sVar4 = func_303(iParam1, &(Global_1617379.f_70372), bParam4);
					if (bParam4)
					{
						func_300(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_293(uParam0, func_297(uParam2), func_294(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_290(uParam0, func_292(), func_291(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573686;
						func_300(uParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = { func_288(iParam1) };
						iVar8 = func_283(iParam1);
						func_300(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x26545538B51562AD(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_287())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_286(unk_0x4D29100D094E5511()))
			{
				iVar0 = 20;
			}
			if (func_285(unk_0x4D29100D094E5511()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_284(unk_0x4D29100D094E5511()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_284(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

bool func_285(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

bool func_286(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

bool func_287()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_288(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_289(unk_0x4D29100D094E5511()) || func_284(unk_0x4D29100D094E5511()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1617379.f_23, 16);
			break;
	}
	return Var0;
}

bool func_289(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_290(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x4C3CEC038B6637D7(*uParam0))
	{
		unk_0x8CED8F78CC31BEF2(*uParam0, "SET_TITLE");
		if (unk_0x75CB9E30BA492FF0(sParam2))
		{
			func_227(sParam1);
		}
		else
		{
			unk_0x37B602106C6E0E91("FM_AE_BRACKT");
			unk_0x2B088D6251C2080D(sParam1);
			unk_0x2B088D6251C2080D(sParam2);
			unk_0xD3076D52458B36EF();
		}
		func_227("");
		if (iParam3 != -1)
		{
			unk_0xD2DC8221939F80F7(iParam3);
		}
		unk_0x7E5FA681CB7A2EF7();
	}
}

char* func_291()
{
	switch (func_183(unk_0x4D29100D094E5511()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_292()
{
	switch (func_183(unk_0x4D29100D094E5511()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_293(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x4C3CEC038B6637D7(*uParam0))
	{
		unk_0x8CED8F78CC31BEF2(*uParam0, "SET_TITLE");
		if (unk_0x75CB9E30BA492FF0(sParam2))
		{
			func_227(sParam1);
		}
		else if (func_265(unk_0x4D29100D094E5511()) == 133)
		{
			unk_0x37B602106C6E0E91("FM_AE_BRACKT_C");
			unk_0x2B088D6251C2080D(sParam1);
			unk_0x2B088D6251C2080D(sParam2);
			unk_0xD3076D52458B36EF();
		}
		else
		{
			unk_0x37B602106C6E0E91("FM_AE_BRACKT");
			unk_0x2B088D6251C2080D(sParam1);
			unk_0x2B088D6251C2080D(sParam2);
			unk_0xD3076D52458B36EF();
		}
		func_227("");
		if (iParam3 != -1)
		{
			unk_0xD2DC8221939F80F7(iParam3);
		}
		unk_0x7E5FA681CB7A2EF7();
	}
}

char* func_294(var uParam0)
{
	int iVar0;
	
	iVar0 = func_265(unk_0x4D29100D094E5511());
	if (func_296())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_295())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_295()
{
	if (func_265(unk_0x4D29100D094E5511()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

bool func_296()
{
	return Global_1587522;
}

char* func_297(var uParam0)
{
	int iVar0;
	
	iVar0 = func_265(unk_0x4D29100D094E5511());
	if (func_296())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_299() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_299() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_295())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_298() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_298()
{
	return Global_2460486.f_4650;
}

int func_299()
{
	if (func_265(unk_0x4D29100D094E5511()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_300(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4C3CEC038B6637D7(*uParam0))
	{
		unk_0x8CED8F78CC31BEF2(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_229(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x37B602106C6E0E91(sParam1);
			unk_0x90805938ADF0F45C(iParam5);
			unk_0xD3076D52458B36EF();
		}
		else
		{
			func_227(sParam1);
		}
		if (func_321() && iParam6)
		{
			if (func_302())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x37B602106C6E0E91("LBD_DPD_CNT");
			unk_0x90805938ADF0F45C(iVar0);
			unk_0x90805938ADF0F45C(iVar1);
			unk_0xD3076D52458B36EF();
		}
		else
		{
			func_227(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD2DC8221939F80F7(iParam4);
			if (func_301(unk_0x4D29100D094E5511()))
			{
				unk_0xD2DC8221939F80F7(166);
			}
		}
		unk_0x7E5FA681CB7A2EF7();
	}
}

int func_301(int iParam0)
{
	if (func_286(iParam0) || func_285(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_302()
{
	return Global_1573687;
}

char* func_303(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_304();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x75CB9E30BA492FF0(uParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_304()
{
	if (unk_0xEADF4A388FBE5274())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x92C3F20E591497E1())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xFA68EC0B7D1EF7EB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xB3A7F120863640B2())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_305()
{
	Global_36611 = 1;
}

bool func_306(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x9A64FC8B83855E3B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x9A64FC8B83855E3B("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x9A64FC8B83855E3B("mp_matchmaking_card");
	}
	return unk_0x4C3CEC038B6637D7(*uParam1);
}

void func_307(var uParam0, var uParam1, bool bParam2)
{
	unk_0xF17F4B0641AB2DE1(&(uParam1->f_33), 7);
	Global_1573685 = 0;
	func_219();
	Global_1573684 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_220(&(uParam1->f_19));
		}
	}
	if (unk_0x4C3CEC038B6637D7(*uParam0))
	{
		unk_0xBBDCA990E9FC1AE1(uParam0);
	}
	if (unk_0xF426A5DE932B3BEE(uParam1->f_33, 0))
	{
		unk_0xF17F4B0641AB2DE1(&(uParam1->f_33), 0);
	}
	unk_0xD4E4E96CC60AD4AA(0f);
}

int func_308()
{
	if (func_319())
	{
		return 0;
	}
	if (func_318())
	{
		return 0;
	}
	if (!func_316())
	{
		return 0;
	}
	if (!func_314())
	{
		return 0;
	}
	if (func_313(8, -1))
	{
		return 0;
	}
	if (func_320() == 2)
	{
		return 0;
	}
	if (Global_2460486.f_4404)
	{
		return 0;
	}
	if (func_312())
	{
		return 0;
	}
	else if (!func_27(unk_0x4D29100D094E5511(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_311(1) || func_309(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (func_74(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (Global_1715399)
	{
		return 0;
	}
	if (Global_1715402)
	{
		return 0;
	}
	if (func_171(0))
	{
		return 0;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 4))
	{
		return 0;
	}
	return 1;
}

int func_309(bool bParam0)
{
	if (unk_0x147D712924F7D918())
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (func_310(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x5FCAE3F8AEC656AF(0, 25) || unk_0x5FCAE3F8AEC656AF(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0x5FCAE3F8AEC656AF(0, 19) || (!bParam0 && unk_0xC522B453AD5C9D05(0, 19)))
	{
		return 1;
	}
	if (unk_0xDFCB321F1D24137F())
	{
		if (((unk_0x5FCAE3F8AEC656AF(0, 166) || unk_0x5FCAE3F8AEC656AF(0, 167)) || unk_0x5FCAE3F8AEC656AF(0, 168)) || unk_0x5FCAE3F8AEC656AF(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xC522B453AD5C9D05(0, 166) || unk_0xC522B453AD5C9D05(0, 167)) || unk_0xC522B453AD5C9D05(0, 168)) || unk_0xC522B453AD5C9D05(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (unk_0x92B7E26C02EFE31E())
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			unk_0x4CF6F4DF2C64D299(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_311(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_312()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_180 != 0;
}

bool func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

int func_314()
{
	if (func_315() == 0)
	{
		return 1;
	}
	return 0;
}

int func_315()
{
	return Global_1312466.f_18;
}

int func_316()
{
	if (func_317())
	{
		return 1;
	}
	if (unk_0x3934E959DB2478D3())
	{
		return 0;
	}
	if (unk_0xA07829C3F763B9B6() || unk_0xF1384D7CDC020749())
	{
		return 0;
	}
	if (unk_0x55CE6A52F600CA13())
	{
		return 0;
	}
	return 1;
}

bool func_317()
{
	return Global_1312438;
}

bool func_318()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 5;
}

bool func_319()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

int func_320()
{
	return Global_1338622.f_68;
}

int func_321()
{
	if (Global_1573686 > 16)
	{
		return 1;
	}
	return 0;
}

float func_322()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x91769DA9DD09F507()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_324()
{
	if (func_325(unk_0x4D29100D094E5511()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_325(int iParam0)
{
	if (unk_0x0E063DDE8855EC52())
	{
		if (func_126(iParam0, 0))
		{
			return unk_0x690AE3890EBC314C(iParam0);
		}
	}
	return 0;
}

int func_326()
{
	if (func_324())
	{
		return 1;
	}
	if (func_261(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_296())
	{
		return 1;
	}
	if (func_112(unk_0x4D29100D094E5511()))
	{
		switch (func_265(unk_0x4D29100D094E5511()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_327(unk_0x4D29100D094E5511()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_327(unk_0x4D29100D094E5511()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_327(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 4);
}

int func_328(int iParam0)
{
	if ((iParam0 == 24 && func_112(unk_0x4D29100D094E5511())) && !func_240(unk_0x4D29100D094E5511()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_111(unk_0x4D29100D094E5511(), 0) && func_240(unk_0x4D29100D094E5511()))
		{
			return 1;
		}
		if (func_329(unk_0x4D29100D094E5511()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_329(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_112(iParam0) && !func_209(iParam0)) && !unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 8));
	bVar2 = func_240(iParam0);
	uVar3 = func_337();
	uVar4 = func_331();
	if ((bVar1 && (func_208(iParam0) || func_207(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_202(iParam0)) && !func_330(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2460486.f_4660.f_22 != iVar0)
	{
		Global_2460486.f_4660.f_22 = iVar0;
	}
	return iVar0;
}

bool func_330(int iParam0)
{
	return func_166(iParam0, 19);
}

int func_331()
{
	if ((func_166(unk_0x4D29100D094E5511(), 21) || func_166(unk_0x4D29100D094E5511(), 22)) || func_334())
	{
		return 1;
	}
	if (func_332())
	{
		func_186(22);
		return 1;
	}
	return 0;
}

int func_332()
{
	if (func_111(unk_0x4D29100D094E5511(), 0))
	{
		if ((func_337() && !func_333()) || func_199(unk_0x4D29100D094E5511(), 21))
		{
			if (!func_166(unk_0x4D29100D094E5511(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_185(27);
		}
	}
	return 0;
}

bool func_333()
{
	return Global_1312416.f_1;
}

bool func_334()
{
	return func_335(283, -1);
}

int func_335(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2490231[iParam0 /*5*/][func_336(iParam1)];
	if (unk_0xA4169622221F92AC(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_128();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

bool func_337()
{
	return Global_1312416;
}

bool func_338()
{
	return unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 1);
}

void func_339()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_340(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_340(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 10))
	{
		if (Local_192.f_34 > -1)
		{
			if (func_338())
			{
				if (!func_331())
				{
					if (!unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 5))
					{
						if (!unk_0xF426A5DE932B3BEE(Local_192.f_1, 4))
						{
							if (unk_0xD2CFFE76B625AE55(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0x54F37403E01EFD97(Var0.f_0))
									{
										uVar11 = unk_0x97EA5EA3E7FE8500(Var0.f_0);
										if (unk_0x30D6008994E431E8(uVar11))
										{
											iVar12 = unk_0x881548CC6D5B749B(uVar11);
											if (iVar12 == unk_0x6EED86A16F7EA8F2(Local_192.f_34))
											{
												if (unk_0xD2CFFE76B625AE55(Var0.f_1))
												{
													if (unk_0x54F37403E01EFD97(Var0.f_1))
													{
														uVar10 = unk_0x97EA5EA3E7FE8500(Var0.f_1);
														if (unk_0x30D6008994E431E8(uVar10))
														{
															iVar13 = unk_0x881548CC6D5B749B(uVar10);
															if (iVar13 == unk_0x4D29100D094E5511())
															{
																unk_0x26545538B51562AD(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 5);
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
			}
		}
	}
	if (func_338())
	{
		if (!func_166(unk_0x4D29100D094E5511(), 20))
		{
			if (unk_0xD2CFFE76B625AE55(Var0.f_0))
			{
				if (unk_0x54F37403E01EFD97(Var0.f_0))
				{
					uVar11 = unk_0x97EA5EA3E7FE8500(Var0.f_0);
					if (unk_0x30D6008994E431E8(uVar11))
					{
						iVar12 = unk_0x881548CC6D5B749B(uVar11);
						if (unk_0xD2CFFE76B625AE55(Var0.f_1))
						{
							if (unk_0x54F37403E01EFD97(Var0.f_1))
							{
								uVar10 = unk_0x97EA5EA3E7FE8500(Var0.f_1);
								if (unk_0x30D6008994E431E8(uVar10))
								{
									iVar13 = unk_0x881548CC6D5B749B(uVar10);
									if (iVar13 == unk_0x4D29100D094E5511())
									{
										if (unk_0x50A45FCE14D10B26(iVar12))
										{
											if (func_234(iVar12, 1))
											{
												if (Local_192.f_33 > -1)
												{
													iVar14 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(Local_192.f_33));
													if (func_269(iVar12, iVar14, 1))
													{
														func_341(0);
														func_204();
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
	}
}

void func_341(int iParam0)
{
	if (!func_240(unk_0x4D29100D094E5511()))
	{
		if (iParam0 || func_329(unk_0x4D29100D094E5511()) != 0)
		{
			func_186(20);
			if (func_112(unk_0x4D29100D094E5511()))
			{
				if (!unk_0xF426A5DE932B3BEE(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1, 8))
				{
					unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1), 8);
				}
			}
		}
	}
}

void func_342()
{
	switch (Local_252[unk_0x7025777635AB04C0() /*6*/].f_2)
	{
		case 0:
			func_532();
			func_343();
			if (Local_192.f_32 == 2)
			{
				Local_252[unk_0x7025777635AB04C0() /*6*/].f_2 = 2;
			}
			else if (Local_192.f_32 == 3)
			{
				Local_252[unk_0x7025777635AB04C0() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_343();
			if (Local_192.f_32 == 3)
			{
				Local_252[unk_0x7025777635AB04C0() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_675();
			break;
	}
}

void func_343()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar10 = func_69();
	iVar11 = func_69();
	iVar12 = func_69();
	if (!unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 4))
	{
		if (!unk_0xF426A5DE932B3BEE(uLocal_445, 9))
		{
			if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 1))
			{
				if (unk_0x7025777635AB04C0() == Local_192.f_33 || func_663() == Local_192.f_33)
				{
					if (func_329(unk_0x4D29100D094E5511()) >= 2)
					{
						sVar13 = func_531();
						iVar14 = func_530(unk_0x4D29100D094E5511());
						func_528(85, "GB_WINNER", "BIGM_SGHTYD", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
					{
						func_527(1, 1);
						unk_0x26545538B51562AD(&iLocal_445, 6);
					}
					func_409(142, 1, &Var0);
					unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
				}
				else if (func_338())
				{
					if (func_234(unk_0x4D29100D094E5511(), 1))
					{
						if (func_329(unk_0x4D29100D094E5511()) >= 2)
						{
							sVar13 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
							iVar14 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
						{
							func_527(0, 2);
							unk_0x26545538B51562AD(&iLocal_445, 6);
						}
						func_409(142, 0, &Var0);
					}
					else
					{
						if (func_329(unk_0x4D29100D094E5511()) >= 2)
						{
							sVar13 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
							iVar14 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
						{
							func_527(0, 2);
							unk_0x26545538B51562AD(&iLocal_445, 6);
						}
						func_409(142, 0, &Var0);
					}
				}
				unk_0x26545538B51562AD(&iLocal_445, 9);
			}
			else if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 3))
			{
				func_404(86, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
				{
					func_527(0, 7);
					unk_0x26545538B51562AD(&iLocal_445, 6);
				}
				func_409(142, 0, &Var0);
				unk_0x26545538B51562AD(&iLocal_445, 9);
			}
			else if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 4))
			{
				if (Local_192.f_35 > -1)
				{
					iVar11 = unk_0x6EED86A16F7EA8F2(Local_192.f_35);
				}
				if (unk_0x7025777635AB04C0() == Local_192.f_33)
				{
					if (func_329(unk_0x4D29100D094E5511()) >= 2)
					{
						if (unk_0x27C9C05A6B4E58D2(iVar11))
						{
							if (func_234(iVar11, 1))
							{
								sVar13 = func_405(iVar11);
								iVar14 = func_530(iVar11);
							}
							else
							{
								sVar13 = unk_0xD358A441FAC2240C(iVar11);
								iVar14 = 1;
							}
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
					}
					func_409(142, 0, &Var0);
					if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
					{
						func_527(0, 2);
						unk_0x26545538B51562AD(&iLocal_445, 6);
					}
				}
				else if (func_663() == Local_192.f_33)
				{
					iVar10 = unk_0x6EED86A16F7EA8F2(Local_192.f_34);
					if (iVar10 != func_69())
					{
						if (func_329(unk_0x4D29100D094E5511()) >= 2)
						{
							if (unk_0x27C9C05A6B4E58D2(iVar11))
							{
								if (func_234(iVar11, 1))
								{
									sVar13 = func_405(iVar11);
									iVar14 = func_530(iVar11);
								}
								else
								{
									sVar13 = unk_0xD358A441FAC2240C(iVar11);
									iVar14 = 1;
								}
								func_528(86, "GB_WORK_OVER", "BIGM_SGHTGK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
							}
						}
						func_409(142, 0, &Var0);
						if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
						{
							func_527(0, 2);
							unk_0x26545538B51562AD(&iLocal_445, 6);
						}
					}
				}
				else if (func_338())
				{
					iVar11 = unk_0x6EED86A16F7EA8F2(Local_192.f_35);
					if (iVar11 != func_69())
					{
						if (iVar11 == unk_0x4D29100D094E5511())
						{
							if (func_329(unk_0x4D29100D094E5511()) >= 2)
							{
								if (func_403(1))
								{
									func_404(85, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_404(85, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
							if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
							{
								func_527(1, 1);
								unk_0x26545538B51562AD(&iLocal_445, 6);
							}
							func_409(142, 1, &Var0);
						}
						else if (func_403(1))
						{
							iVar12 = func_402();
							if (func_269(iVar11, iVar12, 1))
							{
								if (func_329(unk_0x4D29100D094E5511()) >= 2)
								{
									func_383(85, iVar11, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2);
								}
								if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
								{
									func_527(1, 1);
									unk_0x26545538B51562AD(&iLocal_445, 6);
								}
								func_409(142, 0, &Var0);
							}
							else
							{
								if (func_329(unk_0x4D29100D094E5511()) >= 2)
								{
									if (unk_0x27C9C05A6B4E58D2(iVar11))
									{
										if (func_234(iVar11, 1))
										{
											sVar13 = func_405(iVar11);
											iVar14 = func_530(iVar11);
										}
										else
										{
											sVar13 = unk_0xD358A441FAC2240C(iVar11);
											iVar14 = 1;
										}
										func_528(86, "GB_WORK_OVER", "BIGM_SGHTWK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_404(86, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
								{
									func_527(0, 2);
									unk_0x26545538B51562AD(&iLocal_445, 6);
								}
								func_409(142, 0, &Var0);
							}
						}
						else
						{
							if (func_329(unk_0x4D29100D094E5511()) >= 2)
							{
								if (unk_0x27C9C05A6B4E58D2(iVar11))
								{
									if (func_234(iVar11, 1))
									{
										sVar13 = func_405(iVar11);
										iVar14 = func_530(iVar11);
									}
									else
									{
										sVar13 = unk_0xD358A441FAC2240C(iVar11);
										iVar14 = 1;
									}
									func_528(86, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_404(86, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
							{
								func_527(0, 2);
								unk_0x26545538B51562AD(&iLocal_445, 6);
							}
							func_409(142, 0, &Var0);
						}
					}
				}
				unk_0x26545538B51562AD(&iLocal_445, 9);
			}
			else if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 5))
			{
				if (func_370())
				{
					if (func_662())
					{
						if (func_329(unk_0x4D29100D094E5511()) >= 2)
						{
						}
					}
					else if (func_329(unk_0x4D29100D094E5511()) >= 2)
					{
						func_404(86, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
				{
					func_527(0, 8);
					unk_0x26545538B51562AD(&iLocal_445, 6);
				}
				func_409(159, 0, &Var0);
				unk_0x26545538B51562AD(&iLocal_445, 9);
			}
		}
		if (unk_0xF426A5DE932B3BEE(iLocal_445, 9))
		{
			func_363();
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 8))
			{
				unk_0x26545538B51562AD(&iLocal_446, 8);
			}
			if (!unk_0xF426A5DE932B3BEE(iLocal_445, 10))
			{
				if (Local_192.f_34 != -1)
				{
					if (unk_0xF426A5DE932B3BEE(iLocal_445, 5))
					{
						if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(Local_192.f_34)))
						{
							func_361(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 432, 0);
							func_359(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 1, 0);
							func_358(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0, 0);
							func_357(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0);
							func_356(unk_0x6EED86A16F7EA8F2(Local_192.f_34), Global_262145.f_10294, 0);
							unk_0x26545538B51562AD(&iLocal_445, 10);
						}
					}
				}
			}
			if (func_344(&uLocal_814, 1))
			{
				unk_0x26545538B51562AD(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 4);
			}
		}
	}
}

int func_344(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_186(29);
	if ((*uParam0 > 0 && !func_275()) && func_329(unk_0x4D29100D094E5511()) != 0)
	{
		if (!func_355())
		{
			func_354();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0x26545538B51562AD(&(Global_1727391.f_3), 2);
				if (bParam1)
				{
					unk_0x26545538B51562AD(&(Global_2460486.f_4426), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_353(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_348();
				func_353(uParam0, 2);
			}
			break;
		
		case 2:
			func_348();
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_345(func_346()))
				{
					unk_0x5BD150B52CE8D356(1);
				}
				func_353(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4426), 1);
				unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 2);
				func_353(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4426), 1);
			unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_345(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

char* func_346()
{
	if (func_267(func_347()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_347()
{
	return Global_1615885;
}

void func_348()
{
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4426, 0))
	{
		if ((((((((!unk_0x9A8D90020C5C606B() && !unk_0xF426A5DE932B3BEE(Global_2460486.f_743, 2)) && func_705(unk_0x4D29100D094E5511(), 1, 1)) && !Global_68058) && !Global_52930) && !unk_0x3934E959DB2478D3()) && !func_166(unk_0x4D29100D094E5511(), 22)) && func_329(unk_0x4D29100D094E5511()) != 0) && !func_351(func_352()))
		{
			unk_0x26545538B51562AD(&(Global_2460486.f_4426), 1);
			func_350(func_346(), -1);
			func_349(1);
			unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4426), 0);
		}
	}
}

void func_349(int iParam0)
{
	if (iParam0 && !func_275())
	{
		unk_0x954BCDB8FDB0AC0F(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_350(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 0, iParam1);
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_352()
{
	var uVar0;
	
	uVar0 = unk_0x3AA961419D971CB2();
	if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_353(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_354()
{
	Global_2444574 = 1;
}

int func_355()
{
	if (func_183(unk_0x4D29100D094E5511()) == 170)
	{
		return 1;
	}
	return 0;
}

void func_356(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xA6C3B54732ED5989(Global_2412879.f_691[iParam0]) || Global_2412879.f_691[iParam0] == unk_0xF42B3EF31F918DB2())
	{
		if (bParam2)
		{
			unk_0x26545538B51562AD(&(Global_2412879.f_388), iVar0);
			Global_2412879.f_493[iVar0] = uParam1;
			Global_2412879.f_691[iParam0] = unk_0xF42B3EF31F918DB2();
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_2412879.f_388), iVar0);
			Global_2412879.f_691[iParam0] = -1;
		}
	}
}

void func_357(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x26545538B51562AD(&(Global_2412879.f_365), iParam0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2412879.f_365), iParam0);
	}
	if (unk_0x7B4654D62B7E0E9E(Global_2412879[iParam0]))
	{
		if (bParam1)
		{
			unk_0xBFAFDBA74467F7B4(Global_2412879[iParam0], 0);
		}
		else
		{
			unk_0xBFAFDBA74467F7B4(Global_2412879[iParam0], 1);
		}
	}
}

void func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_705(iParam0, 1, 1))
		{
			Global_2412879.f_625[iParam0] = unk_0xF42B3EF31F918DB2();
			unk_0x26545538B51562AD(&(Global_2412879.f_364), iParam0);
			func_357(iParam0, bParam2);
		}
	}
	else
	{
		func_357(iParam0, bParam2);
		unk_0xF17F4B0641AB2DE1(&(Global_2412879.f_364), iParam0);
		Global_2412879.f_625[iParam0] = -1;
	}
}

void func_359(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_360(iParam0))
	{
		if (bParam2)
		{
			unk_0x26545538B51562AD(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = unk_0xF42B3EF31F918DB2();
			Global_2412879.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = -1;
		}
	}
}

int func_360(int iParam0)
{
	if (!unk_0xA6C3B54732ED5989(Global_2412879.f_559[iParam0]) || Global_2412879.f_559[iParam0] == unk_0xF42B3EF31F918DB2())
	{
		return 1;
	}
	return 0;
}

void func_361(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xA6C3B54732ED5989(Global_2412879.f_526[iParam0]) || Global_2412879.f_526[iParam0] == unk_0xF42B3EF31F918DB2())
	{
		if (bParam2)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_2412879.f_385, iVar0))
			{
				func_362();
			}
			unk_0x26545538B51562AD(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_394[iVar0] = uVar1;
			Global_2412879.f_526[iParam0] = unk_0xF42B3EF31F918DB2();
		}
		else
		{
			if (unk_0xF426A5DE932B3BEE(Global_2412879.f_385, iVar0))
			{
				func_362();
			}
			unk_0xF17F4B0641AB2DE1(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_526[iParam0] = -1;
		}
	}
}

void func_362()
{
	Global_2412879.f_880 = 1;
}

void func_363()
{
	if (!func_369())
	{
		return;
	}
	if (!unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == Global_1312577.f_7)
	{
		return;
	}
	func_364();
}

void func_364()
{
	func_366();
	func_365(0);
}

void func_365(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x0E063DDE8855EC52();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x20D394965B47B01A();
		Global_1312577.f_9 = unk_0x20D394965B47B01A();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_366()
{
	if (!func_368())
	{
	}
	if (func_369())
	{
		unk_0xC24FF75972174905(&(Global_1312577.f_10));
		func_367();
		unk_0x6332DFF0815F4AB7();
	}
}

void func_367()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x90805938ADF0F45C(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x90805938ADF0F45C(Global_1312577.f_50);
			unk_0x90805938ADF0F45C(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x182296DAFE790204(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x182296DAFE790204(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_55);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_30));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_46));
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_368()
{
	if (!func_369())
	{
		return 0;
	}
	unk_0x907B9289657244FB(&(Global_1312577.f_10));
	func_367();
	return unk_0x07B8D9CA22BFDA75();
}

int func_369()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_370()
{
	if (!func_371(1))
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	return 1;
}

int func_371(bool bParam0)
{
	if (func_199(unk_0x4D29100D094E5511(), 21))
	{
		return 0;
	}
	if (unk_0x233AF2DB663CF21D())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x20193FE47924AD7F())
		{
			return 0;
		}
	}
	if (func_95(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_382())
	{
		return 0;
	}
	if (func_318())
	{
		return 0;
	}
	if (func_381())
	{
		return 0;
	}
	if (func_312())
	{
		return 0;
	}
	if (unk_0x9404B1BCD022816B())
	{
		return 0;
	}
	if (func_28(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (!func_314())
	{
		return 0;
	}
	if (func_199(unk_0x4D29100D094E5511(), 0) || func_199(unk_0x4D29100D094E5511(), 3))
	{
		return 0;
	}
	if ((func_199(unk_0x4D29100D094E5511(), 12) || func_199(unk_0x4D29100D094E5511(), 14)) || func_199(unk_0x4D29100D094E5511(), 13))
	{
		return 0;
	}
	if (func_380(unk_0x4D29100D094E5511(), 0, 0))
	{
		if ((!func_379(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_9) && !func_377(unk_0x4D29100D094E5511())) || (func_183(unk_0x4D29100D094E5511()) != 167 && func_183(unk_0x4D29100D094E5511()) != 168))
		{
			return 0;
		}
	}
	if (func_376())
	{
		return 0;
	}
	if (Global_1715399)
	{
		return 0;
	}
	if (func_375(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (func_373(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_372(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0)
{
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return 1;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return 1;
	}
	return 0;
}

int func_374()
{
	if (Global_2552549.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (!func_705(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

bool func_376()
{
	return Global_91330.f_297 > 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_69())
	{
		if (func_705(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_378(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
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
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

int func_379(int iParam0)
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

int func_380(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_377(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_381()
{
	return Global_1315913;
}

bool func_382()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 0);
}

int func_383(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_401(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_384(&Var0);
}

int func_384(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return 0;
		}
	}
	func_387(uParam0, uParam0->f_16);
	func_386(uParam0);
	if (func_385(uParam0->f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = { Global_2428492.f_2171[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428492.f_2171[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 1);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_278(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_385(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_386(var uParam0)
{
	if (func_280(uParam0->f_1))
	{
		uParam0->f_66 = func_239();
	}
}

void func_387(var uParam0, int iParam1)
{
	if (func_280(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_69())
	{
		return;
	}
	if (func_278(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_388(iParam1, -2, 0, 0);
		}
	}
}

int func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_74(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_74(unk_0x4D29100D094E5511()) || (func_400() && func_399()))
	{
		uVar0 = func_398();
		if (unk_0xD2CFFE76B625AE55(uVar0))
		{
			if (unk_0x30D6008994E431E8(uVar0))
			{
				if (unk_0x881548CC6D5B749B(uVar0) != -1)
				{
					if (func_705(unk_0x881548CC6D5B749B(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_397(iParam1, iParam0, 0);
							}
							else
							{
								return func_395(iParam0, unk_0x881548CC6D5B749B(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_395(iParam0, unk_0x881548CC6D5B749B(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_397(iParam1, iParam0, 0);
				}
				else
				{
					return func_389(0, -1, 0);
				}
			}
			else
			{
				return func_389(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_397(iParam1, iParam0, 0);
		}
		else
		{
			return func_395(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
		}
	}
	return func_395(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
}

int func_389(bool bParam0, int iParam1, bool bParam2)
{
	return func_390(unk_0x4D29100D094E5511(), bParam0, iParam1, bParam2);
}

int func_390(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xEDB589A956C2855F(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_394(1);
				}
				else
				{
					return func_394(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 20))
			{
				return func_391(iVar0, iParam2, 1);
			}
			else
			{
				return func_391(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_394(1);
	}
	return func_394(0);
}

int func_391(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_393(iParam0, iParam1);
	if (func_392(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_392(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_394(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_395(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xEDB589A956C2855F(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_105(iParam1, iParam0, iVar0, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)) || ((func_73(unk_0xEDB589A956C2855F(iParam1), unk_0xEDB589A956C2855F(iParam0), 0) && unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 23)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)))
			{
				return func_394(1);
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 26))
			{
				return func_396(1);
			}
			else
			{
				return func_390(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_394(1);
			}
			else
			{
				return func_390(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_238(iParam0);
	if (!iVar3 == -1)
	{
		return func_236(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_396(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_397(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_390(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_398()
{
	return Global_2359301.f_2;
}

bool func_399()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 4);
}

bool func_400()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

void func_401(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_69();
	uParam1->f_17 = func_69();
	uParam1->f_18 = func_69();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_402()
{
	return Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10;
}

bool func_403(bool bParam0)
{
	return func_234(unk_0x4D29100D094E5511(), bParam0);
}

int func_404(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_401(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_384(&Var0);
}

char* func_405(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		uVar0 = func_408(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return uVar0;
	}
	if (((func_166(iParam0, 28) || func_166(unk_0x4D29100D094E5511(), 28)) || func_407(iParam0)) && !func_406(iParam0))
	{
		return unk_0xC754513C760635E8("GB_REST_ACC");
	}
	iVar1 = func_70(iParam0);
	if (iVar1 != func_69())
	{
		uVar0 = func_408(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (unk_0x75CB9E30BA492FF0(uVar0))
		{
			return unk_0xC754513C760635E8("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_406(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_71(iParam0) };
	if (unk_0xD0333FE560420AC5() && unk_0xA68EEF5FA3062966(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_407(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_71(iParam0) };
	if (unk_0x748A964A12412EBB() || unk_0xDFCB321F1D24137F())
	{
		if (unk_0x01B09CB427A5F1A1(0))
		{
			return 0;
		}
	}
	else if (unk_0xD0333FE560420AC5())
	{
		if (unk_0xA68EEF5FA3062966(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_408(var uParam0)
{
	return uParam0;
}

void func_409(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
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
	var uVar18;
	var uVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	
	func_525(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_524(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_523(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (bParam1)
	{
		if (func_522(unk_0x4D29100D094E5511()) > 0)
		{
			func_521();
		}
		else
		{
			func_520();
		}
	}
	else
	{
		func_519();
	}
	if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_201(unk_0x4D29100D094E5511()))
			{
				if (uParam2->f_5)
				{
					iVar0 = (iVar0 + func_511(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_119));
				}
				else
				{
					iVar4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						iVar4 = (iVar4 + uParam2->f_8);
					}
					iVar5 = func_510(iVar4);
					iVar6 = (iVar5 * iVar4);
					iVar0 = (iVar0 + iVar6);
					iVar8 = func_509(&uVar7);
					iVar9 = Global_262145.f_13508;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar8) * Global_262145.f_12730));
					iVar11 = ((iVar0 / 100) * iVar10);
					iVar0 = (iVar0 + iVar11);
					if (uParam2->f_6)
					{
						iVar0 = (iVar0 + *uParam2);
					}
					if (iVar8 > 0 && uParam2->f_9 != 4)
					{
						func_508(44);
					}
				}
				func_502(iVar0);
				func_501();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < unk_0xD81B83309CFE36FF())
				{
					iVar13 = iVar12;
					if (unk_0x6985B636BB8652CD(iVar13))
					{
						iVar14 = unk_0xFAA1C60127DA6F80(iVar13);
						if (func_500(iVar14))
						{
							func_492(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_201(unk_0x4D29100D094E5511()))
		{
			func_491();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_201(unk_0x4D29100D094E5511()))
		{
			if (bParam1)
			{
				func_490();
			}
			func_489();
		}
	}
	iVar15 = func_488();
	if (iVar15 != func_69() && iParam0 != 148)
	{
		if (func_234(unk_0x4D29100D094E5511(), 0))
		{
			if (!func_269(unk_0x4D29100D094E5511(), iVar15, 1))
			{
				func_475(&iVar0, 1);
			}
		}
	}
	func_472(iParam0, &iVar16, &iVar17);
	iVar1 = (iVar1 + iVar16);
	iVar0 = (iVar0 + iVar17);
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_471();
		func_425(0, unk_0x27D769C59BC9D030(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_402();
		if (iVar20 != func_69())
		{
			func_424(iVar20, &uVar18, &uVar19);
		}
		bVar21 = !func_403(1);
		if (iParam0 == 168)
		{
			if (!func_423())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_423())
		{
			func_414(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_2558146[iVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[iVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[iVar22 /*73*/].f_8.f_56 = bVar21;
		}
		else
		{
			unk_0x42D6C3736E56420E(uVar18, uVar19, iVar0, bVar21);
		}
		if (func_413(iParam0))
		{
			if (func_412(iParam0) > -1)
			{
				func_411(func_412(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_410(&Global_2443512, 0, 0);
	}
}

void func_410(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x20D394965B47B01A();
		}
		else
		{
			*uParam0 = unk_0xBADD1A643AD56F36();
		}
	}
	else
	{
		*uParam0 = unk_0xA0F74982C6AAA9D4();
	}
	uParam0->f_1 = 1;
}

void func_411(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		default:
	}
	return 0;
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_414(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_423())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_415(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
			func_415(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_423())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x6DDA083DB04D1FA1(func_128()) || unk_0xC0EF410FE489E4BC())
		{
			Global_2558637 = 1;
			return 0;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xFF60755759699F54(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB4593E48EB78775A(iVar3))
		{
			*uParam0 = func_422(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_421(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_416(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_416(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x26545538B51562AD(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_417(iParam0);
	}
}

void func_417(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_423())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_420(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8B4018F9DEC0BCDE();
			}
		}
		else if (!bVar0)
		{
			unk_0xA5546C3771405485(Global_2558146[iParam0 /*73*/]);
		}
		func_418(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_418(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_419(&(uParam0->f_8.f_3));
	func_419(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_419(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_420(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_421(int iParam0, var uParam1)
{
	Global_2445534 = uParam1;
	Global_2445533 = iParam0;
}

int func_422(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_423())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = uParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = uParam2;
			Global_2558146[iVar0 /*73*/].f_7 = uParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = uParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (bParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_423()
{
	if (unk_0xDFCB321F1D24137F())
	{
		return 1;
	}
	return 0;
}

void func_424(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

int func_425(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_426(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_426(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_436(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD2CFFE76B625AE55(iParam1))
		{
			if (unk_0x54F37403E01EFD97(iParam1))
			{
				uVar1 = unk_0x97EA5EA3E7FE8500(iParam1);
				func_432(unk_0x52AB056B2AF7BB53(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_427(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_427(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_430(iParam0, 1) };
	if (iParam0 == func_429(unk_0x27D769C59BC9D030()))
	{
		func_428(1);
	}
	func_432(Var0, iParam1, 0, sParam2);
}

void func_428(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_429(var uParam0)
{
	return uParam0;
}

Vector3 func_430(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_431(unk_0x27D769C59BC9D030()) && unk_0xD7DDFCF6557D9296(unk_0x7DC564DE3CF907A4()) == 4)
	{
		Var0 = { unk_0xD7C4E2CB0B216852(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		fVar3 = unk_0x4D6B971C8AEE130C(iParam0);
	}
	unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x8E183FB8F99DD2D7(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_431(var uParam0)
{
	return uParam0;
}

void func_432(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = { Param0 };
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_435(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = unk_0x20D394965B47B01A();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_434();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_433();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_433()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return 1;
	}
	Global_2428492.f_1355 = 0;
	return 0;
}

var func_434()
{
	var uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_435(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x676D4CD42E0837CA(unk_0xDD23360B0FA2E0E2(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_436(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_437(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_437(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_470(unk_0x4D29100D094E5511()) || func_469(unk_0x4D29100D094E5511()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_468(uParam2))
	{
	}
	if (func_467())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_465(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_464(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_462(0, &iVar1);
					break;
				
				case 3:
					func_462(1, &iVar1);
					break;
				
				case 1:
					func_460(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_457(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_447((func_456(unk_0x4D29100D094E5511()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x3D7FB311FE0FCB8D(iVar1, iParam8, iParam9);
				if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_2 != -1)
				{
					func_457(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_442(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_438((func_440(unk_0x4D29100D094E5511()) + iVar1));
			}
			else
			{
				func_438((func_440(unk_0x4D29100D094E5511()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_438(int iParam0)
{
	if (func_467())
	{
		Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_5 = iParam0;
		func_439(joaat("mpply_globalxp"), iParam0);
	}
}

void func_439(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, 1);
	}
}

int func_440(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_705(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return func_441(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_441(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_441(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_442(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_71(unk_0x4D29100D094E5511()) };
	if (unk_0x4A95235C630E7410())
	{
		if (unk_0x5363E9DA9285526E(&Var0))
		{
			iVar13 = func_445(func_446(&Var0));
			if (iVar13 == 0)
			{
				func_444(&Global_1347641, iParam0);
				func_443(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_444(&Global_1347642, iParam0);
				func_443(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_444(&Global_1347643, iParam0);
				func_443(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_444(&Global_1347644, iParam0);
				func_443(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_444(&Global_1347645, iParam0);
				func_443(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_443(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_444(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_445(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_446(var uParam0)
{
	if (unk_0x4A95235C630E7410())
	{
		if (unk_0x5363E9DA9285526E(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

void func_447(int iParam0, int iParam1, int iParam2)
{
	if (func_467())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_336(-1)])
				{
					unk_0x3D7FB311FE0FCB8D(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_336(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x3D7FB311FE0FCB8D(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x3D7FB311FE0FCB8D(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_455(unk_0x4D29100D094E5511()))
		{
			Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_6 = func_453(iParam0, 1);
		}
		func_452(632, iParam0, -1, 1);
		func_451(633, func_453(iParam0, 1), -1, 1);
		Global_1347756[func_336(-1)] = iParam0;
		func_448(7, 0);
	}
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_450(iParam0, iParam1))
	{
		iVar0 = func_449();
		Global_2442990[iVar0] = iParam0;
	}
}

int func_449()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_450(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_336(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

void func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_336(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_336(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_336(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_336(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_336(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_336(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_336(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_336(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_336(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_336(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_336(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_336(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_336(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_336(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_336(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_336(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_336(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_336(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_336(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_336(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_336(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_336(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_336(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_336(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_336(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_336(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_336(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_336(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_336(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_336(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_336(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_336(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_453(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_454(iParam0, 0);
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_455(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_2428492.f_1, iParam0);
	}
	return 1;
}

int func_456(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return Global_1347756[func_336(-1)];
			}
			else if (func_455(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_336(-1)];
	}
	return 0;
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_459(iParam0, func_336(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_458(iParam0))
	{
		func_451(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_452(iParam0, iVar0, iParam2, 1);
	}
}

int func_458(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

int func_459(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_336(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_460(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
	iVar0 = 0;
	while (iVar0 < unk_0xD81B83309CFE36FF())
	{
		iVar4 = unk_0xA9A38637698616EF(iVar0);
		if (unk_0x6985B636BB8652CD(iVar4))
		{
			iVar5 = unk_0xFAA1C60127DA6F80(iVar4);
			if (unk_0xEDB589A956C2855F(iVar5) != -1)
			{
				if (unk_0xEDB589A956C2855F(iVar5) == iVar1 || func_73(unk_0xEDB589A956C2855F(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x4D29100D094E5511())
					{
						if (func_72(unk_0x4D29100D094E5511(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_461(*iParam0, 100) * (10f * Global_262145.f_4211)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_461(*iParam0, 100) * (20f * Global_262145.f_4204)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_461(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_462(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xD81B83309CFE36FF())
		{
			iVar3 = iVar0;
			if (unk_0x6985B636BB8652CD(iVar3))
			{
				iVar4 = unk_0xFAA1C60127DA6F80(iVar3);
				if (func_705(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x4D29100D094E5511())
					{
						iVar1++;
						if (func_72(unk_0x4D29100D094E5511(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_705(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x4D29100D094E5511())
				{
					if (func_463(unk_0x4D29100D094E5511(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_72(unk_0x4D29100D094E5511(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_461(*iParam1, 100) * (10f * Global_262145.f_4211)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_461(*iParam1, 100) * (20f * Global_262145.f_4204)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_463(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_64(iParam0), func_64(iParam1));
	return 0f;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (unk_0xF436232699272DC3() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_461(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_465(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x2D8D75F813225B7B(iParam0) > func_456(unk_0x4D29100D094E5511()))
		{
			iParam0 = -func_456(unk_0x4D29100D094E5511());
		}
	}
	if (func_466(8000, 0, 0) > 0)
	{
		if (func_466(8000, 0, 0) < (iParam0 + func_456(unk_0x4D29100D094E5511())))
		{
			iParam0 = (func_466(8000, 0, 0) - func_456(unk_0x4D29100D094E5511()));
		}
	}
	return iParam0;
}

int func_466(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

int func_467()
{
	return 1;
}

int func_468(var uParam0)
{
	if (unk_0x0275404839C0A19A(uParam0))
	{
		return 1;
	}
	else if (unk_0xC1C5B83BB6719C6C(uParam0, "") || unk_0xC1C5B83BB6719C6C(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_469(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

bool func_470(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_471()
{
	Global_2444573 = 1;
}

void func_472(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_171(7))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	iVar1 = func_473(iParam0);
	iVar2 = unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(Global_2460486.f_4660.f_67, unk_0x20D394965B47B01A()));
	if (iVar2 > Global_262145.f_10334)
	{
		iVar2 = Global_262145.f_10334;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10425;
		
		case 152:
			return Global_262145.f_10460;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10448;
		
		case 157:
			return Global_262145.f_10415;
		
		case 159:
			return Global_262145.f_10398;
		
		case 164:
			return Global_262145.f_10438;
		
		case 160:
			return Global_262145.f_10488;
		
		case 162:
			return Global_262145.f_10508;
		
		case 163:
			return Global_262145.f_10473;
		
		case 154:
			return Global_262145.f_10543;
		
		case 155:
			return Global_262145.f_10533;
		
		case 153:
			return Global_262145.f_10497;
		
		case 170:
			return Global_262145.f_12375;
		
		case 171:
			return Global_262145.f_12434;
		
		case 172:
			return Global_262145.f_12452;
		
		case 173:
			return Global_262145.f_12393;
		
		case 166:
			return Global_262145.f_12408;
		
		case 167:
			return Global_262145.f_12499;
		
		case 169:
			return Global_262145.f_12471;
		
		case 168:
			return Global_262145.f_12464;
		
		default:
	}
	return 0;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10424;
		
		case 152:
			return Global_262145.f_10459;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10447;
		
		case 157:
			return Global_262145.f_10414;
		
		case 159:
			return Global_262145.f_10397;
		
		case 164:
			return Global_262145.f_10437;
		
		case 160:
			return Global_262145.f_10487;
		
		case 162:
			return Global_262145.f_10507;
		
		case 163:
			return Global_262145.f_10472;
		
		case 154:
			return Global_262145.f_10542;
		
		case 155:
			return Global_262145.f_10532;
		
		case 153:
			return Global_262145.f_10496;
		
		case 170:
			return Global_262145.f_12374;
		
		case 171:
			return Global_262145.f_12433;
		
		case 172:
			return Global_262145.f_12451;
		
		case 173:
			return Global_262145.f_12392;
		
		case 166:
			return Global_262145.f_12407;
		
		default:
	}
	return 0;
}

void func_475(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_648())
		{
			if (func_403(0))
			{
				if (unk_0x27C9C05A6B4E58D2(func_402()))
				{
					if (func_487() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_487());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_485(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_478("GB_BCUT_TICK1", func_402(), iVar0, 0, 0, 1, 1);
					}
					func_508(20);
					func_476(func_402(), iVar0, 1);
				}
			}
		}
	}
}

void func_476(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_705(iParam0, 0, 1))
	{
		Var0.f_0 = 447;
		Var0.f_1 = unk_0x4D29100D094E5511();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCE8ECD07286D394D(1, &Var0, 5, func_477(iParam0));
	}
}

var func_477(int iParam0)
{
	var uVar0;
	
	unk_0x26545538B51562AD(&uVar0, iParam0);
	return uVar0;
}

int func_478(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		unk_0x5411F6B456B04A6B(sParam0);
		unk_0xF4D4BFD98B32BF85(func_388(iParam1, -2, 1, 0));
		unk_0xF9E9E11D6DF3EBF8(func_483(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF4D4BFD98B32BF85(iParam3);
		}
		unk_0x90805938ADF0F45C(iParam2);
		iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
		func_479(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_479(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_482() || !unk_0x9404B1BCD022816B()) || !func_126(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = func_480(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_480(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1724230 - 1))
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_481(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return (Global_1724230 - 1);
}

void func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = { Global_1724230.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_482()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

var func_483(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_484(&cVar0);
}

var func_484(char[4] cParam0)
{
	return cParam0;
}

void func_485(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_486(1);
	}
	else
	{
		iVar1 = func_486(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_486(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10329;
}

int func_487()
{
	return Global_262145.f_10328;
}

int func_488()
{
	return Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_30;
}

void func_489()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_128()];
	iVar0++;
	Global_2493048[func_128()] = iVar0;
	func_452(3245, iVar0, -1, 1);
}

void func_490()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_128()];
	iVar1 = Global_2493058[func_128()];
	iVar0++;
	iVar1++;
	Global_2493043[func_128()] = iVar0;
	Global_2493058[func_128()] = iVar1;
	Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_85 = iVar1;
	func_452(3243, iVar0, -1, 1);
	func_452(3244, iVar1, -1, 1);
}

void func_491()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_128()];
	iVar0++;
	func_452(3247, iVar0, -1, 1);
}

void func_492(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_494(iParam0);
	func_493(iParam0, uVar0, iParam1);
}

void func_493(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 444;
	Var0.f_1 = unk_0x4D29100D094E5511();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_69())
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			unk_0xCE8ECD07286D394D(1, &Var0, 4, func_477(iParam0));
		}
	}
}

int func_494(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_499();
	iVar0 = func_497(iParam0, iVar0);
	iVar1 = Global_1610316[func_402() /*174*/].f_10.f_152;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12335));
	if (iVar0 < func_496())
	{
		iVar0 = func_496();
	}
	if (iVar0 > func_495())
	{
		iVar0 = func_495();
	}
	return iVar0;
}

int func_495()
{
	return Global_262145.f_12336;
}

int func_496()
{
	return Global_262145.f_13498;
}

int func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_522(iParam0) * func_498());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_498()
{
	return Global_262145.f_13497;
}

var func_499()
{
	return Global_262145.f_10320;
}

int func_500(int iParam0)
{
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (iParam0 != unk_0x4D29100D094E5511())
		{
			if (func_269(iParam0, unk_0x4D29100D094E5511(), 0))
			{
				if (!func_166(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_501()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_128()];
	iVar0++;
	func_452(3246, iVar0, -1, 1);
}

void func_502(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_128()];
	iVar0 = (iVar0 + iParam0);
	func_452(3248, iVar0, -1, 1);
	if (func_505(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_504(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_503(7666, iVar2, -1, 1);
	}
}

var func_503(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_128();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCE0666B95FEBDB76((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCE0666B95FEBDB76((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCE0666B95FEBDB76((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCE0666B95FEBDB76((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCE0666B95FEBDB76((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCE0666B95FEBDB76((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCE0666B95FEBDB76((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCE0666B95FEBDB76((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCE0666B95FEBDB76((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCE0666B95FEBDB76((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCE0666B95FEBDB76((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCE0666B95FEBDB76((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCE0666B95FEBDB76((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x8870B9E70F312A20(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13641;
			break;
		
		case 2:
			return Global_262145.f_13642;
			break;
		
		case 3:
			return Global_262145.f_13643;
			break;
		
		case 4:
			return Global_262145.f_13644;
			break;
		
		case 5:
			return Global_262145.f_13645;
			break;
		
		case 6:
			return Global_262145.f_13646;
			break;
		
		case 7:
			return Global_262145.f_13647;
			break;
		
		case 8:
			return Global_262145.f_13648;
			break;
		
		case 9:
			return Global_262145.f_13649;
			break;
		
		case 10:
			return Global_262145.f_13650;
			break;
		
		case 11:
			return Global_262145.f_13651;
			break;
		
		case 12:
			return Global_262145.f_13652;
			break;
		
		case 13:
			return Global_262145.f_13653;
			break;
		
		case 14:
			return Global_262145.f_13654;
			break;
		
		case 15:
			return Global_262145.f_13655;
			break;
		
		case 16:
			return Global_262145.f_13656;
			break;
		
		case 17:
			return Global_262145.f_13657;
			break;
		
		case 18:
			return Global_262145.f_13658;
			break;
		
		case 19:
			return Global_262145.f_13659;
			break;
		
		case 20:
			return Global_262145.f_13660;
			break;
		
		case 21:
			return Global_262145.f_13661;
			break;
		
		case 22:
			return Global_262145.f_13662;
			break;
		
		case 23:
			return Global_262145.f_13663;
			break;
		
		case 24:
			return Global_262145.f_13664;
			break;
	}
	return 0;
}

int func_505(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	iVar0 = 0;
	iVar1 = func_507(iParam0, iParam1);
	uVar2 = func_506(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x0B086D355E92A814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCE0666B95FEBDB76((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCE0666B95FEBDB76((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCE0666B95FEBDB76((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCE0666B95FEBDB76((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCE0666B95FEBDB76((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCE0666B95FEBDB76((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCE0666B95FEBDB76((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCE0666B95FEBDB76((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCE0666B95FEBDB76((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCE0666B95FEBDB76((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCE0666B95FEBDB76((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCE0666B95FEBDB76((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCE0666B95FEBDB76((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_509(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(iVar0)))
		{
			iVar2 = unk_0x6EED86A16F7EA8F2(iVar0);
			if (!func_126(iVar2, 0) && !func_269(iVar2, unk_0x4D29100D094E5511(), 1))
			{
				iVar1++;
			}
			else if (func_126(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_510(int iParam0)
{
	if (iParam0 >= Global_262145.f_12708)
	{
		return Global_262145.f_12729;
	}
	else if (iParam0 >= Global_262145.f_12707)
	{
		return Global_262145.f_12728;
	}
	else if (iParam0 >= Global_262145.f_12706)
	{
		return Global_262145.f_12727;
	}
	else if (iParam0 >= Global_262145.f_12705)
	{
		return Global_262145.f_12726;
	}
	else if (iParam0 >= Global_262145.f_12704)
	{
		return Global_262145.f_12725;
	}
	else if (iParam0 >= Global_262145.f_12703)
	{
		return Global_262145.f_12724;
	}
	else if (iParam0 >= Global_262145.f_12702)
	{
		return Global_262145.f_12723;
	}
	else if (iParam0 >= Global_262145.f_12701)
	{
		return Global_262145.f_12722;
	}
	else if (iParam0 >= Global_262145.f_12700)
	{
		return Global_262145.f_12721;
	}
	else if (iParam0 >= Global_262145.f_12699)
	{
		return Global_262145.f_12720;
	}
	else if (iParam0 >= Global_262145.f_12698)
	{
		return Global_262145.f_12719;
	}
	else if (iParam0 >= Global_262145.f_12697)
	{
		return Global_262145.f_12718;
	}
	else if (iParam0 >= Global_262145.f_12696)
	{
		return Global_262145.f_12717;
	}
	else if (iParam0 >= Global_262145.f_12695)
	{
		return Global_262145.f_12716;
	}
	else if (iParam0 >= Global_262145.f_12694)
	{
		return Global_262145.f_12715;
	}
	else if (iParam0 >= Global_262145.f_12693)
	{
		return Global_262145.f_12714;
	}
	else if (iParam0 >= Global_262145.f_12692)
	{
		return Global_262145.f_12713;
	}
	else if (iParam0 >= Global_262145.f_12691)
	{
		return Global_262145.f_12712;
	}
	else if (iParam0 >= Global_262145.f_12690)
	{
		return Global_262145.f_12711;
	}
	else if (iParam0 >= Global_262145.f_12689)
	{
		return Global_262145.f_12710;
	}
	return Global_262145.f_12709;
}

int func_511(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_518(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_517(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_516(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_512(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_512(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_516(unk_0x3A5708FEE1B560A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_512(int iParam0)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = func_513(func_514(iParam0));
		return func_459(iVar0, -1, 0);
	}
	return 0;
}

int func_513(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_514(int iParam0)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_515(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_516(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_12908;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_12906;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_12910;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_12904;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_12902;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_12912;
	}
	return 0;
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1728679[iVar0] == iParam1 && Global_1728686[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_519()
{
	if (func_648())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_520()
{
	if (func_648())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_521()
{
	if (func_648())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70 = (Global_2435528.f_3065.f_70 - 1);
			Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

int func_522(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10445) * Global_262145.f_10450));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10395) * Global_262145.f_10400));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10422) * Global_262145.f_10426));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10435) * Global_262145.f_10439));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10457) * Global_262145.f_10462));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10619) * Global_262145.f_10620));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10625) * Global_262145.f_10626));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10623) * Global_262145.f_10624));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10617) * Global_262145.f_10618));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10621) * Global_262145.f_10622));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10615) * Global_262145.f_10616));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12431;
		
		case 172:
			return Global_262145.f_12447;
		
		case 173:
			return Global_262145.f_12390;
		
		case 166:
			return 0;
		
		default:
	}
	return 0;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10446) * Global_262145.f_10451));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10396) * Global_262145.f_10401));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10423) * Global_262145.f_10427));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10436) * Global_262145.f_10440));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10458) * Global_262145.f_10463));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10495) * Global_262145.f_10498));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10541) * Global_262145.f_10544));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10531) * Global_262145.f_10534));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10486) * Global_262145.f_10489));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10506) * Global_262145.f_10511));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10471) * Global_262145.f_10474));
		
		case 170:
			return Global_262145.f_12373;
		
		case 171:
			return Global_262145.f_12432;
		
		case 172:
			return Global_262145.f_12448;
		
		case 173:
			return Global_262145.f_12391;
		
		case 166:
			return 0;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return 0;
}

void func_525(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_526(iParam0))
	{
		if (!func_648())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10339;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10338;
	*uParam2 = Global_262145.f_10337;
	if (func_234(unk_0x4D29100D094E5511(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_488();
	if (iVar0 != func_69())
	{
		if (func_269(unk_0x4D29100D094E5511(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_527(bool bParam0, int iParam1)
{
	Global_1727400.f_6 = unk_0x9CC4C10F8D665832();
	if (bParam0)
	{
		Global_1727400.f_7 = 1;
	}
	else
	{
		Global_1727400.f_7 = 0;
	}
	Global_1727400.f_8 = iParam1;
	if (Global_1727400.f_4 == 0)
	{
		if ((func_202(unk_0x4D29100D094E5511()) || func_330(unk_0x4D29100D094E5511())) || func_240(unk_0x4D29100D094E5511()))
		{
			Global_1727400.f_4 = 1;
		}
	}
}

int func_528(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_69();
	iVar1 = func_69();
	iVar2 = func_69();
	return func_529(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_529(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_401(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0x26545538B51562AD(&(Var0.f_63), 2);
	return func_384(&Var0);
}

int func_530(int iParam0)
{
	int iVar0;
	
	iVar0 = func_238(iParam0);
	if (iVar0 != -1)
	{
		return func_236(iVar0);
	}
	return 1;
}

char* func_531()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_70(unk_0x4D29100D094E5511());
	if (iVar0 != func_69())
	{
		if (iVar0 != unk_0x4D29100D094E5511())
		{
			if (((func_166(iVar0, 28) || func_166(unk_0x4D29100D094E5511(), 28)) || func_407(iVar0)) && !func_406(iVar0))
			{
				return unk_0xC754513C760635E8("GB_REST_ACC");
			}
		}
		uVar1 = func_408(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
		if (unk_0x75CB9E30BA492FF0(uVar1))
		{
			return unk_0xC754513C760635E8("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_532()
{
	func_644();
	func_621();
	func_610();
	func_600();
	func_554();
	func_549();
	func_536();
	func_533();
}

void func_533()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_752 != Local_192.f_5)
	{
		if (Local_192.f_34 != -1)
		{
			if (func_370())
			{
				if (func_329(unk_0x4D29100D094E5511()) >= 1)
				{
					if (Local_192.f_5 > 0)
					{
						if (Local_192.f_37 > -1)
						{
							iVar0 = unk_0x6EED86A16F7EA8F2(Local_192.f_37);
							if (unk_0x27C9C05A6B4E58D2(iVar0))
							{
								if (iVar0 != unk_0x4D29100D094E5511())
								{
									if (func_234(iVar0, 1))
									{
										iVar1 = func_238(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_236(iVar1);
											func_534("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_534("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_752 = Local_192.f_5;
		}
	}
}

int func_534(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		unk_0x5411F6B456B04A6B(sParam0);
		unk_0xF4D4BFD98B32BF85(iParam2);
		unk_0xF9E9E11D6DF3EBF8(func_483(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
		}
		else
		{
			Global_2459440 = { func_71(iParam1) };
			if (unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440))
			{
				iVar17 = 0;
				if (unk_0xC1C5B83BB6719C6C(&(Global_2459370.f_22), "Leader") && Global_2459370.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2459370.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_535(&Var1) };
					}
					iVar0 = unk_0xDD4C1BFC77962D6A(iVar18, unk_0x5E898B4D26519673(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar17, 0, Global_2459370, &Var1, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = unk_0xC6B593EB99D2A3BB(iVar18, unk_0x5E898B4D26519673(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar17, 0, Global_2459370, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
			}
		}
		func_479(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_535(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_536()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_662() && !func_338())
	{
		return;
	}
	if (unk_0xF426A5DE932B3BEE(Local_458.f_0, 0))
	{
		return;
	}
	if (!func_370())
	{
		return;
	}
	iVar0 = func_329(unk_0x4D29100D094E5511());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_192.f_51)))
	{
		iVar1 = (func_11() - func_548(&(Local_192.f_51), 0, 0));
		iVar2 = (func_155() - Local_192.f_5);
		func_547(iVar1);
		if (iVar1 > 30000)
		{
			func_537(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_537(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_537(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_537(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_545(0) == 0)
	{
		return;
	}
	func_544();
	func_541(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_468(sParam4))
	{
		sVar0 = sParam4;
	}
	func_538(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0);
}

void func_538(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_540(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_539(7, iVar0);
		Global_1339940.f_4109[iVar0] = uParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = uParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = uParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_539(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&(Global_1339940.f_4726[iParam0]), iParam1);
}

bool func_540(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1339940.f_4726[iParam0], iParam1);
}

void func_541(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_540(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_539(6, iVar0);
		Global_1339940.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_3557.f_183[iVar0] = iParam3;
		Global_1339940.f_3557.f_172[iVar0] = iParam2;
		Global_1339940.f_3557.f_260[iVar0] = iParam4;
		Global_1339940.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_3557.f_443[iVar0] = iParam7;
		Global_1339940.f_3557.f_454[iVar0] = iParam8;
		Global_1339940.f_3557.f_497[iVar0] = iParam9;
		Global_1339940.f_3557.f_508[iVar0] = iParam10;
		Global_1339940.f_3557.f_205[iVar0] = iParam11;
		Global_1339940.f_3557.f_216[iVar0] = iParam12;
		Global_1339940.f_3557.f_227[iVar0] = iParam13;
		Global_1339940.f_3557.f_238[iVar0] = iParam14;
		Global_1339940.f_3557.f_249[iVar0] = iParam15;
		Global_1339940.f_3557.f_519[iVar0] = iParam16;
		Global_1339940.f_3557.f_530[iVar0] = iParam17;
		Global_1339940.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_543())
		{
			Global_1339940.f_941 = 1;
		}
		if (unk_0xDFCB321F1D24137F())
		{
			iVar2 = 0;
			unk_0x3D0935E194DF3A04(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339940.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339940.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339940.f_941 = 1;
			}
			if (func_542())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

int func_542()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xDFCB321F1D24137F())
	{
		unk_0x3D0935E194DF3A04(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_543()
{
	if ((unk_0xAD352C89B015DEBA() == 8 || unk_0xAD352C89B015DEBA() == 9) || unk_0xAD352C89B015DEBA() == 10)
	{
		return 1;
	}
	return 0;
}

void func_544()
{
	unk_0x28981D48C12CB95E(8);
	unk_0x28981D48C12CB95E(9);
	unk_0x28981D48C12CB95E(6);
	unk_0x28981D48C12CB95E(7);
	Global_2444577 = 1;
}

int func_545(bool bParam0)
{
	if (func_546())
	{
		return 0;
	}
	if (func_312())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_705(unk_0x4D29100D094E5511(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_546()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 12);
}

void func_547(int iParam0)
{
	if (unk_0xF426A5DE932B3BEE(iLocal_446, 8))
	{
		func_167();
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(iLocal_446, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x68BD4F826EFDDC53("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x26545538B51562AD(&iLocal_446, 15);
				unk_0x26545538B51562AD(&iLocal_446, 9);
			}
		}
	}
	if (unk_0xF426A5DE932B3BEE(iLocal_446, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 11))
			{
				if (unk_0xAD68522F73EA2CC1("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xF01E9C7FDA2976B1("AllowScoreAndRadio", 1);
					unk_0xB690D98009ECA44C(0);
					unk_0x26545538B51562AD(&iLocal_446, 11);
				}
			}
			if (!unk_0xF426A5DE932B3BEE(iLocal_446, 14))
			{
				if (unk_0x68BD4F826EFDDC53("APT_COUNTDOWN_30S"))
				{
					unk_0x26545538B51562AD(&iLocal_446, 14);
				}
			}
			if (unk_0xF426A5DE932B3BEE(iLocal_446, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xF426A5DE932B3BEE(iLocal_446, 12))
					{
						unk_0xB690D98009ECA44C(1);
						unk_0xF01E9C7FDA2976B1("AllowScoreAndRadio", 0);
						unk_0x26545538B51562AD(&iLocal_446, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x68BD4F826EFDDC53("APT_FADE_IN_RADIO"))
						{
							unk_0xB8DE4A0771D4330D("APT_COUNTDOWN_30S_KILL");
							unk_0xF17F4B0641AB2DE1(&iLocal_446, 9);
						}
					}
				}
			}
		}
	}
}

int func_548(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0);
		}
		else
		{
			return unk_0x46979BF7DA499D4E(unk_0xBADD1A643AD56F36(), *uParam0);
		}
	}
	return unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0);
}

void func_549()
{
	var uVar0;
	
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0xE1CAA98B09E043C9(Local_192.f_3))
		{
			if (!unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 2))
			{
				if (unk_0x53D573A48E8DFC4C(unk_0xBB4FAC4BA02ED087(Local_192.f_3), unk_0x27D769C59BC9D030()))
				{
					unk_0x26545538B51562AD(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 2);
					iLocal_750 = unk_0x9EE81D7901D9BCE2();
					unk_0x954BCDB8FDB0AC0F(iLocal_750, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					Local_252[unk_0x7025777635AB04C0() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_448 != Local_192.f_5)
	{
		if (unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 3))
		{
			unk_0xF17F4B0641AB2DE1(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 3);
		}
		if (unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 2))
		{
			if (unk_0xFFB05175212D9D1A(Local_192.f_3))
			{
				uVar0 = unk_0xD9545E656AC42B18(Local_192.f_3);
				unk_0xFC06ECC816BE236A(&uVar0);
				unk_0xF17F4B0641AB2DE1(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 2);
			}
			else
			{
				unk_0x24C4E2C7A164BCC1(Local_192.f_3);
			}
		}
		else
		{
			iLocal_448 = Local_192.f_5;
		}
	}
	if (unk_0xE1CAA98B09E043C9(Local_192.f_3))
	{
		if (func_648())
		{
			if (func_662())
			{
				func_551();
			}
		}
		if (!unk_0xF426A5DE932B3BEE(iLocal_445, 13))
		{
			if (!func_662() || !func_648())
			{
				unk_0xB1BA7C560A73E16E(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 1, 1);
				unk_0x26545538B51562AD(&iLocal_445, 13);
			}
		}
		if (!unk_0xF426A5DE932B3BEE(iLocal_445, 3))
		{
			unk_0x6C2E94E5E71423B4(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 1200);
			unk_0x26545538B51562AD(&iLocal_445, 3);
		}
	}
	else
	{
		if (unk_0xF426A5DE932B3BEE(iLocal_445, 13))
		{
			unk_0xF17F4B0641AB2DE1(&iLocal_445, 13);
		}
		if (unk_0xF426A5DE932B3BEE(iLocal_445, 3))
		{
			unk_0xF17F4B0641AB2DE1(&iLocal_445, 3);
		}
		if (unk_0x7B4654D62B7E0E9E(uLocal_450))
		{
			unk_0x9403D0F4C7711241(&uLocal_450);
		}
	}
	func_550();
}

void func_550()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_370())
	{
		return;
	}
	if (func_329(unk_0x4D29100D094E5511()) >= 1)
	{
		if (unk_0xF1C8C691B49DACEA(Local_192.f_3) && !unk_0x2006A8C1BA2AFE80(unk_0xBB4FAC4BA02ED087(Local_192.f_3), 0))
		{
			if (!unk_0x738E93147C5CBA85(unk_0xBB4FAC4BA02ED087(Local_192.f_3)))
			{
				unk_0x188B46661C05B1DA(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0x40EAE8F940A33315(2, unk_0xA8CFDE65C45F813B(unk_0xD9545E656AC42B18(Local_192.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_551()
{
	int iVar0;
	
	iVar0 = func_329(unk_0x4D29100D094E5511());
	if (iVar0 < 2)
	{
		if (unk_0x7B4654D62B7E0E9E(uLocal_450))
		{
			unk_0x9403D0F4C7711241(&uLocal_450);
		}
		return;
	}
	if (unk_0x7B4654D62B7E0E9E(uLocal_450))
	{
		return;
	}
	unk_0xF17F4B0641AB2DE1(&iLocal_445, 11);
	uLocal_450 = unk_0xABF4388EB11AD060(unk_0xD9545E656AC42B18(Local_192.f_3));
	unk_0x1FDCAFA848ABB8FA(uLocal_450, 12);
	unk_0x216986E3E3E543F2(uLocal_450, 459);
	unk_0xC5B67A5E18AF2B72(uLocal_450, "GB_SGHT_BLP");
	unk_0xAB27F3DE6390C749(uLocal_450, 1);
	unk_0xC5B4E9487339A2BB(uLocal_450, Global_262145.f_10294);
	if (func_662())
	{
		func_552(&uLocal_450, 18);
	}
	unk_0xE7BA3946385B4D19(uLocal_450, 1);
	iLocal_751 = unk_0x9EE81D7901D9BCE2();
	unk_0x954BCDB8FDB0AC0F(iLocal_751, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
}

void func_552(var uParam0, int iParam1)
{
	if (unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		unk_0x8D910E607F73E53D(*uParam0, func_553(iParam1));
	}
}

int func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x188B46661C05B1DA(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_554()
{
	if (unk_0x7025777635AB04C0() != Local_192.f_33)
	{
		return;
	}
	if (unk_0xE1CAA98B09E043C9(Local_192.f_3))
	{
		if (iLocal_747 != -1)
		{
			iLocal_747 = -1;
		}
		if (unk_0xF426A5DE932B3BEE(Global_2563397, 20))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2563397, 20);
		}
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_2563397, 20))
	{
		if (!unk_0xF426A5DE932B3BEE(Global_2563397, 21))
		{
			if (iLocal_747 < 0)
			{
				unk_0x26545538B51562AD(&Global_2563397, 20);
			}
		}
	}
	if (iLocal_748 == -1)
	{
		iLocal_748 = unk_0x3A5708FEE1B560A9(0, 3);
	}
	if (iLocal_747 < 0)
	{
		if (unk_0xF426A5DE932B3BEE(Global_2563397, 21))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2563397, 21);
			iLocal_747 = 0;
		}
	}
	func_555();
}

void func_555()
{
	bool bVar0;
	
	if (!unk_0xF426A5DE932B3BEE(iLocal_445, 4))
	{
		if (iLocal_747 >= 0)
		{
			if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0xF17F4B0641AB2DE1(&Local_458, 0);
				iLocal_747 = -1;
			}
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
				{
					func_599(1);
				}
			}
		}
	}
	else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		func_598(&Local_458);
		func_597(&Local_458);
		unk_0xF17F4B0641AB2DE1(&iLocal_445, 4);
	}
	switch (iLocal_747)
	{
		case 0:
			func_596(1);
			unk_0x8378AB3CED5FF44A("HACK", 3);
			iLocal_747++;
			break;
		
		case 1:
			if (func_595(1) && unk_0x911CCA58116D31F0(3))
			{
				unk_0x26545538B51562AD(&Local_458, 0);
				unk_0x26545538B51562AD(&(Local_458.f_1), 0);
				func_363();
				iLocal_749 = 10;
				if (iLocal_748 == 2)
				{
					Local_458.f_17 = 1;
				}
				else if (iLocal_748 == 1)
				{
					Local_458.f_17 = 0;
					iLocal_749 = 77;
				}
				else if (iLocal_748 == 0)
				{
					iLocal_749 = 50;
					Local_458.f_17 = 0;
				}
				func_591(unk_0x4D29100D094E5511(), 0, 66048);
				iLocal_747++;
			}
			else
			{
				if (!func_595(1))
				{
				}
				if (!unk_0x911CCA58116D31F0(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0xC5EB6DE147B611C7();
			unk_0xF14C70F48493933D(19);
			if (!func_171(0))
			{
				func_187(0);
			}
			if (iLocal_748 == 0)
			{
				func_569(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_568(&Local_458, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_748 == 1)
			{
				func_569(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1);
				if (func_567(&Local_458, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_748 == 2)
			{
				func_569(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_556(&Local_458, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xF426A5DE932B3BEE(Local_458.f_1, 1))
			{
				unk_0xF17F4B0641AB2DE1(&Local_458, 0);
				func_598(&Local_458);
				func_591(unk_0x4D29100D094E5511(), 1, 0);
				if (func_171(0))
				{
					func_170(0);
				}
				iLocal_747 = -1;
			}
			else if (bVar0)
			{
				unk_0xF17F4B0641AB2DE1(&Local_458, 0);
				func_598(&Local_458);
				Local_252[unk_0x7025777635AB04C0() /*6*/].f_4++;
				unk_0x26545538B51562AD(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 3);
				iLocal_748++;
				if (iLocal_748 >= 3)
				{
					iLocal_748 = 0;
				}
				if (func_171(0))
				{
					func_170(0);
				}
				func_591(unk_0x4D29100D094E5511(), 1, 0);
				iLocal_747++;
			}
			break;
	}
}

int func_556(var uParam0, bool bParam1)
{
	if (unk_0xF426A5DE932B3BEE(*uParam0, 26))
	{
		if (bParam1)
		{
			func_557(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_557(var uParam0, bool bParam1, bool bParam2)
{
	unk_0xF17F4B0641AB2DE1(uParam0, 0);
	unk_0x26545538B51562AD(uParam0, 12);
	unk_0xD19C316FC489A9F4(0);
	if (bParam2)
	{
		if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
		{
			unk_0x242B732E498C2ED2(unk_0x27D769C59BC9D030(), 1, 1, 1, 0);
		}
	}
	if (unk_0x8A4F12025F4EA58F())
	{
		unk_0xCA61AAED31F8576B(0);
	}
	unk_0x5BD150B52CE8D356(1);
	if (bParam1)
	{
		unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	}
	unk_0x1D1A369233055AEC(uLocal_73, 0);
	func_561(0);
	func_560();
	unk_0x6544409BAC8CE412(0);
	func_559(uParam0, 1, 1);
	func_558(0, 1, 1, 0);
}

int func_558(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && iParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_559(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_64[iVar0] != -1)
		{
			if (!unk_0x1E18C8095B37D998(iLocal_64[iVar0]))
			{
				unk_0x972F93B6DF7649AC(iLocal_64[iVar0]);
				iLocal_64[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0xF17F4B0641AB2DE1(uParam0, 25);
	unk_0xF17F4B0641AB2DE1(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0xF17F4B0641AB2DE1(uParam0, 12);
		unk_0xF17F4B0641AB2DE1(uParam0, 9);
		unk_0xF17F4B0641AB2DE1(uParam0, 18);
		unk_0xF17F4B0641AB2DE1(uParam0, 27);
		unk_0xF17F4B0641AB2DE1(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_76 = 0;
	if (bParam1)
	{
		unk_0xBBDCA990E9FC1AE1(&uLocal_75);
	}
	unk_0xF17F4B0641AB2DE1(uParam0, 29);
}

void func_560()
{
	int iVar0;
	
	Global_1338622.f_948 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1338622.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2460486.f_4391 = 1;
}

void func_561(bool bParam0)
{
	if (bParam0)
	{
		func_566();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x26545538B51562AD(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_565(0))
		{
			func_562(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_562(int iParam0)
{
	if (Global_14571)
	{
		func_564(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_563())
	{
		Global_14413.f_1 = 3;
	}
}

int func_563()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_564(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_565(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_565(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_566()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

int func_567(var uParam0, bool bParam1)
{
	if (unk_0xF426A5DE932B3BEE(*uParam0, 9))
	{
		if (bParam1)
		{
			func_557(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_568(var uParam0, bool bParam1)
{
	if (unk_0xF426A5DE932B3BEE(*uParam0, 18))
	{
		if (bParam1)
		{
			func_557(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_569(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (unk_0xF426A5DE932B3BEE(*uParam0, 0))
	{
		func_570(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16);
	}
}

void func_570(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	
	unk_0xC87A934FDDA49A6A(0);
	unk_0xC87A934FDDA49A6A(2);
	unk_0xD19C316FC489A9F4(1);
	if (bParam17)
	{
		func_590(1);
	}
	func_589(4, -1);
	func_588();
	if (func_595(bParam16))
	{
		if (!unk_0x1E114237D972903B())
		{
			unk_0xC5EB6DE147B611C7();
			unk_0x5F817444B4379247(1);
			if (unk_0xE0D1D679E4B5371F() == 0 && !unk_0x1E114237D972903B())
			{
				unk_0x6201690B328DD500(uLocal_75, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0x34650B66FAF4897C(2))
		{
			uParam0->f_285 = unk_0x5D664BF11795445D(2, 239);
			uParam0->f_286 = unk_0x5D664BF11795445D(2, 240);
			if (uParam0->f_287 != uParam0->f_285 || uParam0->f_288 != uParam0->f_286)
			{
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_CURSOR");
				unk_0x4ACF99392701B935(uParam0->f_285);
				unk_0x4ACF99392701B935(uParam0->f_286);
				unk_0x7E5FA681CB7A2EF7();
			}
			uParam0->f_287 = uParam0->f_285;
			uParam0->f_288 = uParam0->f_286;
		}
		else
		{
			func_587(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0x8CED8F78CC31BEF2(uLocal_75, "MOVE_CURSOR");
					unk_0x4ACF99392701B935(fVar6);
					unk_0x4ACF99392701B935(fVar7);
					unk_0x7E5FA681CB7A2EF7();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (unk_0x34650B66FAF4897C(2))
			{
				uParam0->f_285 = unk_0x9CD0A6A062DCF2A7(2, 239);
				uParam0->f_286 = unk_0x9CD0A6A062DCF2A7(2, 240);
				if (unk_0x748A964A12412EBB())
				{
					if (uParam0->f_287 != uParam0->f_285)
					{
						if (uParam0->f_285 < 0.49f)
						{
							unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
							unk_0xD2DC8221939F80F7(10);
							unk_0x7E5FA681CB7A2EF7();
						}
						else if (uParam0->f_285 > 0.51f)
						{
							unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
							unk_0xD2DC8221939F80F7(11);
							unk_0x7E5FA681CB7A2EF7();
						}
					}
				}
				uParam0->f_287 = uParam0->f_285;
				uParam0->f_288 = uParam0->f_286;
			}
			if (unk_0xE1834019C3CC3C33(2))
			{
				fVar8 = unk_0xC7BC555CD69A1B05(2, 1);
				fVar9 = unk_0xC7BC555CD69A1B05(2, 2);
				bVar10 = false;
				fLocal_63 = (fLocal_63 + unk_0x0000000050597EE2());
				fLocal_70 = (fLocal_70 + fVar8);
				fLocal_71 = (fLocal_71 + fVar9);
				fLocal_72 = (fLocal_72 + 1f);
				if (fLocal_63 > 0.15f)
				{
					fLocal_63 = 0f;
					fLocal_70 = (fLocal_70 / fLocal_72);
					fLocal_71 = (fLocal_71 / fLocal_72);
					if (unk_0x43698C98CC255554(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
							unk_0xD2DC8221939F80F7(10);
							unk_0x7E5FA681CB7A2EF7();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
							unk_0xD2DC8221939F80F7(11);
							unk_0x7E5FA681CB7A2EF7();
						}
					}
					if (unk_0x43698C98CC255554(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							bVar10 = true;
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
							unk_0xD2DC8221939F80F7(8);
							unk_0x7E5FA681CB7A2EF7();
						}
						else if (fLocal_71 > 0f)
						{
							bVar10 = true;
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
							unk_0xD2DC8221939F80F7(9);
							unk_0x7E5FA681CB7A2EF7();
						}
					}
					if (bVar10)
					{
						unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_586(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0x2D8D75F813225B7B(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0x1E18C8095B37D998(uParam0->f_15))
						{
							if (iLocal_76 != 8)
							{
								unk_0x954BCDB8FDB0AC0F(uParam0->f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0x117D586920E8F7BA(2, 195) || unk_0x117D586920E8F7BA(2, 196)) || unk_0x5FCAE3F8AEC656AF(2, 195)) || unk_0x5FCAE3F8AEC656AF(2, 196))
			{
			}
			if (unk_0xE1834019C3CC3C33(2))
			{
				if (unk_0x117D586920E8F7BA(2, 32) || unk_0x117D586920E8F7BA(2, 172))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
					unk_0xD2DC8221939F80F7(8);
					unk_0x7E5FA681CB7A2EF7();
				}
				else if (unk_0x117D586920E8F7BA(2, 33) || unk_0x117D586920E8F7BA(2, 173))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
					unk_0xD2DC8221939F80F7(9);
					unk_0x7E5FA681CB7A2EF7();
				}
				else if (unk_0x117D586920E8F7BA(2, 34) || unk_0x117D586920E8F7BA(2, 174))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
					unk_0xD2DC8221939F80F7(10);
					unk_0x7E5FA681CB7A2EF7();
				}
				else if (unk_0x117D586920E8F7BA(2, 35) || unk_0x117D586920E8F7BA(2, 175))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
					unk_0xD2DC8221939F80F7(11);
					unk_0x7E5FA681CB7A2EF7();
				}
			}
			else if (unk_0x117D586920E8F7BA(2, 188))
			{
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
				unk_0xD2DC8221939F80F7(8);
				unk_0x7E5FA681CB7A2EF7();
			}
			else if (unk_0x117D586920E8F7BA(2, 187))
			{
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
				unk_0xD2DC8221939F80F7(9);
				unk_0x7E5FA681CB7A2EF7();
			}
			else if (unk_0x117D586920E8F7BA(2, 189))
			{
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
				unk_0xD2DC8221939F80F7(10);
				unk_0x7E5FA681CB7A2EF7();
			}
			else if (unk_0x117D586920E8F7BA(2, 190))
			{
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT");
				unk_0xD2DC8221939F80F7(11);
				unk_0x7E5FA681CB7A2EF7();
			}
		}
		if (bParam12)
		{
			if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
			{
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = unk_0xEF0E4A8ABAA0D524();
			}
			if (unk_0x20B35B8C39C5787D(uLocal_74))
			{
				iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				if (iVar0 == 6)
				{
					func_585(uParam0);
				}
			}
		}
		func_584();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_583((iParam15 - (unk_0xA0F74982C6AAA9D4() - iLocal_59)), &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				unk_0x67282B1700ABB038(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = 0;
				iLocal_57 = 0;
				iLocal_58 = 0;
				unk_0x67282B1700ABB038(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_582(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0xA0F74982C6AAA9D4();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_582(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0xA0F74982C6AAA9D4();
			}
		}
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_1, 0))
	{
		if (iLocal_76 == 2)
		{
			iLocal_76 = 3;
		}
		else if (iLocal_76 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_76 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_76)
	{
		case 0:
			if (!unk_0xF426A5DE932B3BEE(*uParam0, 29))
			{
				func_581(uParam0, iParam14);
			}
			func_596(1);
			unk_0x6544409BAC8CE412(1);
			uParam0->f_15 = unk_0x9EE81D7901D9BCE2();
			iLocal_150 = 0;
			iLocal_151 = 0;
			uParam0->f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0xD1380CF94C3CC1BD(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0xF17F4B0641AB2DE1(uParam0, 1);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = unk_0x9EE81D7901D9BCE2();
			iLocal_64[1] = unk_0x9EE81D7901D9BCE2();
			func_558(1, 0, 1, 0);
			if (uParam0->f_17)
			{
				iLocal_76 = 8;
			}
			else
			{
				iLocal_76++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_61 == 0)
				{
					if (!func_345("H_EXIT_PROMPT"))
					{
						if (!func_345("HACKOBJ1"))
						{
							func_580("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (unk_0x34650B66FAF4897C(2))
				{
					if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
					{
						unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xEF0E4A8ABAA0D524();
					}
				}
				else if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
				{
					unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = unk_0xEF0E4A8ABAA0D524();
				}
			}
			if (unk_0x20B35B8C39C5787D(uLocal_74))
			{
				iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_345("H_EXIT_PROMPT"))
						{
							unk_0x5BD150B52CE8D356(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
				{
					if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
					{
						func_579(0, "");
					}
				}
			}
			if (unk_0x20B35B8C39C5787D(uLocal_74))
			{
				iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
						func_579(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_76 == 3)
				{
					if (iLocal_61 == 0)
					{
						if (!func_345("HACKOBJ2"))
						{
							func_580("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (!unk_0x20B35B8C39C5787D(uLocal_74))
				{
					if (unk_0x34650B66FAF4897C(2))
					{
						if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
						{
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xEF0E4A8ABAA0D524();
						}
					}
					else if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
					{
						unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xEF0E4A8ABAA0D524();
					}
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x20B35B8C39C5787D(uLocal_74))
					{
						if (unk_0x117D586920E8F7BA(2, 202))
						{
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = unk_0xEF0E4A8ABAA0D524();
							if (iParam7 == 1)
							{
								if (func_345("HACKOBJ2"))
								{
									unk_0x5BD150B52CE8D356(1);
								}
								func_580("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76 = (iLocal_76 - 1);
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
				{
					if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
					{
						func_579(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (unk_0x20B35B8C39C5787D(uLocal_74))
				{
					iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
					func_579(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_61 = 0;
				iLocal_76++;
			}
			break;
		
		case 4:
			if (iLocal_64[1] != -1)
			{
				if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
				{
					unk_0x972F93B6DF7649AC(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
				{
					unk_0x972F93B6DF7649AC(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
				{
					unk_0x972F93B6DF7649AC(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0xF426A5DE932B3BEE(*uParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_345("HACKOBJ5"))
								{
									func_580("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!unk_0xF426A5DE932B3BEE(*uParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_345("HACKOBJ3"))
							{
								func_580("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!unk_0xF426A5DE932B3BEE(*uParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_345("HACKOBJ5"))
							{
								func_580("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_345("HACKOBJ5"))
						{
							unk_0x5BD150B52CE8D356(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x20B35B8C39C5787D(uLocal_74))
					{
						if (unk_0x34650B66FAF4897C(2))
						{
							if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
							{
								unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = unk_0xEF0E4A8ABAA0D524();
							}
						}
						else if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
						{
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xEF0E4A8ABAA0D524();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!unk_0x20B35B8C39C5787D(uLocal_74))
				{
					if (unk_0x117D586920E8F7BA(2, 202))
					{
						unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = unk_0xEF0E4A8ABAA0D524();
						if (iParam7 == 1)
						{
							if (func_345("HACKOBJ5") || func_345("HACKOBJ3"))
							{
								unk_0x5BD150B52CE8D356(1);
							}
							iLocal_61 = 0;
							iLocal_76 = (iLocal_76 - 1);
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
				{
					if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
					{
						func_579(0, "");
					}
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (unk_0x20B35B8C39C5787D(uLocal_74))
				{
					iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
					func_579(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_77 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 0))
						{
							unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x67282B1700ABB038(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x67282B1700ABB038(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x67282B1700ABB038(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0xA0F74982C6AAA9D4();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x9EE81D7901D9BCE2();
						unk_0x954BCDB8FDB0AC0F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!unk_0xF426A5DE932B3BEE(*uParam0, 18))
					{
						iLocal_77 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0xA0F74982C6AAA9D4();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x9EE81D7901D9BCE2();
						unk_0x954BCDB8FDB0AC0F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
							{
								if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
								{
									func_579(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xF426A5DE932B3BEE(*uParam0, 9))
							{
								func_579(1, "TRYDL");
							}
							else
							{
								func_579(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
						{
							if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
							{
								func_579(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xF426A5DE932B3BEE(*uParam0, 9))
						{
							func_579(1, "TRYDL");
						}
						else
						{
							func_579(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						iLocal_77 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 0))
						{
							unk_0x67282B1700ABB038(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x67282B1700ABB038(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x67282B1700ABB038(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0xA0F74982C6AAA9D4();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x9EE81D7901D9BCE2();
						if (bParam10)
						{
							func_578(uParam0);
						}
						unk_0x528D658E98C2B472(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0x954BCDB8FDB0AC0F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!bParam11 || unk_0xF426A5DE932B3BEE(*uParam0, 18)) && !unk_0xF426A5DE932B3BEE(*uParam0, 9))
					{
						iLocal_77 = unk_0xA0F74982C6AAA9D4();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x67282B1700ABB038(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0xA0F74982C6AAA9D4();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x9EE81D7901D9BCE2();
						if (bParam10)
						{
							func_578(uParam0);
						}
						if (func_345("HACKOBJ5"))
						{
							unk_0x5BD150B52CE8D356(1);
						}
						unk_0x528D658E98C2B472(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0x954BCDB8FDB0AC0F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
							{
								if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
								{
									func_579(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xF426A5DE932B3BEE(*uParam0, 18))
							{
								func_579(1, "TRYDL");
							}
							else
							{
								func_579(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
						{
							if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
							{
								func_579(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xF426A5DE932B3BEE(*uParam0, 18))
						{
							func_579(1, "TRYDL");
						}
						else
						{
							func_579(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0xF426A5DE932B3BEE(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0xF426A5DE932B3BEE(*uParam0, 18) && unk_0xF426A5DE932B3BEE(*uParam0, 9))
						{
							if (!unk_0xF426A5DE932B3BEE(*uParam0, 28))
							{
								unk_0x26545538B51562AD(uParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if ((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 500)
								{
									if (((unk_0xA0F74982C6AAA9D4() - iLocal_78) > 2500 || unk_0x117D586920E8F7BA(2, 201)) || unk_0x117D586920E8F7BA(2, 237))
									{
										func_579(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0xF426A5DE932B3BEE(*uParam0, 18))
								{
									func_579(1, "TRYBRUTE");
								}
								else
								{
									func_579(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_61 == 0)
				{
					func_577("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_577("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 1))
				{
					if (!unk_0x20B35B8C39C5787D(uLocal_74))
					{
						if (unk_0x117D586920E8F7BA(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x43FF19FFCB798385(uLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
								{
									unk_0x972F93B6DF7649AC(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
								{
									unk_0x972F93B6DF7649AC(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x26545538B51562AD(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (!unk_0x20B35B8C39C5787D(uLocal_74))
				{
					if (unk_0x34650B66FAF4897C(2))
					{
						if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
						{
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xEF0E4A8ABAA0D524();
						}
					}
					else if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
					{
						unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xEF0E4A8ABAA0D524();
					}
				}
				if (unk_0x20B35B8C39C5787D(uLocal_74))
				{
					iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
					{
						unk_0x972F93B6DF7649AC(iLocal_64[0]);
					}
					unk_0x26545538B51562AD(uParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_FAILURE", 0, 1);
					unk_0xD1380CF94C3CC1BD(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0xA0F74982C6AAA9D4();
				iLocal_64[0] = unk_0x9EE81D7901D9BCE2();
				unk_0x954BCDB8FDB0AC0F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0x26545538B51562AD(uParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0x43FF19FFCB798385(uLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
					{
						unk_0x972F93B6DF7649AC(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				unk_0x26545538B51562AD(uParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0xA0F74982C6AAA9D4() - iLocal_59));
				if (iVar1 < 1)
				{
					unk_0x26545538B51562AD(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0xA0F74982C6AAA9D4();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
						{
							unk_0x972F93B6DF7649AC(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					unk_0xD1380CF94C3CC1BD(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0xD1380CF94C3CC1BD(uLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = unk_0xA0F74982C6AAA9D4();
				unk_0x26545538B51562AD(uParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
					{
						unk_0x972F93B6DF7649AC(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_61 == 0)
				{
					func_577("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_577("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (!unk_0x20B35B8C39C5787D(uLocal_74))
				{
					if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 1))
					{
						if (unk_0x117D586920E8F7BA(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x43FF19FFCB798385(uLocal_75, "CLOSE_APP");
							if (!unk_0x1E18C8095B37D998(iLocal_64[0]))
							{
								unk_0x972F93B6DF7649AC(iLocal_64[0]);
							}
							if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x26545538B51562AD(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x20B35B8C39C5787D(uLocal_74))
				{
					if (unk_0x34650B66FAF4897C(2))
					{
						if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
						{
							unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xEF0E4A8ABAA0D524();
						}
					}
					else if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
					{
						unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xEF0E4A8ABAA0D524();
					}
				}
				if (unk_0x20B35B8C39C5787D(uLocal_74))
				{
					iVar0 = unk_0x200C167A17C879D9(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0xF426A5DE932B3BEE(*uParam0, 23))
			{
				if (func_582(&(uParam0->f_10), 500))
				{
					unk_0x43FF19FFCB798385(uLocal_75, "RESET_ROULETTE");
					unk_0xF17F4B0641AB2DE1(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0x43FF19FFCB798385(uLocal_75, "STOP_ROULETTE");
					uParam0->f_10 = unk_0xA0F74982C6AAA9D4();
					unk_0x26545538B51562AD(uParam0, 23);
					unk_0x26545538B51562AD(uParam0, 31);
					if (func_192() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x26545538B51562AD(uParam0, 25);
					unk_0x26545538B51562AD(uParam0, 31);
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0xA0F74982C6AAA9D4();
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
						{
							unk_0x972F93B6DF7649AC(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_192() == 0)
					{
						unk_0xD1380CF94C3CC1BD(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0xA0F74982C6AAA9D4() - iLocal_59));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0x26545538B51562AD(uParam0, 25);
					unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0xA0F74982C6AAA9D4();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x954BCDB8FDB0AC0F(-1, "HACKING_FAILURE", 0, 1);
					unk_0x5BD150B52CE8D356(1);
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
						{
							unk_0x972F93B6DF7649AC(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					unk_0xD1380CF94C3CC1BD(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0x26545538B51562AD(uParam0, 25);
				unk_0x67282B1700ABB038(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0xA0F74982C6AAA9D4();
				iLocal_64[1] = unk_0x9EE81D7901D9BCE2();
				unk_0x954BCDB8FDB0AC0F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0x26545538B51562AD(uParam0, 25);
				unk_0x43FF19FFCB798385(uLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
					{
						unk_0x972F93B6DF7649AC(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0xD1380CF94C3CC1BD(uLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = unk_0xA0F74982C6AAA9D4();
				unk_0x26545538B51562AD(uParam0, 9);
				unk_0x954BCDB8FDB0AC0F(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x1E18C8095B37D998(iLocal_64[1]))
					{
						unk_0x972F93B6DF7649AC(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0xF426A5DE932B3BEE(*uParam0, 9) && unk_0xF426A5DE932B3BEE(*uParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_345("HACKOBJ7"))
						{
							func_580("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_345("H_USE_PC6") || func_345("H_USE_PC7")) || func_345("H_USE_PC8")) || func_345("H_USE_PC9"))
				{
					unk_0x5BD150B52CE8D356(1);
				}
			}
			if ((unk_0xF426A5DE932B3BEE(*uParam0, 9) && unk_0xF426A5DE932B3BEE(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0xF426A5DE932B3BEE(*uParam0, 28))))
			{
				if (func_345("HACKOBJ7"))
				{
					unk_0x5BD150B52CE8D356(1);
				}
				if (!iLocal_151)
				{
					unk_0x2A5264C35FD91CE4(-1, "unlocked_bleep", unk_0x27D769C59BC9D030(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_582(&iLocal_77, 3000))
				{
					unk_0xF17F4B0641AB2DE1(uParam0, 0);
					unk_0x26545538B51562AD(uParam0, 12);
					unk_0x6544409BAC8CE412(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0xF426A5DE932B3BEE(*uParam0, 27)) && unk_0xF426A5DE932B3BEE(*uParam0, 9)) && unk_0xF426A5DE932B3BEE(*uParam0, 18))
				{
					unk_0x8CED8F78CC31BEF2(uLocal_75, "OPEN_DOWNLOAD");
					unk_0x6A784D1EF2D72A23(1);
					unk_0x7E5FA681CB7A2EF7();
					unk_0x26545538B51562AD(uParam0, 27);
				}
				if (func_582(&iLocal_77, 2000))
				{
					unk_0x43FF19FFCB798385(uLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_571(uParam0);
			break;
	}
}

void func_571(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_18 > 0)
	{
		if (unk_0xF426A5DE932B3BEE(*uParam0, 22))
		{
			if (unk_0xBF1504B8A1447E5E("hackingNG"))
			{
				if (!unk_0x1E114237D972903B())
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		unk_0x954BCDB8FDB0AC0F(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_345("H1_HNG"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		if (unk_0xDFCB321F1D24137F())
		{
			if (func_345("H1_HNG_KM"))
			{
				unk_0x5BD150B52CE8D356(1);
			}
		}
		unk_0x26545538B51562AD(uParam0, 26);
	}
	else if (unk_0xE1834019C3CC3C33(2))
	{
		if (!func_345("H1_HNG_KM"))
		{
			func_580("H1_HNG_KM");
		}
	}
	else if (!func_345("H1_HNG"))
	{
		func_580("H1_HNG");
	}
	switch (uParam0->f_18)
	{
		case 0:
			unk_0x72426D9FCE288C68("hackingNG", 0);
			unk_0xF17F4B0641AB2DE1(uParam0, 22);
			func_576();
			iLocal_139 = unk_0xA0F74982C6AAA9D4();
			Local_99.f_0 = 0;
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 0);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 1);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 2);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 3);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 4);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 5);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 6);
			unk_0xF17F4B0641AB2DE1(&uLocal_149, 7);
			uParam0->f_18++;
			break;
		
		case 1:
			if (unk_0xBF1504B8A1447E5E("hackingNG"))
			{
				unk_0x26545538B51562AD(uParam0, 22);
				unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_CURSOR_VISIBILITY");
				unk_0x6A784D1EF2D72A23(0);
				unk_0x7E5FA681CB7A2EF7();
				uParam0->f_18++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_101[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_101[iVar0 /*4*/].f_2 < 1f)
					{
						Local_101[iVar0 /*4*/].f_2 = (Local_101[iVar0 /*4*/].f_2 + ((Local_101[iVar0 /*4*/].f_1 * unk_0x0000000050597EE2()) * fLocal_138));
					}
					else
					{
						Local_101[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_101[iVar0 /*4*/].f_2 > 0f)
				{
					Local_101[iVar0 /*4*/].f_2 = (Local_101[iVar0 /*4*/].f_2 - ((Local_101[iVar0 /*4*/].f_1 * unk_0x0000000050597EE2()) * fLocal_138));
				}
				else
				{
					Local_101[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_101[iVar0 /*4*/] == 0)
				{
					Local_82[iVar0 /*2*/].f_1 = func_574(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_101[iVar0 /*4*/] == 0)
				{
					if (Local_99.f_0 == iVar0)
					{
						if (!unk_0xF426A5DE932B3BEE(uLocal_149, iVar0))
						{
							iLocal_140[iVar0] = unk_0x9EE81D7901D9BCE2();
							unk_0x954BCDB8FDB0AC0F(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0x26545538B51562AD(&iLocal_149, iVar0);
						}
						else
						{
							if (Local_101[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_134 = (2f * (1f - Local_101[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_134 = (2f * Local_101[iVar0 /*4*/].f_2);
							}
							unk_0xE35939C3B3CA3B85(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (unk_0xF426A5DE932B3BEE(iLocal_149, iVar0))
				{
					unk_0x972F93B6DF7649AC(iLocal_140[iVar0]);
					unk_0xB79BFBEF5A2CE64B(iLocal_140[iVar0]);
					unk_0xF17F4B0641AB2DE1(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_573(Local_99.f_0))
			{
				unk_0x954BCDB8FDB0AC0F(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
			{
				if (func_582(&iLocal_139, 300))
				{
					if (func_572(Local_99.f_0))
					{
						Local_101[Local_99.f_0 /*4*/] = 1;
						Local_82[Local_99.f_0 /*2*/].f_1 = 0.572f;
						unk_0x954BCDB8FDB0AC0F(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99.f_0 != 7)
						{
							Local_99.f_0++;
						}
					}
					else
					{
						if (Local_99.f_0 != 0)
						{
							if (unk_0xF426A5DE932B3BEE(iLocal_149, Local_99.f_0))
							{
								unk_0x972F93B6DF7649AC(iLocal_140[Local_99.f_0]);
								unk_0xB79BFBEF5A2CE64B(iLocal_140[Local_99.f_0]);
								unk_0xF17F4B0641AB2DE1(&iLocal_149, Local_99.f_0);
							}
							Local_101[(Local_99.f_0 - 1) /*4*/] = 0;
							Local_99.f_0 = (Local_99.f_0 - 1);
						}
						if (!unk_0x1E114237D972903B())
						{
							unk_0x962859A29A7D805C(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = unk_0xA0F74982C6AAA9D4();
						unk_0x09942629F73A2BD5(0, 100, 100);
						unk_0x954BCDB8FDB0AC0F(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x1E114237D972903B())
					{
						unk_0x1CD6F39268A57216("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = unk_0xA0F74982C6AAA9D4();
					unk_0x09942629F73A2BD5(0, 100, 100);
				}
			}
			if (!unk_0x1E114237D972903B())
			{
				if (Local_99.f_0 == 0)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 1)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 2)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 3)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 4)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 5)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 6)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 7)
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x1CD6F39268A57216("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0xF426A5DE932B3BEE(uParam0->f_1, 0))
				{
					if (!unk_0xF426A5DE932B3BEE(uParam0->f_1, 1))
					{
						if (unk_0x117D586920E8F7BA(2, 202))
						{
							unk_0x26545538B51562AD(&(uParam0->f_1), 1);
							unk_0x5BD150B52CE8D356(1);
						}
					}
				}
			}
			break;
	}
}

int func_572(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return 1;
	}
	return 0;
}

int func_573(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_574(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_575((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_575(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_576()
{
	fLocal_135 = 0.6f;
	fLocal_136 = 0.53f;
	Local_101[0 /*4*/].f_1 = (0.02f * fLocal_137);
	Local_101[1 /*4*/].f_1 = (0.025f * fLocal_137);
	Local_101[2 /*4*/].f_1 = (0.03f * fLocal_137);
	Local_101[3 /*4*/].f_1 = (0.035f * fLocal_137);
	Local_101[4 /*4*/].f_1 = (0.04f * fLocal_137);
	Local_101[5 /*4*/].f_1 = (0.045f * fLocal_137);
	Local_101[6 /*4*/].f_1 = (0.048f * fLocal_137);
	Local_101[7 /*4*/].f_1 = (0.05f * fLocal_137);
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
	Local_80.f_0 = 0.5f;
	Local_80.f_1 = 0.5f;
	Local_82[0 /*2*/] = 0.35f;
	Local_82[0 /*2*/].f_1 = 0.4f;
	Local_82[1 /*2*/] = 0.39f;
	Local_82[1 /*2*/].f_1 = 0.4f;
	Local_82[2 /*2*/] = 0.43f;
	Local_82[2 /*2*/].f_1 = 0.4f;
	Local_82[3 /*2*/] = 0.47f;
	Local_82[3 /*2*/].f_1 = 0.4f;
	Local_82[4 /*2*/] = 0.51f;
	Local_82[4 /*2*/].f_1 = 0.74f;
	Local_82[5 /*2*/] = 0.55f;
	Local_82[5 /*2*/].f_1 = 0.74f;
	Local_82[6 /*2*/] = 0.59f;
	Local_82[6 /*2*/].f_1 = 0.74f;
	Local_82[7 /*2*/] = 0.63f;
	Local_82[7 /*2*/].f_1 = 0.74f;
}

void func_577(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

void func_578(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3A5708FEE1B560A9(0, 8);
	if (iVar0 == 0)
	{
		uParam0->f_14 = "PASSWORD";
	}
	else if (iVar0 == 1)
	{
		uParam0->f_14 = "PETSNAME";
	}
	else if (iVar0 == 2)
	{
		uParam0->f_14 = "DYNAMITE";
	}
	else if (iVar0 == 3)
	{
		uParam0->f_14 = "BACKDOOR";
	}
	else if (iVar0 == 4)
	{
		uParam0->f_14 = "MORPHEUS";
	}
	else if (iVar0 == 5)
	{
		uParam0->f_14 = "CREAMPIE";
	}
	else if (iVar0 == 6)
	{
		uParam0->f_14 = "WORMSIGN";
	}
	else if (iVar0 == 7)
	{
		uParam0->f_14 = "UNLOCKED";
	}
	else if (iVar0 == 8)
	{
		uParam0->f_14 = "BLUEBOOK";
	}
	else if (iVar0 == 9)
	{
		uParam0->f_14 = "DECIPHER";
	}
	else if (iVar0 == 10)
	{
		uParam0->f_14 = "JUNKYARD";
	}
	else
	{
		uParam0->f_14 = "PASSWORD";
	}
}

void func_579(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0xD1380CF94C3CC1BD(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = unk_0xA0F74982C6AAA9D4();
		iLocal_79 = 1;
	}
	else
	{
		unk_0xD1380CF94C3CC1BD(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_580(char* sParam0)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

void func_581(var uParam0, int iParam1)
{
	if (!unk_0xF426A5DE932B3BEE(*uParam0, 29))
	{
		unk_0x67282B1700ABB038(uLocal_75, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0xADE9BBB8055E9BBF())
		{
			unk_0xD1380CF94C3CC1BD(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0xD1380CF94C3CC1BD(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0x8CED8F78CC31BEF2(uLocal_75, "SET_LABELS");
		func_227("H_ICON_1");
		if (iParam1 == 0)
		{
			func_227("H_ICON_2a");
		}
		else
		{
			func_227("H_ICON_2");
		}
		func_227("H_ICON_3");
		func_227("H_ICON_4");
		func_227("H_ICON_5");
		func_227("H_ICON_6");
		unk_0x7E5FA681CB7A2EF7();
		unk_0x26545538B51562AD(uParam0, 29);
	}
}

int func_582(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA0F74982C6AAA9D4();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_583(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_584()
{
	if (iLocal_76 < 5)
	{
		if (unk_0x117D586920E8F7BA(2, 201) || unk_0x117D586920E8F7BA(2, 237))
		{
			unk_0x954BCDB8FDB0AC0F(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_585(var uParam0)
{
	unk_0x242B732E498C2ED2(unk_0x27D769C59BC9D030(), 1, 1, 1, 0);
	if (unk_0x8A4F12025F4EA58F())
	{
		unk_0xCA61AAED31F8576B(0);
	}
	unk_0x5BD150B52CE8D356(1);
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	unk_0x1D1A369233055AEC(uLocal_73, 0);
	func_561(0);
	func_560();
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0x6544409BAC8CE412(0);
	func_559(uParam0, 1, 0);
	func_558(0, 1, 1, 0);
}

void func_586(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x5D664BF11795445D(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x5D664BF11795445D(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x5D664BF11795445D(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x5D664BF11795445D(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xC55A2D68D9DCE160(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x1CB3481DB3DE9B89(2, 218) * 127f));
		}
		if (!unk_0xC55A2D68D9DCE160(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x1CB3481DB3DE9B89(2, 219) * 127f));
		}
		if (!unk_0xC55A2D68D9DCE160(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x1CB3481DB3DE9B89(2, 220) * 127f));
		}
		if (!unk_0xC55A2D68D9DCE160(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x1CB3481DB3DE9B89(2, 221) * 127f));
		}
	}
	if (unk_0xE1834019C3CC3C33(2))
	{
		if (bParam5)
		{
			if (unk_0xE4FBBCD3AA42C3FF())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xDA3A365AB8DA727B())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_587(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 221) * 127f));
		}
	}
}

void func_588()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_565(0))
		{
			func_562(0);
		}
		unk_0x26545538B51562AD(&Global_2284, 2);
	}
}

void func_589(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&(Global_1338622.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1338622.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_590(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_591(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
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
		if (unk_0xEE1EAEC68574EF2D())
		{
			unk_0x334FD925982DE56B(0);
		}
	}
	if (!unk_0x0E063DDE8855EC52())
	{
		iVar0 = iParam2;
		unk_0x9F805E4A6F671CEE(iParam0, bParam1, iVar0);
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
		if (!func_314())
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
		if (unk_0x27C9C05A6B4E58D2(iParam0) && unk_0x2DB75A8F096AB1F1(iParam0))
		{
			uVar25 = unk_0xC834A7C58DEB59B4(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x0E063DDE8855EC52())
				{
					unk_0x28EC875B929FC59C(1);
				}
				else
				{
					unk_0xFBE386F7181B95E8(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x0E063DDE8855EC52() && !bVar18)
					{
						unk_0x28EC875B929FC59C(0);
					}
					Global_2418472[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_594(uVar25) && !unk_0x7047948B09B46E3F(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF1919C21714E9FAF(uVar25, true, 0);
					}
				}
				if (!unk_0xBF99E4112970270F(uVar25))
				{
					if (!bVar20)
					{
						unk_0xA8CA82EB31D1626F(uVar25, false);
					}
					unk_0x77E24407E71C2B27(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA8CA82EB31D1626F(uVar25, false);
				}
				unk_0xFFD8329ED7A8E20C(uVar25, true);
				unk_0x4056514F44BCBB31(iParam0, 0);
				unk_0x27314B4B7D8FC0F7(uVar25);
				unk_0x64708EB51448F86F(uVar25, 1);
				func_593();
				func_592();
				if (unk_0xE30C357F61D580D9())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x9A7F0D797C57AC34())
				{
				}
				Global_2418472[iParam0 /*313*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_594(uVar25) && !unk_0x7047948B09B46E3F(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF1919C21714E9FAF(uVar25, !bVar14, 0);
					}
					if (!unk_0xBF99E4112970270F(uVar25))
					{
						if (!bVar20)
						{
							unk_0xA8CA82EB31D1626F(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x77E24407E71C2B27(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x4056514F44BCBB31(iParam0, 0);
				}
				else
				{
					unk_0x4056514F44BCBB31(iParam0, 1);
				}
				unk_0xFFD8329ED7A8E20C(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5EF000E8611AB6E5(uVar25) && !unk_0x9A4E2270C2271219(uVar25, 0))
					{
						unk_0x09D2BE36C9D2B76F(uVar25);
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
			unk_0x9F805E4A6F671CEE(iParam0, bParam1, iVar26);
		}
	}
}

void func_592()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404956.f_1673 = { Var0 };
}

void func_593()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_205 = 0;
}

int func_594(var uParam0)
{
	int iVar0;
	
	if (unk_0x9A4E2270C2271219(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x810AFFABCBF31E2D(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_595(bool bParam0)
{
	if (unk_0x4C3CEC038B6637D7(uLocal_75) && (!bParam0 || (((((unk_0xBF1504B8A1447E5E("HACKING_PC_desktop_0") && unk_0xBF1504B8A1447E5E("HACKING_PC_desktop_1")) && unk_0xBF1504B8A1447E5E("HACKING_PC_desktop_2")) && unk_0xBF1504B8A1447E5E("HACKING_PC_desktop_3")) && unk_0xBF1504B8A1447E5E("HACKING_PC_desktop_4")) && unk_0xBF1504B8A1447E5E("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_596(bool bParam0)
{
	if (bParam0)
	{
		unk_0x72426D9FCE288C68("HACKING_PC_desktop_0", 0);
		unk_0x72426D9FCE288C68("HACKING_PC_desktop_1", 0);
		unk_0x72426D9FCE288C68("HACKING_PC_desktop_2", 0);
		unk_0x72426D9FCE288C68("HACKING_PC_desktop_3", 0);
		unk_0x72426D9FCE288C68("HACKING_PC_desktop_4", 0);
		unk_0x72426D9FCE288C68("HACKING_PC_desktop_5", 0);
	}
	uLocal_75 = unk_0xF10A6FDF2D445666("Hacking_PC");
}

void func_597(var uParam0)
{
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x242B732E498C2ED2(unk_0x27D769C59BC9D030(), 1, 1, 1, 0);
	}
	if (unk_0x8A4F12025F4EA58F())
	{
		unk_0xCA61AAED31F8576B(0);
	}
	unk_0xD19C316FC489A9F4(0);
	unk_0x5BD150B52CE8D356(1);
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	unk_0x1D1A369233055AEC(uLocal_73, 0);
	unk_0xF17F4B0641AB2DE1(uParam0, 0);
	unk_0xF17F4B0641AB2DE1(uParam0, 12);
	func_561(0);
	func_560();
	unk_0x6544409BAC8CE412(0);
}

void func_598(var uParam0)
{
	func_559(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_18 = 0;
	Local_99.f_0 = 0;
	Local_99.f_1 = 0;
	unk_0xF17F4B0641AB2DE1(uParam0, 26);
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
}

void func_599(bool bParam0)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam0)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	unk_0xCFF471245AFEEDCE(0, 69, 1);
	unk_0xCFF471245AFEEDCE(0, 70, 1);
	unk_0xCFF471245AFEEDCE(0, 68, 1);
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
}

void func_600()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xF426A5DE932B3BEE(Local_458.f_0, 0))
	{
		return;
	}
	if (!func_370())
	{
		if (func_345("GB_SGHT_HLP1"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		if (func_345("GB_SGHT_HLP2"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		if (func_338())
		{
			sVar0 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
			iVar1 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
			if (func_234(unk_0x4D29100D094E5511(), 1))
			{
				if (func_609("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x5BD150B52CE8D356(1);
				}
			}
			else if (func_609("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x5BD150B52CE8D356(1);
			}
		}
		if (func_345("GB_SGHT_RVL"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		return;
	}
	iVar2 = func_329(unk_0x4D29100D094E5511());
	if (iVar2 < 2)
	{
		if (func_345("GB_SGHT_HLP1"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		if (func_345("GB_SGHT_HLP2"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		if (func_338())
		{
			sVar0 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
			iVar1 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
			if (func_234(unk_0x4D29100D094E5511(), 1))
			{
				if (func_609("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x5BD150B52CE8D356(1);
				}
			}
			else if (func_609("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x5BD150B52CE8D356(1);
			}
		}
		if (func_345("GB_SGHT_RVL"))
		{
			unk_0x5BD150B52CE8D356(1);
		}
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(iLocal_445, 2))
	{
		if (!func_608(84))
		{
			if (iLocal_747 == -1)
			{
				if (func_602(0, 1, 1, 1))
				{
					if (unk_0x7025777635AB04C0() == Local_192.f_33)
					{
						func_350("GB_SGHT_HLP1", -1);
						func_349(1);
						unk_0x26545538B51562AD(&iLocal_445, 2);
					}
					else if (func_663() == Local_192.f_33)
					{
						func_350("GB_SGHT_HLP2", -1);
						func_349(1);
						unk_0x26545538B51562AD(&iLocal_445, 2);
					}
					else if (func_338())
					{
						sVar0 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
						iVar1 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
						if (func_234(unk_0x4D29100D094E5511(), 1))
						{
							func_601("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_349(1);
						}
						else
						{
							func_601("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_349(1);
						}
						unk_0x26545538B51562AD(&iLocal_445, 2);
					}
				}
			}
			else
			{
				unk_0x26545538B51562AD(&iLocal_445, 2);
			}
		}
	}
	if (unk_0xF426A5DE932B3BEE(iLocal_445, 2))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_445, 7))
		{
			if (iLocal_747 == -1)
			{
				if (unk_0x7025777635AB04C0() == Local_192.f_33)
				{
					if (func_602(0, 1, 1, 1))
					{
						func_350("GB_SGHT_APPH", -1);
						func_349(1);
						unk_0x26545538B51562AD(&iLocal_445, 7);
					}
				}
				else
				{
					unk_0x26545538B51562AD(&iLocal_445, 7);
				}
			}
			else
			{
				unk_0x26545538B51562AD(&iLocal_445, 7);
			}
		}
	}
	if (!unk_0xF426A5DE932B3BEE(iLocal_445, 8))
	{
		if (func_662())
		{
			if (func_648())
			{
				if (unk_0xE1CAA98B09E043C9(Local_192.f_3))
				{
					if (func_602(0, 1, 1, 1))
					{
						func_350("GB_SGHT_PKGH", -1);
						func_349(1);
						unk_0x26545538B51562AD(&iLocal_445, 8);
					}
				}
			}
		}
	}
	if (!unk_0xF426A5DE932B3BEE(iLocal_445, 12))
	{
		if (func_662())
		{
			if (Local_192.f_5 > 0 || unk_0xF426A5DE932B3BEE(Local_192.f_1, 6))
			{
				if (func_602(0, 1, 1, 1))
				{
					func_350("GB_SGHT_RVL", -1);
					func_349(1);
					unk_0x26545538B51562AD(&iLocal_445, 12);
				}
			}
		}
	}
}

void func_601(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam2);
	}
	unk_0xF9E9E11D6DF3EBF8(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam4);
	}
	unk_0x2B088D6251C2080D(sParam3);
	unk_0x9785EE0D78241684(0, 0, 0, iParam5);
}

int func_602(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x46768B1495288824())
	{
		return 0;
	}
	if (func_607())
	{
		return 0;
	}
	if (!unk_0xCBB243DDC0D132D1())
	{
		return 0;
	}
	if (func_319())
	{
		return 0;
	}
	if (func_382())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_27(unk_0x4D29100D094E5511(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_606(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
	}
	if (func_605())
	{
		return 0;
	}
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return 0;
	}
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_604())
	{
		return 0;
	}
	if (func_603())
	{
		return 0;
	}
	if (func_312())
	{
		return 0;
	}
	if (Global_68058)
	{
		return 0;
	}
	if (Global_2467968)
	{
		return 0;
	}
	return 1;
}

bool func_603()
{
	return Global_2434762.f_567;
}

bool func_604()
{
	return Global_2434762.f_717;
}

bool func_605()
{
	return Global_2428492.f_2462.f_585;
}

int func_606(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_607()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

bool func_608(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

bool func_609(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0x66F753896FC4EEC3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam2);
	}
	unk_0xF9E9E11D6DF3EBF8(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam4);
	}
	unk_0x2B088D6251C2080D(sParam3);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_610()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xF426A5DE932B3BEE(Local_458.f_0, 0))
	{
		return;
	}
	if (!func_370())
	{
		if (unk_0xF426A5DE932B3BEE(iLocal_445, 5))
		{
			if (Local_192.f_34 != -1)
			{
				iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
				if (iVar0 > -1)
				{
					if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(Local_192.f_34)))
					{
						iVar1 = func_236(iVar0);
						iVar2 = func_553(iVar1);
						func_361(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 432, 0);
						func_359(unk_0x6EED86A16F7EA8F2(Local_192.f_34), iVar2, 0);
						func_358(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0, 0);
						func_357(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0);
						func_356(unk_0x6EED86A16F7EA8F2(Local_192.f_34), Global_262145.f_10294, 0);
						unk_0xF17F4B0641AB2DE1(&iLocal_445, 5);
					}
					else
					{
						unk_0xF17F4B0641AB2DE1(&iLocal_445, 5);
					}
				}
			}
			func_363();
		}
		return;
	}
	if (!unk_0xE1CAA98B09E043C9(Local_192.f_3))
	{
		if (unk_0x7025777635AB04C0() == Local_192.f_33)
		{
			if (!unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 3))
			{
				if (!unk_0xF426A5DE932B3BEE(Local_458.f_0, 0))
				{
					if (Local_252[unk_0x7025777635AB04C0() /*6*/].f_5 < 3)
					{
						if (func_329(unk_0x4D29100D094E5511()) == 3)
						{
							if (!func_620("GB_SGHT_HCK"))
							{
								func_617("GB_SGHT_HCK", 0);
							}
						}
						else if (func_620("GB_SGHT_HCK"))
						{
							func_363();
						}
					}
					else
					{
						func_363();
					}
				}
			}
		}
		else if (func_663() == Local_192.f_33)
		{
			if (Local_192.f_34 != -1)
			{
				if (func_329(unk_0x4D29100D094E5511()) == 3)
				{
					if (!func_620("GB_SGHT_PROT"))
					{
						iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_236(iVar0);
							func_611("GB_SGHT_PROT", unk_0x6EED86A16F7EA8F2(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_620("GB_SGHT_PROT"))
				{
					func_363();
				}
			}
		}
		else if (func_338())
		{
			if (Local_192.f_34 != -1)
			{
				if (func_329(unk_0x4D29100D094E5511()) == 3)
				{
					if (Local_192.f_34 != -1)
					{
						iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_236(iVar0);
							if (func_234(unk_0x4D29100D094E5511(), 1))
							{
								if (!func_620("GB_SGHT_STOP"))
								{
									func_611("GB_SGHT_STOP", unk_0x6EED86A16F7EA8F2(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_620("GB_SGHT_STOP"))
							{
								func_611("GB_SGHT_STOP", unk_0x6EED86A16F7EA8F2(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_620("GB_SGHT_STOP"))
					{
						func_363();
					}
					if (func_620("GB_SGHT_STOP2"))
					{
						func_363();
					}
				}
				if (func_329(unk_0x4D29100D094E5511()) >= 2)
				{
					if (!unk_0xF426A5DE932B3BEE(iLocal_445, 5))
					{
						if (Local_192.f_34 != -1)
						{
							if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(Local_192.f_34)))
							{
								if (func_705(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 1, 1))
								{
									iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_236(iVar0);
										iVar2 = func_553(iVar1);
										func_361(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 432, 1);
										func_359(unk_0x6EED86A16F7EA8F2(Local_192.f_34), iVar2, 1);
										func_358(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 1, 1);
										func_357(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 1);
										func_356(unk_0x6EED86A16F7EA8F2(Local_192.f_34), Global_262145.f_10294, 1);
										unk_0x26545538B51562AD(&iLocal_445, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0xF426A5DE932B3BEE(iLocal_445, 5))
				{
					if (Local_192.f_34 != -1)
					{
						iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_236(iVar0);
							iVar2 = func_553(iVar1);
							func_361(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 432, 0);
							func_359(unk_0x6EED86A16F7EA8F2(Local_192.f_34), iVar2, 0);
							func_358(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0, 0);
							func_357(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0);
							func_356(unk_0x6EED86A16F7EA8F2(Local_192.f_34), Global_262145.f_10294, 0);
							unk_0xF17F4B0641AB2DE1(&iLocal_445, 5);
						}
					}
				}
			}
		}
	}
	else if (func_329(unk_0x4D29100D094E5511()) == 3)
	{
		if (unk_0x7025777635AB04C0() == Local_192.f_33)
		{
			if (!unk_0xF426A5DE932B3BEE(Local_458.f_0, 0))
			{
				if (!func_620("GB_SGHT_RETP"))
				{
					func_617("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_663() == Local_192.f_33)
		{
			if (Local_192.f_34 != -1)
			{
				if (!func_620("GB_SGHT_PROT"))
				{
					iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_236(iVar0);
						func_611("GB_SGHT_PROT", unk_0x6EED86A16F7EA8F2(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_338())
		{
			if (Local_192.f_34 != -1)
			{
				iVar0 = func_238(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_236(iVar0);
					if (func_234(unk_0x4D29100D094E5511(), 1))
					{
						if (!func_620("GB_SGHT_STOP"))
						{
							func_611("GB_SGHT_STOP", unk_0x6EED86A16F7EA8F2(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_620("GB_SGHT_STOP"))
					{
						func_611("GB_SGHT_STOP", unk_0x6EED86A16F7EA8F2(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_620("GB_SGHT_PROT"))
		{
			func_363();
		}
		if (func_620("GB_SGHT_RETP"))
		{
			func_363();
		}
		if (func_620("GB_SGHT_STOP"))
		{
			func_363();
		}
		if (func_620("GB_SGHT_STOP2"))
		{
			func_363();
		}
	}
}

void func_611(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_612(sParam0, unk_0xD358A441FAC2240C(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312577 = 14;
		Global_1312577.f_54 = iParam3;
		Global_1312577.f_55 = iParam4;
	}
}

int func_612(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return 0;
	}
	if (unk_0x171888B136481692(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(sParam1))
	{
		return 0;
	}
	if (unk_0x171888B136481692(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(sParam2))
	{
		return 0;
	}
	if (unk_0x171888B136481692(sParam2) > 63)
	{
		return 0;
	}
	if (func_616(sParam0, sParam1, sParam2) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_364();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), unk_0x3AA961419D971CB2(), 24);
	Global_1312577.f_7 = unk_0x70ABFF261710305D(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	Global_1312577.f_56 = uParam4;
	func_615();
	func_614(bParam3);
	func_613();
	return 1;
}

void func_613()
{
	unk_0x26545538B51562AD(&(Global_1312577.f_57), 1);
}

void func_614(bool bParam0)
{
	if (bParam0)
	{
		unk_0x26545538B51562AD(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0xF17F4B0641AB2DE1(&(Global_1312577.f_57), 0);
}

void func_615()
{
	Global_1312577.f_8 = unk_0xECBDE2498459EE0C(unk_0x20D394965B47B01A(), 86400000);
	Global_1312577.f_9 = unk_0x20D394965B47B01A();
}

bool func_616(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_369())
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(uParam0))
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(uParam1))
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(uParam2))
	{
		return 0;
	}
	if (!unk_0x70ABFF261710305D(sParam0) == unk_0x70ABFF261710305D(&(Global_1312577.f_10)))
	{
		return 0;
	}
	if (!unk_0x70ABFF261710305D(sParam1) == unk_0x70ABFF261710305D(&(Global_1312577.f_14)))
	{
		return 0;
	}
	return unk_0x70ABFF261710305D(sParam2) == unk_0x70ABFF261710305D(&(Global_1312577.f_30));
}

void func_617(char* sParam0, bool bParam1)
{
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return;
	}
	if (unk_0x171888B136481692(sParam0) > 23)
	{
		return;
	}
	if (func_618(sParam0))
	{
		return;
	}
	func_364();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x3AA961419D971CB2(), 24);
	Global_1312577.f_7 = unk_0x70ABFF261710305D(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_615();
	func_614(bParam1);
	func_613();
}

bool func_618(char* sParam0)
{
	if (!func_369())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_619(uParam0);
	}
	if (unk_0x75CB9E30BA492FF0(uParam0))
	{
		return 0;
	}
	return unk_0x70ABFF261710305D(sParam0) == unk_0x70ABFF261710305D(&(Global_1312577.f_10));
}

bool func_619(char* sParam0)
{
	if (!func_369())
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(uParam0))
	{
		return 0;
	}
	return unk_0x70ABFF261710305D(sParam0) == unk_0x70ABFF261710305D(&(Global_1312577.f_14));
}

int func_620(char* sParam0)
{
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return 0;
	}
	if (!func_369())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x171888B136481692(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x171888B136481692(sParam0) > 23)
	{
		return 0;
	}
	return func_618(sParam0);
}

void func_621()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_662() && !func_338())
	{
		return;
	}
	if (!func_370())
	{
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(iLocal_445, 1))
	{
		iVar0 = func_329(unk_0x4D29100D094E5511());
		if (iVar0 >= 2)
		{
			if (unk_0x7025777635AB04C0() == Local_192.f_33 || func_663() == Local_192.f_33)
			{
				if (func_627(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_404(84, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x11777047B0DE84F4(1);
					unk_0x9142BC6FF567DB85(unk_0x4D29100D094E5511(), joaat("pickup_portable_package"), 1);
					func_626(1);
					func_622();
				}
			}
			else if (func_234(unk_0x4D29100D094E5511(), 1))
			{
				sVar1 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
				uVar2 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
				func_528(84, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x9142BC6FF567DB85(unk_0x4D29100D094E5511(), joaat("pickup_portable_package"), 0);
				func_622();
			}
			else
			{
				sVar1 = func_405(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
				uVar2 = func_530(unk_0x6EED86A16F7EA8F2(Local_192.f_34));
				func_528(84, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x9142BC6FF567DB85(unk_0x4D29100D094E5511(), joaat("pickup_portable_package"), 0);
				func_622();
			}
		}
		unk_0x26545538B51562AD(&iLocal_445, 1);
	}
}

void func_622()
{
	if (func_402() != func_69())
	{
		Global_1727400 = func_625(func_402());
		Global_1727400.f_1 = func_624(func_402());
	}
	Global_1727400.f_5 = unk_0x9CC4C10F8D665832();
	Global_1727400.f_13 = func_623();
	Global_1727400.f_15 = 0;
	if (func_403(1))
	{
		if (func_488() == func_402())
		{
			Global_1727400.f_15 = 1;
		}
	}
}

int func_623()
{
	int iVar0;
	
	iVar0 = func_402();
	if (iVar0 != func_69())
	{
		return Global_1610316[iVar0 /*174*/].f_10.f_68;
	}
	return 0;
}

var func_624(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

var func_625(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_7[0];
}

void func_626(bool bParam0)
{
	if (bParam0)
	{
		if (!func_166(unk_0x4D29100D094E5511(), 9))
		{
			if (func_329(unk_0x4D29100D094E5511()) != 0)
			{
				func_186(9);
			}
		}
	}
	else if (func_166(unk_0x4D29100D094E5511(), 9))
	{
		func_185(9);
	}
}

int func_627(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xF17F4B0641AB2DE1(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_628(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0x26545538B51562AD(&Global_2283, 1);
			unk_0x26545538B51562AD(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_628(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xC1C5B83BB6719C6C(sParam14, sParam15))
	{
	}
	func_638();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if (unk_0xABE2848258482F49(unk_0x27D769C59BC9D030()))
			{
				return 0;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xD32535FA4397160F(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xD32535FA4397160F(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_637() == 0)
	{
		func_635();
		return 0;
	}
	func_634(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0xF426A5DE932B3BEE(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_633(0);
		func_633(2);
		func_633(1);
	}
	else
	{
		func_638();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_633(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_633(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_633(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_633(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF426A5DE932B3BEE(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_638();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_381())
			{
				unk_0x954BCDB8FDB0AC0F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_632(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_629(1);
			func_632(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_629(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_631(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_227(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar2);
								unk_0x7E5FA681CB7A2EF7();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = 0;
									iVar4 = Global_2562131;
									func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_227(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(Global_2289);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_227(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar6);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_227(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar7);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 8)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_227(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if ((iVar1 == 23 && unk_0xC1C5B83BB6719C6C(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF426A5DE932B3BEE(Global_2284, 6))
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_227(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609099.f_1;
								func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_630(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_630(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x75CB9E30BA492FF0(uParam7))
	{
		func_227(sParam7);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam8))
	{
		func_227(iParam8);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam9))
	{
		func_227(iParam9);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam10))
	{
		func_227(iParam10);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam11))
	{
		func_227(iParam11);
	}
	unk_0x7E5FA681CB7A2EF7();
}

bool func_631(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_632(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E5FA681CB7A2EF7();
}

void func_633(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_634(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2FADF5E93AB8D64B();
	uVar1 = unk_0x51C7DC141C5D0E6B();
	uVar2 = unk_0xEFEADD7EBD01C0A6();
	uVar3 = unk_0x388418AD39C0F4DE();
	uVar4 = unk_0xE3911478C9FE04B2() + 1;
	uVar5 = unk_0x8FB5B60BC869990E();
	Global_101154.f_12831[iParam0 /*104*/].f_18 = uVar0;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_635()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_636(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

int func_636(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_637()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_636(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return 0;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_638()
{
	if (func_631(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_639();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_639()
{
	func_640();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_640()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_643(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_642(unk_0x27D769C59BC9D030());
			if (func_641(iVar0) && (!func_631(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_641(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_641(int iParam0)
{
	return iParam0 < 3;
}

int func_642(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_643(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_643(int iParam0)
{
	if (func_641(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_644()
{
	if (!unk_0xF426A5DE932B3BEE(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1, 1))
	{
		if (!func_662())
		{
			if (Local_192.f_5 > 0 || unk_0xF426A5DE932B3BEE(Local_192.f_1, 6))
			{
				func_188(1);
				unk_0x26545538B51562AD(&(Local_252[unk_0x7025777635AB04C0() /*6*/].f_1), 1);
			}
		}
	}
}

int func_645()
{
	if (func_646(1))
	{
		return 1;
	}
	if (Global_2460486.f_4660.f_14)
	{
		Global_2460486.f_4660.f_14 = 0;
		return 1;
	}
	return 0;
}

int func_646(bool bParam0)
{
	bool bVar0;
	
	if (!func_403(1))
	{
		bVar0 = false;
		if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51 != func_69())
		{
			if (func_705(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51, 0, 1) && Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_19 == 4)
			{
				bVar0 = true;
			}
		}
		else if (func_647(func_183(unk_0x4D29100D094E5511())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_508(31);
				if (unk_0x27C9C05A6B4E58D2(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_388(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609014 = 1;
				}
				Global_1608998 = { Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_74 };
			}
			return 1;
		}
	}
	return 0;
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

bool func_648()
{
	return func_201(unk_0x4D29100D094E5511());
}

void func_649(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 != iParam0)
	{
		func_661(-1);
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 = iParam0;
		if (func_660() != -1)
		{
			func_659(-1);
		}
		if (func_658() != -1)
		{
			func_657(-1);
		}
		func_655(iParam2);
		func_653(iParam0);
		if (!func_194(iParam0))
		{
			fVar0 = func_193(iParam0);
			if (fVar0 != 1f)
			{
				func_190(fVar0);
				unk_0x26545538B51562AD(&(Global_1727391.f_3), 1);
			}
		}
		if (!func_197(iParam0))
		{
			if (func_195(iParam0, iParam2))
			{
				unk_0x193107EFB9C9FD44(0);
				unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 0);
				unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
				unk_0x26545538B51562AD(&(Global_1727391.f_3), 0);
			}
			else if (unk_0x0094DC02313D5ADE() < 5)
			{
				unk_0xE71148ED586F1ED1(1f);
				unk_0x193107EFB9C9FD44(5);
			}
		}
		if (func_337())
		{
			func_186(27);
		}
		if (bParam1)
		{
			if (!func_331())
			{
				func_188(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 1) || unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 4)) || unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 0))
			{
				func_508(6);
			}
			func_652();
		}
		if (iParam0 == 164)
		{
			unk_0xCBBD6CF628E1DF2B(3, 0);
			unk_0xCBBD6CF628E1DF2B(5, 0);
		}
		if (func_112(unk_0x4D29100D094E5511()) && func_202(unk_0x4D29100D094E5511()))
		{
			unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1), 8);
		}
		func_650();
	}
}

void func_650()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_651();
	iVar2 = func_70(unk_0x4D29100D094E5511());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x6EED86A16F7EA8F2(iVar0);
		if (unk_0x27C9C05A6B4E58D2(iVar1))
		{
			if (func_269(iVar1, iVar2, 1))
			{
				unk_0xA017073E76197359(unk_0x4D29100D094E5511(), iVar1, uVar3);
				unk_0xA017073E76197359(iVar1, unk_0x4D29100D094E5511(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_651()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	if (iVar0 != func_69())
	{
		if (func_705(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xF426A5DE932B3BEE(Global_1610316[iVar1 /*174*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_652()
{
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 1))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 1);
	}
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 4))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 4);
	}
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 6))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 6);
	}
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 0);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 2);
	Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_365 = 0;
	if (Global_2460486.f_4416 > 0)
	{
		unk_0x193107EFB9C9FD44(Global_2460486.f_4416);
	}
	Global_2460486.f_4415 = 0;
}

void func_653(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_459(3351, -1, 0);
	iVar1 = func_654(iParam0);
	if (iVar1 != -1)
	{
		unk_0x26545538B51562AD(&uVar0, iVar1);
		func_451(3351, uVar0, -1, 1);
	}
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_655(int iParam0)
{
	func_656(unk_0x4D29100D094E5511(), iParam0);
}

void func_656(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_657(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

int func_658()
{
	return Global_2460486.f_4660.f_138;
}

void func_659(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

int func_660()
{
	return Global_2460486.f_4660.f_137;
}

void func_661(int iParam0)
{
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_27 = iParam0;
}

int func_662()
{
	int iVar0;
	
	iVar0 = func_663();
	if (iVar0 > -1)
	{
		if (Local_192.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_663()
{
	int iVar0;
	
	if (Local_252[unk_0x7025777635AB04C0() /*6*/].f_3 != -1)
	{
		return Local_252[unk_0x7025777635AB04C0() /*6*/].f_3;
	}
	if (func_201(unk_0x4D29100D094E5511()))
	{
		Local_252[unk_0x7025777635AB04C0() /*6*/].f_3 = unk_0x7025777635AB04C0();
		if (unk_0x7025777635AB04C0() == Local_192.f_33)
		{
			func_626(1);
		}
	}
	else if (func_234(unk_0x4D29100D094E5511(), 1))
	{
		iVar0 = func_402();
		if (iVar0 != func_69())
		{
			if (unk_0x50A45FCE14D10B26(iVar0))
			{
				Local_252[unk_0x7025777635AB04C0() /*6*/].f_3 = unk_0xFE6F4DCB1D797E53(iVar0);
			}
		}
	}
	return Local_252[unk_0x7025777635AB04C0() /*6*/].f_3;
}

int func_664()
{
	return Local_192.f_0;
}

int func_665(int iParam0)
{
	return Local_252[iParam0 /*6*/];
}

int func_666()
{
	bool bVar0;
	
	func_671(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_670())
	{
		return 1;
	}
	if (Global_2445442)
	{
		return 1;
	}
	if (func_669())
	{
		return 1;
	}
	if (func_668(157))
	{
		if (!func_667())
		{
			return 1;
		}
	}
	if (func_668(155))
	{
		return 1;
	}
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_191() != 0)
	{
		if (unk_0xD32535FA4397160F(func_191()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_667()
{
	return Global_2434762.f_574;
}

int func_668(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_669()
{
	return Global_2443085;
}

bool func_670()
{
	return Global_2434762.f_569;
}

void func_671(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_672(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_672(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_705(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(iVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(iVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_673(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_673(int iParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(iParam0))
		{
			if (unk_0x2380875F8B6B9911(iParam0))
			{
				unk_0xAF3355298F537BB0(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(iParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_674()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_675()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_445, 6))
	{
		if (unk_0x0E063DDE8855EC52())
		{
			if (func_662() || func_338())
			{
				func_527(0, 4);
				unk_0x26545538B51562AD(&iLocal_445, 6);
			}
		}
	}
	func_691(3, 3, -1, -1082130432);
	if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0x7025777635AB04C0() == Local_192.f_33)
		{
			if (iLocal_747 >= 0)
			{
				func_598(&Local_458);
				func_597(&Local_458);
			}
		}
	}
	if (unk_0xF384805745D7A349(unk_0x27D769C59BC9D030()) == iLocal_451)
	{
		unk_0x71065DDFF8D7744C(unk_0x27D769C59BC9D030(), uLocal_453);
	}
	if (iLocal_747 > 0)
	{
		if (unk_0xF426A5DE932B3BEE(Local_192.f_1, 3))
		{
			func_591(unk_0x4D29100D094E5511(), 1, 0);
		}
	}
	func_690();
	if (Local_192.f_34 != -1)
	{
		if (unk_0xF426A5DE932B3BEE(iLocal_445, 5))
		{
			if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(Local_192.f_34)))
			{
				func_361(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 432, 0);
				func_359(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 1, 0);
				func_358(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0, 0);
				func_357(unk_0x6EED86A16F7EA8F2(Local_192.f_34), 0);
				func_356(unk_0x6EED86A16F7EA8F2(Local_192.f_34), Global_262145.f_10294, 0);
			}
		}
	}
	if (func_171(0))
	{
		func_170(0);
	}
	if (unk_0xF426A5DE932B3BEE(iLocal_446, 0))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_446, 2))
		{
			unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 0);
			unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 0);
			unk_0x68BD4F826EFDDC53("BG_SIGHTSEER_STOP");
		}
	}
	unk_0x26545538B51562AD(&iLocal_446, 8);
	func_167();
	unk_0x11777047B0DE84F4(1);
	func_626(0);
	func_677(1);
	unk_0x193107EFB9C9FD44(5);
	unk_0xF17F4B0641AB2DE1(&Global_2563397, 21);
	unk_0xF17F4B0641AB2DE1(&Global_2563397, 20);
	func_676();
}

void func_676()
{
	unk_0x7C3AA2D27E16E2AD();
}

void func_677(bool bParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 167 || Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 168)
	{
		func_688();
		unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 4);
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 164)
	{
		unk_0xCBBD6CF628E1DF2B(3, 1);
		unk_0xCBBD6CF628E1DF2B(5, 1);
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 != -1)
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 = -1;
		if (!unk_0xF426A5DE932B3BEE(Global_1573883.f_1, 14) && !func_112(unk_0x4D29100D094E5511()))
		{
			func_188(0);
		}
	}
	else if (func_686(unk_0x4D29100D094E5511()) != -1)
	{
		func_661(-1);
	}
	func_655(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_684(iVar0);
		iVar0++;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1727391.f_3, 0))
	{
		unk_0xE71148ED586F1ED1(1f);
		unk_0x193107EFB9C9FD44(5);
		unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 0);
	}
	if (func_267(func_352()))
	{
		func_683(-1);
	}
	else if (func_351(func_352()))
	{
	}
	else
	{
		func_679(-1, 1);
	}
	func_185(19);
	func_185(20);
	func_185(21);
	func_185(22);
	func_185(27);
	func_170(3);
	func_170(4);
	func_170(7);
	func_678();
	if (func_202(unk_0x4D29100D094E5511()))
	{
		func_626(0);
	}
	func_185(29);
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51 = func_69();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (bParam0)
	{
		func_172();
	}
	if (!func_112(unk_0x4D29100D094E5511()))
	{
		func_184();
		unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 1);
	}
}

void func_678()
{
	if (func_205(unk_0x4D29100D094E5511()))
	{
		func_185(25);
	}
}

void func_679(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_352();
	}
	if (iParam0 > 0)
	{
		if (func_402() != func_69())
		{
			if (func_682(unk_0x4D29100D094E5511()) == unk_0x4D29100D094E5511())
			{
				Global_2459488.f_35[func_681(iParam0)] = 1;
			}
		}
		iVar0 = func_681(159);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(157);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(148);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(164);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(142);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(152);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(166);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(170);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(173);
		if (func_680(iVar0, Global_262145.f_10545, bParam1))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_680(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_166(unk_0x4D29100D094E5511(), 19) && !func_166(unk_0x4D29100D094E5511(), 20)) && !func_166(unk_0x4D29100D094E5511(), 9))
		{
			return 0;
		}
	}
	if (Global_2459488.f_35[iParam0] == 1 && func_9(&(Global_2459488[iParam0 /*2*/])))
	{
		if (func_548(&(Global_2459488[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		default:
	}
	return -1;
}

int func_682(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

void func_683(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_352();
	}
	if (iParam0 > 0)
	{
		if (func_402() != func_69())
		{
			Global_2459488.f_35[func_681(iParam0)] = 1;
		}
		iVar0 = func_681(155);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(163);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(160);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(153);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(162);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(154);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(171);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_681(172);
		if (func_680(iVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[iVar0 /*2*/]));
			func_8(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_684(int iParam0)
{
	if (!func_159(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_104[iParam0 /*3*/], func_685(), 0))
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_104[iParam0 /*3*/] = { func_685() };
	}
	if (!func_159(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_94[iParam0 /*3*/], func_685(), 0))
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_94[iParam0 /*3*/] = { func_685() };
	}
}

Vector3 func_685()
{
	struct<3> Var0;
	
	return Var0;
}

int func_686(int iParam0)
{
	if (func_687(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

int func_687(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_688()
{
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_1643), 28);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_1643), 29);
	func_689(24);
}

void func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_690()
{
	unk_0x1FCC08AE8E31FD6C(uLocal_452);
	unk_0x1FCC08AE8E31FD6C(iLocal_451);
}

void func_691(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = unk_0x3AA961419D971CB2();
	Var1.f_0 = Global_1727400;
	Var1.f_1 = Global_1727400.f_1;
	Var1.f_2 = Global_1727400.f_2;
	Var1.f_3 = Global_1727400.f_3;
	Var1.f_4 = Global_1727400.f_4;
	Var1.f_5 = Global_1727400.f_5;
	Var1.f_6 = Global_1727400.f_6;
	Var1.f_7 = Global_1727400.f_7;
	Var1.f_8 = Global_1727400.f_8;
	Var1.f_9 = Global_1727400.f_9;
	Var1.f_10 = Global_1727400.f_10;
	Var1.f_11 = Global_1727400.f_11;
	Var1.f_12 = Global_1727400.f_12;
	Var1.f_13 = Global_1727400.f_14;
	if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1727400.f_15;
			Var15.f_15 = Global_1727400.f_16;
			Var15.f_16 = Global_1727400.f_17;
			unk_0x9DF5A6B2A65CC289(&Var15);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1727400.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0x813B1B6A3864DFB6(&Var32);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1727400.f_15;
			Var49.f_15 = iParam0;
			unk_0x9100F5A1C14BE6B0(&Var49);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1727400.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0x949F0B92C8512472(&Var65);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1727400.f_15;
			Var82.f_15 = iParam0;
			unk_0x1E1529AC897B45DF(&Var82);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1727400.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0x385A5AC3A9B28064(&Var98);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1727400.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1727400.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1727400.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_692();
}

void func_692()
{
	struct<18> Var0;
	
	Global_1727400 = { Var0 };
}

void func_693(struct<20> Param0)
{
	func_703(func_704(Param0.f_0), Param0);
	unk_0x760D563099DDA295(3);
	func_701(0, -1, 0);
	unk_0xE6E20DA4BE6773A1(&Local_192, 60);
	unk_0xEC578E04792A69AD(&Local_252, 193);
	if (!func_700())
	{
		func_675();
	}
	if (unk_0x0E063DDE8855EC52())
	{
		unk_0xF160EBCA8FFA0E2A(0);
		if (unk_0x96BA6BF1BA1235CC())
		{
		}
		func_699();
		func_694(0, 0);
		Local_252[unk_0x7025777635AB04C0() /*6*/] = 0;
	}
	else
	{
		func_675();
	}
}

void func_694(int iParam0, int iParam1)
{
	func_698();
	func_697();
	if ((iParam0 != 0 && unk_0x27C9C05A6B4E58D2(iParam1)) && func_696(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x26545538B51562AD(&Global_1727386, 0);
				break;
			}
	}
	if (!func_648() && !func_234(unk_0x4D29100D094E5511(), 1))
	{
		if (func_334())
		{
			func_187(3);
		}
		func_187(4);
	}
	if (func_403(0))
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51 = func_402();
	}
	func_695();
}

void func_695()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_69();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_696(int iParam0, bool bParam1)
{
	return func_269(unk_0x4D29100D094E5511(), iParam0, bParam1);
}

void func_697()
{
	func_689(33);
	func_689(34);
	func_689(35);
	func_689(36);
	func_689(37);
	func_689(38);
	func_689(39);
	func_689(40);
	func_689(43);
	func_689(41);
	func_689(54);
	func_689(42);
	func_689(47);
}

void func_698()
{
	struct<14> Var0;
	
	Global_1727400 = { Var0 };
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

void func_699()
{
}

int func_700()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x0E063DDE8855EC52())
		{
			return 0;
		}
		if (unk_0x3D3EC4199DF36385())
		{
			return 1;
		}
		if (func_670())
		{
			return 0;
		}
		if (func_668(155))
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

int func_701(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x3F2703DCC0FC2191();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_676();
			}
			else
			{
				return 0;
			}
		}
		if (!func_702())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x0E063DDE8855EC52())
				{
					if (!bParam2)
					{
						func_676();
					}
					else
					{
						return 0;
					}
				}
				if (func_670())
				{
					if (!bParam2)
					{
						func_676();
					}
					else
					{
						return 0;
					}
				}
				if (func_668(155))
				{
					if (!bParam2)
					{
						func_676();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92CB7725500E696A())
			{
				if (!bParam2)
				{
					func_676();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x3F2703DCC0FC2191();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			if (!bParam2)
			{
				func_676();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92CB7725500E696A())
	{
		if (!bParam2)
		{
			func_676();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_702()
{
	return Global_1315888;
}

void func_703(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		func_676();
	}
	unk_0x9064278EBCD8C84A(uParam0, 0, Param1.f_16);
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

int func_705(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

