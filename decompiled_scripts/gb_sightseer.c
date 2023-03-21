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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	struct<2> Local_86[8];
	struct<2> Local_103 = { 0, 0 } ;
	struct<4> Local_105[8];
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	int iLocal_143 = 0;
	int iLocal_144[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 10;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 2;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 8;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 8;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	float fLocal_190 = 0f;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	struct<60> Local_194 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_254[32];
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	var uLocal_455 = 0;
	struct<3> Local_456 = { 0, 0, 0 } ;
	var uLocal_459 = 0;
	struct<23> Local_460 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 1015222895;
	var uLocal_489 = 1021665346;
	var uLocal_490 = 0;
	var uLocal_491 = 255;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = -1;
	var uLocal_501 = 996499522;
	var uLocal_502 = 1002740646;
	var uLocal_503 = 0;
	var uLocal_504 = 60;
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
	var uLocal_565 = 1016296636;
	var uLocal_566 = 220;
	var uLocal_567 = 255;
	var uLocal_568 = 255;
	var uLocal_569 = 255;
	var uLocal_570 = 255;
	var uLocal_571 = 255;
	var uLocal_572 = 255;
	var uLocal_573 = 4096;
	var uLocal_574 = 40;
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
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 4;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 1065353216;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 1056964608;
	var uLocal_753 = 1056964608;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	struct<3> Local_760[20];
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
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
	fLocal_67 = 0f;
	fLocal_74 = 0f;
	fLocal_75 = 0f;
	fLocal_76 = 0f;
	fLocal_139 = 0.62f;
	fLocal_140 = 0.51f;
	fLocal_141 = 0.55f;
	fLocal_142 = 25f;
	fLocal_190 = ((0.05f + 0.275f) - 0.01f);
	iLocal_754 = -1;
	iLocal_755 = -1;
	iLocal_757 = -1;
	iLocal_758 = -1;
	if (unk_0x44243F2E2F58B8E3() && func_990(unk_0x8CFC7D6E1DA5D304(), 0, 1))
	{
		func_957(ScriptParam_0);
	}
	else
	{
		func_909();
	}
	while (true)
	{
		func_908();
		if (func_900())
		{
			func_909();
		}
		Global_1807007.f_2 = Local_194.f_58;
		Global_1807007.f_3 = Local_194.f_59;
		switch (func_899(unk_0xA651DA0BC9FD8FA4()))
		{
			case 0:
				if (func_898() == 1)
				{
					func_897();
					if (func_896())
					{
						func_881(142, 1, -1, 0);
						unk_0x945880A1F9FE9E4F(3);
						if (!func_880())
						{
							unk_0xBECAE3C0924E0C30(unk_0x8CFC7D6E1DA5D304(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_881(142, 0, -1, 0);
					}
					Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 1;
				}
				else if (func_898() == 4)
				{
					Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_877(1))
				{
					Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 2;
				}
				if (func_898() == 1)
				{
					func_402();
					func_399();
					if (func_896() || func_398())
					{
						func_249(&(Global_1347470.f_532), &Global_1347470, 26, &(Global_1347470.f_1), &(Global_1347470.f_115), -1, 0);
					}
					func_196();
				}
				else if (func_898() == 4)
				{
					Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 3;
				}
				func_193();
				break;
			
			case 3:
				func_192(&(Local_194.f_49));
				if (func_191(&(Local_194.f_49)))
				{
					Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 4;
			
			case 4:
				func_909();
				break;
		}
		if (unk_0xF67B871D7588B9D9())
		{
			switch (func_898())
			{
				case 0:
					if (func_184())
					{
						unk_0x991913908B585B67(&(Local_194.f_58), &(Local_194.f_59));
						Local_194.f_0 = 1;
						Local_194.f_33 = unk_0xA651DA0BC9FD8FA4();
						Local_194.f_34 = unk_0x8CFC7D6E1DA5D304();
						func_881(142, 1, -1, 0);
					}
					break;
				
				case 1:
					func_182();
					func_4();
					if (func_2())
					{
						Local_194.f_0 = 4;
					}
					else if (func_1())
					{
						Local_194.f_0 = 4;
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
	if (Global_2512581.f_4878.f_29)
	{
		Global_2512581.f_4878.f_29 = 0;
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
	if (unk_0xB03A1684359C50A1(Local_194.f_1, 2))
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
	switch (Local_194.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (unk_0xB03A1684359C50A1(Local_194.f_1, 1))
			{
				Local_194.f_32 = 2;
			}
			else if (unk_0xB03A1684359C50A1(Local_194.f_1, 3))
			{
				Local_194.f_32 = 2;
			}
			else if (unk_0xB03A1684359C50A1(Local_194.f_1, 4))
			{
				Local_194.f_32 = 2;
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
	if (Local_194.f_5 == 0)
	{
		if (!unk_0xB03A1684359C50A1(Local_194.f_1, 6))
		{
			if (!func_9(&(Local_194.f_53)))
			{
				func_8(&(Local_194.f_53), 0, 0);
			}
			else if (func_6(&(Local_194.f_53), func_7(), 0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_194.f_1), 6);
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
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
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
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
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
	if (!func_9(&(Local_194.f_51)))
	{
		func_8(&(Local_194.f_51), 0, 0);
	}
	else if (func_6(&(Local_194.f_51), func_11(), 0))
	{
		unk_0xD2A9C3F486236CC5(&(Local_194.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_11661;
}

void func_12()
{
	int iVar0;
	
	if (Local_194.f_33 < 0)
	{
		return;
	}
	if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(Local_194.f_33)))
	{
		if (Local_254[Local_194.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_254[Local_194.f_33 /*6*/].f_4 - 1);
			if (!unk_0xB03A1684359C50A1(Local_194.f_4, iVar0))
			{
				Local_194.f_36 = iVar0;
				if (func_13())
				{
					unk_0xD2A9C3F486236CC5(&(Local_194.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()
{
	int iVar0;
	struct<26> Var1;
	struct<3> Var27;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_25 = -1082130432;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x5AD42783360AB57E(Local_194.f_3))
	{
		unk_0x9016574B77A748EE(iVar0);
		if (unk_0xEDFE27D1AEA0EA7F(iVar0))
		{
			if (unk_0xC4103B26BB866E36(1))
			{
				Var27 = { func_181() };
				if (func_14(Var27, 5f, &Local_456, &uLocal_459, Var1))
				{
					Local_194.f_3 = unk_0xCCFE4A4520579FB7(unk_0x8125794BDF04342F(joaat("pickup_portable_package"), Local_456, 1, iVar0));
					unk_0x3FF1EE7D5FD7094C(unk_0xC6442477EF1FCEE7(Local_194.f_3), Local_456 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x419C9117019F2E5A(iVar0);
					unk_0xF74B493CCF90C997(unk_0xC6442477EF1FCEE7(Local_194.f_3), 1);
					unk_0x4B22B2CACC114C63(unk_0xC6442477EF1FCEE7(Local_194.f_3), 1);
					unk_0xC4E1F2B378137853(unk_0xC6442477EF1FCEE7(Local_194.f_3), 1);
					unk_0xB05881241072FEE6(unk_0xC6442477EF1FCEE7(Local_194.f_3), 0);
					unk_0x2F96E5B023BC3998(unk_0xC6442477EF1FCEE7(Local_194.f_3));
					func_8(&(Local_194.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0x5AD42783360AB57E(Local_194.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<17> Var0;
	struct<18> Var28;
	struct<3> Var56;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var28.f_16 = 1;
	Var28.f_22 = 1;
	Var28.f_23 = 1;
	Var28.f_24 = 1;
	Var28 = { Param0 };
	Var28.f_3 = Param6.f_11;
	Var28.f_4 = fParam3;
	Var28.f_5 = 0;
	Var28.f_6 = 1;
	Var28.f_7 = 0;
	Var28.f_15 = 0;
	Var28.f_16 = 1;
	Var28.f_17 = 0;
	if (func_15(&Var28, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var56 = { Param0 - Var0[0 /*3*/] };
			if (Var56.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
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
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405047.f_2432 == *uParam0 || !Global_2405047.f_2432.f_1 == uParam0->f_1) || !Global_2405047.f_2432.f_2 == uParam0->f_2) || !Global_2405047.f_2435 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405047.f_2446 == uParam0->f_8 || !Global_2405047.f_2446.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2446.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2449 == uParam0->f_11) || !Global_2405047.f_2449.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2449.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405047.f_2446 == uParam0->f_8 || !Global_2405047.f_2446.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2446.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2449 == uParam0->f_11) || !Global_2405047.f_2449.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2449.f_2 == uParam0->f_11.f_2) || !Global_2405047.f_2452 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405047.f_2430 == 1)
		{
			if (unk_0x19B3A29FD53C54A6(Global_2405047.f_2439))
			{
				if (Global_2405047.f_2439 == unk_0xBCF9D020FA9C313D())
				{
					if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2436) < func_180(0))
					{
						return 0;
					}
				}
				else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2436) < func_180(0))
				{
					return 0;
				}
			}
			unk_0xC68EAACEC25A9D7D();
			unk_0xD506485F6CF85F40();
			func_179();
		}
		Global_2405047.f_2430 = 0;
	}
	else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2436) > func_180(0))
	{
		Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
		func_173();
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
	unk_0xEA3ACC77B4C2040A(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2405047.f_2430)
	{
		unk_0xC68EAACEC25A9D7D();
		unk_0xD506485F6CF85F40();
		func_179();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_172(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x46B1D19CA7396DFD())
		{
			Global_2405047.f_2453 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405047.f_2432 = { *uParam0 };
					Global_2405047.f_2435 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405047.f_2446 = { uParam0->f_8 };
					Global_2405047.f_2449 = { uParam0->f_11 };
					Global_2405047.f_2452 = 0f;
					Global_2405047.f_2432 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405047.f_2446 = { uParam0->f_8 };
					Global_2405047.f_2449 = { uParam0->f_11 };
					Global_2405047.f_2452 = uParam0->f_14;
					Global_2405047.f_2432 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_171(Var8.f_0, Var8.f_1);
			}
			Global_2405047.f_2431 = 1;
			Global_2405047.f_2430 = 1;
			Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2436 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2439 = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405047.f_2430)
	{
		if (Global_2405047.f_2431 == 1)
		{
			if (unk_0x29C76D80E7597FEE(fVar4, fVar5, fVar6, fVar7) || unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 5000)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
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
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var26.f_6 = uParam1->f_25;
					}
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
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_170(Global_1646129.f_138609))
					{
						Var26.f_9 = 1;
					}
					func_148(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_147(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405047.f_2431 = 9;
				}
				else
				{
					Global_2405047.f_2431 = 2;
				}
			}
		}
		if (Global_2405047.f_2431 == 2)
		{
			if ((unk_0xB3E527FB54121733(Var11, Var14) || unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 15000) || unk_0x9E4B194E35B1D4FF(Var11, Var14) == 0)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				if (uParam0->f_5 && !func_144(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					Global_2405047.f_2431 = 3;
				}
				else
				{
					Global_2405047.f_2431 = 4;
				}
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2441) > 7000)
			{
				func_143(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2405047.f_2431 == 3)
		{
			if (func_142() || unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 10000)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				Global_2405047.f_2431 = 4;
			}
		}
		if (Global_2405047.f_2431 == 4)
		{
			if (unk_0x46B1D19CA7396DFD())
			{
				unk_0xC68EAACEC25A9D7D();
				unk_0xD506485F6CF85F40();
			}
			else
			{
				iVar0 = 0;
				func_173();
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
					if (!unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
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
							if (unk_0xBA502A3D4BBC47F4(unk_0x8CFC7D6E1DA5D304(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
								Global_2405047.f_2431 = 5;
							}
							break;
						
						case 1:
							func_141(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x9D676F53D9D8D900(unk_0x8CFC7D6E1DA5D304(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
								Global_2405047.f_2431 = 5;
							}
							break;
						
						case 2:
							if (unk_0x9D676F53D9D8D900(unk_0x8CFC7D6E1DA5D304(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
								Global_2405047.f_2431 = 5;
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
					Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
					Global_2405047.f_2431 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x36DDA93D5E4FE5AB(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_141(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x36808BA8196057FA(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x36808BA8196057FA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405047.f_2431 == 5)
		{
			if (func_65(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405047.f_2457.f_5)
				{
					Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
					Global_2405047.f_2431 = 6;
				}
				else
				{
					Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x7F21F40674579303(Var1.f_0, Var1.f_1);
						}
					}
					Global_2405047.f_2431 = 9;
				}
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 20000)
			{
				unk_0xC68EAACEC25A9D7D();
				unk_0xD506485F6CF85F40();
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				Global_2405047.f_2431 = 8;
			}
		}
		if (Global_2405047.f_2431 == 6)
		{
			iVar0 = 0;
			Global_2405047.f_2457.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_64(uParam0->f_4))
				{
					if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_63(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var8)))
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
			Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2431 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x36DDA93D5E4FE5AB(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_141(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x36808BA8196057FA(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x36808BA8196057FA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405047.f_2431 == 7)
		{
			if (func_65(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2405047.f_2586[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_147(Global_2405047.f_2586[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2586[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_61(Global_2405047.f_2586[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2586[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xBD0ECFC2907D1982(Global_2405047.f_2586[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2586[iVar17 /*3*/] };
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
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x7F21F40674579303(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2405047.f_2431 = 9;
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 20000)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				Global_2405047.f_2431 = 8;
			}
		}
		if (Global_2405047.f_2431 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2405047.f_481))
				{
				}
			}
			else if (Global_2405047.f_2457.f_2)
			{
				func_16(uParam2, &(Global_2405047.f_2457.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405047.f_2432 };
				func_18(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2431 = 9;
		}
		if (Global_2405047.f_2431 == 9)
		{
			Global_2405047.f_2430 = 0;
			unk_0xC68EAACEC25A9D7D();
			unk_0xD506485F6CF85F40();
			func_179();
			return 1;
		}
		Global_2405047.f_2436 = unk_0xE92FCF3C05C2EF1D();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
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
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	struct<3> Var67;
	struct<3> Var70;
	struct<3> Var73;
	float fVar76;
	
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
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var67 = { *uParam5 };
						if (func_64(uParam5->f_4) || !unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_63(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_63(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_20(*uParam0, &Var0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
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
		if (uParam6->f_25 > 0f)
		{
			Var4.f_6 = uParam6->f_25;
		}
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
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_148(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				break;
			
			case 2:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_19(Var0, uParam5->f_7, Var70, Var73, fVar76))
		{
			if (func_20(*uParam0, &Var0, iVar66, iParam3, 0))
			{
				if (!func_19(Var0, uParam5->f_7, Var70, Var73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var70 };
					}
					if (unk_0xB5E0B10B5D88A8F5(Var0, &uVar63, 0, 0))
					{
						Var0.f_2 = uVar63;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var70 };
				}
				if (unk_0xB5E0B10B5D88A8F5(Var0, &uVar63, 0, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405047.f_641 = 1;
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
			return func_61(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xBD0ECFC2907D1982(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_60(Param0, uParam3))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xF9E0586D9E1040C8(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_41(Global_2405047.f_504, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_28(*uParam3, 1056964608))
			{
				if (!func_22(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_22(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_27(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411026[iVar4])
	{
		if (func_26(Var1, &(Global_2409882[iVar4 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409882[iVar4 /*127*/][iVar0 /*7*/], Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_3, Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411026[8])
	{
		if (func_26(Var1, &(Global_2409882[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409882[8 /*127*/][iVar0 /*7*/], Global_2409882[8 /*127*/][iVar0 /*7*/].f_3, Global_2409882[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_25(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x828D7620A6039793(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_24(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_24(Var6, Var3) >= 0f)
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
		Var6 = { func_25(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_25(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x828D7620A6039793(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_24(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_24(Var6, Var29) >= 0f)
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

float func_24(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_25(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_26(struct<3> Param0, var uParam3)
{
	return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_27(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411036[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411036[1])
	{
		if (Param0.f_0 < Global_2411040[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411036[2])
	{
		if (Param0.f_0 < Global_2411040[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2411040[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2411040[3])
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

int func_28(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_38(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (Global_1646129.f_52935 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_52935)
			{
				if (Global_1646129.f_52936[iVar0 /*68*/].f_7 != 0)
				{
					if (func_29(Param0, Global_1646129.f_52936[iVar0 /*68*/], Global_1646129.f_52936[iVar0 /*68*/].f_6, Global_1646129.f_52936[iVar0 /*68*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1646129.f_49726 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_49726)
			{
				if (Global_1646129.f_49729[iVar0 /*130*/].f_16 != 0)
				{
					if (func_29(Param0, Global_1646129.f_49729[iVar0 /*130*/], Global_1646129.f_49729[iVar0 /*130*/].f_3, Global_1646129.f_49729[iVar0 /*130*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1646129.f_66586 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_66586)
			{
				if (Global_1646129.f_66590[iVar0 /*213*/].f_12 != 0)
				{
					if (func_29(Param0, Global_1646129.f_66590[iVar0 /*213*/], Global_1646129.f_66590[iVar0 /*213*/].f_3, Global_1646129.f_66590[iVar0 /*213*/].f_12, 0.5f))
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

int func_29(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_37(iParam7, 1008981770))
	{
		func_30(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0xBD0ECFC2907D1982(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_30(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_36(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_31(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x36E1A96E1D63ED91((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x36E1A96E1D63ED91((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x36E1A96E1D63ED91((Var6.f_0 - Var3.f_0));
}

void func_31(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x13F3D1D84F5B8F2E(iParam0))
	{
		unk_0x0D8E51F437C55570(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_34(iParam0);
		if (iVar0 != 0)
		{
			func_32(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
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

void func_32(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_33(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x13F3D1D84F5B8F2E(Global_1315788[iVar0]))
		{
			unk_0x0D8E51F437C55570(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315792[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315799[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0.5f);
	Global_1315820 = (Global_1315815 * 0.5f);
	Global_1315817.f_1 = ((((0.5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0.5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0.5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0.5f);
	*uParam1 = { Global_1315817 };
	*uParam2 = { Global_1315820 };
}

void func_33(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_35(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_36(var uParam0, struct<3> Param1)
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

float func_37(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_31(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_38(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_39(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595681[iParam0 /*678*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_39(int iParam0)
{
	return func_40(iParam0);
}

bool func_40(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

int func_41(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_54(Param0))
	{
		if (func_53(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_44(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_43(*uParam3, 1056964608))
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
				func_42(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_42(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
		if (fParam7 == 0f)
		{
			func_36(&Var0, 0f, 0f, unk_0x3D81861E1A1652A9(0f, 360f));
		}
		else
		{
			func_36(&Var0, 0f, 0f, fParam7);
		}
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

int func_43(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2405047.f_2693[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_46(&Var2, &(Global_2405047.f_360[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(Var2, &uVar1) || func_45(Var2))
			{
				Var2 = { *uParam0 };
				func_46(&Var2, &(Global_2405047.f_360[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_45(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405047.f_576 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2405047.f_573);
		if (fVar0 < Global_2405047.f_576)
		{
			return 1;
		}
	}
	return 0;
}

void func_46(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_48(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2691) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_48(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_48(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_42(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2691) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_47(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_23(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_47(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_48(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_42(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_47(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_23(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xF76F6CDAE27FDDDA(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_147(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_61(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xBD0ECFC2907D1982(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_49(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_52())
	{
		return 0;
	}
	iVar1 = func_51();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_360[iVar0 /*12*/].f_9 == 1)
		{
			if (func_50(Param0, &(Global_2405047.f_360[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_147(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405047.f_2691) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_61(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_51()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_360[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_52()
{
	return Global_1808664.f_28;
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409745[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409745[iVar0 /*17*/].f_16))
			{
				if (func_50(*uParam0, &(Global_2409745[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409745[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409745[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_46(&Var1, &(Global_2409745[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_53(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_46(&Var1, &(Global_2409745[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_54(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405047.f_507 && !Global_2405047.f_508)
	{
		if (!Global_2405047.f_44.f_313)
		{
			if (!func_58(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				return 1;
			}
			if (!func_57(Param0, 1008981770))
			{
				if (!func_53(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_53(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_56(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_55(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_53(&Var1, 0, 0, 0, 1))
					{
						if (!func_53(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_55(var uParam0)
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

int func_56(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_50(Param0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_50(Param0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_59(iParam0) != 0;
	}
	return func_38(iParam0, bParam1);
}

int func_59(int iParam0)
{
	if (func_990(iParam0, 0, 1))
	{
		return Global_2422724[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_60(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405047.f_2228 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2228)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2405047.f_2229[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405047.f_2229[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_61(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_62(&Param3, &Param6);
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

void func_62(var uParam0, var uParam1)
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

int func_63(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_64(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405047.f_2457.f_1 == 0 && Global_2405047.f_2457 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x32EF3278E82F5BA6(&(Global_2405047.f_2457.f_1)))
			{
				case 0:
					func_139(uParam1, uParam2);
					if (!Global_2405047.f_2457.f_2)
					{
						if (uParam2->f_7 && Global_2405047.f_538.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
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
								*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
							}
							if (uParam1->f_5 && func_17(Global_2405047.f_481))
							{
								if (!Global_2405047.f_2457.f_5)
								{
									Global_2405047.f_2457.f_5 = 1;
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
							uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_139(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x46B1D19CA7396DFD())
		{
			if (!unk_0xF12A55F0471AEA2E())
			{
				if (unk_0x0A8D3C8ED2124B28())
				{
					func_139(uParam1, uParam2);
					Global_2405047.f_2457.f_1 = unk_0x62EA97B6D1E28753();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xD506485F6CF85F40();
				func_139(uParam1, uParam2);
				if (!Global_2405047.f_2457.f_2)
				{
					Global_2405047.f_2457.f_5 = 1;
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
		func_136(Global_2405047.f_538, &(Global_2405047.f_2457.f_52), &(Global_2405047.f_2457.f_85));
	}
	if (uParam2->f_7 && !Global_2405047.f_2457.f_4)
	{
		Global_2405047.f_2457.f_4 = 1;
		func_73(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405047.f_2457.f_1 > 0 || Global_2405047.f_2457 > 0)
	{
		if (uParam1->f_5 || unk_0x46B1D19CA7396DFD())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405047.f_2457.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405047.f_2457.f_3)
					{
						iVar4 = Global_2405047.f_2457.f_3 + 1;
					}
					if (iVar4 > (Global_2405047.f_2457.f_1 - 1))
					{
						iVar4 = (Global_2405047.f_2457.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x18964759CA8D7813(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xD4090B3C9D394242(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xCBCE855C35CA414F(iVar4);
					}
					else
					{
						unk_0x60CB1CD1496F3D95(iVar4, &iVar5);
					}
					func_73(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405047.f_2457.f_3 = iVar4;
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
			iVar4 = Global_2405047.f_2457.f_1;
		}
		if (Global_2405047.f_2457.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405047.f_2845)
			{
				func_67(&(Global_2405047.f_2457.f_6[0 /*9*/]), &(Global_2405047.f_2457.f_6[1 /*9*/]), &(Global_2405047.f_2457.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_17(Global_2405047.f_481))
			{
				if (Global_2405047.f_2457.f_2)
				{
					func_16(uParam0, &(Global_2405047.f_2457.f_6));
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405047.f_2457.f_2)
			{
				func_16(uParam0, &(Global_2405047.f_2457.f_6));
				func_66(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x61E9B3BFA06B017B(0, Global_2405047.f_2457.f_1);
				unk_0x18964759CA8D7813(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_22(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
					func_66(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
				func_66(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
		if (uParam1->f_5 && func_17(Global_2405047.f_481))
		{
			if (!Global_2405047.f_2457.f_5)
			{
				Global_2405047.f_2457.f_5 = 1;
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
		uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
		func_66(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_66(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405047.f_2586[(3 - iVar0) /*3*/] = { Global_2405047.f_2586[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405047.f_2586[0 /*3*/] = { Param0 };
}

void func_67(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2405047.f_481) && func_72() < 4096)
	{
		func_71(uParam0, 0f);
		func_71(uParam1, uParam0->f_2);
		func_71(uParam2, uParam1->f_2);
	}
	else
	{
		func_70(uParam0);
		func_69(uParam2, uParam0->f_4);
		func_68(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_68(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407912[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407912[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407912[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_69(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407912[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407912[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_70(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			if (Global_2407912[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407912[iVar0 /*9*/].f_1;
				Var2 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_71(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			if (Global_2407912[iVar0 /*9*/].f_2 < fVar1 && Global_2407912[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407912[iVar0 /*9*/].f_2;
				Var2 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407912[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_73(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	struct<9> Var24;
	bool bVar33;
	bool bVar34;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2405047.f_481 == 1)
		{
			if (unk_0x36E1A96E1D63ED91((Global_2405047.f_504.f_2 - Param0.f_2)) < 25f)
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
		if (func_132(unk_0x8CFC7D6E1DA5D304()))
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
		if (!func_131(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x6CFDE98D629C4466(unk_0x18F7BE9ACB7D08F4(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x6CFDE98D629C4466(unk_0x18F7BE9ACB7D08F4(), Param0, 20f))
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
		if (!func_130(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_124(Param0, fParam3, uParam4->f_15, func_129(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2405047.f_3;
		}
	}
	else if (!func_121(Param0, 25f, unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_117(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_117(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405047.f_673)
		{
			Var11 = { Global_2405047.f_504 };
			if (Global_2405047.f_481 == 26)
			{
				Var11 = { Global_2405047.f_538.f_18 };
			}
			if (!func_43(Param0, 0.5f))
			{
				if (func_54(Var11))
				{
					if (!func_53(&Param0, 0, 0, 0, 1) && !func_116(&Param0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_116(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_115(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_114(unk_0x8CFC7D6E1DA5D304()) && func_112(unk_0x8CFC7D6E1DA5D304())))
		{
			if (!func_111(&Param0, &(Global_2405047.f_2457.f_85), 0, 1065353216))
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
		if (!func_112(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!func_110(Param0, &(Global_2405047.f_2457.f_52), &(Global_2405047.f_2457.f_85), 1073741824))
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
	if (func_109(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_17(Global_2405047.f_481))
			{
				if (func_57(Param0, 0.01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_108(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2405047.f_44.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405047.f_673)
		{
			if (!func_44(&Param0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_22(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar15 = func_56(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_107(Param0, &Var16, &Var19, &fVar22);
			if (!func_102(&(Global_2405047.f_44[iVar15 /*12*/]), Var16, Var19, fVar22))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_28(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_101(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2405047.f_2845 && uParam4->f_5)
	{
		if (iVar7 > 0)
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
				fVar0 = func_93(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_93(Param0, Global_2405047.f_2432, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2405047.f_481) && iVar7 < 4096)
			{
				Var24.f_2 = func_91(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_90(Var24);
			Global_2405047.f_2457.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 5)
		{
			if (iVar7 >= Global_2405047.f_2457.f_6[iVar23 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar33)
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
							fVar0 = func_93(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_93(Param0, Global_2405047.f_2432, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_17(Global_2405047.f_481) && iVar7 == Global_2405047.f_2457.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_91(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2405047.f_2457.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_89(Var24, iVar23);
							Global_2405047.f_2457.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2405047.f_2457.f_6[iVar23 /*9*/] || (iVar7 == Global_2405047.f_2457.f_6[iVar23 /*9*/] && fVar0 > Global_2405047.f_2457.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_89(Var24, iVar23);
						Global_2405047.f_2457.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar33)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_88(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_75(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_74(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_74(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2405047.f_2457.f_6[iVar23 /*9*/] || (iVar7 == Global_2405047.f_2457.f_6[iVar23 /*9*/] && fVar3 > Global_2405047.f_2457.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_89(Var24, iVar23);
						Global_2405047.f_2457.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_74(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_75(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_990(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x8CFC7D6E1DA5D304() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_78(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x1BE7B010C9B9841E(iVar11) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
					{
						if (!unk_0x1BE7B010C9B9841E(iVar11) == -1 || !func_58(unk_0x8CFC7D6E1DA5D304(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar11) || !bParam6)
					{
						if (func_77(iVar11))
						{
							Var5 = { func_76(iVar11) };
							if (!iVar11 == unk_0x8CFC7D6E1DA5D304())
							{
								Var8 = { unk_0x908A8EA6B5076D06(unk_0x6604E096142B4B55(iVar11)) };
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
							fVar1 = unk_0x15EE504466B7BBD3(Param0, Var5, 1);
							fVar2 = unk_0x15EE504466B7BBD3(Param0, Var8, 1);
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

Vector3 func_76(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

int func_77(int iParam0)
{
	if (unk_0xD84C4308F24CEEE7(unk_0x6604E096142B4B55(iParam0)) || Global_2422724[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_990(iParam0, 0, 1))
	{
		if (!func_86(iParam0))
		{
			if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				if (!unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_38(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_85(unk_0x1BE7B010C9B9841E(iParam0), unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
				{
					if (!func_38(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_79(iParam0))
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

int func_79(int iParam0)
{
	if (func_84(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	Global_2491936 = { func_83(iParam0) };
	if (unk_0x5AA8CFBEDE9B83FC(&Global_2491936))
	{
		return 1;
	}
	if (func_80(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_81())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	return -1;
}

int func_82(int iParam0)
{
	if (iParam0 != func_81())
	{
		return Global_1627460[iParam0 /*530*/].f_11;
	}
	return func_81();
}

struct<13> func_83(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

int func_84(int iParam0, int iParam1)
{
	if (unk_0xE906D9FB40E35957())
	{
		Global_2491936 = { func_83(iParam0) };
		Global_2491949 = { func_83(iParam1) };
		if (unk_0x9FDA5C5DFB3FE364(&Global_2491936))
		{
			if (unk_0x9FDA5C5DFB3FE364(&Global_2491949))
			{
				unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936);
				unk_0x4AEF279CFD4A57C6(&Global_2491901, 35, &Global_2491949);
				if (Global_2491866 == Global_2491901)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 0);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 1);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 2);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 4);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 5);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 6);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 8);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 9);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 10);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 12);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 13);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 14);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

float func_88(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_990(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				if (unk_0x6157232E032EBC56(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0));
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
		if (func_990(iVar1, 1, 1))
		{
			if (!func_144(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_77(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x1BE7B010C9B9841E(iVar1) != unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))) || unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x1BE7B010C9B9841E(iVar1) != iParam7 || unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iVar1), 0));
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

void func_89(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405047.f_2457.f_6[iParam9 /*9*/] };
	Global_2405047.f_2457.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 4)
	{
		func_89(Var0, iParam9 + 1);
	}
}

void func_90(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_72();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] < iVar10)
		{
			Global_2407912[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] == 0)
		{
			Global_2407912[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			if (Global_2407912[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407912[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407912[iVar12 /*9*/] = { Param0 };
	}
}

float func_91(struct<3> Param0)
{
	var uVar0;
	
	return func_92(Param0, &(Global_2405047.f_44), &uVar0);
}

float func_92(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405047.f_2691) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_93(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_74(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_75(Param0, 1, 0, 0, 1);
	fVar0 = func_74(fVar4, 0f, func_100(), func_98(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_96(Param0);
	fVar0 = func_74(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && !func_58(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_95(Param0, unk_0x8CFC7D6E1DA5D304(), 0);
	fVar0 = func_74(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_94(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_74(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_74(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_74(unk_0x2A488C176D52CCA5(Global_2405047.f_504, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_94(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x58B6E6434BE716EC(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x6A5C05E993D7D360(uVar3))
	{
		unk_0x7BB9D074A0EB3FD1(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x36E1A96E1D63ED91((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_95(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_990(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_990(iVar3, 0, 1))
				{
					if (unk_0x1BE7B010C9B9841E(iVar3) != unk_0x1BE7B010C9B9841E(iParam3) || (unk_0x1BE7B010C9B9841E(iVar3) == -1 && unk_0x1BE7B010C9B9841E(iParam3) == -1))
					{
						if (Global_2416788.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar2 /*3*/], Param0);
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
	}
	return fVar0;
}

float func_96(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x31F12808DC47A9E5(uVar6[iVar2]))
		{
			if (!unk_0x74C2FE037DFC8B4A(uVar6[iVar2], 0))
			{
				if (func_97(uVar6[iVar2]))
				{
					Var3 = { unk_0x761660F5CE986DC4(uVar6[iVar2], 1) };
					fVar1 = unk_0x15EE504466B7BBD3(Param0, Var3, 1);
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

int func_97(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x773D11D22FA84F6D(uParam0);
	switch (unk_0xB052D95D688673A4(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xB052D95D688673A4(iVar0, Global_1574714[unk_0x8CFC7D6E1DA5D304()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 0)
	{
		iVar1 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xB052D95D688673A4(iVar0, Global_1574425[iVar1]))
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

float func_98()
{
	if (func_99())
	{
		if ((unk_0xD8BB60C76D29E4BB(Global_2405047.f_44.f_67) || unk_0xB6353CAE3EBC0919(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
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

int func_99()
{
	if (Global_2405047.f_44.f_65 && !Global_2405047.f_44.f_300)
	{
		if (!func_86(unk_0x8CFC7D6E1DA5D304()))
		{
			return 1;
		}
	}
	return 0;
}

float func_100()
{
	if (func_99())
	{
		if ((unk_0xD8BB60C76D29E4BB(Global_2405047.f_44.f_67) || unk_0xB6353CAE3EBC0919(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
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

int func_101(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x5288FA47638BE8EE(Param0, fParam7)) || (fVar0 > 0f && unk_0xF00F53194FFC1443(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xE9168FF5AA33FC8E(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xE9168FF5AA33FC8E(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_106(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_105(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_103(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_103(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_104(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0xBD0ECFC2907D1982(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_104(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_25(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_105(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0xBD0ECFC2907D1982(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_106(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0xBD0ECFC2907D1982(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_107(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_27(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411026[iVar4])
	{
		if (func_26(Var1, &(Global_2409882[iVar4 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409882[iVar4 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411026[8])
	{
		if (func_26(Var1, &(Global_2409882[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409882[8 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409882[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409882[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_108(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405047.f_44.f_55)
	{
		if (unk_0xB79050CDE709F080(Global_2405047.f_44.f_56))
		{
			if (!unk_0x311945498D684788(Param0))
			{
				uVar0 = unk_0x8EFD19513210F032(Param0);
				if (unk_0xB79050CDE709F080(uVar0))
				{
					iVar1 = unk_0x2BD634124D2D902C(uVar0);
					if (!iVar1 == Global_2405047.f_44.f_57)
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

int func_109(struct<3> Param0)
{
	switch (Global_2405047.f_2453)
	{
		case 0:
			return func_147(Param0, Global_2405047.f_2432, Global_2405047.f_2435, 0, 0);
			break;
		
		case 1:
			return func_61(Param0, Global_2405047.f_2446, Global_2405047.f_2449, 0, 0);
			break;
		
		case 2:
			return unk_0xBD0ECFC2907D1982(Param0, Global_2405047.f_2446, Global_2405047.f_2449, Global_2405047.f_2452, 0, 1);
			break;
	}
	return 0;
}

int func_110(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xBD0ECFC2907D1982(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_111(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_42(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_113(iParam0))
			{
				if (Global_1595681[iParam0 /*678*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_113(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196 != 0;
}

int func_114(int iParam0)
{
	if (func_38(iParam0, 1))
	{
		if (Global_1595681[iParam0 /*678*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2405047.f_2586[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_116(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_45(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x3D81861E1A1652A9(0.01f, 360f);
			func_42(&Var1, Global_2405047.f_573, Global_2405047.f_576, 1036831949, 0, fVar4);
			if (func_49(Var1, &uVar0) || func_45(Var1))
			{
				Var1 = { *uParam0 };
				func_42(&Var1, Global_2405047.f_573, Global_2405047.f_576, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_117(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_990(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x15EE504466B7BBD3(func_118(unk_0x8CFC7D6E1DA5D304()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x6157232E032EBC56(Param0, fParam3))
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
		if (func_990(iVar1, 1, 1))
		{
			if (!func_144(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8CFC7D6E1DA5D304()))
				{
					if ((func_77(iVar1) || !bParam10) && !Global_2422724[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x1BE7B010C9B9841E(iVar1) != unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))) || unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x15EE504466B7BBD3(func_118(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1BE7B010C9B9841E(iVar1) != iParam8 || unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x15EE504466B7BBD3(func_118(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
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

Vector3 func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_120() && Global_1595681[iVar0 /*678*/].f_672) && !func_119(Global_1595681[iVar0 /*678*/].f_673))
	{
		return Global_1595681[iVar0 /*678*/].f_673;
	}
	return func_76(iParam0);
}

int func_119(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return Global_2447128.f_16;
}

int func_121(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_123(Param0, fParam3, iParam4, iParam5, 0) || func_122(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_122(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_29(Param0, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_990(iVar2, 0, 1) && func_990(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_990(iVar1, 0, 1) && func_990(iParam4, 0, 1))
				{
					if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_990(iVar1, 0, 1) && func_990(iParam4, 0, 1))
				{
					if (Global_2416788.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_76(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416788.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_990(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_76(iVar1), Param0) < 1f)
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

int func_124(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405047.f_3 = 0;
	if (!func_121(Param0, 0.5f, unk_0x8CFC7D6E1DA5D304(), 0, 0))
	{
		Global_2405047.f_3++;
		if (bParam5)
		{
			if (func_172(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_128(Param0, fParam12))
				{
					Global_2405047.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_172(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_128(Param0, fParam12))
				{
					Global_2405047.f_3++;
					if (!func_125(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405047.f_3++;
						if (!func_28(Param0, 1056964608))
						{
							Global_2405047.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (func_172(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			if (!func_128(Param0, fParam12))
			{
				Global_2405047.f_3++;
				if (!func_125(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405047.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
		}
	}
	return 0;
}

int func_125(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x8CFC7D6E1DA5D304() == iVar1)
		{
			if ((func_990(iVar1, 1, 1) && func_77(iVar1)) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (!func_127(unk_0x8CFC7D6E1DA5D304(), iVar1, -2, 0))
				{
					if (func_126(func_76(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_126(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xBD0ECFC2907D1982(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
	}
	return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
}

int func_128(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_990(iVar1, 1, 1) && func_77(iVar1)) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
		{
			if ((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && unk_0x1BE7B010C9B9841E(iVar1) == -1) && !func_58(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				return 0;
			}
			else if ((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && !unk_0x8CFC7D6E1DA5D304() == iVar1) || !func_127(unk_0x8CFC7D6E1DA5D304(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_76(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	if ((Global_2405047.f_481 == 9 || Global_2405047.f_481 == 9) || (Global_2405047.f_481 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_130(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam8 == 0)
		{
			if (func_990(iVar1, bParam4, bParam5))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam7 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_77(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && iParam9) && bParam6) && func_79(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								if (unk_0x15EE504466B7BBD3(func_76(iVar1), Param0, 1) < fParam3)
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

int func_131(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_990(iVar1, 1, 1))
			{
				if ((!func_144(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1)) && iVar1 != unk_0x8CFC7D6E1DA5D304())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x1BE7B010C9B9841E(iVar1) == iVar3)
					{
						if (unk_0x15EE504466B7BBD3(func_76(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
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

int func_132(int iParam0)
{
	if (((func_58(iParam0, 1) || func_135(iParam0)) || func_134(iParam0, 0)) || func_133(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (!func_990(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_35;
}

int func_134(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/] != -1;
	}
	return 0;
}

void func_136(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xB03A1684359C50A1(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359721[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_138(&Var2, uParam3, iVar0);
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
				Var6.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_137(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_137(var uParam0, var uParam1, int iParam2)
{
	Global_2412024 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_137(&Global_2412024, uParam1, iParam2 + 1);
	}
}

void func_138(var uParam0, var uParam1, int iParam2)
{
	Global_2412020 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_138(&Global_2412020, uParam1, iParam2 + 1);
	}
}

void func_139(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2405047.f_2228 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2228)
		{
			if (func_140(Global_2405047.f_2229[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405047.f_2229[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405047.f_2229[iVar0 /*4*/] };
					fVar4 = unk_0x7F21F40674579303(Var1.f_0, Var1.f_1);
				}
				func_73(Global_2405047.f_2229[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405047.f_2457++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405047.f_2845)
	{
		func_67(&(Global_2405047.f_2457.f_6[0 /*9*/]), &(Global_2405047.f_2457.f_6[1 /*9*/]), &(Global_2405047.f_2457.f_6[2 /*9*/]));
	}
}

int func_140(struct<3> Param0, var uParam3)
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

void func_141(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_62(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_142()
{
	return Global_1310987.f_4;
}

void func_143(var uParam0, var uParam1)
{
	func_179();
	func_171(uParam0, uParam1);
}

bool func_144(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_145(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_146();
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

int func_146()
{
	return Global_1312736;
}

bool func_147(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_148(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405047.f_1720 > 0 && func_167(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_149(uParam0, uParam1, uParam2);
	}
}

void func_149(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
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
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_41(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_166(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
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
	Global_2412034.f_162 = 0;
	Global_2412034.f_163 = 0;
	Global_2412034.f_164 = -99;
	Global_2412034.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412034[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412034.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_34(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x58B6E6434BE716EC(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x6A5C05E993D7D360(iVar8))
		{
			unk_0x7BB9D074A0EB3FD1(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412034.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412034.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC73BA4A62D56A649(iVar8)) || unk_0xFBEC931614CC67D6(iVar8))
			{
				unk_0xB41CD0F3D2BE7B22(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_116(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_165(Var1))
									{
										Var1 = { func_163(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_28(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_162(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_166(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_158(Var1, fVar4, uParam2->f_34, unk_0x8CFC7D6E1DA5D304(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_41(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_157(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_172(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_172(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_155(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_154(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412034.f_162)
																										{
																											Global_2412034[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412034.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412034.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412034.f_162 == 0)
																									{
																										Global_2412034[0 /*3*/] = { Var1 };
																										Global_2412034.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412034.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412034[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_153(Var1, fVar4, iVar16);
																													iVar16 = Global_2412034.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412034.f_162++;
																									if (Global_2412034.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412034.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412034[Global_2412034.f_162 /*3*/] = { Var1 };
																									Global_2412034.f_121[Global_2412034.f_162] = fVar4;
																									Global_2412034.f_162++;
																									if (func_162(Var1, uParam2))
																									{
																										Global_2412034.f_163++;
																									}
																									if (Global_2412034.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412034.f_162 == 40)
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
																							*uParam1 = fVar4;
																							return;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
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
				if (Global_2412034.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412034[0 /*3*/] };
						*uParam1 = Global_2412034.f_121[0];
						return;
					}
					else
					{
						if (Global_2412034.f_163 > 0 && !Global_2412034.f_163 == Global_2412034.f_162)
						{
							func_151(0, uParam2);
						}
						iVar26 = unk_0x61E9B3BFA06B017B(0, Global_2412034.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412034[0 /*3*/] };
						uVar30 = Global_2412034.f_121[0];
						Global_2412034[0 /*3*/] = { Global_2412034[iVar26 /*3*/] };
						Global_2412034.f_121[0] = Global_2412034.f_121[iVar26];
						Global_2412034[iVar26 /*3*/] = { Var27 };
						Global_2412034.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412034[0 /*3*/] };
						*uParam1 = Global_2412034.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_149(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x61E9B3BFA06B017B((1 + iVar15), (40 + iVar15));
						unk_0xEA1F20FEC8701002(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_163(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_41(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_166(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_149(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
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
				func_149(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_150(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412034.f_164 = iVar8;
	}
}

void func_150(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_121(*(uParam0[iVar2 /*4*/]), 5f, unk_0x8CFC7D6E1DA5D304(), 0, 0))
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

void func_151(int iParam0, var uParam1)
{
	if (!func_162(Global_2412034[iParam0 /*3*/], uParam1))
	{
		Global_2412034.f_162 = (Global_2412034.f_162 - 1);
		func_152(iParam0);
		if (Global_2412034.f_162 > Global_2412034.f_163)
		{
			func_151(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_151(iParam0 + 1, uParam1);
	}
}

void func_152(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412034[iParam0 /*3*/] = { Global_2412034[iParam0 + 1 /*3*/] };
			Global_2412034.f_121[iParam0] = Global_2412034.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_153(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412034[iParam4 /*3*/] };
	uVar3 = Global_2412034.f_121[iParam4];
	Global_2412034[iParam4 /*3*/] = { Param0 };
	Global_2412034.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412034.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_153(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_154(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_78(iVar5))
		{
			Var1 = { func_76(iVar5) };
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

int func_155(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam9 == 0)
		{
			if (func_990(iVar1, bParam5, bParam6))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam8 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_77(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && iParam10) && bParam7) && func_79(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iVar1), 0))
								{
									iVar3 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iVar1), 0);
									if (unk_0x31F12808DC47A9E5(iVar3) && !unk_0x74C2FE037DFC8B4A(iVar3, 0))
									{
										iVar4 = unk_0x4F69FBD64CDF125B(iVar3);
										Var5 = { unk_0x761660F5CE986DC4(iVar3, 0) };
										fVar8 = unk_0x93FDA3BF59E7B77F(iVar3);
										if (func_156(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_29(func_76(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_156(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_29(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_31(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_36(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_36(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x36E1A96E1D63ED91((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_36(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_29(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_156(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x048A9E2FC8C538E3(Param0, 30f, 0, iVar0);
	if (unk_0x31F12808DC47A9E5(iVar1) && !unk_0x74C2FE037DFC8B4A(iVar1, 0))
	{
		iVar2 = unk_0x4F69FBD64CDF125B(iVar1);
		Var3 = { unk_0x761660F5CE986DC4(iVar1, 0) };
		fVar6 = unk_0x93FDA3BF59E7B77F(iVar1);
		if (func_156(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x048A9E2FC8C538E3(Param0, 30f, 0, iVar0);
	if (unk_0x31F12808DC47A9E5(iVar1) && !unk_0x74C2FE037DFC8B4A(iVar1, 0))
	{
		iVar2 = unk_0x4F69FBD64CDF125B(iVar1);
		Var3 = { unk_0x761660F5CE986DC4(iVar1, 0) };
		fVar6 = unk_0x93FDA3BF59E7B77F(iVar1);
		if (func_156(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_161(Param0, fParam3, iParam4, iParam5, iParam6) || func_159(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_160(Param0, iParam4, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_156(Param0, fParam3, iParam4, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_990(iVar2, 0, 1) && func_990(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_160(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_37(iParam3, 1008981770);
	fVar1 = func_37(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_161(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_990(iVar1, 0, 1) && func_990(iParam5, 0, 1))
			{
				if (Global_2416788.f_261[iVar0])
				{
					if (func_29(Global_2416788.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_29(func_76(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416788.f_261[iVar0])
			{
				if (func_29(Global_2416788.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_990(iVar1, 0, 0))
			{
				if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
				{
					if (func_29(func_76(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_162(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_147(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_61(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xBD0ECFC2907D1982(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_163(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar17;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_164(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xB41CD0F3D2BE7B22(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x54B2CE59D6C4315A(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
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
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_31(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				if (fVar20 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar20 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_164(Param0, *fParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xA89DC5E1C1F12DBF(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x6FB8A2C3C6531976(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_31(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				Var27 = { Var27 * FtoV((fVar20 * 0.5f)) };
				Var24 = { Var24 - Var27 };
				Var21 = { Param0 + Var24 };
			}
			Var27 = { Var0 - Var21 };
			Var0 = { Var21 };
		}
	}
	return Var0;
}

int func_164(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_36(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_24(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_27(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411748[iVar1])
	{
		if (func_26(Param0, &(Global_2411045[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411748[8])
	{
		if (func_26(Param0, &(Global_2411045[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_166(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_147(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_61(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xBD0ECFC2907D1982(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_48(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2405047.f_1720 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_41(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_166(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412034.f_162 = 0;
		Global_2412034.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412034[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412034.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_168(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1720)
		{
			iVar1 = Global_2405047.f_2126[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405047.f_1721[iVar1 /*4*/] };
				fVar5 = Global_2405047.f_1721[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_158(Var2, fVar5, uParam2->f_34, unk_0x8CFC7D6E1DA5D304(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_41(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_157(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_172(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_172(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_155(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_154(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412034.f_162)
															{
																Global_2412034[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412034.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412034.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412034.f_162 == 0)
														{
															Global_2412034[0 /*3*/] = { Var2 };
															Global_2412034.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412034.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412034[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_153(Var2, fVar5, iVar6);
																		iVar6 = Global_2412034.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412034.f_162++;
														if (Global_2412034.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1720;
															}
															else if (Global_2412034.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1720;
															}
														}
													}
													else
													{
														Global_2412034[Global_2412034.f_162 /*3*/] = { Var2 };
														Global_2412034.f_121[Global_2412034.f_162] = fVar5;
														Global_2412034.f_162++;
														if (Global_2412034.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1720;
															}
															else if (Global_2412034.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1720;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
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
		if (Global_2412034.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412034[0 /*3*/] };
				*uParam1 = Global_2412034.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412034.f_163 > 0 && !Global_2412034.f_163 == Global_2412034.f_162)
				{
					func_151(0, uParam2);
				}
				iVar14 = unk_0x61E9B3BFA06B017B(0, Global_2412034.f_162);
				Var15 = { Global_2412034[0 /*3*/] };
				uVar18 = Global_2412034.f_121[0];
				Global_2412034[0 /*3*/] = { Global_2412034[iVar14 /*3*/] };
				Global_2412034.f_121[0] = Global_2412034.f_121[iVar14];
				Global_2412034[iVar14 /*3*/] = { Var15 };
				Global_2412034.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412034[0 /*3*/] };
				*uParam1 = Global_2412034.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_167(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_149(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_168(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1720)
	{
		uVar1 = func_169(Param0, fVar0, &fVar0);
		Global_2405047.f_2126[iVar2] = uVar1;
		iVar2++;
	}
}

int func_169(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1720)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2405047.f_1721[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_170(int iParam0)
{
	return iParam0 == 50;
}

void func_171(var uParam0, var uParam1)
{
	unk_0x4F71E350489BC03F(uParam0, uParam1, 0.1f);
	Global_2405047.f_2440 = unk_0xBCF9D020FA9C313D();
	Global_2405047.f_2438 = 1;
	Global_2405047.f_2441 = unk_0xE92FCF3C05C2EF1D();
}

int func_172(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x5288FA47638BE8EE(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF00F53194FFC1443(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF00F53194FFC1443(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE9168FF5AA33FC8E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xA5E527B690D287FC(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_130(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_117(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

void func_173()
{
	func_178();
	func_177();
	func_176();
	func_175();
	func_174();
}

void func_174()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407912[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_175()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405047.f_2457.f_85[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_176()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405047.f_2457.f_52[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_177()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		Global_2405047.f_2457.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_178()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405047.f_2457 = { Var0 };
}

void func_179()
{
	if (Global_2405047.f_2438)
	{
		if (unk_0xBCF9D020FA9C313D() == Global_2405047.f_2440)
		{
			unk_0x7F2E59ADFBF9E060();
		}
		else
		{
			unk_0x7F2E59ADFBF9E060();
		}
		Global_2405047.f_2438 = 0;
	}
}

int func_180(bool bParam0)
{
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_181()
{
	return Local_194.f_38[Local_194.f_36 /*3*/];
}

void func_182()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_194.f_0 != 4)
	{
		iLocal_449 = 0;
		while (iLocal_449 < unk_0xF02902C16AF3CA92())
		{
			if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iLocal_449)))
			{
				iVar2 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iLocal_449));
				if (func_990(iVar2, 1, 1))
				{
				}
				if (!unk_0xB03A1684359C50A1(Local_194.f_1, 1))
				{
					if (unk_0xB03A1684359C50A1(Local_254[iLocal_449 /*6*/].f_1, 2))
					{
						if (Local_194.f_37 != iVar2)
						{
							Local_194.f_37 = iVar2;
						}
					}
				}
				if (!unk_0xB03A1684359C50A1(Local_194.f_1, 1))
				{
					if (Local_254[iLocal_449 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_254[iLocal_449 /*6*/].f_5);
					}
				}
				if (!unk_0xB03A1684359C50A1(Local_194.f_1, 4))
				{
					if (unk_0xB03A1684359C50A1(Local_254[iLocal_449 /*6*/].f_1, 5))
					{
						unk_0xD2A9C3F486236CC5(&(Local_194.f_1), 4);
						Local_194.f_35 = iVar2;
					}
				}
				if (!unk_0xB03A1684359C50A1(Local_194.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0xB03A1684359C50A1(Local_194.f_1, 1) || unk_0xB03A1684359C50A1(Local_194.f_1, 3)) || unk_0xB03A1684359C50A1(Local_194.f_1, 4)) || unk_0xB03A1684359C50A1(Local_194.f_1, 5))
						{
							if (!unk_0xB03A1684359C50A1(Local_254[iLocal_449 /*6*/].f_1, 4))
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
			else if (!unk_0xB03A1684359C50A1(Local_194.f_1, 5))
			{
				if (Local_194.f_33 > -1)
				{
					if (iLocal_449 == Local_194.f_33)
					{
						unk_0xD2A9C3F486236CC5(&(Local_194.f_1), 5);
					}
				}
			}
			iLocal_449++;
		}
		if (!unk_0xB03A1684359C50A1(Local_194.f_1, 1))
		{
			iVar0 = (iVar0 + Local_194.f_6);
			if (iVar0 >= func_183())
			{
				unk_0xD2A9C3F486236CC5(&(Local_194.f_1), 1);
			}
			if (Local_194.f_5 != iVar0)
			{
				if (Local_194.f_5 < iVar0)
				{
					Local_194.f_5 = iVar0;
				}
				else if (Local_194.f_6 != (Local_194.f_5 - iVar0))
				{
					Local_194.f_6 = (Local_194.f_5 - iVar0);
				}
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_194.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0xD2A9C3F486236CC5(&(Local_194.f_1), 2);
			}
		}
	}
}

int func_183()
{
	return Global_262145.f_11663;
}

int func_184()
{
	int iVar0;
	int iVar1;
	
	if (func_188() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_187(Local_194.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x61E9B3BFA06B017B(0, 20);
				if (func_185(iVar1))
				{
					Local_194.f_38[iVar0 /*3*/] = { Local_760[iVar1 /*3*/] };
					Local_760[iVar1 /*3*/] = { 0f, 0f, 0f };
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
		if (func_187(Local_194.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_185(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_187(Local_760[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_187(Local_194.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0x15EE504466B7BBD3(Local_194.f_38[iVar0 /*3*/], Local_760[iParam0 /*3*/], 1);
				if (fVar1 < func_186())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_186()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_11664);
}

bool func_187(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_188()
{
	int iVar0;
	
	if (Local_194.f_48 != -1)
	{
		return Local_194.f_48;
	}
	iVar0 = unk_0x61E9B3BFA06B017B(0, 4);
	if (!func_190(iVar0))
	{
		Local_194.f_48 = iVar0;
		func_189();
	}
	return Local_194.f_48;
}

void func_189()
{
	switch (Local_194.f_48)
	{
		case 0:
			Local_760[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			Local_760[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			Local_760[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_760[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_760[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_760[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_760[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_760[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			Local_760[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_760[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			Local_760[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_760[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_760[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			Local_760[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			Local_760[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_760[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_760[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			Local_760[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_760[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_760[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			Local_760[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			Local_760[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			Local_760[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_760[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_760[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			Local_760[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			Local_760[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			Local_760[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_760[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_760[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_760[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_760[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			Local_760[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_760[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_760[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_760[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_760[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			Local_760[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_760[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			Local_760[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			Local_760[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			Local_760[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			Local_760[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			Local_760[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_760[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_760[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			Local_760[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			Local_760[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			Local_760[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_760[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			Local_760[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			Local_760[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			Local_760[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			Local_760[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			Local_760[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			Local_760[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			Local_760[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			Local_760[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_760[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			Local_760[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			Local_760[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			Local_760[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			Local_760[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_760[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			Local_760[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			Local_760[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			Local_760[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			Local_760[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_760[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			Local_760[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			Local_760[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			Local_760[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_760[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			Local_760[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			Local_760[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			Local_760[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_760[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			Local_760[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			Local_760[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			Local_760[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11606;
		
		case 1:
			return Global_262145.f_11607;
		
		case 2:
			return Global_262145.f_11605;
		
		case 3:
			return Global_262145.f_11604;
		
		default:
	}
	return 0;
}

int func_191(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_192(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xF67B871D7588B9D9())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_193()
{
	func_195();
	if (unk_0xB03A1684359C50A1(iLocal_448, 9))
	{
		return;
	}
	if (func_896())
	{
		if (!unk_0xB03A1684359C50A1(iLocal_448, 0))
		{
			unk_0x9FC66CAE22E74E58("DisableFlightMusic", 1);
			unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 1);
			unk_0xD2A9C3F486236CC5(&iLocal_448, 0);
		}
		if (!unk_0xB03A1684359C50A1(iLocal_448, 1))
		{
			if (unk_0x9BEA833CAF67289C("BG_SIGHTSEER_START"))
			{
				unk_0xD2A9C3F486236CC5(&iLocal_448, 1);
			}
		}
		if (unk_0xB03A1684359C50A1(iLocal_448, 1))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_448, 3))
			{
				if (Local_194.f_5 == 1)
				{
					if (unk_0x9BEA833CAF67289C("BG_SIGHTSEER_MID"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_448, 3);
					}
				}
			}
		}
		if (unk_0xB03A1684359C50A1(iLocal_448, 3))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_448, 4))
			{
				if (Local_194.f_5 == 2)
				{
					if (unk_0x9BEA833CAF67289C("BG_SIGHTSEER_FINAL"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_448, 4);
					}
				}
			}
		}
		if (unk_0xB03A1684359C50A1(Local_194.f_1, 1) || unk_0xB03A1684359C50A1(Local_194.f_1, 4))
		{
			if (unk_0xB03A1684359C50A1(iLocal_448, 4))
			{
				if (!unk_0xB03A1684359C50A1(iLocal_448, 6))
				{
					if (unk_0x9BEA833CAF67289C("BG_SIGHTSEER_STOP"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_448, 6);
						unk_0xD2A9C3F486236CC5(&iLocal_448, 2);
						unk_0x9FC66CAE22E74E58("DisableFlightMusic", 0);
						unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_398())
	{
		if (func_194(unk_0x8CFC7D6E1DA5D304(), 20))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_448, 0))
			{
				unk_0x9FC66CAE22E74E58("DisableFlightMusic", 1);
				unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 1);
				unk_0xD2A9C3F486236CC5(&iLocal_448, 0);
			}
			if (!unk_0xB03A1684359C50A1(iLocal_448, 7))
			{
				if (unk_0x9BEA833CAF67289C("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0xD2A9C3F486236CC5(&iLocal_448, 7);
				}
			}
			if (unk_0xB03A1684359C50A1(Local_194.f_1, 1) || unk_0xB03A1684359C50A1(Local_194.f_1, 4))
			{
				if (unk_0xB03A1684359C50A1(iLocal_448, 7))
				{
					if (!unk_0xB03A1684359C50A1(iLocal_448, 6))
					{
						if (unk_0x9BEA833CAF67289C("BG_SIGHTSEER_STOP"))
						{
							unk_0xD2A9C3F486236CC5(&iLocal_448, 6);
							unk_0xD2A9C3F486236CC5(&iLocal_448, 2);
							unk_0x9FC66CAE22E74E58("DisableFlightMusic", 0);
							unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_194(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_11.f_4, iParam1);
}

void func_195()
{
	if (unk_0xB03A1684359C50A1(iLocal_448, 8))
	{
		if (unk_0xB03A1684359C50A1(iLocal_448, 9))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_448, 10))
			{
				if (unk_0xB03A1684359C50A1(iLocal_448, 11))
				{
					if (!unk_0xB03A1684359C50A1(iLocal_448, 12))
					{
						unk_0x9A70D1B91A853FDD(1);
						unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xB03A1684359C50A1(iLocal_448, 15))
				{
					if (unk_0x9BEA833CAF67289C("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_448, 15);
					}
				}
				if (unk_0xB03A1684359C50A1(iLocal_448, 15))
				{
					if (!unk_0xB03A1684359C50A1(iLocal_448, 13))
					{
						if (unk_0x9BEA833CAF67289C("APT_FADE_IN_RADIO"))
						{
							unk_0xD2A9C3F486236CC5(&iLocal_448, 13);
						}
					}
					if (unk_0xB03A1684359C50A1(iLocal_448, 13))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_448, 10);
					}
				}
			}
		}
	}
}

void func_196()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_896() && !func_398())
	{
		return;
	}
	if (Local_194.f_34 > -1)
	{
		iVar3 = unk_0x3479F6F64A48251C(Local_194.f_34);
		if (unk_0x4AF13BCD120BCDBC(iVar3))
		{
			Var0 = { unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iVar3), 0) };
		}
	}
	if (!func_187(Var0, 0f, 0f, 0f, 0))
	{
		func_197(142, Var0, &uLocal_828, 1140457472, 1144750080, 0);
	}
}

void func_197(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_135(unk_0x8CFC7D6E1DA5D304()) && !func_248(unk_0x8CFC7D6E1DA5D304())) && !unk_0xB03A1684359C50A1(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1, 8)) && (func_247(unk_0x8CFC7D6E1DA5D304()) || func_246(unk_0x8CFC7D6E1DA5D304())))
	{
		return;
	}
	Global_1806998 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Param1);
	func_242(iParam0, fVar0);
	if (unk_0xC83C302702976DCB() && unk_0xAF5EF4AF56129D79() == 15)
	{
		if (func_241(unk_0x8CFC7D6E1DA5D304()) || func_239(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0x9C1773823317C064(1344549371))
			{
				unk_0xE155890DEF2A15C4(1344549371);
			}
		}
		else if (unk_0x9C1773823317C064(1344549371))
		{
			unk_0x96266716A280E8D7(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_238(unk_0x8CFC7D6E1DA5D304(), 21))
		{
			func_237(Param1, 1, 0);
		}
		if (!*uParam4 && func_990(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			*uParam4 = 1;
			if (func_236(iParam0))
			{
				unk_0x8BB3FA32294185BB(func_235(iParam0));
				if (func_234(iParam0, -1))
				{
					unk_0x945880A1F9FE9E4F(0);
					if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
					{
						unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 1);
						unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 1);
					}
					unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 0);
				}
			}
			if (func_233(iParam0))
			{
				fVar1 = func_232(iParam0);
				if (fVar1 != 1f)
				{
					func_229(fVar1);
					unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_228(iParam0) && func_241(unk_0x8CFC7D6E1DA5D304()))
				{
					func_226(1);
					func_225(2);
				}
			}
			func_224(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_194(unk_0x8CFC7D6E1DA5D304(), 19))
			{
				func_223(19);
			}
		}
		if (*uParam4 && func_990(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			*uParam4 = 0;
			if (func_236(iParam0))
			{
				if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 0))
				{
					unk_0x8BB3FA32294185BB(1f);
					unk_0x945880A1F9FE9E4F(5);
					unk_0x62148293B793073B(&(Global_1806998.f_3), 0);
				}
			}
			if (func_233(iParam0))
			{
				func_222();
				unk_0x62148293B793073B(&(Global_1806998.f_3), 1);
			}
			if (iParam7 && !func_135(unk_0x8CFC7D6E1DA5D304()))
			{
				if (func_221(unk_0x8CFC7D6E1DA5D304()) != 152)
				{
					func_200();
				}
			}
			if (func_199(2))
			{
				func_226(0);
				func_198(2);
			}
		}
	}
}

void func_198(int iParam0)
{
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_34), iParam0);
}

bool func_199(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_34, iParam0);
}

void func_200()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_24), &Global_2409093, 2);
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_26), &Global_2409095, 18);
	func_219();
	func_203(1, 1, 0);
	func_201();
}

void func_201()
{
	func_202(0, 0);
}

void func_202(int iParam0, int iParam1)
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_203(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x5AE102D61A343DFA(&(Global_2405047.f_44), &Global_2409113, 316);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409113 };
		Global_2405047.f_44.f_49 = { Global_2409113.f_49 };
		Global_2405047.f_44.f_52 = Global_2409113.f_52;
		Global_2405047.f_44.f_53 = Global_2409113.f_53;
	}
	if (bParam0)
	{
		func_218();
	}
	if (!bParam2)
	{
		func_206(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_205(0);
	func_204();
}

void func_204()
{
	struct<6> Var0;
	
	if (Global_2405047.f_482.f_1 == unk_0xBCF9D020FA9C313D())
	{
		Global_2405047.f_482 = { Var0 };
	}
}

void func_205(bool bParam0)
{
	if (bParam0)
	{
		Global_2405047.f_685 = 0;
	}
	else
	{
		Global_2405047.f_685 = 1;
	}
}

void func_206(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_217())
		{
			func_216();
		}
		Global_2405047.f_686.f_515 = unk_0xBCF9D020FA9C313D();
		Global_2405047.f_686.f_504 = iParam1;
		Global_2405047.f_686.f_505 = iParam2;
		Global_2405047.f_686.f_506 = iParam10;
		func_214();
		func_210(8, 0, 0, 0, 0);
		Global_2405047.f_686.f_507 = iParam11;
		Global_2405047.f_686.f_510 = iParam3;
		Global_2405047.f_686.f_511 = iParam4;
		Global_2405047.f_686.f_508 = iParam5;
		Global_2405047.f_686.f_509 = iParam6;
		Global_2405047.f_686.f_512 = iParam7;
		Global_2405047.f_686.f_513 = iParam8;
		Global_2405047.f_686.f_514 = iParam9;
		Global_2405047.f_1719 = 1;
	}
	else
	{
		func_207();
	}
}

void func_207()
{
	if (func_217() && !func_209())
	{
		func_216();
	}
	if (func_209())
	{
		func_208();
	}
	else
	{
		func_214();
		func_210(0, 0, 0, 0, 0);
		Global_2405047.f_1719 = 0;
		Global_2405047.f_1718 = 0;
	}
}

void func_208()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_686), &(Global_2405047.f_1202), 516);
	Global_2405047.f_482 = { Global_2405047.f_488 };
	if (unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515)
	{
		Global_2405047.f_1718 = 0;
	}
}

int func_209()
{
	if ((Global_2405047.f_1718 && !unk_0xBCF9D020FA9C313D() == Global_2405047.f_1202.f_515) && unk_0x19B3A29FD53C54A6(Global_2405047.f_1202.f_515))
	{
		return 1;
	}
	return 0;
}

void func_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436169.f_1777.f_690.f_16 != func_81())
	{
		if (unk_0xB03A1684359C50A1(Global_2422724[Global_2436169.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_211())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412202 = 0;
	}
	Global_2405047.f_482 = iParam0;
	Global_2405047.f_482.f_1 = unk_0xBCF9D020FA9C313D();
	Global_2405047.f_482.f_2 = iParam1;
	Global_2405047.f_482.f_3 = iParam2;
	Global_2405047.f_482.f_4 = iParam3;
	Global_2405047.f_482.f_5 = iParam4;
}

int func_211()
{
	if (((func_221(unk_0x8CFC7D6E1DA5D304()) == 229 || func_221(unk_0x8CFC7D6E1DA5D304()) == 191) || func_213()) || func_212())
	{
		return 0;
	}
	return 1;
}

var func_212()
{
	return Global_1574303;
}

int func_213()
{
	if (Global_1646129 == 6)
	{
		return 1;
	}
	return 0;
}

void func_214()
{
	if (func_217() && !func_209())
	{
		func_216();
	}
	func_215();
	Global_2405047.f_686 = 0;
}

void func_215()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_686.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_216()
{
	if (func_209())
	{
		if (Global_2405047.f_686.f_515 == Global_2405047.f_1202.f_515)
		{
			return;
		}
	}
	if (!unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515)
	{
		unk_0x5AE102D61A343DFA(&(Global_2405047.f_1202), &(Global_2405047.f_686), 516);
		Global_2405047.f_488 = { Global_2405047.f_482 };
		Global_2405047.f_1718 = 1;
	}
}

int func_217()
{
	if ((Global_2405047.f_1719 && !unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515) && unk_0x19B3A29FD53C54A6(Global_2405047.f_686.f_515))
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_360), &Global_2409429, 121);
}

void func_219()
{
	func_220();
	Global_2405047.f_2228 = 0;
}

void func_220()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2229[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_221(int iParam0)
{
	if (func_134(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

void func_222()
{
	if (unk_0x19B3A29FD53C54A6(Global_2512581.f_4874))
	{
		if (!Global_2512581.f_4874 == unk_0xBCF9D020FA9C313D() && Global_2512581.f_4873 < 1f)
		{
			return;
		}
	}
	Global_2512581.f_4874 = -1;
	Global_2512581.f_4873 = 1f;
}

void func_223(int iParam0)
{
	unk_0x62148293B793073B(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_4), iParam0);
}

void func_224(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_4), iParam0);
}

void func_225(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4878.f_34), iParam0);
}

void func_226(int iParam0)
{
	if (func_227() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_227()
{
	if ((((Global_979885 != -1 && Global_979885 != 33) && Global_979885 != 35) && Global_979885 != 37) && Global_979885 != 21)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_229(float fParam0)
{
	float fVar0;
	
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_230())
	{
		return;
	}
	fVar0 = (Global_2512581.f_4873 - fParam0);
	if (unk_0x19B3A29FD53C54A6(Global_2512581.f_4874))
	{
		if (!Global_2512581.f_4874 == unk_0xBCF9D020FA9C313D() && unk_0x36E1A96E1D63ED91(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512581.f_4873 = fParam0;
	Global_2512581.f_4874 = unk_0xBCF9D020FA9C313D();
}

int func_230()
{
	switch (func_231())
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

int func_231()
{
	return Global_25233;
}

float func_232(int iParam0)
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
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	switch (iParam0)
	{
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
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_235(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_237(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405047.f_44.f_49 = { Param0 };
	Global_2405047.f_44.f_52 = iParam3;
	Global_2405047.f_44.f_53 = iParam4;
}

bool func_238(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_223, iParam1);
}

int func_239(int iParam0)
{
	if (func_240(iParam0))
	{
		if (func_241(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_81())
		{
			return Global_1627460[iParam0 /*530*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_194(iParam0, 9);
	}
	return 0;
}

void func_242(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_245(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_243();
	}
}

void func_243()
{
	if (!func_244(unk_0x8CFC7D6E1DA5D304()))
	{
		func_224(25);
	}
}

bool func_244(int iParam0)
{
	return func_194(iParam0, 25);
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11681;
		
		case 142:
			return Global_262145.f_11669;
		
		case 157:
			return Global_262145.f_11636;
		
		case 159:
			return Global_262145.f_11619;
		
		case 162:
			return Global_262145.f_11730;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 0);
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 7);
	}
	return 0;
}

bool func_248(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 2);
}

void func_249(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	struct<2> Var57;
	
	if (func_388(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_386() || iParam2 == 26)
	{
		if (func_334(uParam1, iParam2, uParam3, Global_1574119, 0, func_384()))
		{
			func_333(1);
			if ((!func_331() && !func_329()) || unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1))
			{
				if (func_328())
				{
					func_325();
				}
				else
				{
					unk_0x09EF2EB55114981C(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_324(1);
						Global_1574119 = 0;
						iVar54 = -1;
						if (Global_1574304 != 1)
						{
							func_323(uParam1);
							if (unk_0xB03A1684359C50A1(uParam3->f_33, 7))
							{
								unk_0x62148293B793073B(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 26)
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
								if (func_990(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar35 = unk_0x3479F6F64A48251C(iVar52);
									if (!func_144(iVar35, 0))
									{
										if ((func_322(iVar35) || Global_2422724[iVar35 /*420*/].f_251 != -1) || func_113(iVar35))
										{
											iVar44 = iVar35;
											if (func_240(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_319(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_316(unk_0x8CFC7D6E1DA5D304(), 0) && func_221(unk_0x8CFC7D6E1DA5D304()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_314())
							{
								if (func_990(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar35 = unk_0x3479F6F64A48251C(iVar52);
								}
								else
								{
									iVar35 = func_81();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_313(iVar35) && func_309(iVar35, iParam2)) && func_990(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1595681[iVar44 /*678*/].f_211.f_6;
								Var38 = { func_304(iVar35) };
								if (iVar35 == unk_0x8CFC7D6E1DA5D304())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3E8AA4B2B7764D27(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_83(iVar35) };
								iVar37 = func_298(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x18EA682CBBDF668A(iVar37);
								}
								Global_1574119++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_314())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_293(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_292(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_286(iVar35, 0);
								if (bVar34)
								{
									if (func_285(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_284(iParam5))
								{
									func_283(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_283(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xD2A9C3F486236CC5(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x3479F6F64A48251C(iVar52);
							if (func_990(iVar35, 0, 1) && !unk_0xB03A1684359C50A1(iVar49, iVar35))
							{
								iVar35 = unk_0x3479F6F64A48251C(iVar52);
							}
							else
							{
								iVar35 = func_81();
							}
							if (func_313(iVar35))
							{
								if (func_990(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1595681[iVar44 /*678*/].f_211.f_6;
									Var38 = { func_304(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_83(iVar35) };
									iVar37 = func_298(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x18EA682CBBDF668A(iVar37);
									}
									Global_1574119++;
									iVar51 = func_286(iVar35, 1);
									if (bVar34)
									{
										if (func_285(iVar35, 1))
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
									func_263(iVar35, unk_0x3E8AA4B2B7764D27(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xB03A1684359C50A1(uParam3->f_33, 11))
						{
							func_260(uParam3, uParam1);
						}
						func_259(&(uParam3->f_21));
						func_258();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xB03A1684359C50A1(uParam3->f_33, 7))
						{
							func_257(uParam3, uParam1);
							func_256(uParam1, 0, 1);
							unk_0xD2A9C3F486236CC5(&(uParam3->f_33), 7);
						}
						func_257(uParam3, uParam1);
						if (!unk_0xB03A1684359C50A1(uParam3->f_33, 11))
						{
							unk_0xD2A9C3F486236CC5(&(uParam3->f_33), 11);
						}
						if (func_252(uParam3))
						{
							Global_1574304 = 1;
						}
						func_250(uParam3);
						if (Global_1574304 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574304 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x5C716BBF766E1C70(*uParam1))
					{
						unk_0x31B38BBC4423BEAF(7);
						unk_0xC1C40A3B8772D9BA(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x31B38BBC4423BEAF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_258();
			func_324(0);
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 7))
			{
				unk_0x62148293B793073B(&(uParam3->f_33), 7);
			}
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 10))
			{
				unk_0x62148293B793073B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x3E233EDF605C23C0();
}

void func_250(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_259(&(uParam0->f_21));
		func_251(0);
	}
}

void func_251(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574304 != 2)
		{
			Global_1574304 = 2;
		}
	}
	else
	{
		switch (Global_1574304)
		{
			case 0:
				Global_1574304 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_252(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x3479F6F64A48251C(uParam0->f_37);
	if (iVar15 != func_81() && func_990(iVar15, 0, 1))
	{
		Var2 = { func_83(iVar15) };
		iVar1 = func_255(uParam0, uParam0->f_37);
		if (func_254(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (unk_0x81EF0A52B5429304(&Var2))
						{
							iVar16 = 1;
							func_253(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x09D29DA94049CC42(&Var2))
					{
						iVar16 = 1;
						func_253(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (!unk_0x81EF0A52B5429304(&Var2))
						{
							iVar16 = 1;
							func_253(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_253(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (!unk_0x09D29DA94049CC42(&Var2))
						{
							iVar16 = 1;
							func_253(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x09D29DA94049CC42(&Var2))
					{
						iVar16 = 1;
						func_253(uParam0, iVar0, 0);
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

void func_253(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

var func_255(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_256(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x76F4FB5EFF5BDED5(*uParam0, "COLLAPSE"))
	{
		unk_0xD6F1BD29497A51C8(iParam1);
		unk_0xE2B30EB9B14EEAB2();
	}
	if (iParam2 == 1)
	{
		if (unk_0x76F4FB5EFF5BDED5(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

void func_257(var uParam0, var uParam1)
{
	if (!unk_0xB03A1684359C50A1(uParam0->f_33, 10))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam1, "SET_HIGHLIGHT");
		unk_0x22DD5585E00B80C3(uParam0->f_35);
		unk_0xE2B30EB9B14EEAB2();
		unk_0xD2A9C3F486236CC5(&(uParam0->f_33), 10);
	}
}

void func_258()
{
	if (Global_1574304 != 0)
	{
		Global_1574304 = 0;
	}
}

void func_259(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_260(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3479F6F64A48251C(iVar0);
		if (iVar2 != func_81())
		{
			if (func_990(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_262(uParam0->f_38[iVar0 /*2*/], 0);
					func_261(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595681[iVar0 /*678*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_261(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		if (unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_ICON"))
		{
			unk_0x22DD5585E00B80C3(iParam1);
			unk_0x22DD5585E00B80C3(iParam2);
			if (iParam2 == 65)
			{
				unk_0x22DD5585E00B80C3(iParam3);
			}
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

int func_262(int iParam0, bool bParam1)
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

void func_263(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_282() && iParam4 < func_281())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574121)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574304 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x76F4FB5EFF5BDED5(*uParam2, sVar1))
		{
			unk_0x22DD5585E00B80C3(iParam4);
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_280("");
			}
			else
			{
				unk_0x22DD5585E00B80C3(iParam10);
			}
			func_280(sParam1);
			unk_0x22DD5585E00B80C3(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_280("");
			}
			else
			{
				unk_0x22DD5585E00B80C3(65);
			}
			unk_0x22DD5585E00B80C3(-1);
			func_280("");
			if (uParam3->f_108 == 6)
			{
				func_280("");
			}
			else
			{
				func_280(&sParam5);
			}
			func_268(uParam3, iParam0);
			unk_0x27FAC60D3B3FE57C(sParam9);
			unk_0x27FAC60D3B3FE57C(sParam9);
			if (func_267(uParam3))
			{
				func_266("DPAD_FRIEND");
			}
			else if (func_265(uParam3))
			{
				func_266("DPAD_FRIEND");
			}
			else if (func_264(uParam3))
			{
				func_266("DPAD_CREW");
			}
			else
			{
				func_266("");
			}
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

bool func_264(var uParam0)
{
	return unk_0xB03A1684359C50A1(uParam0->f_33, 6);
}

bool func_265(var uParam0)
{
	return unk_0xB03A1684359C50A1(uParam0->f_33, 5);
}

void func_266(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

int func_267(var uParam0)
{
	if (func_265(uParam0) && func_264(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_268(var uParam0, int iParam1)
{
	if (func_279(iParam1))
	{
		unk_0x22DD5585E00B80C3(121);
	}
	else if (func_273(iParam1))
	{
		unk_0x22DD5585E00B80C3(122);
	}
	else if (((unk_0xB03A1684359C50A1(Global_1646129.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xB03A1684359C50A1(Global_2422724[iParam1 /*420*/].f_419, 0))
	{
		unk_0x22DD5585E00B80C3(123);
	}
	else
	{
		if (func_269())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD6F1BD29497A51C8(uParam0->f_36);
	}
}

int func_269()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_271() || func_270())
		{
			return 1;
		}
	}
	return 0;
}

var func_270()
{
	return Global_2447128.f_14;
}

int func_271()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_270();
	}
	return func_272(Global_1646129.f_116948);
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4977[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0)
{
	if ((func_990(iParam0, 0, 1) && func_277()) && func_274(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_274(int iParam0, bool bParam1)
{
	return func_275(iParam0, bParam1, 1);
}

int func_275(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_276(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627460[iParam0 /*530*/].f_11;
	if (iVar0 != func_81() && Global_1627460[iVar0 /*530*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0, int iParam1)
{
	if (iParam0 != func_81())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_81())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 == iParam0 && Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_277()
{
	if (func_135(unk_0x8CFC7D6E1DA5D304()) || func_278())
	{
		return 0;
	}
	return 1;
}

int func_278()
{
	switch (func_221(unk_0x8CFC7D6E1DA5D304()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_279(int iParam0)
{
	if (func_269())
	{
		if (func_990(iParam0, 0, 1))
		{
			return func_240(iParam0);
		}
	}
	if ((func_990(iParam0, 0, 1) && func_277()) && func_276(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_280(char* sParam0)
{
	unk_0xC34A54899652DAAF(sParam0);
}

int func_281()
{
	int iVar0;
	
	if (Global_1574121)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_282()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574121)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_283(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_282() && iParam3 < func_281())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574121)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574304 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x5C716BBF766E1C70(*uParam1))
		{
			if (unk_0x76F4FB5EFF5BDED5(*uParam1, sVar1))
			{
				unk_0x22DD5585E00B80C3(iParam3);
				if (unk_0xB03A1684359C50A1(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_280("");
				}
				else
				{
					unk_0x22DD5585E00B80C3(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xFAFFA408239A026B(sParam16))
				{
					func_266(sParam16);
				}
				else
				{
					func_280(&(uParam2->f_1));
				}
				unk_0x22DD5585E00B80C3(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_280("");
				}
				else
				{
					unk_0x22DD5585E00B80C3(65);
				}
				if (iParam12 == 1)
				{
					unk_0x22DD5585E00B80C3(iVar0);
				}
				else
				{
					unk_0x22DD5585E00B80C3(-1);
				}
				if (func_314())
				{
					func_280("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_ONE_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 5 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_ONE_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 7 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_TWO_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 8 && !unk_0xFAFFA408239A026B(&(uParam2->f_104)))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0xEF512794542297CA(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3A12001DBF78DC62(iParam10);
					}
					unk_0xBEFD1ED9B6BE5127(&(uParam2->f_104));
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_CASH");
					unk_0x7F0713FD21BA55C9(iParam10, 1);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x0ECBA72FAFCEBA59("FM_AE_CASH");
						unk_0x7F0713FD21BA55C9(iParam10, 1);
						unk_0xC30401186AC91B01();
					}
					else
					{
						unk_0x0ECBA72FAFCEBA59("FM_NG_CASH");
						unk_0x7F0713FD21BA55C9(iParam10, 1);
						unk_0xC30401186AC91B01();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xFAFFA408239A026B(&(uParam2->f_104)))
					{
						func_266(&(uParam2->f_104));
					}
					else
					{
						func_280("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam14, 6);
					unk_0xC30401186AC91B01();
				}
				else if (fParam13 != -1f)
				{
					unk_0x0ECBA72FAFCEBA59("NUMBER");
					unk_0xEF512794542297CA(fParam13, 1);
					unk_0xC30401186AC91B01();
				}
				else if (iParam10 != -1)
				{
					unk_0x22DD5585E00B80C3(iParam10);
				}
				else
				{
					func_280("");
				}
				if (uParam2->f_108 == 6)
				{
					func_280("");
				}
				else
				{
					func_280(&sParam4);
				}
				func_268(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xFAFFA408239A026B(sParam8))
				{
					func_280("");
					func_280("");
				}
				else
				{
					unk_0x27FAC60D3B3FE57C(sParam8);
					unk_0x27FAC60D3B3FE57C(sParam8);
				}
				if (func_267(uParam2))
				{
					func_266("DPAD_FRIEND");
				}
				else if (func_265(uParam2))
				{
					func_266("DPAD_FRIEND");
				}
				else if (func_264(uParam2))
				{
					func_266("DPAD_CREW");
				}
				else
				{
					func_266("");
				}
				unk_0xE2B30EB9B14EEAB2();
			}
		}
	}
}

int func_284(int iParam0)
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

bool func_285(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_240(iParam0))
		{
			return 0;
		}
	}
	return Global_1627460[iParam0 /*530*/].f_11 != func_81();
}

int func_286(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_135(iParam0)) && !func_291(iParam0))
	{
		iVar0 = func_290();
	}
	iVar1 = func_289(iParam0);
	if (!iVar1 == -1)
	{
		return func_287(iVar1);
	}
	return iVar0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_288(iParam0);
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
			}
		
		default:
	}
	return 1;
}

var func_288(int iParam0)
{
	return Global_2416788.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_289(int iParam0)
{
	if (!iParam0 == func_81())
	{
		if (func_285(iParam0, 1))
		{
			return Global_2416788.f_2071.f_11[func_82(iParam0)];
		}
	}
	return -1;
}

int func_290()
{
	return 21;
}

bool func_291(int iParam0)
{
	return func_194(iParam0, 20);
}

char* func_292(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x46DAE6F28FA8E185())
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
			if (unk_0x46DAE6F28FA8E185())
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

int func_293(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_297(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_284(iParam3))
	{
		*fParam1 = (func_294(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_294(int iParam0, int iParam1)
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
			if (unk_0x46DAE6F28FA8E185())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_296(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x46DAE6F28FA8E185())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_295(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_295(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_296(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_297(int iParam0)
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

int func_298(int iParam0)
{
	int iVar0;
	
	iVar0 = func_301(iParam0);
	if (iVar0 == -1)
	{
		func_299(iParam0, 1);
		return 0;
	}
	Global_1368675[iVar0 /*5*/].f_4 = 1;
	return Global_1368675[iVar0 /*5*/].f_2;
}

void func_299(int iParam0, bool bParam1)
{
	if (!func_990(iParam0, 0, 1))
	{
		return;
	}
	if (func_301(iParam0) != -1)
	{
		return;
	}
	if (Global_1368838)
	{
		if (iParam0 == Global_1368838.f_1)
		{
			return;
		}
	}
	if (func_300(iParam0))
	{
		return;
	}
	if (Global_1368876 >= 32)
	{
		return;
	}
	Global_1368843[Global_1368876] = iParam0;
	Global_1368876++;
	if (bParam1)
	{
	}
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368876)
	{
		if (Global_1368843[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (!func_990(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1368836 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368836)
	{
		if (Global_1368675[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x474A54D9A9BD0D31(Global_1368675[iVar0 /*5*/].f_2) && unk_0x8A770CC4CC05DE07(Global_1368675[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_302(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_302(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1368836)
	{
		return;
	}
	if (unk_0x474A54D9A9BD0D31(Global_1368675[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1368675[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18EA682CBBDF668A(Global_1368675[iParam0 /*5*/].f_2), 64);
			unk_0xBD17B901DFB6DC31(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x60E35C29E0313635(Global_1368675[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1368836)
	{
		Global_1368675[iVar32 /*5*/] = { Global_1368675[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_303(&(Global_1368675[iVar32 /*5*/]));
	Global_1368836 = (Global_1368836 - 1);
}

void func_303(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_81();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x44243F2E2F58B8E3())
	{
		uParam0->f_3 = unk_0xE92FCF3C05C2EF1D();
	}
}

struct<4> func_304(int iParam0)
{
	struct<4> Var0;
	
	if (func_990(iParam0, 0, 1))
	{
		Global_2491936 = { func_83(iParam0) };
		if (unk_0x929A0C5D6A986B4F())
		{
			if (func_254(Global_2491936))
			{
				if (!unk_0x3F46CD19F4C43D2A(&Global_2491936))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xC8543F17BC4C0591(0))
		{
			return Var0;
		}
		if (func_308(&Global_2491936))
		{
			Global_2491866 = { func_306(iParam0) };
			func_305(&Global_2491866, &Var0);
		}
	}
	return Var0;
}

void func_305(var uParam0, var uParam1)
{
	unk_0x14FE7512F6617D5D(uParam0, 35, uParam1);
}

struct<35> func_306(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_307(iParam0))
	{
		return Global_1312886[unk_0x8CFC7D6E1DA5D304() /*35*/];
	}
	Var0 = { func_83(iParam0) };
	unk_0x4AEF279CFD4A57C6(&Var13, 35, &Var0);
	return Var13;
}

int func_307(int iParam0)
{
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		return 1;
	}
	return 0;
}

int func_308(var uParam0)
{
	if (unk_0x60D6796E6B9FD3DB())
	{
		if (unk_0xE906D9FB40E35957() && unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_248(iParam0) || func_312(iParam0)) || func_311(iParam0))
		{
			return 0;
		}
	}
	if (!func_310(iParam0))
	{
		return 0;
	}
	if ((!func_322(iParam0) && Global_2422724[iParam0 /*420*/].f_251 == -1) && !func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_310(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_142, 22);
}

bool func_311(int iParam0)
{
	if (func_248(iParam0))
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 8);
}

int func_312(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 10) || unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 9));
	}
	return 0;
}

int func_313(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB03A1684359C50A1(Global_1595681[iVar0 /*678*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_314()
{
	switch (func_221(unk_0x8CFC7D6E1DA5D304()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_315(unk_0x8CFC7D6E1DA5D304()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_291(unk_0x8CFC7D6E1DA5D304()))
	{
		switch (func_221(unk_0x8CFC7D6E1DA5D304()))
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

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/];
	}
	return -1;
}

int func_316(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 && func_317(Global_1627460[iParam0 /*530*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1)
	{
		if (func_317(Global_1627460[iParam0 /*530*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_317(int iParam0)
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
	return func_318(iParam0, 0);
	return 0;
}

int func_318(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_990(unk_0x3479F6F64A48251C(iVar0), 0, 1))
		{
			iVar1 = unk_0x3479F6F64A48251C(iVar0);
			if (!func_144(iVar1, 0))
			{
				if ((func_322(iVar1) || Global_2422724[iVar1 /*420*/].f_251 != -1) || func_113(iVar1))
				{
					if (func_320(iVar1, iParam1, 0))
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

int func_320(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_81())
	{
		if (!bParam2)
		{
			if (func_321(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627460[iParam0 /*530*/].f_11 != func_81())
		{
			return iParam1 == Global_1627460[iParam0 /*530*/].f_11;
		}
	}
	return 0;
}

int func_321(int iParam0, int iParam1)
{
	if (iParam1 != func_81())
	{
		if (iParam0 != func_81())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 != func_81())
			{
				if (Global_1627460[iParam0 /*530*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	if (func_990(iParam0, 0, 1))
	{
		if (func_990(unk_0x8CFC7D6E1DA5D304(), 0, 1))
		{
			if (unk_0xE392CC8A2777F819(iParam0, unk_0x8CFC7D6E1DA5D304()) || func_221(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_323(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x22DD5585E00B80C3(0);
		unk_0xE2B30EB9B14EEAB2();
	}
}

void func_324(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357210.f_2 == 0)
		{
			Global_1357210.f_2 = 1;
		}
	}
	else if (Global_1357210.f_2 == 1)
	{
		Global_1357210.f_2 = 0;
	}
}

void func_325()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1))
	{
		if (func_327())
		{
			func_326();
		}
	}
}

void func_326()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436169.f_2591[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
			unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_327()
{
	return Global_2436169.f_2591[0 /*79*/].f_1 != 0;
}

int func_328()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 0) && func_327())
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1) && func_327())
	{
		return 1;
	}
	return 0;
}

int func_329()
{
	if (func_327())
	{
		if (func_330(Global_2436169.f_2591[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_331()
{
	if (func_327())
	{
		if (func_332(Global_2436169.f_2591[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
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
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_333(int iParam0)
{
	if (Global_1357210.f_1 != Global_1357210)
	{
		Global_1357210.f_1 = Global_1357210;
	}
	if (Global_1357210 != iParam0)
	{
		Global_1357210 = iParam0;
	}
}

int func_334(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_383(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_382();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_381())
		{
			if (func_380() > 0 && Global_1574121)
			{
				unk_0xA92183CDC960EFB2();
				unk_0x882C4E3F687152C5(fVar7);
				unk_0xE05212008FE9A018(18);
				if (unk_0x622E10ED992CEB95())
				{
					unk_0xCA68B0AB8A5AF85A();
				}
				unk_0xE05212008FE9A018(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_368())
		{
			func_367(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
	{
		func_367(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_380() == 1)
		{
			func_366(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_367(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x622E10ED992CEB95())
		{
			unk_0xCA68B0AB8A5AF85A();
		}
		unk_0xE05212008FE9A018(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_380() == 0 && !bParam5))
		{
			func_367(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_365();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0xA92183CDC960EFB2();
				}
				unk_0xE05212008FE9A018(18);
			}
			if (!unk_0xB03A1684359C50A1(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_365();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xA92183CDC960EFB2();
					}
					unk_0xE05212008FE9A018(18);
				}
				unk_0x882C4E3F687152C5(fVar7);
				if (func_366(bVar6, uParam0, 0))
				{
					func_323(uParam0);
					sVar4 = func_363(iParam1, &(Global_1646129.f_116955), bParam4);
					Var0 = { func_361(iParam1) };
					if (bParam4)
					{
						func_358(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_351(uParam0, func_355(uParam2), func_352(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_342(uParam0, func_344(uParam2), func_343(), -1);
					}
					else if (func_269())
					{
						uParam2->f_34 = Global_1574120;
						func_358(uParam0, sVar4, &Var0, 1, -1, Global_1574120, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574120;
						func_358(uParam0, sVar4, "", 0, -1, Global_1574120, 1);
					}
					else
					{
						iVar8 = func_335(iParam1);
						func_358(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xD2A9C3F486236CC5(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xB03A1684359C50A1(uParam2->f_33, 0))
			{
				Global_1574119 = uParam3;
				Global_1574118 = 1;
				unk_0x882C4E3F687152C5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574120)
					{
						unk_0x62148293B793073B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_341())
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
		
		case 24:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 11:
		case 12:
		case 13:
		case 16:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 17;
			break;
		
		case 15:
			iVar0 = 18;
			break;
		
		case 17:
			if (func_340(unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 20;
			}
			if (func_339(unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_338(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar0 = 2;
	}
	if (func_336())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_336()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_120();
	}
	return func_337(Global_1646129.f_116948);
}

int func_337(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4995[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_338(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 4;
}

bool func_339(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

bool func_340(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

bool func_341()
{
	return Global_1646129.f_1 == 0;
}

void func_342(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (unk_0xFAFFA408239A026B(sParam2))
		{
			func_266(sParam1);
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		func_266("");
		if (iParam3 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam3);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

char* func_343()
{
	switch (func_221(unk_0x8CFC7D6E1DA5D304()))
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

char* func_344(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_221(unk_0x8CFC7D6E1DA5D304()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
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
			if (func_347())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_346(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_346(1))
			{
				return "PI_BIK_3_2";
			}
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
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_345(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_346(bool bParam0)
{
	return func_274(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

bool func_347()
{
	return (func_350() && func_348(func_349()));
}

bool func_348(int iParam0)
{
	return func_276(iParam0, 1);
}

int func_349()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_35;
}

bool func_350()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148;
}

void func_351(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (unk_0xFAFFA408239A026B(sParam2))
		{
			func_266(sParam1);
		}
		else if (func_315(unk_0x8CFC7D6E1DA5D304()) == 133)
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT_C");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		func_266("");
		if (iParam3 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam3);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

char* func_352(var uParam0)
{
	int iVar0;
	
	iVar0 = func_315(unk_0x8CFC7D6E1DA5D304());
	if (func_354())
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
			switch (func_353())
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

int func_353()
{
	if (func_315(unk_0x8CFC7D6E1DA5D304()) == 133)
	{
		return Global_2512581.f_4799;
	}
	return -1;
}

bool func_354()
{
	return Global_1595554;
}

char* func_355(var uParam0)
{
	int iVar0;
	
	iVar0 = func_315(unk_0x8CFC7D6E1DA5D304());
	if (func_354())
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
			if (func_357() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_357() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_353())
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
			if (func_356() == 1)
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

int func_356()
{
	return Global_2512581.f_4802;
}

int func_357()
{
	if (func_315(unk_0x8CFC7D6E1DA5D304()) == 132)
	{
		return Global_2512581.f_4797;
	}
	return -1;
}

void func_358(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_280(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0ECBA72FAFCEBA59(sParam1);
			unk_0x3A12001DBF78DC62(iParam5);
			unk_0xC30401186AC91B01();
		}
		else
		{
			func_266(sParam1);
		}
		if (func_381() && iParam6)
		{
			if (func_360())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x0ECBA72FAFCEBA59("LBD_DPD_CNT");
			unk_0x3A12001DBF78DC62(iVar0);
			unk_0x3A12001DBF78DC62(iVar1);
			unk_0xC30401186AC91B01();
		}
		else
		{
			func_266(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam4);
			if (func_359(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0x22DD5585E00B80C3(166);
			}
			else if (func_120())
			{
				unk_0x22DD5585E00B80C3(220);
			}
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

int func_359(int iParam0)
{
	if (func_340(iParam0) || func_339(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_360()
{
	return Global_1574121;
}

struct<4> func_361(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_362(unk_0x8CFC7D6E1DA5D304()) || func_338(unk_0x8CFC7D6E1DA5D304()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 16:
		case 14:
		case 15:
		case 17:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1646129.f_33, 16);
			break;
	}
	if (func_269() && unk_0x13C2BC1B63ABBCD5())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1646129.f_33, 16);
	}
	return Var0;
}

bool func_362(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 5;
}

char* func_363(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_269() || unk_0xFAFFA408239A026B(uParam1)))
	{
		uVar0 = func_364();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574322 == 0)
		{
			Global_1574322 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xFAFFA408239A026B(sParam1))
	{
		if (Global_1574322 == 1)
		{
			Global_1574322 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574322 == 0)
		{
			Global_1574322 = 1;
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
			case 9:
			case 10:
			case 6:
			case 24:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 17:
			case 13:
			case 16:
			case 14:
			case 12:
			case 11:
			case 15:
			case 18:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 20:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_364()
{
	if (unk_0x1F02F29AB756F2E5())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x1A236D41ABF3E7DB())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xF64E18195138BB4E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xE0662BA98BE124FF())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_365()
{
	Global_36763 = 1;
}

bool func_366(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("mp_matchmaking_card");
	}
	return unk_0x5C716BBF766E1C70(*uParam1);
}

void func_367(var uParam0, var uParam1, bool bParam2)
{
	unk_0x62148293B793073B(&(uParam1->f_33), 7);
	Global_1574119 = 0;
	func_258();
	Global_1574118 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_259(&(uParam1->f_19));
		}
	}
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0xEBE532BFFE618875(uParam0);
	}
	if (unk_0xB03A1684359C50A1(uParam1->f_33, 0))
	{
		unk_0x62148293B793073B(&(uParam1->f_33), 0);
	}
	unk_0x882C4E3F687152C5(0f);
}

int func_368()
{
	if (func_379())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (!func_376())
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_373(8, -1))
	{
		return 0;
	}
	if (func_380() == 2)
	{
		return 0;
	}
	if (Global_2512581.f_4511)
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	else if (!func_38(unk_0x8CFC7D6E1DA5D304(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_371(1) || func_369(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (func_86(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (Global_1794814)
	{
		return 0;
	}
	if (Global_1794818)
	{
		return 0;
	}
	if (func_199(0))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350792)
	{
		return 0;
	}
	if ((Global_1818764.f_705.f_5 || Global_1821575.f_705.f_5) || Global_1817807.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_369(bool bParam0)
{
	if (unk_0x0A596203A8341362())
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_370(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x02EA7C5633421A0F(0, 25) || unk_0x02EA7C5633421A0F(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0x02EA7C5633421A0F(0, 19) || (!bParam0 && unk_0xBAEF57A3E716CC8D(0, 19)))
	{
		return 1;
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (((unk_0x02EA7C5633421A0F(0, 166) || unk_0x02EA7C5633421A0F(0, 167)) || unk_0x02EA7C5633421A0F(0, 168)) || unk_0x02EA7C5633421A0F(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xBAEF57A3E716CC8D(0, 166) || unk_0xBAEF57A3E716CC8D(0, 167)) || unk_0xBAEF57A3E716CC8D(0, 168)) || unk_0xBAEF57A3E716CC8D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;
	
	if (unk_0x0A88AA21DE172C4B())
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			unk_0x75CE6F8BEC2654E3(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_371(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_372()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196 != 0;
}

bool func_373(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

int func_374()
{
	if (func_375() == 0)
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	return Global_1312466.f_18;
}

int func_376()
{
	if (func_377())
	{
		return 1;
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 0;
	}
	if (unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5())
	{
		return 0;
	}
	if (unk_0xC5B946266AEC83EB())
	{
		return 0;
	}
	return 1;
}

bool func_377()
{
	return Global_1312438;
}

bool func_378()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 5;
}

bool func_379()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

int func_380()
{
	return Global_1357213.f_68;
}

int func_381()
{
	if (Global_1574120 > 16)
	{
		return 1;
	}
	return 0;
}

float func_382()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x8A9A973E0D52B2FF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 25:
		case 26:
			return 1;
			break;
	}
	return 0;
}

int func_384()
{
	if (func_385(unk_0x8CFC7D6E1DA5D304()))
	{
		return Global_1316731;
	}
	return 0;
}

int func_385(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_144(iParam0, 0))
		{
			return unk_0x8E5F52AEFF24A334(iParam0);
		}
	}
	return 0;
}

int func_386()
{
	if (func_384())
	{
		return 1;
	}
	if (func_311(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_354())
	{
		return 1;
	}
	if (func_135(unk_0x8CFC7D6E1DA5D304()))
	{
		switch (func_315(unk_0x8CFC7D6E1DA5D304()))
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
				if (!func_387(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_387(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_387(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_387(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 4);
}

int func_388(int iParam0)
{
	if ((iParam0 == 26 && func_135(unk_0x8CFC7D6E1DA5D304())) && !func_291(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_134(unk_0x8CFC7D6E1DA5D304(), 0) && func_291(unk_0x8CFC7D6E1DA5D304()))
		{
			return 1;
		}
		if (func_389(unk_0x8CFC7D6E1DA5D304()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_135(iParam0) && !func_248(iParam0)) && !unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 8));
	bVar2 = func_291(iParam0);
	uVar3 = func_397();
	uVar4 = func_391();
	if ((bVar1 && (func_247(iParam0) || func_246(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_241(iParam0)) && !func_390(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512581.f_4878.f_38 != iVar0)
	{
		Global_2512581.f_4878.f_38 = iVar0;
	}
	return iVar0;
}

bool func_390(int iParam0)
{
	return func_194(iParam0, 19);
}

int func_391()
{
	if ((func_194(unk_0x8CFC7D6E1DA5D304(), 21) || func_194(unk_0x8CFC7D6E1DA5D304(), 22)) || func_394())
	{
		return 1;
	}
	if (func_392())
	{
		func_224(22);
		return 1;
	}
	return 0;
}

int func_392()
{
	if (func_134(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if ((func_397() && !func_393()) || func_238(unk_0x8CFC7D6E1DA5D304(), 21))
		{
			return 1;
		}
		else
		{
			func_223(27);
		}
	}
	return 0;
}

bool func_393()
{
	return Global_1312416.f_1;
}

bool func_394()
{
	return func_395(296, -1);
}

int func_395(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_396(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_396(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_146();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

bool func_397()
{
	return Global_1312416;
}

bool func_398()
{
	return unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 1);
}

void func_399()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_400(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_400(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 10))
	{
		if (Local_194.f_34 > -1)
		{
			if (func_398())
			{
				if (!func_391())
				{
					if (!unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 5))
					{
						if (!unk_0xB03A1684359C50A1(Local_194.f_1, 4))
						{
							if (unk_0x31F12808DC47A9E5(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0xB6C2454233C8F532(Var0.f_0))
									{
										uVar11 = unk_0x6DE4035D8BAB73B4(Var0.f_0);
										if (unk_0xEE1E09882FA264CA(uVar11))
										{
											iVar12 = unk_0xD3287DCBDBC58316(uVar11);
											if (iVar12 == unk_0x3479F6F64A48251C(Local_194.f_34))
											{
												if (unk_0x31F12808DC47A9E5(Var0.f_1))
												{
													if (unk_0xB6C2454233C8F532(Var0.f_1))
													{
														uVar10 = unk_0x6DE4035D8BAB73B4(Var0.f_1);
														if (unk_0xEE1E09882FA264CA(uVar10))
														{
															iVar13 = unk_0xD3287DCBDBC58316(uVar10);
															if (iVar13 == unk_0x8CFC7D6E1DA5D304())
															{
																unk_0xD2A9C3F486236CC5(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 5);
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
	if (func_398())
	{
		if (!func_194(unk_0x8CFC7D6E1DA5D304(), 20))
		{
			if (unk_0x31F12808DC47A9E5(Var0.f_0))
			{
				if (unk_0xB6C2454233C8F532(Var0.f_0))
				{
					uVar11 = unk_0x6DE4035D8BAB73B4(Var0.f_0);
					if (unk_0xEE1E09882FA264CA(uVar11))
					{
						iVar12 = unk_0xD3287DCBDBC58316(uVar11);
						if (unk_0x31F12808DC47A9E5(Var0.f_1))
						{
							if (unk_0xB6C2454233C8F532(Var0.f_1))
							{
								uVar10 = unk_0x6DE4035D8BAB73B4(Var0.f_1);
								if (unk_0xEE1E09882FA264CA(uVar10))
								{
									iVar13 = unk_0xD3287DCBDBC58316(uVar10);
									if (iVar13 == unk_0x8CFC7D6E1DA5D304())
									{
										if (unk_0x1DD0F419559F38C7(iVar12))
										{
											if (func_285(iVar12, 1))
											{
												if (Local_194.f_33 > -1)
												{
													iVar14 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(Local_194.f_33));
													if (func_320(iVar12, iVar14, 1))
													{
														func_401(0);
														func_243();
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

void func_401(int iParam0)
{
	if (!func_291(unk_0x8CFC7D6E1DA5D304()))
	{
		if (iParam0 || func_389(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			func_224(20);
			if (func_135(unk_0x8CFC7D6E1DA5D304()))
			{
				if (!unk_0xB03A1684359C50A1(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1, 8))
				{
					unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1), 8);
				}
			}
		}
	}
}

void func_402()
{
	switch (Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_2)
	{
		case 0:
			func_745();
			func_403();
			if (Local_194.f_32 == 2)
			{
				Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_2 = 2;
			}
			else if (Local_194.f_32 == 3)
			{
				Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_403();
			if (Local_194.f_32 == 3)
			{
				Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_909();
			break;
	}
}

void func_403()
{
	struct<10> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar17 = func_81();
	iVar18 = func_81();
	iVar19 = func_81();
	if (!unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 4))
	{
		if (!unk_0xB03A1684359C50A1(uLocal_447, 9))
		{
			if (unk_0xB03A1684359C50A1(Local_194.f_1, 1))
			{
				if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33 || func_897() == Local_194.f_33)
				{
					if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
					{
						sVar20 = func_744();
						iVar21 = func_743(unk_0x8CFC7D6E1DA5D304());
						func_741(87, "GB_WINNER", "BIGM_SGHTYD", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
					{
						func_679(1, 1, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
					}
					func_504(142, 1, &Var0, 0);
					unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
				}
				else if (func_398())
				{
					if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
						{
							sVar20 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
							iVar21 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
						{
							func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
						}
						func_504(142, 0, &Var0, 0);
					}
					else
					{
						if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
						{
							sVar20 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
							iVar21 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
						{
							func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
						}
						func_504(142, 0, &Var0, 0);
					}
				}
				unk_0xD2A9C3F486236CC5(&iLocal_447, 9);
			}
			else if (unk_0xB03A1684359C50A1(Local_194.f_1, 3))
			{
				func_497(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
				{
					func_679(0, 7, 0, 0, -1, -1, -1, -1, -1);
					unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
				}
				func_504(142, 0, &Var0, 0);
				unk_0xD2A9C3F486236CC5(&iLocal_447, 9);
			}
			else if (unk_0xB03A1684359C50A1(Local_194.f_1, 4))
			{
				if (Local_194.f_35 > -1)
				{
					iVar18 = unk_0x3479F6F64A48251C(Local_194.f_35);
				}
				if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
				{
					if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
					{
						if (unk_0x4AF13BCD120BCDBC(iVar18))
						{
							if (func_285(iVar18, 1))
							{
								sVar20 = func_498(iVar18);
								iVar21 = func_743(iVar18);
							}
							else
							{
								sVar20 = unk_0x3E8AA4B2B7764D27(iVar18);
								iVar21 = 1;
							}
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
						}
					}
					func_504(142, 0, &Var0, 0);
					if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
					{
						func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
					}
				}
				else if (func_897() == Local_194.f_33)
				{
					iVar17 = unk_0x3479F6F64A48251C(Local_194.f_34);
					if (iVar17 != func_81())
					{
						if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
						{
							if (unk_0x4AF13BCD120BCDBC(iVar18))
							{
								if (func_285(iVar18, 1))
								{
									sVar20 = func_498(iVar18);
									iVar21 = func_743(iVar18);
								}
								else
								{
									sVar20 = unk_0x3E8AA4B2B7764D27(iVar18);
									iVar21 = 1;
								}
								func_741(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_741(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
							}
						}
						func_504(142, 0, &Var0, 0);
						if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
						{
							func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
						}
					}
				}
				else if (func_398())
				{
					iVar18 = unk_0x3479F6F64A48251C(Local_194.f_35);
					if (iVar18 != func_81())
					{
						if (iVar18 == unk_0x8CFC7D6E1DA5D304())
						{
							if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
							{
								if (func_496(1))
								{
									func_497(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_497(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
							if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
							{
								func_679(1, 1, 0, 0, -1, -1, -1, -1, -1);
								unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
							}
							func_504(142, 1, &Var0, 0);
						}
						else if (func_496(1))
						{
							iVar19 = func_495();
							if (func_320(iVar18, iVar19, 1))
							{
								if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
								{
									func_466(87, iVar18, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, -1);
								}
								if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
								{
									func_679(1, 1, 0, 0, -1, -1, -1, -1, -1);
									unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
								}
								func_504(142, 0, &Var0, 0);
							}
							else
							{
								if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
								{
									if (unk_0x4AF13BCD120BCDBC(iVar18))
									{
										if (func_285(iVar18, 1))
										{
											sVar20 = func_498(iVar18);
											iVar21 = func_743(iVar18);
										}
										else
										{
											sVar20 = unk_0x3E8AA4B2B7764D27(iVar18);
											iVar21 = 1;
										}
										func_741(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_497(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
								{
									func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
									unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
								}
								func_504(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
							{
								if (unk_0x4AF13BCD120BCDBC(iVar18))
								{
									if (func_285(iVar18, 1))
									{
										sVar20 = func_498(iVar18);
										iVar21 = func_743(iVar18);
									}
									else
									{
										sVar20 = unk_0x3E8AA4B2B7764D27(iVar18);
										iVar21 = 1;
									}
									func_741(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar20, iVar21, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_497(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
							{
								func_679(0, 2, 0, 0, -1, -1, -1, -1, -1);
								unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
							}
							func_504(142, 0, &Var0, 0);
						}
					}
				}
				unk_0xD2A9C3F486236CC5(&iLocal_447, 9);
			}
			else if (unk_0xB03A1684359C50A1(Local_194.f_1, 5))
			{
				if (func_436())
				{
					if (func_896())
					{
						if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
						{
						}
					}
					else if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
					{
						func_497(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
				{
					func_679(0, 8, 0, 0, -1, -1, -1, -1, -1);
					unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
				}
				func_504(159, 0, &Var0, 0);
				unk_0xD2A9C3F486236CC5(&iLocal_447, 9);
			}
		}
		if (unk_0xB03A1684359C50A1(iLocal_447, 9))
		{
			func_429();
			if (!unk_0xB03A1684359C50A1(iLocal_448, 8))
			{
				unk_0xD2A9C3F486236CC5(&iLocal_448, 8);
			}
			if (!unk_0xB03A1684359C50A1(iLocal_447, 10))
			{
				if (Local_194.f_34 != -1)
				{
					if (unk_0xB03A1684359C50A1(iLocal_447, 5))
					{
						if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_194.f_34)))
						{
							func_427(unk_0x3479F6F64A48251C(Local_194.f_34), 432, 0);
							func_425(unk_0x3479F6F64A48251C(Local_194.f_34), 1, 0);
							func_424(unk_0x3479F6F64A48251C(Local_194.f_34), 0, 0);
							func_423(unk_0x3479F6F64A48251C(Local_194.f_34), 0);
							func_422(unk_0x3479F6F64A48251C(Local_194.f_34), Global_262145.f_11514, 0);
							unk_0xD2A9C3F486236CC5(&iLocal_447, 10);
						}
					}
				}
			}
			if (func_404(&uLocal_821, 1, 0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 4);
			}
		}
	}
}

int func_404(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_224(29);
	if ((*uParam0 > 0 && !func_327()) && func_389(unk_0x8CFC7D6E1DA5D304()) != 0)
	{
		if (!func_419())
		{
			func_418();
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
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 2);
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4553), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_417(uParam0, 1);
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
				func_411(iParam2);
				func_417(uParam0, 2);
			}
			break;
		
		case 2:
			func_411(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_405(func_406(0)))
				{
					unk_0xEFF1F12403847394(1);
				}
				func_417(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x62148293B793073B(&(Global_2512581.f_4553), 1);
				unk_0x62148293B793073B(&(Global_1806998.f_3), 2);
				func_417(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x62148293B793073B(&(Global_2512581.f_4553), 1);
			unk_0x62148293B793073B(&(Global_1806998.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_405(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

char* func_406(int iParam0)
{
	if (((func_409(unk_0x8CFC7D6E1DA5D304()) || func_408(unk_0x8CFC7D6E1DA5D304())) || func_347()) || iParam0)
	{
		if (func_408(unk_0x8CFC7D6E1DA5D304()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_317(func_407()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_407()
{
	return Global_1644422;
}

bool func_408(int iParam0)
{
	return func_318(func_221(iParam0), 0);
}

bool func_409(int iParam0)
{
	return func_410(func_221(iParam0));
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148 && func_276(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_411(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 0))
	{
		if ((((((((((!unk_0x834A29018EBFDCB3() && !unk_0xB03A1684359C50A1(Global_2512581.f_778, 2)) && func_990(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && !Global_68213) && !Global_53082) && !unk_0xEC0ECEF2AF3FDA8D()) && !func_194(unk_0x8CFC7D6E1DA5D304(), 22)) && func_389(unk_0x8CFC7D6E1DA5D304()) != 0) && !func_415(func_416())) && !func_409(unk_0x8CFC7D6E1DA5D304())) && !func_414(func_221(unk_0x8CFC7D6E1DA5D304())))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4553), 1);
			func_413(func_406(iParam0), -1);
			func_412(1);
			unk_0x62148293B793073B(&(Global_2512581.f_4553), 0);
		}
	}
}

void func_412(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_346(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_327())
	{
		unk_0x929C3CBA660376D5(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_413(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam1);
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_415(int iParam0)
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

int func_416()
{
	var uVar0;
	
	uVar0 = unk_0xFCA64981FEF7C913();
	if (unk_0x9D39145AD645E383(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_417(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_418()
{
	Global_2458315 = 1;
}

int func_419()
{
	if (((((((func_221(unk_0x8CFC7D6E1DA5D304()) == 170 || func_221(unk_0x8CFC7D6E1DA5D304()) == 219) || func_221(unk_0x8CFC7D6E1DA5D304()) == 221) || func_221(unk_0x8CFC7D6E1DA5D304()) == 220) || func_221(unk_0x8CFC7D6E1DA5D304()) == 216) || func_221(unk_0x8CFC7D6E1DA5D304()) == 215) || func_221(unk_0x8CFC7D6E1DA5D304()) == 214) || func_221(unk_0x8CFC7D6E1DA5D304()) == 218)
	{
		return 1;
	}
	if (func_420(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_421(int iParam0)
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

void func_422(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_230())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_776[iParam0]) || Global_2415594.f_776[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		if (bParam2)
		{
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_389), iVar0);
			Global_2415594.f_545[iVar0] = uParam1;
			Global_2415594.f_776[iParam0] = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			unk_0x62148293B793073B(&(Global_2415594.f_389), iVar0);
			Global_2415594.f_776[iParam0] = -1;
		}
	}
}

void func_423(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_2415594.f_365), iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_2415594.f_365), iParam0);
	}
	if (unk_0xE769D9B5158D0F11(Global_2415594[iParam0]))
	{
		if (bParam1)
		{
			unk_0x90260EB52E59F0F5(Global_2415594[iParam0], 0);
		}
		else
		{
			unk_0x90260EB52E59F0F5(Global_2415594[iParam0], 1);
		}
	}
}

void func_424(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_990(iParam0, 1, 1))
		{
			Global_2415594.f_710[iParam0] = unk_0xBCF9D020FA9C313D();
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_364), iParam0);
			func_423(iParam0, bParam2);
		}
	}
	else
	{
		func_423(iParam0, bParam2);
		unk_0x62148293B793073B(&(Global_2415594.f_364), iParam0);
		Global_2415594.f_710[iParam0] = -1;
	}
}

void func_425(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_230())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_426(iParam0))
	{
		if (bParam2)
		{
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_386), iVar0);
			Global_2415594.f_611[iParam0] = unk_0xBCF9D020FA9C313D();
			Global_2415594.f_446[iVar0] = iParam1;
		}
		else
		{
			unk_0x62148293B793073B(&(Global_2415594.f_386), iVar0);
			Global_2415594.f_611[iParam0] = -1;
		}
	}
}

int func_426(int iParam0)
{
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_611[iParam0]) || Global_2415594.f_611[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		return 1;
	}
	return 0;
}

void func_427(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_230())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_578[iParam0]) || Global_2415594.f_578[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		if (bParam2)
		{
			if (!unk_0xB03A1684359C50A1(Global_2415594.f_385, iVar0))
			{
				func_428();
			}
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_385), iVar0);
			Global_2415594.f_413[iVar0] = uVar1;
			Global_2415594.f_578[iParam0] = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			if (unk_0xB03A1684359C50A1(Global_2415594.f_385, iVar0))
			{
				func_428();
			}
			unk_0x62148293B793073B(&(Global_2415594.f_385), iVar0);
			Global_2415594.f_578[iParam0] = -1;
		}
	}
}

void func_428()
{
	Global_2415594.f_1009 = 1;
}

void func_429()
{
	if (!func_435())
	{
		return;
	}
	if (!unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == Global_1312576.f_9)
	{
		return;
	}
	func_430();
}

void func_430()
{
	func_432();
	func_431(0);
}

void func_431(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x44243F2E2F58B8E3();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xE92FCF3C05C2EF1D();
		Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_432()
{
	if (!func_434())
	{
	}
	if (func_435())
	{
		unk_0xE444E45D40243E87(&(Global_1312576.f_12));
		func_433();
		unk_0xF1591A76844D3AC1();
	}
}

void func_433()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			unk_0x3A12001DBF78DC62(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_434()
{
	if (!func_435())
	{
		return 0;
	}
	unk_0x096CAD0A8332D384(&(Global_1312576.f_12));
	func_433();
	return unk_0x45CD208BAEE25DF4();
}

int func_435()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_436()
{
	if (!func_437(1, 1, 1))
	{
		return 0;
	}
	if (func_391())
	{
		return 0;
	}
	return 1;
}

int func_437(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_465(unk_0x8CFC7D6E1DA5D304(), 29))
	{
		return 0;
	}
	if (func_238(unk_0x8CFC7D6E1DA5D304(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x3AB73ED02FDAC9A8())
		{
			return 0;
		}
	}
	if (!func_310(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7DF51A716BE7A07F())
		{
			return 0;
		}
	}
	if (func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_464())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (func_463())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return 0;
	}
	if (func_39(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_238(unk_0x8CFC7D6E1DA5D304(), 0) || func_238(unk_0x8CFC7D6E1DA5D304(), 3))
	{
		return 0;
	}
	if ((func_238(unk_0x8CFC7D6E1DA5D304(), 12) || func_238(unk_0x8CFC7D6E1DA5D304(), 14)) || func_238(unk_0x8CFC7D6E1DA5D304(), 13))
	{
		return 0;
	}
	if (func_461(unk_0x8CFC7D6E1DA5D304(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		if (!func_442())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_441())
		{
			return 0;
		}
	}
	if (Global_1794814)
	{
		return 0;
	}
	if (func_133(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_440())
	{
		return 0;
	}
	if (func_439(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (func_438(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_438(int iParam0)
{
	if (Global_2422724[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422724[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

int func_439(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_440()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_441()
{
	return Global_92881.f_316 > 0;
}

int func_442()
{
	int iVar0;
	
	iVar0 = func_221(unk_0x8CFC7D6E1DA5D304());
	if (((func_460(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_17) || func_459(unk_0x8CFC7D6E1DA5D304())) || func_458(unk_0x8CFC7D6E1DA5D304())) || func_453(unk_0x8CFC7D6E1DA5D304()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_451(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_450(iVar0) || func_449(iVar0))
		{
			return 1;
		}
	}
	if (func_420(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_449(iVar0))
		{
			return 1;
		}
	}
	if (func_448(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_447(iVar0))
		{
			return 1;
		}
	}
	if (func_446(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_445(iVar0))
		{
			return 1;
		}
	}
	if (func_444(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_443(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_444(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_446(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_448(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_451(int iParam0)
{
	if (func_452(Global_1595681[iParam0 /*678*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_453(int iParam0)
{
	if (func_454(Global_1595681[iParam0 /*678*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_454(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_455(unk_0x8CFC7D6E1DA5D304(), 0);
	}
	if (bParam1)
	{
		if (func_455(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_455(int iParam0, bool bParam1)
{
	if (Global_1595525 != func_81())
	{
		if (!func_457(Global_1595525))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x8CFC7D6E1DA5D304() != Global_1595525)
			{
				if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595525 /*420*/].f_210, 24) || func_456(Global_1595525))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 24);
}

int func_456(int iParam0)
{
	if (iParam0 != func_81())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_457(int iParam0)
{
	if (iParam0 != func_81())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 2);
	}
	return 0;
}

int func_458(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)
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

int func_461(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595681[iParam0 /*678*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 0))
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
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_420(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_446(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_444(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (func_990(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_81())
			{
				return func_421(Global_2422724[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_463()
{
	return Global_1312854;
}

bool func_464()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 0);
}

bool func_465(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_11.f_5, iParam1);
}

int func_466(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_494(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_70 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_71 = iParam7;
	if (iParam8 != -1)
	{
		unk_0xD2A9C3F486236CC5(&(Var0.f_68), iParam8);
	}
	return func_467(&Var0);
}

int func_467(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436169.f_2909)
		{
			return 0;
		}
	}
	func_477(uParam0, uParam0->f_16);
	func_476(uParam0);
	if (func_120())
	{
		func_476(uParam0);
	}
	if (func_475(uParam0->f_1))
	{
		func_468();
		if (Global_2436169.f_2591[0 /*79*/].f_2 == 0)
		{
			Global_2436169.f_2591[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436169.f_2591[0 /*79*/].f_1 == 13 || Global_2436169.f_2591[0 /*79*/].f_1 == 53) || Global_2436169.f_2591[0 /*79*/].f_1 == 54) || Global_2436169.f_2591[0 /*79*/].f_1 == 58)
		{
			Global_2436169.f_2591[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436169.f_2591[iVar0 + 1 /*79*/] = { Global_2436169.f_2591[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436169.f_2591[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436169.f_2591[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436169.f_2591[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_468();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 1);
				Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_330(Global_2436169.f_2591[iVar0 /*79*/].f_1))
				{
					Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
					unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_468()
{
	bool bVar0;
	
	if (Global_2436169.f_2910)
	{
		return;
	}
	if (!Global_71120)
	{
		Global_71120 = 1;
		bVar0 = true;
	}
	func_469();
	if (bVar0)
	{
		Global_71120 = 0;
	}
}

void func_469()
{
	Global_2436169.f_2911 = 0;
	Global_2436169.f_2911.f_578 = 0;
	func_473(&(Global_2436169.f_2911.f_1));
	Global_2436169.f_2911.f_1.f_1 = 0;
	func_470(&(Global_2436169.f_2911.f_1));
}

void func_470(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xEBE532BFFE618875(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(0);
			unk_0xE2B30EB9B14EEAB2();
		}
		unk_0xEBE532BFFE618875(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x3B82047F26E2CEDB(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71120)
	{
		if (!unk_0xA43E30AC0AF7BE76(unk_0x0A91D180DDC7A1B8()))
		{
			if (!Global_71121)
			{
				if (unk_0xEC0ECEF2AF3FDA8D() && !func_472(0))
				{
					unk_0x8359CF51370FC969(800);
				}
			}
		}
	}
	func_471(0);
}

void func_471(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

bool func_472(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_473(var uParam0)
{
	func_474(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_474(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_475(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_476(var uParam0)
{
	if (func_332(uParam0->f_1))
	{
		uParam0->f_71 = func_290();
	}
}

void func_477(var uParam0, int iParam1)
{
	if (func_332(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_81() || !func_990(iParam1, 0, 1))
	{
		return;
	}
	if (func_330(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_478(iParam1, -2, 0, 0);
		}
	}
}

int func_478(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_86(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1646129.f_112025[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_86(unk_0x8CFC7D6E1DA5D304()) || (func_493() && func_492())) && !unk_0xB03A1684359C50A1(Global_2512581.f_4556, 31))
	{
		uVar1 = func_491();
		if (unk_0x31F12808DC47A9E5(uVar1))
		{
			if (unk_0xEE1E09882FA264CA(iVar1))
			{
				if (unk_0xD3287DCBDBC58316(iVar1) != -1)
				{
					if (func_990(unk_0xD3287DCBDBC58316(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
						{
							if (Global_1646129.f_112025[iParam1] != -1)
							{
								return func_489(iParam1, iParam0, 0);
							}
							else
							{
								return func_485(iParam0, unk_0xD3287DCBDBC58316(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_485(iParam0, unk_0xD3287DCBDBC58316(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
			{
				if (Global_1646129.f_112025[iParam1] != -1)
				{
					return func_489(iParam1, iParam0, 0);
				}
				else
				{
					return func_479(0, -1, 0);
				}
			}
			else
			{
				return func_479(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
	{
		if (Global_1646129.f_112025[iParam1] != -1)
		{
			return func_489(iParam1, iParam0, 0);
		}
		else
		{
			return func_485(iParam0, unk_0x8CFC7D6E1DA5D304(), iParam1, bParam2, bParam3);
		}
	}
	return func_485(iParam0, unk_0x8CFC7D6E1DA5D304(), iParam1, bParam2, bParam3);
}

int func_479(bool bParam0, int iParam1, bool bParam2)
{
	return func_480(unk_0x8CFC7D6E1DA5D304(), bParam0, iParam1, bParam2);
}

int func_480(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4AF13BCD120BCDBC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_85(iVar0, iParam2, 0) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_484(1);
				}
				else
				{
					return func_484(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xB03A1684359C50A1(Global_1646129.f_4, 20))
			{
				return func_481(iVar0, iParam2, 1);
			}
			else
			{
				return func_481(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_484(1);
	}
	return func_484(0);
}

int func_481(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_483(iParam0, iParam1);
	if (func_482(Global_1646129.f_116948))
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

int func_482(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_483(int iParam0, int iParam1)
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
			if (!func_85(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_484(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_485(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595681[iVar2 /*678*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_487(1))
			{
				iVar3 = func_289(iParam0);
				if (!iVar3 == -1)
				{
					return func_287(iVar3);
				}
			}
			if ((func_127(iParam1, iParam0, iVar0, 0) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18)) || ((func_85(unk_0x1BE7B010C9B9841E(iParam1), unk_0x1BE7B010C9B9841E(iParam0), 0) && unk_0xB03A1684359C50A1(Global_1646129.f_15, 23)) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18)))
			{
				return func_484(1);
			}
			else if (unk_0xB03A1684359C50A1(Global_1646129.f_15, 26))
			{
				return func_486(1);
			}
			else
			{
				return func_480(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574308 || Global_1574299) || Global_1595681[iParam0 /*678*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574308 == 1 && Global_1574318 == 0))
			{
				return func_484(1);
			}
			else
			{
				return func_480(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574303 && Global_1573838.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_289(iParam0);
	if (!iVar4 == -1)
	{
		return func_287(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_486(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_487(int iParam0)
{
	if ((func_270() || func_488()) || (func_120() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_488()
{
	return Global_2447128.f_15;
}

int func_489(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980512.f_12[iParam0];
	if (func_487(1))
	{
		iVar2 = func_289(iParam1);
		if (!iVar2 == -1)
		{
			return func_287(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xB03A1684359C50A1(Global_1646129.f_97[iParam0 /*9938*/].f_5106[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_81())
	{
		if (Global_1646129.f_112025[iParam0] != -1 && Global_1646129.f_112025[iParam0] <= 4)
		{
			if (Global_1646129.f_112025[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_1646129.f_112025[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_1646129.f_112025[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_1646129.f_112025[iParam0] == 4)
			{
				if (unk_0xB03A1684359C50A1(Global_1646129.f_15, 29))
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
				iVar0 = Global_1646129.f_112025[iParam0];
			}
		}
		else
		{
			iVar0 = func_480(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xB03A1684359C50A1(Global_1646129.f_21, 13))
		{
			iVar0 = func_490(iParam0);
		}
		if (unk_0xB03A1684359C50A1(Global_1646129.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_490(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1646129.f_138651;
			break;
		
		case 1:
			iVar0 = Global_1646129.f_138652;
			break;
		
		case 2:
			iVar0 = Global_1646129.f_138653;
			break;
		
		case 3:
			iVar0 = Global_1646129.f_138654;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_491()
{
	return Global_2359302.f_2;
}

bool func_492()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 4);
}

bool func_493()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

void func_494(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_81();
	uParam1->f_17 = func_81();
	uParam1->f_18 = func_81();
	uParam1->f_19 = func_81();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

int func_495()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
}

bool func_496(bool bParam0)
{
	return func_285(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

int func_497(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_494(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_467(&Var0);
}

char* func_498(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		uVar0 = func_503(&(Global_1627460[iParam0 /*530*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1627460[iParam0 /*530*/].f_11.f_115 != Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_115)
	{
		uVar0 = func_501(iParam0, 0);
		return uVar0;
	}
	if (((func_194(iParam0, 28) || func_194(unk_0x8CFC7D6E1DA5D304(), 28)) || func_500(iParam0)) && !func_499(iParam0))
	{
		return func_501(iParam0, 0);
	}
	iVar1 = func_82(iParam0);
	if (iVar1 != func_81())
	{
		if (iVar1 != unk_0x8CFC7D6E1DA5D304())
		{
			if (!unk_0x929A0C5D6A986B4F() && !unk_0xFD22D3369BAD2674(0, -1, 1))
			{
				return func_501(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_81())
	{
		uVar0 = func_503(&(Global_1627460[iVar1 /*530*/].f_11.f_99));
		if (unk_0xFAFFA408239A026B(uVar0))
		{
			return func_501(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_499(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_83(iParam0) };
	if (unk_0x929A0C5D6A986B4F())
	{
		if (unk_0xC8543F17BC4C0591(0))
		{
			if (unk_0x3F46CD19F4C43D2A(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_81())
	{
		Var0 = { func_83(iParam0) };
		if (unk_0x0A8A596EB9C068FA() || unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0xC8543F17BC4C0591(0))
			{
				return 0;
			}
		}
		else if (unk_0x929A0C5D6A986B4F())
		{
			if (unk_0xC8543F17BC4C0591(0))
			{
				if (unk_0x3F46CD19F4C43D2A(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_501(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_274(iParam0, 1))
		{
			return func_502();
		}
	}
	return unk_0xE883B8F5FA6A04DA("GB_REST_ACC");
}

var func_502()
{
	return unk_0xE883B8F5FA6A04DA("GB_REST_ACCM");
}

var func_503(var uParam0)
{
	return uParam0;
}

void func_504(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	func_677(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17422);
		}
		else
		{
			iVar1 = (iVar1 + func_676(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_675(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17421);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_673(iParam0))
	{
		if (bParam1)
		{
			if (func_672(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				func_671();
			}
			else
			{
				func_670();
			}
		}
		else
		{
			func_669();
		}
	}
	func_653(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_651(iParam0, uParam2, &iVar0, &iVar5);
	func_629(iParam0, uParam2, &iVar0, &iVar5);
	func_603(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	if (iParam0 == 168)
	{
		Global_2512581.f_4878.f_200 = uVar4;
	}
	else
	{
		Global_2512581.f_4878.f_200 = iVar5;
	}
	iVar8 = func_349();
	if (iVar8 != func_81() && iParam0 != 148)
	{
		if (func_285(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			if (!func_320(unk_0x8CFC7D6E1DA5D304(), iVar8, 1))
			{
				func_587(&iVar0, 1);
			}
		}
	}
	func_583(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1807007.f_10 = iVar1;
		func_582();
		func_539(0, unk_0x18F7BE9ACB7D08F4(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1807007.f_9 = iVar0;
		iVar13 = func_495();
		if (iVar13 != func_81())
		{
			func_538(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_496(1);
		if (iParam0 == 168)
		{
			if (!func_537())
			{
				unk_0x7B213E5E67819D11(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_536())
			{
				if (!func_537())
				{
					Var15 = { func_535() };
					unk_0xFDC39FD70DC0CBBD(iVar0, unk_0x6E987D62C8535B6E(func_534(Var15.f_0)), func_533(Var15.f_0), iVar5);
				}
			}
			else if (func_537())
			{
				func_524(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4261865[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B213E5E67819D11(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_880())
			{
				if (!func_537())
				{
					unk_0xFDC39FD70DC0CBBD(iVar0, unk_0x6E987D62C8535B6E(func_534(func_523(unk_0x8CFC7D6E1DA5D304()))), 5, iVar5);
				}
			}
			else if (func_537())
			{
				func_524(-856006867, iVar0, &iVar18, 0, 1, 0);
				Global_4261865[iVar18 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar18 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar18 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B213E5E67819D11(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_880())
			{
				if (!func_537())
				{
					iVar19 = func_519(uParam2->f_16, iVar5);
					iVar20 = iVar0;
					if (iVar19 > 0)
					{
						iVar20 = (iVar20 - iVar19);
					}
					if (iVar7 > 0)
					{
						iVar20 = (iVar20 - iVar7);
					}
					unk_0x338E61993E6352F0(iVar20, iVar5, iVar7, iVar19, uParam2->f_16);
				}
			}
			else if (func_537())
			{
				func_524(463142405, iVar0, &iVar21, 0, 1, 0);
				Global_4261865[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B23758A5E790821(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_537())
			{
				func_524(1407278493, iVar0, &iVar22, 0, 1, 0);
				Global_4261865[iVar22 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar22 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar22 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (func_537())
		{
			func_524(-856006867, iVar0, &iVar23, 0, 1, 0);
			Global_4261865[iVar23 /*80*/].f_8.f_54 = uVar11;
			Global_4261865[iVar23 /*80*/].f_8.f_55 = uVar12;
			Global_4261865[iVar23 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			unk_0xA57DCB671F3ED089(uVar11, uVar12, iVar0, bVar14);
		}
		func_518(iParam0, iVar0);
		if (func_517(iParam0))
		{
			if (func_516(iParam0) > -1)
			{
				func_515(func_516(iParam0), iVar0);
			}
		}
		Global_2458972 = iVar0;
		func_514(&Global_2457240, 0, 0);
	}
	if (func_241(unk_0x8CFC7D6E1DA5D304()) || func_291(unk_0x8CFC7D6E1DA5D304()))
	{
		func_505(iParam0);
	}
	if (func_410(iParam0))
	{
		Global_1807025.f_13 = iVar0;
		Global_1807025.f_14 = iVar1;
	}
	if (func_414(iParam0))
	{
		Global_1807078.f_13 = iVar0;
		Global_1807078.f_14 = iVar1;
	}
	if (func_447(iParam0))
	{
		Global_1807140.f_12 = iVar0;
		Global_1807140.f_13 = iVar1;
	}
	if (func_445(iParam0))
	{
		Global_1807183.f_12 = iVar0;
		Global_1807183.f_13 = iVar1;
	}
	if (func_443(iParam0))
	{
		Global_1807236.f_12 = iVar0;
		Global_1807236.f_13 = iVar1;
	}
}

void func_505(int iParam0)
{
	if (func_513(unk_0x8CFC7D6E1DA5D304()) && func_536())
	{
		if (func_450(iParam0))
		{
			func_508(7180, -1);
		}
		else if (func_507(iParam0))
		{
			func_508(7182, -1);
		}
		else if (func_318(iParam0, 1))
		{
			func_508(7183, -1);
		}
		else if (func_506(iParam0))
		{
			func_508(7184, -1);
		}
	}
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_508(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_512(iParam0, func_396(iParam1), 0);
	iVar0++;
	if (!func_511(iParam0))
	{
		func_510(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_509(iParam0, iVar0, iParam1, 1);
	}
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2522855[iParam0 /*3*/][func_396(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1367820[func_396(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1367826[func_396(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1367832[func_396(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1367838[func_396(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1367796[func_396(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1367802[func_396(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1367808[func_396(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1367814[func_396(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1367772[func_396(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1367778[func_396(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1367784[func_396(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1367790[func_396(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1367844[func_396(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1367850[func_396(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1367856[func_396(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1367862[func_396(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1367868[func_396(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1367874[func_396(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1367880[func_396(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2548958[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2548958[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2548958[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2548958[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 7050:
			Global_2549041[func_396(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1367886[func_396(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1367892[func_396(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1367898[func_396(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1367904[func_396(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2548998[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2548998[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2548998[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2548998[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2548998[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549044[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549044[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549044[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549044[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549044[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549060[0 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549060[1 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549060[2 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549060[3 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549060[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2548998[5 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2548958[4 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549076[func_396(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549085[func_396(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549079[func_396(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549088[func_396(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549082[func_396(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549091[func_396(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549094[func_396(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2548998[6 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2548958[5 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2548998[7 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2548958[6 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2548998[8 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2548958[7 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2548998[9 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2548958[8 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2548998[10 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2548958[9 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2548998[11 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2548958[10 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2548998[12 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2548958[11 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2548998[13 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2548958[12 /*3*/][func_396(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_510(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_396(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
}

int func_511(int iParam0)
{
	if (Global_1367753)
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
			case 7050:
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

int func_512(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_396(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_513(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_101, 14);
}

void func_514(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
	}
	uParam0->f_1 = 1;
}

void func_515(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2512581.f_272 = iParam0;
		if (iParam1 > Global_262145.f_5821)
		{
			iParam1 = Global_262145.f_5821;
		}
		Global_2512581.f_273 = iParam1;
		Global_2512581.f_274 = 0;
	}
}

int func_516(int iParam0)
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
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_517(int iParam0)
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
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_518(int iParam0, int iParam1)
{
	if (func_513(unk_0x8CFC7D6E1DA5D304()) && func_536())
	{
		if (func_450(iParam0) && iParam1 > 0)
		{
			func_510(7181, (func_512(7181, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_519(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_522(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_520(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_520(int iParam0, int iParam1)
{
	return (func_521(iParam0) * iParam1);
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21374;
		
		case 0:
			return Global_262145.f_21375;
		
		case 1:
			return Global_262145.f_21376;
		
		case 2:
			return Global_262145.f_21377;
		
		case 3:
			return Global_262145.f_21378;
		
		case 4:
			return Global_262145.f_21379;
		
		case 5:
			return Global_262145.f_21380;
		
		case 6:
			return Global_262145.f_21381;
		
		case 7:
			return Global_262145.f_21382;
		
		default:
	}
	return 0;
}

float func_522(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21384);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21386;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21383);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21386;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21383);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_523(int iParam0)
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_266.f_160[5 /*12*/];
}

void func_524(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_537())
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
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_525(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
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
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_525(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_525(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_537())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_146()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x0F88B7BAE118271A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE91076F2B8E481C8(iVar4))
		{
			*uParam0 = func_532(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_531(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_526(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_526(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_527(iParam0);
	}
}

void func_527(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_537())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_530(iParam0))
		{
			if (!bVar0)
			{
				unk_0x03E9246EC94148C2();
			}
		}
		else if (!bVar0)
		{
			unk_0xE5D55D650EDFDBAD(Global_4261865[iParam0 /*80*/]);
		}
		func_528(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_528(var uParam0)
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
	func_529(&(uParam0->f_8.f_3));
	func_529(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_529(var uParam0)
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

int func_530(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_531(int iParam0, var uParam1)
{
	Global_2459106 = uParam1;
	Global_2459105 = iParam0;
}

int func_532(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_537())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_534(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_535()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_188;
}

bool func_536()
{
	return func_348(unk_0x8CFC7D6E1DA5D304());
}

int func_537()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_538(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1627460[iParam0 /*530*/].f_11.f_8[0];
	*uParam2 = Global_1627460[iParam0 /*530*/].f_11.f_8[1];
}

int func_539(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_540(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_540(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_550(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x31F12808DC47A9E5(iParam1))
		{
			if (unk_0xB6C2454233C8F532(iParam1))
			{
				uVar1 = unk_0x6DE4035D8BAB73B4(iParam1);
				func_546(unk_0x433176BD83D09D7E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_541(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_541(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_544(iParam0, 1) };
	if (iParam0 == func_543(unk_0x18F7BE9ACB7D08F4()))
	{
		func_542(1);
	}
	func_546(Var0, iParam1, 0, sParam2, iParam3);
}

void func_542(int iParam0)
{
	Global_2436169.f_1774 = iParam0;
}

int func_543(var uParam0)
{
	return uParam0;
}

Vector3 func_544(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xF662B8CF03C92579())
	{
		Var3 = { unk_0xF4A8F5CF2EF6A586(2) };
	}
	if (iParam0 == func_545(unk_0x18F7BE9ACB7D08F4()) && unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
	{
		Var0 = { unk_0x0AF3D0AB54EA2104(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		fVar6 = unk_0x93FDA3BF59E7B77F(iParam0);
		if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xA89DC5E1C1F12DBF(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_545(var uParam0)
{
	return uParam0;
}

void func_546(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436169.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436169.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436169.f_1173[iVar1 /*30*/] = { Param0 };
			Global_2436169.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436169.f_1173[iVar1 /*30*/].f_4 = func_549(Global_2436169.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436169.f_1173[iVar1 /*30*/].f_7 = unk_0xE92FCF3C05C2EF1D();
			Global_2436169.f_1173[iVar1 /*30*/].f_3 = iParam3;
			Global_2436169.f_1173[iVar1 /*30*/].f_8 = iParam4;
			Global_2436169.f_1173[iVar1 /*30*/].f_9 = func_548();
			Global_2436169.f_1173[iVar1 /*30*/].f_10 = func_547();
			StringCopy(&(Global_2436169.f_1173[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436169.f_1173[iVar1 /*30*/].f_26 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), iParam6);
		}
	}
}

int func_547()
{
	if (Global_2436169.f_1774)
	{
		Global_2436169.f_1774 = 0;
		return 1;
	}
	Global_2436169.f_1774 = 0;
	return 0;
}

var func_548()
{
	var uVar0;
	
	uVar0 = Global_2436169.f_1776;
	Global_2436169.f_1776 = 1;
	return uVar0;
}

float func_549(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x15EE504466B7BBD3(unk_0x1F977C2BDC83C388(), Param0, 1);
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

var func_550(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_551(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_551(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_581(unk_0x8CFC7D6E1DA5D304()) || func_580(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_262145.f_8803 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8803;
		}
	}
	else if (func_336() || func_579(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_262145.f_21821 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_21821;
		}
	}
	else if (Global_262145.f_5872 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5872;
	}
	if (func_578(uParam2))
	{
	}
	if (func_577())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_575(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_574(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_572(0, &iVar1);
					break;
				
				case 3:
					func_572(1, &iVar1);
					break;
				
				case 1:
					func_570(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1816884)
		{
			return 0;
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
			func_569(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_561((func_568(unk_0x8CFC7D6E1DA5D304()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x8BB8B0A092C2FA7B(iVar1, iParam8, iParam9);
				if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_2 != -1)
				{
					func_569(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_556(iVar1);
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
				func_552((func_554(unk_0x8CFC7D6E1DA5D304()) + iVar1));
			}
			else
			{
				func_552((func_554(unk_0x8CFC7D6E1DA5D304()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_552(int iParam0)
{
	if (func_577())
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_5 = iParam0;
		func_553(joaat("mpply_globalxp"), iParam0);
	}
}

void func_553(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, 1);
	}
}

int func_554(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_990(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return func_555(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_5;
			}
		}
		else
		{
			return func_555(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_555(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD194C635833AC189(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_556(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_83(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0xE906D9FB40E35957())
	{
		if (unk_0x9FDA5C5DFB3FE364(&Var0))
		{
			iVar13 = func_559(func_560(&Var0));
			if (iVar13 == 0)
			{
				func_558(&Global_1367759, iParam0);
				func_557(joaat("mpply_crew_local_xp_0"), Global_1367759);
			}
			else if (iVar13 == 1)
			{
				func_558(&Global_1367760, iParam0);
				func_557(joaat("mpply_crew_local_xp_1"), Global_1367760);
			}
			else if (iVar13 == 2)
			{
				func_558(&Global_1367761, iParam0);
				func_557(joaat("mpply_crew_local_xp_2"), Global_1367761);
			}
			else if (iVar13 == 3)
			{
				func_558(&Global_1367762, iParam0);
				func_557(joaat("mpply_crew_local_xp_3"), Global_1367762);
			}
			else if (iVar13 == 4)
			{
				func_558(&Global_1367763, iParam0);
				func_557(joaat("mpply_crew_local_xp_4"), Global_1367763);
			}
		}
	}
}

void func_557(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1367754 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1367757 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1367758 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1367759 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1367760 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1367761 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1367762 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1367763 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1367764 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1367765 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1367766 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1367767 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1367768 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1367769 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1367770 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_558(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_559(int iParam0)
{
	if (iParam0 == Global_1367754)
	{
		return 0;
	}
	else if (iParam0 == Global_1367755)
	{
		return 1;
	}
	else if (iParam0 == Global_1367756)
	{
		return 2;
	}
	else if (iParam0 == Global_1367757)
	{
		return 3;
	}
	else if (iParam0 == Global_1367758)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_560(var uParam0)
{
	if (unk_0xE906D9FB40E35957())
	{
		if (unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return Global_2456709;
		}
	}
	return Global_2456709;
}

void func_561(int iParam0, int iParam1, int iParam2)
{
	if (func_577())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8771 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1367874[func_396(-1)])
				{
					unk_0x8BB8B0A092C2FA7B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1367874[func_396(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8770 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x8BB8B0A092C2FA7B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8770 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x8BB8B0A092C2FA7B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_567(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_1 = iParam0;
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_6 = func_565(iParam0, 1);
		}
		func_509(636, iParam0, -1, 1);
		func_510(637, func_565(iParam0, 1), -1, 1, 0);
		Global_1367874[func_396(-1)] = iParam0;
		func_562(7, 0);
	}
}

void func_562(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_564(iParam0, iParam1))
	{
		iVar0 = func_563();
		Global_2456686[iVar0] = iParam0;
	}
}

int func_563()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456686[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_564(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_565(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_566(iParam0, 0);
}

int func_566(int iParam0, int iParam1)
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
		if (Global_284737[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_284737[iVar3] < iParam0)
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

int func_567(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_2436169.f_1, iParam0);
	}
	return 1;
}

int func_568(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return Global_1367874[func_396(-1)];
			}
			else if (func_567(iParam0))
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1367874[func_396(-1)];
	}
	return 0;
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_512(iParam0, func_396(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_511(iParam0))
	{
		func_510(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_509(iParam0, iVar0, iParam2, 1);
	}
}

void func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		iVar4 = unk_0xF4E7C3C6384793AA(iVar0);
		if (unk_0x0CA6AB9C192005B8(iVar4))
		{
			iVar5 = unk_0x8A0B92A0286253B3(iVar4);
			if (unk_0x1BE7B010C9B9841E(iVar5) != -1)
			{
				if (unk_0x1BE7B010C9B9841E(iVar5) == iVar1 || func_85(unk_0x1BE7B010C9B9841E(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x8CFC7D6E1DA5D304())
					{
						if (func_84(unk_0x8CFC7D6E1DA5D304(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_571(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_571(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_571(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_572(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xF02902C16AF3CA92())
		{
			iVar3 = iVar0;
			if (unk_0x0CA6AB9C192005B8(iVar3))
			{
				iVar4 = unk_0x8A0B92A0286253B3(iVar3);
				if (func_990(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x8CFC7D6E1DA5D304())
					{
						iVar1++;
						if (func_84(unk_0x8CFC7D6E1DA5D304(), iVar4))
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
			if (func_990(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x8CFC7D6E1DA5D304())
				{
					if (func_573(unk_0x8CFC7D6E1DA5D304(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_84(unk_0x8CFC7D6E1DA5D304(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_571(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_571(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_573(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_76(iParam0), func_76(iParam1));
	return 0f;
}

int func_574(int iParam0)
{
	int iVar0;
	
	if (unk_0xC7F65B9C83B8BF29() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_571(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_575(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x18DD02B781D4AD2F(iParam0) > func_568(unk_0x8CFC7D6E1DA5D304()))
		{
			iParam0 = -func_568(unk_0x8CFC7D6E1DA5D304());
		}
	}
	if (func_576(8000, 0, 0) > 0)
	{
		if (func_576(8000, 0, 0) < (iParam0 + func_568(unk_0x8CFC7D6E1DA5D304())))
		{
			iParam0 = (func_576(8000, 0, 0) - func_568(unk_0x8CFC7D6E1DA5D304()));
		}
	}
	return iParam0;
}

int func_576(int iParam0, bool bParam1, int iParam2)
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
	return Global_284737[iParam0];
}

int func_577()
{
	return 1;
}

int func_578(var uParam0)
{
	if (unk_0xE0C4A595CD61B7F2(uParam0))
	{
		return 1;
	}
	else if (unk_0x9D39145AD645E383(uParam0, "") || unk_0x9D39145AD645E383(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_579(int iParam0)
{
	return func_443(func_221(iParam0));
}

bool func_580(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

bool func_581(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

void func_582()
{
	Global_2458314 = 1;
}

void func_583(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_199(7))
	{
		return;
	}
	iVar0 = func_586(iParam0);
	iVar1 = func_585(iParam0);
	iVar2 = unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(Global_2512581.f_4878.f_87, unk_0xE92FCF3C05C2EF1D()));
	if (func_584(iParam0) != -1)
	{
		if (iVar2 > func_584(iParam0))
		{
			iVar2 = func_584(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11554)
	{
		iVar2 = Global_262145.f_11554;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_584(int iParam0)
{
	if (func_318(iParam0, 0) || func_507(iParam0))
	{
		return Global_262145.f_17627;
	}
	if (func_450(iParam0))
	{
		return Global_262145.f_17626;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17623;
		
		case 191:
			return Global_262145.f_17625;
		
		case 190:
			return Global_262145.f_17624;
		
		case 227:
			return Global_262145.f_20112;
		
		case 226:
			return Global_262145.f_20100;
		
		case 225:
			return Global_262145.f_20120;
		
		case 230:
			return Global_262145.f_21371;
		
		case 229:
			return Global_262145.f_21275;
		
		case 233:
			return Global_262145.f_21826;
		
		default:
	}
	return -1;
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11645;
		
		case 152:
			return Global_262145.f_11680;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11668;
		
		case 157:
			return Global_262145.f_11635;
		
		case 159:
			return Global_262145.f_11618;
		
		case 164:
			return Global_262145.f_11658;
		
		case 160:
			return Global_262145.f_11708;
		
		case 162:
			return Global_262145.f_11728;
		
		case 163:
			return Global_262145.f_11693;
		
		case 154:
			return Global_262145.f_11763;
		
		case 155:
			return Global_262145.f_11753;
		
		case 153:
			return Global_262145.f_11717;
		
		case 170:
			return Global_262145.f_14140;
		
		case 171:
			return Global_262145.f_14199;
		
		case 172:
			return Global_262145.f_14217;
		
		case 173:
			return Global_262145.f_14158;
		
		case 166:
			return Global_262145.f_14173;
		
		case 167:
			return Global_262145.f_14264;
		
		case 169:
			return Global_262145.f_14236;
		
		case 168:
			return Global_262145.f_14229;
		
		case 179:
			return Global_262145.f_17506;
		
		case 180:
			return Global_262145.f_17285;
		
		case 182:
			return Global_262145.f_17285;
		
		case 183:
			return Global_262145.f_17285;
		
		case 185:
			return Global_262145.f_17285;
		
		case 186:
			return Global_262145.f_17285;
		
		case 189:
			return Global_262145.f_17506;
		
		case 190:
			return Global_262145.f_17161;
		
		case 191:
			return Global_262145.f_17252;
		
		case 192:
			return Global_262145.f_17046;
		
		case 193:
			return Global_262145.f_17506;
		
		case 194:
			return Global_262145.f_17506;
		
		case 195:
			return Global_262145.f_17285;
		
		case 197:
			return Global_262145.f_17285;
		
		case 198:
			return Global_262145.f_17285;
		
		case 199:
			return Global_262145.f_17506;
		
		case 200:
			return Global_262145.f_17506;
		
		case 201:
			return Global_262145.f_17506;
		
		case 205:
			return Global_262145.f_17506;
		
		case 207:
			return Global_262145.f_17285;
		
		case 208:
			return Global_262145.f_17285;
		
		case 209:
			return Global_262145.f_17285;
		
		case 210:
			return Global_262145.f_17506;
		
		case 211:
			return Global_262145.f_17506;
		
		case 214:
			return Global_262145.f_18321;
		
		case 215:
			return Global_262145.f_18323;
		
		case 216:
			return Global_262145.f_18325;
		
		case 217:
			return Global_262145.f_18327;
		
		case 218:
			return Global_262145.f_18329;
		
		case 219:
			return Global_262145.f_18331;
		
		case 220:
			return Global_262145.f_18333;
		
		case 221:
			return Global_262145.f_18335;
		
		case 225:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_20122;
			}
			break;
		
		case 226:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_20102;
			}
			break;
		
		case 227:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_20114;
			}
			break;
		
		case 229:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_21277;
			}
			break;
		
		case 230:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_21373;
			}
			break;
		
		case 233:
			if (func_496(0) || func_346(0))
			{
				return Global_262145.f_21825;
			}
			break;
	}
	return 0;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11644;
		
		case 152:
			return Global_262145.f_11679;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11667;
		
		case 157:
			return Global_262145.f_11634;
		
		case 159:
			return Global_262145.f_11617;
		
		case 164:
			return Global_262145.f_11657;
		
		case 160:
			return Global_262145.f_11707;
		
		case 162:
			return Global_262145.f_11727;
		
		case 163:
			return Global_262145.f_11692;
		
		case 154:
			return Global_262145.f_11762;
		
		case 155:
			return Global_262145.f_11752;
		
		case 153:
			return Global_262145.f_11716;
		
		case 170:
			return Global_262145.f_14139;
		
		case 171:
			return Global_262145.f_14198;
		
		case 172:
			return Global_262145.f_14216;
		
		case 173:
			return Global_262145.f_14157;
		
		case 166:
			return Global_262145.f_14172;
		
		case 179:
			return Global_262145.f_17505;
		
		case 180:
			return Global_262145.f_17284;
		
		case 182:
			return Global_262145.f_17284;
		
		case 183:
			return Global_262145.f_17284;
		
		case 185:
			return Global_262145.f_17284;
		
		case 186:
			return Global_262145.f_17284;
		
		case 189:
			return Global_262145.f_17505;
		
		case 193:
			return Global_262145.f_17505;
		
		case 194:
			return Global_262145.f_17505;
		
		case 195:
			return Global_262145.f_17284;
		
		case 197:
			return Global_262145.f_17284;
		
		case 198:
			return Global_262145.f_17284;
		
		case 199:
			return Global_262145.f_17505;
		
		case 200:
			return Global_262145.f_17505;
		
		case 201:
			return Global_262145.f_17505;
		
		case 205:
			return Global_262145.f_17505;
		
		case 207:
			return Global_262145.f_17284;
		
		case 208:
			return Global_262145.f_17284;
		
		case 209:
			return Global_262145.f_17284;
		
		case 210:
			return Global_262145.f_17505;
		
		case 211:
			return Global_262145.f_17505;
		
		case 190:
			if (!func_880())
			{
				return Global_262145.f_17160;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_880())
			{
				return Global_262145.f_17251;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_880())
			{
				return Global_262145.f_17045;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18320;
		
		case 215:
			return Global_262145.f_18322;
		
		case 216:
			return Global_262145.f_18324;
		
		case 217:
			return Global_262145.f_18326;
		
		case 218:
			return Global_262145.f_18328;
		
		case 219:
			return Global_262145.f_18330;
		
		case 220:
			return Global_262145.f_18332;
		
		case 221:
			return Global_262145.f_18334;
		
		case 225:
			if (func_346(0))
			{
				return Global_262145.f_20121;
			}
			break;
		
		case 226:
			if (func_346(0))
			{
				return Global_262145.f_20101;
			}
			break;
		
		case 227:
			if (func_346(0))
			{
				return Global_262145.f_20113;
			}
			break;
		
		case 229:
			if (func_346(0))
			{
				return Global_262145.f_21276;
			}
			break;
		
		case 230:
			if (func_346(0))
			{
				return Global_262145.f_21372;
			}
			break;
		
		case 233:
			if (func_346(0))
			{
				return Global_262145.f_21827;
			}
			break;
	}
	return 0;
}

void func_587(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_880())
		{
			if (func_496(0))
			{
				if (!func_346(0))
				{
					if (unk_0x4AF13BCD120BCDBC(func_495()))
					{
						if (func_602() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_602());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_600(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_593("GB_BCUT_TICK1", func_495(), iVar0, 0, 0, 1, 1);
						}
						func_592(20);
						func_588(func_495(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_588(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_990(iParam0, 0, 1))
	{
		Var0.f_0 = 2146699483;
		Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_591(iParam0);
		func_590(&(Var0.f_6), &(Var0.f_7));
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_589(iParam0));
	}
}

var func_589(int iParam0)
{
	var uVar0;
	
	unk_0xD2A9C3F486236CC5(&uVar0, iParam0);
	return uVar0;
}

void func_590(var uParam0, var uParam1)
{
	*uParam0 = Global_1644422.f_9;
	*uParam1 = Global_1644422.f_10;
}

var func_591(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_469;
}

void func_592(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4878.f_7[iVar0]), iVar1);
}

int func_593(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		if (unk_0xFAFFA408239A026B(&Var1))
		{
		}
		unk_0x55E6536147AC42E6(sParam0);
		unk_0x70A9E4720D71C2D5(func_478(iParam1, -2, 1, 0));
		unk_0xB4179F7E88F4C4BF(func_598(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x70A9E4720D71C2D5(iParam3);
		}
		unk_0x3A12001DBF78DC62(iParam2);
		iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		func_594(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_594(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_597() || !unk_0x13C2BC1B63ABBCD5()) || !func_144(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return;
	}
	iVar0 = func_595(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1803650.f_5[iVar0 /*53*/] = iParam0;
		Global_1803650.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1803650.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1803650.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1803650.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1803650.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1803650.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_595(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1803650 - 1))
	{
		if (iParam0 > Global_1803650.f_5[iVar0 /*53*/].f_1)
		{
			func_596(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1803650++;
	if (Global_1803650 > 5)
	{
		Global_1803650 = 5;
		return Global_1803650;
	}
	return (Global_1803650 - 1);
}

void func_596(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1803650.f_5[iVar0 /*53*/] = { Global_1803650.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_597()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

var func_598(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_599(&cVar0);
}

var func_599(char[4] cParam0)
{
	return cParam0;
}

void func_600(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_601(1);
	}
	else
	{
		iVar1 = func_601(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_601(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11549;
}

int func_602()
{
	return Global_262145.f_11548;
}

void func_603(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_346(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_880())
		{
			iVar15 = unk_0x8CFC7D6E1DA5D304();
		}
		else
		{
			iVar15 = func_495();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_627(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_618(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_520(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_519(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_617(*iParam2) > 0)
			{
				if (iVar15 == unk_0x8CFC7D6E1DA5D304())
				{
					func_616("SMTICK_RONCUT", func_617(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_617(*iParam2));
			}
			if (iVar15 == unk_0x8CFC7D6E1DA5D304())
			{
				func_614(iVar2, iVar9);
				iVar6 = func_613(&uVar5);
				iVar7 = Global_262145.f_21390;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21389));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_592(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF02902C16AF3CA92())
						{
							iVar19 = iVar18;
							if (unk_0x0CA6AB9C192005B8(iVar19))
							{
								iVar20 = unk_0x8A0B92A0286253B3(iVar19);
								if (func_612(iVar20))
								{
									func_604(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21323;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21324;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1816892 = *iParam2;
					func_592(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_604(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_606(iParam0);
	func_605(iParam0, uVar0, iParam1, iParam2);
}

void func_605(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = -1933172934;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_591(iParam0);
	func_590(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_81())
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_589(iParam0));
		}
	}
}

int func_606(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_611();
	iVar0 = func_609(iParam0, iVar0);
	iVar1 = Global_1627460[func_495() /*530*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14100));
	if (iVar0 < func_608())
	{
		iVar0 = func_608();
	}
	if (iVar0 > func_607())
	{
		iVar0 = func_607();
	}
	return iVar0;
}

int func_607()
{
	return Global_262145.f_14101;
}

int func_608()
{
	return Global_262145.f_15276;
}

int func_609(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_672(iParam0) * func_610());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_610()
{
	return Global_262145.f_15275;
}

var func_611()
{
	return Global_262145.f_11540;
}

int func_612(int iParam0)
{
	if (unk_0x4AF13BCD120BCDBC(iParam0))
	{
		if (iParam0 != unk_0x8CFC7D6E1DA5D304())
		{
			if (func_320(iParam0, unk_0x8CFC7D6E1DA5D304(), 0))
			{
				if (!func_194(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_613(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(iVar0)))
		{
			iVar2 = unk_0x3479F6F64A48251C(iVar0);
			if (!func_144(iVar2, 0) && !func_320(iVar2, unk_0x8CFC7D6E1DA5D304(), 1))
			{
				iVar1++;
			}
			else if (func_144(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_614(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_615(iParam0, 6099);
	}
	if (iParam1 > 0)
	{
		func_615(iParam1, 6100);
	}
}

void func_615(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_512(iParam1, -1, 0);
	func_510(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_616(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	func_594(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_617(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21357);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21358))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21358);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_618(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_625())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_627(unk_0x8CFC7D6E1DA5D304());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_620(func_621(func_624(iVar0), -1, -1));
		if (func_619(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_621(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar0 = 0;
	iVar1 = func_623(iParam0, iParam1);
	uVar2 = func_622(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x76DEA399E0EAFF3A(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_622(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_623(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_625()
{
	return func_626() != 0;
}

int func_626()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_241;
}

int func_627(int iParam0)
{
	if (iParam0 != func_81() && func_628(iParam0))
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_628(int iParam0)
{
	if (iParam0 != func_81())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241 != 0;
	}
	return 0;
}

void func_629(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_346(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_880())
		{
			iVar15 = unk_0x8CFC7D6E1DA5D304();
		}
		else
		{
			iVar15 = func_495();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_523(iVar15);
			iVar0 = (func_650(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_646(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20104));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20103));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x8CFC7D6E1DA5D304())
			{
				func_643(iVar16, iVar2);
				if (func_639(iVar16) >= Global_262145.f_19652 || iVar2 >= Global_262145.f_19652)
				{
					func_630(5);
				}
				iVar6 = func_613(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20106);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20105));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_592(108);
					}
					else
					{
						func_592(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF02902C16AF3CA92())
						{
							iVar19 = iVar18;
							if (unk_0x0CA6AB9C192005B8(iVar19))
							{
								iVar20 = unk_0x8A0B92A0286253B3(iVar19);
								if (func_612(iVar20))
								{
									func_604(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20107;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20108;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1816892 = *iParam2;
					func_592(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_630(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19640)
			{
				if (func_632(Global_262145.f_19641))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19642)
			{
				if (func_632(Global_262145.f_19643))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19644)
			{
				if (func_632(Global_262145.f_19645))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19646)
			{
				if (func_632(Global_262145.f_19647))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19648)
			{
				if (func_632(Global_262145.f_19649))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19650)
			{
				if (func_632(Global_262145.f_19651))
				{
					func_616("CLOTHAWDSTRAP3", Global_262145.f_19652, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19653)
			{
				if (func_632(Global_262145.f_19654))
				{
					func_616("CLOTHAWDSTRAP5", Global_262145.f_19786, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19656)
			{
				if (func_632(Global_262145.f_19657))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19658)
			{
				if (func_632(Global_262145.f_19659))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19660)
			{
				if (func_632(Global_262145.f_19661))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19662)
			{
				if (func_632(Global_262145.f_19663))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19664)
			{
				if (func_632(Global_262145.f_19665))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19666)
			{
				if (func_632(Global_262145.f_19667))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19668)
			{
				if (func_632(Global_262145.f_19669))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19670)
			{
				if (func_632(Global_262145.f_19671))
				{
					func_631("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_631(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam3);
	}
	unk_0xBEFD1ED9B6BE5127(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	}
	else
	{
		Global_2491936 = { func_83(unk_0x8CFC7D6E1DA5D304()) };
		if (unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936))
		{
			iVar1 = 0;
			if (unk_0x9D39145AD645E383(&(Global_2491866.f_22), "Leader") && Global_2491866.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2491866.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x014CE29AD141E6E1(iVar2, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar1, 0, Global_2491866, unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		}
	}
	func_594(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_632(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_636(15417, -1, -1))
			{
				func_635(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_636(15418, -1, -1))
			{
				func_635(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_636(15425, -1, -1))
			{
				func_635(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_636(15405, -1, -1))
			{
				func_635(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_636(15393, -1, -1))
			{
				func_635(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_636(15409, -1, -1))
			{
				func_635(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_636(15396, -1, -1))
			{
				func_635(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_636(15412, -1, -1))
			{
				func_635(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_636(15403, -1, -1))
			{
				func_635(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_636(15389, -1, -1))
			{
				func_635(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_636(15398, -1, -1))
			{
				func_635(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_636(15400, -1, -1))
			{
				func_635(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_636(15408, -1, -1))
			{
				func_635(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_636(15411, -1, -1))
			{
				func_635(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_636(15397, -1, -1))
			{
				func_635(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_636(15413, -1, -1))
			{
				func_635(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_636(15391, -1, -1))
			{
				func_635(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_636(15388, -1, -1))
			{
				func_635(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_636(15401, -1, -1))
			{
				func_635(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_636(15394, -1, -1))
			{
				func_635(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_636(15406, -1, -1))
			{
				func_635(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_636(15395, -1, -1))
			{
				func_635(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_636(15410, -1, -1))
			{
				func_635(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_636(15407, -1, -1))
			{
				func_635(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_636(15414, -1, -1))
			{
				func_635(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_636(15415, -1, -1))
			{
				func_635(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_636(15399, -1, -1))
			{
				func_635(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_636(15404, -1, -1))
			{
				func_635(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_636(15392, -1, -1))
			{
				func_635(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_636(15390, -1, -1))
			{
				func_635(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_636(15402, -1, -1))
			{
				func_635(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_636(15416, -1, -1))
			{
				func_635(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_395(209, -1))
			{
				func_633(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_636(15426, -1, -1))
			{
				func_635(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_636(15422, -1, -1))
			{
				func_635(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_636(15423, -1, -1))
			{
				func_635(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_636(15421, -1, -1))
			{
				func_635(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_636(15427, -1, -1))
			{
				func_635(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_636(15419, -1, -1))
			{
				func_635(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_636(15420, -1, -1))
			{
				func_635(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_634())
	{
		iVar0 = Global_2547154[iParam0 /*3*/][func_396(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, iParam3);
		}
	}
}

int func_634()
{
	return 1;
	return 0;
}

int func_635(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_146();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_636(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar1 = func_638(iParam0, iParam1);
	uVar2 = func_637(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_637(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_638(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_146();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_639(int iParam0)
{
	int iVar0;
	
	iVar0 = func_641(iParam0);
	return func_512(func_640(iVar0), -1, 0);
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3934;
		
		case 1:
			return 3935;
		
		case 2:
			return 3936;
		
		case 3:
			return 3937;
		
		case 4:
			return 3938;
		
		case 5:
			return 5439;
		
		default:
	}
	return 3934;
}

int func_641(int iParam0)
{
	int iVar0;
	
	if (func_642(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_642(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_643(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_641(iParam0);
	iVar1 = func_640(iVar0);
	iVar2 = (func_512(iVar1, -1, 0) + iParam1);
	func_510(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_621(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] != 0)
			{
				iVar1 = func_640(iVar0);
				iVar3 = (iVar3 + func_512(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_645(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_644(9357, iVar5, -1, 1);
	}
}

var func_644(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_146();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xBE55308715B43107(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_646(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_533(iParam1);
	if (func_642(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16105;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16110);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16115);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16104;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16109);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16114);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16103;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16108);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16113);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16101;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16106);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16111);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16102;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16107);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16112);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20129;
				if (func_647(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20131);
				}
				if (func_647(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20130);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_649(iParam0, iParam1))
	{
		iVar0 = func_648(iParam0, iParam1);
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_642(iParam1) && iParam0 != func_81())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_649(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_642(iParam1) && iParam0 != func_81())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_650(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_651(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_536())
			{
				Var0 = { func_535() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_646(unk_0x8CFC7D6E1DA5D304(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17735);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17734);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_613(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17725);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17724));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_592(86);
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (func_346(0))
			{
				Var15 = { func_652(func_495()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_646(func_495(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17735));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17734));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17774;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17775;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_652(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_188;
}

void func_653(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_240(unk_0x8CFC7D6E1DA5D304()))
		{
			if (bParam1)
			{
				func_668();
			}
			func_667();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_240(unk_0x8CFC7D6E1DA5D304()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_659(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_658(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_613(&uVar2);
					iVar4 = Global_262145.f_15286;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14495));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_592(44);
					}
				}
				func_656(*iParam3);
				func_655();
				Global_2512581.f_4878.f_199 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xF02902C16AF3CA92())
				{
					iVar8 = iVar7;
					if (unk_0x0CA6AB9C192005B8(iVar8))
					{
						iVar9 = unk_0x8A0B92A0286253B3(iVar8);
						if (func_612(iVar9))
						{
							func_604(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_240(unk_0x8CFC7D6E1DA5D304()))
		{
			func_654();
		}
	}
}

void func_654()
{
	int iVar0;
	
	iVar0 = Global_2549082[func_146()];
	iVar0++;
	func_509(3656, iVar0, -1, 1);
}

void func_655()
{
	int iVar0;
	
	iVar0 = Global_2549088[func_146()];
	iVar0++;
	func_509(3655, iVar0, -1, 1);
}

void func_656(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2549091[func_146()];
	iVar0 = (iVar0 + iParam0);
	func_509(3657, iVar0, -1, 1);
	if (func_621(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_657(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_644(7666, iVar2, -1, 1);
	}
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15419;
			break;
		
		case 2:
			return Global_262145.f_15420;
			break;
		
		case 3:
			return Global_262145.f_15421;
			break;
		
		case 4:
			return Global_262145.f_15422;
			break;
		
		case 5:
			return Global_262145.f_15423;
			break;
		
		case 6:
			return Global_262145.f_15424;
			break;
		
		case 7:
			return Global_262145.f_15425;
			break;
		
		case 8:
			return Global_262145.f_15426;
			break;
		
		case 9:
			return Global_262145.f_15427;
			break;
		
		case 10:
			return Global_262145.f_15428;
			break;
		
		case 11:
			return Global_262145.f_15429;
			break;
		
		case 12:
			return Global_262145.f_15430;
			break;
		
		case 13:
			return Global_262145.f_15431;
			break;
		
		case 14:
			return Global_262145.f_15432;
			break;
		
		case 15:
			return Global_262145.f_15433;
			break;
		
		case 16:
			return Global_262145.f_15434;
			break;
		
		case 17:
			return Global_262145.f_15435;
			break;
		
		case 18:
			return Global_262145.f_15436;
			break;
		
		case 19:
			return Global_262145.f_15437;
			break;
		
		case 20:
			return Global_262145.f_15438;
			break;
		
		case 21:
			return Global_262145.f_15439;
			break;
		
		case 22:
			return Global_262145.f_15440;
			break;
		
		case 23:
			return Global_262145.f_15441;
			break;
		
		case 24:
			return Global_262145.f_15442;
			break;
	}
	return 0;
}

var func_658(int iParam0)
{
	if (iParam0 >= Global_262145.f_14473)
	{
		return Global_262145.f_14494;
	}
	else if (iParam0 >= Global_262145.f_14472)
	{
		return Global_262145.f_14493;
	}
	else if (iParam0 >= Global_262145.f_14471)
	{
		return Global_262145.f_14492;
	}
	else if (iParam0 >= Global_262145.f_14470)
	{
		return Global_262145.f_14491;
	}
	else if (iParam0 >= Global_262145.f_14469)
	{
		return Global_262145.f_14490;
	}
	else if (iParam0 >= Global_262145.f_14468)
	{
		return Global_262145.f_14489;
	}
	else if (iParam0 >= Global_262145.f_14467)
	{
		return Global_262145.f_14488;
	}
	else if (iParam0 >= Global_262145.f_14466)
	{
		return Global_262145.f_14487;
	}
	else if (iParam0 >= Global_262145.f_14465)
	{
		return Global_262145.f_14486;
	}
	else if (iParam0 >= Global_262145.f_14464)
	{
		return Global_262145.f_14485;
	}
	else if (iParam0 >= Global_262145.f_14463)
	{
		return Global_262145.f_14484;
	}
	else if (iParam0 >= Global_262145.f_14462)
	{
		return Global_262145.f_14483;
	}
	else if (iParam0 >= Global_262145.f_14461)
	{
		return Global_262145.f_14482;
	}
	else if (iParam0 >= Global_262145.f_14460)
	{
		return Global_262145.f_14481;
	}
	else if (iParam0 >= Global_262145.f_14459)
	{
		return Global_262145.f_14480;
	}
	else if (iParam0 >= Global_262145.f_14458)
	{
		return Global_262145.f_14479;
	}
	else if (iParam0 >= Global_262145.f_14457)
	{
		return Global_262145.f_14478;
	}
	else if (iParam0 >= Global_262145.f_14456)
	{
		return Global_262145.f_14477;
	}
	else if (iParam0 >= Global_262145.f_14455)
	{
		return Global_262145.f_14476;
	}
	else if (iParam0 >= Global_262145.f_14454)
	{
		return Global_262145.f_14475;
	}
	return Global_262145.f_14474;
}

int func_659(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_666(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_665(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_664(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_660(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_660(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_664(unk_0x61E9B3BFA06B017B(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_660(int iParam0)
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = func_661(func_662(iParam0));
		return func_512(iVar0, -1, 0);
	}
	return 0;
}

int func_661(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3635;
	}
	else if (iParam0 == 1)
	{
		return 3636;
	}
	else if (iParam0 == 2)
	{
		return 3637;
	}
	else if (iParam0 == 3)
	{
		return 3638;
	}
	else if (iParam0 == 4)
	{
		return 3639;
	}
	return 3635;
}

int func_662(int iParam0)
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_663(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_664(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14673;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14671;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14675;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14669;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14667;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14677;
	}
	return 0;
}

int func_665(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1808393[iVar0] == iParam1 && Global_1808400[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_666(int iParam0)
{
	int iVar0;
	
	if (func_663(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_667()
{
	int iVar0;
	
	iVar0 = Global_2549079[func_146()];
	iVar0++;
	Global_2549079[func_146()] = iVar0;
	func_509(3654, iVar0, -1, 1);
}

void func_668()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2549076[func_146()];
	iVar1 = Global_2549085[func_146()];
	iVar0++;
	iVar1++;
	Global_2549076[func_146()] = iVar0;
	Global_2549085[func_146()] = iVar1;
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_106 = iVar1;
	func_509(3652, iVar0, -1, 1);
	func_509(3653, iVar1, -1, 1);
}

void func_669()
{
	if (func_880())
	{
		Global_2447908.f_3066.f_134 = 0;
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
	}
}

void func_670()
{
	if (func_880())
	{
		if (Global_2447908.f_3066.f_134 < 10)
		{
			Global_2447908.f_3066.f_134++;
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
		}
	}
}

void func_671()
{
	if (func_880())
	{
		if (Global_2447908.f_3066.f_134 > 0)
		{
			Global_2447908.f_3066.f_134 = (Global_2447908.f_3066.f_134 - 1);
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
		}
	}
}

int func_672(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_28;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
			if (func_496(1) && !func_346(1))
			{
				if (func_674(func_495()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_674(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 26);
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11665) * Global_262145.f_11670));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11615) * Global_262145.f_11620));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11642) * Global_262145.f_11646));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11655) * Global_262145.f_11659));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11677) * Global_262145.f_11682));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11839) * Global_262145.f_11840));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11845) * Global_262145.f_11846));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11843) * Global_262145.f_11844));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11837) * Global_262145.f_11838));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11841) * Global_262145.f_11842));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11835) * Global_262145.f_11836));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14196;
		
		case 172:
			return Global_262145.f_14212;
		
		case 173:
			return Global_262145.f_14155;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17429;
		
		case 180:
			return Global_262145.f_17305;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17313;
		
		case 185:
			return Global_262145.f_17322;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17517;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17534;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17382;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17565;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17443;
		
		case 205:
			return Global_262145.f_17552;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17410;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17547;
		
		case 211:
			return Global_262145.f_17511;
		
		case 214:
			return Global_262145.f_18070;
		
		case 215:
			return Global_262145.f_18080;
		
		case 216:
			return Global_262145.f_18090;
		
		case 217:
			return Global_262145.f_18099;
		
		case 218:
			return Global_262145.f_18108;
		
		case 219:
			return Global_262145.f_18124;
		
		default:
	}
	return 0;
}

int func_676(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11666) * Global_262145.f_11671));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11616) * Global_262145.f_11621));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11643) * Global_262145.f_11647));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11656) * Global_262145.f_11660));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11678) * Global_262145.f_11683));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11715) * Global_262145.f_11718));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11761) * Global_262145.f_11764));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11751) * Global_262145.f_11754));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11706) * Global_262145.f_11709));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11726) * Global_262145.f_11731));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11691) * Global_262145.f_11694));
		
		case 170:
			return Global_262145.f_14138;
		
		case 171:
			return Global_262145.f_14197;
		
		case 172:
			return Global_262145.f_14213;
		
		case 173:
			return Global_262145.f_14156;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16233;
		
		case 168:
			return Global_262145.f_16232;
		
		case 179:
			return Global_262145.f_17430;
		
		case 180:
			return Global_262145.f_17306;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17314;
		
		case 185:
			return Global_262145.f_17323;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17518;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17535;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17383;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17566;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17444;
		
		case 205:
			return Global_262145.f_17553;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17411;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17548;
		
		case 211:
			return Global_262145.f_17512;
		
		case 214:
			return Global_262145.f_18071;
		
		case 215:
			return Global_262145.f_18081;
		
		case 216:
			return Global_262145.f_18091;
		
		case 217:
			return Global_262145.f_18100;
		
		case 218:
			return Global_262145.f_18109;
		
		case 219:
			return Global_262145.f_18125;
		
		case 178:
			if (func_880())
			{
				return Global_262145.f_17948;
			}
			else if (bParam1)
			{
				return Global_262145.f_17949;
			}
			break;
		
		case 188:
			if (func_880())
			{
				return Global_262145.f_18032;
			}
			else if (bParam1)
			{
				return Global_262145.f_18033;
			}
			break;
		
		case 225:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20117;
				}
				else
				{
					return Global_262145.f_20118;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_20119;
			}
			break;
		
		case 226:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20097;
				}
				else
				{
					return Global_262145.f_20098;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_20099;
			}
			break;
		
		case 227:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20109;
				}
				else
				{
					return Global_262145.f_20110;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_20111;
			}
			break;
		
		case 229:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21272;
				}
				else
				{
					return Global_262145.f_21273;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_21274;
			}
			break;
		
		case 230:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21368;
				}
				else
				{
					return Global_262145.f_21369;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_21370;
			}
			break;
		
		case 233:
			if (func_880() && !func_536())
			{
				if (func_674(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21823;
				}
				else
				{
					return Global_262145.f_21824;
				}
			}
			else if (func_536())
			{
				return Global_262145.f_21822;
			}
			break;
	}
	return 0;
}

void func_677(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_678(iParam0))
	{
		if (!func_880())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11559;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_410(iParam0))
	{
		*uParam1 = (Global_262145.f_17283 / 100f);
		*uParam2 = (Global_262145.f_17283 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11558;
		*uParam2 = Global_262145.f_11557;
	}
	if (func_410(iParam0))
	{
		if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
		{
			*uParam1 = (Global_262145.f_17282 / 100f);
			*uParam2 = (Global_262145.f_17282 / 100f);
		}
	}
	else if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		*uParam1 = Global_262145.f_11556;
		*uParam2 = Global_262145.f_11555;
	}
	iVar0 = func_349();
	if (iVar0 != func_81())
	{
		if (func_320(unk_0x8CFC7D6E1DA5D304(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_678(int iParam0)
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

void func_679(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_221(unk_0x8CFC7D6E1DA5D304());
	if (func_410(iVar0))
	{
		Global_1807025.f_2 = func_740();
		Global_1807025.f_3 = func_739();
		Global_1807025.f_50 = iParam4;
		Global_1807025.f_51 = iParam5;
		Global_1807025.f_10 = unk_0xE6E19D6A1FC25165();
		Global_1807025.f_20 = (Global_1807025.f_10 - Global_1807025.f_9);
		Global_1807025.f_12 = iParam1;
		Global_1807025.f_19 = func_733(iVar0, bParam0, func_738(bParam3));
		if (bParam0)
		{
			Global_1807025.f_11 = 1;
		}
		else
		{
			Global_1807025.f_11 = 0;
		}
		if ((func_241(unk_0x8CFC7D6E1DA5D304()) || func_390(unk_0x8CFC7D6E1DA5D304())) || func_291(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807025.f_8 = 1;
		}
		else
		{
			Global_1807025.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1807025.f_43 = 0;
			Global_1807025.f_45 = func_732(func_495(), iParam2);
			Global_1807025.f_47 = iParam7;
			Global_1807025.f_46 = iParam6;
			Global_1807025.f_52 = func_731(func_495(), iParam2);
		}
		func_729(iVar0);
	}
	else if (func_414(iVar0))
	{
		Global_1807078.f_2 = func_740();
		Global_1807078.f_3 = func_739();
		Global_1807078.f_10 = unk_0xE6E19D6A1FC25165();
		Global_1807078.f_19 = (Global_1807078.f_10 - Global_1807078.f_9);
		Global_1807078.f_12 = iParam1;
		if (bParam0)
		{
			Global_1807078.f_11 = 1;
		}
		else
		{
			Global_1807078.f_11 = 0;
		}
		if ((func_241(unk_0x8CFC7D6E1DA5D304()) || func_390(unk_0x8CFC7D6E1DA5D304())) || func_291(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807078.f_8 = 1;
		}
		else
		{
			Global_1807078.f_8 = 0;
		}
		func_727(iVar0);
	}
	else if (func_447(iVar0))
	{
		Global_1807140.f_2 = func_740();
		Global_1807140.f_3 = func_739();
		Global_1807140.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807140.f_18 = (Global_1807140.f_9 - Global_1807140.f_8);
		Global_1807140.f_11 = iParam1;
		Global_1807140.f_7 = func_726();
		Global_1807140.f_42 = func_724(func_146(), 5);
		iVar1 = unk_0x8CFC7D6E1DA5D304();
		iVar2 = func_523(iVar1);
		Global_1807140.f_28 = iVar2;
		Global_1807140.f_29 = func_721((func_723(iVar1) || func_722(iVar1)));
		Global_1807140.f_30 = func_721(func_720(iVar1));
		Global_1807140.f_32 = func_721(func_719(iVar1));
		Global_1807140.f_33 = func_721(func_718(iVar1));
		Global_1807140.f_34 = func_721(func_717(iVar1));
		Global_1807140.f_35 = func_721(func_716(0, iVar1) == 1);
		Global_1807140.f_36 = func_721(func_715(iVar1));
		Global_1807140.f_37 = func_721(func_714(iVar1));
		Global_1807140.f_38 = func_721(func_713(iVar1));
		Global_1807140.f_39 = func_721(func_647(iVar1, iVar2, 0));
		Global_1807140.f_40 = func_721(func_647(iVar1, iVar2, 2));
		Global_1807140.f_41 = func_721(func_647(iVar1, iVar2, 1));
		if (func_712(iVar1))
		{
			Global_1807140.f_31 = 2;
		}
		else if (func_711(iVar1))
		{
			Global_1807140.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1807140.f_10 = 1;
		}
		else
		{
			Global_1807140.f_10 = 0;
		}
		if ((func_241(unk_0x8CFC7D6E1DA5D304()) || func_390(unk_0x8CFC7D6E1DA5D304())) || func_291(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_6 = 1;
		}
		else
		{
			Global_1807140.f_6 = 0;
		}
		Global_1807140.f_21 = -2;
		Global_1807140.f_22 = -2;
		func_709(iVar0);
	}
	else if (func_445(iVar0))
	{
		Global_1807183.f_2 = func_740();
		Global_1807183.f_3 = func_739();
		if ((func_241(unk_0x8CFC7D6E1DA5D304()) || func_390(unk_0x8CFC7D6E1DA5D304())) || func_291(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807183.f_6 = 1;
		}
		else
		{
			Global_1807183.f_6 = 0;
		}
		Global_1807183.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807183.f_10 = func_721(bParam0);
		Global_1807183.f_11 = iParam1;
		Global_1807183.f_17 = func_708(func_349());
		Global_1807183.f_18 = (Global_1807183.f_9 - Global_1807183.f_8);
		Global_1807183.f_20 = iParam8;
		Global_1807183.f_21 = -2;
		Global_1807183.f_22 = -2;
		Global_1807183.f_27 = func_707();
		Global_1807183.f_29 = func_512(6090, -1, 0);
		Global_1807183.f_30 = func_512(6086, -1, 0);
		Global_1807183.f_31 = func_512(6087, -1, 0);
		Global_1807183.f_32 = func_512(6089, -1, 0);
		Global_1807183.f_33 = func_512(6088, -1, 0);
		Global_1807183.f_34 = func_512(6091, -1, 0);
		Global_1807183.f_36 = func_721(func_346(1));
		Global_1807183.f_37 = func_704();
		func_689();
		func_687(iVar0);
	}
	else if (func_443(iVar0))
	{
		Global_1807236.f_2 = func_740();
		Global_1807236.f_3 = func_739();
		if ((func_241(unk_0x8CFC7D6E1DA5D304()) || func_390(unk_0x8CFC7D6E1DA5D304())) || func_291(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807236.f_6 = 1;
		}
		else
		{
			Global_1807236.f_6 = 0;
		}
		Global_1807236.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807236.f_10 = func_721(bParam0);
		Global_1807236.f_11 = iParam1;
		Global_1807236.f_18 = (Global_1807236.f_9 - Global_1807236.f_8);
		Global_1807236.f_20 = iParam8;
		Global_1807236.f_23 = Global_786546;
		Global_1807236.f_36 = Global_786546.f_1;
		Global_1807236.f_24 = func_512(6140, -1, 0);
		Global_1807236.f_25 = func_512(6145, -1, 0);
		Global_1807236.f_26 = func_512(6146, -1, 0);
		Global_1807236.f_27 = func_721((((func_686() || func_685()) || func_684()) || func_683(unk_0x8CFC7D6E1DA5D304())));
		Global_1807236.f_28 = func_512(6147, -1, 0);
		Global_1807236.f_29 = func_721(func_682());
		Global_1807236.f_35 = -1;
		Global_1807236.f_38 = -1;
		Global_1807236.f_39 = Global_1807236.f_4;
		Global_1807236.f_40 = Global_1807236.f_5;
		Global_1807236.f_41 = func_740();
		Global_1807236.f_42 = func_721(func_346(1));
		Global_1807236.f_44 = Global_1807236.f_18;
		func_680(iVar0);
	}
	else
	{
		Global_1807007.f_6 = unk_0xE6E19D6A1FC25165();
		if (bParam0)
		{
			Global_1807007.f_7 = 1;
		}
		else
		{
			Global_1807007.f_7 = 0;
		}
		Global_1807007.f_8 = iParam1;
		if (Global_1807007.f_4 == 0)
		{
			if ((func_241(unk_0x8CFC7D6E1DA5D304()) || func_390(unk_0x8CFC7D6E1DA5D304())) || func_291(unk_0x8CFC7D6E1DA5D304()))
			{
				Global_1807007.f_4 = 1;
			}
		}
	}
}

void func_680(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1807236);
	func_681();
}

void func_681()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1807236 = { Var0 };
	Global_1807236.f_16 = 0;
}

bool func_682()
{
	return func_512(6139, -1, 0) != 0;
}

int func_683(int iParam0)
{
	if (iParam0 != func_81())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_248 != 0;
	}
	return 0;
}

bool func_684()
{
	return func_512(6147, -1, 0) == 3;
}

bool func_685()
{
	return func_512(6147, -1, 0) == 2;
}

bool func_686()
{
	return func_512(6147, -1, 0) == 1;
}

void func_687(int iParam0)
{
	unk_0x4809857AF2A6E711(&Global_1807183);
	func_688();
}

void func_688()
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1807183 = { Var0 };
	Global_1807183.f_23 = 0;
	Global_1807183.f_24 = 0;
	Global_1807183.f_16 = 0;
}

void func_689()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_700(12));
		func_699(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320309[iVar1 /*140*/].f_66 != 0 && func_691(Global_1320309[iVar1 /*140*/].f_66, 1))
			{
				if (Global_2512581.f_871 != iVar1)
				{
					if (func_690(Global_1320309[iVar1 /*140*/].f_66))
					{
						if (Global_1320309[iVar1 /*140*/].f_66 != 0)
						{
							iVar3 = Global_1320309[iVar1 /*140*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1807183.f_38 = iVar3;
								break;
							
							case 1:
								Global_1807183.f_39 = iVar3;
								break;
							
							case 2:
								Global_1807183.f_40 = iVar3;
								break;
							
							case 3:
								Global_1807183.f_41 = iVar3;
								break;
							
							case 4:
								Global_1807183.f_42 = iVar3;
								break;
							
							case 5:
								Global_1807183.f_43 = iVar3;
								break;
							
							case 6:
								Global_1807183.f_44 = iVar3;
								break;
							
							case 7:
								Global_1807183.f_45 = iVar3;
								break;
							
							case 8:
								Global_1807183.f_46 = iVar3;
								break;
							
							case 9:
								Global_1807183.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

int func_691(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC3C87280F94833B(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x44243F2E2F58B8E3()) || (iParam0 == joaat("buffalo3") && !unk_0x44243F2E2F58B8E3())) || (iParam0 == joaat("gauntlet2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blista3"))
	{
		if (!func_698())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x469F77B2A79C2220())
		{
			if (unk_0x2164A4E269B646EB(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x0663FFD85FC79E8F(Var1.f_0))
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
		if ((((!func_697() && !func_696()) && !func_695()) && !func_694()) && !func_698())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x929A0C5D6A986B4F() || unk_0xC339C5C5B5E8BC5B()) || unk_0x0A8A596EB9C068FA())
		{
		}
		else if (!func_695())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_693(iParam0))
		{
			return 0;
		}
	}
	if (!func_692(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_692(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_537())
	{
		return 1;
	}
	unk_0xFA7CFD9BFC4E130D(&iVar0, &uVar1);
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
	if (!unk_0x393CD2FA300F18B3(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_693(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2491976)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE6E19D6A1FC25165();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5836 && !Global_262145.f_12069) && iVar1 < Global_262145.f_12070)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13367 && iVar1 < Global_262145.f_13379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13363 && iVar1 < Global_262145.f_13375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13364 && iVar1 < Global_262145.f_13376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13365 && iVar1 < Global_262145.f_13377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13366 && iVar1 < Global_262145.f_13378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13368 && iVar1 < Global_262145.f_13380)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13369 && iVar1 < Global_262145.f_13372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13370 && iVar1 < Global_262145.f_13373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13371 && iVar1 < Global_262145.f_13374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15998 && iVar1 < Global_262145.f_15963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15993 && iVar1 < Global_262145.f_15958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15997 && iVar1 < Global_262145.f_15962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15996 && iVar1 < Global_262145.f_15961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15990 && iVar1 < Global_262145.f_15955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15991 && iVar1 < Global_262145.f_15956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15994 && iVar1 < Global_262145.f_15959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15995 && iVar1 < Global_262145.f_15960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15992 && iVar1 < Global_262145.f_15957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16000 && iVar1 < Global_262145.f_15965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16001 && iVar1 < Global_262145.f_15966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15989 && iVar1 < Global_262145.f_15954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15988 && iVar1 < Global_262145.f_15953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15987 && iVar1 < Global_262145.f_15952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15999 && iVar1 < Global_262145.f_15964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16002 && iVar1 < Global_262145.f_15967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16003 && iVar1 < Global_262145.f_15968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16004 && iVar1 < Global_262145.f_15969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16005 && iVar1 < Global_262145.f_15970)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16150 && iVar1 < Global_262145.f_16172)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16151 && iVar1 < Global_262145.f_16173)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16152 && iVar1 < Global_262145.f_16174)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16153 && iVar1 < Global_262145.f_16175)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16154 && iVar1 < Global_262145.f_16176)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16155 && iVar1 < Global_262145.f_16177)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16157 && iVar1 < Global_262145.f_16178)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16158 && iVar1 < Global_262145.f_16179)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16159 && iVar1 < Global_262145.f_16180)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16160 && iVar1 < Global_262145.f_16181)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16161 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16162 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16163 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16166 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16167 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16156 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16164 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16165 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17801 && iVar1 < Global_262145.f_17861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17802 && iVar1 < Global_262145.f_17862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17803 && iVar1 < Global_262145.f_17863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17804 && iVar1 < Global_262145.f_17864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17805 && iVar1 < Global_262145.f_17865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17806 && iVar1 < Global_262145.f_17866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17807 && iVar1 < Global_262145.f_17867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17808 && iVar1 < Global_262145.f_17868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17809 && iVar1 < Global_262145.f_17869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17810 && iVar1 < Global_262145.f_17870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17811 && iVar1 < Global_262145.f_17871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17812 && iVar1 < Global_262145.f_17872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17813 && iVar1 < Global_262145.f_17873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17814 && iVar1 < Global_262145.f_17874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17815 && iVar1 < Global_262145.f_17875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17816 && iVar1 < Global_262145.f_17876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17817 && iVar1 < Global_262145.f_17877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17818 && iVar1 < Global_262145.f_17878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17819 && iVar1 < Global_262145.f_17879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17820 && iVar1 < Global_262145.f_17880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17821 && iVar1 < Global_262145.f_17881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17822 && iVar1 < Global_262145.f_17882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17823 && iVar1 < Global_262145.f_17883)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18844)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19688 && iVar1 < Global_262145.f_19696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19689 && iVar1 < Global_262145.f_19697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19690 && iVar1 < Global_262145.f_19698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19691 && iVar1 < Global_262145.f_19699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19692 && iVar1 < Global_262145.f_19700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19693 && iVar1 < Global_262145.f_19701)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20464 && iVar1 < Global_262145.f_20484)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20476 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20467 && iVar1 < Global_262145.f_20487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20477 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20465 && iVar1 < Global_262145.f_20485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20481 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20479 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20480 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20475 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20482 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20478 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20474 && iVar1 < Global_262145.f_20494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20466 && iVar1 < Global_262145.f_20486)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20468 && iVar1 < Global_262145.f_20488)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20469 && iVar1 < Global_262145.f_20489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20470 && iVar1 < Global_262145.f_20490)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20471 && iVar1 < Global_262145.f_20491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20472 && iVar1 < Global_262145.f_20492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20473 && iVar1 < Global_262145.f_20493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21428 && iVar1 < Global_262145.f_21456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21429 && iVar1 < Global_262145.f_21457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21430 && iVar1 < Global_262145.f_21458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21431 && iVar1 < Global_262145.f_21459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21432 && iVar1 < Global_262145.f_21460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21433 && iVar1 < Global_262145.f_21461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21434 && iVar1 < Global_262145.f_21462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21435 && iVar1 < Global_262145.f_21463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21436 && iVar1 < Global_262145.f_21464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21437 && iVar1 < Global_262145.f_21465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21438 && iVar1 < Global_262145.f_21466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21439 && iVar1 < Global_262145.f_21467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21440 && iVar1 < Global_262145.f_21468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21441 && iVar1 < Global_262145.f_21469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21442 && iVar1 < Global_262145.f_21470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21443 && iVar1 < Global_262145.f_21471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21444 && iVar1 < Global_262145.f_21472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21445 && iVar1 < Global_262145.f_21473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21446 && iVar1 < Global_262145.f_21474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21447 && iVar1 < Global_262145.f_21475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21448 && iVar1 < Global_262145.f_21476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21449 && iVar1 < Global_262145.f_21477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21450 && iVar1 < Global_262145.f_21478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21451 && iVar1 < Global_262145.f_21479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21452 && iVar1 < Global_262145.f_21480)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_694()
{
	return 0;
}

int func_695()
{
	return 1;
}

int func_696()
{
	return 1;
}

int func_697()
{
	if (unk_0x5E02CD27DBE77D67(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_698()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_699(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9331)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1804002[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x756DE011CEDBBD7E() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_700(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_703(iParam0);
		return func_702(iVar0);
	}
	return (func_701(iParam0, -1) * iParam0);
}

int func_701(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_454(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_460(iParam1))
			{
				return 0;
			}
			else if (func_452(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_703(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_704()
{
	var uVar0;
	
	uVar0 = func_706();
	if (!func_880())
	{
		if (func_495() != func_81())
		{
			uVar0 = func_705(func_495()) + 1;
		}
	}
	return uVar0;
}

int func_705(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_19;
}

int func_706()
{
	return func_705(unk_0x8CFC7D6E1DA5D304()) + 1;
}

int func_707()
{
	return func_512(6096, -1, 0);
}

int func_708(int iParam0)
{
	if (func_285(iParam0, 1))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_410;
	}
	return -1;
}

void func_709(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xDA611A012FA700E9(&Global_1807140);
	func_710();
}

void func_710()
{
	struct<43> Var0;
	
	Global_1807140 = { Var0 };
	Global_1807140.f_23 = 0;
	Global_1807140.f_24 = 0;
	Global_1807140.f_16 = 0;
}

bool func_711(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 12);
}

bool func_712(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 13);
}

int func_713(int iParam0)
{
	if (iParam0 != func_81())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 12) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 13)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_714(int iParam0)
{
	if (iParam0 != func_81())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_715(int iParam0)
{
	if (iParam0 != func_81())
	{
		if (((((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 3) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 4)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 5)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_716(int iParam0, int iParam1)
{
	if (iParam1 == func_81())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 0))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 3))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 6))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 9))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 12))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 15))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 18))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 21))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 1))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 4))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 7))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 10))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 13))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 16))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 19))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 22))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 2))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 5))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 8))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 11))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 14))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 17))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 20))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 23))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_717(int iParam0)
{
	if (iParam0 != func_81())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 6) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 7)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_718(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 8);
}

bool func_719(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 7);
}

bool func_720(int iParam0)
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 9);
}

int func_721(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_722(int iParam0)
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 11);
}

bool func_723(int iParam0)
{
	if (iParam0 == func_81())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 10);
}

int func_724(int iParam0, int iParam1)
{
	return func_512(func_725(iParam1), iParam0, 0);
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3881;
		
		case 1:
			return 3910;
		
		case 2:
			return 3914;
		
		case 3:
			return 3918;
		
		case 4:
			return 3922;
		
		case 5:
			return 5433;
		
		default:
	}
	return 3881;
}

int func_726()
{
	int iVar0;
	
	if (func_536())
	{
		return 4;
	}
	else if (func_880())
	{
		if (func_674(unk_0x8CFC7D6E1DA5D304()))
		{
			return 8;
		}
		return 6;
	}
	if (func_346(1))
	{
		iVar0 = func_708(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_496(1))
	{
		if (func_674(func_495()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_727(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4E7B62933B69DA3F(&Global_1807078);
	func_728();
}

void func_728()
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1807078 = { Var0 };
	Global_1807078.f_24 = 0;
	Global_1807078.f_25 = 0;
	Global_1807078.f_17 = 0;
}

void func_729(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3456F7325A58B63B(&Global_1807025);
	func_730();
}

void func_730()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1807025 = { Var0 };
	Global_1807025.f_29 = 0;
	Global_1807025.f_30 = 0;
	Global_1807025.f_17 = 0;
}

int func_731(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_647(iParam0, iParam1, 2);
	bVar1 = func_647(iParam0, iParam1, 1);
	bVar2 = func_647(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_732(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_733(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_450(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16840;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16839;
		}
		else
		{
			iVar0 = Global_262145.f_16821;
		}
		iVar1 = 19;
	}
	else if (func_449(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_318(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16820;
			iVar1 = 20;
		}
	}
	else if (func_410(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16840;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16839;
		}
		else
		{
			iVar0 = Global_262145.f_16821;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xE567E8F7F9EA6A8C(func_737(func_495()), func_736(func_495()), func_740(), func_739(), iVar1, iVar0);
	}
	func_735(iVar0);
	func_734(iVar0);
	return iVar0;
}

void func_734(int iParam0)
{
	int iVar0;
	
	iVar0 = func_512(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_449 = iVar0;
	func_510(3951, iVar0, -1, 1, 0);
}

void func_735(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	Global_1627460[iVar0 /*530*/].f_11.f_448 = (Global_1627460[iVar0 /*530*/].f_11.f_448 + iParam0);
	if (Global_1627460[iVar0 /*530*/].f_11.f_448 < -9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
	else if (Global_1627460[iVar0 /*530*/].f_11.f_448 > 9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
}

int func_736(int iParam0)
{
	if (iParam0 == func_81())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[1];
}

int func_737(int iParam0)
{
	if (iParam0 == func_81())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[0];
}

int func_738(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_241(unk_0x8CFC7D6E1DA5D304()) || func_291(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

int func_739()
{
	if (Global_1807007.f_3 != 0)
	{
		return Global_1807007.f_3;
	}
	return -1;
}

int func_740()
{
	if (Global_1807007.f_2 != 0)
	{
		return Global_1807007.f_2;
	}
	return -1;
}

int func_741(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_81();
	iVar1 = func_81();
	iVar2 = func_81();
	return func_742(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_742(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_494(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = uParam4;
	Var0.f_70 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_71 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	unk_0xD2A9C3F486236CC5(&(Var0.f_68), 2);
	return func_467(&Var0);
}

int func_743(int iParam0)
{
	int iVar0;
	
	iVar0 = func_289(iParam0);
	if (iVar0 != -1)
	{
		return func_287(iVar0);
	}
	return 1;
}

char* func_744()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_82(unk_0x8CFC7D6E1DA5D304());
	if (iVar0 != func_81())
	{
		if (iVar0 != unk_0x8CFC7D6E1DA5D304())
		{
			if (((func_194(iVar0, 28) || func_194(unk_0x8CFC7D6E1DA5D304(), 28)) || func_500(iVar0)) && !func_499(iVar0))
			{
				return func_501(iVar0, 0);
			}
			if (!unk_0x929A0C5D6A986B4F() && !unk_0xFD22D3369BAD2674(0, -1, 1))
			{
				return func_501(iVar0, 0);
			}
		}
		uVar1 = func_503(&(Global_1627460[iVar0 /*530*/].f_11.f_99));
		if (unk_0xFAFFA408239A026B(uVar1))
		{
			return func_501(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_745()
{
	func_876();
	func_835();
	func_824();
	func_814();
	func_767();
	func_762();
	func_749();
	func_746();
}

void func_746()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_759 != Local_194.f_5)
	{
		if (Local_194.f_34 != -1)
		{
			if (func_436())
			{
				if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 1)
				{
					if (Local_194.f_5 > 0)
					{
						if (Local_194.f_37 > -1)
						{
							iVar0 = unk_0x3479F6F64A48251C(Local_194.f_37);
							if (unk_0x4AF13BCD120BCDBC(iVar0))
							{
								if (iVar0 != unk_0x8CFC7D6E1DA5D304())
								{
									if (func_285(iVar0, 1))
									{
										iVar1 = func_289(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_287(iVar1);
											func_747("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_747("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_759 = Local_194.f_5;
		}
	}
}

int func_747(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		if (unk_0xFAFFA408239A026B(&Var1))
		{
		}
		unk_0x55E6536147AC42E6(sParam0);
		unk_0x70A9E4720D71C2D5(iParam2);
		unk_0xB4179F7E88F4C4BF(func_598(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		}
		else
		{
			Global_2491936 = { func_83(iParam1) };
			if (unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936))
			{
				iVar17 = 0;
				if (unk_0x9D39145AD645E383(&(Global_2491866.f_22), "Leader") && Global_2491866.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2491866.f_21 > 0)
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
						Var1 = { func_748(&Var1) };
					}
					iVar0 = unk_0x014CE29AD141E6E1(iVar18, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar17, 0, Global_2491866, &Var1, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = unk_0xDED68D641B079E77(iVar18, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar17, 0, Global_2491866, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
			}
		}
		func_594(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_748(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_749()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_896() && !func_398())
	{
		return;
	}
	if (unk_0xB03A1684359C50A1(Local_460.f_0, 0))
	{
		return;
	}
	if (!func_436())
	{
		return;
	}
	iVar0 = func_389(unk_0x8CFC7D6E1DA5D304());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_194.f_51)))
	{
		iVar1 = (func_11() - func_761(&(Local_194.f_51), 0, 0));
		iVar2 = (func_183() - Local_194.f_5);
		func_760(iVar1);
		if (iVar1 > 30000)
		{
			func_750(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_750(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_750(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_750(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_758(0) == 0)
	{
		return;
	}
	func_757();
	func_754(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_578(sParam4))
	{
		sVar0 = sParam4;
	}
	func_751(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_751(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_753(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_752(7, iVar0);
		Global_1358718.f_4366[iVar0] = uParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = iParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = uParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = uParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_752(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_753(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
}

void func_754(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_753(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_752(6, iVar0);
		Global_1358718.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_3770.f_183[iVar0] = iParam3;
		Global_1358718.f_3770.f_172[iVar0] = iParam2;
		Global_1358718.f_3770.f_260[iVar0] = iParam4;
		Global_1358718.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1358718.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1358718.f_3770.f_443[iVar0] = iParam7;
		Global_1358718.f_3770.f_454[iVar0] = iParam8;
		Global_1358718.f_3770.f_497[iVar0] = iParam9;
		Global_1358718.f_3770.f_508[iVar0] = iParam10;
		Global_1358718.f_3770.f_205[iVar0] = iParam11;
		Global_1358718.f_3770.f_216[iVar0] = iParam12;
		Global_1358718.f_3770.f_227[iVar0] = iParam13;
		Global_1358718.f_3770.f_238[iVar0] = iParam14;
		Global_1358718.f_3770.f_249[iVar0] = iParam15;
		Global_1358718.f_3770.f_519[iVar0] = iParam16;
		Global_1358718.f_3770.f_530[iVar0] = iParam17;
		Global_1358718.f_3770.f_541[iVar0] = iParam18;
		Global_1358718.f_3770.f_552[iVar0] = iParam19;
		Global_1358718.f_3770.f_563[iVar0] = iParam20;
		Global_1358718.f_3770.f_574[iVar0] = iParam21;
		Global_1358718.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_756())
		{
			Global_1358718.f_1088 = 1;
		}
		if (unk_0xC339C5C5B5E8BC5B())
		{
			iVar2 = 0;
			unk_0xA320869CAE52B097(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1358718.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1358718.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1358718.f_1088 = 1;
			}
			if (func_755())
			{
				Global_1358718.f_1092 = 1;
			}
		}
	}
}

int func_755()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xA320869CAE52B097(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_756()
{
	if (((unk_0xE7A981467BC975BA() == 8 || unk_0xE7A981467BC975BA() == 9) || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 12)
	{
		return 1;
	}
	return 0;
}

void func_757()
{
	unk_0xE05212008FE9A018(8);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(6);
	unk_0xE05212008FE9A018(7);
	Global_2458318 = 1;
}

int func_758(bool bParam0)
{
	if (func_759())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_990(unk_0x8CFC7D6E1DA5D304(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_759()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 12);
}

void func_760(int iParam0)
{
	if (unk_0xB03A1684359C50A1(iLocal_448, 8))
	{
		func_195();
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_448, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x9BEA833CAF67289C("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xD2A9C3F486236CC5(&iLocal_448, 15);
				unk_0xD2A9C3F486236CC5(&iLocal_448, 9);
			}
		}
	}
	if (unk_0xB03A1684359C50A1(iLocal_448, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xB03A1684359C50A1(iLocal_448, 11))
			{
				if (unk_0x6662DABCFF1B4AD5("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 1);
					unk_0x9A70D1B91A853FDD(0);
					unk_0xD2A9C3F486236CC5(&iLocal_448, 11);
				}
			}
			if (!unk_0xB03A1684359C50A1(iLocal_448, 14))
			{
				if (unk_0x9BEA833CAF67289C("APT_COUNTDOWN_30S"))
				{
					unk_0xD2A9C3F486236CC5(&iLocal_448, 14);
				}
			}
			if (unk_0xB03A1684359C50A1(iLocal_448, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xB03A1684359C50A1(iLocal_448, 12))
					{
						unk_0x9A70D1B91A853FDD(1);
						unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 0);
						unk_0xD2A9C3F486236CC5(&iLocal_448, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x9BEA833CAF67289C("APT_FADE_IN_RADIO"))
						{
							unk_0x633C8E78F68C0DAE("APT_COUNTDOWN_30S_KILL");
							unk_0x62148293B793073B(&iLocal_448, 9);
						}
					}
				}
			}
		}
	}
}

int func_761(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0);
		}
		else
		{
			return unk_0xB34837A3BB15AB69(unk_0x5E1037C28AA2B562(), *uParam0);
		}
	}
	return unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0);
}

void func_762()
{
	var uVar0;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x5AD42783360AB57E(Local_194.f_3))
		{
			if (!unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 2))
			{
				if (unk_0x9EE4192FE475677C(unk_0xC6442477EF1FCEE7(Local_194.f_3), unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0xD2A9C3F486236CC5(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 2);
					iLocal_757 = unk_0x2D524E0AFDB169D5();
					if (func_346(1))
					{
						unk_0x929C3CBA660376D5(iLocal_757, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0x929C3CBA660376D5(iLocal_757, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_450 != Local_194.f_5)
	{
		if (unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 3))
		{
			unk_0x62148293B793073B(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 3);
		}
		if (unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 2))
		{
			if (unk_0xA744F72A307A4982(Local_194.f_3))
			{
				uVar0 = unk_0x10427BA8138B7F3E(Local_194.f_3);
				unk_0xD3CBE4DA6FF850F6(&uVar0);
				unk_0x62148293B793073B(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 2);
			}
			else
			{
				unk_0xB9A913FE4C5AD71F(Local_194.f_3);
			}
		}
		else
		{
			iLocal_450 = Local_194.f_5;
		}
	}
	if (unk_0x5AD42783360AB57E(Local_194.f_3))
	{
		if (func_880())
		{
			if (func_896())
			{
				func_764();
			}
		}
		if (!unk_0xB03A1684359C50A1(iLocal_447, 13))
		{
			if (!func_896() || !func_880())
			{
				unk_0x5DB82E31254D4110(unk_0xC6442477EF1FCEE7(Local_194.f_3), 1, 1);
				unk_0xD2A9C3F486236CC5(&iLocal_447, 13);
			}
		}
		if (!unk_0xB03A1684359C50A1(iLocal_447, 3))
		{
			unk_0xC74F690FB603E9C5(unk_0xC6442477EF1FCEE7(Local_194.f_3), 1200);
			unk_0xD2A9C3F486236CC5(&iLocal_447, 3);
		}
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_447, 13))
		{
			unk_0x62148293B793073B(&iLocal_447, 13);
		}
		if (unk_0xB03A1684359C50A1(iLocal_447, 3))
		{
			unk_0x62148293B793073B(&iLocal_447, 3);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_452))
		{
			unk_0x40D517D991458154(&uLocal_452);
		}
	}
	func_763();
}

void func_763()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_436())
	{
		return;
	}
	if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 1)
	{
		if (unk_0x49E68AAD93AADF10(Local_194.f_3) && !unk_0x74C2FE037DFC8B4A(unk_0xC6442477EF1FCEE7(Local_194.f_3), 0))
		{
			if (!unk_0xA3D5B4AC814DFA69(unk_0xC6442477EF1FCEE7(Local_194.f_3)))
			{
				unk_0x954894782056D6CB(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0x90FEECC6315A95B3(2, unk_0x761660F5CE986DC4(unk_0x10427BA8138B7F3E(Local_194.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_764()
{
	int iVar0;
	
	iVar0 = func_389(unk_0x8CFC7D6E1DA5D304());
	if (iVar0 < 2)
	{
		if (unk_0xE769D9B5158D0F11(uLocal_452))
		{
			unk_0x40D517D991458154(&uLocal_452);
		}
		return;
	}
	if (unk_0xE769D9B5158D0F11(uLocal_452))
	{
		return;
	}
	unk_0x62148293B793073B(&iLocal_447, 11);
	uLocal_452 = unk_0xA8EDC17CEEA40DFA(unk_0x10427BA8138B7F3E(Local_194.f_3));
	unk_0xF60CEE5003674AF0(uLocal_452, 12);
	unk_0xDC0EBFC7730AA226(uLocal_452, 459);
	unk_0x61C2EC67C90074E5(uLocal_452, "GB_SGHT_BLP");
	unk_0x63EECA6600F1090E(uLocal_452, 1);
	unk_0x0590222010A36CE4(uLocal_452, Global_262145.f_11514);
	if (func_896())
	{
		func_765(&uLocal_452, 18);
	}
	unk_0x2E9500102925D891(uLocal_452, 1);
	iLocal_758 = unk_0x2D524E0AFDB169D5();
	if (func_346(1))
	{
		unk_0x929C3CBA660376D5(iLocal_758, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", 0);
	}
	else
	{
		unk_0x929C3CBA660376D5(iLocal_758, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
	}
}

void func_765(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		iVar0 = func_766(iParam1);
		unk_0x71925FF3194E84CE(*uParam0, iVar0);
	}
}

int func_766(int iParam0)
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
	unk_0x954894782056D6CB(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_767()
{
	if (unk_0xA651DA0BC9FD8FA4() != Local_194.f_33)
	{
		return;
	}
	if (unk_0x5AD42783360AB57E(Local_194.f_3))
	{
		if (iLocal_754 != -1)
		{
			iLocal_754 = -1;
		}
		if (unk_0xB03A1684359C50A1(Global_4267143, 20))
		{
			unk_0x62148293B793073B(&Global_4267143, 20);
		}
		return;
	}
	if (!unk_0xB03A1684359C50A1(Global_4267143, 20))
	{
		if (!unk_0xB03A1684359C50A1(Global_4267143, 21))
		{
			if (iLocal_754 < 0)
			{
				unk_0xD2A9C3F486236CC5(&Global_4267143, 20);
			}
		}
	}
	if (iLocal_755 == -1)
	{
		iLocal_755 = unk_0x61E9B3BFA06B017B(0, 3);
	}
	if (iLocal_754 < 0)
	{
		if (unk_0xB03A1684359C50A1(Global_4267143, 21))
		{
			unk_0x62148293B793073B(&Global_4267143, 21);
			iLocal_754 = 0;
		}
	}
	func_768();
}

void func_768()
{
	bool bVar0;
	
	if (!unk_0xB03A1684359C50A1(iLocal_447, 4))
	{
		if (iLocal_754 >= 0)
		{
			if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x62148293B793073B(&Local_460, 0);
				iLocal_754 = -1;
			}
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
				{
					func_813(1);
				}
			}
		}
	}
	else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_812(&Local_460);
		func_811(&Local_460);
		unk_0x62148293B793073B(&iLocal_447, 4);
	}
	switch (iLocal_754)
	{
		case 0:
			func_810(1);
			unk_0x8E058779F430F4D7("HACK", 3);
			iLocal_754++;
			break;
		
		case 1:
			if (func_809(1) && unk_0x9F22E45F3CF7EACA(3))
			{
				unk_0xD2A9C3F486236CC5(&Local_460, 0);
				unk_0xD2A9C3F486236CC5(&(Local_460.f_1), 0);
				func_429();
				iLocal_756 = 10;
				if (iLocal_755 == 2)
				{
					Local_460.f_22 = 1;
				}
				else if (iLocal_755 == 1)
				{
					Local_460.f_22 = 0;
					iLocal_756 = 77;
				}
				else if (iLocal_755 == 0)
				{
					iLocal_756 = 50;
					Local_460.f_22 = 0;
				}
				func_804(unk_0x8CFC7D6E1DA5D304(), 0, 66048);
				iLocal_754++;
			}
			else
			{
				if (!func_809(1))
				{
				}
				if (!unk_0x9F22E45F3CF7EACA(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0x3F19B70555683951();
			unk_0xA8C9DB50107F452D(19);
			if (!func_199(0))
			{
				func_225(0);
			}
			if (iLocal_755 == 0)
			{
				func_782(&Local_460, 5, 5, iLocal_756, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_781(&Local_460, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_755 == 1)
			{
				func_782(&Local_460, 5, 5, iLocal_756, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_780(&Local_460, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_755 == 2)
			{
				func_782(&Local_460, 5, 5, iLocal_756, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_769(&Local_460, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xB03A1684359C50A1(Local_460.f_1, 1))
			{
				unk_0x62148293B793073B(&Local_460, 0);
				func_812(&Local_460);
				func_804(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				if (func_199(0))
				{
					func_198(0);
				}
				iLocal_754 = -1;
			}
			else if (bVar0)
			{
				unk_0x62148293B793073B(&Local_460, 0);
				func_812(&Local_460);
				Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_4++;
				unk_0xD2A9C3F486236CC5(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 3);
				iLocal_755++;
				if (iLocal_755 >= 3)
				{
					iLocal_755 = 0;
				}
				if (func_199(0))
				{
					func_198(0);
				}
				func_804(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				iLocal_754++;
			}
			break;
	}
}

int func_769(var uParam0, bool bParam1)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 26))
	{
		if (bParam1)
		{
			func_770(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_770(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x62148293B793073B(uParam0, 0);
	unk_0xD2A9C3F486236CC5(uParam0, 12);
	unk_0x5C8C4D02D2F22207(0);
	if (bParam2)
	{
		if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x52AB59A03580C1C6(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 0);
		}
	}
	if (unk_0xED304DF0BE5BEBDD())
	{
		unk_0x6224B2BB9DC82EA1(0);
	}
	unk_0xEFF1F12403847394(1);
	if (bParam1)
	{
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
	}
	unk_0x13AD763DBD687842(uLocal_77, 0);
	func_774(0);
	func_773();
	unk_0xD879211B8314724D(0);
	func_772(uParam0, 1, 1);
	func_771(0, 1, 1, 0);
}

int func_771(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && iParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_772(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_68[iVar0] != -1)
		{
			if (!unk_0x688DCBE66AEC44C4(iLocal_68[iVar0]))
			{
				unk_0xEF5B50EACBB40FA0(iLocal_68[iVar0]);
				iLocal_68[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0x62148293B793073B(uParam0, 25);
	unk_0x62148293B793073B(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x62148293B793073B(uParam0, 12);
		unk_0x62148293B793073B(uParam0, 9);
		unk_0x62148293B793073B(uParam0, 18);
		unk_0x62148293B793073B(uParam0, 27);
		unk_0x62148293B793073B(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_80 = 0;
	if (bParam1)
	{
		unk_0xEBE532BFFE618875(&uLocal_79);
	}
	unk_0x62148293B793073B(uParam0, 29);
}

void func_773()
{
	int iVar0;
	
	Global_1357213.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1357213.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2512581.f_4500 = 1;
}

void func_774(bool bParam0)
{
	if (bParam0)
	{
		func_779();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_778(0))
		{
			func_775(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_775(int iParam0)
{
	if (Global_14615)
	{
		func_777(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_776())
	{
		Global_14453.f_1 = 3;
	}
}

int func_776()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_777(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_778(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_778(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_779()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

int func_780(var uParam0, bool bParam1)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 9))
	{
		if (bParam1)
		{
			func_770(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_781(var uParam0, bool bParam1)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 18))
	{
		if (bParam1)
		{
			func_770(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_782(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 0))
	{
		func_783(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_783(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
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
	
	unk_0x20ABA6FD12003239(0);
	unk_0x20ABA6FD12003239(2);
	unk_0x5C8C4D02D2F22207(1);
	if (bParam17)
	{
		func_803(1);
	}
	func_802(4, -1);
	func_801(0);
	if (func_809(bParam16))
	{
		if (!unk_0xC83C302702976DCB())
		{
			unk_0x3F19B70555683951();
			unk_0x31B38BBC4423BEAF(1);
			if (unk_0xAF5EF4AF56129D79() == 0 && !unk_0xC83C302702976DCB())
			{
				unk_0x5E70D9959D6F2350(uLocal_79, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0x51B842F5244C55D8(2))
		{
			uParam0->f_290 = unk_0xAA8D3FC9881A3CF4(2, 239);
			uParam0->f_291 = unk_0xAA8D3FC9881A3CF4(2, 240);
			if (uParam0->f_292 != uParam0->f_290 || uParam0->f_293 != uParam0->f_291)
			{
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_CURSOR");
				unk_0x954263F3D07BEFC2(uParam0->f_290);
				unk_0x954263F3D07BEFC2(uParam0->f_291);
				unk_0xE2B30EB9B14EEAB2();
			}
			uParam0->f_292 = uParam0->f_290;
			uParam0->f_293 = uParam0->f_291;
		}
		else
		{
			func_800(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_80 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "MOVE_CURSOR");
					unk_0x954263F3D07BEFC2(fVar6);
					unk_0x954263F3D07BEFC2(fVar7);
					unk_0xE2B30EB9B14EEAB2();
				}
			}
		}
		if (iLocal_80 > 4)
		{
			if (unk_0x51B842F5244C55D8(2))
			{
				uParam0->f_290 = unk_0x53E8174ABB57602F(2, 239);
				uParam0->f_291 = unk_0x53E8174ABB57602F(2, 240);
				if (unk_0x0A8A596EB9C068FA())
				{
					if (uParam0->f_292 != uParam0->f_290)
					{
						if (uParam0->f_290 < 0.49f)
						{
							unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
							unk_0x22DD5585E00B80C3(10);
							unk_0xE2B30EB9B14EEAB2();
						}
						else if (uParam0->f_290 > 0.51f)
						{
							unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
							unk_0x22DD5585E00B80C3(11);
							unk_0xE2B30EB9B14EEAB2();
						}
					}
				}
				uParam0->f_292 = uParam0->f_290;
				uParam0->f_293 = uParam0->f_291;
			}
			if (unk_0xC9FF45E740135482(2))
			{
				fVar8 = unk_0x9163677583862019(2, 1);
				fVar9 = unk_0x9163677583862019(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + unk_0x0000000050597EE2());
				fLocal_74 = (fLocal_74 + fVar8);
				fLocal_75 = (fLocal_75 + fVar9);
				fLocal_76 = (fLocal_76 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					fLocal_74 = (fLocal_74 / fLocal_76);
					fLocal_75 = (fLocal_75 / fLocal_76);
					if (unk_0x36E1A96E1D63ED91(fLocal_75) < 0.2f)
					{
						if (fLocal_74 < 0f)
						{
							bVar10 = true;
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
							unk_0x22DD5585E00B80C3(10);
							unk_0xE2B30EB9B14EEAB2();
						}
						else if (fLocal_74 > 0f)
						{
							bVar10 = true;
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
							unk_0x22DD5585E00B80C3(11);
							unk_0xE2B30EB9B14EEAB2();
						}
					}
					if (unk_0x36E1A96E1D63ED91(fLocal_74) < 0.2f)
					{
						if (fLocal_75 < 0f)
						{
							bVar10 = true;
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
							unk_0x22DD5585E00B80C3(8);
							unk_0xE2B30EB9B14EEAB2();
						}
						else if (fLocal_75 > 0f)
						{
							bVar10 = true;
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
							unk_0x22DD5585E00B80C3(9);
							unk_0xE2B30EB9B14EEAB2();
						}
					}
					if (bVar10)
					{
						unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_74 = 0f;
					fLocal_75 = 0f;
					fLocal_76 = 0f;
				}
			}
			func_799(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0x18DD02B781D4AD2F(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0x688DCBE66AEC44C4(uParam0->f_20))
						{
							if (iLocal_80 != 8)
							{
								unk_0x929C3CBA660376D5(uParam0->f_20, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0xFC0C00F9DE2AEC93(2, 195) || unk_0xFC0C00F9DE2AEC93(2, 196)) || unk_0x02EA7C5633421A0F(2, 195)) || unk_0x02EA7C5633421A0F(2, 196))
			{
			}
			if (unk_0xC9FF45E740135482(2))
			{
				if (unk_0xFC0C00F9DE2AEC93(2, 32) || unk_0xFC0C00F9DE2AEC93(2, 172))
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
					unk_0x22DD5585E00B80C3(8);
					unk_0xE2B30EB9B14EEAB2();
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 33) || unk_0xFC0C00F9DE2AEC93(2, 173))
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
					unk_0x22DD5585E00B80C3(9);
					unk_0xE2B30EB9B14EEAB2();
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 34) || unk_0xFC0C00F9DE2AEC93(2, 174))
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
					unk_0x22DD5585E00B80C3(10);
					unk_0xE2B30EB9B14EEAB2();
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 35) || unk_0xFC0C00F9DE2AEC93(2, 175))
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
					unk_0x22DD5585E00B80C3(11);
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 188))
			{
				unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
				unk_0x22DD5585E00B80C3(8);
				unk_0xE2B30EB9B14EEAB2();
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 187))
			{
				unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
				unk_0x22DD5585E00B80C3(9);
				unk_0xE2B30EB9B14EEAB2();
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 189))
			{
				unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
				unk_0x22DD5585E00B80C3(10);
				unk_0xE2B30EB9B14EEAB2();
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 190))
			{
				unk_0x929C3CBA660376D5(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT");
				unk_0x22DD5585E00B80C3(11);
				unk_0xE2B30EB9B14EEAB2();
			}
		}
		if (bParam12)
		{
			if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
			{
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
				uLocal_78 = unk_0xA2A6B56DFF85AF55();
			}
			if (unk_0xD3DD1071A6494834(uLocal_78))
			{
				iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				if (iVar0 == 6)
				{
					func_798(uParam0);
				}
			}
		}
		func_797();
	}
	if (iLocal_80 == 5 || iLocal_80 == 6)
	{
		if (iLocal_64)
		{
			func_796((iParam15 - (unk_0x5AFB8ED811F05E4D() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_60), unk_0xBBDA792448DB5A89(iLocal_61), unk_0xBBDA792448DB5A89(iLocal_62), -1082130432, -1082130432);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_60), unk_0xBBDA792448DB5A89(iLocal_61), unk_0xBBDA792448DB5A89(iLocal_62), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_80 == 5)
	{
		if (func_795(&iLocal_81, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_81 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
	if (iLocal_80 == 6)
	{
		if (func_795(&iLocal_81, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_81 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_1, 0))
	{
		if (iLocal_80 == 2)
		{
			iLocal_80 = 3;
		}
		else if (iLocal_80 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_80 == 4)
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
	switch (iLocal_80)
	{
		case 0:
			if (!unk_0xB03A1684359C50A1(*uParam0, 29))
			{
				func_794(uParam0, iParam14);
			}
			func_810(1);
			unk_0xD879211B8314724D(1);
			uParam0->f_20 = unk_0x2D524E0AFDB169D5();
			iLocal_154 = 0;
			iLocal_155 = 0;
			uParam0->f_23 = 0;
			iLocal_80++;
			break;
		
		case 1:
			iLocal_68[0] = -1;
			iLocal_68[1] = -1;
			unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0xFCFC4ADF446E9DE6(uLocal_79, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x62148293B793073B(uParam0, 1);
			fLocal_74 = 0f;
			fLocal_75 = 0f;
			fLocal_76 = 0f;
			iLocal_68[0] = unk_0x2D524E0AFDB169D5();
			iLocal_68[1] = unk_0x2D524E0AFDB169D5();
			func_771(1, 0, 1, 0);
			if (uParam0->f_22)
			{
				iLocal_80 = 8;
			}
			else
			{
				iLocal_80++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_405("H_EXIT_PROMPT"))
					{
						if (!func_405("HACKOBJ1"))
						{
							func_793("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (unk_0x51B842F5244C55D8(2))
				{
					if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = unk_0xA2A6B56DFF85AF55();
					}
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
				{
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
					uLocal_78 = unk_0xA2A6B56DFF85AF55();
				}
			}
			if (unk_0xD3DD1071A6494834(uLocal_78))
			{
				iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_405("H_EXIT_PROMPT"))
						{
							unk_0xEFF1F12403847394(1);
						}
					}
					iLocal_65 = 0;
					iLocal_80++;
				}
			}
			if (iLocal_83 == 1)
			{
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
				{
					if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						func_792(0, "");
					}
				}
			}
			if (unk_0xD3DD1071A6494834(uLocal_78))
			{
				iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				if (iVar0 == 80)
				{
					if (iLocal_83 == 0)
					{
						unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
						func_792(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_80 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_405("HACKOBJ2"))
						{
							func_793("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (!unk_0xD3DD1071A6494834(uLocal_78))
				{
					if (unk_0x51B842F5244C55D8(2))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
						{
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = unk_0xA2A6B56DFF85AF55();
						}
					}
					else if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = unk_0xA2A6B56DFF85AF55();
					}
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (iLocal_83 == 0)
				{
					if (!unk_0xD3DD1071A6494834(uLocal_78))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 202))
						{
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_BACK");
							uLocal_78 = unk_0xA2A6B56DFF85AF55();
							if (iParam7 == 1)
							{
								if (func_405("HACKOBJ2"))
								{
									unk_0xEFF1F12403847394(1);
								}
								func_793("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_80 = (iLocal_80 - 1);
							}
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
				{
					if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						func_792(0, "");
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (unk_0xD3DD1071A6494834(uLocal_78))
				{
					iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
					func_792(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_80++;
			}
			break;
		
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
				{
					unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
				{
					unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
				{
					unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_80 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0xB03A1684359C50A1(*uParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_405("HACKOBJ5"))
								{
									func_793("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!unk_0xB03A1684359C50A1(*uParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_405("HACKOBJ3"))
							{
								func_793("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!unk_0xB03A1684359C50A1(*uParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_405("HACKOBJ5"))
							{
								func_793("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_405("HACKOBJ5"))
						{
							unk_0xEFF1F12403847394(1);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (iLocal_83 == 0)
				{
					if (!unk_0xD3DD1071A6494834(uLocal_78))
					{
						if (unk_0x51B842F5244C55D8(2))
						{
							if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
							{
								unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
								uLocal_78 = unk_0xA2A6B56DFF85AF55();
							}
						}
						else if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
						{
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = unk_0xA2A6B56DFF85AF55();
						}
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (!unk_0xD3DD1071A6494834(uLocal_78))
				{
					if (unk_0xFC0C00F9DE2AEC93(2, 202))
					{
						unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_BACK");
						uLocal_78 = unk_0xA2A6B56DFF85AF55();
						if (iParam7 == 1)
						{
							if (func_405("HACKOBJ5") || func_405("HACKOBJ3"))
							{
								unk_0xEFF1F12403847394(1);
							}
							iLocal_65 = 0;
							iLocal_80 = (iLocal_80 - 1);
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
				{
					if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						func_792(0, "");
					}
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (unk_0xD3DD1071A6494834(uLocal_78))
				{
					iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
					func_792(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_81 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0xB03A1684359C50A1(uParam0->f_1, 0))
						{
							unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x7F28ACE4A214000D(uLocal_79, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x7F28ACE4A214000D(uLocal_79, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x7F28ACE4A214000D(uLocal_79, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_63 = unk_0x5AFB8ED811F05E4D();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = unk_0x2D524E0AFDB169D5();
						unk_0x929C3CBA660376D5(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_80++;
					}
					else if (!unk_0xB03A1684359C50A1(*uParam0, 18))
					{
						iLocal_81 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_63 = unk_0x5AFB8ED811F05E4D();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = unk_0x2D524E0AFDB169D5();
						unk_0x929C3CBA660376D5(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_80++;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
							{
								if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
								{
									func_792(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xB03A1684359C50A1(*uParam0, 9))
							{
								func_792(1, "TRYDL");
							}
							else
							{
								func_792(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
						{
							if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
							{
								func_792(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xB03A1684359C50A1(*uParam0, 9))
						{
							func_792(1, "TRYDL");
						}
						else
						{
							func_792(1, "TRYBRUTE");
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
						iLocal_81 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0xB03A1684359C50A1(uParam0->f_1, 0))
						{
							unk_0x7F28ACE4A214000D(uLocal_79, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x7F28ACE4A214000D(uLocal_79, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x7F28ACE4A214000D(uLocal_79, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_63 = unk_0x5AFB8ED811F05E4D();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = unk_0x2D524E0AFDB169D5();
						if (bParam10)
						{
							func_791(uParam0, bParam18);
						}
						unk_0xB9B61C4A0E0C6D75(uLocal_79, "SET_ROULETTE_WORD", &(uParam0->f_14), 0, 0, 0, 0);
						unk_0x929C3CBA660376D5(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_80 = 6;
					}
					else if ((!bParam11 || unk_0xB03A1684359C50A1(*uParam0, 18)) && !unk_0xB03A1684359C50A1(*uParam0, 9))
					{
						iLocal_81 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x7F28ACE4A214000D(uLocal_79, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_63 = unk_0x5AFB8ED811F05E4D();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = unk_0x2D524E0AFDB169D5();
						if (bParam10)
						{
							func_791(uParam0, bParam18);
						}
						if (func_405("HACKOBJ5"))
						{
							unk_0xEFF1F12403847394(1);
						}
						unk_0xB9B61C4A0E0C6D75(uLocal_79, "SET_ROULETTE_WORD", &(uParam0->f_14), 0, 0, 0, 0);
						unk_0x929C3CBA660376D5(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_80 = 6;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
							{
								if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
								{
									func_792(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xB03A1684359C50A1(*uParam0, 18))
							{
								func_792(1, "TRYDL");
							}
							else
							{
								func_792(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
						{
							if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
							{
								func_792(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xB03A1684359C50A1(*uParam0, 18))
						{
							func_792(1, "TRYDL");
						}
						else
						{
							func_792(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0xB03A1684359C50A1(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0xB03A1684359C50A1(*uParam0, 18) && unk_0xB03A1684359C50A1(*uParam0, 9))
						{
							if (!unk_0xB03A1684359C50A1(*uParam0, 28))
							{
								unk_0xD2A9C3F486236CC5(uParam0, 28);
								iLocal_80 = 8;
							}
						}
						else
						{
							if (iLocal_83 == 1)
							{
								if ((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 500)
								{
									if (((unk_0x5AFB8ED811F05E4D() - iLocal_82) > 2500 || unk_0xFC0C00F9DE2AEC93(2, 201)) || unk_0xFC0C00F9DE2AEC93(2, 237))
									{
										func_792(0, "");
									}
								}
							}
							if (iLocal_83 == 0)
							{
								unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0xB03A1684359C50A1(*uParam0, 18))
								{
									func_792(1, "TRYBRUTE");
								}
								else
								{
									func_792(1, "TRYHACK");
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
				if (iLocal_65 == 0)
				{
					func_790("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_790("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (!unk_0xB03A1684359C50A1(uParam0->f_1, 1))
				{
					if (!unk_0xD3DD1071A6494834(uLocal_78))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xA31A6360F0ABAA44(uLocal_79, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
								{
									unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
								{
									unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!unk_0xB03A1684359C50A1(uParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (!unk_0xD3DD1071A6494834(uLocal_78))
				{
					if (unk_0x51B842F5244C55D8(2))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
						{
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = unk_0xA2A6B56DFF85AF55();
						}
					}
					else if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = unk_0xA2A6B56DFF85AF55();
					}
				}
				if (unk_0xD3DD1071A6494834(uLocal_78))
				{
					iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
					{
						unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
					}
					unk_0xD2A9C3F486236CC5(uParam0, 25);
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x929C3CBA660376D5(-1, "HACKING_FAILURE", 0, 1);
					unk_0xFCFC4ADF446E9DE6(uLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_63 = unk_0x5AFB8ED811F05E4D();
				iLocal_68[0] = unk_0x2D524E0AFDB169D5();
				unk_0x929C3CBA660376D5(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0xD2A9C3F486236CC5(uParam0, 25);
				iLocal_64 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0xA31A6360F0ABAA44(uLocal_79, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
					{
						unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				unk_0xD2A9C3F486236CC5(uParam0, 25);
				iLocal_80 = 4;
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (unk_0x5AFB8ED811F05E4D() - iLocal_63));
				if (iVar1 < 1)
				{
					unk_0xD2A9C3F486236CC5(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_63 = unk_0x5AFB8ED811F05E4D();
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x929C3CBA660376D5(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_68[0] != -1)
					{
						if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
						{
							unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					unk_0xFCFC4ADF446E9DE6(uLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0xFCFC4ADF446E9DE6(uLocal_79, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_81 = unk_0x5AFB8ED811F05E4D();
				unk_0xD2A9C3F486236CC5(uParam0, 18);
				iLocal_64 = 0;
				iLocal_65 = 0;
				unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_68[0] != -1)
				{
					if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
					{
						unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_790("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_790("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (!unk_0xD3DD1071A6494834(uLocal_78))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 1))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xA31A6360F0ABAA44(uLocal_79, "CLOSE_APP");
							if (!unk_0x688DCBE66AEC44C4(iLocal_68[0]))
							{
								unk_0xEF5B50EACBB40FA0(iLocal_68[0]);
							}
							if (!unk_0xB03A1684359C50A1(uParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0xD3DD1071A6494834(uLocal_78))
				{
					if (unk_0x51B842F5244C55D8(2))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
						{
							unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = unk_0xA2A6B56DFF85AF55();
						}
					}
					else if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
					{
						unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = unk_0xA2A6B56DFF85AF55();
					}
				}
				if (unk_0xD3DD1071A6494834(uLocal_78))
				{
					iVar0 = unk_0x8B770DAB6473F83C(uLocal_78);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0x929C3CBA660376D5(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0xB03A1684359C50A1(*uParam0, 23))
			{
				if (func_795(&(uParam0->f_10), 500))
				{
					unk_0xA31A6360F0ABAA44(uLocal_79, "RESET_ROULETTE");
					unk_0x62148293B793073B(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0xA31A6360F0ABAA44(uLocal_79, "STOP_ROULETTE");
					uParam0->f_10 = unk_0x5AFB8ED811F05E4D();
					unk_0xD2A9C3F486236CC5(uParam0, 23);
					unk_0xD2A9C3F486236CC5(uParam0, 31);
					if (func_231() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xD2A9C3F486236CC5(uParam0, 25);
					unk_0xD2A9C3F486236CC5(uParam0, 31);
					unk_0x929C3CBA660376D5(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_63 = unk_0x5AFB8ED811F05E4D();
					if (iLocal_68[1] != -1)
					{
						if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
						{
							unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (func_231() == 0)
					{
						unk_0xFCFC4ADF446E9DE6(uLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (unk_0x5AFB8ED811F05E4D() - iLocal_63));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0xD2A9C3F486236CC5(uParam0, 25);
					unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_63 = unk_0x5AFB8ED811F05E4D();
					iLocal_64 = 0;
					iLocal_66 = 1;
					unk_0x929C3CBA660376D5(-1, "HACKING_FAILURE", 0, 1);
					unk_0xEFF1F12403847394(1);
					if (iLocal_68[1] != -1)
					{
						if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
						{
							unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					unk_0xFCFC4ADF446E9DE6(uLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0xD2A9C3F486236CC5(uParam0, 25);
				unk_0x7F28ACE4A214000D(uLocal_79, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_63 = unk_0x5AFB8ED811F05E4D();
				iLocal_68[1] = unk_0x2D524E0AFDB169D5();
				unk_0x929C3CBA660376D5(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_64 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0xD2A9C3F486236CC5(uParam0, 25);
				unk_0xA31A6360F0ABAA44(uLocal_79, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
					{
						unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0xFCFC4ADF446E9DE6(uLocal_79, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_81 = unk_0x5AFB8ED811F05E4D();
				unk_0xD2A9C3F486236CC5(uParam0, 9);
				if (bParam19)
				{
					unk_0x929C3CBA660376D5(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", 1);
				}
				else
				{
					unk_0x929C3CBA660376D5(-1, "HACKING_SUCCESS", 0, 1);
				}
				if (iLocal_68[1] != -1)
				{
					if (!unk_0x688DCBE66AEC44C4(iLocal_68[1]))
					{
						unk_0xEF5B50EACBB40FA0(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0xB03A1684359C50A1(*uParam0, 9) && unk_0xB03A1684359C50A1(*uParam0, 18))
				{
					if (iLocal_154 == 0)
					{
						if (!func_405("HACKOBJ7"))
						{
							func_793("HACKOBJ7");
							iLocal_154 = 1;
						}
					}
				}
				if (((func_405("H_USE_PC6") || func_405("H_USE_PC7")) || func_405("H_USE_PC8")) || func_405("H_USE_PC9"))
				{
					unk_0xEFF1F12403847394(1);
				}
			}
			if ((unk_0xB03A1684359C50A1(*uParam0, 9) && unk_0xB03A1684359C50A1(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0xB03A1684359C50A1(*uParam0, 28))))
			{
				if (func_405("HACKOBJ7"))
				{
					unk_0xEFF1F12403847394(1);
				}
				if (!iLocal_155)
				{
					unk_0x598D55F9D453C505(-1, "unlocked_bleep", unk_0x18F7BE9ACB7D08F4(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_155 = 1;
				}
				if (func_795(&iLocal_81, 3000))
				{
					unk_0x62148293B793073B(uParam0, 0);
					unk_0xD2A9C3F486236CC5(uParam0, 12);
					unk_0xD879211B8314724D(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0xB03A1684359C50A1(*uParam0, 27)) && unk_0xB03A1684359C50A1(*uParam0, 9)) && unk_0xB03A1684359C50A1(*uParam0, 18))
				{
					unk_0x76F4FB5EFF5BDED5(uLocal_79, "OPEN_DOWNLOAD");
					unk_0xD6F1BD29497A51C8(1);
					unk_0xE2B30EB9B14EEAB2();
					unk_0xD2A9C3F486236CC5(uParam0, 27);
				}
				if (func_795(&iLocal_81, 2000))
				{
					unk_0xA31A6360F0ABAA44(uLocal_79, "CLOSE_APP");
					iLocal_80 = 4;
				}
			}
			break;
		
		case 8:
			func_784(uParam0);
			break;
	}
}

void func_784(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_23 > 0)
	{
		if (unk_0xB03A1684359C50A1(*uParam0, 22))
		{
			if (unk_0x1865CC0DAB5F6A86("hackingNG"))
			{
				if (!unk_0xC83C302702976DCB())
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHMain", Local_84.f_0, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_105[0 /*4*/] == 1 && Local_105[1 /*4*/] == 1) && Local_105[2 /*4*/] == 1) && Local_105[3 /*4*/] == 1) && Local_105[4 /*4*/] == 1) && Local_105[5 /*4*/] == 1) && Local_105[6 /*4*/] == 1) && Local_105[7 /*4*/] == 1)
	{
		unk_0x929C3CBA660376D5(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_405("H1_HNG"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (unk_0xC339C5C5B5E8BC5B())
		{
			if (func_405("H1_HNG_KM"))
			{
				unk_0xEFF1F12403847394(1);
			}
		}
		unk_0xD2A9C3F486236CC5(uParam0, 26);
	}
	else if (unk_0xC9FF45E740135482(2))
	{
		if (!func_405("H1_HNG_KM"))
		{
			func_793("H1_HNG_KM");
		}
	}
	else if (!func_405("H1_HNG"))
	{
		func_793("H1_HNG");
	}
	switch (uParam0->f_23)
	{
		case 0:
			unk_0x1E7BE791ACBDDC05("hackingNG", 0);
			unk_0x62148293B793073B(uParam0, 22);
			func_789();
			iLocal_143 = unk_0x5AFB8ED811F05E4D();
			Local_103.f_0 = 0;
			unk_0x62148293B793073B(&uLocal_153, 0);
			unk_0x62148293B793073B(&uLocal_153, 1);
			unk_0x62148293B793073B(&uLocal_153, 2);
			unk_0x62148293B793073B(&uLocal_153, 3);
			unk_0x62148293B793073B(&uLocal_153, 4);
			unk_0x62148293B793073B(&uLocal_153, 5);
			unk_0x62148293B793073B(&uLocal_153, 6);
			unk_0x62148293B793073B(&uLocal_153, 7);
			uParam0->f_23++;
			break;
		
		case 1:
			if (unk_0x1865CC0DAB5F6A86("hackingNG"))
			{
				unk_0xD2A9C3F486236CC5(uParam0, 22);
				unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_CURSOR_VISIBILITY");
				unk_0xD6F1BD29497A51C8(0);
				unk_0xE2B30EB9B14EEAB2();
				uParam0->f_23++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_105[iVar0 /*4*/].f_2 < 1f)
					{
						Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 + ((Local_105[iVar0 /*4*/].f_1 * unk_0x0000000050597EE2()) * fLocal_142));
					}
					else
					{
						Local_105[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_105[iVar0 /*4*/].f_2 > 0f)
				{
					Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 - ((Local_105[iVar0 /*4*/].f_1 * unk_0x0000000050597EE2()) * fLocal_142));
				}
				else
				{
					Local_105[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_105[iVar0 /*4*/] == 0)
				{
					Local_86[iVar0 /*2*/].f_1 = func_787(0.744f, 0.4f, Local_105[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/] == 0)
				{
					if (Local_103.f_0 == iVar0)
					{
						if (!unk_0xB03A1684359C50A1(uLocal_153, iVar0))
						{
							iLocal_144[iVar0] = unk_0x2D524E0AFDB169D5();
							unk_0x929C3CBA660376D5(iLocal_144[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0xD2A9C3F486236CC5(&iLocal_153, iVar0);
						}
						else
						{
							if (Local_105[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_138 = (2f * (1f - Local_105[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_138 = (2f * Local_105[iVar0 /*4*/].f_2);
							}
							unk_0x7A3CC65A48A983E7(iLocal_144[iVar0], "PinMovementY", fLocal_138);
						}
					}
				}
				else if (unk_0xB03A1684359C50A1(iLocal_153, iVar0))
				{
					unk_0xEF5B50EACBB40FA0(iLocal_144[iVar0]);
					unk_0x906C6BAB7E9BD0FF(iLocal_144[iVar0]);
					unk_0x62148293B793073B(&iLocal_153, iVar0);
					iLocal_144[iVar0] = -1;
				}
				iVar0++;
			}
			if (func_786(Local_103.f_0))
			{
				unk_0x929C3CBA660376D5(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
			{
				if (func_795(&iLocal_143, 300))
				{
					if (func_785(Local_103.f_0))
					{
						Local_105[Local_103.f_0 /*4*/] = 1;
						Local_86[Local_103.f_0 /*2*/].f_1 = 0.572f;
						unk_0x929C3CBA660376D5(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_103.f_0 != 7)
						{
							Local_103.f_0++;
						}
					}
					else
					{
						if (Local_103.f_0 != 0)
						{
							if (unk_0xB03A1684359C50A1(iLocal_153, Local_103.f_0))
							{
								unk_0xEF5B50EACBB40FA0(iLocal_144[Local_103.f_0]);
								unk_0x906C6BAB7E9BD0FF(iLocal_144[Local_103.f_0]);
								unk_0x62148293B793073B(&iLocal_153, Local_103.f_0);
								iLocal_144[Local_103.f_0] = -1;
							}
							Local_105[(Local_103.f_0 - 1) /*4*/] = 0;
							Local_103.f_0 = (Local_103.f_0 - 1);
						}
						if (!unk_0xC83C302702976DCB())
						{
							unk_0x754933C14FFBA8EB(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_143 = unk_0x5AFB8ED811F05E4D();
						unk_0x777FEF4633959E0C(0, 100, 100);
						unk_0x929C3CBA660376D5(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_103.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0xC83C302702976DCB())
					{
						unk_0x27CD91E03FF596E2("hackingNG", "DHMain", Local_84.f_0, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_143 = unk_0x5AFB8ED811F05E4D();
					unk_0x777FEF4633959E0C(0, 100, 100);
				}
			}
			if (!unk_0xC83C302702976DCB())
			{
				if (Local_103.f_0 == 0)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 1)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 2)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 3)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 4)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 5)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 6)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103.f_0 == 7)
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHCompHi", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x27CD91E03FF596E2("hackingNG", "DHComp", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0xB03A1684359C50A1(uParam0->f_1, 0))
				{
					if (!unk_0xB03A1684359C50A1(uParam0->f_1, 1))
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 202))
						{
							unk_0xD2A9C3F486236CC5(&(uParam0->f_1), 1);
							unk_0xEFF1F12403847394(1);
						}
					}
				}
			}
			break;
	}
}

int func_785(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 >= fLocal_140 && Local_86[iParam0 /*2*/].f_1 <= fLocal_139)
	{
		return 1;
	}
	return 0;
}

int func_786(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_787(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_788((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_788(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_789()
{
	fLocal_139 = 0.6f;
	fLocal_140 = 0.53f;
	Local_105[0 /*4*/].f_1 = (0.02f * fLocal_141);
	Local_105[1 /*4*/].f_1 = (0.025f * fLocal_141);
	Local_105[2 /*4*/].f_1 = (0.03f * fLocal_141);
	Local_105[3 /*4*/].f_1 = (0.035f * fLocal_141);
	Local_105[4 /*4*/].f_1 = (0.04f * fLocal_141);
	Local_105[5 /*4*/].f_1 = (0.045f * fLocal_141);
	Local_105[6 /*4*/].f_1 = (0.048f * fLocal_141);
	Local_105[7 /*4*/].f_1 = (0.05f * fLocal_141);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
	Local_84.f_0 = 0.5f;
	Local_84.f_1 = 0.5f;
	Local_86[0 /*2*/] = 0.35f;
	Local_86[0 /*2*/].f_1 = 0.4f;
	Local_86[1 /*2*/] = 0.39f;
	Local_86[1 /*2*/].f_1 = 0.4f;
	Local_86[2 /*2*/] = 0.43f;
	Local_86[2 /*2*/].f_1 = 0.4f;
	Local_86[3 /*2*/] = 0.47f;
	Local_86[3 /*2*/].f_1 = 0.4f;
	Local_86[4 /*2*/] = 0.51f;
	Local_86[4 /*2*/].f_1 = 0.74f;
	Local_86[5 /*2*/] = 0.55f;
	Local_86[5 /*2*/].f_1 = 0.74f;
	Local_86[6 /*2*/] = 0.59f;
	Local_86[6 /*2*/].f_1 = 0.74f;
	Local_86[7 /*2*/] = 0.63f;
	Local_86[7 /*2*/].f_1 = 0.74f;
}

void func_790(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

void func_791(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(uParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(uParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(uParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(uParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(uParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(uParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(uParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(uParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(uParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(uParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(uParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_792(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0xFCFC4ADF446E9DE6(uLocal_79, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_82 = unk_0x5AFB8ED811F05E4D();
		iLocal_83 = 1;
	}
	else
	{
		unk_0xFCFC4ADF446E9DE6(uLocal_79, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_83 = 0;
	}
}

void func_793(char* sParam0)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

void func_794(var uParam0, int iParam1)
{
	if (!unk_0xB03A1684359C50A1(*uParam0, 29))
	{
		unk_0x7F28ACE4A214000D(uLocal_79, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0x33CE899911FC2AD8())
		{
			unk_0xFCFC4ADF446E9DE6(uLocal_79, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0xFCFC4ADF446E9DE6(uLocal_79, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0x76F4FB5EFF5BDED5(uLocal_79, "SET_LABELS");
		func_266("H_ICON_1");
		if (iParam1 == 0)
		{
			func_266("H_ICON_2a");
		}
		else
		{
			func_266("H_ICON_2");
		}
		func_266("H_ICON_3");
		func_266("H_ICON_4");
		func_266("H_ICON_5");
		func_266("H_ICON_6");
		unk_0xE2B30EB9B14EEAB2();
		unk_0xD2A9C3F486236CC5(uParam0, 29);
	}
}

int func_795(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x5AFB8ED811F05E4D();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_796(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_797()
{
	if (iLocal_80 < 5)
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 201) || unk_0xFC0C00F9DE2AEC93(2, 237))
		{
			unk_0x929C3CBA660376D5(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_798(var uParam0)
{
	unk_0x52AB59A03580C1C6(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 0);
	if (unk_0xED304DF0BE5BEBDD())
	{
		unk_0x6224B2BB9DC82EA1(0);
	}
	unk_0xEFF1F12403847394(1);
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
	unk_0x13AD763DBD687842(uLocal_77, 0);
	func_774(0);
	func_773();
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0xD879211B8314724D(0);
	func_772(uParam0, 1, 0);
	func_771(0, 1, 1, 0);
}

void func_799(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xAA8D3FC9881A3CF4(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x96D32548EEC3FFE6(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 218) * 127f));
		}
		if (!unk_0x96D32548EEC3FFE6(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 219) * 127f));
		}
		if (!unk_0x96D32548EEC3FFE6(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 220) * 127f));
		}
		if (!unk_0x96D32548EEC3FFE6(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xA9B840C2F681E3E3(2, 221) * 127f));
		}
	}
	if (unk_0xC9FF45E740135482(2))
	{
		if (bParam5)
		{
			if (unk_0x234BD5D0BBB76F14())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xB6C47CF001207E12())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_800(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 221) * 127f));
		}
	}
}

void func_801(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_778(0))
		{
			func_775(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_802(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1357213.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357213.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_803(int iParam0)
{
	Global_1358718.f_1079 = iParam0;
}

void func_804(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0x52F4DD18485E81C7())
		{
			unk_0x3B82047F26E2CEDB(0);
		}
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		iVar0 = iParam2;
		unk_0xF70DE7344EBF0825(iParam0, bParam1, iVar0);
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
		if (!func_374())
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
		if (unk_0x4AF13BCD120BCDBC(iParam0) && unk_0x557001354138B7FB(iParam0))
		{
			uVar25 = unk_0x6604E096142B4B55(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x44243F2E2F58B8E3())
				{
					unk_0x710A8C8CDF18A4F9(1);
				}
				else if (bVar13 || (!func_144(unk_0x8CFC7D6E1DA5D304(), 0) && !func_87()))
				{
					unk_0xA12407EB7D7CF146(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x44243F2E2F58B8E3() && !bVar18)
					{
						unk_0x710A8C8CDF18A4F9(0);
					}
					Global_2422724[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_808(uVar25) && !unk_0x4AA6B5B9E27A254A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(uVar25, true, 0);
					}
				}
				if (!unk_0x4A296E47F281D02F(uVar25))
				{
					if (!bVar20)
					{
						unk_0x73D7E57BF0ED7FEB(uVar25, false);
					}
					unk_0xB05881241072FEE6(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x73D7E57BF0ED7FEB(uVar25, false);
				}
				unk_0x44EB7E24C5D75087(uVar25, true);
				unk_0x36643EAE6212D16F(iParam0, 0);
				unk_0x0ACEE7BC79EA804E(uVar25);
				unk_0xBDFA8A71B1A23D86(uVar25, 1);
				func_807();
				func_806();
				if (unk_0x1E550B6CDBC1308F())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x8BDE5BE4E46BA35F())
				{
				}
				Global_2422724[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_808(uVar25) && !unk_0x4AA6B5B9E27A254A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(uVar25, !bVar14, 0);
					}
					if (!unk_0x4A296E47F281D02F(uVar25))
					{
						if (!bVar20)
						{
							unk_0x73D7E57BF0ED7FEB(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB05881241072FEE6(uVar25, 1);
						}
					}
					if (func_805(Global_1646129.f_138609))
					{
						unk_0x73D7E57BF0ED7FEB(uVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x36643EAE6212D16F(iParam0, 0);
				}
				else
				{
					unk_0x36643EAE6212D16F(iParam0, 1);
				}
				unk_0x44EB7E24C5D75087(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x570C394C1E0D8834(uVar25) && !unk_0x657B649BA2AD3582(uVar25, 0))
					{
						unk_0xD9FCA20C1C5553F7(uVar25);
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
			unk_0xF70DE7344EBF0825(iParam0, bParam1, iVar26);
		}
	}
}

bool func_805(int iParam0)
{
	return iParam0 == 17;
}

void func_806()
{
	struct<3> Var0;
	
	Global_2436169.f_1117 = 0;
	Global_2436169.f_1118 = 0;
	Global_2436169.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436169.f_1124 = -1;
	Global_2436169.f_1125 = 0;
	Global_2405047.f_2648 = { Var0 };
}

void func_807()
{
	Global_2405047.f_674 = 0;
	Global_2405047.f_2691 = 0;
	Global_2405047.f_507 = 0;
	Global_2405047.f_586 = 0;
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_222 = 0;
}

int func_808(var uParam0)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x2BBAA45ECDE3DAE2(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_809(bool bParam0)
{
	if (unk_0x5C716BBF766E1C70(uLocal_79) && (!bParam0 || (((((unk_0x1865CC0DAB5F6A86("HACKING_PC_desktop_0") && unk_0x1865CC0DAB5F6A86("HACKING_PC_desktop_1")) && unk_0x1865CC0DAB5F6A86("HACKING_PC_desktop_2")) && unk_0x1865CC0DAB5F6A86("HACKING_PC_desktop_3")) && unk_0x1865CC0DAB5F6A86("HACKING_PC_desktop_4")) && unk_0x1865CC0DAB5F6A86("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_810(bool bParam0)
{
	if (bParam0)
	{
		unk_0x1E7BE791ACBDDC05("HACKING_PC_desktop_0", 0);
		unk_0x1E7BE791ACBDDC05("HACKING_PC_desktop_1", 0);
		unk_0x1E7BE791ACBDDC05("HACKING_PC_desktop_2", 0);
		unk_0x1E7BE791ACBDDC05("HACKING_PC_desktop_3", 0);
		unk_0x1E7BE791ACBDDC05("HACKING_PC_desktop_4", 0);
		unk_0x1E7BE791ACBDDC05("HACKING_PC_desktop_5", 0);
	}
	uLocal_79 = unk_0x332228784D99B780("Hacking_PC");
}

void func_811(var uParam0)
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x52AB59A03580C1C6(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 0);
	}
	if (unk_0xED304DF0BE5BEBDD())
	{
		unk_0x6224B2BB9DC82EA1(0);
	}
	unk_0x5C8C4D02D2F22207(0);
	unk_0xEFF1F12403847394(1);
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
	unk_0x13AD763DBD687842(uLocal_77, 0);
	unk_0x62148293B793073B(uParam0, 0);
	unk_0x62148293B793073B(uParam0, 12);
	func_774(0);
	func_773();
	unk_0xD879211B8314724D(0);
}

void func_812(var uParam0)
{
	func_772(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_23 = 0;
	Local_103.f_0 = 0;
	Local_103.f_1 = 0;
	unk_0x62148293B793073B(uParam0, 26);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
}

void func_813(bool bParam0)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam0)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	unk_0x9C7EE7DE7041A3F4(0, 69, 1);
	unk_0x9C7EE7DE7041A3F4(0, 70, 1);
	unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
}

void func_814()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB03A1684359C50A1(Local_460.f_0, 0))
	{
		return;
	}
	if (!func_436())
	{
		if (func_405("GB_SGHT_HLP1"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_405("GB_SGHT_HLP2"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_398())
		{
			sVar0 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
			iVar1 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
			if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				if (func_823("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0xEFF1F12403847394(1);
				}
			}
			else if (func_823("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0xEFF1F12403847394(1);
			}
		}
		if (func_405("GB_SGHT_RVL"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return;
	}
	iVar2 = func_389(unk_0x8CFC7D6E1DA5D304());
	if (iVar2 < 2)
	{
		if (func_405("GB_SGHT_HLP1"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_405("GB_SGHT_HLP2"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_398())
		{
			sVar0 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
			iVar1 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
			if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				if (func_823("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0xEFF1F12403847394(1);
				}
			}
			else if (func_823("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0xEFF1F12403847394(1);
			}
		}
		if (func_405("GB_SGHT_RVL"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_447, 2))
	{
		if (!func_822(86))
		{
			if (iLocal_754 == -1)
			{
				if (func_816(0, 1, 1, 1))
				{
					if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
					{
						func_413("GB_SGHT_HLP1", -1);
						func_412(1);
						unk_0xD2A9C3F486236CC5(&iLocal_447, 2);
					}
					else if (func_897() == Local_194.f_33)
					{
						func_413("GB_SGHT_HLP2", -1);
						func_412(1);
						unk_0xD2A9C3F486236CC5(&iLocal_447, 2);
					}
					else if (func_398())
					{
						sVar0 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
						iVar1 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
						if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
						{
							func_815("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_412(1);
						}
						else
						{
							func_815("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_412(1);
						}
						unk_0xD2A9C3F486236CC5(&iLocal_447, 2);
					}
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&iLocal_447, 2);
			}
		}
	}
	if (unk_0xB03A1684359C50A1(iLocal_447, 2))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_447, 7))
		{
			if (iLocal_754 == -1)
			{
				if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
				{
					if (func_816(0, 1, 1, 1))
					{
						func_413("GB_SGHT_APPH", -1);
						func_412(1);
						unk_0xD2A9C3F486236CC5(&iLocal_447, 7);
					}
				}
				else
				{
					unk_0xD2A9C3F486236CC5(&iLocal_447, 7);
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&iLocal_447, 7);
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(iLocal_447, 8))
	{
		if (func_896())
		{
			if (func_880())
			{
				if (unk_0x5AD42783360AB57E(Local_194.f_3))
				{
					if (func_816(0, 1, 1, 1))
					{
						func_413("GB_SGHT_PKGH", -1);
						func_412(1);
						unk_0xD2A9C3F486236CC5(&iLocal_447, 8);
					}
				}
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(iLocal_447, 12))
	{
		if (func_896())
		{
			if (Local_194.f_5 > 0 || unk_0xB03A1684359C50A1(Local_194.f_1, 6))
			{
				if (func_816(0, 1, 1, 1))
				{
					func_413("GB_SGHT_RVL", -1);
					func_412(1);
					unk_0xD2A9C3F486236CC5(&iLocal_447, 12);
				}
			}
		}
	}
}

void func_815(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x2202872EA73499C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	unk_0xB4179F7E88F4C4BF(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam4);
	}
	unk_0xBEFD1ED9B6BE5127(sParam3);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam5);
}

int func_816(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x622E10ED992CEB95())
	{
		return 0;
	}
	if (func_821())
	{
		return 0;
	}
	if (!unk_0xC8AB6A5E6C1E6613())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (func_464())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_38(unk_0x8CFC7D6E1DA5D304(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_820(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (func_819())
	{
		return 0;
	}
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (Global_1574118)
	{
		return 0;
	}
	if (func_818())
	{
		return 0;
	}
	if (func_817())
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (Global_2521479)
	{
		return 0;
	}
	return 1;
}

bool func_817()
{
	return Global_2447128.f_579;
}

bool func_818()
{
	return Global_2447128.f_731;
}

bool func_819()
{
	return Global_2436169.f_2911.f_578;
}

int func_820(int iParam0)
{
	if (Global_2422724[iParam0 /*420*/].f_223 == 0)
	{
		return 0;
	}
	return 1;
}

int func_821()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

bool func_822(int iParam0)
{
	return Global_2436169.f_2591[0 /*79*/].f_1 == iParam0;
}

bool func_823(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0x24BB6189982CE7D6(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	unk_0xB4179F7E88F4C4BF(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam4);
	}
	unk_0xBEFD1ED9B6BE5127(sParam3);
	return unk_0xF2850FB50EE28440(0);
}

void func_824()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB03A1684359C50A1(Local_460.f_0, 0))
	{
		return;
	}
	if (!func_436())
	{
		if (unk_0xB03A1684359C50A1(iLocal_447, 5))
		{
			if (Local_194.f_34 != -1)
			{
				iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
				if (iVar0 > -1)
				{
					if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_194.f_34)))
					{
						iVar1 = func_287(iVar0);
						iVar2 = func_766(iVar1);
						func_427(unk_0x3479F6F64A48251C(Local_194.f_34), 432, 0);
						func_425(unk_0x3479F6F64A48251C(Local_194.f_34), iVar2, 0);
						func_424(unk_0x3479F6F64A48251C(Local_194.f_34), 0, 0);
						func_423(unk_0x3479F6F64A48251C(Local_194.f_34), 0);
						func_422(unk_0x3479F6F64A48251C(Local_194.f_34), Global_262145.f_11514, 0);
						unk_0x62148293B793073B(&iLocal_447, 5);
					}
					else
					{
						unk_0x62148293B793073B(&iLocal_447, 5);
					}
				}
			}
			func_429();
		}
		return;
	}
	if (!unk_0x5AD42783360AB57E(Local_194.f_3))
	{
		if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
		{
			if (!unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 3))
			{
				if (!unk_0xB03A1684359C50A1(Local_460.f_0, 0))
				{
					if (Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_5 < 3)
					{
						if (func_389(unk_0x8CFC7D6E1DA5D304()) == 3)
						{
							if (!func_834("GB_SGHT_HCK"))
							{
								func_831("GB_SGHT_HCK", 0);
							}
						}
						else if (func_834("GB_SGHT_HCK"))
						{
							func_429();
						}
					}
					else
					{
						func_429();
					}
				}
			}
		}
		else if (func_897() == Local_194.f_33)
		{
			if (Local_194.f_34 != -1)
			{
				if (func_389(unk_0x8CFC7D6E1DA5D304()) == 3)
				{
					if (!func_834("GB_SGHT_PROT"))
					{
						iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_287(iVar0);
							func_825("GB_SGHT_PROT", unk_0x3479F6F64A48251C(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_834("GB_SGHT_PROT"))
				{
					func_429();
				}
			}
		}
		else if (func_398())
		{
			if (Local_194.f_34 != -1)
			{
				if (func_389(unk_0x8CFC7D6E1DA5D304()) == 3)
				{
					if (Local_194.f_34 != -1)
					{
						iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_287(iVar0);
							if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
							{
								if (!func_834("GB_SGHT_STOP"))
								{
									func_825("GB_SGHT_STOP", unk_0x3479F6F64A48251C(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_834("GB_SGHT_STOP"))
							{
								func_825("GB_SGHT_STOP", unk_0x3479F6F64A48251C(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_834("GB_SGHT_STOP"))
					{
						func_429();
					}
					if (func_834("GB_SGHT_STOP2"))
					{
						func_429();
					}
				}
				if (func_389(unk_0x8CFC7D6E1DA5D304()) >= 2)
				{
					if (!unk_0xB03A1684359C50A1(iLocal_447, 5))
					{
						if (Local_194.f_34 != -1)
						{
							if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_194.f_34)))
							{
								if (func_990(unk_0x3479F6F64A48251C(Local_194.f_34), 1, 1))
								{
									iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_287(iVar0);
										iVar2 = func_766(iVar1);
										func_427(unk_0x3479F6F64A48251C(Local_194.f_34), 432, 1);
										func_425(unk_0x3479F6F64A48251C(Local_194.f_34), iVar2, 1);
										func_424(unk_0x3479F6F64A48251C(Local_194.f_34), 1, 1);
										func_423(unk_0x3479F6F64A48251C(Local_194.f_34), 1);
										func_422(unk_0x3479F6F64A48251C(Local_194.f_34), Global_262145.f_11514, 1);
										unk_0xD2A9C3F486236CC5(&iLocal_447, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0xB03A1684359C50A1(iLocal_447, 5))
				{
					if (Local_194.f_34 != -1)
					{
						iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_287(iVar0);
							iVar2 = func_766(iVar1);
							func_427(unk_0x3479F6F64A48251C(Local_194.f_34), 432, 0);
							func_425(unk_0x3479F6F64A48251C(Local_194.f_34), iVar2, 0);
							func_424(unk_0x3479F6F64A48251C(Local_194.f_34), 0, 0);
							func_423(unk_0x3479F6F64A48251C(Local_194.f_34), 0);
							func_422(unk_0x3479F6F64A48251C(Local_194.f_34), Global_262145.f_11514, 0);
							unk_0x62148293B793073B(&iLocal_447, 5);
						}
					}
				}
			}
		}
	}
	else if (func_389(unk_0x8CFC7D6E1DA5D304()) == 3)
	{
		if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
		{
			if (!unk_0xB03A1684359C50A1(Local_460.f_0, 0))
			{
				if (!func_834("GB_SGHT_RETP"))
				{
					func_831("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_897() == Local_194.f_33)
		{
			if (Local_194.f_34 != -1)
			{
				if (!func_834("GB_SGHT_PROT"))
				{
					iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_287(iVar0);
						func_825("GB_SGHT_PROT", unk_0x3479F6F64A48251C(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_398())
		{
			if (Local_194.f_34 != -1)
			{
				iVar0 = func_289(unk_0x3479F6F64A48251C(Local_194.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_287(iVar0);
					if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_834("GB_SGHT_STOP"))
						{
							func_825("GB_SGHT_STOP", unk_0x3479F6F64A48251C(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_834("GB_SGHT_STOP"))
					{
						func_825("GB_SGHT_STOP", unk_0x3479F6F64A48251C(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_834("GB_SGHT_PROT"))
		{
			func_429();
		}
		if (func_834("GB_SGHT_RETP"))
		{
			func_429();
		}
		if (func_834("GB_SGHT_STOP"))
		{
			func_429();
		}
		if (func_834("GB_SGHT_STOP2"))
		{
			func_429();
		}
	}
}

void func_825(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_826(sParam0, unk_0x3E8AA4B2B7764D27(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312576 = 15;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_57 = iParam4;
		Global_1312576.f_54 = iParam1;
	}
}

int func_826(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam1))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam2))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam2) > 63)
	{
		return 0;
	}
	if (func_830(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_430();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_829();
	func_828(bParam3);
	func_827();
	return 1;
}

void func_827()
{
	unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 1);
}

void func_828(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x62148293B793073B(&(Global_1312576.f_59), 0);
}

void func_829()
{
	Global_1312576.f_10 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 86400000);
	Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
}

bool func_830(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_435())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam1))
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam2))
	{
		return 0;
	}
	if (!unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!unk_0x6E987D62C8535B6E(sParam1) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam2) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_32));
}

void func_831(char* sParam0, bool bParam1)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return;
	}
	if (func_832(sParam0))
	{
		return;
	}
	func_430();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_829();
	func_828(bParam1);
	func_827();
}

bool func_832(char* sParam0)
{
	if (!func_435())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_833(uParam0);
	}
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12));
}

bool func_833(char* sParam0)
{
	if (!func_435())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16));
}

int func_834(char* sParam0)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (!func_435())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xA49B74E0C954F146(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return 0;
	}
	return func_832(sParam0);
}

void func_835()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_896() && !func_398())
	{
		return;
	}
	if (!func_436())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_447, 1))
	{
		iVar0 = func_389(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 >= 2)
		{
			if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33 || func_897() == Local_194.f_33)
			{
				if (func_859(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_497(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x7AAF0D0539858018(1);
					unk_0xBECAE3C0924E0C30(unk_0x8CFC7D6E1DA5D304(), joaat("pickup_portable_package"), 1);
					func_858(1);
					func_836(-1, 0, 0, -1, 0);
				}
			}
			else if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				sVar1 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
				uVar2 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
				func_741(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_836(-1, 0, 0, -1, 0);
			}
			else
			{
				sVar1 = func_498(unk_0x3479F6F64A48251C(Local_194.f_34));
				uVar2 = func_743(unk_0x3479F6F64A48251C(Local_194.f_34));
				func_741(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_836(-1, 0, 0, -1, 0);
			}
		}
		unk_0xD2A9C3F486236CC5(&iLocal_447, 1);
	}
}

void func_836(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_221(unk_0x8CFC7D6E1DA5D304());
	if (iParam2 || func_410(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1807025 = iVar0;
		if (func_450(iVar0))
		{
			Global_1807025.f_1 = 4;
		}
		else if (func_449(iVar0))
		{
			Global_1807025.f_1 = 5;
		}
		else if (func_318(iVar0, 0))
		{
			Global_1807025.f_1 = 2;
			if (func_506(iVar0))
			{
				Global_1807025.f_1 = 3;
			}
		}
		else
		{
			Global_1807025.f_1 = 1;
		}
		if (func_495() != func_81())
		{
			Global_1807025.f_4 = func_737(func_495());
			Global_1807025.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1807025.f_6), &(Global_1807025.f_7));
		}
		Global_1807025.f_9 = unk_0xE6E19D6A1FC25165();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1807025.f_27 = 1;
			Global_1807025.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1807025.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1807025.f_40 = func_533(iParam1);
			Global_1807025.f_41 = func_857();
			Global_1807025.f_42 = func_650(unk_0x8CFC7D6E1DA5D304(), iParam1);
			Global_1807025.f_44 = func_732(unk_0x8CFC7D6E1DA5D304(), iParam1);
		}
	}
	else if (func_447(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1807140 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1807140 = iParam0 + 1;
		}
		else
		{
			Global_1807140 = func_856(unk_0x8CFC7D6E1DA5D304());
		}
		switch (iVar0)
		{
			case 225:
				if (func_855(unk_0x8CFC7D6E1DA5D304()) == 0)
				{
					Global_1807140.f_1 = 0;
				}
				else
				{
					Global_1807140.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1807140.f_1 = 2;
				break;
			
			case 227:
				Global_1807140.f_1 = 3;
				break;
		}
		Global_1807140.f_21 = 1;
		Global_1807140.f_22 = 1;
		if (func_495() != func_81())
		{
			Global_1807140.f_4 = func_737(func_495());
			Global_1807140.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1807140.f_4), &(Global_1807140.f_5));
		}
		Global_1807140.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807140.f_20 = iParam0;
		}
	}
	else if (func_414(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1807078 = iVar0;
		Global_1807025.f_1 = 1;
		if (func_495() != func_81())
		{
			Global_1807078.f_4 = func_737(func_495());
			Global_1807078.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1807078.f_6), &(Global_1807078.f_7));
		}
		Global_1807078.f_9 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807078.f_21 = iParam0;
		}
	}
	else if (func_445(iVar0))
	{
		Global_1807183 = iVar0;
		Global_1807183.f_1 = iParam0;
		Global_1807183.f_21 = 1;
		Global_1807183.f_22 = 1;
		if (func_495() != func_81())
		{
			Global_1807183.f_4 = func_737(func_495());
			Global_1807183.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1807183.f_4), &(Global_1807183.f_5));
		}
		Global_1807183.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807183.f_20 = iParam0;
		}
		Global_1807183.f_27 = func_724(func_146(), 5);
		Global_1807183.f_28 = func_721(func_628(unk_0x8CFC7D6E1DA5D304()));
		Global_1807183.f_29 = func_512(6090, -1, 0);
		Global_1807183.f_30 = func_512(6086, -1, 0);
		Global_1807183.f_31 = func_512(6087, -1, 0);
		Global_1807183.f_32 = func_512(6089, -1, 0);
		Global_1807183.f_33 = func_512(6088, -1, 0);
		Global_1807183.f_34 = func_512(6091, -1, 0);
		Global_1807183.f_7 = func_726();
		Global_1807183.f_51 = func_721(bParam4);
	}
	else if (func_443(iVar0))
	{
		Global_1807236 = iVar0;
		Global_1807236.f_1 = iParam0;
		Global_1807236.f_21 = 1;
		Global_1807236.f_22 = 1;
		if (func_495() != func_81())
		{
			Global_1807236.f_4 = func_737(func_495());
			Global_1807236.f_5 = func_736(func_495());
		}
		if (func_349() != func_81())
		{
			func_538(func_349(), &(Global_1807236.f_4), &(Global_1807236.f_5));
		}
		Global_1807236.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807236.f_20 = iParam0;
		}
		Global_1807236.f_24 = func_512(6140, -1, 0);
		Global_1807236.f_25 = func_512(6145, -1, 0);
		Global_1807236.f_26 = func_512(6146, -1, 0);
		Global_1807236.f_27 = func_721((((func_686() || func_685()) || func_684()) || func_683(unk_0x8CFC7D6E1DA5D304())));
		Global_1807236.f_28 = func_512(6147, -1, 0);
		Global_1807236.f_29 = func_721(func_682());
		Global_1807236.f_31 = 0;
		Global_1807236.f_30 = 0;
		Global_1807236.f_32 = 0;
		Global_1807236.f_33 = 0;
		Global_1807236.f_34 = 0;
		Global_1807236.f_16 = 0;
	}
	else
	{
		if (func_495() != func_81())
		{
			Global_1807007 = func_737(func_495());
			Global_1807007.f_1 = func_736(func_495());
		}
		Global_1807007.f_5 = unk_0xE6E19D6A1FC25165();
		Global_1807007.f_13 = func_854();
		Global_1807007.f_15 = 0;
		if (func_496(1))
		{
			if (func_349() == func_495())
			{
				Global_1807007.f_15 = 1;
			}
		}
		if (func_853())
		{
			Global_1807140.f_28 = 1;
		}
		if (((func_852() || func_851()) || func_850()) || func_849())
		{
			Global_1807140.f_30 = 1;
		}
		if (func_847(func_848(joaat("trailersmall2"))))
		{
			Global_1807140.f_32 = 1;
		}
		if (func_840(func_846(joaat("caddy"))))
		{
			Global_1807140.f_31 = 1;
		}
		if (func_723(unk_0x8CFC7D6E1DA5D304()) || func_722(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_29 = 1;
		}
		if (func_718(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_33 = 1;
			Global_1807140.f_34 = 1;
		}
		if (func_719(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_36 = 1;
		}
		if (func_716(0, unk_0x8CFC7D6E1DA5D304()) == 1)
		{
			Global_1807140.f_35 = 1;
		}
		if (func_839(unk_0x8CFC7D6E1DA5D304(), 3, &uVar1))
		{
			Global_1807140.f_37 = 1;
		}
		if (func_839(unk_0x8CFC7D6E1DA5D304(), 7, &uVar1))
		{
			Global_1807140.f_38 = 1;
		}
		if (func_838(unk_0x8CFC7D6E1DA5D304()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_837(unk_0x8CFC7D6E1DA5D304(), iVar2);
				if (func_647(unk_0x8CFC7D6E1DA5D304(), iVar3, 0))
				{
					Global_1807140.f_39 = 1;
				}
				if (func_647(unk_0x8CFC7D6E1DA5D304(), iVar3, 2))
				{
					Global_1807140.f_40 = 1;
				}
				if (func_647(unk_0x8CFC7D6E1DA5D304(), iVar3, 1))
				{
					Global_1807140.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_837(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_642(Global_1595681[iParam0 /*678*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595681[iParam0 /*678*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

int func_838(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_839(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_81())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_716(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_840(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_845(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_700(11));
		func_699(iVar1, &iVar0, 1);
		iVar2 = func_845(func_842(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_512(func_841(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_841(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4111;
				
				case 101:
					return 4119;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4271;
				
				case 121:
					return 4279;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4431;
				
				case 141:
					return 4439;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case joaat("mpsv_lp0_31"):
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case joaat("mpsv_lp0_31"):
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3326;
				
				case 78:
					return 3334;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_842(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 194)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (iParam0 >= func_700(iVar0) && iParam0 < func_843(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_843(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_703(iParam0);
		return func_844(iVar0);
	}
	return (func_701(iParam0, -1) * iParam0 + 1);
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_845(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_146();
	}
	if (iParam0 == 7 && !Global_262145.f_16127)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_703(iParam0);
		if (iVar1 == 0 && func_512(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1367880[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549041[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2548958[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_846(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_699(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_512(func_841(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_849()
{
	return func_512(6146, -1, 0) != 0;
}

bool func_850()
{
	return func_512(5363, -1, 0) != 0;
}

bool func_851()
{
	return func_512(3811, -1, 0) != 0;
}

bool func_852()
{
	return func_512(3212, -1, 0) != 0;
}

bool func_853()
{
	return func_512(5362, -1, 0) != 0;
}

int func_854()
{
	int iVar0;
	
	iVar0 = func_495();
	if (iVar0 != func_81())
	{
		return Global_1627460[iVar0 /*530*/].f_11.f_93;
	}
	return 0;
}

int func_855(int iParam0)
{
	if (func_134(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_856(int iParam0)
{
	if (func_221(iParam0) == 225 || func_221(iParam0) == 226)
	{
		return func_855(iParam0);
	}
	return -1;
}

var func_857()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_649(unk_0x8CFC7D6E1DA5D304(), iVar0))
		{
			unk_0xD2A9C3F486236CC5(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_858(bool bParam0)
{
	if (bParam0)
	{
		if (!func_194(unk_0x8CFC7D6E1DA5D304(), 9))
		{
			if (func_389(unk_0x8CFC7D6E1DA5D304()) != 0)
			{
				func_224(9);
			}
		}
	}
	else if (func_194(unk_0x8CFC7D6E1DA5D304(), 9))
	{
		func_223(9);
	}
}

int func_859(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x62148293B793073B(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_860(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0xD2A9C3F486236CC5(&Global_2323, 1);
			unk_0xD2A9C3F486236CC5(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_860(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9D39145AD645E383(sParam14, sParam15))
	{
	}
	func_870();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
			{
				return 0;
			}
		}
		if (Global_104551.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_869() == 0)
	{
		func_867();
		return 0;
	}
	func_866(Global_16823);
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104551.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104551.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104551.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104551.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104551.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104551.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xB03A1684359C50A1(Global_2323, 10))
	{
		Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_865(0);
		func_865(2);
		func_865(1);
	}
	else
	{
		func_870();
		switch (iParam16)
		{
			case 3:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_865(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_865(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_865(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_865(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 10))
		{
			Global_104551.f_14021[0 /*20*/].f_17 = 1;
			Global_104551.f_14021[1 /*20*/].f_17 = 1;
			Global_104551.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104551.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104551.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104551.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104551.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_870();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_463())
			{
				unk_0x929C3CBA660376D5(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_864(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_861(1);
			func_864(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_861(int iParam0)
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_863(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar2);
								unk_0xE2B30EB9B14EEAB2();
							}
							if (Global_2456776)
							{
								if (iVar1 == 14)
								{
									func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104551.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104551.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104551.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70852)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36996;
											break;
										
										case 1:
											iVar6 = Global_36997;
											break;
										
										case 2:
											iVar6 = Global_36998;
											break;
										
										default:
											break;
									}
									func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(Global_2329);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar7);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar8);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 8)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if ((iVar1 == 23 && unk_0x9D39145AD645E383(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB03A1684359C50A1(Global_2324, 6))
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_266(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626200.f_1;
								func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_862(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_862(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(uParam7))
	{
		func_266(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(iParam8))
	{
		func_266(iParam8);
	}
	if (!unk_0xFAFFA408239A026B(iParam9))
	{
		func_266(iParam9);
	}
	if (!unk_0xFAFFA408239A026B(iParam10))
	{
		func_266(iParam10);
	}
	if (!unk_0xFAFFA408239A026B(iParam11))
	{
		func_266(iParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

bool func_863(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_864(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_865(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104551.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_866(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xB093145A4ED05C87();
	uVar1 = unk_0x4BF279EB036481A0();
	uVar2 = unk_0xF0B96EE16BA9FBE8();
	uVar3 = unk_0x518720E0DE404FFC();
	uVar4 = unk_0x5E3E9A684A609866() + 1;
	uVar5 = unk_0xFBE778F13510E585();
	Global_104551.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_867()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
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
	Global_16823 = 34;
	Global_104551.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_868(Global_104551.f_14111[iVar2 /*104*/].f_18, Global_104551.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_868(struct<6> Param0, struct<6> Param6)
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

int func_869()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
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
		if (Global_104551.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104551.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104551.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104551.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_868(Global_104551.f_14111[iVar2 /*104*/].f_18, Global_104551.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_870()
{
	if (func_863(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
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
		Global_14453 = func_871();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_871()
{
	func_872();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_872()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_875(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_874(unk_0x18F7BE9ACB7D08F4());
			if (func_873(iVar0) && (!func_863(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_873(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_873(int iParam0)
{
	return iParam0 < 3;
}

int func_874(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_875(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_875(int iParam0)
{
	if (func_873(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_876()
{
	if (!unk_0xB03A1684359C50A1(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1, 1))
	{
		if (!func_896())
		{
			if (Local_194.f_5 > 0 || unk_0xB03A1684359C50A1(Local_194.f_1, 6))
			{
				func_226(1);
				unk_0xD2A9C3F486236CC5(&(Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_1), 1);
			}
		}
	}
}

int func_877(bool bParam0)
{
	if (func_878(1))
	{
		return 1;
	}
	if (Global_2512581.f_4878.f_30)
	{
		Global_2512581.f_4878.f_30 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_349() == func_81() || !func_990(func_349(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_878(bool bParam0)
{
	bool bVar0;
	
	if (!func_496(1))
	{
		bVar0 = false;
		if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 != func_81())
		{
			if (func_990(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57, 0, 1))
			{
				if ((Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 4 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 8) || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_879(func_221(unk_0x8CFC7D6E1DA5D304())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_592(31);
				if (func_410(func_221(unk_0x8CFC7D6E1DA5D304())))
				{
					func_592(81);
				}
				if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 != func_81() && unk_0x4AF13BCD120BCDBC(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57))
				{
					Global_1626044 = func_478(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57, -2, 0, 0);
					if (!func_348(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57))
					{
						func_592(88);
					}
				}
				else
				{
					Global_1626044 = 1;
				}
				Global_1626028 = { Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_879(int iParam0)
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
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_880()
{
	return func_240(unk_0x8CFC7D6E1DA5D304());
}

void func_881(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 != iParam0)
	{
		func_895(-1);
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 = iParam0;
		if (func_894() != -1)
		{
			func_893(-1);
		}
		if (func_892() != -1)
		{
			func_891(-1);
		}
		func_890(iParam2);
		func_888(iParam0);
		if (!func_233(iParam0))
		{
			fVar0 = func_232(iParam0);
			if (fVar0 != 1f)
			{
				func_229(fVar0);
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 1);
			}
		}
		if (!func_236(iParam0) || iParam3)
		{
			if (func_234(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x945880A1F9FE9E4F(0);
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
				}
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 0);
			}
			else if (unk_0xA41FC657B4BB4148() < 5)
			{
				unk_0x8BB3FA32294185BB(1f);
				unk_0x945880A1F9FE9E4F(5);
			}
		}
		if (func_397())
		{
			func_224(27);
		}
		if (bParam1)
		{
			if (!func_391())
			{
				func_226(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xB03A1684359C50A1(Global_2512581.f_4523, 1) || unk_0xB03A1684359C50A1(Global_2512581.f_4523, 4)) || unk_0xB03A1684359C50A1(Global_2512581.f_4523, 0))
			{
				func_592(6);
			}
			func_887();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
		}
		if (func_135(unk_0x8CFC7D6E1DA5D304()) && func_241(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1), 8);
		}
		func_883();
		if (func_882(iParam0))
		{
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
			unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 6);
		}
	}
}

int func_882(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_883()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_886();
	iVar2 = func_82(unk_0x8CFC7D6E1DA5D304());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3479F6F64A48251C(iVar0);
		if (unk_0x4AF13BCD120BCDBC(iVar1))
		{
			if (func_320(iVar1, iVar2, 1) || func_884(iVar1, unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xA6111D634CFDB8A0(unk_0x8CFC7D6E1DA5D304(), iVar1, uVar3);
				unk_0xA6111D634CFDB8A0(iVar1, unk_0x8CFC7D6E1DA5D304(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_884(int iParam0, int iParam1)
{
	if (func_285(iParam0, 1) && func_285(iParam1, 1))
	{
		return (func_885(iParam0) == func_82(iParam1) || func_885(iParam1) == func_82(iParam0));
	}
	return 0;
}

int func_885(int iParam0)
{
	if (func_285(iParam0, 1))
	{
		return Global_1627460[func_82(iParam0) /*530*/].f_11.f_443;
	}
	return func_81();
}

int func_886()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_495();
	if (iVar0 != func_81())
	{
		if (func_990(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xB03A1684359C50A1(Global_1627460[iVar1 /*530*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_887()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 1))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 4))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 4);
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 6))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 6);
	}
	unk_0x62148293B793073B(&(Global_2512581.f_4523), 0);
	unk_0x62148293B793073B(&(Global_2512581.f_4523), 2);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_577 = 0;
	if (Global_2512581.f_4525 > 0)
	{
		unk_0x945880A1F9FE9E4F(Global_2512581.f_4525);
	}
	Global_2512581.f_4524 = 0;
}

void func_888(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_512(3774, -1, 0);
	iVar1 = func_889(iParam0);
	if (iVar1 != -1)
	{
		unk_0xD2A9C3F486236CC5(&iVar0, iVar1);
		func_510(3774, iVar0, -1, 1, 0);
	}
}

int func_889(int iParam0)
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
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_890(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if (Global_1627460[iVar0 /*530*/].f_11.f_176 != iParam0)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_176 = iParam0;
	}
}

void func_891(int iParam0)
{
	if (Global_2512581.f_4878.f_158 != iParam0)
	{
		Global_2512581.f_4878.f_158 = iParam0;
	}
}

int func_892()
{
	return Global_2512581.f_4878.f_158;
}

void func_893(int iParam0)
{
	if (Global_2512581.f_4878.f_157 != iParam0)
	{
		Global_2512581.f_4878.f_157 = iParam0;
	}
}

int func_894()
{
	return Global_2512581.f_4878.f_157;
}

void func_895(int iParam0)
{
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_32 = iParam0;
}

int func_896()
{
	int iVar0;
	
	iVar0 = func_897();
	if (iVar0 > -1)
	{
		if (Local_194.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_897()
{
	int iVar0;
	
	if (Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 != -1)
	{
		return Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3;
	}
	if (func_240(unk_0x8CFC7D6E1DA5D304()))
	{
		Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 = unk_0xA651DA0BC9FD8FA4();
		if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
		{
			func_858(1);
		}
	}
	else if (func_285(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		iVar0 = func_495();
		if (iVar0 != func_81())
		{
			if (unk_0x1DD0F419559F38C7(iVar0))
			{
				Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3 = unk_0xE24BCF1006ECB50A(iVar0);
			}
		}
	}
	return Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/].f_3;
}

int func_898()
{
	return Local_194.f_0;
}

int func_899(int iParam0)
{
	return Local_254[iParam0 /*6*/];
}

int func_900()
{
	var uVar0;
	
	func_905(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_904())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_903())
	{
		return 1;
	}
	if (func_902(157))
	{
		if (!func_901())
		{
			return 1;
		}
	}
	if (func_902(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_230() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_230()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_901()
{
	return Global_2447128.f_586;
}

int func_902(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_903()
{
	return Global_2456781;
}

bool func_904()
{
	return Global_2447128.f_581;
}

void func_905(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_906(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_906(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_990(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(iVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(iVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_907(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_907(int iParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(iParam0))
		{
			if (unk_0x84E7E48409E0DA9F(iParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					unk_0x337F2213526139E0(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(iParam0, 0))
		{
			if (unk_0x1800B99666D25740(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_908()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_909()
{
	if (!unk_0xB03A1684359C50A1(iLocal_447, 6))
	{
		if (unk_0x44243F2E2F58B8E3())
		{
			if (func_896() || func_398())
			{
				func_679(0, 4, 0, 0, -1, -1, -1, -1, -1);
				unk_0xD2A9C3F486236CC5(&iLocal_447, 6);
			}
		}
	}
	func_955(3, 3, -1, -1082130432);
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xA651DA0BC9FD8FA4() == Local_194.f_33)
		{
			if (iLocal_754 >= 0)
			{
				func_812(&Local_460);
				func_811(&Local_460);
			}
		}
	}
	if (unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()) == iLocal_453)
	{
		unk_0x641E77554763EF06(unk_0x18F7BE9ACB7D08F4(), uLocal_455);
	}
	if (iLocal_754 > 0)
	{
		if (unk_0xB03A1684359C50A1(Local_194.f_1, 3))
		{
			func_804(unk_0x8CFC7D6E1DA5D304(), 1, 0);
		}
	}
	func_954();
	if (Local_194.f_34 != -1)
	{
		if (unk_0xB03A1684359C50A1(iLocal_447, 5))
		{
			if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_194.f_34)))
			{
				func_427(unk_0x3479F6F64A48251C(Local_194.f_34), 432, 0);
				func_425(unk_0x3479F6F64A48251C(Local_194.f_34), 1, 0);
				func_424(unk_0x3479F6F64A48251C(Local_194.f_34), 0, 0);
				func_423(unk_0x3479F6F64A48251C(Local_194.f_34), 0);
				func_422(unk_0x3479F6F64A48251C(Local_194.f_34), Global_262145.f_11514, 0);
			}
		}
	}
	if (func_199(0))
	{
		func_198(0);
	}
	if (unk_0xB03A1684359C50A1(iLocal_448, 0))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_448, 2))
		{
			unk_0x9FC66CAE22E74E58("DisableFlightMusic", 0);
			unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 0);
			unk_0x9BEA833CAF67289C("BG_SIGHTSEER_STOP");
		}
	}
	unk_0xD2A9C3F486236CC5(&iLocal_448, 8);
	func_195();
	unk_0x7AAF0D0539858018(1);
	func_858(0);
	func_911(1, 0);
	unk_0x945880A1F9FE9E4F(5);
	unk_0x62148293B793073B(&Global_4267143, 21);
	unk_0x62148293B793073B(&Global_4267143, 20);
	func_910();
}

void func_910()
{
	unk_0x810C5D6462DD69E6();
}

void func_911(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1347470.f_1.f_108 != 0)
	{
		Global_1347470.f_1.f_108 = 0;
	}
	Global_1347470.f_1.f_109 = -1;
	Global_1347470.f_1.f_110 = -1;
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 167 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 168)
	{
		func_952();
		unk_0x62148293B793073B(&(Global_1806998.f_3), 4);
	}
	if ((func_536() && iParam1 != 0) && Global_262145.f_16124)
	{
		if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 190 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 192)
		{
			func_935(unk_0x8CFC7D6E1DA5D304(), iParam1, 1, 0);
		}
	}
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 164 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 208)
	{
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
	}
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 != -1)
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 = -1;
		if (!unk_0xB03A1684359C50A1(Global_1574398.f_1, 14) && !func_135(unk_0x8CFC7D6E1DA5D304()))
		{
			func_226(0);
		}
	}
	else if (func_933(unk_0x8CFC7D6E1DA5D304()) != -1)
	{
		func_895(-1);
	}
	func_932(func_81());
	if (func_199(16))
	{
		func_198(16);
	}
	func_929(0);
	func_890(-1);
	func_928();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_927(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_925(iVar1);
		iVar1++;
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 0))
	{
		unk_0x8BB3FA32294185BB(1f);
		unk_0x945880A1F9FE9E4F(5);
		unk_0x62148293B793073B(&(Global_1806998.f_3), 0);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 5))
	{
		unk_0x62148293B793073B(&(Global_1806998.f_3), 5);
	}
	iVar2 = func_416();
	if ((func_317(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_924(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_450(iVar2))
	{
		func_920(-1, 1);
	}
	else if (((((func_415(iVar2) || func_919(iVar2)) || func_918(iVar2)) || func_447(iVar2)) || func_445(iVar2)) || func_443(iVar2))
	{
	}
	else
	{
		func_920(-1, 1);
	}
	func_223(19);
	func_223(20);
	func_223(21);
	func_223(22);
	func_223(27);
	func_198(3);
	func_198(4);
	func_198(7);
	func_917();
	if (func_241(unk_0x8CFC7D6E1DA5D304()))
	{
		func_858(0);
	}
	func_223(29);
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 = func_81();
	if (Global_2512581.f_4878.f_30 != 0)
	{
		Global_2512581.f_4878.f_30 = 0;
	}
	if (bParam0)
	{
		func_200();
	}
	if (!func_135(unk_0x8CFC7D6E1DA5D304()))
	{
		func_222();
		unk_0x62148293B793073B(&(Global_1806998.f_3), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 6))
	{
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
		unk_0x62148293B793073B(&(Global_1806998.f_3), 6);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 7))
	{
		unk_0x62148293B793073B(&(Global_1806998.f_3), 7);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 8))
	{
		func_916("IMPEXP_SELFDES", 0);
		func_914("IMPEXP_SELFDES");
		unk_0x62148293B793073B(&(Global_1806998.f_3), 8);
	}
	func_912(iVar2, 0);
}

void func_912(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB03A1684359C50A1(Global_1806998.f_3, 9))
		{
			unk_0x64D773F3BE6DC50A(func_913(iParam0));
			unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 9);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 9))
	{
		unk_0xA11D9B06B99FE786(func_913(iParam0));
		unk_0x62148293B793073B(&(Global_1806998.f_3), 9);
	}
}

char* func_913(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_914(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE0C4A595CD61B7F2(&(Global_104551.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x9D39145AD645E383(&(Global_104551.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104551.f_14111[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_870();
					Global_104551.f_14111[iVar0 /*104*/].f_99[Global_14453] = 0;
					if (func_915(iVar0))
					{
					}
					else
					{
						Global_104551.f_14111[iVar0 /*104*/].f_24 = 0;
						Global_104551.f_14111[iVar0 /*104*/].f_28 = 0;
						Global_104551.f_14111[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x1BEAF0E2DD876AA1(Global_104551.f_14111[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_915(int iParam0)
{
	if ((Global_104551.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104551.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104551.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_916(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE0C4A595CD61B7F2(&(Global_104551.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x9D39145AD645E383(&(Global_104551.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104551.f_14111[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104551.f_14111[iVar0 /*104*/].f_24 = 1;
				if (Global_104551.f_14111[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104551.f_14021[0 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104551.f_14021[1 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104551.f_14021[2 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104551.f_14021[3 /*20*/].f_17 = 0;
					}
					Global_104551.f_14111[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104551.f_14111[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_917()
{
	if (func_244(unk_0x8CFC7D6E1DA5D304()))
	{
		func_223(25);
	}
}

int func_918(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_919(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_920(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_416();
	}
	if (iParam0 > 0)
	{
		if (func_495() != func_81())
		{
			if (func_923(unk_0x8CFC7D6E1DA5D304()) == unk_0x8CFC7D6E1DA5D304())
			{
				Global_2492267.f_93[func_922(iParam0)] = 1;
			}
		}
		iVar0 = func_922(159);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(157);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(148);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(164);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(142);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(152);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(166);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(170);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(173);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(179);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(200);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(201);
		if (func_921(iVar0, Global_262145.f_11765, bParam1))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(182);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(183);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(185);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(186);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(180);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(195);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(197);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(198);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(207);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(208);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(209);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(214);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(215);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(216);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(217);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(218);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(219);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(220);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(221);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_921(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_194(unk_0x8CFC7D6E1DA5D304(), 19) && !func_194(unk_0x8CFC7D6E1DA5D304(), 20)) && !func_194(unk_0x8CFC7D6E1DA5D304(), 9))
		{
			return 0;
		}
	}
	if (Global_2492267.f_93[iParam0] == 1 && func_9(&(Global_2492267[iParam0 /*2*/])))
	{
		if (func_761(&(Global_2492267[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2492267.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_922(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_923(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_35;
}

void func_924(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_416();
	}
	if (iParam0 > 0)
	{
		if (func_495() != func_81())
		{
			Global_2492267.f_93[func_922(iParam0)] = 1;
		}
		iVar0 = func_922(155);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(163);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(160);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(153);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(162);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(154);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(171);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(172);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(199);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(194);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(193);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(210);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(205);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(189);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_922(211);
		if (func_921(iVar0, Global_262145.f_11766, 0))
		{
			func_259(&(Global_2492267[iVar0 /*2*/]));
			func_8(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_925(int iParam0)
{
	if (!func_187(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_303[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_303[iParam0 /*3*/] = { func_926() };
	}
	if (!func_187(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_290[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_290[iParam0 /*3*/] = { func_926() };
	}
}

Vector3 func_926()
{
	struct<3> Var0;
	
	return Var0;
}

void func_927(int iParam0)
{
	if (!func_187(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_145[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_145[iParam0 /*3*/] = { func_926() };
	}
	if (!func_187(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_120[iParam0 /*3*/], func_926(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_120[iParam0 /*3*/] = { func_926() };
	}
}

void func_928()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573838 = { Var0 };
	Global_1573838.f_13 = func_81();
	if (unk_0xB03A1684359C50A1(Global_1573336, 3))
	{
		unk_0x62148293B793073B(&Global_1573336, 3);
	}
}

void func_929(bool bParam0)
{
	if (bParam0)
	{
		if (!func_465(unk_0x8CFC7D6E1DA5D304(), 14))
		{
			func_931(14);
		}
	}
	else if (func_465(unk_0x8CFC7D6E1DA5D304(), 14))
	{
		func_930(14);
	}
}

void func_930(int iParam0)
{
	unk_0x62148293B793073B(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_5), iParam0);
}

void func_931(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_5), iParam0);
}

void func_932(int iParam0)
{
	if (func_240(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x8CFC7D6E1DA5D304() != iParam0)
		{
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_443 != iParam0)
			{
				Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_443 = iParam0;
				if (iParam0 != func_81())
				{
				}
			}
		}
	}
}

int func_933(int iParam0)
{
	if (func_934(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_32;
	}
	return -1;
}

int func_934(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_32 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_935(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_649(iParam0, iParam1) && func_951(iParam0, iParam1))
	{
		iVar0 = func_648(iParam0, iParam1);
		func_938(iVar0, bParam2, bParam3);
		func_936(iVar0, 1);
	}
}

void func_936(int iParam0, int iParam1)
{
	func_635(func_937(iParam0), iParam1, -1, 1);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_6 = iParam1;
}

int func_937(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_938(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_837(unk_0x8CFC7D6E1DA5D304(), iParam0);
	if (!bParam1)
	{
		func_950(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2492180[iParam0];
		iVar0 = func_949(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1808538 = -1;
		}
		func_948(iParam0, 0, bParam2);
	}
	else if (func_946(iParam0, bParam2))
	{
		iVar0 = func_945(iVar2, 0);
		iVar3 = func_732(unk_0x8CFC7D6E1DA5D304(), iVar2);
		iVar4 = func_944(iVar2, bParam2);
		iVar5 = func_945(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_943(iVar2) && func_942(unk_0x8CFC7D6E1DA5D304(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_950(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_941(unk_0x8CFC7D6E1DA5D304(), iVar2) > 0)
		{
			func_940(iParam0, (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2 - (func_944(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_945(iVar2, bParam2) / func_941(unk_0x8CFC7D6E1DA5D304(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_943(iVar2) && func_942(unk_0x8CFC7D6E1DA5D304(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_939(unk_0x8CFC7D6E1DA5D304(), iVar2, iVar0, bParam2);
}

void func_939(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1595681[iParam0 /*678*/].f_266.f_234 = iParam2;
				}
				else
				{
					Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_940(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_941(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_942(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_81())
	{
		return 0;
	}
	if (func_642(iParam1) && func_943(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_943(int iParam0)
{
	return func_533(iParam0) == 5;
}

int func_944(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_533(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16095;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16100;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16094;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16099;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16093;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16098;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16091;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16096;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16092;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16097;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20143;
				if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20144;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20127;
				if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20128;
				}
			}
			break;
	}
	return uVar0;
}

int func_945(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_533(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16076;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16085);
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16090);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16077;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16084);
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16089);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16078;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16083);
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16088);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16079;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16081);
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16086);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16080;
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16082);
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16087);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20140;
			}
			else
			{
				iVar0 = Global_262145.f_20124;
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20141);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20125);
				}
			}
			if (func_647(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20142);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20126);
				}
			}
			if (func_942(unk_0x8CFC7D6E1DA5D304(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_946(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_636(15384, -1, -1);
	}
	return func_636(func_947(iParam0), -1, -1);
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_948(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_635(15384, iParam1, -1, 1);
		return;
	}
	func_635(func_947(iParam0), iParam1, -1, 1);
}

int func_949(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2492180[iParam0];
	iVar1 = func_837(unk_0x8CFC7D6E1DA5D304(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2492187;
	}
	if (func_943(iVar1))
	{
		if (func_942(unk_0x8CFC7D6E1DA5D304(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_950(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2492187 = iParam1;
		return;
	}
	Global_2492180[iParam0] = iParam1;
}

int func_951(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_649(iParam0, iParam1))
	{
		iVar0 = func_648(iParam0, iParam1);
		if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_4 > 0 && Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_952()
{
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 28);
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 29);
	func_953(24);
}

void func_953(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_7[iVar0]), iVar1);
}

void func_954()
{
	unk_0x174D10140C6EDAA7(uLocal_454);
	unk_0x174D10140C6EDAA7(iLocal_453);
}

void func_955(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0xFCA64981FEF7C913();
	Var1.f_0 = Global_1807007;
	Var1.f_1 = Global_1807007.f_1;
	Var1.f_2 = Global_1807007.f_2;
	Var1.f_3 = Global_1807007.f_3;
	Var1.f_4 = Global_1807007.f_4;
	Var1.f_5 = Global_1807007.f_5;
	Var1.f_6 = Global_1807007.f_6;
	Var1.f_7 = Global_1807007.f_7;
	Var1.f_8 = Global_1807007.f_8;
	Var1.f_9 = Global_1807007.f_9;
	Var1.f_10 = Global_1807007.f_10;
	Var1.f_11 = Global_1807007.f_11;
	Var1.f_12 = Global_1807007.f_12;
	Var1.f_13 = Global_1807007.f_14;
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x9D39145AD645E383(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1807007.f_15;
			Var15.f_15 = Global_1807007.f_16;
			Var15.f_16 = Global_1807007.f_17;
			unk_0x602BD01BE8D740B4(&Var15);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1807007.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0x98009D58738F177C(&Var32);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1807007.f_15;
			Var49.f_15 = iParam0;
			unk_0x5D6F1E31D2324559(&Var49);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1807007.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0xBEC6FB085D4A630A(&Var65);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1807007.f_15;
			Var82.f_15 = iParam0;
			unk_0x76809723F4A417F1(&Var82);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1807007.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0x35AE98E57ADCA2F8(&Var98);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1807007.f_15;
			unk_0x9DFFA177B6905160(&Var116);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1807007.f_15;
			unk_0xB7EF32BC41E3EB88(&Var134);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1807007.f_15;
			unk_0xF44197E8DBE18BB2(&Var153);
		}
	}
	func_956();
}

void func_956()
{
	struct<18> Var0;
	
	Global_1807007 = { Var0 };
}

void func_957(struct<21> Param0)
{
	func_988(func_989(Param0.f_0), Param0);
	unk_0xBFB29A437D900DFC(3);
	func_986(0, -1, 0);
	unk_0x9B457509556CB639(&Local_194, 60);
	unk_0x0D25D64240F2BAA8(&Local_254, 193);
	if (!func_985())
	{
		func_909();
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		unk_0xDA6A6B59F261B209(0);
		if (unk_0xF67B871D7588B9D9())
		{
		}
		func_984();
		func_958(0, 0);
		Local_254[unk_0xA651DA0BC9FD8FA4() /*6*/] = 0;
	}
	else
	{
		func_909();
	}
}

void func_958(int iParam0, int iParam1)
{
	func_983();
	func_961(1);
	if ((iParam0 != 0 && unk_0x4AF13BCD120BCDBC(iParam1)) && func_960(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xD2A9C3F486236CC5(&Global_1806993, 0);
				break;
			}
	}
	if (!func_880() && !func_285(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (func_394())
		{
			func_225(3);
		}
	}
	func_225(4);
	if (func_496(0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 = func_495();
	}
	if (func_410(iParam0))
	{
		func_730();
		Global_1807025.f_18 = func_708(func_349());
	}
	else if (func_414(func_933(unk_0x8CFC7D6E1DA5D304())))
	{
		func_728();
		Global_1807078.f_18 = func_708(func_349());
	}
	func_959();
}

void func_959()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1347470.f_532[iVar0 /*42*/].f_1 = func_81();
		Global_1347470.f_532[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_960(int iParam0, bool bParam1)
{
	return func_320(unk_0x8CFC7D6E1DA5D304(), iParam0, bParam1);
}

void func_961(bool bParam0)
{
	int iVar0;
	
	func_953(33);
	func_953(34);
	func_953(35);
	func_953(36);
	func_953(37);
	func_953(38);
	func_953(39);
	func_953(40);
	func_953(43);
	func_953(41);
	func_953(54);
	func_953(42);
	func_953(47);
	func_982(23);
	func_982(24);
	func_953(92);
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 2);
	func_981();
	func_976();
	func_971();
	func_963();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512581.f_4878.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_962(3))
	{
		func_982(3);
	}
	else if (func_962(4))
	{
		func_982(4);
	}
	else if (func_962(5))
	{
		func_982(5);
	}
	else if (func_962(6))
	{
		func_982(6);
	}
	else if (func_962(7))
	{
		func_982(7);
	}
	else if (((((((((((((((((func_962(0) || func_962(1)) || func_962(2)) || func_962(8)) || func_962(9)) || func_962(10)) || func_962(11)) || func_962(12)) || func_962(13)) || func_962(14)) || func_962(15)) || func_962(16)) || func_962(17)) || func_962(18)) || func_962(19)) || func_962(20)) || func_962(21)) || func_962(22))
	{
		func_982(8);
		func_982(0);
		func_982(1);
		func_982(2);
		func_982(9);
		func_982(10);
		func_982(11);
		func_982(12);
		func_982(13);
		func_982(14);
		func_982(15);
		func_982(16);
		func_982(17);
		func_982(18);
		func_982(19);
		func_982(20);
		func_982(21);
		func_982(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512581.f_4878.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_14[iVar0], iVar1);
}

void func_963()
{
	if (func_970())
	{
		func_969(0);
		func_969(1);
		func_969(2);
		func_969(3);
		func_969(4);
		func_969(5);
		if (func_968(32))
		{
			if (func_965(func_966(), 3))
			{
				func_964(func_966(), 3);
			}
			func_969(32);
		}
	}
}

void func_964(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104551.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_965(int iParam0, int iParam1)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_966()
{
	if (func_967())
	{
		Global_104551.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

int func_967()
{
	int iVar0;
	
	iVar0 = func_82(unk_0x8CFC7D6E1DA5D304());
	if (((iVar0 != unk_0x8CFC7D6E1DA5D304() && iVar0 != func_81()) && unk_0x4AF13BCD120BCDBC(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_23[iVar0], iVar1);
}

void func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_23[iVar0]), iVar1);
}

int func_970()
{
	if ((((func_968(1) || func_968(0)) || func_968(2)) || func_968(4)) || func_968(5))
	{
		return 1;
	}
	return 0;
}

void func_971()
{
	if (func_975())
	{
		func_974(0);
		func_974(1);
		func_974(2);
		func_974(3);
		func_974(4);
		func_974(5);
		func_974(6);
		func_974(7);
		if (func_973(8))
		{
			func_974(8);
		}
		if (func_973(15))
		{
			if (func_965(func_972(), 3))
			{
				func_964(func_972(), 3);
			}
			func_974(15);
		}
	}
}

int func_972()
{
	if (func_967())
	{
		Global_104551.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

bool func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_21[iVar0], iVar1);
}

void func_974(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_21[iVar0]), iVar1);
}

int func_975()
{
	if ((((((((func_973(0) || func_973(1)) || func_973(2)) || func_973(3)) || func_973(4)) || func_973(5)) || func_973(6)) || func_973(7)) || func_973(8))
	{
		return 1;
	}
	return 0;
}

void func_976()
{
	if (func_980())
	{
		func_979(0);
		func_979(1);
		func_979(2);
		func_979(3);
		func_979(4);
		func_979(5);
		func_979(6);
		func_979(7);
		func_979(8);
		func_979(9);
		func_979(10);
		func_979(11);
		func_979(12);
		if (func_978(13))
		{
			if (func_965(func_977(), 3))
			{
				func_964(func_977(), 3);
			}
			func_979(13);
		}
	}
}

int func_977()
{
	if (func_967())
	{
		Global_104551.f_28020[76 /*29*/].f_24[Global_14453] = 1;
	}
	return 76;
}

bool func_978(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_19[iVar0], iVar1);
}

void func_979(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_19[iVar0]), iVar1);
}

int func_980()
{
	if ((((((((((((func_978(0) || func_978(1)) || func_978(2)) || func_978(3)) || func_978(4)) || func_978(5)) || func_978(6)) || func_978(7)) || func_978(8)) || func_978(9)) || func_978(10)) || func_978(11)) || func_978(12))
	{
		return 1;
	}
	return 0;
}

void func_981()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512581.f_4878.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_982(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_14[iVar0]), iVar1);
}

void func_983()
{
	struct<14> Var0;
	
	Global_1807007 = { Var0 };
	Global_1807007.f_14 = 0;
	Global_1807007.f_15 = 0;
}

void func_984()
{
}

int func_985()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 0;
		}
		if (unk_0x593B88C1B97BDD33())
		{
			return 1;
		}
		if (func_904())
		{
			return 0;
		}
		if (func_902(155))
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

int func_986(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_910();
			}
			else
			{
				return 0;
			}
		}
		if (!func_987())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
				if (func_904())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
				if (func_902(155))
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_910();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_910();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_910();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_987()
{
	return Global_1312831;
}

void func_988(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		func_910();
	}
	unk_0x4121A9A0CCC0E014(uParam0, 0, Param1.f_16);
}

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

int func_990(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

