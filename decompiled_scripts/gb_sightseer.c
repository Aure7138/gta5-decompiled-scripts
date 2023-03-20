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
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	float fLocal_191 = 0f;
	float fLocal_192 = 0f;
	struct<60> Local_193 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_253[32];
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	var uLocal_454 = 0;
	struct<3> Local_455 = { 0, 0, 0 } ;
	var uLocal_458 = 0;
	struct<18> Local_459 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 1015222895;
	var uLocal_483 = 1021665346;
	var uLocal_484 = 0;
	var uLocal_485 = 255;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = -1;
	var uLocal_495 = 996499522;
	var uLocal_496 = 1002740646;
	var uLocal_497 = 0;
	var uLocal_498 = 60;
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
	var uLocal_559 = 1016296636;
	var uLocal_560 = 220;
	var uLocal_561 = 255;
	var uLocal_562 = 255;
	var uLocal_563 = 255;
	var uLocal_564 = 255;
	var uLocal_565 = 255;
	var uLocal_566 = 255;
	var uLocal_567 = 4096;
	var uLocal_568 = 40;
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
	var uLocal_736 = 0;
	var uLocal_737 = 4;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 1065353216;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 1056964608;
	var uLocal_747 = 1056964608;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	struct<3> Local_754[20];
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
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
	fLocal_185 = ((0.05f + 0.275f) - 0.01f);
	fLocal_188 = -0.05f;
	fLocal_189 = 0.92f;
	fLocal_190 = 1.94f;
	fLocal_191 = 2.99f;
	fLocal_192 = 3.7f;
	iLocal_748 = -1;
	iLocal_749 = -1;
	iLocal_751 = -1;
	iLocal_752 = -1;
	if (unk_0x00AAD79B42B3E036() && func_640(unk_0x3F80C6638E3A1A90(), 0, 1))
	{
		func_629(ScriptParam_0);
	}
	else
	{
		func_614();
	}
	while (true)
	{
		func_613();
		if (func_605())
		{
			func_614();
		}
		Global_1716613.f_2 = Local_193.f_58;
		Global_1716613.f_3 = Local_193.f_59;
		switch (func_604(unk_0xA1238458CB587858()))
		{
			case 0:
				if (func_603() == 1)
				{
					func_602();
					if (func_601())
					{
						func_596(142, 1);
						unk_0x8C1CE4F676968E94(3);
						if (!func_595())
						{
							unk_0x2E6B496CAB0B78B3(unk_0x3F80C6638E3A1A90(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_596(142, 0);
						unk_0x2E6B496CAB0B78B3(unk_0x3F80C6638E3A1A90(), joaat("pickup_portable_package"), 0);
					}
					Local_253[unk_0xA1238458CB587858() /*6*/] = 1;
				}
				else if (func_603() == 4)
				{
					Local_253[unk_0xA1238458CB587858() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_592())
				{
					Local_253[unk_0xA1238458CB587858() /*6*/] = 2;
				}
				if (func_603() == 1)
				{
					func_334();
					func_331();
					if (func_601() || func_330())
					{
						func_201(&(Global_1330240.f_527), &Global_1330240, 24, &(Global_1330240.f_1), &(Global_1330240.f_110), -1, 0);
					}
					func_162();
				}
				else if (func_603() == 4)
				{
					Local_253[unk_0xA1238458CB587858() /*6*/] = 3;
				}
				func_159();
				break;
			
			case 3:
				func_158(&(Local_193.f_49));
				if (func_157(&(Local_193.f_49)))
				{
					Local_253[unk_0xA1238458CB587858() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_253[unk_0xA1238458CB587858() /*6*/] = 4;
			
			case 4:
				func_614();
				break;
		}
		if (unk_0xFA4B36553B2A7802())
		{
			switch (func_603())
			{
				case 0:
					if (func_150())
					{
						unk_0xF926D5D6B980058A(&(Local_193.f_58), &(Local_193.f_59));
						Local_193.f_0 = 1;
						Local_193.f_33 = unk_0xA1238458CB587858();
						Local_193.f_34 = unk_0x3F80C6638E3A1A90();
						func_596(142, 1);
					}
					break;
				
				case 1:
					func_148();
					func_4();
					if (func_2())
					{
						Local_193.f_0 = 4;
					}
					else if (func_1())
					{
						Local_193.f_0 = 4;
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
	if (Global_2457699.f_4647.f_11)
	{
		Global_2457699.f_4647.f_11 = 0;
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
	if (unk_0xB519E5386FBF69E5(Local_193.f_1, 2))
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
	switch (Local_193.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (unk_0xB519E5386FBF69E5(Local_193.f_1, 1))
			{
				Local_193.f_32 = 2;
			}
			else if (unk_0xB519E5386FBF69E5(Local_193.f_1, 3))
			{
				Local_193.f_32 = 2;
			}
			else if (unk_0xB519E5386FBF69E5(Local_193.f_1, 4))
			{
				Local_193.f_32 = 2;
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
	if (Local_193.f_5 == 0)
	{
		if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 6))
		{
			if (!func_9(&(Local_193.f_53)))
			{
				func_8(&(Local_193.f_53), 0, 0);
			}
			else if (func_6(&(Local_193.f_53), func_7(), 0))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_193.f_1), 6);
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
	if (unk_0x00AAD79B42B3E036() && !bParam2)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), *uParam0)) >= iParam1)
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
		if (unk_0x00AAD79B42B3E036() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xC7F926248AF8587B();
			}
			else
			{
				*uParam0 = unk_0xDBD31D1E0E5F2049();
			}
		}
		else
		{
			*uParam0 = unk_0x9D40BBF80D8F5E8A();
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
	if (!func_9(&(Local_193.f_51)))
	{
		func_8(&(Local_193.f_51), 0, 0);
	}
	else if (func_6(&(Local_193.f_51), func_11(), 0))
	{
		unk_0x9956FB0E4B50ECB8(&(Local_193.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_10309;
}

void func_12()
{
	int iVar0;
	
	if (Local_193.f_33 < 0)
	{
		return;
	}
	if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(Local_193.f_33)))
	{
		if (Local_253[Local_193.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_253[Local_193.f_33 /*6*/].f_4 - 1);
			if (!unk_0xB519E5386FBF69E5(Local_193.f_4, iVar0))
			{
				Local_193.f_36 = iVar0;
				if (func_13())
				{
					unk_0x9956FB0E4B50ECB8(&(Local_193.f_4), iVar0);
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
	if (!unk_0x51362735C7CDD08E(Local_193.f_3))
	{
		unk_0x801429C020C467BA(iVar0);
		if (unk_0x5053BF6D5604065B(iVar0))
		{
			if (unk_0xE107B0270F6E3CC8(1))
			{
				Var26 = { func_147() };
				if (func_14(Var26, 5f, &Local_455, &uLocal_458, Var1))
				{
					Local_193.f_3 = unk_0x1D6A78EAF4518040(unk_0x914CCD68BC9B3DF2(joaat("pickup_portable_package"), Local_455, 1, iVar0));
					unk_0x9CA89729A675E8FF(unk_0xA5CFD5B9C8A74104(Local_193.f_3), Local_455 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x839E9476E54502A2(iVar0);
					unk_0x2EF7A8CB89D363F6(unk_0xA5CFD5B9C8A74104(Local_193.f_3), 1);
					unk_0xCEA4A8A8B0373083(unk_0xA5CFD5B9C8A74104(Local_193.f_3), 1);
					unk_0x351E04F63B74E221(unk_0xA5CFD5B9C8A74104(Local_193.f_3), 1);
					unk_0xFD092FF761E54535(unk_0xA5CFD5B9C8A74104(Local_193.f_3), 0);
					unk_0x100966E1EB5421AA(unk_0xA5CFD5B9C8A74104(Local_193.f_3));
					func_8(&(Local_193.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0x51362735C7CDD08E(Local_193.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var43;
	
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
			Var43 = { Param0 - Var0[0 /*3*/] };
			if (Var43.f_2 > Param6.f_12)
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
	bool bVar82;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404919.f_1276 == *uParam0 || !Global_2404919.f_1276.f_1 == uParam0->f_1) || !Global_2404919.f_1276.f_2 == uParam0->f_2) || !Global_2404919.f_1279 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404919.f_1290 == uParam0->f_8 || !Global_2404919.f_1290.f_1 == uParam0->f_8.f_1) || !Global_2404919.f_1290.f_2 == uParam0->f_8.f_2) || !Global_2404919.f_1293 == uParam0->f_11) || !Global_2404919.f_1293.f_1 == uParam0->f_11.f_1) || !Global_2404919.f_1293.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404919.f_1290 == uParam0->f_8 || !Global_2404919.f_1290.f_1 == uParam0->f_8.f_1) || !Global_2404919.f_1290.f_2 == uParam0->f_8.f_2) || !Global_2404919.f_1293 == uParam0->f_11) || !Global_2404919.f_1293.f_1 == uParam0->f_11.f_1) || !Global_2404919.f_1293.f_2 == uParam0->f_11.f_2) || !Global_2404919.f_1296 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404919.f_1274 == 1)
		{
			if (unk_0x8DB3F26E5CA85896(Global_2404919.f_1283))
			{
				if (Global_2404919.f_1283 == unk_0xE3E113B4DB09AAF8())
				{
					if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1280) < func_146())
					{
						return 0;
					}
				}
				else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1280) < func_146())
				{
					return 0;
				}
			}
			unk_0x4F3CE675DAEFAFF1();
			unk_0xA8846F47ACD0A472();
			func_145();
		}
		Global_2404919.f_1274 = 0;
	}
	else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1280) > func_146())
	{
		Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
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
	unk_0x1A10579F8DE3BF6B(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404919.f_1274)
	{
		unk_0x4F3CE675DAEFAFF1();
		unk_0xA8846F47ACD0A472();
		func_145();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_144(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xBB22A67725D9B946())
		{
			Global_2404919.f_1297 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404919.f_1276 = { *uParam0 };
					Global_2404919.f_1279 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404919.f_1290 = { uParam0->f_8 };
					Global_2404919.f_1293 = { uParam0->f_11 };
					Global_2404919.f_1296 = 0f;
					Global_2404919.f_1276 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404919.f_1290 = { uParam0->f_8 };
					Global_2404919.f_1293 = { uParam0->f_11 };
					Global_2404919.f_1296 = uParam0->f_14;
					Global_2404919.f_1276 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_143(Var8.f_0, Var8.f_1);
			}
			Global_2404919.f_1275 = 1;
			Global_2404919.f_1274 = 1;
			Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1280 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1283 = unk_0xE3E113B4DB09AAF8();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404919.f_1274)
	{
		if (Global_2404919.f_1275 == 1)
		{
			if (unk_0x5870CB0276CF5667(fVar4, fVar5, fVar6, fVar7) || unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 5000)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
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
					func_124(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_123(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404919.f_1275 = 9;
				}
				else
				{
					Global_2404919.f_1275 = 2;
				}
			}
		}
		if (Global_2404919.f_1275 == 2)
		{
			if ((unk_0x1295F66E19F5CD2E(Var11, Var14) || unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 15000) || unk_0x509471E82DC731F8(Var11, Var14) == 0)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				if (uParam0->f_5 && !func_120(unk_0x3F80C6638E3A1A90(), 0))
				{
					Global_2404919.f_1275 = 3;
				}
				else
				{
					Global_2404919.f_1275 = 4;
				}
			}
			else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1285) > 7000)
			{
				func_119(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404919.f_1275 == 3)
		{
			if (func_118() || unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 10000)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				Global_2404919.f_1275 = 4;
			}
		}
		if (Global_2404919.f_1275 == 4)
		{
			if (unk_0xBB22A67725D9B946())
			{
				unk_0x4F3CE675DAEFAFF1();
				unk_0xA8846F47ACD0A472();
			}
			else
			{
				iVar0 = 0;
				func_113();
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
					if (!unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
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
							if (unk_0x3EAC5BC30049AE71(unk_0x3F80C6638E3A1A90(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
								Global_2404919.f_1275 = 5;
							}
							break;
						
						case 1:
							func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x7864EBBAE7E31662(unk_0x3F80C6638E3A1A90(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
								Global_2404919.f_1275 = 5;
							}
							break;
						
						case 2:
							if (unk_0x7864EBBAE7E31662(unk_0x3F80C6638E3A1A90(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
								Global_2404919.f_1275 = 5;
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
					Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
					Global_2404919.f_1275 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xD5F6ED88ED88E952(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x96657D86D8FFAA3F(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x96657D86D8FFAA3F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404919.f_1275 == 5)
		{
			if (func_48(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404919.f_1301.f_4)
				{
					Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
					Global_2404919.f_1275 = 6;
				}
				else
				{
					Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x2C393A56EDEECDE4(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404919.f_1275 = 9;
				}
			}
			else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 20000)
			{
				unk_0x4F3CE675DAEFAFF1();
				unk_0xA8846F47ACD0A472();
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				Global_2404919.f_1275 = 8;
			}
		}
		if (Global_2404919.f_1275 == 6)
		{
			iVar0 = 0;
			Global_2404919.f_1301 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_47(uParam0->f_4))
				{
					if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_46(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var8)))
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
			Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1275 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xD5F6ED88ED88E952(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x96657D86D8FFAA3F(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x96657D86D8FFAA3F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404919.f_1275 == 7)
		{
			if (func_48(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404919.f_1408[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_123(Global_2404919.f_1408[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1408[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_44(Global_2404919.f_1408[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1408[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xB84E12C6EBFF63A4(Global_2404919.f_1408[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1408[iVar17 /*3*/] };
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
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x2C393A56EDEECDE4(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404919.f_1275 = 9;
			}
			else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 20000)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				Global_2404919.f_1275 = 8;
			}
		}
		if (Global_2404919.f_1275 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404919.f_468))
				{
				}
			}
			else if (Global_2404919.f_1301.f_1)
			{
				func_16(uParam2, &(Global_2404919.f_1301.f_5));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar82 = false;
				}
				else
				{
					bVar82 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404919.f_1276 };
				func_18(uParam2[0 /*3*/], 0, bVar82, 0, 0, uParam0, uParam1);
			}
			Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1275 = 9;
		}
		if (Global_2404919.f_1275 == 9)
		{
			Global_2404919.f_1274 = 0;
			unk_0x4F3CE675DAEFAFF1();
			unk_0xA8846F47ACD0A472();
			func_145();
			return 1;
		}
		Global_2404919.f_1280 = unk_0xC7F926248AF8587B();
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
	var uVar60;
	int iVar61;
	bool bVar62;
	int iVar63;
	struct<3> Var64;
	struct<3> Var67;
	struct<3> Var70;
	float fVar73;
	
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
	if (bParam1)
	{
		iVar63 = 0;
	}
	else
	{
		iVar63 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar63 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var64 = { *uParam5 };
						if (func_47(uParam5->f_4) || !unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 1:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_46(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 2:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_46(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var64)))
						{
							iVar63 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar63 += 4;
		}
	}
	if (func_20(*uParam0, &Var0, iVar63, iParam3, 1))
	{
	}
	else
	{
		bVar62 = true;
	}
	if (bVar62)
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
		iVar61 = 0;
		while (iVar61 < 2)
		{
			Var4.f_38[iVar61 /*3*/] = { uParam6->f_13[iVar61 /*3*/] };
			Var4.f_45[iVar61] = uParam6->f_20[iVar61];
			iVar61++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_124(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var67 = { *uParam5 };
				fVar73 = uParam5->f_4;
				break;
			
			case 1:
				Var67 = { uParam5->f_8 };
				Var70 = { uParam5->f_11 };
				break;
			
			case 2:
				Var67 = { uParam5->f_8 };
				Var70 = { uParam5->f_11 };
				fVar73 = uParam5->f_14;
				break;
		}
		if (!func_19(Var0, uParam5->f_7, Var67, Var70, fVar73))
		{
			if (func_20(*uParam0, &Var0, iVar63, iParam3, 0))
			{
				if (!func_19(Var0, uParam5->f_7, Var67, Var70, fVar73))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var67 + Var70 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var67 };
					}
					if (unk_0xC4A43A7E257E1FD9(Var0, &uVar60, 0))
					{
						Var0.f_2 = uVar60;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var67 + Var70 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var67 };
				}
				if (unk_0xC4A43A7E257E1FD9(Var0, &uVar60, 0))
				{
					Var0.f_2 = uVar60;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404919.f_602 = 1;
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
			return func_44(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xB84E12C6EBFF63A4(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	if (unk_0xDDF72D11359E25EC(Param0, 0, uParam3, iParam4))
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			uVar1 = 2;
			uVar8 = 2;
			if ((iParam5 == 1 && !func_21(Global_2404919.f_481, &Param0, &uVar1, &uVar8, bParam6, 1)) || iParam5 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_35(Param0))
	{
		if (func_34(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_25(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_24(*uParam3, 1056964608))
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
				func_22(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0);
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

void func_22(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
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
		func_23(&Var0, 0f, 0f, unk_0x8AF26D6D6BBE6931(0f, 360f));
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

void func_23(var uParam0, struct<3> Param1)
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

int func_24(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404919.f_1507[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_25(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_33();
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_32(*uParam0, &(Global_2404919.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_26(&Var1, &(Global_2404919.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_25(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_26(&Var1, &(Global_2404919.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
					}
					*uParam0 = { Var1 };
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_26(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_31(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404919.f_1505) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_31(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_31(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_22(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404919.f_1505) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_30(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_27(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_27(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_29(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x36C9BE33708F029F(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_28(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_28(Var6, Var3) >= 0f)
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
		Var6 = { func_29(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_29(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x36C9BE33708F029F(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_28(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_28(Var6, Var29) >= 0f)
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

float func_28(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_29(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_30(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_31(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_22(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_30(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_27(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x534DA90AB4BE425C(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_123(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_44(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xB84E12C6EBFF63A4(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_32(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_123(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404919.f_1505) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_44(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_33()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_34(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407161[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407161[iVar0 /*17*/].f_16))
			{
				if (func_32(*uParam0, &(Global_2407161[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407161[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407161[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_26(&Var1, &(Global_2407161[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_34(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_26(&Var1, &(Global_2407161[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_35(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404919.f_484)
	{
		if (!func_39(unk_0x3F80C6638E3A1A90(), 1))
		{
			return 1;
		}
		if (!func_38(Param0, 1008981770))
		{
			if (!func_34(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_34(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_37(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_36(&(Global_2404919.f_39[iVar0 /*12*/])) };
				if (!func_34(&Var1, 0, 0, 0))
				{
					if (!func_34(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_36(var uParam0)
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

int func_37(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404919.f_39[iVar0 /*12*/].f_9)
		{
			if (func_32(Param0, &(Global_2404919.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_38(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404919.f_39[iVar0 /*12*/].f_9)
		{
			if (func_32(Param0, &(Global_2404919.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_39(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_43(iParam0) != 0;
	}
	return func_40(iParam0, bParam1);
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_41(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586079[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_41(int iParam0)
{
	return func_42(iParam0);
}

bool func_42(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

int func_43(int iParam0)
{
	if (func_640(iParam0, 0, 1))
	{
		return Global_2416794[iParam0 /*303*/].f_1;
	}
	return 0;
}

int func_44(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_45(&Param3, &Param6);
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

void func_45(var uParam0, var uParam1)
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

int func_46(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_47(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404919.f_1301 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x7E2490D5331C2EF9(&(Global_2404919.f_1301)))
			{
				case 0:
					if (uParam2->f_7 && Global_2404919.f_512.f_7 == 0)
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
							*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
						}
						if (uParam1->f_5 && func_17(Global_2404919.f_468))
						{
							if (!Global_2404919.f_1301.f_4)
							{
								Global_2404919.f_1301.f_4 = 1;
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
						uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
						return 1;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xBB22A67725D9B946())
		{
			if (!unk_0xC8C27FAF299F4354())
			{
				if (unk_0x7635A495A644C07D())
				{
					Global_2404919.f_1301 = unk_0x26BA5A4FA4A587D6();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA8846F47ACD0A472();
				Global_2404919.f_1301.f_4 = 1;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_109(Global_2404919.f_512, &(Global_2404919.f_1301.f_30), &(Global_2404919.f_1301.f_63));
	}
	if (uParam2->f_7 && !Global_2404919.f_1301.f_3)
	{
		Global_2404919.f_1301.f_3 = 1;
		func_53(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404919.f_1301 > 0)
	{
		if (uParam1->f_5 || unk_0xBB22A67725D9B946())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404919.f_1301)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404919.f_1301.f_2)
					{
						iVar4 = Global_2404919.f_1301.f_2 + 1;
					}
					if (iVar4 > (Global_2404919.f_1301 - 1))
					{
						iVar4 = (Global_2404919.f_1301 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x1A664279AFB239A9(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xBE72992FED6055C5(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xC11B03D33D7E53AA(iVar4);
					}
					else
					{
						unk_0x3687751804ECB7AE(iVar4, &iVar5);
					}
					func_53(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404919.f_1301.f_2 = iVar4;
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
			iVar4 = Global_2404919.f_1301;
		}
		if (Global_2404919.f_1301 == iVar4)
		{
			if (uParam1->f_5 && func_17(Global_2404919.f_468))
			{
				if (Global_2404919.f_1301.f_1)
				{
					func_16(uParam0, &(Global_2404919.f_1301.f_5));
					func_52(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
					func_52(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404919.f_1301.f_1)
			{
				func_16(uParam0, &(Global_2404919.f_1301.f_5));
				func_52(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x0ADD324BC46177EF(0, Global_2404919.f_1301);
				unk_0x1A664279AFB239A9(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_49(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_52(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
					func_52(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
				func_52(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
		if (uParam1->f_5 && func_17(Global_2404919.f_468))
		{
			if (!Global_2404919.f_1301.f_4)
			{
				Global_2404919.f_1301.f_4 = 1;
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
		uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
		func_52(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_49(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_51(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2408127[iVar4])
	{
		if (func_50(Var1, &(Global_2407298[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_27(&Var1, Global_2407298[iVar4 /*92*/][iVar0 /*7*/], Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408127[8])
	{
		if (func_50(Var1, &(Global_2407298[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_27(&Var1, Global_2407298[iVar4 /*92*/][iVar0 /*7*/], Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_50(struct<3> Param0, var uParam3)
{
	return unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_51(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408137[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408137[1])
	{
		if (Param0.f_0 < Global_2408141[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408137[2])
	{
		if (Param0.f_0 < Global_2408141[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408141[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408141[3])
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

void func_52(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404919.f_1408[(3 - iVar0) /*3*/] = { Global_2404919.f_1408[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404919.f_1408[0 /*3*/] = { Param0 };
}

void func_53(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
	bool bVar11;
	int iVar12;
	struct<8> Var13;
	bool bVar21;
	bool bVar22;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404919.f_468 == 1)
		{
			if (unk_0x7F38A542899D217A((Global_2404919.f_481.f_2 - Param0.f_2)) < 25f)
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
		if (func_106(unk_0x3F80C6638E3A1A90()))
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
		if (!func_105(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x8F6FE79D52C51E99(unk_0xE7869D5D7816A9B6(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x8F6FE79D52C51E99(unk_0xE7869D5D7816A9B6(), Param0, 20f))
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
		if (!func_104(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar11 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar11 = false;
			}
		}
		iVar10++;
	}
	if (bVar11)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_97(Param0, fParam3, uParam4->f_15, func_103(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404919.f_1;
		}
	}
	else if (!func_91(Param0, 25f, unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_90(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_90(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404919.f_621)
		{
			if (func_35(Global_2404919.f_481))
			{
				if ((!func_34(&Param0, 0, 0, 0) && !func_25(&Param0, 0, 0)) && !func_89(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_25(&Param0, 0, 0) && !func_89(&Param0, 0)) && !func_24(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_88(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_87(unk_0x3F80C6638E3A1A90()) && func_85(unk_0x3F80C6638E3A1A90())))
		{
			if (!func_84(&Param0, &(Global_2404919.f_1301.f_63), 0, 1065353216))
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
		if (!func_85(unk_0x3F80C6638E3A1A90()))
		{
			if (!func_83(Param0, &(Global_2404919.f_1301.f_30), &(Global_2404919.f_1301.f_63), 1073741824))
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
	if (func_82(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_82(Param0))
			{
				if (func_17(Global_2404919.f_468))
				{
					if (func_38(Param0, 1f))
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
		if (func_81(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404919.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_49(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_80(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var13.f_2 = 1176256410;
	bVar21 = false;
	bVar22 = false;
	iVar12 = 0;
	while (iVar12 < 3)
	{
		if (iVar7 >= Global_2404919.f_1301.f_5[iVar12 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar21)
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
						fVar0 = func_72(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_72(Param0, Global_2404919.f_1276, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar21 = true;
				}
				if ((func_17(Global_2404919.f_468) && iVar7 == Global_2404919.f_1301.f_5[iVar12 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar22)
					{
						fVar2 = func_70(Param0);
						bVar22 = true;
					}
					if (fVar2 < Global_2404919.f_1301.f_5[iVar12 /*8*/].f_2)
					{
						Var13.f_4 = { Param0 };
						Var13.f_7 = fParam3;
						Var13.f_0 = iVar7;
						Var13.f_1 = fVar0;
						Var13.f_2 = fVar2;
						func_69(Var13, iVar12);
						Global_2404919.f_1301.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404919.f_1301.f_5[iVar12 /*8*/] || (iVar7 == Global_2404919.f_1301.f_5[iVar12 /*8*/] && fVar0 > Global_2404919.f_1301.f_5[iVar12 /*8*/].f_1))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_1 = fVar0;
					func_69(Var13, iVar12);
					Global_2404919.f_1301.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar21)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_68(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_55(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_54(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_54(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar21 = true;
				}
				if (iVar7 > Global_2404919.f_1301.f_5[iVar12 /*8*/] || (iVar7 == Global_2404919.f_1301.f_5[iVar12 /*8*/] && fVar3 > Global_2404919.f_1301.f_5[iVar12 /*8*/].f_3))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_3 = fVar3;
					func_69(Var13, iVar12);
					Global_2404919.f_1301.f_1 = 1;
					return;
				}
			}
		}
		iVar12++;
	}
}

float func_54(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_55(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar7;
	
	fVar2 = 999999.9f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_640(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0x3F80C6638E3A1A90() || iParam5 == 1)
			{
				bVar3 = false;
				if (bParam3)
				{
					if (func_58(iVar7))
					{
						bVar3 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x2CC717AC6CF51F8F(iVar7) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
					{
						if (!unk_0x2CC717AC6CF51F8F(iVar7) == -1 || !func_39(unk_0x3F80C6638E3A1A90(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar7) || !bParam6)
					{
						if (func_57(iVar7))
						{
							Var4 = { func_56(iVar7) };
							if (!bParam6)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0xF18329472591CFE6(Param0, Var4, 1);
							if (fVar1 < fVar2)
							{
								fVar2 = fVar1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar2;
}

Vector3 func_56(int iParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iParam0), 0);
}

int func_57(int iParam0)
{
	if (unk_0x715CF32E4ACFA610(unk_0x91B73D905EA38F6B(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (func_640(iParam0, 0, 1))
	{
		if (!func_66(iParam0))
		{
			if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iParam0))
			{
				if (!unk_0x2CC717AC6CF51F8F(iParam0) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
				{
					if (func_40(unk_0x3F80C6638E3A1A90(), 1))
					{
						if (!func_65(unk_0x2CC717AC6CF51F8F(iParam0), unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
				{
					if (!func_40(unk_0x3F80C6638E3A1A90(), 1))
					{
						if (!func_59(iParam0))
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

int func_59(int iParam0)
{
	if (func_64(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	Global_2456685 = { func_63(iParam0) };
	if (unk_0x74320D9FF94A9E7E(&Global_2456685))
	{
		return 1;
	}
	if (func_60(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (!iVar0 == func_61())
	{
		if (iVar0 == func_62(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_61()
{
	return -1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_61())
	{
		return Global_1607618[iParam0 /*106*/].f_8;
	}
	return func_61();
}

struct<13> func_63(int iParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0, int iParam1)
{
	if (unk_0xAB7778782580F313())
	{
		Global_2456685 = { func_63(iParam0) };
		Global_2456698 = { func_63(iParam1) };
		if (unk_0x89398BAF58AA485C(&Global_2456685))
		{
			if (unk_0x89398BAF58AA485C(&Global_2456698))
			{
				unk_0xB486161F8A7A8AFB(&Global_2456615, 35, &Global_2456685);
				unk_0xB486161F8A7A8AFB(&Global_2456650, 35, &Global_2456698);
				if (Global_2456615 == Global_2456650)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_65(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 0);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 1);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 2);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 4);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 5);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 6);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 8);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 9);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 10);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 12);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 13);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 14);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return 1;
	}
	if (func_67())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

float func_68(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_640(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				if (unk_0x86ECD59CFE6143AC(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0));
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
		if (func_640(iVar1, 1, 1))
		{
			if (!func_120(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3F80C6638E3A1A90()))
				{
					if (func_57(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2CC717AC6CF51F8F(iVar1) != unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))) || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x2CC717AC6CF51F8F(iVar1) != iParam7 || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iVar1), 0));
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

void func_69(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404919.f_1301.f_5[iParam8 /*8*/] };
	Global_2404919.f_1301.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_69(Var0, iParam8 + 1);
	}
}

float func_70(struct<3> Param0)
{
	var uVar0;
	
	return func_71(Param0, &(Global_2404919.f_39), &uVar0);
}

float func_71(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404919.f_1505) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_72(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
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
		fVar0 = func_54(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_54(func_55(Param0, 1, 0, 0, 1), 0f, func_79(), func_77(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_54(func_75(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && !func_39(unk_0x3F80C6638E3A1A90(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_54(func_74(Param0, unk_0x3F80C6638E3A1A90(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_73(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_54(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_54(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_54(unk_0x2A488C176D52CCA5(Global_2404919.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_73(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xB1B73F5D89903834(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x608885034BBFCDB9(uVar3))
	{
		unk_0x399284B4E8B22749(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x7F38A542899D217A((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_74(struct<3> Param0, int iParam3, int iParam4)
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
			if (func_640(iVar3, 0, 1))
			{
				if (unk_0x2CC717AC6CF51F8F(iVar3) != unk_0x2CC717AC6CF51F8F(iParam3) || (unk_0x2CC717AC6CF51F8F(iVar3) == -1 && unk_0x2CC717AC6CF51F8F(iParam3) == -1))
				{
					if (Global_2412289.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar2 /*3*/], Param0);
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

float func_75(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD51CFE69539DB6D8(uVar6[iVar2]))
		{
			if (!unk_0x76B2D234F1895632(uVar6[iVar2]))
			{
				if (func_76(uVar6[iVar2]))
				{
					Var3 = { unk_0x1141852D07400777(uVar6[iVar2], 1) };
					fVar1 = unk_0xF18329472591CFE6(Param0, Var3, 1);
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

int func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1EB88099AAF24BDE(uParam0);
	switch (unk_0x71EF2827C4AC5DD9(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x71EF2827C4AC5DD9(iVar0, Global_1574190[unk_0x3F80C6638E3A1A90()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 0)
	{
		iVar1 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x71EF2827C4AC5DD9(iVar0, Global_1573901[iVar1]))
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

float func_77()
{
	if (func_78())
	{
		if ((unk_0xD1C57B32C6DE7BB6(Global_2404919.f_39.f_67) || unk_0xFFD2CE10E8C7E77F(Global_2404919.f_39.f_67)) || Global_2404919.f_39.f_67 == joaat("rhino"))
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

int func_78()
{
	if (Global_2404919.f_39.f_65 && !Global_2404919.f_39.f_295)
	{
		if (!func_66(unk_0x3F80C6638E3A1A90()))
		{
			return 1;
		}
	}
	return 0;
}

float func_79()
{
	if (func_78())
	{
		if ((unk_0xD1C57B32C6DE7BB6(Global_2404919.f_39.f_67) || unk_0xFFD2CE10E8C7E77F(Global_2404919.f_39.f_67)) || Global_2404919.f_39.f_67 == joaat("rhino"))
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

int func_80(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0xEEC849D5E3FC13E0(Param0, fParam7)) || (fVar0 > 0f && unk_0xF0CC6299CE9D9124(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xDADCC8A8DA94F002(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xDADCC8A8DA94F002(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_81(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404919.f_39.f_55)
	{
		if (unk_0x4443D8D533ACB547(Global_2404919.f_39.f_56))
		{
			if (!unk_0x0EDE95A6D2634A75(Param0))
			{
				uVar0 = unk_0x4D694385AA5DB67C(Param0);
				if (unk_0x4443D8D533ACB547(uVar0))
				{
					iVar1 = unk_0x50B42F1ED89D1230(uVar0);
					if (!iVar1 == Global_2404919.f_39.f_57)
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

int func_82(struct<3> Param0)
{
	switch (Global_2404919.f_1297)
	{
		case 0:
			return func_123(Param0, Global_2404919.f_1276, Global_2404919.f_1279, 0, 0);
			break;
		
		case 1:
			return func_44(Param0, Global_2404919.f_1290, Global_2404919.f_1293, 0, 0);
			break;
		
		case 2:
			return unk_0xB84E12C6EBFF63A4(Param0, Global_2404919.f_1290, Global_2404919.f_1293, Global_2404919.f_1296, 0, 1);
			break;
	}
	return 0;
}

int func_83(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xB84E12C6EBFF63A4(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_84(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_22(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_86(iParam0))
			{
				if (Global_1586079[iParam0 /*408*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_86(int iParam0)
{
	return Global_1586079[iParam0 /*408*/].f_177 != 0;
}

int func_87(int iParam0)
{
	if (func_40(iParam0, 1))
	{
		if (Global_1586079[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404919.f_1408[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_89(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404919.f_547 > 0f)
	{
		fVar3 = unk_0x2A488C176D52CCA5(*uParam0, Global_2404919.f_544);
		if (fVar3 < Global_2404919.f_547)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_22(&Var0, Global_2404919.f_544, Global_2404919.f_547, 1036831949, 0);
				if (func_89(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_22(&Var0, Global_2404919.f_544, Global_2404919.f_547, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_90(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_640(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF18329472591CFE6(func_56(unk_0x3F80C6638E3A1A90()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x86ECD59CFE6143AC(Param0, fParam3))
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
		if (func_640(iVar1, 1, 1))
		{
			if (!func_120(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3F80C6638E3A1A90()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0x2CC717AC6CF51F8F(iVar1) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2CC717AC6CF51F8F(iVar1) != unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))) || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0xF18329472591CFE6(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2CC717AC6CF51F8F(iVar1) != iParam8 || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0xF18329472591CFE6(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
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

int func_91(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_96(Param0, fParam3, iParam4, iParam5) || func_92(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_92(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_93(Param0, Global_2412289.f_426[iVar0 /*3*/], Global_2412289.f_523[iVar0], Global_2412289.f_556[iVar0], 1036831949))
			{
				if (func_640(iVar1, 0, 1) && func_640(iParam3, 0, 1))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_93(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_95(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_23(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_94(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x7F38A542899D217A((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7F38A542899D217A((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7F38A542899D217A((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xB84E12C6EBFF63A4(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_94(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x36B4A88247BB6F4C(iParam0))
	{
		unk_0x67060D73A7F90F25(iParam0, fParam1, fParam2);
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

float func_95(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_94(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_96(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_640(iVar1, 0, 1) && func_640(iParam4, 0, 1))
			{
				if (Global_2412289.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_56(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2412289.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_640(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_56(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404919.f_1 = 0;
	if (!func_91(Param0, 0.5f, unk_0x3F80C6638E3A1A90(), 0, 0))
	{
		Global_2404919.f_1++;
		if (bParam5)
		{
			if (func_144(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
				if (!func_102(Param0, fParam12))
				{
					Global_2404919.f_1++;
					if (!func_101(Param0))
					{
						Global_2404919.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			}
		}
		else if (!bParam4)
		{
			if (func_144(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
				if (!func_102(Param0, fParam12))
				{
					Global_2404919.f_1++;
					if (!func_98(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404919.f_1++;
						if (!func_101(Param0))
						{
							Global_2404919.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			}
		}
		else if (func_144(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			if (!func_102(Param0, fParam12))
			{
				Global_2404919.f_1++;
				if (!func_98(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404919.f_1++;
					if (!func_101(Param0))
					{
						Global_2404919.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
		}
	}
	return 0;
}

int func_98(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x3F80C6638E3A1A90() == iVar1)
		{
			if ((func_640(iVar1, 1, 1) && func_57(iVar1)) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (!func_100(unk_0x3F80C6638E3A1A90(), iVar1, -2, 0))
				{
					if (func_99(func_56(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_99(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xB84E12C6EBFF63A4(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && unk_0x2CC717AC6CF51F8F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2CC717AC6CF51F8F(iParam0) == unk_0x2CC717AC6CF51F8F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2CC717AC6CF51F8F(iParam0) == iParam2;
	}
	return unk_0x2CC717AC6CF51F8F(iParam0) == iParam2;
}

int func_101(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_40(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (Global_1612326.f_32458 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1612326.f_32458)
			{
				if (Global_1612326.f_32459[iVar0 /*39*/].f_7 != 0)
				{
					func_94(Global_1612326.f_32459[iVar0 /*39*/].f_7, &Var1, &Var4, 1086324736, 1080033280, 1077936128);
					fVar7 = (unk_0x7F38A542899D217A((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (unk_0x7F38A542899D217A((Var1.f_0 - Var4.f_0)) * 0.5f);
					fVar9 = (unk_0x7F38A542899D217A((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (unk_0xB7A628320EFF8E47(Global_1612326.f_32459[iVar0 /*39*/], Param0) < fVar10)
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

int func_102(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_640(iVar1, 1, 1) && func_57(iVar1)) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
		{
			if ((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && unk_0x2CC717AC6CF51F8F(iVar1) == -1) && !func_39(unk_0x3F80C6638E3A1A90(), 1))
			{
				return 0;
			}
			else if ((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && !unk_0x3F80C6638E3A1A90() == iVar1) || !func_100(unk_0x3F80C6638E3A1A90(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_56(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_103(int iParam0)
{
	if ((Global_2404919.f_468 == 9 || Global_2404919.f_468 == 9) || (Global_2404919.f_468 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_104(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3F80C6638E3A1A90() != iVar1) || iParam8 == 0)
		{
			if (func_640(iVar1, bParam4, bParam5))
			{
				if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
				{
					if (!bParam7 || (!unk_0xAF437D7C802AB246(unk_0x91B73D905EA38F6B(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) != unk_0x2CC717AC6CF51F8F(iVar1))) || unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
						{
							if (((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && iParam9) && bParam6) && func_59(iVar1))
							{
							}
							else if (unk_0xD51CFE69539DB6D8(unk_0x91B73D905EA38F6B(iVar1)))
							{
								if (unk_0xF18329472591CFE6(func_56(iVar1), Param0, 1) < fParam3)
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

int func_105(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_640(iVar1, 1, 1))
			{
				if ((!func_120(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1)) && iVar1 != unk_0x3F80C6638E3A1A90())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0x2CC717AC6CF51F8F(iVar1) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x2CC717AC6CF51F8F(iVar1) == iVar3)
					{
						if (unk_0xF18329472591CFE6(func_56(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
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

int func_106(int iParam0)
{
	if ((func_39(iParam0, 1) || func_108(iParam0)) || func_107(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1607618[iVar0 /*106*/] != -1;
	}
	return 0;
}

void func_109(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xB519E5386FBF69E5(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_111(&Var2, uParam3, iVar0);
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
				func_110(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_110(var uParam0, var uParam1, int iParam2)
{
	Global_2409048 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_110(&Global_2409048, uParam1, iParam2 + 1);
	}
}

void func_111(var uParam0, var uParam1, int iParam2)
{
	Global_2409044 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_111(&Global_2409044, uParam1, iParam2 + 1);
	}
}

void func_112(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_45(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_113()
{
	func_117();
	func_116();
	func_115();
	func_114();
}

void func_114()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404919.f_1301.f_63[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_115()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404919.f_1301.f_30[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_116()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404919.f_1301.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_117()
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404919.f_1301 = { Var0 };
}

var func_118()
{
	return Global_1310987.f_4;
}

void func_119(var uParam0, var uParam1)
{
	func_145();
	func_143(uParam0, uParam1);
}

bool func_120(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_121(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_122();
	}
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_122()
{
	return Global_1312746;
}

bool func_123(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_124(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404919.f_1144 > 0 && func_142(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_125(uParam0, uParam1, uParam2);
	}
}

void func_125(var uParam0, var uParam1, var uParam2)
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
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_21(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_141(uParam0, 1))
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
	Global_2409058.f_162 = 0;
	Global_2409058.f_163 = 0;
	Global_2409058.f_164 = -99;
	Global_2409058.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409058[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409058.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xB1B73F5D89903834(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x608885034BBFCDB9(iVar8))
		{
			unk_0x399284B4E8B22749(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409058.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409058.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x412E24001F8D483B(iVar8)) || unk_0x9023A1321CE38A1F(iVar8))
			{
				unk_0x6778910539806944(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_89(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_140(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_139(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_48 && !func_141(&Var1, 0)) || uParam2->f_48 == 0)
													{
														Var1 = { func_137(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
														if (!bVar12)
														{
															if (bVar11)
															{
																iVar0 = (iVar0 + -1);
															}
														}
														if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
														{
															if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
															{
																if ((uParam2->f_12 && !func_132(Var1, uVar4, uParam2->f_34, unk_0x3F80C6638E3A1A90(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !func_21(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																				if (func_144(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_144(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_131(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																						iVar22 = func_130(Var1, uParam2->f_54, &fVar23);
																					}
																					if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																					{
																						if (uParam2->f_52)
																						{
																							if (iVar22 < uParam2->f_53)
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2409058.f_162)
																								{
																									Global_2409058[iVar16 /*3*/] = { 0f, 0f, 0f };
																									Global_2409058.f_121[iVar16] = 0f;
																									iVar16++;
																								}
																								Global_2409058.f_162 = 0;
																								uParam2->f_53 = iVar22;
																							}
																						}
																						if (uParam2->f_30)
																						{
																							if (Global_2409058.f_162 == 0)
																							{
																								Global_2409058[0 /*3*/] = { Var1 };
																								Global_2409058.f_121[0] = uVar4;
																							}
																							else
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2409058.f_162 + 1)
																								{
																									if (iVar16 < 40)
																									{
																										if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2409058[iVar16 /*3*/], *uParam0))
																										{
																											func_129(Var1, uVar4, iVar16);
																											iVar16 = Global_2409058.f_162 + 1;
																										}
																									}
																									iVar16++;
																								}
																							}
																							Global_2409058.f_162++;
																							if (Global_2409058.f_162 >= 5)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2409058.f_162 == 40)
																								{
																									iVar0 = 100;
																								}
																							}
																						}
																						else
																						{
																							Global_2409058[Global_2409058.f_162 /*3*/] = { Var1 };
																							Global_2409058.f_121[Global_2409058.f_162] = uVar4;
																							Global_2409058.f_162++;
																							if (func_139(Var1, uParam2))
																							{
																								Global_2409058.f_163++;
																							}
																							if (Global_2409058.f_162 >= 10)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2409058.f_162 == 40)
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
				if (Global_2409058.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409058[0 /*3*/] };
						*uParam1 = Global_2409058.f_121[0];
						return;
					}
					else
					{
						if (Global_2409058.f_163 > 0 && !Global_2409058.f_163 == Global_2409058.f_162)
						{
							func_127(0, uParam2);
						}
						iVar24 = unk_0x0ADD324BC46177EF(0, Global_2409058.f_162);
						Var25 = { Global_2409058[0 /*3*/] };
						uVar28 = Global_2409058.f_121[0];
						Global_2409058[0 /*3*/] = { Global_2409058[iVar24 /*3*/] };
						Global_2409058.f_121[0] = Global_2409058.f_121[iVar24];
						Global_2409058[iVar24 /*3*/] = { Var25 };
						Global_2409058.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409058[0 /*3*/] };
						*uParam1 = Global_2409058.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_125(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x0ADD324BC46177EF((1 + iVar15), (40 + iVar15));
						unk_0xE67882ADA97B9D94(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_137(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (func_21(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), 1, 1) || func_141(&Var29, 1))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								func_125(uParam0, uParam1, uParam2);
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
				func_125(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_126(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409058.f_164 = iVar8;
	}
}

void func_126(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_91(*(uParam0[iVar2 /*4*/]), 5f, unk_0x3F80C6638E3A1A90(), 0, 0))
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

void func_127(int iParam0, var uParam1)
{
	if (!func_139(Global_2409058[iParam0 /*3*/], uParam1))
	{
		Global_2409058.f_162 = (Global_2409058.f_162 - 1);
		func_128(iParam0);
		if (Global_2409058.f_162 > Global_2409058.f_163)
		{
			func_127(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_127(iParam0 + 1, uParam1);
	}
}

void func_128(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409058[iParam0 /*3*/] = { Global_2409058[iParam0 + 1 /*3*/] };
			Global_2409058.f_121[iParam0] = Global_2409058.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_129(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409058[iParam4 /*3*/] };
	uVar3 = Global_2409058.f_121[iParam4];
	Global_2409058[iParam4 /*3*/] = { Param0 };
	Global_2409058.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2409058.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_129(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_130(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_58(iVar5))
		{
			Var1 = { func_56(iVar5) };
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

int func_131(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x3F80C6638E3A1A90() != iVar1) || iParam9 == 0)
		{
			if (func_640(iVar1, bParam5, bParam6))
			{
				if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
				{
					if (!bParam8 || (!unk_0xAF437D7C802AB246(unk_0x91B73D905EA38F6B(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) != unk_0x2CC717AC6CF51F8F(iVar1))) || unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
						{
							if (((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && iParam10) && bParam7) && func_59(iVar1))
							{
							}
							else if (unk_0xD51CFE69539DB6D8(unk_0x91B73D905EA38F6B(iVar1)))
							{
								if (func_93(func_56(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_132(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_136(Param0, uParam3, iParam4, iParam5, iParam6) || func_133(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_135(Param0, iParam4, Global_2412289.f_426[iVar0 /*3*/], Global_2412289.f_556[iVar0]))
			{
				if (func_134(Param0, uParam3, iParam4, Global_2412289.f_426[iVar0 /*3*/], Global_2412289.f_523[iVar0], Global_2412289.f_556[iVar0]))
				{
					if (func_640(iVar1, 0, 1) && func_640(iParam5, 0, 1))
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

int func_134(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
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
	
	if (func_93(Param0, Param5, uParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_94(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x7F38A542899D217A((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7F38A542899D217A((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7F38A542899D217A((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_23(&Var23, 0f, 0f, uParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_23(&Var26, 0f, 0f, uParam3);
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
		if (func_93(Var1[iVar0 /*3*/], Param5, uParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_135(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_95(iParam3, 1008981770);
	fVar1 = func_95(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_640(iVar1, 0, 1) && func_640(iParam5, 0, 1))
			{
				if (Global_2412289.f_260[iVar0])
				{
					if (func_93(Global_2412289.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_93(func_56(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2412289.f_260[iVar0])
			{
				if (func_93(Global_2412289.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_640(iVar1, 0, 1))
			{
				if (func_93(func_56(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_137(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_138(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x6778910539806944(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x0164913B5CACDF6B(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				func_94(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_138(Param0, *uParam3, Param6))
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
	Var0 = { unk_0xF919633EBD0639D0(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xC5CBFF029E3952D2(Param0, *uParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_94(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_138(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_23(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_28(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_139(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_123(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_44(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xB84E12C6EBFF63A4(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_140(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_51(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408849[iVar1])
	{
		if (func_50(Param0, &(Global_2408146[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408849[8])
	{
		if (func_50(Param0, &(Global_2408146[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_141(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404919.f_22.f_16)
	{
		switch (Global_2404919.f_22.f_15)
		{
			case 0:
				if (func_123(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_44(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xB84E12C6EBFF63A4(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, Global_2404919.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_31(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, Global_2404919.f_22.f_14, Global_2404919.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_142(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404919.f_1144 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_21(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
			}
		}
		if (uParam2->f_48)
		{
			if (func_141(uParam0, 1))
			{
			}
		}
		Global_2409058.f_162 = 0;
		Global_2409058.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409058[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409058.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404919.f_1144)
		{
			Var1 = { Global_2404919.f_1145[iVar0 /*4*/] };
			uVar4 = Global_2404919.f_1145[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_132(Var1, uVar4, uParam2->f_34, unk_0x3F80C6638E3A1A90(), 0, 1)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_21(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
									if (func_144(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_144(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0) && !func_131(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_130(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409058.f_162)
													{
														Global_2409058[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409058.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409058.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409058.f_162 == 0)
												{
													Global_2409058[0 /*3*/] = { Var1 };
													Global_2409058.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409058.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2409058[iVar5 /*3*/], *uParam0))
															{
																func_129(Var1, uVar4, iVar5);
																iVar5 = Global_2409058.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409058.f_162++;
												if (Global_2409058.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404919.f_1144;
													}
													else if (Global_2409058.f_162 == 40)
													{
														iVar0 = Global_2404919.f_1144;
													}
												}
											}
											else
											{
												Global_2409058[Global_2409058.f_162 /*3*/] = { Var1 };
												Global_2409058.f_121[Global_2409058.f_162] = uVar4;
												Global_2409058.f_162++;
												if (Global_2409058.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404919.f_1144;
													}
													else if (Global_2409058.f_162 == 40)
													{
														iVar0 = Global_2404919.f_1144;
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
		if (Global_2409058.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409058[0 /*3*/] };
				*uParam1 = Global_2409058.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409058.f_163 > 0 && !Global_2409058.f_163 == Global_2409058.f_162)
				{
					func_127(0, uParam2);
				}
				iVar13 = unk_0x0ADD324BC46177EF(0, Global_2409058.f_162);
				Var14 = { Global_2409058[0 /*3*/] };
				uVar17 = Global_2409058.f_121[0];
				Global_2409058[0 /*3*/] = { Global_2409058[iVar13 /*3*/] };
				Global_2409058.f_121[0] = Global_2409058.f_121[iVar13];
				Global_2409058[iVar13 /*3*/] = { Var14 };
				Global_2409058.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409058[0 /*3*/] };
				*uParam1 = Global_2409058.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_142(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_125(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_143(var uParam0, var uParam1)
{
	unk_0x5286D2CF4C3E5799(uParam0, uParam1, 0.1f);
	Global_2404919.f_1284 = unk_0xE3E113B4DB09AAF8();
	Global_2404919.f_1282 = 1;
	Global_2404919.f_1285 = unk_0xC7F926248AF8587B();
}

int func_144(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xEEC849D5E3FC13E0(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF0CC6299CE9D9124(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF0CC6299CE9D9124(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDADCC8A8DA94F002(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x743D96D854EFA6C5(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_104(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_90(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404919++;
	return 1;
}

void func_145()
{
	if (Global_2404919.f_1282)
	{
		if (unk_0xE3E113B4DB09AAF8() == Global_2404919.f_1284)
		{
			unk_0x832E69A1564ABEA4();
		}
		else
		{
			unk_0x832E69A1564ABEA4();
		}
		Global_2404919.f_1282 = 0;
	}
}

int func_146()
{
	if (unk_0xAEF17BDE274A1247())
	{
		return 10000;
	}
	return 1000;
}

Vector3 func_147()
{
	return Local_193.f_38[Local_193.f_36 /*3*/];
}

void func_148()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_193.f_0 != 4)
	{
		iLocal_448 = 0;
		while (iLocal_448 < unk_0x2249EB1A59F7C407())
		{
			if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iLocal_448)))
			{
				iVar2 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iLocal_448));
				if (func_640(iVar2, 1, 1))
				{
				}
				if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 1))
				{
					if (unk_0xB519E5386FBF69E5(Local_253[iLocal_448 /*6*/].f_1, 2))
					{
						if (Local_193.f_37 != iVar2)
						{
							Local_193.f_37 = iVar2;
						}
					}
				}
				if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 1))
				{
					if (Local_253[iLocal_448 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_253[iLocal_448 /*6*/].f_5);
					}
				}
				if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 4))
				{
					if (unk_0xB519E5386FBF69E5(Local_253[iLocal_448 /*6*/].f_1, 5))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_193.f_1), 4);
						Local_193.f_35 = iVar2;
					}
				}
				if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0xB519E5386FBF69E5(Local_193.f_1, 1) || unk_0xB519E5386FBF69E5(Local_193.f_1, 3)) || unk_0xB519E5386FBF69E5(Local_193.f_1, 4)) || unk_0xB519E5386FBF69E5(Local_193.f_1, 5))
						{
							if (!unk_0xB519E5386FBF69E5(Local_253[iLocal_448 /*6*/].f_1, 4))
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
			else if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 5))
			{
				if (Local_193.f_33 > -1)
				{
					if (iLocal_448 == Local_193.f_33)
					{
						unk_0x9956FB0E4B50ECB8(&(Local_193.f_1), 5);
					}
				}
			}
			iLocal_448++;
		}
		if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 1))
		{
			iVar0 = (iVar0 + Local_193.f_6);
			if (iVar0 >= func_149())
			{
				unk_0x9956FB0E4B50ECB8(&(Local_193.f_1), 1);
			}
			if (Local_193.f_5 != iVar0)
			{
				if (Local_193.f_5 < iVar0)
				{
					Local_193.f_5 = iVar0;
				}
				else if (Local_193.f_6 != (Local_193.f_5 - iVar0))
				{
					Local_193.f_6 = (Local_193.f_5 - iVar0);
				}
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0x9956FB0E4B50ECB8(&(Local_193.f_1), 2);
			}
		}
	}
}

int func_149()
{
	return Global_262145.f_10311;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	if (func_154() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_153(Local_193.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x0ADD324BC46177EF(0, 20);
				if (func_151(iVar1))
				{
					Local_193.f_38[iVar0 /*3*/] = { Local_754[iVar1 /*3*/] };
					Local_754[iVar1 /*3*/] = { 0f, 0f, 0f };
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
		if (func_153(Local_193.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_151(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_153(Local_754[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_153(Local_193.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0xF18329472591CFE6(Local_193.f_38[iVar0 /*3*/], Local_754[iParam0 /*3*/], 1);
				if (fVar1 < func_152())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_152()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_10312);
}

bool func_153(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_154()
{
	int iVar0;
	
	if (Local_193.f_48 != -1)
	{
		return Local_193.f_48;
	}
	iVar0 = unk_0x0ADD324BC46177EF(0, 4);
	if (!func_156(iVar0))
	{
		Local_193.f_48 = iVar0;
		func_155();
	}
	return Local_193.f_48;
}

void func_155()
{
	switch (Local_193.f_48)
	{
		case 0:
			Local_754[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			Local_754[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			Local_754[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_754[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_754[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_754[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_754[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_754[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			Local_754[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_754[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			Local_754[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_754[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_754[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			Local_754[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			Local_754[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_754[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_754[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			Local_754[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_754[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_754[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			Local_754[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			Local_754[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			Local_754[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_754[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_754[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			Local_754[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			Local_754[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			Local_754[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_754[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_754[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_754[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_754[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			Local_754[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_754[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_754[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_754[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_754[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			Local_754[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_754[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			Local_754[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			Local_754[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			Local_754[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			Local_754[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			Local_754[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_754[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_754[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			Local_754[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			Local_754[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			Local_754[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_754[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			Local_754[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			Local_754[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			Local_754[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			Local_754[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			Local_754[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			Local_754[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			Local_754[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			Local_754[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_754[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			Local_754[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			Local_754[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			Local_754[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			Local_754[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_754[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			Local_754[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			Local_754[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			Local_754[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			Local_754[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_754[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			Local_754[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			Local_754[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			Local_754[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_754[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			Local_754[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			Local_754[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			Local_754[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_754[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			Local_754[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			Local_754[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			Local_754[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10254;
		
		case 1:
			return Global_262145.f_10255;
		
		case 2:
			return Global_262145.f_10253;
		
		case 3:
			return Global_262145.f_10252;
		
		default:
	}
	return 0;
}

int func_157(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_158(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xFA4B36553B2A7802())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_159()
{
	func_161();
	if (unk_0xB519E5386FBF69E5(iLocal_447, 9))
	{
		return;
	}
	if (func_601())
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_447, 0))
		{
			unk_0xD5181C7DAF762C60("DisableFlightMusic", 1);
			unk_0xD5181C7DAF762C60("WantedMusicDisabled", 1);
			unk_0x9956FB0E4B50ECB8(&iLocal_447, 0);
		}
		if (!unk_0xB519E5386FBF69E5(iLocal_447, 1))
		{
			if (unk_0xE72D045151F6CA70("BG_SIGHTSEER_START"))
			{
				unk_0x9956FB0E4B50ECB8(&iLocal_447, 1);
			}
		}
		if (unk_0xB519E5386FBF69E5(iLocal_447, 1))
		{
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 3))
			{
				if (Local_193.f_5 == 1)
				{
					if (unk_0xE72D045151F6CA70("BG_SIGHTSEER_MID"))
					{
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 3);
					}
				}
			}
		}
		if (unk_0xB519E5386FBF69E5(iLocal_447, 3))
		{
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 4))
			{
				if (Local_193.f_5 == 2)
				{
					if (unk_0xE72D045151F6CA70("BG_SIGHTSEER_FINAL"))
					{
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 4);
					}
				}
			}
		}
		if (unk_0xB519E5386FBF69E5(Local_193.f_1, 1) || unk_0xB519E5386FBF69E5(Local_193.f_1, 4))
		{
			if (unk_0xB519E5386FBF69E5(iLocal_447, 4))
			{
				if (!unk_0xB519E5386FBF69E5(iLocal_447, 6))
				{
					if (unk_0xE72D045151F6CA70("BG_SIGHTSEER_STOP"))
					{
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 6);
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 2);
						unk_0xD5181C7DAF762C60("DisableFlightMusic", 0);
						unk_0xD5181C7DAF762C60("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_330())
	{
		if (func_160(unk_0x3F80C6638E3A1A90(), 20))
		{
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 0))
			{
				unk_0xD5181C7DAF762C60("DisableFlightMusic", 1);
				unk_0xD5181C7DAF762C60("WantedMusicDisabled", 1);
				unk_0x9956FB0E4B50ECB8(&iLocal_447, 0);
			}
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 7))
			{
				if (unk_0xE72D045151F6CA70("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0x9956FB0E4B50ECB8(&iLocal_447, 7);
				}
			}
			if (unk_0xB519E5386FBF69E5(Local_193.f_1, 1) || unk_0xB519E5386FBF69E5(Local_193.f_1, 4))
			{
				if (unk_0xB519E5386FBF69E5(iLocal_447, 7))
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_447, 6))
					{
						if (unk_0xE72D045151F6CA70("BG_SIGHTSEER_STOP"))
						{
							unk_0x9956FB0E4B50ECB8(&iLocal_447, 6);
							unk_0x9956FB0E4B50ECB8(&iLocal_447, 2);
							unk_0xD5181C7DAF762C60("DisableFlightMusic", 0);
							unk_0xD5181C7DAF762C60("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_160(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_8.f_4, iParam1);
}

void func_161()
{
	if (unk_0xB519E5386FBF69E5(iLocal_447, 8))
	{
		if (unk_0xB519E5386FBF69E5(iLocal_447, 9))
		{
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 10))
			{
				if (unk_0xB519E5386FBF69E5(iLocal_447, 11))
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_447, 12))
					{
						unk_0x84AE85DDEDADEB6F(1);
						unk_0xD5181C7DAF762C60("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xB519E5386FBF69E5(iLocal_447, 15))
				{
					if (unk_0xE72D045151F6CA70("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 15);
					}
				}
				if (unk_0xB519E5386FBF69E5(iLocal_447, 15))
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_447, 13))
					{
						if (unk_0xE72D045151F6CA70("APT_FADE_IN_RADIO"))
						{
							unk_0x9956FB0E4B50ECB8(&iLocal_447, 13);
						}
					}
					if (unk_0xB519E5386FBF69E5(iLocal_447, 13))
					{
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 10);
					}
				}
			}
		}
	}
}

void func_162()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_601() && !func_330())
	{
		return;
	}
	if (Local_193.f_34 > -1)
	{
		iVar3 = unk_0x0F810277E61B87AE(Local_193.f_34);
		if (unk_0xD18C3CF631455087(iVar3))
		{
			Var0 = { unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iVar3), 0) };
		}
	}
	if (!func_153(Var0, 0f, 0f, 0f, 0))
	{
		func_163(142, Var0, &uLocal_822, 1140457472, 1144750080, 0);
	}
}

void func_163(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_108(unk_0x3F80C6638E3A1A90()) && !func_200(unk_0x3F80C6638E3A1A90())) && !unk_0xB519E5386FBF69E5(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1, 8)) && (func_199(unk_0x3F80C6638E3A1A90()) || func_198(unk_0x3F80C6638E3A1A90())))
	{
		return;
	}
	Global_1716604 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Param1);
	func_194(iParam0, fVar0);
	if (unk_0xA57007F9A665F322() && unk_0x9449AC6115443388() == 15)
	{
		if (func_193(unk_0x3F80C6638E3A1A90()) || func_191(unk_0x3F80C6638E3A1A90()))
		{
			if (!unk_0xDE779F13A61348BE(1344549371))
			{
				unk_0x1BEA3B5BE879314A(1344549371);
			}
		}
		else if (unk_0xDE779F13A61348BE(1344549371))
		{
			unk_0xD2989C7DA0B4455D(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_190(unk_0x3F80C6638E3A1A90(), 21))
		{
			func_189(Param1, 1, 0);
		}
		if (!*uParam4 && func_640(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			*uParam4 = 1;
			if (func_188(iParam0))
			{
				unk_0x63EB72E192731928(func_187(iParam0));
				if (func_186(iParam0))
				{
					unk_0x8C1CE4F676968E94(0);
					if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
					{
						unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 1);
						unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 1);
					}
					unk_0x9956FB0E4B50ECB8(&(Global_1716604.f_3), 0);
				}
			}
			if (func_185(iParam0))
			{
				fVar1 = func_184(iParam0);
				if (fVar1 != 1f)
				{
					func_181(fVar1);
					unk_0x9956FB0E4B50ECB8(&(Global_1716604.f_3), 1);
				}
			}
			if (!Global_2391042)
			{
				if (func_180(iParam0) && func_193(unk_0x3F80C6638E3A1A90()))
				{
					func_179(1);
					func_178(2);
				}
			}
			func_177(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_160(unk_0x3F80C6638E3A1A90(), 19))
			{
				func_176(19);
			}
		}
		if (*uParam4 && func_640(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			*uParam4 = 0;
			if (func_188(iParam0))
			{
				if (unk_0xB519E5386FBF69E5(Global_1716604.f_3, 0))
				{
					unk_0x63EB72E192731928(1f);
					unk_0x8C1CE4F676968E94(5);
					unk_0x73817D396768E4C6(&(Global_1716604.f_3), 0);
				}
			}
			if (func_185(iParam0))
			{
				func_175();
				unk_0x73817D396768E4C6(&(Global_1716604.f_3), 1);
			}
			if (iParam7 && !func_108(unk_0x3F80C6638E3A1A90()))
			{
				func_166();
			}
			if (func_165(2))
			{
				func_179(0);
				func_164(2);
			}
		}
	}
}

void func_164(int iParam0)
{
	unk_0x73817D396768E4C6(&(Global_2457699.f_4647.f_16), iParam0);
}

bool func_165(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_2457699.f_4647.f_16, iParam0);
}

void func_166()
{
	Global_2404919.f_20 = { Global_2406518 };
	Global_2404919.f_22 = { Global_2406520 };
	func_167(1, 1);
}

void func_167(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406537 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406537 };
		Global_2404919.f_39.f_49 = { Global_2406537.f_49 };
		Global_2404919.f_39.f_52 = Global_2406537.f_52;
		Global_2404919.f_39.f_53 = Global_2406537.f_53;
	}
	if (bParam0)
	{
		func_174();
	}
	func_170(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_169(0);
	func_168();
}

void func_168()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0xE3E113B4DB09AAF8())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		Global_2404919.f_629 = 0;
	}
	else
	{
		Global_2404919.f_629 = 1;
	}
}

void func_170(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		func_172();
		func_171(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1139 = iParam3;
		Global_2404919.f_1140 = iParam4;
		Global_2404919.f_1137 = iParam5;
		Global_2404919.f_1138 = iParam6;
		Global_2404919.f_1141 = iParam7;
		Global_2404919.f_1142 = iParam8;
		Global_2404919.f_1143 = iParam9;
	}
	else
	{
		func_172();
		func_171(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409226 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0xE3E113B4DB09AAF8();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_172()
{
	func_173();
	Global_2404919.f_631 = 0;
}

void func_173()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404919.f_632[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_174()
{
	Global_2404919.f_347 = { Global_2406845 };
}

void func_175()
{
	if (unk_0x8DB3F26E5CA85896(Global_2457699.f_4643))
	{
		if (!Global_2457699.f_4643 == unk_0xE3E113B4DB09AAF8())
		{
			return;
		}
	}
	Global_2457699.f_4643 = -1;
	Global_2457699.f_4642 = 1f;
}

void func_176(int iParam0)
{
	unk_0x73817D396768E4C6(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_4), iParam0);
}

void func_177(int iParam0)
{
	unk_0x9956FB0E4B50ECB8(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_4), iParam0);
}

void func_178(int iParam0)
{
	unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_4647.f_16), iParam0);
}

void func_179(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
			return 1;
		
		default:
	}
	return 0;
}

void func_181(float fParam0)
{
	if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) == func_182())
	{
		return;
	}
	if (unk_0x8DB3F26E5CA85896(Global_2457699.f_4643))
	{
		if (!Global_2457699.f_4643 == unk_0xE3E113B4DB09AAF8())
		{
			return;
		}
	}
	Global_2457699.f_4642 = fParam0;
	Global_2457699.f_4643 = unk_0xE3E113B4DB09AAF8();
}

int func_182()
{
	switch (func_183())
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

int func_183()
{
	return Global_25034;
}

float func_184(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
			return 1;
		
		default:
	}
	return 0;
}

int func_186(int iParam0)
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
		
		default:
	}
	return 0;
}

float func_187(int iParam0)
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

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
			return 1;
		
		default:
	}
	return 0;
}

void func_189(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

bool func_190(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_206, iParam1);
}

int func_191(int iParam0)
{
	if (func_192(iParam0))
	{
		if (func_193(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_61())
	{
		if (Global_1607618[iParam0 /*106*/].f_8 != func_61())
		{
			return Global_1607618[iParam0 /*106*/].f_8 == iParam0;
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_160(iParam0, 9);
	}
	return 0;
}

void func_194(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_197(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_195();
	}
}

void func_195()
{
	if (!func_196(unk_0x3F80C6638E3A1A90()))
	{
		func_177(25);
	}
}

bool func_196(int iParam0)
{
	return func_160(iParam0, 25);
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10329;
		
		case 142:
			return Global_262145.f_10317;
		
		case 157:
			return Global_262145.f_10284;
		
		case 159:
			return Global_262145.f_10267;
		
		case 162:
			return Global_262145.f_10378;
		
		default:
	}
	return -1;
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_1607618[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_1607618[iVar0 /*106*/].f_1, 7);
	}
	return 0;
}

bool func_200(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 2);
}

void func_201(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_320(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_318() || iParam2 == 24)
	{
		if (func_274(uParam1, iParam2, uParam3, Global_1573677, 0, func_316()))
		{
			func_273(1);
			if ((!func_271() && !func_269()) || unk_0xB519E5386FBF69E5(Global_2457699.f_4413, 1))
			{
				if (func_268())
				{
					func_265();
				}
				else
				{
					unk_0x56B79B8AD45389A5(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_264(1);
						Global_1573677 = 0;
						iVar54 = -1;
						if (Global_1573825 != 1)
						{
							func_263(uParam1);
							if (unk_0xB519E5386FBF69E5(uParam3->f_33, 7))
							{
								unk_0x73817D396768E4C6(&(uParam3->f_33), 7);
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
								if (func_640(unk_0x0F810277E61B87AE(iVar52), 0, 1))
								{
									iVar35 = unk_0x0F810277E61B87AE(iVar52);
									if (!func_120(iVar35, 0))
									{
										if ((unk_0x55AD8BE0B6CDBEAE(iVar35, unk_0x3F80C6638E3A1A90()) || Global_2416794[iVar35 /*303*/].f_231 != -1) || func_86(iVar35))
										{
											iVar44 = iVar35;
											if (func_192(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_260(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_258(unk_0x3F80C6638E3A1A90(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_255())
							{
								if (func_640(unk_0x0F810277E61B87AE(iVar52), 0, 1))
								{
									iVar35 = unk_0x0F810277E61B87AE(iVar52);
								}
								else
								{
									iVar35 = func_61();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*46*/])->f_1;
							}
							if ((func_254(iVar35) && func_249(iVar35, iParam2)) && func_640(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								iVar42 = Global_1586079[iVar44 /*408*/].f_192.f_6;
								Var38 = { func_244(iVar35) };
								if (iVar35 == unk_0x3F80C6638E3A1A90())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x472BC6C9F4FFBA2B(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
								iVar37 = func_238(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xB55AA813D58C592E(iVar37);
								}
								Global_1573677++;
								if ((uParam0[iVar52 /*46*/])->f_21 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*46*/])->f_21;
								}
								if ((uParam0[iVar52 /*46*/])->f_29 != -1)
								{
									iVar46 = (uParam0[iVar52 /*46*/])->f_29;
								}
								if ((uParam0[iVar52 /*46*/])->f_45 != -1)
								{
									iVar47 = (uParam0[iVar52 /*46*/])->f_45;
								}
								iVar43 = (uParam0[iVar52 /*46*/])->f_8;
								if (((uParam0[iVar52 /*46*/])->f_8 != -1 || (uParam0[iVar52 /*46*/])->f_21 != -1f) || (uParam0[iVar52 /*46*/])->f_29 != -1)
								{
									if (!func_255())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_233(&iVar43, &fVar45, (uParam0[iVar52 /*46*/])->f_8, iParam5);
									StringCopy(&(uParam3->f_104), func_232(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*46*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_226(iVar35, 0);
								if (bVar34)
								{
									if (func_225(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								if (func_224(iParam5))
								{
									func_223(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*46*/])->f_36), &((uParam0[iVar52 /*46*/])->f_40), (uParam0[iVar52 /*46*/])->f_44, iVar48, bParam6);
								}
								else
								{
									func_223(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*46*/])->f_36), &((uParam0[iVar52 /*46*/])->f_40), (uParam0[iVar52 /*46*/])->f_44, iVar48, bParam6);
								}
								unk_0x9956FB0E4B50ECB8(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0F810277E61B87AE(iVar52);
							if (func_640(iVar35, 0, 1) && !unk_0xB519E5386FBF69E5(iVar49, iVar35))
							{
								iVar35 = unk_0x0F810277E61B87AE(iVar52);
							}
							else
							{
								iVar35 = func_61();
							}
							if (func_254(iVar35))
							{
								if (func_640(unk_0x0F810277E61B87AE(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									iVar42 = Global_1586079[iVar44 /*408*/].f_192.f_6;
									Var38 = { func_244(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_63(iVar35) };
									iVar37 = func_238(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xB55AA813D58C592E(iVar37);
									}
									Global_1573677++;
									iVar51 = func_226(iVar35, 1);
									if (bVar34)
									{
										if (func_225(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									func_215(unk_0x472BC6C9F4FFBA2B(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xB519E5386FBF69E5(uParam3->f_33, 11))
						{
							func_212(uParam3, uParam1);
						}
						func_211(&(uParam3->f_21));
						func_210();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xB519E5386FBF69E5(uParam3->f_33, 7))
						{
							func_209(uParam3, uParam1);
							func_208(uParam1, 0, 1);
							unk_0x9956FB0E4B50ECB8(&(uParam3->f_33), 7);
						}
						func_209(uParam3, uParam1);
						if (!unk_0xB519E5386FBF69E5(uParam3->f_33, 11))
						{
							unk_0x9956FB0E4B50ECB8(&(uParam3->f_33), 11);
						}
						if (func_204(uParam3))
						{
							Global_1573825 = 1;
						}
						func_202(uParam3);
						if (Global_1573825 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573825 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x4A4851D44CDF03C0(*uParam1))
					{
						unk_0x55C926E686119F55(7);
						unk_0xAF5B7C9C0A5116E9(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x55C926E686119F55(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_210();
			func_264(0);
			if (unk_0xB519E5386FBF69E5(uParam3->f_33, 7))
			{
				unk_0x73817D396768E4C6(&(uParam3->f_33), 7);
			}
			if (unk_0xB519E5386FBF69E5(uParam3->f_33, 10))
			{
				unk_0x73817D396768E4C6(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x26FD470559B5674D();
}

void func_202(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_211(&(uParam0->f_21));
		func_203(0);
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573825 != 2)
		{
			Global_1573825 = 2;
		}
	}
	else
	{
		switch (Global_1573825)
		{
			case 0:
				Global_1573825 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_204(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0F810277E61B87AE(uParam0->f_37);
	if (iVar15 != func_61() && func_640(iVar15, 0, 1))
	{
		Var2 = { func_63(iVar15) };
		iVar1 = func_207(uParam0, uParam0->f_37);
		if (func_206(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xBBC937829016B623(&Var2))
					{
						if (unk_0xD6F45A95FBD48349(&Var2))
						{
							iVar16 = 1;
							func_205(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x1A5D809AE6246C45(&Var2))
					{
						iVar16 = 1;
						func_205(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xBBC937829016B623(&Var2))
					{
						if (!unk_0xD6F45A95FBD48349(&Var2))
						{
							iVar16 = 1;
							func_205(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_205(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xBBC937829016B623(&Var2))
					{
						if (!unk_0x1A5D809AE6246C45(&Var2))
						{
							iVar16 = 1;
							func_205(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x1A5D809AE6246C45(&Var2))
					{
						iVar16 = 1;
						func_205(uParam0, iVar0, 0);
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

void func_205(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xAE3F9C24A2DC8030(&uParam0, 13);
}

var func_207(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_208(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA4F3B84032D46C13(*uParam0, "COLLAPSE"))
	{
		unk_0x840DDAF1126AE0CC(iParam1);
		unk_0xFF141057ED7B4C73();
	}
	if (iParam2 == 1)
	{
		if (unk_0xA4F3B84032D46C13(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xFF141057ED7B4C73();
		}
	}
}

void func_209(var uParam0, var uParam1)
{
	if (!unk_0xB519E5386FBF69E5(uParam0->f_33, 10))
	{
		unk_0xA4F3B84032D46C13(*uParam1, "SET_HIGHLIGHT");
		unk_0x43C93E686A1E92C5(uParam0->f_35);
		unk_0xFF141057ED7B4C73();
		unk_0x9956FB0E4B50ECB8(&(uParam0->f_33), 10);
	}
}

void func_210()
{
	if (Global_1573825 != 0)
	{
		Global_1573825 = 0;
	}
}

void func_211(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_212(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0F810277E61B87AE(iVar0);
		if (iVar2 != func_61())
		{
			if (func_640(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_214(uParam0->f_38[iVar0 /*2*/], 0);
					func_213(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1586079[iVar0 /*408*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		if (unk_0xA4F3B84032D46C13(*uParam0, "SET_ICON"))
		{
			unk_0x43C93E686A1E92C5(iParam1);
			unk_0x43C93E686A1E92C5(iParam2);
			if (iParam2 == 65)
			{
				unk_0x43C93E686A1E92C5(iParam3);
			}
			unk_0xFF141057ED7B4C73();
		}
	}
}

int func_214(int iParam0, bool bParam1)
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

void func_215(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_222() && iParam3 < func_221())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573679)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573825 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA4F3B84032D46C13(*uParam1, sVar1))
		{
			unk_0x43C93E686A1E92C5(iParam3);
			if (unk_0xB519E5386FBF69E5(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_220("");
			}
			else
			{
				unk_0x43C93E686A1E92C5(iParam9);
			}
			func_220(sParam0);
			unk_0x43C93E686A1E92C5(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_220("");
			}
			else
			{
				unk_0x43C93E686A1E92C5(65);
			}
			unk_0x43C93E686A1E92C5(-1);
			func_220("");
			if (uParam2->f_108 == 6)
			{
				func_220("");
			}
			else
			{
				func_220(&sParam4);
			}
			unk_0x840DDAF1126AE0CC(uParam2->f_36);
			unk_0x5ADC6AF7C9F74F36(sParam8);
			unk_0x5ADC6AF7C9F74F36(sParam8);
			if (func_219(uParam2))
			{
				func_218("DPAD_FRIEND");
			}
			else if (func_217(uParam2))
			{
				func_218("DPAD_FRIEND");
			}
			else if (func_216(uParam2))
			{
				func_218("DPAD_CREW");
			}
			else
			{
				func_218("");
			}
			unk_0xFF141057ED7B4C73();
		}
	}
}

bool func_216(var uParam0)
{
	return unk_0xB519E5386FBF69E5(uParam0->f_33, 6);
}

bool func_217(var uParam0)
{
	return unk_0xB519E5386FBF69E5(uParam0->f_33, 5);
}

void func_218(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(sParam0);
	unk_0x057886C01DDC535D();
}

int func_219(var uParam0)
{
	if (func_217(uParam0) && func_216(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_220(char* sParam0)
{
	unk_0x492B9DC2AF02FDDF(sParam0);
}

int func_221()
{
	int iVar0;
	
	if (Global_1573679)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_222()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573679)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_223(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_222() && iParam2 < func_221())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573679)
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
		if (Global_1573825 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x4A4851D44CDF03C0(*uParam0))
		{
			if (unk_0xA4F3B84032D46C13(*uParam0, sVar1))
			{
				unk_0x43C93E686A1E92C5(iParam2);
				if (unk_0xB519E5386FBF69E5(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_220("");
				}
				else
				{
					unk_0x43C93E686A1E92C5(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0xF6917DE0E003509D(sParam15))
				{
					func_218(sParam15);
				}
				else
				{
					func_220(&(uParam1->f_1));
				}
				unk_0x43C93E686A1E92C5(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_220("");
				}
				else
				{
					unk_0x43C93E686A1E92C5(65);
				}
				if (iParam11 == 1)
				{
					unk_0x43C93E686A1E92C5(iVar0);
				}
				else
				{
					unk_0x43C93E686A1E92C5(-1);
				}
				if (func_255())
				{
					func_220("");
				}
				else if (uParam1->f_108 == 6 && !unk_0xF6917DE0E003509D(sParam15))
				{
					unk_0x33D37B75FC2BCC8C("FM_AE_ONE_INT");
					unk_0x9359E7CC54335EB9(sParam15);
					unk_0x8D23CF083336DA9B(iParam17);
					unk_0x057886C01DDC535D();
				}
				else if (uParam1->f_108 == 5 && !unk_0xF6917DE0E003509D(sParam15))
				{
					unk_0x33D37B75FC2BCC8C("FM_AE_ONE_INT");
					unk_0x9359E7CC54335EB9(sParam15);
					unk_0x8D23CF083336DA9B(iParam17);
					unk_0x057886C01DDC535D();
				}
				else if ((uParam1->f_108 == 7 && !unk_0xF6917DE0E003509D(sParam15)) && !unk_0xF6917DE0E003509D(sParam16))
				{
					unk_0x33D37B75FC2BCC8C("FM_AE_TWO_INT");
					unk_0x9359E7CC54335EB9(sParam15);
					unk_0x9359E7CC54335EB9(sParam16);
					unk_0x8D23CF083336DA9B(iParam17);
					unk_0x057886C01DDC535D();
				}
				else if (uParam1->f_108 == 8 && !unk_0xF6917DE0E003509D(&(uParam1->f_104)))
				{
					unk_0x33D37B75FC2BCC8C("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x9EA8AC61C9873436(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x8D23CF083336DA9B(iParam9);
					}
					unk_0x9359E7CC54335EB9(&(uParam1->f_104));
					unk_0x057886C01DDC535D();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x33D37B75FC2BCC8C("FM_AE_CASH");
					unk_0x2DA751AE00792EE7(iParam9, 1);
					unk_0x057886C01DDC535D();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xF6917DE0E003509D(&(uParam1->f_104)))
					{
						func_218(&(uParam1->f_104));
					}
					else
					{
						func_220("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x33D37B75FC2BCC8C("STRING");
					unk_0x96629435C64EFDA2(iParam13, 6);
					unk_0x057886C01DDC535D();
				}
				else if (fParam12 != -1f)
				{
					unk_0x33D37B75FC2BCC8C("NUMBER");
					unk_0x9EA8AC61C9873436(fParam12, 1);
					unk_0x057886C01DDC535D();
				}
				else if (iParam9 != -1)
				{
					unk_0x43C93E686A1E92C5(iParam9);
				}
				else
				{
					func_220("");
				}
				if (uParam1->f_108 == 6)
				{
					func_220("");
				}
				else
				{
					func_220(&sParam3);
				}
				unk_0x840DDAF1126AE0CC(uParam1->f_36);
				if (iParam11 == 1 || unk_0xF6917DE0E003509D(sParam7))
				{
					func_220("");
					func_220("");
				}
				else
				{
					unk_0x5ADC6AF7C9F74F36(sParam7);
					unk_0x5ADC6AF7C9F74F36(sParam7);
				}
				if (func_219(uParam1))
				{
					func_218("DPAD_FRIEND");
				}
				else if (func_217(uParam1))
				{
					func_218("DPAD_FRIEND");
				}
				else if (func_216(uParam1))
				{
					func_218("DPAD_CREW");
				}
				else
				{
					func_218("");
				}
				unk_0xFF141057ED7B4C73();
			}
		}
	}
}

int func_224(int iParam0)
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

bool func_225(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_192(iParam0))
		{
			return 0;
		}
	}
	return Global_1607618[iParam0 /*106*/].f_8 != func_61();
}

int func_226(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_108(iParam0)) && !func_231(iParam0))
	{
		iVar0 = func_230();
	}
	iVar1 = func_229(iParam0);
	if (!iVar1 == -1)
	{
		return func_227(iVar1);
	}
	return iVar0;
}

int func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = func_228(iParam0);
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
	return 12;
}

var func_228(int iParam0)
{
	return Global_2412289.f_1874.f_44[iParam0 /*2*/].f_1;
}

int func_229(int iParam0)
{
	if (!iParam0 == func_61())
	{
		if (func_225(iParam0, 1))
		{
			return Global_2412289.f_1874.f_11[func_62(iParam0)];
		}
	}
	return -1;
}

int func_230()
{
	return 21;
}

bool func_231(int iParam0)
{
	return func_160(iParam0, 20);
}

char* func_232(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xBB562C2C7F51D9EC())
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
			if (unk_0xBB562C2C7F51D9EC())
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

int func_233(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_237(iParam3))
	{
		*fParam1 = (func_234(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_224(iParam3))
	{
		*fParam1 = (func_234(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_234(int iParam0, int iParam1)
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
			if (unk_0xBB562C2C7F51D9EC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_236(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xBB562C2C7F51D9EC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_235(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_235(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_236(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_237(int iParam0)
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

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = func_241(iParam0);
	if (iVar0 == -1)
	{
		func_239(iParam0, 1);
		return 0;
	}
	Global_1348372[iVar0 /*5*/].f_4 = 1;
	return Global_1348372[iVar0 /*5*/].f_2;
}

void func_239(int iParam0, bool bParam1)
{
	if (!func_640(iParam0, 0, 1))
	{
		return;
	}
	if (func_241(iParam0) != -1)
	{
		return;
	}
	if (Global_1348535)
	{
		if (iParam0 == Global_1348535.f_1)
		{
			return;
		}
	}
	if (func_240(iParam0))
	{
		return;
	}
	if (Global_1348573 >= 32)
	{
		return;
	}
	Global_1348540[Global_1348573] = iParam0;
	Global_1348573++;
	if (bParam1)
	{
	}
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348573)
	{
		if (Global_1348540[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	if (!func_640(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348533 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348533)
	{
		if (Global_1348372[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x1F16BC0435F2402B(Global_1348372[iVar0 /*5*/].f_2) && unk_0xD0847D6ED75AB1EB(Global_1348372[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_242(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_242(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348533)
	{
		return;
	}
	if (unk_0x1F16BC0435F2402B(Global_1348372[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348372[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xB55AA813D58C592E(Global_1348372[iParam0 /*5*/].f_2), 64);
			unk_0x4A84081A0454E850(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xE36012B1FBCCD792(Global_1348372[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348533)
	{
		Global_1348372[iVar32 /*5*/] = { Global_1348372[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_243(&(Global_1348372[iVar32 /*5*/]));
	Global_1348533 = (Global_1348533 - 1);
}

void func_243(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_61();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x00AAD79B42B3E036())
	{
		uParam0->f_3 = unk_0xC7F926248AF8587B();
	}
}

struct<4> func_244(int iParam0)
{
	struct<4> Var0;
	
	if (func_640(iParam0, 0, 1))
	{
		Global_2456685 = { func_63(iParam0) };
		if (unk_0xFD563D1BF81A2CB8())
		{
			if (func_206(Global_2456685))
			{
				if (!unk_0x93E910B822514F37(&Global_2456685))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x6A75BF8E76B0E99A(0))
		{
			return Var0;
		}
		if (func_248(&Global_2456685))
		{
			Global_2456615 = { func_246(iParam0) };
			func_245(&Global_2456615, &Var0);
		}
	}
	return Var0;
}

void func_245(var uParam0, var uParam1)
{
	unk_0x8CB648F8365CA9F9(uParam0, 35, uParam1);
}

struct<35> func_246(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_247(iParam0))
	{
		return Global_1315943[unk_0x3F80C6638E3A1A90() /*35*/];
	}
	Var0 = { func_63(iParam0) };
	unk_0xB486161F8A7A8AFB(&Var13, 35, &Var0);
	return Var13;
}

int func_247(int iParam0)
{
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (unk_0xB1FD8B418C765100())
	{
		if (unk_0xAB7778782580F313() && unk_0x89398BAF58AA485C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_200(iParam0) || func_253(iParam0)) || func_252(iParam0))
		{
			return 0;
		}
	}
	if (!func_251(iParam0))
	{
		return 0;
	}
	if ((!func_250(iParam0) && Global_2416794[iParam0 /*303*/].f_231 == -1) && !func_86(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_250(int iParam0)
{
	if (func_640(iParam0, 0, 1))
	{
		if (func_640(unk_0x3F80C6638E3A1A90(), 0, 1))
		{
			if (unk_0x55AD8BE0B6CDBEAE(iParam0, unk_0x3F80C6638E3A1A90()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_251(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_128, 22);
}

bool func_252(int iParam0)
{
	if (func_200(iParam0))
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 8);
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 10) || unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 9));
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_61())
	{
		return 0;
	}
	if (func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xB519E5386FBF69E5(Global_1586079[iVar0 /*408*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_255()
{
	switch (func_257(unk_0x3F80C6638E3A1A90()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_231(unk_0x3F80C6638E3A1A90()))
	{
		switch (func_256(unk_0x3F80C6638E3A1A90()))
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

int func_256(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return Global_1607618[iParam0 /*106*/].f_8.f_27;
	}
	return -1;
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1607618[iVar0 /*106*/];
	}
	return -1;
}

int func_258(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_27 != -1 && func_259(Global_1607618[iParam0 /*106*/].f_8.f_27))
	{
		return 1;
	}
	if (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_26 != -1)
	{
		if (func_259(Global_1607618[iParam0 /*106*/].f_8.f_26))
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
			return 1;
		
		default:
	}
	return 0;
}

void func_260(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_640(unk_0x0F810277E61B87AE(iVar0), 0, 1))
		{
			iVar1 = unk_0x0F810277E61B87AE(iVar0);
			if (!func_120(iVar1, 0))
			{
				if ((unk_0x55AD8BE0B6CDBEAE(iVar1, unk_0x3F80C6638E3A1A90()) || Global_2416794[iVar1 /*303*/].f_231 != -1) || func_86(iVar1))
				{
					if (func_261(iVar1, iParam1, 0))
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

int func_261(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_61())
	{
		if (!bParam2)
		{
			if (func_262(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1607618[iParam0 /*106*/].f_8 != func_61())
		{
			return iParam1 == Global_1607618[iParam0 /*106*/].f_8;
		}
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	if (iParam1 != func_61())
	{
		if (iParam0 != func_61())
		{
			if (Global_1607618[iParam0 /*106*/].f_8 != func_61())
			{
				if (Global_1607618[iParam0 /*106*/].f_8 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_263(var uParam0)
{
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		unk_0xA4F3B84032D46C13(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x43C93E686A1E92C5(0);
		unk_0xFF141057ED7B4C73();
	}
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338574.f_2 == 0)
		{
			Global_1338574.f_2 = 1;
		}
	}
	else if (Global_1338574.f_2 == 1)
	{
		Global_1338574.f_2 = 0;
	}
}

void func_265()
{
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4413, 1))
	{
		if (func_267())
		{
			func_266();
		}
	}
}

void func_266()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_2 != 0)
		{
			Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			unk_0x9956FB0E4B50ECB8(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_267()
{
	return Global_2426494.f_2138[0 /*70*/].f_1 != 0;
}

int func_268()
{
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4413, 0) && func_267())
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4413, 1) && func_267())
	{
		return 1;
	}
	return 0;
}

int func_269()
{
	if (func_267())
	{
		if (func_270(Global_2426494.f_2138[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 84:
		case 87:
		case 88:
		case 83:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

int func_271()
{
	if (func_267())
	{
		if (func_272(Global_2426494.f_2138[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_272(int iParam0)
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

void func_273(int iParam0)
{
	Global_1338574.f_1 = Global_1338574;
	Global_1338574 = iParam0;
}

int func_274(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_315(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_314();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_313())
		{
			if (func_312() > 0 && Global_1573679)
			{
				unk_0xB445BA612EFAB308();
				unk_0x74C2382519DF9D92(fVar7);
				unk_0x1B7A773B18DF3DB0(18);
				if (unk_0x23741E39BEA32E66())
				{
					unk_0x3CF0E1768B4F7FCD();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_300())
		{
			func_299(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4416, 26))
	{
		func_299(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_312() == 1)
		{
			func_298(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_299(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x23741E39BEA32E66())
		{
			unk_0x3CF0E1768B4F7FCD();
		}
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_312() == 0 && !bParam5))
		{
			func_299(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_297();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0xB445BA612EFAB308();
				}
				unk_0x1B7A773B18DF3DB0(18);
			}
			if (unk_0xB519E5386FBF69E5(uParam2->f_33, 0))
			{
				Global_1573677 = uParam3;
				Global_1573676 = 1;
				unk_0x74C2382519DF9D92(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573678)
					{
						unk_0x73817D396768E4C6(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_297();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0xB445BA612EFAB308();
					}
					unk_0x1B7A773B18DF3DB0(18);
				}
				unk_0x74C2382519DF9D92(fVar7);
				if (func_298(bVar6, uParam0, 0))
				{
					func_263(uParam0);
					sVar4 = func_295(iParam1, &(Global_1612326.f_64755), bParam4);
					if (bParam4)
					{
						func_292(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_285(uParam0, func_289(uParam2), func_286(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_282(uParam0, func_284(), func_283(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573678;
						func_292(uParam0, sVar4, "", 0, -1, Global_1573678, 1);
					}
					else
					{
						Var0 = { func_280(iParam1) };
						iVar8 = func_275(iParam1);
						func_292(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x9956FB0E4B50ECB8(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_279())
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
			if (func_278(unk_0x3F80C6638E3A1A90()))
			{
				iVar0 = 20;
			}
			if (func_277(unk_0x3F80C6638E3A1A90()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_276(unk_0x3F80C6638E3A1A90()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_276(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 4;
}

bool func_277(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

bool func_278(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_279()
{
	return Global_1612326.f_1 == 0;
}

struct<4> func_280(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_281(unk_0x3F80C6638E3A1A90()) || func_276(unk_0x3F80C6638E3A1A90()))
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
			StringIntConCat(&Var0, Global_1612326.f_20, 16);
			break;
	}
	return Var0;
}

bool func_281(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 5;
}

void func_282(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		unk_0xA4F3B84032D46C13(*uParam0, "SET_TITLE");
		if (unk_0xF6917DE0E003509D(sParam2))
		{
			func_218(sParam1);
		}
		else
		{
			unk_0x33D37B75FC2BCC8C("FM_AE_BRACKT");
			unk_0x9359E7CC54335EB9(sParam1);
			unk_0x9359E7CC54335EB9(sParam2);
			unk_0x057886C01DDC535D();
		}
		func_218("");
		if (iParam3 != -1)
		{
			unk_0x43C93E686A1E92C5(iParam3);
		}
		unk_0xFF141057ED7B4C73();
	}
}

char* func_283()
{
	switch (func_256(unk_0x3F80C6638E3A1A90()))
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

char* func_284()
{
	switch (func_256(unk_0x3F80C6638E3A1A90()))
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
	}
	return "";
}

void func_285(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		unk_0xA4F3B84032D46C13(*uParam0, "SET_TITLE");
		if (unk_0xF6917DE0E003509D(sParam2))
		{
			func_218(sParam1);
		}
		else if (func_257(unk_0x3F80C6638E3A1A90()) == 133)
		{
			unk_0x33D37B75FC2BCC8C("FM_AE_BRACKT_C");
			unk_0x9359E7CC54335EB9(sParam1);
			unk_0x9359E7CC54335EB9(sParam2);
			unk_0x057886C01DDC535D();
		}
		else
		{
			unk_0x33D37B75FC2BCC8C("FM_AE_BRACKT");
			unk_0x9359E7CC54335EB9(sParam1);
			unk_0x9359E7CC54335EB9(sParam2);
			unk_0x057886C01DDC535D();
		}
		func_218("");
		if (iParam3 != -1)
		{
			unk_0x43C93E686A1E92C5(iParam3);
		}
		unk_0xFF141057ED7B4C73();
	}
}

char* func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = func_257(unk_0x3F80C6638E3A1A90());
	if (func_288())
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
			switch (func_287())
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

int func_287()
{
	if (func_257(unk_0x3F80C6638E3A1A90()) == 133)
	{
		return Global_2457699.f_4634;
	}
	return -1;
}

bool func_288()
{
	return Global_1586078;
}

char* func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = func_257(unk_0x3F80C6638E3A1A90());
	if (func_288())
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
			if (func_291() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_291() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_287())
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
			if (func_290() == 1)
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

int func_290()
{
	return Global_2457699.f_4637;
}

int func_291()
{
	if (func_257(unk_0x3F80C6638E3A1A90()) == 132)
	{
		return Global_2457699.f_4632;
	}
	return -1;
}

void func_292(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		unk_0xA4F3B84032D46C13(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_220(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x33D37B75FC2BCC8C(sParam1);
			unk_0x8D23CF083336DA9B(iParam5);
			unk_0x057886C01DDC535D();
		}
		else
		{
			func_218(sParam1);
		}
		if (func_313() && iParam6)
		{
			if (func_294())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x33D37B75FC2BCC8C("LBD_DPD_CNT");
			unk_0x8D23CF083336DA9B(iVar0);
			unk_0x8D23CF083336DA9B(iVar1);
			unk_0x057886C01DDC535D();
		}
		else
		{
			func_218(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x43C93E686A1E92C5(iParam4);
			if (func_293(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x43C93E686A1E92C5(166);
			}
		}
		unk_0xFF141057ED7B4C73();
	}
}

int func_293(int iParam0)
{
	if (func_278(iParam0) || func_277(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_294()
{
	return Global_1573679;
}

char* func_295(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_296();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573843 == 0)
		{
			Global_1573843 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xF6917DE0E003509D(uParam1))
	{
		if (Global_1573843 == 1)
		{
			Global_1573843 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573843 == 0)
		{
			Global_1573843 = 1;
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

char* func_296()
{
	if (unk_0xBDD19298E80B8A08())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x571F665160CF1757())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xDBF94EA0A294AE29())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xC361A02F0F018747())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_297()
{
	Global_36441 = 1;
}

bool func_298(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xE3C796DC28BC3254("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xE3C796DC28BC3254("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xE3C796DC28BC3254("mp_matchmaking_card");
	}
	return unk_0x4A4851D44CDF03C0(*uParam1);
}

void func_299(var uParam0, var uParam1, bool bParam2)
{
	unk_0x73817D396768E4C6(&(uParam1->f_33), 7);
	Global_1573677 = 0;
	func_210();
	Global_1573676 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_211(&(uParam1->f_19));
		}
	}
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		unk_0x8A86A209B0F0AF7D(uParam0);
	}
	if (unk_0xB519E5386FBF69E5(uParam1->f_33, 0))
	{
		unk_0x73817D396768E4C6(&(uParam1->f_33), 0);
	}
	unk_0x74C2382519DF9D92(0f);
}

int func_300()
{
	if (func_311())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (!func_308())
	{
		return 0;
	}
	if (!func_306())
	{
		return 0;
	}
	if (func_305(8, -1))
	{
		return 0;
	}
	if (func_312() == 2)
	{
		return 0;
	}
	if (Global_2457699.f_4396)
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	else if (!func_40(unk_0x3F80C6638E3A1A90(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_303(1) || func_301(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (func_66(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (Global_1704616)
	{
		return 0;
	}
	if (Global_1704619)
	{
		return 0;
	}
	if (func_165(0))
	{
		return 0;
	}
	return 1;
}

int func_301(bool bParam0)
{
	if (unk_0x269A9297DD4C35DB())
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (func_302(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x6BBF308E0A0F9AD4(0, 25) || unk_0x6BBF308E0A0F9AD4(0, 68))
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
	if (unk_0x6BBF308E0A0F9AD4(0, 19) || (!bParam0 && unk_0x2E080842BD1CBD38(0, 19)))
	{
		return 1;
	}
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (((unk_0x6BBF308E0A0F9AD4(0, 166) || unk_0x6BBF308E0A0F9AD4(0, 167)) || unk_0x6BBF308E0A0F9AD4(0, 168)) || unk_0x6BBF308E0A0F9AD4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x2E080842BD1CBD38(0, 166) || unk_0x2E080842BD1CBD38(0, 167)) || unk_0x2E080842BD1CBD38(0, 168)) || unk_0x2E080842BD1CBD38(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0x96EB9D652C716259())
	{
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			unk_0x5E99B63A819500A5(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_303(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_304()
{
	return Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_177 != 0;
}

bool func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

int func_306()
{
	if (func_307() == 0)
	{
		return 1;
	}
	return 0;
}

int func_307()
{
	return Global_1312466.f_18;
}

int func_308()
{
	if (func_309())
	{
		return 1;
	}
	if (unk_0xAEF17BDE274A1247())
	{
		return 0;
	}
	if (unk_0xA864A37DA392324A() || unk_0x845A95C48FA19489())
	{
		return 0;
	}
	if (unk_0x35F24F762994A85A())
	{
		return 0;
	}
	return 1;
}

bool func_309()
{
	return Global_1312438;
}

bool func_310()
{
	return Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 5;
}

bool func_311()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

int func_312()
{
	return Global_1338577.f_68;
}

int func_313()
{
	if (Global_1573678 > 16)
	{
		return 1;
	}
	return 0;
}

float func_314()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x9B0FF6A6840A99C8()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_315(int iParam0)
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

int func_316()
{
	if (func_317(unk_0x3F80C6638E3A1A90()))
	{
		return Global_1318845;
	}
	return 0;
}

int func_317(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return unk_0x8D720EF14D4FE71D(iParam0);
	}
	return 0;
}

int func_318()
{
	if (func_316())
	{
		return 1;
	}
	if (func_252(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (func_288())
	{
		return 1;
	}
	if (func_108(unk_0x3F80C6638E3A1A90()))
	{
		switch (func_257(unk_0x3F80C6638E3A1A90()))
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
				if (!func_319(unk_0x3F80C6638E3A1A90()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_319(unk_0x3F80C6638E3A1A90()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_319(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 4);
}

int func_320(int iParam0)
{
	if ((iParam0 == 24 && func_108(unk_0x3F80C6638E3A1A90())) && !func_231(unk_0x3F80C6638E3A1A90()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_107(unk_0x3F80C6638E3A1A90(), 0) && func_231(unk_0x3F80C6638E3A1A90()))
		{
			return 1;
		}
		if (func_321(unk_0x3F80C6638E3A1A90()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_108(iParam0) && !func_200(iParam0)) && !unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 8));
	bVar2 = func_231(iParam0);
	uVar3 = func_329();
	uVar4 = func_323();
	if ((bVar1 && (func_199(iParam0) || func_198(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_193(iParam0)) && !func_322(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2457699.f_4647.f_18 != iVar0)
	{
		Global_2457699.f_4647.f_18 = iVar0;
	}
	return iVar0;
}

bool func_322(int iParam0)
{
	return func_160(iParam0, 19);
}

int func_323()
{
	if ((func_160(unk_0x3F80C6638E3A1A90(), 21) || func_160(unk_0x3F80C6638E3A1A90(), 22)) || func_326())
	{
		return 1;
	}
	if (func_324())
	{
		func_177(22);
		return 1;
	}
	return 0;
}

int func_324()
{
	if (func_107(unk_0x3F80C6638E3A1A90(), 0))
	{
		if ((func_329() && !func_325()) || func_190(unk_0x3F80C6638E3A1A90(), 21))
		{
			if (!func_160(unk_0x3F80C6638E3A1A90(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_176(27);
		}
	}
	return 0;
}

bool func_325()
{
	return Global_1312416.f_1;
}

bool func_326()
{
	return func_327(255, -1);
}

int func_327(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486042[iParam0 /*5*/][func_328(iParam1)];
	if (unk_0xA1B21B1D84085DB0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_122();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

bool func_329()
{
	return Global_1312416;
}

bool func_330()
{
	return unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 1);
}

void func_331()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_332(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_332(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 10))
	{
		if (Local_193.f_34 > -1)
		{
			if (func_330())
			{
				if (!func_323())
				{
					if (!unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 5))
					{
						if (!unk_0xB519E5386FBF69E5(Local_193.f_1, 4))
						{
							if (unk_0xD51CFE69539DB6D8(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0x41B17741CACC905E(Var0.f_0))
									{
										uVar11 = unk_0x10E754B2E0DF2A70(Var0.f_0);
										if (unk_0x1415CDB1128C3FBC(uVar11))
										{
											iVar12 = unk_0xDF9F1D76EB1B8F12(uVar11);
											if (iVar12 == unk_0x0F810277E61B87AE(Local_193.f_34))
											{
												if (unk_0xD51CFE69539DB6D8(Var0.f_1))
												{
													if (unk_0x41B17741CACC905E(Var0.f_1))
													{
														uVar10 = unk_0x10E754B2E0DF2A70(Var0.f_1);
														if (unk_0x1415CDB1128C3FBC(uVar10))
														{
															iVar13 = unk_0xDF9F1D76EB1B8F12(uVar10);
															if (iVar13 == unk_0x3F80C6638E3A1A90())
															{
																unk_0x9956FB0E4B50ECB8(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 5);
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
	if (func_330())
	{
		if (!func_160(unk_0x3F80C6638E3A1A90(), 20))
		{
			if (unk_0xD51CFE69539DB6D8(Var0.f_0))
			{
				if (unk_0x41B17741CACC905E(Var0.f_0))
				{
					uVar11 = unk_0x10E754B2E0DF2A70(Var0.f_0);
					if (unk_0x1415CDB1128C3FBC(uVar11))
					{
						iVar12 = unk_0xDF9F1D76EB1B8F12(uVar11);
						if (unk_0xD51CFE69539DB6D8(Var0.f_1))
						{
							if (unk_0x41B17741CACC905E(Var0.f_1))
							{
								uVar10 = unk_0x10E754B2E0DF2A70(Var0.f_1);
								if (unk_0x1415CDB1128C3FBC(uVar10))
								{
									iVar13 = unk_0xDF9F1D76EB1B8F12(uVar10);
									if (iVar13 == unk_0x3F80C6638E3A1A90())
									{
										if (unk_0x6CCF9D473CE62808(iVar12))
										{
											if (func_225(iVar12, 1))
											{
												if (Local_193.f_33 > -1)
												{
													iVar14 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(Local_193.f_33));
													if (func_261(iVar12, iVar14, 1))
													{
														func_333(0);
														func_195();
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

void func_333(int iParam0)
{
	if (!func_231(unk_0x3F80C6638E3A1A90()))
	{
		if (iParam0 || func_321(unk_0x3F80C6638E3A1A90()) != 0)
		{
			func_177(20);
			if (func_108(unk_0x3F80C6638E3A1A90()))
			{
				if (!unk_0xB519E5386FBF69E5(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1, 8))
				{
					unk_0x9956FB0E4B50ECB8(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1), 8);
				}
			}
		}
	}
}

void func_334()
{
	switch (Local_253[unk_0xA1238458CB587858() /*6*/].f_2)
	{
		case 0:
			func_480();
			func_335();
			if (Local_193.f_32 == 2)
			{
				Local_253[unk_0xA1238458CB587858() /*6*/].f_2 = 2;
			}
			else if (Local_193.f_32 == 3)
			{
				Local_253[unk_0xA1238458CB587858() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_335();
			if (Local_193.f_32 == 3)
			{
				Local_253[unk_0xA1238458CB587858() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_614();
			break;
	}
}

void func_335()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	iVar5 = func_61();
	iVar6 = func_61();
	iVar7 = func_61();
	if (!unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 4))
	{
		if (!unk_0xB519E5386FBF69E5(uLocal_446, 9))
		{
			if (unk_0xB519E5386FBF69E5(Local_193.f_1, 1))
			{
				if (unk_0xA1238458CB587858() == Local_193.f_33 || func_602() == Local_193.f_33)
				{
					if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
					{
						sVar8 = func_479();
						iVar9 = func_478(unk_0x3F80C6638E3A1A90());
						func_476(84, "GB_WINNER", "BIGM_SGHTYD", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
					{
						func_475(1, 1);
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
					}
					func_392(142, 1, &Var0);
					unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
				}
				else if (func_330())
				{
					if (func_225(unk_0x3F80C6638E3A1A90(), 1))
					{
						if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
						{
							sVar8 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
							iVar9 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
							func_476(85, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
						{
							func_475(0, 2);
							unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
						}
						func_392(142, 0, &Var0);
					}
					else
					{
						if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
						{
							sVar8 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
							iVar9 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
							func_476(85, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
						{
							func_475(0, 2);
							unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
						}
						func_392(142, 0, &Var0);
					}
				}
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 9);
			}
			else if (unk_0xB519E5386FBF69E5(Local_193.f_1, 3))
			{
				func_388(85, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
				{
					func_475(0, 7);
					unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
				}
				func_392(142, 0, &Var0);
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 9);
			}
			else if (unk_0xB519E5386FBF69E5(Local_193.f_1, 4))
			{
				if (Local_193.f_35 > -1)
				{
					iVar6 = unk_0x0F810277E61B87AE(Local_193.f_35);
				}
				if (unk_0xA1238458CB587858() == Local_193.f_33)
				{
					if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
					{
						if (unk_0xD18C3CF631455087(iVar6))
						{
							if (func_225(iVar6, 1))
							{
								sVar8 = func_389(iVar6);
								iVar9 = func_478(iVar6);
							}
							else
							{
								sVar8 = unk_0x472BC6C9F4FFBA2B(iVar6);
								iVar9 = 1;
							}
							func_476(85, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_476(85, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_392(142, 0, &Var0);
					if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
					{
						func_475(0, 2);
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
					}
				}
				else if (func_602() == Local_193.f_33)
				{
					iVar5 = unk_0x0F810277E61B87AE(Local_193.f_34);
					if (iVar5 != func_61())
					{
						if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
						{
							if (unk_0xD18C3CF631455087(iVar6))
							{
								if (func_225(iVar6, 1))
								{
									sVar8 = func_389(iVar6);
									iVar9 = func_478(iVar6);
								}
								else
								{
									sVar8 = unk_0x472BC6C9F4FFBA2B(iVar6);
									iVar9 = 1;
								}
								func_476(85, "GB_WORK_OVER", "BIGM_SGHTGK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_476(85, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
							}
						}
						func_392(142, 0, &Var0);
						if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
						{
							func_475(0, 2);
							unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
						}
					}
				}
				else if (func_330())
				{
					iVar6 = unk_0x0F810277E61B87AE(Local_193.f_35);
					if (iVar6 != func_61())
					{
						if (iVar6 == unk_0x3F80C6638E3A1A90())
						{
							if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
							{
								if (func_387(1))
								{
									func_388(84, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_388(84, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
							if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
							{
								func_475(1, 1);
								unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
							}
							func_392(142, 1, &Var0);
						}
						else if (func_387(1))
						{
							iVar7 = func_386();
							if (func_261(iVar6, iVar7, 1))
							{
								if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
								{
									func_367(84, iVar6, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2);
								}
								if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
								{
									func_475(1, 1);
									unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
								}
								func_392(142, 0, &Var0);
							}
							else
							{
								if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
								{
									if (unk_0xD18C3CF631455087(iVar6))
									{
										if (func_225(iVar6, 1))
										{
											sVar8 = func_389(iVar6);
											iVar9 = func_478(iVar6);
										}
										else
										{
											sVar8 = unk_0x472BC6C9F4FFBA2B(iVar6);
											iVar9 = 1;
										}
										func_476(85, "GB_WORK_OVER", "BIGM_SGHTWK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_388(85, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
								{
									func_475(0, 2);
									unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
								}
								func_392(142, 0, &Var0);
							}
						}
						else
						{
							if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
							{
								if (unk_0xD18C3CF631455087(iVar6))
								{
									if (func_225(iVar6, 1))
									{
										sVar8 = func_389(iVar6);
										iVar9 = func_478(iVar6);
									}
									else
									{
										sVar8 = unk_0x472BC6C9F4FFBA2B(iVar6);
										iVar9 = 1;
									}
									func_476(85, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_388(85, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
							{
								func_475(0, 2);
								unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
							}
							func_392(142, 0, &Var0);
						}
					}
				}
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 9);
			}
			else if (unk_0xB519E5386FBF69E5(Local_193.f_1, 5))
			{
				if (func_357())
				{
					if (func_601())
					{
						if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
						{
						}
					}
					else if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
					{
						func_388(85, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
				{
					func_475(0, 8);
					unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
				}
				func_392(159, 0, &Var0);
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 9);
			}
		}
		if (unk_0xB519E5386FBF69E5(iLocal_446, 9))
		{
			func_350();
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 8))
			{
				unk_0x9956FB0E4B50ECB8(&iLocal_447, 8);
			}
			if (!unk_0xB519E5386FBF69E5(iLocal_446, 10))
			{
				if (Local_193.f_34 != -1)
				{
					if (unk_0xB519E5386FBF69E5(iLocal_446, 5))
					{
						if (unk_0xD18C3CF631455087(unk_0x0F810277E61B87AE(Local_193.f_34)))
						{
							func_349(unk_0x0F810277E61B87AE(Local_193.f_34), 432, 0);
							func_348(unk_0x0F810277E61B87AE(Local_193.f_34), 1, 0);
							func_347(unk_0x0F810277E61B87AE(Local_193.f_34), 0, 0);
							func_346(unk_0x0F810277E61B87AE(Local_193.f_34), 0);
							func_345(unk_0x0F810277E61B87AE(Local_193.f_34), Global_262145.f_10162, 0);
							unk_0x9956FB0E4B50ECB8(&iLocal_446, 10);
						}
					}
				}
			}
			if (func_336(&uLocal_815, 1))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 4);
			}
		}
	}
}

int func_336(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_177(29);
	if ((*uParam0 > 0 && !func_267()) && func_321(unk_0x3F80C6638E3A1A90()) != 0)
	{
		func_344();
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
				unk_0x9956FB0E4B50ECB8(&(Global_1716604.f_3), 2);
				if (bParam1)
				{
					unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_4413), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_343(uParam0, 1);
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
				func_340();
				func_343(uParam0, 2);
			}
			break;
		
		case 2:
			func_340();
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_337(func_338()))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
				func_343(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x73817D396768E4C6(&(Global_2457699.f_4413), 1);
				unk_0x73817D396768E4C6(&(Global_1716604.f_3), 2);
				func_343(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x73817D396768E4C6(&(Global_2457699.f_4413), 1);
			unk_0x73817D396768E4C6(&(Global_1716604.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_337(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

char* func_338()
{
	if (func_259(func_339()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_339()
{
	return Global_1611011;
}

void func_340()
{
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4413, 0))
	{
		if (((((((!unk_0x86600FB859E1DB21() && !unk_0xB519E5386FBF69E5(Global_2457699.f_741, 2)) && func_640(unk_0x3F80C6638E3A1A90(), 1, 1)) && !Global_67887) && !Global_52760) && !unk_0xAEF17BDE274A1247()) && !func_160(unk_0x3F80C6638E3A1A90(), 22)) && func_321(unk_0x3F80C6638E3A1A90()) != 0)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_4413), 1);
			func_342(func_338(), -1);
			func_341(1);
			unk_0x73817D396768E4C6(&(Global_2457699.f_4413), 0);
		}
	}
}

void func_341(int iParam0)
{
	if (iParam0 && !func_267())
	{
		unk_0xCC18B241D266EF14(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_342(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 0, iParam1);
}

void func_343(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_344()
{
	Global_2442019 = 1;
}

void func_345(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_61())
	{
		return;
	}
	if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) == func_182())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x8DB3F26E5CA85896(Global_2411418.f_691[iParam0]) || Global_2411418.f_691[iParam0] == unk_0xE3E113B4DB09AAF8())
	{
		if (bParam2)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_2411418.f_388), iVar0);
			Global_2411418.f_493[iVar0] = uParam1;
			Global_2411418.f_691[iParam0] = unk_0xE3E113B4DB09AAF8();
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_2411418.f_388), iVar0);
			Global_2411418.f_691[iParam0] = -1;
		}
	}
}

void func_346(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_2411418.f_365), iParam0);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_2411418.f_365), iParam0);
	}
	if (unk_0xD11595488376CB53(Global_2411418[iParam0]))
	{
		if (bParam1)
		{
			unk_0x62D401A5D1298E20(Global_2411418[iParam0], 0);
		}
		else
		{
			unk_0x62D401A5D1298E20(Global_2411418[iParam0], 1);
		}
	}
}

void func_347(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_640(iParam0, 1, 1))
		{
			Global_2411418.f_625[iParam0] = unk_0xE3E113B4DB09AAF8();
			unk_0x9956FB0E4B50ECB8(&(Global_2411418.f_364), iParam0);
			func_346(iParam0, bParam2);
		}
	}
	else
	{
		func_346(iParam0, bParam2);
		unk_0x73817D396768E4C6(&(Global_2411418.f_364), iParam0);
		Global_2411418.f_625[iParam0] = -1;
	}
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_61())
	{
		return;
	}
	if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) == func_182())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x8DB3F26E5CA85896(Global_2411418.f_559[iParam0]) || Global_2411418.f_559[iParam0] == unk_0xE3E113B4DB09AAF8())
	{
		if (bParam2)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_2411418.f_386), iVar0);
			Global_2411418.f_559[iParam0] = unk_0xE3E113B4DB09AAF8();
			Global_2411418.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_2411418.f_386), iVar0);
			Global_2411418.f_559[iParam0] = -1;
		}
	}
}

void func_349(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_61())
	{
		return;
	}
	if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) == func_182())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x8DB3F26E5CA85896(Global_2411418.f_526[iParam0]) || Global_2411418.f_526[iParam0] == unk_0xE3E113B4DB09AAF8())
	{
		if (bParam2)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_2411418.f_385), iVar0);
			Global_2411418.f_394[iVar0] = uVar1;
			Global_2411418.f_526[iParam0] = unk_0xE3E113B4DB09AAF8();
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_2411418.f_385), iVar0);
			Global_2411418.f_526[iParam0] = -1;
		}
	}
}

void func_350()
{
	if (!func_356())
	{
		return;
	}
	if (!unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) == Global_1312577.f_7)
	{
		return;
	}
	func_351();
}

void func_351()
{
	func_353();
	func_352(0);
}

void func_352(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x00AAD79B42B3E036();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xC7F926248AF8587B();
		Global_1312577.f_9 = unk_0xC7F926248AF8587B();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_353()
{
	if (!func_355())
	{
	}
	if (func_356())
	{
		unk_0x915E8393416FC05A(&(Global_1312577.f_10));
		func_354();
		unk_0xA2BBD2C34F086DB6();
	}
}

void func_354()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x8D23CF083336DA9B(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x8D23CF083336DA9B(Global_1312577.f_50);
			unk_0x8D23CF083336DA9B(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_14));
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x05F60BBD20DA0D62(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			unk_0x63E8D6007C32E426(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x05F60BBD20DA0D62(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			unk_0xC498567F546E6683(Global_1312577.f_55);
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			unk_0x63E8D6007C32E426(&(Global_1312577.f_30));
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x63E8D6007C32E426(&(Global_1312577.f_14));
			unk_0xC498567F546E6683(Global_1312577.f_54);
			unk_0x9359E7CC54335EB9(&(Global_1312577.f_46));
			unk_0x63E8D6007C32E426(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_355()
{
	if (!func_356())
	{
		return 0;
	}
	unk_0x589BB5028182386C(&(Global_1312577.f_10));
	func_354();
	return unk_0x9E606060DFAF139A();
}

int func_356()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_357()
{
	if (!func_358())
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	return 1;
}

int func_358()
{
	if (func_190(unk_0x3F80C6638E3A1A90(), 21))
	{
		return 0;
	}
	if (unk_0x9321E9548CA02149())
	{
		return 0;
	}
	if (unk_0xDF16A5D5874BD0E4())
	{
		return 0;
	}
	if (func_87(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (func_365())
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (unk_0x6B042133C9334B77())
	{
		return 0;
	}
	if (func_41(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!func_306())
	{
		return 0;
	}
	if (func_190(unk_0x3F80C6638E3A1A90(), 0) || func_190(unk_0x3F80C6638E3A1A90(), 3))
	{
		return 0;
	}
	if ((func_190(unk_0x3F80C6638E3A1A90(), 12) || func_190(unk_0x3F80C6638E3A1A90(), 14)) || func_190(unk_0x3F80C6638E3A1A90(), 13))
	{
		return 0;
	}
	if (func_364(unk_0x3F80C6638E3A1A90(), 0))
	{
		return 0;
	}
	if (func_363())
	{
		return 0;
	}
	if (Global_1704616)
	{
		return 0;
	}
	if (func_362(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (func_361())
	{
		return 0;
	}
	if (func_360(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (func_359(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	return 1;
}

int func_359(int iParam0)
{
	if (Global_2416794[iParam0 /*303*/].f_256.f_4 != 0 || Global_2416794[iParam0 /*303*/].f_256.f_5)
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0)
{
	if (unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_248.f_6, 14))
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_248.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_361()
{
	if (Global_2548112.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0)
{
	if (!func_640(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1586079[iParam0 /*408*/].f_35;
}

bool func_363()
{
	return Global_91077.f_297 > 0;
}

int func_364(int iParam0, bool bParam1)
{
	if (Global_1586079[iParam0 /*408*/].f_248.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_248.f_6, 0))
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

bool func_365()
{
	return Global_1315909;
}

bool func_366()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_18, 0);
}

int func_367(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_385(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_368(&Var0);
}

int func_368(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426494.f_2420)
		{
			return 0;
		}
	}
	func_371(uParam0, uParam0->f_16);
	func_370(uParam0);
	if (func_369(uParam0->f_1))
	{
		if (Global_2426494.f_2138[0 /*70*/].f_2 == 0)
		{
			Global_2426494.f_2138[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426494.f_2138[0 /*70*/].f_1 == 13 || Global_2426494.f_2138[0 /*70*/].f_1 == 52) || Global_2426494.f_2138[0 /*70*/].f_1 == 53) || Global_2426494.f_2138[0 /*70*/].f_1 == 57)
		{
			Global_2426494.f_2138[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426494.f_2138[iVar0 + 1 /*70*/] = { Global_2426494.f_2138[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426494.f_2138[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426494.f_2138[iVar0 /*70*/].f_2 == 0)
		{
			Global_2426494.f_2138[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x9956FB0E4B50ECB8(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 1);
				Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
			}
			if (uParam0->f_1 == 83)
			{
				if (func_270(Global_2426494.f_2138[iVar0 /*70*/].f_1))
				{
					Global_2426494.f_2138[iVar0 /*70*/].f_2 = 5;
					unk_0x9956FB0E4B50ECB8(&(Global_2426494.f_2138[iVar0 /*70*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_369(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_370(var uParam0)
{
	if (func_272(uParam0->f_1))
	{
		uParam0->f_66 = func_230();
	}
}

void func_371(var uParam0, int iParam1)
{
	if (func_272(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_61())
	{
		return;
	}
	if (func_270(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_372(iParam1, -2, 0, 0);
		}
	}
}

int func_372(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_66(iParam0))
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
	if (func_66(unk_0x3F80C6638E3A1A90()) || (func_384() && func_383()))
	{
		uVar0 = func_382();
		if (unk_0xD51CFE69539DB6D8(uVar0))
		{
			if (unk_0x1415CDB1128C3FBC(uVar0))
			{
				if (unk_0xDF9F1D76EB1B8F12(uVar0) != -1)
				{
					if (func_640(unk_0xDF9F1D76EB1B8F12(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x6B042133C9334B77()) && iParam1 < 4)
						{
							if (Global_1612326.f_61160[iParam1] != -1)
							{
								return func_381(iParam1, iParam0, 0);
							}
							else
							{
								return func_379(iParam0, unk_0xDF9F1D76EB1B8F12(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_379(iParam0, unk_0xDF9F1D76EB1B8F12(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x6B042133C9334B77()) && iParam1 < 4)
			{
				if (Global_1612326.f_61160[iParam1] != -1)
				{
					return func_381(iParam1, iParam0, 0);
				}
				else
				{
					return func_373(0, -1, 0);
				}
			}
			else
			{
				return func_373(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x6B042133C9334B77()) && iParam1 < 4)
	{
		if (Global_1612326.f_61160[iParam1] != -1)
		{
			return func_381(iParam1, iParam0, 0);
		}
		else
		{
			return func_379(iParam0, unk_0x3F80C6638E3A1A90(), iParam1, bParam2, bParam3);
		}
	}
	return func_379(iParam0, unk_0x3F80C6638E3A1A90(), iParam1, bParam2, bParam3);
}

int func_373(bool bParam0, int iParam1, bool bParam2)
{
	return func_374(unk_0x3F80C6638E3A1A90(), bParam0, iParam1, bParam2);
}

int func_374(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x2CC717AC6CF51F8F(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_65(iVar0, iParam2, 0) && !unk_0xB519E5386FBF69E5(Global_1612326.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_378(1);
				}
				else
				{
					return func_378(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_375(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_378(1);
	}
	return func_378(0);
}

int func_375(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_377(iParam0, iParam1);
	if (func_376(Global_1612326.f_64748))
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

int func_376(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7303[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_377(int iParam0, int iParam1)
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
			if (!func_65(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_378(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_379(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2CC717AC6CF51F8F(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1586079[iVar2 /*408*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_100(iParam1, iParam0, iVar0, 0) && !unk_0xB519E5386FBF69E5(Global_1612326.f_15, 18)) || ((func_65(unk_0x2CC717AC6CF51F8F(iParam1), unk_0x2CC717AC6CF51F8F(iParam0), 0) && unk_0xB519E5386FBF69E5(Global_1612326.f_15, 23)) && !unk_0xB519E5386FBF69E5(Global_1612326.f_15, 18)))
			{
				return func_378(1);
			}
			else if (unk_0xB519E5386FBF69E5(Global_1612326.f_15, 26))
			{
				return func_380(1);
			}
			else
			{
				return func_374(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573829 || Global_1573820) || Global_1586079[iParam0 /*408*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573829 == 1 && Global_1573839 == 0))
			{
				return func_378(1);
			}
			else
			{
				return func_374(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573824 && Global_1573404.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_229(iParam0);
	if (!iVar3 == -1)
	{
		return func_227(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_380(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_381(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1612326.f_61160[iParam0] != -1)
	{
		if (Global_1612326.f_61160[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1612326.f_61160[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1612326.f_61160[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1612326.f_61160[iParam0] == 4)
		{
			if (unk_0xB519E5386FBF69E5(Global_1612326.f_15, 29))
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
			iVar0 = Global_1612326.f_61160[iParam0];
		}
	}
	else
	{
		iVar0 = func_374(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_382()
{
	return Global_2359301.f_2;
}

bool func_383()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 4);
}

bool func_384()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_18, 14);
}

void func_385(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_61();
	uParam1->f_17 = func_61();
	uParam1->f_18 = func_61();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_386()
{
	return Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8;
}

bool func_387(bool bParam0)
{
	return func_225(unk_0x3F80C6638E3A1A90(), bParam0);
}

int func_388(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_385(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_368(&Var0);
}

char* func_389(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if ((func_160(iParam0, 28) || func_160(unk_0x3F80C6638E3A1A90(), 28)) || func_391(iParam0))
	{
		return unk_0xC083A2D1EE1A4BFF("GB_REST_ACC");
	}
	iVar0 = func_62(iParam0);
	if (iVar0 != func_61())
	{
		uVar1 = func_390(&(Global_1607618[iVar0 /*106*/].f_8.f_72));
		if (unk_0xF6917DE0E003509D(uVar1))
		{
			return unk_0xC083A2D1EE1A4BFF("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_390(var uParam0)
{
	return uParam0;
}

int func_391(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
	if (unk_0x7ECD3D8283875DD1() || unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0x6A75BF8E76B0E99A(0))
		{
			return 0;
		}
	}
	else if (unk_0xFD563D1BF81A2CB8())
	{
		if (unk_0x93E910B822514F37(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

void func_392(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	func_473(iParam0, &fVar2, &fVar3);
	iVar1 = (iVar1 + uParam2->f_1);
	iVar0 = (iVar0 + *uParam2);
	if (bParam1)
	{
		iVar1 = (iVar1 + func_472(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_471(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	iVar4 = func_470();
	if (iVar4 != func_61() && iParam0 != 148)
	{
		if (func_225(unk_0x3F80C6638E3A1A90(), 0))
		{
			if (!func_261(unk_0x3F80C6638E3A1A90(), iVar4, 1))
			{
				func_456(&iVar0, 1);
			}
		}
	}
	func_453(iParam0, &iVar5, &iVar6);
	iVar1 = (iVar1 + iVar5);
	iVar0 = (iVar0 + iVar6);
	if (iVar1 > 0)
	{
		Global_1716613.f_10 = iVar1;
		func_452();
		func_406(0, unk_0xE7869D5D7816A9B6(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1716613.f_9 = iVar0;
		iVar9 = func_386();
		if (iVar9 != func_61())
		{
			func_405(iVar9, &iVar7, &iVar8);
		}
		bVar10 = !func_387(1);
		if (func_404())
		{
			func_395(-856006867, iVar0, &iVar11, 0, 1, 0);
			Global_2553709[iVar11 /*72*/].f_8.f_54 = iVar7;
			Global_2553709[iVar11 /*72*/].f_8.f_55 = iVar8;
			Global_2553709[iVar11 /*72*/].f_8.f_56 = bVar10;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(iVar7, iVar8, iVar0, bVar10);
		}
		if (func_394(iParam0) > -1)
		{
			func_393(func_394(iParam0), iVar0);
		}
		Global_2442847 = iVar0;
	}
}

void func_393(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2457699.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4955)
		{
			iParam1 = Global_262145.f_4955;
		}
		Global_2457699.f_270 = iParam1;
		Global_2457699.f_271 = 0;
	}
}

int func_394(int iParam0)
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
		
		default:
	}
	return 0;
}

void func_395(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_404())
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
			if (iParam1 > 0)
			{
				func_396(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_396(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_404())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x31F4FD5D570135A8(func_122()) || unk_0x3F07A2D94C64D156())
		{
			Global_2554188 = 1;
			return 0;
		}
		if (Global_2441706)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2554189 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2553709[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0x89BF47768CC2BEC9(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xC5635F1C24124798(iVar3))
		{
			*uParam0 = func_403(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2553709[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2554185 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2554187 = 1;
			Global_2554190 = iParam4;
			Global_2554192 = iParam3;
			Global_2554193 = 1;
			Global_2554191 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2554190 = iParam4;
			Global_2554192 = iParam3;
			Global_2554193 = 1;
			Global_2554191 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_402(1, iParam4);
			Global_2554187 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_397(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_397(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x9956FB0E4B50ECB8(&(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_398(iParam0);
	}
}

void func_398(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_404())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_401(iParam0))
		{
			if (!bVar0)
			{
				unk_0x179EDB8174D2ACF9();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ECBAE515BE58A4C(Global_2553709[iParam0 /*72*/]);
		}
		func_399(&(Global_2553709[iParam0 /*72*/]));
	}
}

void func_399(var uParam0)
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
	func_400(&(uParam0->f_8.f_3));
	func_400(&(uParam0->f_8.f_16));
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
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_400(var uParam0)
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

int func_401(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553709[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_402(int iParam0, var uParam1)
{
	Global_2442973 = uParam1;
	Global_2442972 = iParam0;
}

int func_403(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2553709[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_404())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2553709[iVar0 /*72*/].f_2 = 1;
			Global_2553709[iVar0 /*72*/].f_1 = uParam5;
			Global_2553709[iVar0 /*72*/].f_3 = uParam1;
			Global_2553709[iVar0 /*72*/].f_4 = uParam2;
			Global_2553709[iVar0 /*72*/].f_7 = uParam3;
			Global_2553709[iVar0 /*72*/].f_5 = 0;
			Global_2553709[iVar0 /*72*/] = iParam0;
			Global_2553709[iVar0 /*72*/].f_6 = iParam4;
			Global_2553709[iVar0 /*72*/].f_68 = uParam8;
			Global_2553709[iVar0 /*72*/].f_67 = uParam7;
			Global_2553709[iVar0 /*72*/].f_71 = 0;
			Global_2554185 = 0;
			if (bParam6)
			{
				Global_2553709[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_404()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		return 1;
	}
	return 0;
}

void func_405(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1607618[iParam0 /*106*/].f_8.f_6[0];
	*uParam2 = Global_1607618[iParam0 /*106*/].f_8.f_6[1];
}

int func_406(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_407(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_407(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_417(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD51CFE69539DB6D8(iParam1))
		{
			if (unk_0x41B17741CACC905E(iParam1))
			{
				uVar1 = unk_0x10E754B2E0DF2A70(iParam1);
				func_413(unk_0x5D551231E967CD2B(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_408(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_408(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_411(iParam0, 1) };
	if (iParam0 == func_410(unk_0xE7869D5D7816A9B6()))
	{
		func_409(1);
	}
	func_413(Var0, iParam1, 0, sParam2);
}

void func_409(int iParam0)
{
	Global_2426494.f_1322 = iParam0;
}

int func_410(var uParam0)
{
	return uParam0;
}

Vector3 func_411(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_412(unk_0xE7869D5D7816A9B6()) && unk_0x08EE17D4722097C7(unk_0x5B93518F6779B7F5()) == 4)
	{
		Var0 = { unk_0xBD306D8AFEF4E078(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		fVar3 = unk_0x2CAFFCD9F5E16D2F(iParam0);
	}
	unk_0x67060D73A7F90F25(unk_0x1B2DC87EFB36DF80(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xF919633EBD0639D0(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_412(var uParam0)
{
	return uParam0;
}

void func_413(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426494.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426494.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426494.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426494.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426494.f_741[iVar1 /*29*/].f_4 = func_416(Global_2426494.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426494.f_741[iVar1 /*29*/].f_7 = unk_0xC7F926248AF8587B();
			Global_2426494.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426494.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426494.f_741[iVar1 /*29*/].f_9 = func_415();
			Global_2426494.f_741[iVar1 /*29*/].f_10 = func_414();
			StringCopy(&(Global_2426494.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_414()
{
	if (Global_2426494.f_1322)
	{
		Global_2426494.f_1322 = 0;
		return 1;
	}
	Global_2426494.f_1322 = 0;
	return 0;
}

var func_415()
{
	var uVar0;
	
	uVar0 = Global_2426494.f_1324;
	Global_2426494.f_1324 = 1;
	return uVar0;
}

float func_416(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF18329472591CFE6(unk_0x7D6DB785AFC32F33(), Param0, 1);
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

var func_417(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_418(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_418(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_451(unk_0x3F80C6638E3A1A90()) || func_450(unk_0x3F80C6638E3A1A90()))
	{
		if (Global_262145.f_7470 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7470;
		}
	}
	else if (Global_262145.f_5005 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5005;
	}
	if (func_449(uParam2))
	{
	}
	if (func_448())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_446(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_445(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_443(0, &iVar1);
					break;
				
				case 3:
					func_443(1, &iVar1);
					break;
				
				case 1:
					func_441(&iVar1);
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
			func_438(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_428((func_437(unk_0x3F80C6638E3A1A90()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x68ECED5ED327B57B(iVar1, iParam8, iParam9);
				if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_2 != -1)
				{
					func_438(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_423(iVar1);
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
				func_419((func_421(unk_0x3F80C6638E3A1A90()) + iVar1));
			}
			else
			{
				func_419((func_421(unk_0x3F80C6638E3A1A90()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_419(int iParam0)
{
	if (func_448())
	{
		Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_5 = iParam0;
		func_420(joaat("mpply_globalxp"), iParam0);
	}
}

void func_420(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, 1);
	}
}

int func_421(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_640(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3F80C6638E3A1A90())
			{
				return func_422(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1586079[iParam0 /*408*/].f_192.f_5;
			}
		}
		else
		{
			return func_422(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_422(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_423(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_63(unk_0x3F80C6638E3A1A90()) };
	if (unk_0xAB7778782580F313())
	{
		if (unk_0x89398BAF58AA485C(&Var0))
		{
			iVar13 = func_426(func_427(&Var0));
			if (iVar13 == 0)
			{
				func_425(&Global_1347461, iParam0);
				func_424(joaat("mpply_crew_local_xp_0"), Global_1347461);
			}
			else if (iVar13 == 1)
			{
				func_425(&Global_1347462, iParam0);
				func_424(joaat("mpply_crew_local_xp_1"), Global_1347462);
			}
			else if (iVar13 == 2)
			{
				func_425(&Global_1347463, iParam0);
				func_424(joaat("mpply_crew_local_xp_2"), Global_1347463);
			}
			else if (iVar13 == 3)
			{
				func_425(&Global_1347464, iParam0);
				func_424(joaat("mpply_crew_local_xp_3"), Global_1347464);
			}
			else if (iVar13 == 4)
			{
				func_425(&Global_1347465, iParam0);
				func_424(joaat("mpply_crew_local_xp_4"), Global_1347465);
			}
		}
	}
}

void func_424(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347456 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347458 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347458 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347459 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347460 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347461 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347462 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347463 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347464 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347465 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347466 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347467 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347468 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347469 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347470 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347471 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347472 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_425(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_426(int iParam0)
{
	if (iParam0 == Global_1347456)
	{
		return 0;
	}
	else if (iParam0 == Global_1347457)
	{
		return 1;
	}
	else if (iParam0 == Global_1347458)
	{
		return 2;
	}
	else if (iParam0 == Global_1347459)
	{
		return 3;
	}
	else if (iParam0 == Global_1347460)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_427(var uParam0)
{
	if (unk_0xAB7778782580F313())
	{
		if (unk_0x89398BAF58AA485C(uParam0))
		{
			return Global_2440902;
		}
	}
	return Global_2440902;
}

void func_428(int iParam0, int iParam1, int iParam2)
{
	if (func_448())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7445 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347576[func_328(-1)])
				{
					unk_0x68ECED5ED327B57B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347576[func_328(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7444 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x68ECED5ED327B57B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7444 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x68ECED5ED327B57B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_436(unk_0x3F80C6638E3A1A90()))
		{
			Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_1 = iParam0;
			Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_6 = func_434(iParam0, 1);
		}
		func_433(629, iParam0, -1, 1);
		func_432(630, func_434(iParam0, 1), -1, 1);
		Global_1347576[func_328(-1)] = iParam0;
		func_429(7, 0);
	}
}

void func_429(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_431(iParam0, iParam1))
	{
		iVar0 = func_430();
		Global_2440879[iVar0] = iParam0;
	}
}

int func_430()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2440879[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_431(int iParam0, var uParam1)
{
	if (Global_1315897)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315909) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_432(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_328(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
}

void func_433(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_328(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347522[func_328(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347528[func_328(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347534[func_328(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347540[func_328(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347498[func_328(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347504[func_328(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347510[func_328(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347516[func_328(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347474[func_328(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347480[func_328(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347486[func_328(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347492[func_328(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347546[func_328(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347552[func_328(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347558[func_328(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347564[func_328(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347570[func_328(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347576[func_328(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347582[func_328(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488585[0 /*6*/][func_328(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488585[1 /*6*/][func_328(iParam2)] = iParam1;
			break;
		
		case 2900:
			Global_2488585[2 /*6*/][func_328(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488585[3 /*6*/][func_328(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2488636[func_328(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347588[func_328(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347594[func_328(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347600[func_328(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347606[func_328(iParam2)] = iParam1;
			break;
		
		case 3023:
			Global_2488610[0 /*5*/][func_328(iParam2)] = iParam1;
			break;
		
		case 3024:
			Global_2488610[1 /*5*/][func_328(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488610[2 /*5*/][func_328(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488610[3 /*5*/][func_328(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488610[4 /*5*/][func_328(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_434(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_435(iParam0, 0);
}

int func_435(int iParam0, int iParam1)
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
		if (Global_272903[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272903[iVar3] < iParam0)
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

int func_436(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_2426494.f_1, iParam0);
	}
	return 1;
}

int func_437(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3F80C6638E3A1A90())
			{
				return Global_1347576[func_328(-1)];
			}
			else if (func_436(iParam0))
			{
				return Global_1586079[iParam0 /*408*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347576[func_328(-1)];
	}
	return 0;
}

void func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_440(iParam0, func_328(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_439(iParam0))
	{
		func_432(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_433(iParam0, iVar0, iParam2, 1);
	}
}

int func_439(int iParam0)
{
	if (Global_1347455)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2900:
			case 3028:
			case 3659:
			case 3023:
			case 3024:
			case 3025:
			case 3026:
			case 3027:
				return 1;
				break;
			}
	}
	return 0;
}

int func_440(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_328(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
	iVar0 = 0;
	while (iVar0 < unk_0x2249EB1A59F7C407())
	{
		iVar4 = unk_0x2A0D2AD241778491(iVar0);
		if (unk_0x7144266D2DB1A46F(iVar4))
		{
			iVar5 = unk_0x39078CE05613D134(iVar4);
			if (unk_0x2CC717AC6CF51F8F(iVar5) != -1)
			{
				if (unk_0x2CC717AC6CF51F8F(iVar5) == iVar1 || func_65(unk_0x2CC717AC6CF51F8F(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3F80C6638E3A1A90())
					{
						if (func_64(unk_0x3F80C6638E3A1A90(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_442(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_442(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_442(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_443(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x2249EB1A59F7C407())
		{
			iVar3 = iVar0;
			if (unk_0x7144266D2DB1A46F(iVar3))
			{
				iVar4 = unk_0x39078CE05613D134(iVar3);
				if (func_640(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3F80C6638E3A1A90())
					{
						iVar1++;
						if (func_64(unk_0x3F80C6638E3A1A90(), iVar4))
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
			if (func_640(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3F80C6638E3A1A90())
				{
					if (func_444(unk_0x3F80C6638E3A1A90(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_64(unk_0x3F80C6638E3A1A90(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_442(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_442(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_444(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_56(iParam0), func_56(iParam1));
	return 0f;
}

int func_445(int iParam0)
{
	int iVar0;
	
	if (unk_0x12758BAD54D39F9C() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_442(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_446(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xF073E12B43682F7D(iParam0) > func_437(unk_0x3F80C6638E3A1A90()))
		{
			iParam0 = -func_437(unk_0x3F80C6638E3A1A90());
		}
	}
	if (func_447(8000, 0, 0) > 0)
	{
		if (func_447(8000, 0, 0) < (iParam0 + func_437(unk_0x3F80C6638E3A1A90())))
		{
			iParam0 = (func_447(8000, 0, 0) - func_437(unk_0x3F80C6638E3A1A90()));
		}
	}
	return iParam0;
}

int func_447(int iParam0, bool bParam1, int iParam2)
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
	return Global_272903[iParam0];
}

int func_448()
{
	return 1;
}

int func_449(var uParam0)
{
	if (unk_0x356491C12DAD1A37(uParam0))
	{
		return 1;
	}
	else if (unk_0x04E7E853E31F41A3(uParam0, "") || unk_0x04E7E853E31F41A3(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_450(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_451(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

void func_452()
{
	Global_2442018 = 1;
}

void func_453(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_165(7))
	{
		return;
	}
	iVar0 = func_455(iParam0);
	iVar1 = func_454(iParam0);
	iVar2 = unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(Global_2457699.f_4647.f_63, unk_0xC7F926248AF8587B()));
	if (iVar2 > Global_262145.f_10202)
	{
		iVar2 = Global_262145.f_10202;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10293;
		
		case 152:
			return Global_262145.f_10328;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10316;
		
		case 157:
			return Global_262145.f_10283;
		
		case 159:
			return Global_262145.f_10266;
		
		case 164:
			return Global_262145.f_10306;
		
		case 160:
			return Global_262145.f_10356;
		
		case 162:
			return Global_262145.f_10376;
		
		case 163:
			return Global_262145.f_10341;
		
		case 154:
			return Global_262145.f_10411;
		
		case 155:
			return Global_262145.f_10401;
		
		case 153:
			return Global_262145.f_10365;
		
		default:
	}
	return 0;
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10292;
		
		case 152:
			return Global_262145.f_10327;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10315;
		
		case 157:
			return Global_262145.f_10282;
		
		case 159:
			return Global_262145.f_10265;
		
		case 164:
			return Global_262145.f_10305;
		
		case 160:
			return Global_262145.f_10355;
		
		case 162:
			return Global_262145.f_10375;
		
		case 163:
			return Global_262145.f_10340;
		
		case 154:
			return Global_262145.f_10410;
		
		case 155:
			return Global_262145.f_10400;
		
		case 153:
			return Global_262145.f_10364;
		
		default:
	}
	return 0;
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_595())
		{
			if (func_387(0))
			{
				if (unk_0xD18C3CF631455087(func_386()))
				{
					if (func_469() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_469());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_467(&iVar0);
					if (iParam1 == 1)
					{
						func_460("GB_BCUT_TICK1", func_386(), iVar0, 0, 0, 1, 1);
					}
					func_459(20);
					func_457(func_386(), iVar0, 1);
				}
			}
		}
	}
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_640(iParam0, 0, 1))
	{
		Var0.f_0 = 421;
		Var0.f_1 = unk_0x3F80C6638E3A1A90();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 5, func_458(iParam0));
	}
}

var func_458(int iParam0)
{
	var uVar0;
	
	unk_0x9956FB0E4B50ECB8(&uVar0, iParam0);
	return uVar0;
}

void func_459(int iParam0)
{
	unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_4647.f_7), iParam0);
}

int func_460(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x472BC6C9F4FFBA2B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x472BC6C9F4FFBA2B(iParam1), 64);
		}
		unk_0x4A4F36C4EFDE341F(sParam0);
		unk_0xC498567F546E6683(func_372(iParam1, -2, 1, 0));
		unk_0x63E8D6007C32E426(func_465(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xC498567F546E6683(iParam3);
		}
		unk_0x8D23CF083336DA9B(iParam2);
		iVar0 = unk_0x40A23ED713DD1662(0, 1);
		func_461(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_461(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_464() || !unk_0x6B042133C9334B77()) || !func_120(unk_0x3F80C6638E3A1A90(), 0))
	{
		return;
	}
	iVar0 = func_462(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1713447.f_5[iVar0 /*53*/] = iParam0;
		Global_1713447.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1713447.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1713447.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1713447.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1713447.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1713447.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_462(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1713447 - 1))
	{
		if (iParam0 > Global_1713447.f_5[iVar0 /*53*/].f_1)
		{
			func_463(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1713447++;
	if (Global_1713447 > 5)
	{
		Global_1713447 = 5;
		return Global_1713447;
	}
	return (Global_1713447 - 1);
}

void func_463(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1713447.f_5[iVar0 /*53*/] = { Global_1713447.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_464()
{
	return unk_0x3442D8DA379C5187(-1762644250);
}

var func_465(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_466(&cVar0);
}

var func_466(char[4] cParam0)
{
	return cParam0;
}

void func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_468();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_468()
{
	return Global_262145.f_10197;
}

int func_469()
{
	return Global_262145.f_10196;
}

int func_470()
{
	return Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_29;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10313) * Global_262145.f_10318));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10263) * Global_262145.f_10268));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10290) * Global_262145.f_10294));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10303) * Global_262145.f_10307));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10325) * Global_262145.f_10330));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10487) * Global_262145.f_10488));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10493) * Global_262145.f_10494));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10491) * Global_262145.f_10492));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10485) * Global_262145.f_10486));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10489) * Global_262145.f_10490));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10483) * Global_262145.f_10484));
		
		default:
	}
	return 0;
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10314) * Global_262145.f_10319));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10264) * Global_262145.f_10269));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10291) * Global_262145.f_10295));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10304) * Global_262145.f_10308));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10326) * Global_262145.f_10331));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10363) * Global_262145.f_10366));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10409) * Global_262145.f_10412));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10399) * Global_262145.f_10402));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10354) * Global_262145.f_10357));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10374) * Global_262145.f_10379));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10339) * Global_262145.f_10342));
		
		default:
	}
	return 0;
}

void func_473(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_474(iParam0))
	{
		if (!func_595())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10207;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10206;
	*uParam2 = Global_262145.f_10205;
	if (func_225(unk_0x3F80C6638E3A1A90(), 1))
	{
		*uParam1 = Global_262145.f_10204;
		*uParam2 = Global_262145.f_10203;
	}
	iVar0 = func_470();
	if (iVar0 != func_61())
	{
		if (func_261(unk_0x3F80C6638E3A1A90(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
			return 1;
		
		default:
	}
	return 0;
}

void func_475(bool bParam0, int iParam1)
{
	Global_1716613.f_6 = unk_0x72F23FC3443B498B();
	if (bParam0)
	{
		Global_1716613.f_7 = 1;
	}
	else
	{
		Global_1716613.f_7 = 0;
	}
	Global_1716613.f_8 = iParam1;
	if (Global_1716613.f_4 == 0)
	{
		if ((func_193(unk_0x3F80C6638E3A1A90()) || func_322(unk_0x3F80C6638E3A1A90())) || func_231(unk_0x3F80C6638E3A1A90()))
		{
			Global_1716613.f_4 = 1;
		}
	}
}

int func_476(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_61();
	iVar1 = func_61();
	iVar2 = func_61();
	return func_477(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_477(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_385(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x9956FB0E4B50ECB8(&(Var0.f_63), 2);
	return func_368(&Var0);
}

int func_478(int iParam0)
{
	int iVar0;
	
	iVar0 = func_229(iParam0);
	if (iVar0 != -1)
	{
		return func_227(iVar0);
	}
	return 1;
}

char* func_479()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_62(unk_0x3F80C6638E3A1A90());
	if (iVar0 != func_61())
	{
		if (iVar0 != unk_0x3F80C6638E3A1A90())
		{
			if ((func_160(iVar0, 28) || func_160(unk_0x3F80C6638E3A1A90(), 28)) || func_391(iVar0))
			{
				return unk_0xC083A2D1EE1A4BFF("GB_REST_ACC");
			}
		}
		uVar1 = func_390(&(Global_1607618[iVar0 /*106*/].f_8.f_72));
		if (unk_0xF6917DE0E003509D(uVar1))
		{
			return unk_0xC083A2D1EE1A4BFF("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_480()
{
	func_591();
	func_568();
	func_557();
	func_547();
	func_502();
	func_497();
	func_484();
	func_481();
}

void func_481()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_753 != Local_193.f_5)
	{
		if (Local_193.f_34 != -1)
		{
			if (func_357())
			{
				if (func_321(unk_0x3F80C6638E3A1A90()) >= 1)
				{
					if (Local_193.f_5 > 0)
					{
						if (Local_193.f_37 > -1)
						{
							iVar0 = unk_0x0F810277E61B87AE(Local_193.f_37);
							if (unk_0xD18C3CF631455087(iVar0))
							{
								if (iVar0 != unk_0x3F80C6638E3A1A90())
								{
									if (func_225(iVar0, 1))
									{
										iVar1 = func_229(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_227(iVar1);
											func_482("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_482("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_753 = Local_193.f_5;
		}
	}
}

int func_482(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x472BC6C9F4FFBA2B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x472BC6C9F4FFBA2B(iParam1), 64);
		}
		unk_0x4A4F36C4EFDE341F(sParam0);
		unk_0xC498567F546E6683(iParam2);
		unk_0x63E8D6007C32E426(func_465(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x40A23ED713DD1662(0, 1);
		}
		else
		{
			Global_2456685 = { func_63(iParam1) };
			if (unk_0xB486161F8A7A8AFB(&Global_2456615, 35, &Global_2456685))
			{
				iVar17 = 0;
				if (unk_0x04E7E853E31F41A3(&(Global_2456615.f_22), "Leader") && Global_2456615.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2456615.f_21 > 0)
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
						Var1 = { func_483(&Var1) };
					}
					iVar0 = unk_0x3F87EDBDA9D97A56(iVar18, unk_0xE4AACEE3298CAF9B(&Global_2456615, 35), &(Global_2456615.f_17), Global_2456615.f_30, iVar17, 0, Global_2456615, &Var1, Global_1317068, Global_1317069, Global_1317070);
				}
				else
				{
					iVar0 = unk_0x8C371B47E14F5D7B(iVar18, unk_0xE4AACEE3298CAF9B(&Global_2456615, 35), &(Global_2456615.f_17), Global_2456615.f_30, iVar17, 0, Global_2456615, Global_1317068, Global_1317069, Global_1317070);
				}
			}
			else
			{
				iVar0 = unk_0x40A23ED713DD1662(0, 1);
			}
		}
		func_461(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_483(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_484()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_601() && !func_330())
	{
		return;
	}
	if (unk_0xB519E5386FBF69E5(Local_459.f_0, 0))
	{
		return;
	}
	if (!func_357())
	{
		return;
	}
	iVar0 = func_321(unk_0x3F80C6638E3A1A90());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_193.f_51)))
	{
		iVar1 = (func_11() - func_496(&(Local_193.f_51), 0, 0));
		iVar2 = (func_149() - Local_193.f_5);
		func_495(iVar1);
		if (iVar1 > 30000)
		{
			func_485(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_485(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_485(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_485(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_493(0) == 0)
	{
		return;
	}
	func_492();
	func_489(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_449(sParam4))
	{
		sVar0 = sParam4;
	}
	func_486(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0);
}

void func_486(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_488(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339895.f_1 = 1;
		func_487(7, iVar0);
		Global_1339895.f_3988[iVar0] = uParam0;
		StringCopy(&(Global_1339895.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339895.f_3988.f_172[iVar0] = iParam2;
		Global_1339895.f_3988.f_216[iVar0] = iParam3;
		Global_1339895.f_3988.f_183[iVar0] = iParam4;
		Global_1339895.f_3988.f_194[iVar0] = iParam5;
		Global_1339895.f_3988.f_249[iVar0] = iParam6;
		Global_1339895.f_3988.f_260[iVar0] = iParam7;
		Global_1339895.f_3988.f_205[iVar0] = uParam8;
		Global_1339895.f_3988.f_314[iVar0] = iParam9;
		Global_1339895.f_3988.f_325[iVar0] = iParam10;
		Global_1339895.f_3988.f_357[iVar0] = iParam11;
		Global_1339895.f_3988.f_238[iVar0] = uParam12;
		Global_1339895.f_3988.f_271[iVar0] = iParam13;
		Global_1339895.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_487(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_1339895.f_4594[iParam0]), iParam1);
}

bool func_488(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1339895.f_4594[iParam0], iParam1);
}

void func_489(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_488(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339895.f_1 = 1;
		func_487(6, iVar0);
		Global_1339895.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339895.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339895.f_3436.f_183[iVar0] = iParam3;
		Global_1339895.f_3436.f_172[iVar0] = iParam2;
		Global_1339895.f_3436.f_260[iVar0] = iParam4;
		Global_1339895.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339895.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339895.f_3436.f_443[iVar0] = iParam7;
		Global_1339895.f_3436.f_454[iVar0] = iParam8;
		Global_1339895.f_3436.f_497[iVar0] = iParam9;
		Global_1339895.f_3436.f_508[iVar0] = iParam10;
		Global_1339895.f_3436.f_205[iVar0] = iParam11;
		Global_1339895.f_3436.f_216[iVar0] = iParam12;
		Global_1339895.f_3436.f_227[iVar0] = iParam13;
		Global_1339895.f_3436.f_238[iVar0] = iParam14;
		Global_1339895.f_3436.f_249[iVar0] = iParam15;
		Global_1339895.f_3436.f_519[iVar0] = iParam16;
		Global_1339895.f_3436.f_530[iVar0] = iParam17;
		Global_1339895.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_491())
		{
			Global_1339895.f_941 = 1;
		}
		if (unk_0xA78EA29AC2FFBADE())
		{
			iVar2 = 0;
			unk_0x177E5285E888D643(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339895.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339895.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339895.f_941 = 1;
			}
			if (func_490())
			{
				Global_1339895.f_945 = 1;
			}
		}
	}
}

int func_490()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xA78EA29AC2FFBADE())
	{
		unk_0x177E5285E888D643(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_491()
{
	if ((unk_0xF088C81B5AD73FF8() == 8 || unk_0xF088C81B5AD73FF8() == 9) || unk_0xF088C81B5AD73FF8() == 10)
	{
		return 1;
	}
	return 0;
}

void func_492()
{
	unk_0x1B7A773B18DF3DB0(8);
	unk_0x1B7A773B18DF3DB0(9);
	unk_0x1B7A773B18DF3DB0(6);
	unk_0x1B7A773B18DF3DB0(7);
	Global_2442022 = 1;
}

int func_493(bool bParam0)
{
	if (func_494())
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_640(unk_0x3F80C6638E3A1A90(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_494()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 12);
}

void func_495(int iParam0)
{
	if (unk_0xB519E5386FBF69E5(iLocal_447, 8))
	{
		func_161();
		return;
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_447, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0xE72D045151F6CA70("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x9956FB0E4B50ECB8(&iLocal_447, 15);
				unk_0x9956FB0E4B50ECB8(&iLocal_447, 9);
			}
		}
	}
	if (unk_0xB519E5386FBF69E5(iLocal_447, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 11))
			{
				if (unk_0x062A4B39164546AD("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xD5181C7DAF762C60("AllowScoreAndRadio", 1);
					unk_0x84AE85DDEDADEB6F(0);
					unk_0x9956FB0E4B50ECB8(&iLocal_447, 11);
				}
			}
			if (!unk_0xB519E5386FBF69E5(iLocal_447, 14))
			{
				if (unk_0xE72D045151F6CA70("APT_COUNTDOWN_30S"))
				{
					unk_0x9956FB0E4B50ECB8(&iLocal_447, 14);
				}
			}
			if (unk_0xB519E5386FBF69E5(iLocal_447, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_447, 12))
					{
						unk_0x84AE85DDEDADEB6F(1);
						unk_0xD5181C7DAF762C60("AllowScoreAndRadio", 0);
						unk_0x9956FB0E4B50ECB8(&iLocal_447, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xE72D045151F6CA70("APT_FADE_IN_RADIO"))
						{
							unk_0x384203CA8728BC4D("APT_COUNTDOWN_30S_KILL");
							unk_0x73817D396768E4C6(&iLocal_447, 9);
						}
					}
				}
			}
		}
	}
}

int func_496(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x00AAD79B42B3E036() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0);
		}
		else
		{
			return unk_0x4B7B32731313EF0E(unk_0xDBD31D1E0E5F2049(), *uParam0);
		}
	}
	return unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), *uParam0);
}

void func_497()
{
	var uVar0;
	
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51362735C7CDD08E(Local_193.f_3))
		{
			if (!unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 2))
			{
				if (unk_0x6CE07ABFB69A4990(unk_0xA5CFD5B9C8A74104(Local_193.f_3), unk_0xE7869D5D7816A9B6()))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 2);
					iLocal_751 = unk_0x2AD909D8CB732A41();
					unk_0xCC18B241D266EF14(iLocal_751, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					Local_253[unk_0xA1238458CB587858() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_449 != Local_193.f_5)
	{
		if (unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 3))
		{
			unk_0x73817D396768E4C6(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 3);
		}
		if (unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 2))
		{
			if (unk_0x379306CBB68B0FFA(Local_193.f_3))
			{
				uVar0 = unk_0xD0D00ABC0BE9C25C(Local_193.f_3);
				unk_0xC1706D467A0DDDE1(&uVar0);
				unk_0x73817D396768E4C6(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 2);
			}
			else
			{
				unk_0xB489515AC39C50A3(Local_193.f_3);
			}
		}
		else
		{
			iLocal_449 = Local_193.f_5;
		}
	}
	if (unk_0x51362735C7CDD08E(Local_193.f_3))
	{
		if (func_595())
		{
			if (func_601())
			{
				func_499();
			}
		}
		if (!unk_0xB519E5386FBF69E5(iLocal_446, 13))
		{
			if (!func_601() || !func_595())
			{
				unk_0x2E9DAE56D293B951(unk_0xA5CFD5B9C8A74104(Local_193.f_3), 1, 1);
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 13);
			}
		}
		if (!unk_0xB519E5386FBF69E5(iLocal_446, 3))
		{
			unk_0x29627C73E3F24F9A(unk_0xA5CFD5B9C8A74104(Local_193.f_3), 1200);
			unk_0x9956FB0E4B50ECB8(&iLocal_446, 3);
		}
	}
	else
	{
		if (unk_0xB519E5386FBF69E5(iLocal_446, 13))
		{
			unk_0x73817D396768E4C6(&iLocal_446, 13);
		}
		if (unk_0xB519E5386FBF69E5(iLocal_446, 3))
		{
			unk_0x73817D396768E4C6(&iLocal_446, 3);
		}
		if (unk_0xD11595488376CB53(uLocal_451))
		{
			unk_0x5B62CAB9B0D6ABF1(&uLocal_451);
		}
	}
	func_498();
}

void func_498()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_357())
	{
		return;
	}
	if (func_321(unk_0x3F80C6638E3A1A90()) >= 1)
	{
		if (unk_0xDC1FDD911B88C6F2(Local_193.f_3) && !unk_0x76B2D234F1895632(unk_0xA5CFD5B9C8A74104(Local_193.f_3)))
		{
			if (!unk_0x74A345D6EBF02AD7(unk_0xA5CFD5B9C8A74104(Local_193.f_3)))
			{
				unk_0xC8FBBC95190691A8(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0xE77D2EF9F267C4DE(2, unk_0x1141852D07400777(unk_0xD0D00ABC0BE9C25C(Local_193.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_499()
{
	int iVar0;
	
	iVar0 = func_321(unk_0x3F80C6638E3A1A90());
	if (iVar0 < 2)
	{
		if (unk_0xD11595488376CB53(uLocal_451))
		{
			unk_0x5B62CAB9B0D6ABF1(&uLocal_451);
		}
		return;
	}
	if (unk_0xD11595488376CB53(uLocal_451))
	{
		return;
	}
	unk_0x73817D396768E4C6(&iLocal_446, 11);
	uLocal_451 = unk_0xF800CF9298ABC708(unk_0xD0D00ABC0BE9C25C(Local_193.f_3));
	unk_0xA09285173B92875E(uLocal_451, 12);
	unk_0xD65A9304AF8AC06F(uLocal_451, 459);
	unk_0x227FC39A4871C64F(uLocal_451, "GB_SGHT_BLP");
	unk_0x1AD7485666C5160C(uLocal_451, 1);
	unk_0xFC630C7120A34CE4(uLocal_451, Global_262145.f_10162);
	if (func_601())
	{
		func_500(&uLocal_451, 18);
	}
	unk_0x9C9B069F802F9A20(uLocal_451, 1);
	iLocal_752 = unk_0x2AD909D8CB732A41();
	unk_0xCC18B241D266EF14(iLocal_752, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
}

void func_500(var uParam0, int iParam1)
{
	if (unk_0xD11595488376CB53(*uParam0))
	{
		unk_0xA887303978A245B8(*uParam0, func_501(iParam1));
	}
}

int func_501(int iParam0)
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
	unk_0xC8FBBC95190691A8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_502()
{
	if (unk_0xA1238458CB587858() != Local_193.f_33)
	{
		return;
	}
	if (unk_0x51362735C7CDD08E(Local_193.f_3))
	{
		if (iLocal_748 != -1)
		{
			iLocal_748 = -1;
		}
		if (unk_0xB519E5386FBF69E5(Global_2558590, 20))
		{
			unk_0x73817D396768E4C6(&Global_2558590, 20);
		}
		return;
	}
	if (!unk_0xB519E5386FBF69E5(Global_2558590, 20))
	{
		if (!unk_0xB519E5386FBF69E5(Global_2558590, 21))
		{
			if (iLocal_748 < 0)
			{
				unk_0x9956FB0E4B50ECB8(&Global_2558590, 20);
			}
		}
	}
	if (iLocal_749 == -1)
	{
		iLocal_749 = unk_0x0ADD324BC46177EF(0, 3);
	}
	if (iLocal_748 < 0)
	{
		if (unk_0xB519E5386FBF69E5(Global_2558590, 21))
		{
			unk_0x73817D396768E4C6(&Global_2558590, 21);
			iLocal_748 = 0;
		}
	}
	func_503();
}

void func_503()
{
	bool bVar0;
	
	if (!unk_0xB519E5386FBF69E5(iLocal_446, 4))
	{
		if (iLocal_748 >= 0)
		{
			if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x73817D396768E4C6(&Local_459, 0);
				iLocal_748 = -1;
			}
		}
	}
	else if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_546(&Local_459);
		func_545(&Local_459);
		unk_0x73817D396768E4C6(&iLocal_446, 4);
	}
	switch (iLocal_748)
	{
		case 0:
			func_544(1);
			unk_0x36A3D6FBED10EF81("HACK", 3);
			iLocal_748++;
			break;
		
		case 1:
			if (func_543(1) && unk_0x4D15A085E079AB18(3))
			{
				unk_0x9956FB0E4B50ECB8(&Local_459, 0);
				unk_0x9956FB0E4B50ECB8(&(Local_459.f_1), 0);
				func_350();
				iLocal_750 = 10;
				if (iLocal_749 == 2)
				{
					Local_459.f_17 = 1;
				}
				else if (iLocal_749 == 1)
				{
					Local_459.f_17 = 0;
					iLocal_750 = 77;
				}
				else if (iLocal_749 == 0)
				{
					iLocal_750 = 50;
					Local_459.f_17 = 0;
				}
				func_539(unk_0x3F80C6638E3A1A90(), 0, 66048);
				iLocal_748++;
			}
			else
			{
				if (!func_543(1))
				{
				}
				if (!unk_0x4D15A085E079AB18(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0x3BE81935DF4C438C();
			unk_0x7B86A675C654B516(19);
			if (!func_165(0))
			{
				func_178(0);
			}
			if (iLocal_749 == 0)
			{
				func_517(&Local_459, 5, 5, iLocal_750, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1);
				if (func_516(&Local_459, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_749 == 1)
			{
				func_517(&Local_459, 5, 5, iLocal_750, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1);
				if (func_515(&Local_459, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_749 == 2)
			{
				func_517(&Local_459, 5, 5, iLocal_750, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1);
				if (func_504(&Local_459, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xB519E5386FBF69E5(Local_459.f_1, 1))
			{
				unk_0x73817D396768E4C6(&Local_459, 0);
				func_546(&Local_459);
				func_539(unk_0x3F80C6638E3A1A90(), 1, 0);
				if (func_165(0))
				{
					func_164(0);
				}
				iLocal_748 = -1;
			}
			else if (bVar0)
			{
				unk_0x73817D396768E4C6(&Local_459, 0);
				func_546(&Local_459);
				Local_253[unk_0xA1238458CB587858() /*6*/].f_4++;
				unk_0x9956FB0E4B50ECB8(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 3);
				iLocal_749++;
				if (iLocal_749 >= 3)
				{
					iLocal_749 = 0;
				}
				if (func_165(0))
				{
					func_164(0);
				}
				func_539(unk_0x3F80C6638E3A1A90(), 1, 0);
				iLocal_748++;
			}
			break;
	}
}

int func_504(var uParam0, bool bParam1)
{
	if (unk_0xB519E5386FBF69E5(*uParam0, 26))
	{
		if (bParam1)
		{
			func_505(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_505(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x73817D396768E4C6(uParam0, 0);
	unk_0x9956FB0E4B50ECB8(uParam0, 12);
	unk_0x44967FAF1FE899C7(0);
	if (bParam2)
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			unk_0x6C60CB61143A7B02(unk_0xE7869D5D7816A9B6(), 1, 1, 1, 0);
		}
	}
	if (unk_0x9DAD36BD64512352())
	{
		unk_0xB203AD190D025841(0);
	}
	unk_0x1D208E4A4E1D4FFE(1);
	if (bParam1)
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
	}
	unk_0x74FF6D08DE291367(uLocal_73, 0);
	func_509(0);
	func_508();
	unk_0x5D0868636F009CEF(0);
	func_507(uParam0, 1, 1);
	func_506(0, 1, 1, 0);
}

int func_506(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && iParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_507(var uParam0, bool bParam1, int iParam2)
{
	if (iLocal_64[1] != -1)
	{
		if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
		{
			unk_0x3948245C8BD5EDA0(iLocal_64[1]);
			iLocal_64[1] = -1;
		}
	}
	if (iLocal_64[0] != -1)
	{
		if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
		{
			unk_0x3948245C8BD5EDA0(iLocal_64[0]);
			iLocal_64[0] = -1;
		}
	}
	unk_0x73817D396768E4C6(uParam0, 25);
	unk_0x73817D396768E4C6(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x73817D396768E4C6(uParam0, 12);
		unk_0x73817D396768E4C6(uParam0, 9);
		unk_0x73817D396768E4C6(uParam0, 18);
		unk_0x73817D396768E4C6(uParam0, 27);
		unk_0x73817D396768E4C6(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_76 = 0;
	if (bParam1)
	{
		unk_0x8A86A209B0F0AF7D(&uLocal_75);
	}
	unk_0x73817D396768E4C6(uParam0, 29);
}

void func_508()
{
	int iVar0;
	
	Global_1338577.f_948 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1338577.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2457699.f_4383 = 1;
}

void func_509(bool bParam0)
{
	if (bParam0)
	{
		func_514();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_513(0))
		{
			func_510(0);
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

void func_510(int iParam0)
{
	if (Global_14571)
	{
		func_512(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_511())
	{
		Global_14413.f_1 = 3;
	}
}

int func_511()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_512(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_513(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_513(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_514()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

int func_515(var uParam0, bool bParam1)
{
	if (unk_0xB519E5386FBF69E5(*uParam0, 9))
	{
		if (bParam1)
		{
			func_505(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_516(var uParam0, bool bParam1)
{
	if (unk_0xB519E5386FBF69E5(*uParam0, 18))
	{
		if (bParam1)
		{
			func_505(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_517(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (unk_0xB519E5386FBF69E5(*uParam0, 0))
	{
		func_518(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15);
	}
}

void func_518(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16)
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
	
	unk_0xC0206131733ACF5A(0);
	unk_0xC0206131733ACF5A(2);
	unk_0x44967FAF1FE899C7(1);
	func_538(1);
	func_537(4, -1);
	func_536();
	if (func_543(bParam16))
	{
		if (!unk_0xA57007F9A665F322())
		{
			unk_0x3BE81935DF4C438C();
			unk_0x55C926E686119F55(1);
			if (unk_0x9449AC6115443388() == 0 && !unk_0xA57007F9A665F322())
			{
				unk_0xE2B331FD5EEF4684(uLocal_75, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0x122DCA017A140FA8(2))
		{
			uParam0->f_285 = unk_0x76850CFBD68BA9D4(2, 239);
			uParam0->f_286 = unk_0x76850CFBD68BA9D4(2, 240);
			if (uParam0->f_287 != uParam0->f_285 || uParam0->f_288 != uParam0->f_286)
			{
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_CURSOR");
				unk_0x73B039A1CD485226(uParam0->f_285);
				unk_0x73B039A1CD485226(uParam0->f_286);
				unk_0xFF141057ED7B4C73();
			}
			uParam0->f_287 = uParam0->f_285;
			uParam0->f_288 = uParam0->f_286;
		}
		else
		{
			func_535(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0xA4F3B84032D46C13(uLocal_75, "MOVE_CURSOR");
					unk_0x73B039A1CD485226(fVar6);
					unk_0x73B039A1CD485226(fVar7);
					unk_0xFF141057ED7B4C73();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (unk_0x122DCA017A140FA8(2))
			{
				uParam0->f_285 = unk_0x61BD13BBFFA4A7AD(2, 239);
				uParam0->f_286 = unk_0x61BD13BBFFA4A7AD(2, 240);
				if (unk_0x7ECD3D8283875DD1())
				{
					if (uParam0->f_287 != uParam0->f_285)
					{
						if (uParam0->f_285 < 0.49f)
						{
							unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
							unk_0x43C93E686A1E92C5(10);
							unk_0xFF141057ED7B4C73();
						}
						else if (uParam0->f_285 > 0.51f)
						{
							unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
							unk_0x43C93E686A1E92C5(11);
							unk_0xFF141057ED7B4C73();
						}
					}
				}
				uParam0->f_287 = uParam0->f_285;
				uParam0->f_288 = uParam0->f_286;
			}
			if (unk_0x7EDB1AFBE755EC7A(2))
			{
				fVar8 = unk_0x9CF7E896E5D8A141(2, 1);
				fVar9 = unk_0x9CF7E896E5D8A141(2, 2);
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
					if (unk_0x7F38A542899D217A(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
							unk_0x43C93E686A1E92C5(10);
							unk_0xFF141057ED7B4C73();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
							unk_0x43C93E686A1E92C5(11);
							unk_0xFF141057ED7B4C73();
						}
					}
					if (unk_0x7F38A542899D217A(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							bVar10 = true;
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
							unk_0x43C93E686A1E92C5(8);
							unk_0xFF141057ED7B4C73();
						}
						else if (fLocal_71 > 0f)
						{
							bVar10 = true;
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
							unk_0x43C93E686A1E92C5(9);
							unk_0xFF141057ED7B4C73();
						}
					}
					if (bVar10)
					{
						unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_534(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0xF073E12B43682F7D(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0x60B62574BB51DADA(uParam0->f_15))
						{
							if (iLocal_76 != 8)
							{
								unk_0xCC18B241D266EF14(uParam0->f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0x958B4351DD28B142(2, 195) || unk_0x958B4351DD28B142(2, 196)) || unk_0x6BBF308E0A0F9AD4(2, 195)) || unk_0x6BBF308E0A0F9AD4(2, 196))
			{
			}
			if (unk_0x7EDB1AFBE755EC7A(2))
			{
				if (unk_0x958B4351DD28B142(2, 32) || unk_0x958B4351DD28B142(2, 172))
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
					unk_0x43C93E686A1E92C5(8);
					unk_0xFF141057ED7B4C73();
				}
				else if (unk_0x958B4351DD28B142(2, 33) || unk_0x958B4351DD28B142(2, 173))
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
					unk_0x43C93E686A1E92C5(9);
					unk_0xFF141057ED7B4C73();
				}
				else if (unk_0x958B4351DD28B142(2, 34) || unk_0x958B4351DD28B142(2, 174))
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
					unk_0x43C93E686A1E92C5(10);
					unk_0xFF141057ED7B4C73();
				}
				else if (unk_0x958B4351DD28B142(2, 35) || unk_0x958B4351DD28B142(2, 175))
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
					unk_0x43C93E686A1E92C5(11);
					unk_0xFF141057ED7B4C73();
				}
			}
			else if (unk_0x958B4351DD28B142(2, 188))
			{
				unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
				unk_0x43C93E686A1E92C5(8);
				unk_0xFF141057ED7B4C73();
			}
			else if (unk_0x958B4351DD28B142(2, 187))
			{
				unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
				unk_0x43C93E686A1E92C5(9);
				unk_0xFF141057ED7B4C73();
			}
			else if (unk_0x958B4351DD28B142(2, 189))
			{
				unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
				unk_0x43C93E686A1E92C5(10);
				unk_0xFF141057ED7B4C73();
			}
			else if (unk_0x958B4351DD28B142(2, 190))
			{
				unk_0xCC18B241D266EF14(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT");
				unk_0x43C93E686A1E92C5(11);
				unk_0xFF141057ED7B4C73();
			}
		}
		if (bParam12)
		{
			if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
			{
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = unk_0x96E794F94B35432F();
			}
			if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
			{
				iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				if (iVar0 == 6)
				{
					func_533(uParam0);
				}
			}
		}
		func_532();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_531((iParam15 - (unk_0x9D40BBF80D8F5E8A() - iLocal_59)), &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = 0;
				iLocal_57 = 0;
				iLocal_58 = 0;
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_530(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x9D40BBF80D8F5E8A();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_530(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x9D40BBF80D8F5E8A();
			}
		}
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_1, 0))
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
			if (!unk_0xB519E5386FBF69E5(*uParam0, 29))
			{
				func_529(uParam0, iParam14);
			}
			func_544(1);
			unk_0x5D0868636F009CEF(1);
			uParam0->f_15 = unk_0x2AD909D8CB732A41();
			iLocal_150 = 0;
			iLocal_151 = 0;
			uParam0->f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0x60E4B50FF81B130D(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x73817D396768E4C6(uParam0, 1);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = unk_0x2AD909D8CB732A41();
			iLocal_64[1] = unk_0x2AD909D8CB732A41();
			func_506(1, 0, 1, 0);
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
					if (!func_337("H_EXIT_PROMPT"))
					{
						if (!func_337("HACKOBJ1"))
						{
							func_528("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (unk_0x122DCA017A140FA8(2))
				{
					if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
					{
						unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x96E794F94B35432F();
					}
				}
				else if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
				{
					unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = unk_0x96E794F94B35432F();
				}
			}
			if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
			{
				iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_337("H_EXIT_PROMPT"))
						{
							unk_0x1D208E4A4E1D4FFE(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
				{
					if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
					{
						func_527(0, "");
					}
				}
			}
			if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
			{
				iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
						func_527(1, "ACCESSD");
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
						if (!func_337("HACKOBJ2"))
						{
							func_528("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
						{
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x96E794F94B35432F();
						}
					}
					else if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
					{
						unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x96E794F94B35432F();
					}
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
					{
						if (unk_0x958B4351DD28B142(2, 202))
						{
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = unk_0x96E794F94B35432F();
							if (iParam7 == 1)
							{
								if (func_337("HACKOBJ2"))
								{
									unk_0x1D208E4A4E1D4FFE(1);
								}
								func_528("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76 = (iLocal_76 - 1);
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
				{
					if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
					{
						func_527(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
					func_527(1, "ACCESSD");
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
				if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
				{
					unk_0x3948245C8BD5EDA0(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
				{
					unk_0x3948245C8BD5EDA0(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
				{
					unk_0x3948245C8BD5EDA0(iLocal_64[1]);
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0xB519E5386FBF69E5(*uParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_337("HACKOBJ5"))
								{
									func_528("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!unk_0xB519E5386FBF69E5(*uParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_337("HACKOBJ3"))
							{
								func_528("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!unk_0xB519E5386FBF69E5(*uParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_337("HACKOBJ5"))
							{
								func_528("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_337("HACKOBJ5"))
						{
							unk_0x1D208E4A4E1D4FFE(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
					{
						if (unk_0x122DCA017A140FA8(2))
						{
							if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
							{
								unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = unk_0x96E794F94B35432F();
							}
						}
						else if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
						{
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x96E794F94B35432F();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					if (unk_0x958B4351DD28B142(2, 202))
					{
						unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = unk_0x96E794F94B35432F();
						if (iParam7 == 1)
						{
							if (func_337("HACKOBJ5") || func_337("HACKOBJ3"))
							{
								unk_0x1D208E4A4E1D4FFE(1);
							}
							iLocal_61 = 0;
							iLocal_76 = (iLocal_76 - 1);
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
				{
					if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
					{
						func_527(0, "");
					}
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
					func_527(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_77 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 0))
						{
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x9D40BBF80D8F5E8A();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x2AD909D8CB732A41();
						unk_0xCC18B241D266EF14(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!unk_0xB519E5386FBF69E5(*uParam0, 18))
					{
						iLocal_77 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x9D40BBF80D8F5E8A();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x2AD909D8CB732A41();
						unk_0xCC18B241D266EF14(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
							{
								if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
								{
									func_527(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xB519E5386FBF69E5(*uParam0, 9))
							{
								func_527(1, "TRYDL");
							}
							else
							{
								func_527(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
						{
							if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
							{
								func_527(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xB519E5386FBF69E5(*uParam0, 9))
						{
							func_527(1, "TRYDL");
						}
						else
						{
							func_527(1, "TRYBRUTE");
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
						iLocal_77 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 0))
						{
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x1B81A9D00D4A5D4C(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x9D40BBF80D8F5E8A();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x2AD909D8CB732A41();
						if (bParam10)
						{
							func_526(uParam0);
						}
						unk_0x903C61FFA7804294(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0xCC18B241D266EF14(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!bParam11 || unk_0xB519E5386FBF69E5(*uParam0, 18)) && !unk_0xB519E5386FBF69E5(*uParam0, 9))
					{
						iLocal_77 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x9D40BBF80D8F5E8A();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x2AD909D8CB732A41();
						if (bParam10)
						{
							func_526(uParam0);
						}
						if (func_337("HACKOBJ5"))
						{
							unk_0x1D208E4A4E1D4FFE(1);
						}
						unk_0x903C61FFA7804294(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0xCC18B241D266EF14(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
							{
								if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
								{
									func_527(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xB519E5386FBF69E5(*uParam0, 18))
							{
								func_527(1, "TRYDL");
							}
							else
							{
								func_527(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
						{
							if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
							{
								func_527(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xB519E5386FBF69E5(*uParam0, 18))
						{
							func_527(1, "TRYDL");
						}
						else
						{
							func_527(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0xB519E5386FBF69E5(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0xB519E5386FBF69E5(*uParam0, 18) && unk_0xB519E5386FBF69E5(*uParam0, 9))
						{
							if (!unk_0xB519E5386FBF69E5(*uParam0, 28))
							{
								unk_0x9956FB0E4B50ECB8(uParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if ((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 500)
								{
									if (((unk_0x9D40BBF80D8F5E8A() - iLocal_78) > 2500 || unk_0x958B4351DD28B142(2, 201)) || unk_0x958B4351DD28B142(2, 237))
									{
										func_527(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0xB519E5386FBF69E5(*uParam0, 18))
								{
									func_527(1, "TRYBRUTE");
								}
								else
								{
									func_527(1, "TRYHACK");
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
					func_525("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_525("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 1))
				{
					if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
					{
						if (unk_0x958B4351DD28B142(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x77868B5359B19C8F(uLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
								{
									unk_0x3948245C8BD5EDA0(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
								{
									unk_0x3948245C8BD5EDA0(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
						{
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x96E794F94B35432F();
						}
					}
					else if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
					{
						unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x96E794F94B35432F();
					}
				}
				if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
					{
						unk_0x3948245C8BD5EDA0(iLocal_64[0]);
					}
					unk_0x9956FB0E4B50ECB8(uParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xCC18B241D266EF14(-1, "HACKING_FAILURE", 0, 1);
					unk_0x60E4B50FF81B130D(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x9D40BBF80D8F5E8A();
				iLocal_64[0] = unk_0x2AD909D8CB732A41();
				unk_0xCC18B241D266EF14(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0x9956FB0E4B50ECB8(uParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0x77868B5359B19C8F(uLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
					{
						unk_0x3948245C8BD5EDA0(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				unk_0x9956FB0E4B50ECB8(uParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x9D40BBF80D8F5E8A() - iLocal_59));
				if (iVar1 < 1)
				{
					unk_0x9956FB0E4B50ECB8(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x9D40BBF80D8F5E8A();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xCC18B241D266EF14(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
						{
							unk_0x3948245C8BD5EDA0(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					unk_0x60E4B50FF81B130D(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0x60E4B50FF81B130D(uLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = unk_0x9D40BBF80D8F5E8A();
				unk_0x9956FB0E4B50ECB8(uParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
					{
						unk_0x3948245C8BD5EDA0(iLocal_64[0]);
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
					func_525("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_525("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 1))
					{
						if (unk_0x958B4351DD28B142(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x77868B5359B19C8F(uLocal_75, "CLOSE_APP");
							if (!unk_0x60B62574BB51DADA(iLocal_64[0]))
							{
								unk_0x3948245C8BD5EDA0(iLocal_64[0]);
							}
							if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
						{
							unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x96E794F94B35432F();
						}
					}
					else if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
					{
						unk_0xA4F3B84032D46C13(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x96E794F94B35432F();
					}
				}
				if (unk_0x4B2BEE3B1540A0A3(uLocal_74))
				{
					iVar0 = unk_0x9FF96E17DE53C966(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0xCC18B241D266EF14(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0xB519E5386FBF69E5(*uParam0, 23))
			{
				if (func_530(&(uParam0->f_10), 500))
				{
					unk_0x77868B5359B19C8F(uLocal_75, "RESET_ROULETTE");
					unk_0x73817D396768E4C6(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0xCC18B241D266EF14(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0x77868B5359B19C8F(uLocal_75, "STOP_ROULETTE");
					uParam0->f_10 = unk_0x9D40BBF80D8F5E8A();
					unk_0x9956FB0E4B50ECB8(uParam0, 23);
					unk_0x9956FB0E4B50ECB8(uParam0, 31);
					if (func_183() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x9956FB0E4B50ECB8(uParam0, 25);
					unk_0x9956FB0E4B50ECB8(uParam0, 31);
					unk_0xCC18B241D266EF14(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x9D40BBF80D8F5E8A();
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
						{
							unk_0x3948245C8BD5EDA0(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_183() == 0)
					{
						unk_0x60E4B50FF81B130D(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x9D40BBF80D8F5E8A() - iLocal_59));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0x9956FB0E4B50ECB8(uParam0, 25);
					unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x9D40BBF80D8F5E8A();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xCC18B241D266EF14(-1, "HACKING_FAILURE", 0, 1);
					unk_0x1D208E4A4E1D4FFE(1);
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
						{
							unk_0x3948245C8BD5EDA0(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					unk_0x60E4B50FF81B130D(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0x9956FB0E4B50ECB8(uParam0, 25);
				unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x9D40BBF80D8F5E8A();
				iLocal_64[1] = unk_0x2AD909D8CB732A41();
				unk_0xCC18B241D266EF14(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0x9956FB0E4B50ECB8(uParam0, 25);
				unk_0x77868B5359B19C8F(uLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
					{
						unk_0x3948245C8BD5EDA0(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0x60E4B50FF81B130D(uLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = unk_0x9D40BBF80D8F5E8A();
				unk_0x9956FB0E4B50ECB8(uParam0, 9);
				unk_0xCC18B241D266EF14(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x60B62574BB51DADA(iLocal_64[1]))
					{
						unk_0x3948245C8BD5EDA0(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0xB519E5386FBF69E5(*uParam0, 9) && unk_0xB519E5386FBF69E5(*uParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_337("HACKOBJ7"))
						{
							func_528("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_337("H_USE_PC6") || func_337("H_USE_PC7")) || func_337("H_USE_PC8")) || func_337("H_USE_PC9"))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
			if ((unk_0xB519E5386FBF69E5(*uParam0, 9) && unk_0xB519E5386FBF69E5(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0xB519E5386FBF69E5(*uParam0, 28))))
			{
				if (func_337("HACKOBJ7"))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
				if (!iLocal_151)
				{
					unk_0x3A8AEDC6680712C1(-1, "unlocked_bleep", unk_0xE7869D5D7816A9B6(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_530(&iLocal_77, 3000))
				{
					unk_0x73817D396768E4C6(uParam0, 0);
					unk_0x9956FB0E4B50ECB8(uParam0, 12);
					unk_0x5D0868636F009CEF(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0xB519E5386FBF69E5(*uParam0, 27)) && unk_0xB519E5386FBF69E5(*uParam0, 9)) && unk_0xB519E5386FBF69E5(*uParam0, 18))
				{
					unk_0xA4F3B84032D46C13(uLocal_75, "OPEN_DOWNLOAD");
					unk_0x840DDAF1126AE0CC(1);
					unk_0xFF141057ED7B4C73();
					unk_0x9956FB0E4B50ECB8(uParam0, 27);
				}
				if (func_530(&iLocal_77, 2000))
				{
					unk_0x77868B5359B19C8F(uLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_519(uParam0);
			break;
	}
}

void func_519(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_18 > 0)
	{
		if (unk_0xB519E5386FBF69E5(*uParam0, 22))
		{
			if (unk_0x0B4924B3F0DADDD1("hackingNG"))
			{
				if (!unk_0xA57007F9A665F322())
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		unk_0xCC18B241D266EF14(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_337("H1_HNG"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		if (unk_0xA78EA29AC2FFBADE())
		{
			if (func_337("H1_HNG_KM"))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
		}
		unk_0x9956FB0E4B50ECB8(uParam0, 26);
	}
	else if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (!func_337("H1_HNG_KM"))
		{
			func_528("H1_HNG_KM");
		}
	}
	else if (!func_337("H1_HNG"))
	{
		func_528("H1_HNG");
	}
	switch (uParam0->f_18)
	{
		case 0:
			unk_0xDF7D4AE1A984CEF7("hackingNG", 0);
			unk_0x73817D396768E4C6(uParam0, 22);
			func_524();
			iLocal_139 = unk_0x9D40BBF80D8F5E8A();
			Local_99.f_0 = 0;
			unk_0x73817D396768E4C6(&uLocal_149, 0);
			unk_0x73817D396768E4C6(&uLocal_149, 1);
			unk_0x73817D396768E4C6(&uLocal_149, 2);
			unk_0x73817D396768E4C6(&uLocal_149, 3);
			unk_0x73817D396768E4C6(&uLocal_149, 4);
			unk_0x73817D396768E4C6(&uLocal_149, 5);
			unk_0x73817D396768E4C6(&uLocal_149, 6);
			unk_0x73817D396768E4C6(&uLocal_149, 7);
			uParam0->f_18++;
			break;
		
		case 1:
			if (unk_0x0B4924B3F0DADDD1("hackingNG"))
			{
				unk_0x9956FB0E4B50ECB8(uParam0, 22);
				unk_0xA4F3B84032D46C13(uLocal_75, "SET_CURSOR_VISIBILITY");
				unk_0x840DDAF1126AE0CC(0);
				unk_0xFF141057ED7B4C73();
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
					Local_82[iVar0 /*2*/].f_1 = func_522(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
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
						if (!unk_0xB519E5386FBF69E5(uLocal_149, iVar0))
						{
							iLocal_140[iVar0] = unk_0x2AD909D8CB732A41();
							unk_0xCC18B241D266EF14(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0x9956FB0E4B50ECB8(&iLocal_149, iVar0);
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
							unk_0x413B7EC5B1B85673(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (unk_0xB519E5386FBF69E5(iLocal_149, iVar0))
				{
					unk_0x3948245C8BD5EDA0(iLocal_140[iVar0]);
					unk_0x73817D396768E4C6(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_521(Local_99.f_0))
			{
				unk_0xCC18B241D266EF14(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
			{
				if (func_530(&iLocal_139, 300))
				{
					if (func_520(Local_99.f_0))
					{
						Local_101[Local_99.f_0 /*4*/] = 1;
						Local_82[Local_99.f_0 /*2*/].f_1 = 0.572f;
						unk_0xCC18B241D266EF14(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99.f_0 != 7)
						{
							Local_99.f_0++;
						}
					}
					else
					{
						if (Local_99.f_0 != 0)
						{
							if (unk_0xB519E5386FBF69E5(iLocal_149, Local_99.f_0))
							{
								unk_0x3948245C8BD5EDA0(iLocal_140[Local_99.f_0]);
								unk_0x73817D396768E4C6(&iLocal_149, Local_99.f_0);
							}
							Local_101[(Local_99.f_0 - 1) /*4*/] = 0;
							Local_99.f_0 = (Local_99.f_0 - 1);
						}
						if (!unk_0xA57007F9A665F322())
						{
							unk_0xC3BB3CA17D24E700(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = unk_0x9D40BBF80D8F5E8A();
						unk_0x738D4328EF7650AF(0, 100, 100);
						unk_0xCC18B241D266EF14(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0xA57007F9A665F322())
					{
						unk_0xFE6A5236E50BDF64("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = unk_0x9D40BBF80D8F5E8A();
					unk_0x738D4328EF7650AF(0, 100, 100);
				}
			}
			if (!unk_0xA57007F9A665F322())
			{
				if (Local_99.f_0 == 0)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 1)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 2)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 3)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 4)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 5)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 6)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 7)
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xFE6A5236E50BDF64("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0xB519E5386FBF69E5(uParam0->f_1, 0))
				{
					if (!unk_0xB519E5386FBF69E5(uParam0->f_1, 1))
					{
						if (unk_0x958B4351DD28B142(2, 202))
						{
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_1), 1);
							unk_0x1D208E4A4E1D4FFE(1);
						}
					}
				}
			}
			break;
	}
}

int func_520(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_522(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_523((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_523(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_524()
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

void func_525(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

void func_526(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0ADD324BC46177EF(0, 8);
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

void func_527(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0x60E4B50FF81B130D(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = unk_0x9D40BBF80D8F5E8A();
		iLocal_79 = 1;
	}
	else
	{
		unk_0x60E4B50FF81B130D(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_528(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

void func_529(var uParam0, int iParam1)
{
	if (!unk_0xB519E5386FBF69E5(*uParam0, 29))
	{
		unk_0x1B81A9D00D4A5D4C(uLocal_75, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0x51807A4D76E3D4F4())
		{
			unk_0x60E4B50FF81B130D(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0x60E4B50FF81B130D(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0xA4F3B84032D46C13(uLocal_75, "SET_LABELS");
		func_218("H_ICON_1");
		if (iParam1 == 0)
		{
			func_218("H_ICON_2a");
		}
		else
		{
			func_218("H_ICON_2");
		}
		func_218("H_ICON_3");
		func_218("H_ICON_4");
		func_218("H_ICON_5");
		func_218("H_ICON_6");
		unk_0xFF141057ED7B4C73();
		unk_0x9956FB0E4B50ECB8(uParam0, 29);
	}
}

int func_530(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9D40BBF80D8F5E8A();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_531(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_532()
{
	if (iLocal_76 < 5)
	{
		if (unk_0x958B4351DD28B142(2, 201) || unk_0x958B4351DD28B142(2, 237))
		{
			unk_0xCC18B241D266EF14(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_533(var uParam0)
{
	unk_0x6C60CB61143A7B02(unk_0xE7869D5D7816A9B6(), 1, 1, 1, 0);
	if (unk_0x9DAD36BD64512352())
	{
		unk_0xB203AD190D025841(0);
	}
	unk_0x1D208E4A4E1D4FFE(1);
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
	unk_0x74FF6D08DE291367(uLocal_73, 0);
	func_509(0);
	func_508();
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x5D0868636F009CEF(0);
	func_507(uParam0, 1, 0);
	func_506(0, 1, 1, 0);
}

void func_534(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x76850CFBD68BA9D4(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xAC0C4A44E7AB491E(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 218) * 127f));
		}
		if (!unk_0xAC0C4A44E7AB491E(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 219) * 127f));
		}
		if (!unk_0xAC0C4A44E7AB491E(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 220) * 127f));
		}
		if (!unk_0xAC0C4A44E7AB491E(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x7A016BE57B7A580F(2, 221) * 127f));
		}
	}
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (bParam5)
		{
			if (unk_0xDA216D9ACC721087())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xB6A92B338EEF1375())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_535(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x61BD13BBFFA4A7AD(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9CF7E896E5D8A141(2, 221) * 127f));
		}
	}
}

void func_536()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_513(0))
		{
			func_510(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_537(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_1338577.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1338577.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_538(int iParam0)
{
	Global_1339895.f_932 = iParam0;
}

void func_539(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0x19AC385C7CB5ACFE())
		{
			unk_0xBEE128CF06FE2A96(0);
		}
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		uVar0 = iParam2;
		unk_0x8FE59DE2329CBE64(iParam0, bParam1, uVar0);
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
		if (!func_306())
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
		if (unk_0xD18C3CF631455087(iParam0) && unk_0x2E6D4A0CE8AD9494(iParam0))
		{
			uVar25 = unk_0x91B73D905EA38F6B(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x00AAD79B42B3E036())
				{
					unk_0xE0D8D7721870E98E(1);
				}
				else
				{
					unk_0x60365B5AF8BF1FFA(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x00AAD79B42B3E036() && !bVar18)
					{
						unk_0xE0D8D7721870E98E(0);
					}
					Global_2416794[iParam0 /*303*/].f_239 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_542(uVar25) && !unk_0x4ADBDB3ACDEB4D8C(uVar25))
				{
					if (!bVar21)
					{
						unk_0x70EE8EFEE355AD29(uVar25, true, 0);
					}
				}
				if (!unk_0xD55D878601C46BA9(uVar25))
				{
					if (!bVar20)
					{
						unk_0x2878EC06B3F897A0(uVar25, false);
					}
					unk_0xFD092FF761E54535(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x2878EC06B3F897A0(uVar25, false);
				}
				unk_0x321C1AA209172C00(uVar25, true);
				unk_0xD30CBD7E69615F8C(iParam0, 0);
				unk_0x3884CEFF6ADEBA7D(uVar25);
				unk_0xC16A68A8424A0340(uVar25, 1);
				func_541();
				func_540();
				if (unk_0xE1CF0FCC3409EBB7())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xC5E5B5BBBE4693F6())
				{
				}
				Global_2416794[iParam0 /*303*/].f_240 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_542(uVar25) && !unk_0x4ADBDB3ACDEB4D8C(uVar25))
				{
					if (!bVar21)
					{
						unk_0x70EE8EFEE355AD29(uVar25, !bVar14, 0);
					}
					if (!unk_0xD55D878601C46BA9(uVar25))
					{
						if (!bVar20)
						{
							unk_0x2878EC06B3F897A0(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFD092FF761E54535(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xD30CBD7E69615F8C(iParam0, 0);
				}
				else
				{
					unk_0xD30CBD7E69615F8C(iParam0, 1);
				}
				unk_0x321C1AA209172C00(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xF81B6A0547AE4030(uVar25) && !unk_0x51374A0BB2871E6E(uVar25, 0))
					{
						unk_0xDE31B2587775EDAD(uVar25);
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
			unk_0x8FE59DE2329CBE64(iParam0, bParam1, iVar26);
		}
	}
}

void func_540()
{
	struct<2> Var0;
	
	Global_2426494.f_691 = 0;
	Global_2426494.f_692 = 0;
	Global_2426494.f_693 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404919.f_1464 = { Var0 };
}

void func_541()
{
	Global_2404919.f_622 = 0;
	Global_2404919.f_1505 = 0;
	Global_2404919.f_484 = 0;
	Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_205 = 0;
}

int func_542(var uParam0)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xC47857E5E74EA5AF(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_543(bool bParam0)
{
	if (unk_0x4A4851D44CDF03C0(uLocal_75) && (!bParam0 || (((((unk_0x0B4924B3F0DADDD1("HACKING_PC_desktop_0") && unk_0x0B4924B3F0DADDD1("HACKING_PC_desktop_1")) && unk_0x0B4924B3F0DADDD1("HACKING_PC_desktop_2")) && unk_0x0B4924B3F0DADDD1("HACKING_PC_desktop_3")) && unk_0x0B4924B3F0DADDD1("HACKING_PC_desktop_4")) && unk_0x0B4924B3F0DADDD1("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDF7D4AE1A984CEF7("HACKING_PC_desktop_0", 0);
		unk_0xDF7D4AE1A984CEF7("HACKING_PC_desktop_1", 0);
		unk_0xDF7D4AE1A984CEF7("HACKING_PC_desktop_2", 0);
		unk_0xDF7D4AE1A984CEF7("HACKING_PC_desktop_3", 0);
		unk_0xDF7D4AE1A984CEF7("HACKING_PC_desktop_4", 0);
		unk_0xDF7D4AE1A984CEF7("HACKING_PC_desktop_5", 0);
	}
	uLocal_75 = unk_0xB9C60ADBB8B58394("Hacking_PC");
}

void func_545(var uParam0)
{
	unk_0x6C60CB61143A7B02(unk_0xE7869D5D7816A9B6(), 1, 1, 1, 0);
	if (unk_0x9DAD36BD64512352())
	{
		unk_0xB203AD190D025841(0);
	}
	unk_0x44967FAF1FE899C7(0);
	unk_0x1D208E4A4E1D4FFE(1);
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
	unk_0x74FF6D08DE291367(uLocal_73, 0);
	unk_0x73817D396768E4C6(uParam0, 0);
	unk_0x73817D396768E4C6(uParam0, 12);
	func_509(0);
	func_508();
	unk_0x5D0868636F009CEF(0);
}

void func_546(var uParam0)
{
	int iVar0;
	
	func_507(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_18 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Local_101[iVar0 /*4*/])
		{
			Local_101[iVar0 /*4*/] = 0;
		}
		iVar0++;
	}
}

void func_547()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB519E5386FBF69E5(Local_459.f_0, 0))
	{
		return;
	}
	if (!func_357())
	{
		if (func_337("GB_SGHT_HLP1"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		if (func_337("GB_SGHT_HLP2"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		if (func_330())
		{
			sVar0 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
			iVar1 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
			if (func_225(unk_0x3F80C6638E3A1A90(), 1))
			{
				if (func_556("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
			else if (func_556("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
		}
		if (func_337("GB_SGHT_RVL"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		return;
	}
	iVar2 = func_321(unk_0x3F80C6638E3A1A90());
	if (iVar2 < 2)
	{
		if (func_337("GB_SGHT_HLP1"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		if (func_337("GB_SGHT_HLP2"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		if (func_330())
		{
			sVar0 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
			iVar1 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
			if (func_225(unk_0x3F80C6638E3A1A90(), 1))
			{
				if (func_556("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
			else if (func_556("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
		}
		if (func_337("GB_SGHT_RVL"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		return;
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_446, 2))
	{
		if (!func_555(83))
		{
			if (iLocal_748 == -1)
			{
				if (func_549(0, 1, 1, 1))
				{
					if (unk_0xA1238458CB587858() == Local_193.f_33)
					{
						func_342("GB_SGHT_HLP1", -1);
						func_341(1);
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 2);
					}
					else if (func_602() == Local_193.f_33)
					{
						func_342("GB_SGHT_HLP2", -1);
						func_341(1);
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 2);
					}
					else if (func_330())
					{
						sVar0 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
						iVar1 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
						if (func_225(unk_0x3F80C6638E3A1A90(), 1))
						{
							func_548("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_341(1);
						}
						else
						{
							func_548("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_341(1);
						}
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 2);
					}
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 2);
			}
		}
	}
	if (unk_0xB519E5386FBF69E5(iLocal_446, 2))
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_446, 7))
		{
			if (iLocal_748 == -1)
			{
				if (unk_0xA1238458CB587858() == Local_193.f_33)
				{
					if (func_549(0, 1, 1, 1))
					{
						func_342("GB_SGHT_APPH", -1);
						func_341(1);
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 7);
					}
				}
				else
				{
					unk_0x9956FB0E4B50ECB8(&iLocal_446, 7);
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&iLocal_446, 7);
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_446, 8))
	{
		if (func_601())
		{
			if (func_595())
			{
				if (unk_0x51362735C7CDD08E(Local_193.f_3))
				{
					if (func_549(0, 1, 1, 1))
					{
						func_342("GB_SGHT_PKGH", -1);
						func_341(1);
						unk_0x9956FB0E4B50ECB8(&iLocal_446, 8);
					}
				}
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_446, 12))
	{
		if (func_601())
		{
			if (Local_193.f_5 > 0 || unk_0xB519E5386FBF69E5(Local_193.f_1, 6))
			{
				if (func_549(0, 1, 1, 1))
				{
					func_342("GB_SGHT_RVL", -1);
					func_341(1);
					unk_0x9956FB0E4B50ECB8(&iLocal_446, 12);
				}
			}
		}
	}
}

void func_548(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xCAFBB15049416379(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xC498567F546E6683(iParam2);
	}
	unk_0x63E8D6007C32E426(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xC498567F546E6683(iParam4);
	}
	unk_0x9359E7CC54335EB9(sParam3);
	unk_0x7CBFB87C647743C3(0, 0, 0, iParam5);
}

int func_549(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x23741E39BEA32E66())
	{
		return 0;
	}
	if (func_554())
	{
		return 0;
	}
	if (!unk_0xDE185266FE919B68())
	{
		return 0;
	}
	if (func_311())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_40(unk_0x3F80C6638E3A1A90(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_553(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
	}
	if (func_552())
	{
		return 0;
	}
	if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		return 0;
	}
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
	}
	if (Global_1573676)
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (func_550())
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (Global_2464939)
	{
		return 0;
	}
	return 1;
}

bool func_550()
{
	return Global_2432717.f_566;
}

bool func_551()
{
	return Global_2432717.f_716;
}

bool func_552()
{
	return Global_2426494.f_2421.f_585;
}

int func_553(int iParam0)
{
	if (Global_2416794[iParam0 /*303*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_554()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

bool func_555(int iParam0)
{
	return Global_2426494.f_2138[0 /*70*/].f_1 == iParam0;
}

bool func_556(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xAA8D087D7A86072A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xC498567F546E6683(iParam2);
	}
	unk_0x63E8D6007C32E426(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xC498567F546E6683(iParam4);
	}
	unk_0x9359E7CC54335EB9(sParam3);
	return unk_0x360D41DC76A83E6A(0);
}

void func_557()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB519E5386FBF69E5(Local_459.f_0, 0))
	{
		return;
	}
	if (!func_357())
	{
		if (unk_0xB519E5386FBF69E5(iLocal_446, 5))
		{
			if (Local_193.f_34 != -1)
			{
				iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
				if (iVar0 > -1)
				{
					if (unk_0xD18C3CF631455087(unk_0x0F810277E61B87AE(Local_193.f_34)))
					{
						iVar1 = func_227(iVar0);
						iVar2 = func_501(iVar1);
						func_349(unk_0x0F810277E61B87AE(Local_193.f_34), 432, 0);
						func_348(unk_0x0F810277E61B87AE(Local_193.f_34), iVar2, 0);
						func_347(unk_0x0F810277E61B87AE(Local_193.f_34), 0, 0);
						func_346(unk_0x0F810277E61B87AE(Local_193.f_34), 0);
						func_345(unk_0x0F810277E61B87AE(Local_193.f_34), Global_262145.f_10162, 0);
						unk_0x73817D396768E4C6(&iLocal_446, 5);
					}
					else
					{
						unk_0x73817D396768E4C6(&iLocal_446, 5);
					}
				}
			}
			func_350();
		}
		return;
	}
	if (!unk_0x51362735C7CDD08E(Local_193.f_3))
	{
		if (unk_0xA1238458CB587858() == Local_193.f_33)
		{
			if (!unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 3))
			{
				if (!unk_0xB519E5386FBF69E5(Local_459.f_0, 0))
				{
					if (Local_253[unk_0xA1238458CB587858() /*6*/].f_5 < 3)
					{
						if (func_321(unk_0x3F80C6638E3A1A90()) == 3)
						{
							if (!func_567("GB_SGHT_HCK"))
							{
								func_564("GB_SGHT_HCK", 0);
							}
						}
						else if (func_567("GB_SGHT_HCK"))
						{
							func_350();
						}
					}
					else
					{
						func_350();
					}
				}
			}
		}
		else if (func_602() == Local_193.f_33)
		{
			if (Local_193.f_34 != -1)
			{
				if (func_321(unk_0x3F80C6638E3A1A90()) == 3)
				{
					if (!func_567("GB_SGHT_PROT"))
					{
						iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_227(iVar0);
							func_558("GB_SGHT_PROT", unk_0x0F810277E61B87AE(Local_193.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_567("GB_SGHT_PROT"))
				{
					func_350();
				}
			}
		}
		else if (func_330())
		{
			if (Local_193.f_34 != -1)
			{
				if (func_321(unk_0x3F80C6638E3A1A90()) == 3)
				{
					if (Local_193.f_34 != -1)
					{
						iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_227(iVar0);
							if (func_225(unk_0x3F80C6638E3A1A90(), 1))
							{
								if (!func_567("GB_SGHT_STOP"))
								{
									func_558("GB_SGHT_STOP", unk_0x0F810277E61B87AE(Local_193.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_567("GB_SGHT_STOP"))
							{
								func_558("GB_SGHT_STOP", unk_0x0F810277E61B87AE(Local_193.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_567("GB_SGHT_STOP"))
					{
						func_350();
					}
					if (func_567("GB_SGHT_STOP2"))
					{
						func_350();
					}
				}
				if (func_321(unk_0x3F80C6638E3A1A90()) >= 2)
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_446, 5))
					{
						if (Local_193.f_34 != -1)
						{
							if (unk_0xD18C3CF631455087(unk_0x0F810277E61B87AE(Local_193.f_34)))
							{
								if (func_640(unk_0x0F810277E61B87AE(Local_193.f_34), 1, 1))
								{
									iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_227(iVar0);
										iVar2 = func_501(iVar1);
										func_349(unk_0x0F810277E61B87AE(Local_193.f_34), 432, 1);
										func_348(unk_0x0F810277E61B87AE(Local_193.f_34), iVar2, 1);
										func_347(unk_0x0F810277E61B87AE(Local_193.f_34), 1, 1);
										func_346(unk_0x0F810277E61B87AE(Local_193.f_34), 1);
										func_345(unk_0x0F810277E61B87AE(Local_193.f_34), Global_262145.f_10162, 1);
										unk_0x9956FB0E4B50ECB8(&iLocal_446, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0xB519E5386FBF69E5(iLocal_446, 5))
				{
					if (Local_193.f_34 != -1)
					{
						iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_227(iVar0);
							iVar2 = func_501(iVar1);
							func_349(unk_0x0F810277E61B87AE(Local_193.f_34), 432, 0);
							func_348(unk_0x0F810277E61B87AE(Local_193.f_34), iVar2, 0);
							func_347(unk_0x0F810277E61B87AE(Local_193.f_34), 0, 0);
							func_346(unk_0x0F810277E61B87AE(Local_193.f_34), 0);
							func_345(unk_0x0F810277E61B87AE(Local_193.f_34), Global_262145.f_10162, 0);
							unk_0x73817D396768E4C6(&iLocal_446, 5);
						}
					}
				}
			}
		}
	}
	else if (func_321(unk_0x3F80C6638E3A1A90()) == 3)
	{
		if (unk_0xA1238458CB587858() == Local_193.f_33)
		{
			if (!unk_0xB519E5386FBF69E5(Local_459.f_0, 0))
			{
				if (!func_567("GB_SGHT_RETP"))
				{
					func_564("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_602() == Local_193.f_33)
		{
			if (Local_193.f_34 != -1)
			{
				if (!func_567("GB_SGHT_PROT"))
				{
					iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_227(iVar0);
						func_558("GB_SGHT_PROT", unk_0x0F810277E61B87AE(Local_193.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_330())
		{
			if (Local_193.f_34 != -1)
			{
				iVar0 = func_229(unk_0x0F810277E61B87AE(Local_193.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_227(iVar0);
					if (func_225(unk_0x3F80C6638E3A1A90(), 1))
					{
						if (!func_567("GB_SGHT_STOP"))
						{
							func_558("GB_SGHT_STOP", unk_0x0F810277E61B87AE(Local_193.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_567("GB_SGHT_STOP"))
					{
						func_558("GB_SGHT_STOP", unk_0x0F810277E61B87AE(Local_193.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_567("GB_SGHT_PROT"))
		{
			func_350();
		}
		if (func_567("GB_SGHT_RETP"))
		{
			func_350();
		}
		if (func_567("GB_SGHT_STOP"))
		{
			func_350();
		}
		if (func_567("GB_SGHT_STOP2"))
		{
			func_350();
		}
	}
}

void func_558(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_559(sParam0, unk_0x472BC6C9F4FFBA2B(iParam1), sParam2, bParam5);
	Global_1312577 = 14;
	Global_1312577.f_54 = iParam3;
	Global_1312577.f_55 = iParam4;
}

void func_559(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0xF6917DE0E003509D(sParam0))
	{
		return;
	}
	if (unk_0xD426C8D00AB439F1(sParam0) > 23)
	{
		return;
	}
	if (unk_0xF6917DE0E003509D(sParam1))
	{
		return;
	}
	if (unk_0xD426C8D00AB439F1(sParam1) > 63)
	{
		return;
	}
	if (unk_0xF6917DE0E003509D(sParam2))
	{
		return;
	}
	if (unk_0xD426C8D00AB439F1(sParam2) > 63)
	{
		return;
	}
	if (func_563(sParam0, sParam1, sParam2))
	{
		return;
	}
	func_351();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), unk_0x959E7FA37C0D0892(), 24);
	Global_1312577.f_7 = unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	func_562();
	func_561(bParam3);
	func_560();
}

void func_560()
{
	unk_0x9956FB0E4B50ECB8(&(Global_1312577.f_56), 1);
}

void func_561(bool bParam0)
{
	if (bParam0)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0x73817D396768E4C6(&(Global_1312577.f_56), 0);
}

void func_562()
{
	Global_1312577.f_8 = unk_0xBB2C6A88355C6C4A(unk_0xC7F926248AF8587B(), 86400000);
	Global_1312577.f_9 = unk_0xC7F926248AF8587B();
}

bool func_563(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_356())
	{
		return 0;
	}
	if (unk_0xF6917DE0E003509D(uParam0))
	{
		return 0;
	}
	if (unk_0xF6917DE0E003509D(uParam1))
	{
		return 0;
	}
	if (unk_0xF6917DE0E003509D(uParam2))
	{
		return 0;
	}
	if (!unk_0xC7C6DDDE84A8E734(sParam0) == unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_10)))
	{
		return 0;
	}
	if (!unk_0xC7C6DDDE84A8E734(sParam1) == unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_14)))
	{
		return 0;
	}
	return unk_0xC7C6DDDE84A8E734(sParam2) == unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_30));
}

void func_564(char* sParam0, bool bParam1)
{
	if (unk_0xF6917DE0E003509D(sParam0))
	{
		return;
	}
	if (unk_0xD426C8D00AB439F1(sParam0) > 23)
	{
		return;
	}
	if (func_565(sParam0))
	{
		return;
	}
	func_351();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x959E7FA37C0D0892(), 24);
	Global_1312577.f_7 = unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_562();
	func_561(bParam1);
	func_560();
}

bool func_565(char* sParam0)
{
	if (!func_356())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_566(uParam0);
	}
	if (unk_0xF6917DE0E003509D(uParam0))
	{
		return 0;
	}
	return unk_0xC7C6DDDE84A8E734(sParam0) == unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_10));
}

bool func_566(char* sParam0)
{
	if (!func_356())
	{
		return 0;
	}
	if (unk_0xF6917DE0E003509D(uParam0))
	{
		return 0;
	}
	return unk_0xC7C6DDDE84A8E734(sParam0) == unk_0xC7C6DDDE84A8E734(&(Global_1312577.f_14));
}

int func_567(char* sParam0)
{
	if (unk_0xF6917DE0E003509D(sParam0))
	{
		return 0;
	}
	if (!func_356())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0xD426C8D00AB439F1(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xD426C8D00AB439F1(sParam0) > 23)
	{
		return 0;
	}
	return func_565(sParam0);
}

void func_568()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_601() && !func_330())
	{
		return;
	}
	if (!func_357())
	{
		return;
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_446, 1))
	{
		iVar0 = func_321(unk_0x3F80C6638E3A1A90());
		if (iVar0 >= 2)
		{
			if (unk_0xA1238458CB587858() == Local_193.f_33 || func_602() == Local_193.f_33)
			{
				if (func_574(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_388(83, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x2BC407182CE3542C(1);
					unk_0x2E6B496CAB0B78B3(unk_0x3F80C6638E3A1A90(), joaat("pickup_portable_package"), 1);
					func_573(1);
					func_569();
				}
			}
			else if (func_225(unk_0x3F80C6638E3A1A90(), 1))
			{
				sVar1 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
				uVar2 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
				func_476(83, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x2E6B496CAB0B78B3(unk_0x3F80C6638E3A1A90(), joaat("pickup_portable_package"), 0);
				func_569();
			}
			else
			{
				sVar1 = func_389(unk_0x0F810277E61B87AE(Local_193.f_34));
				uVar2 = func_478(unk_0x0F810277E61B87AE(Local_193.f_34));
				func_476(83, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x2E6B496CAB0B78B3(unk_0x3F80C6638E3A1A90(), joaat("pickup_portable_package"), 0);
				func_569();
			}
		}
		unk_0x9956FB0E4B50ECB8(&iLocal_446, 1);
	}
}

void func_569()
{
	if (func_386() != func_61())
	{
		Global_1716613 = func_572(func_386());
		Global_1716613.f_1 = func_571(func_386());
	}
	Global_1716613.f_5 = unk_0x72F23FC3443B498B();
	Global_1716613.f_13 = func_570();
	Global_1716613.f_15 = 0;
	if (func_387(1))
	{
		if (func_470() == func_386())
		{
			Global_1716613.f_15 = 1;
		}
	}
}

int func_570()
{
	int iVar0;
	
	iVar0 = func_386();
	if (iVar0 != func_61())
	{
		return Global_1607618[iVar0 /*106*/].f_8.f_66;
	}
	return 0;
}

var func_571(int iParam0)
{
	return Global_1607618[iParam0 /*106*/].f_8.f_6[1];
}

var func_572(int iParam0)
{
	return Global_1607618[iParam0 /*106*/].f_8.f_6[0];
}

void func_573(bool bParam0)
{
	if (bParam0)
	{
		if (!func_160(unk_0x3F80C6638E3A1A90(), 9))
		{
			if (func_321(unk_0x3F80C6638E3A1A90()) != 0)
			{
				func_177(9);
			}
		}
	}
	else if (func_160(unk_0x3F80C6638E3A1A90(), 9))
	{
		func_176(9);
	}
}

int func_574(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x73817D396768E4C6(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_575(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_99155.f_32499[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0x9956FB0E4B50ECB8(&Global_2283, 1);
			unk_0x9956FB0E4B50ECB8(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_575(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x04E7E853E31F41A3(sParam14, sParam15))
	{
	}
	func_585();
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
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if (unk_0x317621AF5DB7A5FF(unk_0xE7869D5D7816A9B6()))
			{
				return 0;
			}
		}
		if (Global_99155.f_12665[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xFF6891E21E7FC193(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xFF6891E21E7FC193(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_584() == 0)
	{
		func_582();
		return 0;
	}
	func_581(Global_16779);
	StringCopy(&(Global_99155.f_12755[Global_16779 /*104*/]), sParam1, 64);
	Global_99155.f_12755[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_99155.f_12755[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_99155.f_12755[Global_16779 /*104*/].f_25 = iParam7;
	Global_99155.f_12755[Global_16779 /*104*/].f_26 = uParam8;
	Global_99155.f_12755[Global_16779 /*104*/].f_29 = uParam9;
	Global_99155.f_12755[Global_16779 /*104*/].f_30 = uParam12;
	Global_99155.f_12755[Global_16779 /*104*/].f_31 = uParam11;
	Global_99155.f_12755[Global_16779 /*104*/].f_28 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_99155.f_12755[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_99155.f_12755[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_99155.f_12755[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_99155.f_12755[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_99155.f_12755[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_99155.f_12755[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0xB519E5386FBF69E5(Global_2283, 10))
	{
		Global_99155.f_12755[Global_16779 /*104*/].f_99[0] = 1;
		Global_99155.f_12755[Global_16779 /*104*/].f_99[1] = 1;
		Global_99155.f_12755[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_580(0);
		func_580(2);
		func_580(1);
	}
	else
	{
		func_585();
		switch (iParam16)
		{
			case 3:
				Global_99155.f_12755[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_99155.f_12755[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_99155.f_12755[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_99155.f_12755[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_580(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_580(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_580(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_580(3);
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
		if (unk_0xB519E5386FBF69E5(Global_2283, 10))
		{
			Global_99155.f_12665[0 /*20*/].f_17 = 1;
			Global_99155.f_12665[1 /*20*/].f_17 = 1;
			Global_99155.f_12665[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_99155.f_12665[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_99155.f_12665[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_99155.f_12665[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_99155.f_12665[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_585();
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
			if (!func_365())
			{
				unk_0xCC18B241D266EF14(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_579(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_576(1);
			func_579(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_576(int iParam0)
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
		if (func_578(14))
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
								if (unk_0xB519E5386FBF69E5(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_218(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar2);
								unk_0xFF141057ED7B4C73();
							}
							if (Global_2440970)
							{
								if (iVar1 == 14)
								{
									func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_99155.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_99155.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_99155.f_12755[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69236)
								{
									iVar4 = 0;
									iVar4 = Global_2557324;
									func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36674;
											break;
										
										case 1:
											iVar5 = Global_36675;
											break;
										
										case 2:
											iVar5 = Global_36676;
											break;
										
										default:
											break;
									}
									func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_218(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(Global_2289);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_218(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar6);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB519E5386FBF69E5(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_218(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(iVar7);
								unk_0xFF141057ED7B4C73();
							}
							else if (iVar1 == 8)
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_218(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(42);
								unk_0xFF141057ED7B4C73();
							}
							else if ((iVar1 == 23 && unk_0x04E7E853E31F41A3(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB519E5386FBF69E5(Global_2284, 6))
							{
								unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
								unk_0x43C93E686A1E92C5(1);
								unk_0x43C93E686A1E92C5(iVar0);
								unk_0x43C93E686A1E92C5(Global_2290[iVar1 /*15*/].f_10);
								unk_0x43C93E686A1E92C5(0);
								func_218(&(Global_2290[iVar1 /*15*/]));
								unk_0x43C93E686A1E92C5(42);
								unk_0xFF141057ED7B4C73();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1606484.f_1;
								func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_577(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_577(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF6917DE0E003509D(uParam7))
	{
		func_218(sParam7);
	}
	if (!unk_0xF6917DE0E003509D(iParam8))
	{
		func_218(iParam8);
	}
	if (!unk_0xF6917DE0E003509D(iParam9))
	{
		func_218(iParam9);
	}
	if (!unk_0xF6917DE0E003509D(iParam10))
	{
		func_218(iParam10);
	}
	if (!unk_0xF6917DE0E003509D(iParam11))
	{
		func_218(iParam11);
	}
	unk_0xFF141057ED7B4C73();
}

bool func_578(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_579(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xFF141057ED7B4C73();
}

void func_580(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_99155.f_12665[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_581(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x0CE219089BDB83C5();
	uVar1 = unk_0x1B24A2CA27443F7B();
	uVar2 = unk_0x7C833E3C6EEE41E0();
	uVar3 = unk_0x2DA3502053F9E535();
	uVar4 = unk_0xEB4EA596232DA76E() + 1;
	uVar5 = unk_0xB99227ECC84A576C();
	Global_99155.f_12755[iParam0 /*104*/].f_18 = uVar0;
	Global_99155.f_12755[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_99155.f_12755[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_99155.f_12755[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_99155.f_12755[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_99155.f_12755[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_582()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69236)
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
	Global_99155.f_12755[Global_16779 /*104*/].f_18 = -1;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_583(Global_99155.f_12755[iVar2 /*104*/].f_18, Global_99155.f_12755[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_99155.f_12755[Global_16779 /*104*/].f_24 = 1;
}

int func_583(struct<6> Param0, struct<6> Param6)
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

int func_584()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69236)
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
		if (Global_99155.f_12755[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_99155.f_12755[Global_16779 /*104*/].f_18 = -1;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_99155.f_12755[iVar2 /*104*/].f_24 == 0 || Global_99155.f_12755[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_583(Global_99155.f_12755[iVar2 /*104*/].f_18, Global_99155.f_12755[Global_16779 /*104*/].f_18))
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
	Global_99155.f_12755[Global_16779 /*104*/].f_99[0] = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_99[1] = 0;
	Global_99155.f_12755[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_585()
{
	if (func_578(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_586();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_586()
{
	func_587();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_587()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_590(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_589(unk_0xE7869D5D7816A9B6());
			if (func_588(iVar0) && (!func_578(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_588(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_588(int iParam0)
{
	return iParam0 < 3;
}

int func_589(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_590(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_590(int iParam0)
{
	if (func_588(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_591()
{
	if (!unk_0xB519E5386FBF69E5(Local_253[unk_0xA1238458CB587858() /*6*/].f_1, 1))
	{
		if (!func_601())
		{
			if (Local_193.f_5 > 0 || unk_0xB519E5386FBF69E5(Local_193.f_1, 6))
			{
				func_179(1);
				unk_0x9956FB0E4B50ECB8(&(Local_253[unk_0xA1238458CB587858() /*6*/].f_1), 1);
			}
		}
	}
}

int func_592()
{
	if (Global_2457699.f_4647.f_12)
	{
		Global_2457699.f_4647.f_12 = 0;
		return 1;
	}
	if (func_593(1))
	{
		return 1;
	}
	return 0;
}

int func_593(bool bParam0)
{
	var uVar0;
	
	if (!func_387(1))
	{
		if ((Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_50 != func_61() && func_640(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_50, 0, 1)) && Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_18 == 4)
		{
			if (bParam0)
			{
				uVar0 = func_389(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_50);
				func_594("LEFT_GB_MSSN", uVar0, func_372(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_50, -2, 0, 0), -1);
				func_341(1);
			}
			return 1;
		}
	}
	return 0;
}

void func_594(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xCAFBB15049416379(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xC498567F546E6683(iParam2);
	}
	unk_0x63E8D6007C32E426(uParam1);
	unk_0x7CBFB87C647743C3(0, 0, 0, iParam3);
}

bool func_595()
{
	return func_192(unk_0x3F80C6638E3A1A90());
}

void func_596(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 != iParam0)
	{
		func_600(-1);
		Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 = iParam0;
		if (!func_185(iParam0))
		{
			fVar0 = func_184(iParam0);
			if (fVar0 != 1f)
			{
				func_181(fVar0);
				unk_0x9956FB0E4B50ECB8(&(Global_1716604.f_3), 1);
			}
		}
		if (!func_188(iParam0))
		{
			if (func_186(iParam0))
			{
				unk_0x8C1CE4F676968E94(0);
				unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				unk_0x9956FB0E4B50ECB8(&(Global_1716604.f_3), 0);
			}
			else if (unk_0xF3F3D9078A6EAC3E() < 5)
			{
				unk_0x63EB72E192731928(1f);
				unk_0x8C1CE4F676968E94(5);
			}
		}
		if (func_329())
		{
			func_177(27);
		}
		if (bParam1)
		{
			func_179(1);
		}
		if (((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155)
		{
			if ((unk_0xB519E5386FBF69E5(Global_2457699.f_4406, 1) || unk_0xB519E5386FBF69E5(Global_2457699.f_4406, 4)) || unk_0xB519E5386FBF69E5(Global_2457699.f_4406, 0))
			{
				func_459(6);
			}
			func_599();
		}
		if (iParam0 == 164)
		{
			unk_0xC2D151904C72E95F(3, 0);
			unk_0xC2D151904C72E95F(5, 0);
		}
		if (func_108(unk_0x3F80C6638E3A1A90()) && func_193(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1), 8);
		}
		func_597();
	}
}

void func_597()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_598();
	iVar2 = func_62(unk_0x3F80C6638E3A1A90());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0F810277E61B87AE(iVar0);
		if (unk_0xD18C3CF631455087(iVar1))
		{
			if (func_261(iVar1, iVar2, 1))
			{
				unk_0x55FCC0C390620314(unk_0x3F80C6638E3A1A90(), iVar1, iVar3);
				unk_0x55FCC0C390620314(iVar1, unk_0x3F80C6638E3A1A90(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_598()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_386();
	if (iVar0 != func_61())
	{
		if (func_640(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xB519E5386FBF69E5(Global_1607618[iVar1 /*106*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_599()
{
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4406, 1))
	{
		unk_0x73817D396768E4C6(&(Global_2457699.f_4406), 1);
	}
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_4406, 4))
	{
		unk_0x73817D396768E4C6(&(Global_2457699.f_4406), 4);
	}
	unk_0x73817D396768E4C6(&(Global_2457699.f_4406), 0);
	unk_0x73817D396768E4C6(&(Global_2457699.f_4406), 2);
	Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_341 = 0;
	if (Global_2457699.f_4408 > 0)
	{
		unk_0x8C1CE4F676968E94(Global_2457699.f_4408);
	}
	Global_2457699.f_4407 = 0;
}

void func_600(int iParam0)
{
	Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_26 = iParam0;
}

int func_601()
{
	int iVar0;
	
	iVar0 = func_602();
	if (iVar0 > -1)
	{
		if (Local_193.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_602()
{
	int iVar0;
	
	if (Local_253[unk_0xA1238458CB587858() /*6*/].f_3 != -1)
	{
		return Local_253[unk_0xA1238458CB587858() /*6*/].f_3;
	}
	if (func_192(unk_0x3F80C6638E3A1A90()))
	{
		Local_253[unk_0xA1238458CB587858() /*6*/].f_3 = unk_0xA1238458CB587858();
		if (unk_0xA1238458CB587858() == Local_193.f_33)
		{
			func_573(1);
		}
	}
	else if (func_225(unk_0x3F80C6638E3A1A90(), 1))
	{
		iVar0 = func_386();
		if (iVar0 != func_61())
		{
			if (unk_0x6CCF9D473CE62808(iVar0))
			{
				Local_253[unk_0xA1238458CB587858() /*6*/].f_3 = unk_0x29593DF9A6CDD25E(iVar0);
			}
		}
	}
	return Local_253[unk_0xA1238458CB587858() /*6*/].f_3;
}

int func_603()
{
	return Local_193.f_0;
}

int func_604(int iParam0)
{
	return Local_253[iParam0 /*6*/];
}

int func_605()
{
	bool bVar0;
	
	func_610(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_609())
	{
		return 1;
	}
	if (Global_2442886)
	{
		return 1;
	}
	if (func_608())
	{
		return 1;
	}
	if (func_607(157))
	{
		if (!func_606())
		{
			return 1;
		}
	}
	if (func_607(155))
	{
		return 1;
	}
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_182() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_182()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_606()
{
	return Global_2432717.f_573;
}

int func_607(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_608()
{
	return Global_2440974;
}

bool func_609()
{
	return Global_2432717.f_568;
}

void func_610(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_611(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
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

void func_611(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_640(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(iVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(iVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_612(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_612(int iParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(iParam0))
		{
			if (unk_0x4F9572356C55E94C(iParam0))
			{
				unk_0x20BB4B94CC6DDC9A(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(iParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_613()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_614()
{
	if (!unk_0xB519E5386FBF69E5(iLocal_446, 6))
	{
		if (func_601() || func_330())
		{
			func_475(0, 4);
			unk_0x9956FB0E4B50ECB8(&iLocal_446, 6);
		}
	}
	func_627(3, 3, -1);
	if (unk_0x1EB88099AAF24BDE(unk_0xE7869D5D7816A9B6()) == iLocal_452)
	{
		unk_0x690C5239500171FE(unk_0xE7869D5D7816A9B6(), uLocal_454);
	}
	if (iLocal_748 > 0)
	{
		if (unk_0xB519E5386FBF69E5(Local_193.f_1, 3))
		{
			func_539(unk_0x3F80C6638E3A1A90(), 1, 0);
		}
	}
	func_626();
	if (Local_193.f_34 != -1)
	{
		if (unk_0xB519E5386FBF69E5(iLocal_446, 5))
		{
			if (unk_0xD18C3CF631455087(unk_0x0F810277E61B87AE(Local_193.f_34)))
			{
				func_349(unk_0x0F810277E61B87AE(Local_193.f_34), 432, 0);
				func_348(unk_0x0F810277E61B87AE(Local_193.f_34), 1, 0);
				func_347(unk_0x0F810277E61B87AE(Local_193.f_34), 0, 0);
				func_346(unk_0x0F810277E61B87AE(Local_193.f_34), 0);
				func_345(unk_0x0F810277E61B87AE(Local_193.f_34), Global_262145.f_10162, 0);
			}
		}
	}
	if (func_165(0))
	{
		func_164(0);
	}
	if (unk_0xB519E5386FBF69E5(iLocal_447, 0))
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_447, 2))
		{
			unk_0xD5181C7DAF762C60("DisableFlightMusic", 0);
			unk_0xD5181C7DAF762C60("WantedMusicDisabled", 0);
			unk_0xE72D045151F6CA70("BG_SIGHTSEER_STOP");
		}
	}
	unk_0x9956FB0E4B50ECB8(&iLocal_447, 8);
	func_161();
	unk_0x2BC407182CE3542C(1);
	func_573(0);
	func_616();
	unk_0x8C1CE4F676968E94(5);
	unk_0x73817D396768E4C6(&Global_2558590, 21);
	unk_0x73817D396768E4C6(&Global_2558590, 20);
	func_615();
}

void func_615()
{
	unk_0x52F20802944F8DCE();
}

void func_616()
{
	if (Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 == 164)
	{
		unk_0xC2D151904C72E95F(3, 1);
		unk_0xC2D151904C72E95F(5, 1);
	}
	if (Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 != -1)
	{
		Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 = -1;
		if (!unk_0xB519E5386FBF69E5(Global_1573875.f_1, 14) && !func_108(unk_0x3F80C6638E3A1A90()))
		{
			func_179(0);
		}
	}
	else if (func_624(unk_0x3F80C6638E3A1A90()) != -1)
	{
		func_600(-1);
	}
	if (unk_0xB519E5386FBF69E5(Global_1716604.f_3, 0))
	{
		unk_0x63EB72E192731928(1f);
		unk_0x8C1CE4F676968E94(5);
		unk_0x73817D396768E4C6(&(Global_1716604.f_3), 0);
	}
	if (func_259(func_623()))
	{
		func_622(-1);
	}
	else
	{
		func_618(-1);
	}
	func_176(19);
	func_176(20);
	func_176(21);
	func_176(22);
	func_176(27);
	func_164(3);
	func_164(4);
	func_164(7);
	func_617();
	if (func_193(unk_0x3F80C6638E3A1A90()))
	{
		func_573(0);
	}
	func_176(29);
	Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_50 = func_61();
	if (Global_2457699.f_4647.f_12 != 0)
	{
		Global_2457699.f_4647.f_12 = 0;
	}
	func_166();
	if (!func_108(unk_0x3F80C6638E3A1A90()))
	{
		func_175();
		unk_0x73817D396768E4C6(&(Global_1716604.f_3), 1);
	}
}

void func_617()
{
	if (func_196(unk_0x3F80C6638E3A1A90()))
	{
		func_176(25);
	}
}

void func_618(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_623();
	}
	if (iParam0 > 0)
	{
		if (func_386() != func_61())
		{
			if (func_621(unk_0x3F80C6638E3A1A90()) == unk_0x3F80C6638E3A1A90())
			{
				Global_2456723.f_27[func_620(iParam0)] = 1;
			}
		}
		iVar0 = func_620(159);
		if (func_619(iVar0, Global_262145.f_10413, 1))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(157);
		if (func_619(iVar0, Global_262145.f_10413, 1))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(148);
		if (func_619(iVar0, Global_262145.f_10413, 1))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(164);
		if (func_619(iVar0, Global_262145.f_10413, 1))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(142);
		if (func_619(iVar0, Global_262145.f_10413, 1))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(152);
		if (func_619(iVar0, Global_262145.f_10413, 1))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_619(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_160(unk_0x3F80C6638E3A1A90(), 19) && !func_160(unk_0x3F80C6638E3A1A90(), 20)) && !func_160(unk_0x3F80C6638E3A1A90(), 9))
		{
			return 0;
		}
	}
	if (Global_2456723.f_27[iParam0] == 1 && func_9(&(Global_2456723[iParam0 /*2*/])))
	{
		if (func_496(&(Global_2456723[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2456723.f_27[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 0;
		
		case 157:
			return 1;
		
		case 148:
			return 2;
		
		case 164:
			return 3;
		
		case 142:
			return 4;
		
		case 152:
			return 5;
		
		case 163:
			return 7;
		
		case 155:
			return 8;
		
		case 160:
			return 9;
		
		case 153:
			return 10;
		
		case 162:
			return 11;
		
		case 154:
			return 12;
		
		default:
	}
	return 6;
}

int func_621(int iParam0)
{
	return Global_1607618[iParam0 /*106*/].f_8.f_29;
}

void func_622(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_623();
	}
	if (iParam0 > 0)
	{
		if (func_386() != func_61())
		{
			Global_2456723.f_27[func_620(iParam0)] = 1;
		}
		iVar0 = func_620(155);
		if (func_619(iVar0, Global_262145.f_10414, 0))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(163);
		if (func_619(iVar0, Global_262145.f_10414, 0))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(160);
		if (func_619(iVar0, Global_262145.f_10414, 0))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(153);
		if (func_619(iVar0, Global_262145.f_10414, 0))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(162);
		if (func_619(iVar0, Global_262145.f_10414, 0))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_620(154);
		if (func_619(iVar0, Global_262145.f_10414, 0))
		{
			func_211(&(Global_2456723[iVar0 /*2*/]));
			func_8(&(Global_2456723[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_623()
{
	if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "GB_ROB_SHOP"))
	{
		return 154;
	}
	return 0;
}

int func_624(int iParam0)
{
	if (func_625(iParam0, 0))
	{
		return Global_1607618[iParam0 /*106*/].f_8.f_26;
	}
	return -1;
}

int func_625(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_26 != -1 || (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_626()
{
	unk_0xF6231EA8B0BD197C(uLocal_453);
	unk_0xF6231EA8B0BD197C(iLocal_452);
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	
	uVar0 = unk_0x959E7FA37C0D0892();
	Var1.f_0 = Global_1716613;
	Var1.f_1 = Global_1716613.f_1;
	Var1.f_2 = Global_1716613.f_2;
	Var1.f_3 = Global_1716613.f_3;
	Var1.f_4 = Global_1716613.f_4;
	Var1.f_5 = Global_1716613.f_5;
	Var1.f_6 = Global_1716613.f_6;
	Var1.f_7 = Global_1716613.f_7;
	Var1.f_8 = Global_1716613.f_8;
	Var1.f_9 = Global_1716613.f_9;
	Var1.f_10 = Global_1716613.f_10;
	Var1.f_11 = Global_1716613.f_11;
	Var1.f_12 = Global_1716613.f_12;
	Var1.f_13 = Global_1716613.f_14;
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0x04E7E853E31F41A3(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1716613.f_15;
			Var15.f_15 = Global_1716613.f_16;
			Var15.f_16 = Global_1716613.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (unk_0x04E7E853E31F41A3(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1716613.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (unk_0x04E7E853E31F41A3(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1716613.f_15;
			Var49.f_15 = iParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (unk_0x04E7E853E31F41A3(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1716613.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (unk_0x04E7E853E31F41A3(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1716613.f_15;
			Var82.f_15 = iParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (unk_0x04E7E853E31F41A3(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1716613.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
	}
	func_628();
}

void func_628()
{
	struct<18> Var0;
	
	Global_1716613 = { Var0 };
}

void func_629(struct<20> Param0)
{
	func_638(func_639(Param0.f_0), Param0);
	unk_0xFCFA396E73EBBE3E(3);
	func_636(0, -1, 0);
	unk_0xF7B58B81A69E540F(&Local_193, 60);
	unk_0x1AC0E3669E60AAAD(&Local_253, 193);
	if (!func_635())
	{
		func_614();
	}
	if (unk_0x00AAD79B42B3E036())
	{
		unk_0x8A10FCF639EC0104(0);
		if (unk_0xFA4B36553B2A7802())
		{
		}
		func_634();
		func_630(0, 0);
		Local_253[unk_0xA1238458CB587858() /*6*/] = 0;
	}
	else
	{
		func_614();
	}
}

void func_630(int iParam0, int iParam1)
{
	func_633();
	if ((iParam0 != 0 && unk_0xD18C3CF631455087(iParam1)) && func_632(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x9956FB0E4B50ECB8(&Global_1716599, 0);
				break;
			
			case 152:
				unk_0x9956FB0E4B50ECB8(&Global_1716599, 1);
				break;
			}
	}
	if (!func_595() && !func_225(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (func_326())
		{
			func_178(3);
		}
		func_178(4);
	}
	if (func_387(0))
	{
		Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_50 = func_386();
	}
	func_631();
}

void func_631()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330240.f_527[iVar0 /*46*/].f_1 = func_61();
		Global_1330240.f_527[iVar0 /*46*/].f_8 = 0;
		iVar0++;
	}
}

int func_632(int iParam0, bool bParam1)
{
	return func_261(unk_0x3F80C6638E3A1A90(), iParam0, bParam1);
}

void func_633()
{
	struct<14> Var0;
	
	Global_1716613 = { Var0 };
	Global_1716613.f_14 = 0;
	Global_1716613.f_15 = 0;
}

void func_634()
{
}

int func_635()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x00AAD79B42B3E036())
		{
			return 0;
		}
		if (unk_0x2953FEB47CBA6611())
		{
			return 1;
		}
		if (func_609())
		{
			return 0;
		}
		if (func_607(155))
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

int func_636(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_615();
			}
			else
			{
				return 0;
			}
		}
		if (!func_637())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x00AAD79B42B3E036())
				{
					if (!bParam2)
					{
						func_615();
					}
					else
					{
						return 0;
					}
				}
				if (func_609())
				{
					if (!bParam2)
					{
						func_615();
					}
					else
					{
						return 0;
					}
				}
				if (func_607(155))
				{
					if (!bParam2)
					{
						func_615();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAB63AB6154522A4E())
			{
				if (!bParam2)
				{
					func_615();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			if (!bParam2)
			{
				func_615();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAB63AB6154522A4E())
	{
		if (!bParam2)
		{
			func_615();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_637()
{
	return Global_1315884;
}

void func_638(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		func_615();
	}
	unk_0xE1306BF06D83921B(uParam0, 0, Param1.f_16);
}

int func_639(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

int func_640(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xD18C3CF631455087(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

