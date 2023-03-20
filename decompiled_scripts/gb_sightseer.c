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
	struct<18> Local_460 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 1015222895;
	var uLocal_484 = 1021665346;
	var uLocal_485 = 0;
	var uLocal_486 = 255;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = -1;
	var uLocal_496 = 996499522;
	var uLocal_497 = 1002740646;
	var uLocal_498 = 0;
	var uLocal_499 = 60;
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
	var uLocal_560 = 1016296636;
	var uLocal_561 = 220;
	var uLocal_562 = 255;
	var uLocal_563 = 255;
	var uLocal_564 = 255;
	var uLocal_565 = 255;
	var uLocal_566 = 255;
	var uLocal_567 = 255;
	var uLocal_568 = 4096;
	var uLocal_569 = 40;
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
	var uLocal_737 = 0;
	var uLocal_738 = 4;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 1065353216;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 1056964608;
	var uLocal_748 = 1056964608;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	struct<3> Local_755[20];
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
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
	iLocal_749 = -1;
	iLocal_750 = -1;
	iLocal_752 = -1;
	iLocal_753 = -1;
	if (unk_0xBBAE3E0C60A8AD4B() && func_649(unk_0xA34E7C2A5118D638(), 0, 1))
	{
		func_638(ScriptParam_0);
	}
	else
	{
		func_623();
	}
	while (true)
	{
		func_622();
		if (func_614())
		{
			func_623();
		}
		Global_1722053.f_2 = Local_194.f_58;
		Global_1722053.f_3 = Local_194.f_59;
		switch (func_613(unk_0x935FA14EDA695A82()))
		{
			case 0:
				if (func_612() == 1)
				{
					func_611();
					if (func_610())
					{
						func_605(142, 1);
						unk_0x60B57BC5E51D2074(3);
						if (!func_604())
						{
							unk_0xE4EAE8BD3FCBC676(unk_0xA34E7C2A5118D638(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_605(142, 0);
						unk_0xE4EAE8BD3FCBC676(unk_0xA34E7C2A5118D638(), joaat("pickup_portable_package"), 0);
					}
					Local_254[unk_0x935FA14EDA695A82() /*6*/] = 1;
				}
				else if (func_612() == 4)
				{
					Local_254[unk_0x935FA14EDA695A82() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_601())
				{
					Local_254[unk_0x935FA14EDA695A82() /*6*/] = 2;
				}
				if (func_612() == 1)
				{
					func_340();
					func_337();
					if (func_610() || func_336())
					{
						func_208(&(Global_1330242.f_527), &Global_1330242, 24, &(Global_1330242.f_1), &(Global_1330242.f_110), -1, 0);
					}
					func_166();
				}
				else if (func_612() == 4)
				{
					Local_254[unk_0x935FA14EDA695A82() /*6*/] = 3;
				}
				func_163();
				break;
			
			case 3:
				func_162(&(Local_194.f_49));
				if (func_161(&(Local_194.f_49)))
				{
					Local_254[unk_0x935FA14EDA695A82() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_254[unk_0x935FA14EDA695A82() /*6*/] = 4;
			
			case 4:
				func_623();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			switch (func_612())
			{
				case 0:
					if (func_154())
					{
						unk_0x3A7FF4BAFC26BDFD(&(Local_194.f_58), &(Local_194.f_59));
						Local_194.f_0 = 1;
						Local_194.f_33 = unk_0x935FA14EDA695A82();
						Local_194.f_34 = unk_0xA34E7C2A5118D638();
						func_605(142, 1);
					}
					break;
				
				case 1:
					func_152();
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
	if (Global_2458121.f_4648.f_11)
	{
		Global_2458121.f_4648.f_11 = 0;
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
	if (unk_0xDCC86F723E82125E(Local_194.f_1, 2))
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
			if (unk_0xDCC86F723E82125E(Local_194.f_1, 1))
			{
				Local_194.f_32 = 2;
			}
			else if (unk_0xDCC86F723E82125E(Local_194.f_1, 3))
			{
				Local_194.f_32 = 2;
			}
			else if (unk_0xDCC86F723E82125E(Local_194.f_1, 4))
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
		if (!unk_0xDCC86F723E82125E(Local_194.f_1, 6))
		{
			if (!func_9(&(Local_194.f_53)))
			{
				func_8(&(Local_194.f_53), 0, 0);
			}
			else if (func_6(&(Local_194.f_53), func_7(), 0))
			{
				unk_0x59A0729D503ED758(&(Local_194.f_1), 6);
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
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
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
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
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
		unk_0x59A0729D503ED758(&(Local_194.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_10400;
}

void func_12()
{
	int iVar0;
	
	if (Local_194.f_33 < 0)
	{
		return;
	}
	if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(Local_194.f_33)))
	{
		if (Local_254[Local_194.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_254[Local_194.f_33 /*6*/].f_4 - 1);
			if (!unk_0xDCC86F723E82125E(Local_194.f_4, iVar0))
			{
				Local_194.f_36 = iVar0;
				if (func_13())
				{
					unk_0x59A0729D503ED758(&(Local_194.f_4), iVar0);
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
	if (!unk_0x691BFDC1728FD714(Local_194.f_3))
	{
		unk_0x7567CEA8E6B5340B(iVar0);
		if (unk_0x0845149A26DABBA5(iVar0))
		{
			if (unk_0xCF4D671DF632C38B(1))
			{
				Var26 = { func_151() };
				if (func_14(Var26, 5f, &Local_456, &uLocal_459, Var1))
				{
					Local_194.f_3 = unk_0x75AC7E17D1B98C46(unk_0xCDFC81F8717B1517(joaat("pickup_portable_package"), Local_456, 1, iVar0));
					unk_0x636EE5A38E3EB8FF(unk_0x20FB0FABD3BC27F4(Local_194.f_3), Local_456 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x4BBD72565A0AF033(iVar0);
					unk_0xEE6504C7ECC425AB(unk_0x20FB0FABD3BC27F4(Local_194.f_3), 1);
					unk_0x8E0EBD39B751BCD5(unk_0x20FB0FABD3BC27F4(Local_194.f_3), 1);
					unk_0xBA56A0D247C4848D(unk_0x20FB0FABD3BC27F4(Local_194.f_3), 1);
					unk_0x3907D4738A2C8ABD(unk_0x20FB0FABD3BC27F4(Local_194.f_3), 0);
					unk_0xE457AC24AF211ECC(unk_0x20FB0FABD3BC27F4(Local_194.f_3));
					func_8(&(Local_194.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0x691BFDC1728FD714(Local_194.f_3))
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
	bool bVar83;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404919.f_1479 == *uParam0 || !Global_2404919.f_1479.f_1 == uParam0->f_1) || !Global_2404919.f_1479.f_2 == uParam0->f_2) || !Global_2404919.f_1482 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404919.f_1493 == uParam0->f_8 || !Global_2404919.f_1493.f_1 == uParam0->f_8.f_1) || !Global_2404919.f_1493.f_2 == uParam0->f_8.f_2) || !Global_2404919.f_1496 == uParam0->f_11) || !Global_2404919.f_1496.f_1 == uParam0->f_11.f_1) || !Global_2404919.f_1496.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404919.f_1493 == uParam0->f_8 || !Global_2404919.f_1493.f_1 == uParam0->f_8.f_1) || !Global_2404919.f_1493.f_2 == uParam0->f_8.f_2) || !Global_2404919.f_1496 == uParam0->f_11) || !Global_2404919.f_1496.f_1 == uParam0->f_11.f_1) || !Global_2404919.f_1496.f_2 == uParam0->f_11.f_2) || !Global_2404919.f_1499 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404919.f_1477 == 1)
		{
			if (unk_0xC2DCA35AE2EC9DC4(Global_2404919.f_1486))
			{
				if (Global_2404919.f_1486 == unk_0x46CF50E0E5A24635())
				{
					if (unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1483) < func_150())
					{
						return 0;
					}
				}
				else if (unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1483) < func_150())
				{
					return 0;
				}
			}
			unk_0xC3A69D572EE2C925();
			unk_0x02332225081EF060();
			func_149();
		}
		Global_2404919.f_1477 = 0;
	}
	else if (unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1483) > func_150())
	{
		Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
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
	unk_0x45A1CC0823F31402(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404919.f_1477)
	{
		unk_0xC3A69D572EE2C925();
		unk_0x02332225081EF060();
		func_149();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_148(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xD492CCF77B7A7F04())
		{
			Global_2404919.f_1500 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404919.f_1479 = { *uParam0 };
					Global_2404919.f_1482 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404919.f_1493 = { uParam0->f_8 };
					Global_2404919.f_1496 = { uParam0->f_11 };
					Global_2404919.f_1499 = 0f;
					Global_2404919.f_1479 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404919.f_1493 = { uParam0->f_8 };
					Global_2404919.f_1496 = { uParam0->f_11 };
					Global_2404919.f_1499 = uParam0->f_14;
					Global_2404919.f_1479 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_147(Var8.f_0, Var8.f_1);
			}
			Global_2404919.f_1478 = 1;
			Global_2404919.f_1477 = 1;
			Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
			Global_2404919.f_1483 = unk_0x2AA13A84EE2D3B24();
			Global_2404919.f_1486 = unk_0x46CF50E0E5A24635();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404919.f_1477)
	{
		if (Global_2404919.f_1478 == 1)
		{
			if (unk_0x41D85B8EF93F7B19(fVar4, fVar5, fVar6, fVar7) || unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1484) > 5000)
			{
				Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
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
					func_128(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_127(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404919.f_1478 = 9;
				}
				else
				{
					Global_2404919.f_1478 = 2;
				}
			}
		}
		if (Global_2404919.f_1478 == 2)
		{
			if ((unk_0xF7E9DAB0916EA609(Var11, Var14) || unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1484) > 15000) || unk_0x6D9A8DD490265E97(Var11, Var14) == 0)
			{
				Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
				if (uParam0->f_5 && !func_124(unk_0xA34E7C2A5118D638(), 0))
				{
					Global_2404919.f_1478 = 3;
				}
				else
				{
					Global_2404919.f_1478 = 4;
				}
			}
			else if (unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1488) > 7000)
			{
				func_123(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404919.f_1478 == 3)
		{
			if (func_122() || unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1484) > 10000)
			{
				Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
				Global_2404919.f_1478 = 4;
			}
		}
		if (Global_2404919.f_1478 == 4)
		{
			if (unk_0xD492CCF77B7A7F04())
			{
				unk_0xC3A69D572EE2C925();
				unk_0x02332225081EF060();
			}
			else
			{
				iVar0 = 0;
				func_117();
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
					if (!unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
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
							if (unk_0xCC0663FBB94045A9(unk_0xA34E7C2A5118D638(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
								Global_2404919.f_1478 = 5;
							}
							break;
						
						case 1:
							func_116(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xEE63EB474F7BF5CC(unk_0xA34E7C2A5118D638(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
								Global_2404919.f_1478 = 5;
							}
							break;
						
						case 2:
							if (unk_0xEE63EB474F7BF5CC(unk_0xA34E7C2A5118D638(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
								Global_2404919.f_1478 = 5;
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
					Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
					Global_2404919.f_1478 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x2FA752D42CA85369(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_116(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x7B73F3A4CD32B1CB(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x7B73F3A4CD32B1CB(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404919.f_1478 == 5)
		{
			if (func_54(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404919.f_1504.f_5)
				{
					Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
					Global_2404919.f_1478 = 6;
				}
				else
				{
					Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x949D03817D2A6977(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404919.f_1478 = 9;
				}
			}
			else if (unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1484) > 20000)
			{
				unk_0xC3A69D572EE2C925();
				unk_0x02332225081EF060();
				Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
				Global_2404919.f_1478 = 8;
			}
		}
		if (Global_2404919.f_1478 == 6)
		{
			iVar0 = 0;
			Global_2404919.f_1504.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_53(uParam0->f_4))
				{
					if (unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_52(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Var8)))
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
			Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
			Global_2404919.f_1478 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x2FA752D42CA85369(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_116(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x7B73F3A4CD32B1CB(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x7B73F3A4CD32B1CB(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404919.f_1478 == 7)
		{
			if (func_54(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404919.f_1612[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_127(Global_2404919.f_1612[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1612[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_50(Global_2404919.f_1612[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1612[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x6910AF369EAB6935(Global_2404919.f_1612[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1612[iVar17 /*3*/] };
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
				Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x949D03817D2A6977(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404919.f_1478 = 9;
			}
			else if (unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), Global_2404919.f_1484) > 20000)
			{
				Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
				Global_2404919.f_1478 = 8;
			}
		}
		if (Global_2404919.f_1478 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404919.f_468))
				{
				}
			}
			else if (Global_2404919.f_1504.f_2)
			{
				func_16(uParam2, &(Global_2404919.f_1504.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2404919.f_1479 };
				func_18(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404919.f_1484 = unk_0x2AA13A84EE2D3B24();
			Global_2404919.f_1478 = 9;
		}
		if (Global_2404919.f_1478 == 9)
		{
			Global_2404919.f_1477 = 0;
			unk_0xC3A69D572EE2C925();
			unk_0x02332225081EF060();
			func_149();
			return 1;
		}
		Global_2404919.f_1483 = unk_0x2AA13A84EE2D3B24();
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
						if (func_53(uParam5->f_4) || !unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_52(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_52(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Var65)))
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
		func_128(&Var0, &uVar3, &Var4);
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
					if (unk_0x32B7B9548CC32D81(Var0, &uVar61, 0))
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
				if (unk_0x32B7B9548CC32D81(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
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
			return func_50(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x6910AF369EAB6935(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_49(Param0, uParam3))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x644DD4E005495629(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_30(Global_2404919.f_481, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_22(*uParam3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(struct<3> Param0)
{
	int iVar0;
	
	if (func_27(unk_0xA34E7C2A5118D638(), 1))
	{
		if (Global_1613622.f_35377 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1613622.f_35377)
			{
				if (Global_1613622.f_35378[iVar0 /*40*/].f_7 != 0)
				{
					if (func_23(Param0, Global_1613622.f_35378[iVar0 /*40*/], Global_1613622.f_35378[iVar0 /*40*/].f_6, Global_1613622.f_35378[iVar0 /*40*/].f_7, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1613622.f_33179 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1613622.f_33179)
			{
				if (Global_1613622.f_33182[iVar0 /*89*/].f_16 != 0)
				{
					if (func_23(Param0, Global_1613622.f_33182[iVar0 /*89*/], Global_1613622.f_33182[iVar0 /*89*/].f_3, Global_1613622.f_33182[iVar0 /*89*/].f_16, 0.5f))
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
		fVar9 = unk_0xA3C5926D6E5619AE((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xA3C5926D6E5619AE((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xA3C5926D6E5619AE((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x6910AF369EAB6935(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x992E97D0A625A1A7(iParam0))
	{
		unk_0xA8349C905E4A8DE7(iParam0, fParam1, fParam2);
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
	if (Global_1587175[iParam0 /*410*/] == -1)
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
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

int func_30(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_43(Param0))
	{
		if (func_42(uParam3, bParam6, 0, 1))
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
		func_25(&Var0, 0f, 0f, unk_0xC6D38B918E72181E(0f, 360f));
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404919.f_1711[iVar0 /*3*/]) < fParam3)
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
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_41();
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_40(*uParam0, &(Global_2404919.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_34(&Var1, &(Global_2404919.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_33(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_34(&Var1, &(Global_2404919.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
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

void func_34(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_39(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404919.f_1709) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_39(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_39(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_31(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404919.f_1709) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_38(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_35(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_35(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_37(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x3CD093DDA8B5D04F(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_36(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_36(Var6, Var3) >= 0f)
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
		Var6 = { func_37(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_37(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x3CD093DDA8B5D04F(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_36(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_36(Var6, Var29) >= 0f)
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

float func_36(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_37(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_38(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_39(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_31(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_38(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_35(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xDBB7514BD5DF1D59(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_127(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_50(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x6910AF369EAB6935(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_40(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_127(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404919.f_1709) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_50(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x6910AF369EAB6935(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x6910AF369EAB6935(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x6910AF369EAB6935(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x6910AF369EAB6935(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_41()
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

int func_42(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407366[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407366[iVar0 /*17*/].f_16))
			{
				if (func_40(*uParam0, &(Global_2407366[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407366[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407366[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_34(&Var1, &(Global_2407366[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_42(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_34(&Var1, &(Global_2407366[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_43(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404919.f_484)
	{
		if (!func_47(unk_0xA34E7C2A5118D638(), 1))
		{
			return 1;
		}
		if (!func_46(Param0, 1008981770))
		{
			if (!func_42(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_42(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_45(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_44(&(Global_2404919.f_39[iVar0 /*12*/])) };
				if (!func_42(&Var1, 0, 0, 0))
				{
					if (!func_42(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_44(var uParam0)
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

int func_45(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404919.f_39[iVar0 /*12*/].f_9)
		{
			if (func_40(Param0, &(Global_2404919.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_46(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404919.f_39[iVar0 /*12*/].f_9)
		{
			if (func_40(Param0, &(Global_2404919.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_47(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_48(iParam0) != 0;
	}
	return func_27(iParam0, bParam1);
}

int func_48(int iParam0)
{
	if (func_649(iParam0, 0, 1))
	{
		return Global_2417071[iParam0 /*306*/].f_1;
	}
	return 0;
}

int func_49(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404919.f_1275 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404919.f_1275)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404919.f_1276[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404919.f_1276[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_50(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_51(&Param3, &Param6);
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

void func_51(var uParam0, var uParam1)
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

int func_52(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_53(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_54(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404919.f_1504.f_1 == 0 && Global_2404919.f_1504 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x77EDFD9096F9C44D(&(Global_2404919.f_1504.f_1)))
			{
				case 0:
					func_114(uParam1, uParam2);
					if (!Global_2404919.f_1504.f_2)
					{
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
								*(uParam0[0 /*3*/]) = { Global_2404919.f_1479 };
							}
							if (uParam1->f_5 && func_17(Global_2404919.f_468))
							{
								if (!Global_2404919.f_1504.f_5)
								{
									Global_2404919.f_1504.f_5 = 1;
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
							uParam0->f_10[0] = unk_0xC6D38B918E72181E(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_114(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xD492CCF77B7A7F04())
		{
			if (!unk_0x44F92D480FB64EE5())
			{
				if (unk_0x03C0B1BBC393AC78())
				{
					func_114(uParam1, uParam2);
					Global_2404919.f_1504.f_1 = unk_0xA563CDFEFA362B40();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x02332225081EF060();
				func_114(uParam1, uParam2);
				if (!Global_2404919.f_1504.f_2)
				{
					Global_2404919.f_1504.f_5 = 1;
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
		func_111(Global_2404919.f_512, &(Global_2404919.f_1504.f_31), &(Global_2404919.f_1504.f_64));
	}
	if (uParam2->f_7 && !Global_2404919.f_1504.f_4)
	{
		Global_2404919.f_1504.f_4 = 1;
		func_59(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404919.f_1504.f_1 > 0 || Global_2404919.f_1504 > 0)
	{
		if (uParam1->f_5 || unk_0xD492CCF77B7A7F04())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404919.f_1504.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404919.f_1504.f_3)
					{
						iVar4 = Global_2404919.f_1504.f_3 + 1;
					}
					if (iVar4 > (Global_2404919.f_1504.f_1 - 1))
					{
						iVar4 = (Global_2404919.f_1504.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xF1D0D0E323C9B768(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x91519238D22DD769(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x10FB336120A82F23(iVar4);
					}
					else
					{
						unk_0x0108E05776DA5978(iVar4, &iVar5);
					}
					func_59(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404919.f_1504.f_3 = iVar4;
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
			iVar4 = Global_2404919.f_1504.f_1;
		}
		if (Global_2404919.f_1504.f_1 == iVar4)
		{
			if (uParam1->f_5 && func_17(Global_2404919.f_468))
			{
				if (Global_2404919.f_1504.f_2)
				{
					func_16(uParam0, &(Global_2404919.f_1504.f_6));
					func_58(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404919.f_1479 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xC6D38B918E72181E(0f, 360f);
					func_58(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404919.f_1504.f_2)
			{
				func_16(uParam0, &(Global_2404919.f_1504.f_6));
				func_58(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x531444754C426278(0, Global_2404919.f_1504.f_1);
				unk_0xF1D0D0E323C9B768(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_55(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_58(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404919.f_1479 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xC6D38B918E72181E(0f, 360f);
					func_58(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404919.f_1479 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xC6D38B918E72181E(0f, 360f);
				func_58(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404919.f_1479 };
		if (uParam1->f_5 && func_17(Global_2404919.f_468))
		{
			if (!Global_2404919.f_1504.f_5)
			{
				Global_2404919.f_1504.f_5 = 1;
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
		uParam0->f_10[0] = unk_0xC6D38B918E72181E(0f, 360f);
		func_58(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_55(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_57(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2408332[iVar4])
	{
		if (func_56(Var1, &(Global_2407503[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_35(&Var1, Global_2407503[iVar4 /*92*/][iVar0 /*7*/], Global_2407503[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407503[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408332[8])
	{
		if (func_56(Var1, &(Global_2407503[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_35(&Var1, Global_2407503[iVar4 /*92*/][iVar0 /*7*/], Global_2407503[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407503[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_56(struct<3> Param0, var uParam3)
{
	return unk_0x6910AF369EAB6935(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_57(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408342[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408342[1])
	{
		if (Param0.f_0 < Global_2408346[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408342[2])
	{
		if (Param0.f_0 < Global_2408346[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408346[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408346[3])
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

void func_58(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404919.f_1612[(3 - iVar0) /*3*/] = { Global_2404919.f_1612[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404919.f_1612[0 /*3*/] = { Param0 };
}

void func_59(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
			if (unk_0xA3C5926D6E5619AE((Global_2404919.f_481.f_2 - Param0.f_2)) < 25f)
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
		if (func_108(unk_0xA34E7C2A5118D638()))
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
		if (!func_107(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x92FBBFCC5D0BB9F0(unk_0xC8B93D94F8954288(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x92FBBFCC5D0BB9F0(unk_0xC8B93D94F8954288(), Param0, 20f))
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
		if (!func_106(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_22(Param0))
		{
			bVar11 = false;
		}
	}
	if (bVar11)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_100(Param0, fParam3, uParam4->f_15, func_105(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404919.f_1;
		}
	}
	else if (!func_97(Param0, 25f, unk_0xA34E7C2A5118D638(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_96(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_96(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404919.f_621)
		{
			if (func_43(Global_2404919.f_481))
			{
				if ((!func_42(&Param0, 0, 0, 0) && !func_33(&Param0, 0, 0)) && !func_95(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_33(&Param0, 0, 0) && !func_95(&Param0, 0)) && !func_32(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_94(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_93(unk_0xA34E7C2A5118D638()) && func_91(unk_0xA34E7C2A5118D638())))
		{
			if (!func_90(&Param0, &(Global_2404919.f_1504.f_64), 0, 1065353216))
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
		if (!func_91(unk_0xA34E7C2A5118D638()))
		{
			if (!func_89(Param0, &(Global_2404919.f_1504.f_31), &(Global_2404919.f_1504.f_64), 1073741824))
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
	if (func_88(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_88(Param0))
			{
				if (func_17(Global_2404919.f_468))
				{
					if (func_46(Param0, 1f))
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
		if (func_87(Param0))
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
			if (unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x8F89BA1339F45476(unk_0x2F748CE5313AA2BB(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_55(&Param0, 0))
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
	else if (func_86(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var13.f_2 = 1176256410;
	bVar21 = false;
	bVar22 = false;
	iVar12 = 0;
	while (iVar12 < 3)
	{
		if (iVar7 >= Global_2404919.f_1504.f_6[iVar12 /*8*/])
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
						fVar0 = func_78(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_78(Param0, Global_2404919.f_1479, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar21 = true;
				}
				if ((func_17(Global_2404919.f_468) && iVar7 == Global_2404919.f_1504.f_6[iVar12 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar22)
					{
						fVar2 = func_76(Param0);
						bVar22 = true;
					}
					if (fVar2 < Global_2404919.f_1504.f_6[iVar12 /*8*/].f_2)
					{
						Var13.f_4 = { Param0 };
						Var13.f_7 = fParam3;
						Var13.f_0 = iVar7;
						Var13.f_1 = fVar0;
						Var13.f_2 = fVar2;
						func_75(Var13, iVar12);
						Global_2404919.f_1504.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404919.f_1504.f_6[iVar12 /*8*/] || (iVar7 == Global_2404919.f_1504.f_6[iVar12 /*8*/] && fVar0 > Global_2404919.f_1504.f_6[iVar12 /*8*/].f_1))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_1 = fVar0;
					func_75(Var13, iVar12);
					Global_2404919.f_1504.f_2 = 1;
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
					fVar5 = func_74(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_61(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_60(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_60(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar21 = true;
				}
				if (iVar7 > Global_2404919.f_1504.f_6[iVar12 /*8*/] || (iVar7 == Global_2404919.f_1504.f_6[iVar12 /*8*/] && fVar3 > Global_2404919.f_1504.f_6[iVar12 /*8*/].f_3))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_3 = fVar3;
					func_75(Var13, iVar12);
					Global_2404919.f_1504.f_2 = 1;
					return;
				}
			}
		}
		iVar12++;
	}
}

float func_60(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_61(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_649(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xA34E7C2A5118D638() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_64(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x07CBE0ED3114C7D8(iVar11) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
					{
						if (!unk_0x07CBE0ED3114C7D8(iVar11) == -1 || !func_47(unk_0xA34E7C2A5118D638(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar11) || !bParam6)
					{
						if (func_63(iVar11))
						{
							Var5 = { func_62(iVar11) };
							if (!iVar11 == unk_0xA34E7C2A5118D638())
							{
								Var8 = { unk_0xB699E6A8199A75AE(unk_0xCF4C00513A86E840(iVar11)) };
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
							fVar1 = unk_0x4F982ED5336EA899(Param0, Var5, 1);
							fVar2 = unk_0x4F982ED5336EA899(Param0, Var8, 1);
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

Vector3 func_62(int iParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
}

int func_63(int iParam0)
{
	if (unk_0x06FCE440581B1EC5(unk_0xCF4C00513A86E840(iParam0)) || Global_2417071[iParam0 /*306*/].f_241)
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (func_649(iParam0, 0, 1))
	{
		if (!func_72(iParam0))
		{
			if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam0))
			{
				if (!unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
				{
					if (func_27(unk_0xA34E7C2A5118D638(), 1))
					{
						if (!func_71(unk_0x07CBE0ED3114C7D8(iParam0), unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
				{
					if (!func_27(unk_0xA34E7C2A5118D638(), 1))
					{
						if (!func_65(iParam0))
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

int func_65(int iParam0)
{
	if (func_70(unk_0xA34E7C2A5118D638(), iParam0))
	{
		return 1;
	}
	Global_2457104 = { func_69(iParam0) };
	if (unk_0x45C7D789894EAE64(&Global_2457104))
	{
		return 1;
	}
	if (func_66(unk_0xA34E7C2A5118D638(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_68(iParam0);
	if (!iVar0 == func_67())
	{
		if (iVar0 == func_68(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	return -1;
}

int func_68(int iParam0)
{
	if (iParam0 != func_67())
	{
		return Global_1608811[iParam0 /*109*/].f_9;
	}
	return func_67();
}

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

int func_70(int iParam0, int iParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_69(iParam0) };
		Global_2457117 = { func_69(iParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
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
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return 1;
	}
	if (func_73())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_73()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

float func_74(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_649(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (!unk_0xD5DFCA69ACAA20E3())
			{
				if (unk_0x8EBAC9BC4005929D(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0));
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
		if (func_649(iVar1, 1, 1))
		{
			if (!func_124(iVar1, 0) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xA34E7C2A5118D638()))
				{
					if (func_63(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x07CBE0ED3114C7D8(iVar1) != unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))) || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x07CBE0ED3114C7D8(iVar1) != iParam7 || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
						{
							if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iVar1), 0));
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

void func_75(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404919.f_1504.f_6[iParam8 /*8*/] };
	Global_2404919.f_1504.f_6[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_75(Var0, iParam8 + 1);
	}
}

float func_76(struct<3> Param0)
{
	var uVar0;
	
	return func_77(Param0, &(Global_2404919.f_39), &uVar0);
}

float func_77(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404919.f_1709) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_78(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
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
		fVar0 = func_60(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_60(func_61(Param0, 1, 0, 0, 1), 0f, func_85(), func_83(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_60(func_81(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && !func_47(unk_0xA34E7C2A5118D638(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_60(func_80(Param0, unk_0xA34E7C2A5118D638(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_79(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_60(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_60(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_60(unk_0x2A488C176D52CCA5(Global_2404919.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_79(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xD4749C005D2B5C5D(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xF83DCD59A0276C94(uVar3))
	{
		unk_0xF1572137AFC1040D(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xA3C5926D6E5619AE((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_80(struct<3> Param0, int iParam3, int iParam4)
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
			if (func_649(iVar3, 0, 1))
			{
				if (unk_0x07CBE0ED3114C7D8(iVar3) != unk_0x07CBE0ED3114C7D8(iParam3) || (unk_0x07CBE0ED3114C7D8(iVar3) == -1 && unk_0x07CBE0ED3114C7D8(iParam3) == -1))
				{
					if (Global_2412494.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2412494.f_130[iVar2 /*3*/], Param0);
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

float func_81(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x06C00074433E3408(unk_0xC8B93D94F8954288(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x95CCECA3948CFE7B(uVar6[iVar2]))
		{
			if (!unk_0xB6900B8CB0ABBD2B(uVar6[iVar2]))
			{
				if (func_82(uVar6[iVar2]))
				{
					Var3 = { unk_0x44C17CCB85A88A1F(uVar6[iVar2], 1) };
					fVar1 = unk_0x4F982ED5336EA899(Param0, Var3, 1);
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

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xBD4278CDF5C53C71(uParam0);
	switch (unk_0x44AADBFB578FBE73(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x44AADBFB578FBE73(iVar0, Global_1574194[unk_0xA34E7C2A5118D638()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 0)
	{
		iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x44AADBFB578FBE73(iVar0, Global_1573905[iVar1]))
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

float func_83()
{
	if (func_84())
	{
		if ((unk_0xE924C2C283992918(Global_2404919.f_39.f_67) || unk_0xAF40E7422A6D9D80(Global_2404919.f_39.f_67)) || Global_2404919.f_39.f_67 == joaat("rhino"))
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

int func_84()
{
	if (Global_2404919.f_39.f_65 && !Global_2404919.f_39.f_295)
	{
		if (!func_72(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
	}
	return 0;
}

float func_85()
{
	if (func_84())
	{
		if ((unk_0xE924C2C283992918(Global_2404919.f_39.f_67) || unk_0xAF40E7422A6D9D80(Global_2404919.f_39.f_67)) || Global_2404919.f_39.f_67 == joaat("rhino"))
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

int func_86(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0xB3E60341E58EA2CF(Param0, fParam7)) || (fVar0 > 0f && unk_0x7F49B0A4EC76092E(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xDF38DD44307A8523(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xDF38DD44307A8523(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_87(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404919.f_39.f_55)
	{
		if (unk_0x8F89BA1339F45476(Global_2404919.f_39.f_56))
		{
			if (!unk_0xE836A83D85A0F1C3(Param0))
			{
				uVar0 = unk_0x2F748CE5313AA2BB(Param0);
				if (unk_0x8F89BA1339F45476(uVar0))
				{
					iVar1 = unk_0x8CD7753C6525EF44(uVar0);
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

int func_88(struct<3> Param0)
{
	switch (Global_2404919.f_1500)
	{
		case 0:
			return func_127(Param0, Global_2404919.f_1479, Global_2404919.f_1482, 0, 0);
			break;
		
		case 1:
			return func_50(Param0, Global_2404919.f_1493, Global_2404919.f_1496, 0, 0);
			break;
		
		case 2:
			return unk_0x6910AF369EAB6935(Param0, Global_2404919.f_1493, Global_2404919.f_1496, Global_2404919.f_1499, 0, 1);
			break;
	}
	return 0;
}

int func_89(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x6910AF369EAB6935(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_90(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_91(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_92(iParam0))
			{
				if (Global_1587175[iParam0 /*410*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_92(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_177 != 0;
}

int func_93(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		if (Global_1587175[iParam0 /*410*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404919.f_1612[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_95(var uParam0, bool bParam1)
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
				func_31(&Var0, Global_2404919.f_544, Global_2404919.f_547, 1036831949, 0);
				if (func_95(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_31(&Var0, Global_2404919.f_544, Global_2404919.f_547, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_96(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_649(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (!unk_0xD5DFCA69ACAA20E3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4F982ED5336EA899(func_62(unk_0xA34E7C2A5118D638()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8EBAC9BC4005929D(Param0, fParam3))
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
		if (func_649(iVar1, 1, 1))
		{
			if (!func_124(iVar1, 0) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xA34E7C2A5118D638()))
				{
					if ((func_63(iVar1) || !bParam10) && !Global_2417071[iVar1 /*306*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x07CBE0ED3114C7D8(iVar1) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x07CBE0ED3114C7D8(iVar1) != unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))) || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x4F982ED5336EA899(func_62(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x07CBE0ED3114C7D8(iVar1) != iParam8 || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
						{
							if (unk_0x4F982ED5336EA899(func_62(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
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

int func_97(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_99(Param0, fParam3, iParam4, iParam5) || func_98(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_98(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2412494.f_556[iVar0] == 0)
			{
				if (func_23(Param0, Global_2412494.f_426[iVar0 /*3*/], Global_2412494.f_523[iVar0], Global_2412494.f_556[iVar0], 1036831949))
				{
					if (func_649(iVar1, 0, 1) && func_649(iParam3, 0, 1))
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

int func_99(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_649(iVar1, 0, 1) && func_649(iParam4, 0, 1))
			{
				if (Global_2412494.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2412494.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_62(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2412494.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2412494.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_649(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_62(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_100(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404919.f_1 = 0;
	if (!func_97(Param0, 0.5f, unk_0xA34E7C2A5118D638(), 0, 0))
	{
		Global_2404919.f_1++;
		if (bParam5)
		{
			if (func_148(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
				if (!func_104(Param0, fParam12))
				{
					Global_2404919.f_1++;
					if (!func_22(Param0))
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
			if (func_148(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
				if (!func_104(Param0, fParam12))
				{
					Global_2404919.f_1++;
					if (!func_101(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404919.f_1++;
						if (!func_22(Param0))
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
		else if (func_148(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			if (!func_104(Param0, fParam12))
			{
				Global_2404919.f_1++;
				if (!func_101(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404919.f_1++;
					if (!func_22(Param0))
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

int func_101(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xA34E7C2A5118D638() == iVar1)
		{
			if ((func_649(iVar1, 1, 1) && func_63(iVar1)) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
			{
				if (!func_103(unk_0xA34E7C2A5118D638(), iVar1, -2, 0))
				{
					if (func_102(func_62(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_102(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x6910AF369EAB6935(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_104(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_649(iVar1, 1, 1) && func_63(iVar1)) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
		{
			if ((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && unk_0x07CBE0ED3114C7D8(iVar1) == -1) && !func_47(unk_0xA34E7C2A5118D638(), 1))
			{
				return 0;
			}
			else if ((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && !unk_0xA34E7C2A5118D638() == iVar1) || !func_103(unk_0xA34E7C2A5118D638(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_62(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(int iParam0)
{
	if ((Global_2404919.f_468 == 9 || Global_2404919.f_468 == 9) || (Global_2404919.f_468 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_106(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xA34E7C2A5118D638() != iVar1) || iParam8 == 0)
		{
			if (func_649(iVar1, bParam4, bParam5))
			{
				if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DC9BA2299B45EA6(unk_0xCF4C00513A86E840(iVar1)) && func_63(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) != unk_0x07CBE0ED3114C7D8(iVar1))) || unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
						{
							if (((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && iParam9) && bParam6) && func_65(iVar1))
							{
							}
							else if (unk_0x95CCECA3948CFE7B(unk_0xCF4C00513A86E840(iVar1)))
							{
								if (unk_0x4F982ED5336EA899(func_62(iVar1), Param0, 1) < fParam3)
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

int func_107(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_649(iVar1, 1, 1))
			{
				if ((!func_124(iVar1, 0) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1)) && iVar1 != unk_0xA34E7C2A5118D638())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x07CBE0ED3114C7D8(iVar1) == -1)
						{
							if (unk_0x07CBE0ED3114C7D8(iVar1) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x07CBE0ED3114C7D8(iVar1) == iVar3)
					{
						if (unk_0x4F982ED5336EA899(func_62(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
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

int func_108(int iParam0)
{
	if ((func_47(iParam0, 1) || func_110(iParam0)) || func_109(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/] != -1;
	}
	return 0;
}

void func_111(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xDCC86F723E82125E(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_113(&Var2, uParam3, iVar0);
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
				func_112(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_112(var uParam0, var uParam1, int iParam2)
{
	Global_2409253 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_112(&Global_2409253, uParam1, iParam2 + 1);
	}
}

void func_113(var uParam0, var uParam1, int iParam2)
{
	Global_2409249 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_113(&Global_2409249, uParam1, iParam2 + 1);
	}
}

void func_114(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404919.f_1275 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404919.f_1275)
		{
			if (func_115(Global_2404919.f_1276[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404919.f_1276[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404919.f_1276[iVar0 /*4*/] };
					fVar4 = unk_0x949D03817D2A6977(Var1.f_0, Var1.f_1);
				}
				func_59(Global_2404919.f_1276[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404919.f_1504++;
			}
			iVar0++;
		}
	}
}

int func_115(struct<3> Param0, var uParam3)
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

void func_116(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_51(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_117()
{
	func_121();
	func_120();
	func_119();
	func_118();
}

void func_118()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404919.f_1504.f_64[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_119()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404919.f_1504.f_31[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_120()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404919.f_1504.f_6[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_121()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404919.f_1504 = { Var0 };
}

var func_122()
{
	return Global_1310987.f_4;
}

void func_123(var uParam0, var uParam1)
{
	func_149();
	func_147(uParam0, uParam1);
}

bool func_124(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_125(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_125(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_126();
	}
	if (Global_1315889[iVar1] == 1)
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

int func_126()
{
	return Global_1312746;
}

bool func_127(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404919.f_1145 > 0 && func_146(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_129(uParam0, uParam1, uParam2);
	}
}

void func_129(var uParam0, var uParam1, var uParam2)
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
		if (func_145(uParam0, 1))
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
	Global_2409263.f_162 = 0;
	Global_2409263.f_163 = 0;
	Global_2409263.f_164 = -99;
	Global_2409263.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409263[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409263.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD4749C005D2B5C5D(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xF83DCD59A0276C94(iVar8))
		{
			unk_0xF1572137AFC1040D(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409263.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409263.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xDC19A0943990E2BE(iVar8)) || unk_0x9890022B30CAEA9E(iVar8))
			{
				unk_0x5A7F671E8FEC8193(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_95(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_144(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_143(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_48 && !func_145(&Var1, 0)) || uParam2->f_48 == 0)
													{
														Var1 = { func_141(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
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
																if ((uParam2->f_12 && !func_136(Var1, uVar4, uParam2->f_34, unk_0xA34E7C2A5118D638(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																				if (func_148(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_148(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_135(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																						iVar22 = func_134(Var1, uParam2->f_54, &fVar23);
																					}
																					if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																					{
																						if (uParam2->f_52)
																						{
																							if (iVar22 < uParam2->f_53)
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2409263.f_162)
																								{
																									Global_2409263[iVar16 /*3*/] = { 0f, 0f, 0f };
																									Global_2409263.f_121[iVar16] = 0f;
																									iVar16++;
																								}
																								Global_2409263.f_162 = 0;
																								uParam2->f_53 = iVar22;
																							}
																						}
																						if (uParam2->f_30)
																						{
																							if (Global_2409263.f_162 == 0)
																							{
																								Global_2409263[0 /*3*/] = { Var1 };
																								Global_2409263.f_121[0] = uVar4;
																							}
																							else
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2409263.f_162 + 1)
																								{
																									if (iVar16 < 40)
																									{
																										if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2409263[iVar16 /*3*/], *uParam0))
																										{
																											func_133(Var1, uVar4, iVar16);
																											iVar16 = Global_2409263.f_162 + 1;
																										}
																									}
																									iVar16++;
																								}
																							}
																							Global_2409263.f_162++;
																							if (Global_2409263.f_162 >= 5)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2409263.f_162 == 40)
																								{
																									iVar0 = 100;
																								}
																							}
																						}
																						else
																						{
																							Global_2409263[Global_2409263.f_162 /*3*/] = { Var1 };
																							Global_2409263.f_121[Global_2409263.f_162] = uVar4;
																							Global_2409263.f_162++;
																							if (func_143(Var1, uParam2))
																							{
																								Global_2409263.f_163++;
																							}
																							if (Global_2409263.f_162 >= 10)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2409263.f_162 == 40)
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
				if (Global_2409263.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409263[0 /*3*/] };
						*uParam1 = Global_2409263.f_121[0];
						return;
					}
					else
					{
						if (Global_2409263.f_163 > 0 && !Global_2409263.f_163 == Global_2409263.f_162)
						{
							func_131(0, uParam2);
						}
						iVar24 = unk_0x531444754C426278(0, Global_2409263.f_162);
						Var25 = { Global_2409263[0 /*3*/] };
						uVar28 = Global_2409263.f_121[0];
						Global_2409263[0 /*3*/] = { Global_2409263[iVar24 /*3*/] };
						Global_2409263.f_121[0] = Global_2409263.f_121[iVar24];
						Global_2409263[iVar24 /*3*/] = { Var25 };
						Global_2409263.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409263[0 /*3*/] };
						*uParam1 = Global_2409263.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_129(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x531444754C426278((1 + iVar15), (40 + iVar15));
						unk_0x936AF4FD28701A40(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_141(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (func_30(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), 1, 1) || func_145(&Var29, 1))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_129(uParam0, uParam1, uParam2);
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
				func_129(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_130(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409263.f_164 = iVar8;
	}
}

void func_130(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_97(*(uParam0[iVar2 /*4*/]), 5f, unk_0xA34E7C2A5118D638(), 0, 0))
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

void func_131(int iParam0, var uParam1)
{
	if (!func_143(Global_2409263[iParam0 /*3*/], uParam1))
	{
		Global_2409263.f_162 = (Global_2409263.f_162 - 1);
		func_132(iParam0);
		if (Global_2409263.f_162 > Global_2409263.f_163)
		{
			func_131(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_131(iParam0 + 1, uParam1);
	}
}

void func_132(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409263[iParam0 /*3*/] = { Global_2409263[iParam0 + 1 /*3*/] };
			Global_2409263.f_121[iParam0] = Global_2409263.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_133(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409263[iParam4 /*3*/] };
	uVar3 = Global_2409263.f_121[iParam4];
	Global_2409263[iParam4 /*3*/] = { Param0 };
	Global_2409263.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2409263.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_133(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_134(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_64(iVar5))
		{
			Var1 = { func_62(iVar5) };
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

int func_135(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xA34E7C2A5118D638() != iVar1) || iParam9 == 0)
		{
			if (func_649(iVar1, bParam5, bParam6))
			{
				if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
				{
					if (!bParam8 || (!unk_0x2DC9BA2299B45EA6(unk_0xCF4C00513A86E840(iVar1)) && func_63(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) != unk_0x07CBE0ED3114C7D8(iVar1))) || unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
						{
							if (((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && iParam10) && bParam7) && func_65(iVar1))
							{
							}
							else if (unk_0x95CCECA3948CFE7B(unk_0xCF4C00513A86E840(iVar1)))
							{
								if (func_23(func_62(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_136(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_140(Param0, uParam3, iParam4, iParam5, iParam6) || func_137(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_137(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_139(Param0, iParam4, Global_2412494.f_426[iVar0 /*3*/], Global_2412494.f_556[iVar0]))
			{
				if (func_138(Param0, uParam3, iParam4, Global_2412494.f_426[iVar0 /*3*/], Global_2412494.f_523[iVar0], Global_2412494.f_556[iVar0]))
				{
					if (func_649(iVar1, 0, 1) && func_649(iParam5, 0, 1))
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

int func_138(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
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
	fVar20 = unk_0xA3C5926D6E5619AE((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xA3C5926D6E5619AE((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xA3C5926D6E5619AE((Var17.f_2 - Var14.f_2));
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

int func_139(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
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

int func_140(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_649(iVar1, 0, 1) && func_649(iParam5, 0, 1))
			{
				if (Global_2412494.f_260[iVar0])
				{
					if (func_23(Global_2412494.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_23(func_62(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2412494.f_260[iVar0])
			{
				if (func_23(Global_2412494.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_649(iVar1, 0, 1))
			{
				if (func_23(func_62(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_141(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_142(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x5A7F671E8FEC8193(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x65F6010085EF51A2(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
		if (!func_142(Param0, *uParam3, Param6))
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
	Var0 = { unk_0xE79F1883B253E5B8(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xD22ECBFDBD33149F(Param0, *uParam3, &Var24))
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

int func_142(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_25(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_36(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_143(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_127(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_50(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x6910AF369EAB6935(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_144(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_57(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409054[iVar1])
	{
		if (func_56(Param0, &(Global_2408351[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409054[8])
	{
		if (func_56(Param0, &(Global_2408351[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_145(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404919.f_22.f_16)
	{
		switch (Global_2404919.f_22.f_15)
		{
			case 0:
				if (func_127(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_50(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x6910AF369EAB6935(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, Global_2404919.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_39(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, Global_2404919.f_22.f_14, Global_2404919.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_146(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404919.f_1145 > 0)
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
			if (func_145(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2409263.f_162 = 0;
		Global_2409263.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409263[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409263.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404919.f_1145)
		{
			Var1 = { Global_2404919.f_1146[iVar0 /*4*/] };
			uVar4 = Global_2404919.f_1146[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_136(Var1, uVar4, uParam2->f_34, unk_0xA34E7C2A5118D638(), 0, uParam2->f_56)) || !uParam2->f_12)
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
									if (func_148(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_148(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0) && !func_135(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_134(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409263.f_162)
													{
														Global_2409263[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409263.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409263.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409263.f_162 == 0)
												{
													Global_2409263[0 /*3*/] = { Var1 };
													Global_2409263.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409263.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2409263[iVar5 /*3*/], *uParam0))
															{
																func_133(Var1, uVar4, iVar5);
																iVar5 = Global_2409263.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409263.f_162++;
												if (Global_2409263.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404919.f_1145;
													}
													else if (Global_2409263.f_162 == 40)
													{
														iVar0 = Global_2404919.f_1145;
													}
												}
											}
											else
											{
												Global_2409263[Global_2409263.f_162 /*3*/] = { Var1 };
												Global_2409263.f_121[Global_2409263.f_162] = uVar4;
												Global_2409263.f_162++;
												if (Global_2409263.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404919.f_1145;
													}
													else if (Global_2409263.f_162 == 40)
													{
														iVar0 = Global_2404919.f_1145;
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
		if (Global_2409263.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409263[0 /*3*/] };
				*uParam1 = Global_2409263.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409263.f_163 > 0 && !Global_2409263.f_163 == Global_2409263.f_162)
				{
					func_131(0, uParam2);
				}
				iVar13 = unk_0x531444754C426278(0, Global_2409263.f_162);
				Var14 = { Global_2409263[0 /*3*/] };
				uVar17 = Global_2409263.f_121[0];
				Global_2409263[0 /*3*/] = { Global_2409263[iVar13 /*3*/] };
				Global_2409263.f_121[0] = Global_2409263.f_121[iVar13];
				Global_2409263[iVar13 /*3*/] = { Var14 };
				Global_2409263.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409263[0 /*3*/] };
				*uParam1 = Global_2409263.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_146(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_129(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_147(var uParam0, var uParam1)
{
	unk_0xCA4925D67C6E146C(uParam0, uParam1, 0.1f);
	Global_2404919.f_1487 = unk_0x46CF50E0E5A24635();
	Global_2404919.f_1485 = 1;
	Global_2404919.f_1488 = unk_0x2AA13A84EE2D3B24();
}

int func_148(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB3E60341E58EA2CF(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x7F49B0A4EC76092E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x7F49B0A4EC76092E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDF38DD44307A8523(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x2E895CA0C4A6EC85(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_106(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_96(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404919++;
	return 1;
}

void func_149()
{
	if (Global_2404919.f_1485)
	{
		if (unk_0x46CF50E0E5A24635() == Global_2404919.f_1487)
		{
			unk_0x603FBFDBF020E318();
		}
		else
		{
			unk_0x603FBFDBF020E318();
		}
		Global_2404919.f_1485 = 0;
	}
}

int func_150()
{
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 10000;
	}
	return 1000;
}

Vector3 func_151()
{
	return Local_194.f_38[Local_194.f_36 /*3*/];
}

void func_152()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_194.f_0 != 4)
	{
		iLocal_449 = 0;
		while (iLocal_449 < unk_0x55191629F1199760())
		{
			if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iLocal_449)))
			{
				iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iLocal_449));
				if (func_649(iVar2, 1, 1))
				{
				}
				if (!unk_0xDCC86F723E82125E(Local_194.f_1, 1))
				{
					if (unk_0xDCC86F723E82125E(Local_254[iLocal_449 /*6*/].f_1, 2))
					{
						if (Local_194.f_37 != iVar2)
						{
							Local_194.f_37 = iVar2;
						}
					}
				}
				if (!unk_0xDCC86F723E82125E(Local_194.f_1, 1))
				{
					if (Local_254[iLocal_449 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_254[iLocal_449 /*6*/].f_5);
					}
				}
				if (!unk_0xDCC86F723E82125E(Local_194.f_1, 4))
				{
					if (unk_0xDCC86F723E82125E(Local_254[iLocal_449 /*6*/].f_1, 5))
					{
						unk_0x59A0729D503ED758(&(Local_194.f_1), 4);
						Local_194.f_35 = iVar2;
					}
				}
				if (!unk_0xDCC86F723E82125E(Local_194.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0xDCC86F723E82125E(Local_194.f_1, 1) || unk_0xDCC86F723E82125E(Local_194.f_1, 3)) || unk_0xDCC86F723E82125E(Local_194.f_1, 4)) || unk_0xDCC86F723E82125E(Local_194.f_1, 5))
						{
							if (!unk_0xDCC86F723E82125E(Local_254[iLocal_449 /*6*/].f_1, 4))
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
			else if (!unk_0xDCC86F723E82125E(Local_194.f_1, 5))
			{
				if (Local_194.f_33 > -1)
				{
					if (iLocal_449 == Local_194.f_33)
					{
						unk_0x59A0729D503ED758(&(Local_194.f_1), 5);
					}
				}
			}
			iLocal_449++;
		}
		if (!unk_0xDCC86F723E82125E(Local_194.f_1, 1))
		{
			iVar0 = (iVar0 + Local_194.f_6);
			if (iVar0 >= func_153())
			{
				unk_0x59A0729D503ED758(&(Local_194.f_1), 1);
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
		if (!unk_0xDCC86F723E82125E(Local_194.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0x59A0729D503ED758(&(Local_194.f_1), 2);
			}
		}
	}
}

int func_153()
{
	return Global_262145.f_10402;
}

int func_154()
{
	int iVar0;
	int iVar1;
	
	if (func_158() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_157(Local_194.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x531444754C426278(0, 20);
				if (func_155(iVar1))
				{
					Local_194.f_38[iVar0 /*3*/] = { Local_755[iVar1 /*3*/] };
					Local_755[iVar1 /*3*/] = { 0f, 0f, 0f };
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
		if (func_157(Local_194.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_155(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_157(Local_755[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_157(Local_194.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0x4F982ED5336EA899(Local_194.f_38[iVar0 /*3*/], Local_755[iParam0 /*3*/], 1);
				if (fVar1 < func_156())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_156()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_10403);
}

bool func_157(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_158()
{
	int iVar0;
	
	if (Local_194.f_48 != -1)
	{
		return Local_194.f_48;
	}
	iVar0 = unk_0x531444754C426278(0, 4);
	if (!func_160(iVar0))
	{
		Local_194.f_48 = iVar0;
		func_159();
	}
	return Local_194.f_48;
}

void func_159()
{
	switch (Local_194.f_48)
	{
		case 0:
			Local_755[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			Local_755[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			Local_755[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_755[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_755[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_755[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_755[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_755[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			Local_755[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_755[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			Local_755[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_755[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_755[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			Local_755[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			Local_755[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_755[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_755[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			Local_755[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_755[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_755[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			Local_755[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			Local_755[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			Local_755[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_755[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_755[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			Local_755[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			Local_755[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			Local_755[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_755[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_755[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_755[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_755[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			Local_755[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_755[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_755[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_755[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_755[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			Local_755[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_755[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			Local_755[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			Local_755[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			Local_755[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			Local_755[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			Local_755[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_755[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_755[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			Local_755[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			Local_755[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			Local_755[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_755[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			Local_755[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			Local_755[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			Local_755[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			Local_755[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			Local_755[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			Local_755[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			Local_755[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			Local_755[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_755[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			Local_755[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			Local_755[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			Local_755[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			Local_755[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_755[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			Local_755[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			Local_755[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			Local_755[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			Local_755[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_755[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			Local_755[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			Local_755[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			Local_755[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_755[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			Local_755[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			Local_755[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			Local_755[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_755[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			Local_755[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			Local_755[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			Local_755[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10345;
		
		case 1:
			return Global_262145.f_10346;
		
		case 2:
			return Global_262145.f_10344;
		
		case 3:
			return Global_262145.f_10343;
		
		default:
	}
	return 0;
}

int func_161(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x736DBE187CFCC863())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_163()
{
	func_165();
	if (unk_0xDCC86F723E82125E(iLocal_448, 9))
	{
		return;
	}
	if (func_610())
	{
		if (!unk_0xDCC86F723E82125E(iLocal_448, 0))
		{
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
			unk_0x59A0729D503ED758(&iLocal_448, 0);
		}
		if (!unk_0xDCC86F723E82125E(iLocal_448, 1))
		{
			if (unk_0x233432976E597324("BG_SIGHTSEER_START"))
			{
				unk_0x59A0729D503ED758(&iLocal_448, 1);
			}
		}
		if (unk_0xDCC86F723E82125E(iLocal_448, 1))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_448, 3))
			{
				if (Local_194.f_5 == 1)
				{
					if (unk_0x233432976E597324("BG_SIGHTSEER_MID"))
					{
						unk_0x59A0729D503ED758(&iLocal_448, 3);
					}
				}
			}
		}
		if (unk_0xDCC86F723E82125E(iLocal_448, 3))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_448, 4))
			{
				if (Local_194.f_5 == 2)
				{
					if (unk_0x233432976E597324("BG_SIGHTSEER_FINAL"))
					{
						unk_0x59A0729D503ED758(&iLocal_448, 4);
					}
				}
			}
		}
		if (unk_0xDCC86F723E82125E(Local_194.f_1, 1) || unk_0xDCC86F723E82125E(Local_194.f_1, 4))
		{
			if (unk_0xDCC86F723E82125E(iLocal_448, 4))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_448, 6))
				{
					if (unk_0x233432976E597324("BG_SIGHTSEER_STOP"))
					{
						unk_0x59A0729D503ED758(&iLocal_448, 6);
						unk_0x59A0729D503ED758(&iLocal_448, 2);
						unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
						unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_336())
	{
		if (func_164(unk_0xA34E7C2A5118D638(), 20))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_448, 0))
			{
				unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
				unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
				unk_0x59A0729D503ED758(&iLocal_448, 0);
			}
			if (!unk_0xDCC86F723E82125E(iLocal_448, 7))
			{
				if (unk_0x233432976E597324("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0x59A0729D503ED758(&iLocal_448, 7);
				}
			}
			if (unk_0xDCC86F723E82125E(Local_194.f_1, 1) || unk_0xDCC86F723E82125E(Local_194.f_1, 4))
			{
				if (unk_0xDCC86F723E82125E(iLocal_448, 7))
				{
					if (!unk_0xDCC86F723E82125E(iLocal_448, 6))
					{
						if (unk_0x233432976E597324("BG_SIGHTSEER_STOP"))
						{
							unk_0x59A0729D503ED758(&iLocal_448, 6);
							unk_0x59A0729D503ED758(&iLocal_448, 2);
							unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
							unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_164(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

void func_165()
{
	if (unk_0xDCC86F723E82125E(iLocal_448, 8))
	{
		if (unk_0xDCC86F723E82125E(iLocal_448, 9))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_448, 10))
			{
				if (unk_0xDCC86F723E82125E(iLocal_448, 11))
				{
					if (!unk_0xDCC86F723E82125E(iLocal_448, 12))
					{
						unk_0x384EC102F362C893(1);
						unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xDCC86F723E82125E(iLocal_448, 15))
				{
					if (unk_0x233432976E597324("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x59A0729D503ED758(&iLocal_448, 15);
					}
				}
				if (unk_0xDCC86F723E82125E(iLocal_448, 15))
				{
					if (!unk_0xDCC86F723E82125E(iLocal_448, 13))
					{
						if (unk_0x233432976E597324("APT_FADE_IN_RADIO"))
						{
							unk_0x59A0729D503ED758(&iLocal_448, 13);
						}
					}
					if (unk_0xDCC86F723E82125E(iLocal_448, 13))
					{
						unk_0x59A0729D503ED758(&iLocal_448, 10);
					}
				}
			}
		}
	}
}

void func_166()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_610() && !func_336())
	{
		return;
	}
	if (Local_194.f_34 > -1)
	{
		iVar3 = unk_0x20A20BF765914E37(Local_194.f_34);
		if (unk_0xDF73DA5E2287C499(iVar3))
		{
			Var0 = { unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iVar3), 0) };
		}
	}
	if (!func_157(Var0, 0f, 0f, 0f, 0))
	{
		func_167(142, Var0, &uLocal_823, 1140457472, 1144750080, 0);
	}
}

void func_167(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_110(unk_0xA34E7C2A5118D638()) && !func_207(unk_0xA34E7C2A5118D638())) && !unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 8)) && (func_206(unk_0xA34E7C2A5118D638()) || func_205(unk_0xA34E7C2A5118D638())))
	{
		return;
	}
	Global_1722044 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param1);
	func_201(iParam0, fVar0);
	if (unk_0x2BF05095F2389894() && unk_0x45D1BEB329799891() == 15)
	{
		if (func_200(unk_0xA34E7C2A5118D638()) || func_198(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0x997F946EBE927086(1344549371))
			{
				unk_0xDB617B399FCCE424(1344549371);
			}
		}
		else if (unk_0x997F946EBE927086(1344549371))
		{
			unk_0x7876EF2FBBB49635(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_197(unk_0xA34E7C2A5118D638(), 21))
		{
			func_196(Param1, 1, 0);
		}
		if (!*uParam4 && func_649(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			*uParam4 = 1;
			if (func_195(iParam0))
			{
				unk_0xFD62177C7242216E(func_194(iParam0));
				if (func_193(iParam0))
				{
					unk_0x60B57BC5E51D2074(0);
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
					{
						unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 1);
						unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 1);
					}
					unk_0x59A0729D503ED758(&(Global_1722044.f_3), 0);
				}
			}
			if (func_192(iParam0))
			{
				fVar1 = func_191(iParam0);
				if (fVar1 != 1f)
				{
					func_188(fVar1);
					unk_0x59A0729D503ED758(&(Global_1722044.f_3), 1);
				}
			}
			if (!Global_2391042)
			{
				if (func_187(iParam0) && func_200(unk_0xA34E7C2A5118D638()))
				{
					func_186(1);
					func_185(2);
				}
			}
			func_184(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_164(unk_0xA34E7C2A5118D638(), 19))
			{
				func_183(19);
			}
		}
		if (*uParam4 && func_649(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			*uParam4 = 0;
			if (func_195(iParam0))
			{
				if (unk_0xDCC86F723E82125E(Global_1722044.f_3, 0))
				{
					unk_0xFD62177C7242216E(1f);
					unk_0x60B57BC5E51D2074(5);
					unk_0x77621132305B133B(&(Global_1722044.f_3), 0);
				}
			}
			if (func_192(iParam0))
			{
				func_182();
				unk_0x77621132305B133B(&(Global_1722044.f_3), 1);
			}
			if (iParam7 && !func_110(unk_0xA34E7C2A5118D638()))
			{
				if (func_181(unk_0xA34E7C2A5118D638()) != 152)
				{
					func_170();
				}
			}
			if (func_169(2))
			{
				func_186(0);
				func_168(2);
			}
		}
	}
}

void func_168(int iParam0)
{
	unk_0x77621132305B133B(&(Global_2458121.f_4648.f_16), iParam0);
}

bool func_169(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4648.f_16, iParam0);
}

void func_170()
{
	Global_2404919.f_20 = { Global_2406723 };
	Global_2404919.f_22 = { Global_2406725 };
	func_179();
	func_171(1, 1);
}

void func_171(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406742 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406742 };
		Global_2404919.f_39.f_49 = { Global_2406742.f_49 };
		Global_2404919.f_39.f_52 = Global_2406742.f_52;
		Global_2404919.f_39.f_53 = Global_2406742.f_53;
	}
	if (bParam0)
	{
		func_178();
	}
	func_174(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
	func_173(0);
	func_172();
}

void func_172()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x46CF50E0E5A24635())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_173(bool bParam0)
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

void func_174(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		Global_2404919.f_1137 = iParam10;
		func_176();
		func_175(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1140 = iParam3;
		Global_2404919.f_1141 = iParam4;
		Global_2404919.f_1138 = iParam5;
		Global_2404919.f_1139 = iParam6;
		Global_2404919.f_1142 = iParam7;
		Global_2404919.f_1143 = iParam8;
		Global_2404919.f_1144 = iParam9;
	}
	else
	{
		func_176();
		func_175(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409431 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x46CF50E0E5A24635();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_176()
{
	func_177();
	Global_2404919.f_631 = 0;
}

void func_177()
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

void func_178()
{
	Global_2404919.f_347 = { Global_2407050 };
}

void func_179()
{
	func_180();
	Global_2404919.f_1275 = 0;
}

void func_180()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404919.f_1276[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_181(int iParam0)
{
	if (func_109(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_28;
	}
	return -1;
}

void func_182()
{
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && Global_2458121.f_4643 < 1f)
		{
			return;
		}
	}
	Global_2458121.f_4644 = -1;
	Global_2458121.f_4643 = 1f;
}

void func_183(int iParam0)
{
	unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

void func_184(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

void func_185(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_16), iParam0);
}

void func_186(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_187(int iParam0)
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

void func_188(float fParam0)
{
	float fVar0;
	
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_189())
	{
		return;
	}
	fVar0 = (Global_2458121.f_4643 - fParam0);
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && unk_0xA3C5926D6E5619AE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2458121.f_4643 = fParam0;
	Global_2458121.f_4644 = unk_0x46CF50E0E5A24635();
}

int func_189()
{
	switch (func_190())
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

int func_190()
{
	return Global_25115;
}

float func_191(int iParam0)
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

int func_192(int iParam0)
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

int func_193(int iParam0)
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

float func_194(int iParam0)
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

int func_195(int iParam0)
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

void func_196(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

bool func_197(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

int func_198(int iParam0)
{
	if (func_199(iParam0))
	{
		if (func_200(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	if (iParam0 != func_67())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_67())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_164(iParam0, 9);
	}
	return 0;
}

void func_201(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_202();
	}
}

void func_202()
{
	if (!func_203(unk_0xA34E7C2A5118D638()))
	{
		func_184(25);
	}
}

bool func_203(int iParam0)
{
	return func_164(iParam0, 25);
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10420;
		
		case 142:
			return Global_262145.f_10408;
		
		case 157:
			return Global_262145.f_10375;
		
		case 159:
			return Global_262145.f_10358;
		
		case 162:
			return Global_262145.f_10469;
		
		default:
	}
	return -1;
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 7);
	}
	return 0;
}

bool func_207(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 2);
}

void func_208(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_326(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_324() || iParam2 == 24)
	{
		if (func_280(uParam1, iParam2, uParam3, Global_1573681, 0, func_322()))
		{
			func_279(1);
			if ((!func_277() && !func_275()) || unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
			{
				if (func_274())
				{
					func_271();
				}
				else
				{
					unk_0xF799955FDE53592F(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_270(1);
						Global_1573681 = 0;
						iVar54 = -1;
						if (Global_1573829 != 1)
						{
							func_269(uParam1);
							if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
							{
								unk_0x77621132305B133B(&(uParam3->f_33), 7);
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
								if (func_649(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
									if (!func_124(iVar35, 0))
									{
										if ((unk_0x139A9C4D61DFD52E(iVar35, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar35 /*306*/].f_232 != -1) || func_92(iVar35))
										{
											iVar44 = iVar35;
											if (func_199(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_266(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_264(unk_0xA34E7C2A5118D638(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_262())
							{
								if (func_649(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
								}
								else
								{
									iVar35 = func_67();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_261(iVar35) && func_256(iVar35, iParam2)) && func_649(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
								Var38 = { func_251(iVar35) };
								if (iVar35 == unk_0xA34E7C2A5118D638())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x74C5CB21CF9F1178(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_69(iVar35) };
								iVar37 = func_245(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
								}
								Global_1573681++;
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
									if (!func_262())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_240(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_239(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_233(iVar35, 0);
								if (bVar34)
								{
									if (func_232(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_231(iParam5))
								{
									func_230(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_230(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x59A0729D503ED758(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x20A20BF765914E37(iVar52);
							if (func_649(iVar35, 0, 1) && !unk_0xDCC86F723E82125E(iVar49, iVar35))
							{
								iVar35 = unk_0x20A20BF765914E37(iVar52);
							}
							else
							{
								iVar35 = func_67();
							}
							if (func_261(iVar35))
							{
								if (func_649(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
									Var38 = { func_251(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_69(iVar35) };
									iVar37 = func_245(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
									}
									Global_1573681++;
									iVar51 = func_233(iVar35, 1);
									if (bVar34)
									{
										if (func_232(iVar35, 1))
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
									func_222(unk_0x74C5CB21CF9F1178(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							func_219(uParam3, uParam1);
						}
						func_218(&(uParam3->f_21));
						func_217();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 7))
						{
							func_216(uParam3, uParam1);
							func_215(uParam1, 0, 1);
							unk_0x59A0729D503ED758(&(uParam3->f_33), 7);
						}
						func_216(uParam3, uParam1);
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							unk_0x59A0729D503ED758(&(uParam3->f_33), 11);
						}
						if (func_211(uParam3))
						{
							Global_1573829 = 1;
						}
						func_209(uParam3);
						if (Global_1573829 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573829 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xF518F3C7FACD43B7(*uParam1))
					{
						unk_0x7F1F2564B5CE06AF(7);
						unk_0x06D856499865F31F(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F1F2564B5CE06AF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_217();
			func_270(0);
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 7);
			}
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 10))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xFA99CE7438CDE58B();
}

void func_209(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_218(&(uParam0->f_21));
		func_210(0);
	}
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573829 != 2)
		{
			Global_1573829 = 2;
		}
	}
	else
	{
		switch (Global_1573829)
		{
			case 0:
				Global_1573829 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_211(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x20A20BF765914E37(uParam0->f_37);
	if (iVar15 != func_67() && func_649(iVar15, 0, 1))
	{
		Var2 = { func_69(iVar15) };
		iVar1 = func_214(uParam0, uParam0->f_37);
		if (func_213(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_212(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_212(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_212(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_212(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x186143F44A45035A(&Var2))
						{
							iVar16 = 1;
							func_212(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_212(uParam0, iVar0, 0);
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

void func_212(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_213(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xB622E0FF38C89E7E(&uParam0, 13);
}

var func_214(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_215(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7C38F93AF52620B1(*uParam0, "COLLAPSE"))
	{
		unk_0x0139C89EE907A315(iParam1);
		unk_0xD013AC29829DDC02();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_216(var uParam0, var uParam1)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_33, 10))
	{
		unk_0x7C38F93AF52620B1(*uParam1, "SET_HIGHLIGHT");
		unk_0x65960B4E2ADC9F6D(uParam0->f_35);
		unk_0xD013AC29829DDC02();
		unk_0x59A0729D503ED758(&(uParam0->f_33), 10);
	}
}

void func_217()
{
	if (Global_1573829 != 0)
	{
		Global_1573829 = 0;
	}
}

void func_218(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_219(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar0);
		if (iVar2 != func_67())
		{
			if (func_649(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_221(uParam0->f_38[iVar0 /*2*/], 0);
					func_220(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587175[iVar0 /*410*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "SET_ICON"))
		{
			unk_0x65960B4E2ADC9F6D(iParam1);
			unk_0x65960B4E2ADC9F6D(iParam2);
			if (iParam2 == 65)
			{
				unk_0x65960B4E2ADC9F6D(iParam3);
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

int func_221(int iParam0, bool bParam1)
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

void func_222(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_229() && iParam3 < func_228())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7C38F93AF52620B1(*uParam1, sVar1))
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_227("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(iParam9);
			}
			func_227(sParam0);
			unk_0x65960B4E2ADC9F6D(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_227("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(65);
			}
			unk_0x65960B4E2ADC9F6D(-1);
			func_227("");
			if (uParam2->f_108 == 6)
			{
				func_227("");
			}
			else
			{
				func_227(&sParam4);
			}
			unk_0x0139C89EE907A315(uParam2->f_36);
			unk_0x36D5E26AC42570A3(sParam8);
			unk_0x36D5E26AC42570A3(sParam8);
			if (func_226(uParam2))
			{
				func_225("DPAD_FRIEND");
			}
			else if (func_224(uParam2))
			{
				func_225("DPAD_FRIEND");
			}
			else if (func_223(uParam2))
			{
				func_225("DPAD_CREW");
			}
			else
			{
				func_225("");
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

bool func_223(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 6);
}

bool func_224(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 5);
}

void func_225(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

int func_226(var uParam0)
{
	if (func_224(uParam0) && func_223(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_227(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(sParam0);
}

int func_228()
{
	int iVar0;
	
	if (Global_1573683)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_229()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573683)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_230(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_229() && iParam2 < func_228())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573683)
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
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			if (unk_0x7C38F93AF52620B1(*uParam0, sVar1))
			{
				unk_0x65960B4E2ADC9F6D(iParam2);
				if (unk_0xDCC86F723E82125E(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_227("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					func_225(sParam15);
				}
				else
				{
					func_227(&(uParam1->f_1));
				}
				unk_0x65960B4E2ADC9F6D(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_227("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(65);
				}
				if (iParam11 == 1)
				{
					unk_0x65960B4E2ADC9F6D(iVar0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(-1);
				}
				if (func_262())
				{
					func_227("");
				}
				else if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 5 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if ((uParam1->f_108 == 7 && !unk_0xB8A06E7E729EED0A(sParam15)) && !unk_0xB8A06E7E729EED0A(sParam16))
				{
					unk_0x276F16E002D00C0C("FM_AE_TWO_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0xCE59E3E42586D52D(sParam16);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 8 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
				{
					unk_0x276F16E002D00C0C("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x36E8D9048E194806(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6DC80A902A91958F(iParam9);
					}
					unk_0xCE59E3E42586D52D(&(uParam1->f_104));
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x276F16E002D00C0C("FM_AE_CASH");
					unk_0x5CDA8F588F01C361(iParam9, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
					{
						func_225(&(uParam1->f_104));
					}
					else
					{
						func_227("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam13, 6);
					unk_0x354E2E7AA52E941F();
				}
				else if (fParam12 != -1f)
				{
					unk_0x276F16E002D00C0C("NUMBER");
					unk_0x36E8D9048E194806(fParam12, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam9 != -1)
				{
					unk_0x65960B4E2ADC9F6D(iParam9);
				}
				else
				{
					func_227("");
				}
				if (uParam1->f_108 == 6)
				{
					func_227("");
				}
				else
				{
					func_227(&sParam3);
				}
				unk_0x0139C89EE907A315(uParam1->f_36);
				if (iParam11 == 1 || unk_0xB8A06E7E729EED0A(sParam7))
				{
					func_227("");
					func_227("");
				}
				else
				{
					unk_0x36D5E26AC42570A3(sParam7);
					unk_0x36D5E26AC42570A3(sParam7);
				}
				if (func_226(uParam1))
				{
					func_225("DPAD_FRIEND");
				}
				else if (func_224(uParam1))
				{
					func_225("DPAD_FRIEND");
				}
				else if (func_223(uParam1))
				{
					func_225("DPAD_CREW");
				}
				else
				{
					func_225("");
				}
				unk_0xD013AC29829DDC02();
			}
		}
	}
}

int func_231(int iParam0)
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

bool func_232(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_199(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_67();
}

int func_233(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_110(iParam0)) && !func_238(iParam0))
	{
		iVar0 = func_237();
	}
	iVar1 = func_236(iParam0);
	if (!iVar1 == -1)
	{
		return func_234(iVar1);
	}
	return iVar0;
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = func_235(iParam0);
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

var func_235(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_236(int iParam0)
{
	if (!iParam0 == func_67())
	{
		if (func_232(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_68(iParam0)];
		}
	}
	return -1;
}

int func_237()
{
	return 21;
}

bool func_238(int iParam0)
{
	return func_164(iParam0, 20);
}

char* func_239(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xC3D849E6E05C31A7())
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
			if (unk_0xC3D849E6E05C31A7())
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

int func_240(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_244(iParam3))
	{
		*fParam1 = (func_241(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_231(iParam3))
	{
		*fParam1 = (func_241(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_241(int iParam0, int iParam1)
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
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_243(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_242(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_242(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_243(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_244(int iParam0)
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

int func_245(int iParam0)
{
	int iVar0;
	
	iVar0 = func_248(iParam0);
	if (iVar0 == -1)
	{
		func_246(iParam0, 1);
		return 0;
	}
	Global_1348409[iVar0 /*5*/].f_4 = 1;
	return Global_1348409[iVar0 /*5*/].f_2;
}

void func_246(int iParam0, bool bParam1)
{
	if (!func_649(iParam0, 0, 1))
	{
		return;
	}
	if (func_248(iParam0) != -1)
	{
		return;
	}
	if (Global_1348572)
	{
		if (iParam0 == Global_1348572.f_1)
		{
			return;
		}
	}
	if (func_247(iParam0))
	{
		return;
	}
	if (Global_1348610 >= 32)
	{
		return;
	}
	Global_1348577[Global_1348610] = iParam0;
	Global_1348610++;
	if (bParam1)
	{
	}
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348610)
	{
		if (Global_1348577[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	if (!func_649(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348570 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348570)
	{
		if (Global_1348409[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x09EE7867D5A6100E(Global_1348409[iVar0 /*5*/].f_2) && unk_0x1A48755EDAA1BFA6(Global_1348409[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_249(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_249(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348570)
	{
		return;
	}
	if (unk_0x09EE7867D5A6100E(Global_1348409[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348409[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xC607197AF4E3A5B7(Global_1348409[iParam0 /*5*/].f_2), 64);
			unk_0xE0F13AAF9FB19B4B(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0AF52A8B5613FE81(Global_1348409[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348570)
	{
		Global_1348409[iVar32 /*5*/] = { Global_1348409[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_250(&(Global_1348409[iVar32 /*5*/]));
	Global_1348570 = (Global_1348570 - 1);
}

void func_250(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_67();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uParam0->f_3 = unk_0x2AA13A84EE2D3B24();
	}
}

struct<4> func_251(int iParam0)
{
	struct<4> Var0;
	
	if (func_649(iParam0, 0, 1))
	{
		Global_2457104 = { func_69(iParam0) };
		if (unk_0xF7FE713C9F786F8C())
		{
			if (func_213(Global_2457104))
			{
				if (!unk_0x3084526A863D7966(&Global_2457104))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE028438B8B6A57B6(0))
		{
			return Var0;
		}
		if (func_255(&Global_2457104))
		{
			Global_2457034 = { func_253(iParam0) };
			func_252(&Global_2457034, &Var0);
		}
	}
	return Var0;
}

void func_252(var uParam0, var uParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, uParam1);
}

struct<35> func_253(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_254(iParam0))
	{
		return Global_1315945[unk_0xA34E7C2A5118D638() /*35*/];
	}
	Var0 = { func_69(iParam0) };
	unk_0x59E0C66A4FA07806(&Var13, 35, &Var0);
	return Var13;
}

int func_254(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0)
{
	if (unk_0x5AA202D345A0E889())
	{
		if (unk_0x14F2268F2CD21E48() && unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_207(iParam0) || func_260(iParam0)) || func_259(iParam0))
		{
			return 0;
		}
	}
	if (!func_258(iParam0))
	{
		return 0;
	}
	if ((!func_257(iParam0) && Global_2417071[iParam0 /*306*/].f_232 == -1) && !func_92(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)
{
	if (func_649(iParam0, 0, 1))
	{
		if (func_649(unk_0xA34E7C2A5118D638(), 0, 1))
		{
			if (unk_0x139A9C4D61DFD52E(iParam0, unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_258(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_128, 22);
}

bool func_259(int iParam0)
{
	if (func_207(iParam0))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8);
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10) || unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9));
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_67())
	{
		return 0;
	}
	if (func_124(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xDCC86F723E82125E(Global_1587175[iVar0 /*410*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_262()
{
	switch (func_263(unk_0xA34E7C2A5118D638()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_238(unk_0xA34E7C2A5118D638()))
	{
		switch (func_181(unk_0xA34E7C2A5118D638()))
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

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/];
	}
	return -1;
}

int func_264(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 && func_265(Global_1608811[iParam0 /*109*/].f_9.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1)
	{
		if (func_265(Global_1608811[iParam0 /*109*/].f_9.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0)
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

void func_266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_649(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			iVar1 = unk_0x20A20BF765914E37(iVar0);
			if (!func_124(iVar1, 0))
			{
				if ((unk_0x139A9C4D61DFD52E(iVar1, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar1 /*306*/].f_232 != -1) || func_92(iVar1))
				{
					if (func_267(iVar1, iParam1, 0))
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

int func_267(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_67())
	{
		if (!bParam2)
		{
			if (func_268(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608811[iParam0 /*109*/].f_9 != func_67())
		{
			return iParam1 == Global_1608811[iParam0 /*109*/].f_9;
		}
	}
	return 0;
}

int func_268(int iParam0, int iParam1)
{
	if (iParam1 != func_67())
	{
		if (iParam0 != func_67())
		{
			if (Global_1608811[iParam0 /*109*/].f_9 != func_67())
			{
				if (Global_1608811[iParam0 /*109*/].f_9 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_269(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x65960B4E2ADC9F6D(0);
		unk_0xD013AC29829DDC02();
	}
}

void func_270(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338608.f_2 == 0)
		{
			Global_1338608.f_2 = 1;
		}
	}
	else if (Global_1338608.f_2 == 1)
	{
		Global_1338608.f_2 = 0;
	}
}

void func_271()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
	{
		if (func_273())
		{
			func_272();
		}
	}
}

void func_272()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 != 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_273()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

int func_274()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0) && func_273())
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1) && func_273())
	{
		return 1;
	}
	return 0;
}

int func_275()
{
	if (func_273())
	{
		if (func_276(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_277()
{
	if (func_273())
	{
		if (func_278(Global_2426867.f_2138[0 /*72*/].f_1))
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

void func_279(int iParam0)
{
	Global_1338608.f_1 = Global_1338608;
	Global_1338608 = iParam0;
}

int func_280(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_321(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_320();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_319())
		{
			if (func_318() > 0 && Global_1573683)
			{
				unk_0x7662B6FB19655462();
				unk_0x416AE03EAAA9AE80(fVar7);
				unk_0x68A38902ADFD05FE(18);
				if (unk_0xB45DF29A98EEAD5D())
				{
					unk_0x0CD0751316BC99F7();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_306())
		{
			func_305(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
	{
		func_305(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_318() == 1)
		{
			func_304(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_305(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xB45DF29A98EEAD5D())
		{
			unk_0x0CD0751316BC99F7();
		}
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_318() == 0 && !bParam5))
		{
			func_305(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_303();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x7662B6FB19655462();
				}
				unk_0x68A38902ADFD05FE(18);
			}
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 0))
			{
				Global_1573681 = uParam3;
				Global_1573680 = 1;
				unk_0x416AE03EAAA9AE80(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573682)
					{
						unk_0x77621132305B133B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_303();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x7662B6FB19655462();
					}
					unk_0x68A38902ADFD05FE(18);
				}
				unk_0x416AE03EAAA9AE80(fVar7);
				if (func_304(bVar6, uParam0, 0))
				{
					func_269(uParam0);
					sVar4 = func_301(iParam1, &(Global_1613622.f_68795), bParam4);
					if (bParam4)
					{
						func_298(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_291(uParam0, func_295(uParam2), func_292(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_288(uParam0, func_290(), func_289(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573682;
						func_298(uParam0, sVar4, "", 0, -1, Global_1573682, 1);
					}
					else
					{
						Var0 = { func_286(iParam1) };
						iVar8 = func_281(iParam1);
						func_298(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x59A0729D503ED758(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_285())
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
			if (func_284(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 20;
			}
			if (func_283(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_282(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_282(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 4;
}

bool func_283(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

bool func_284(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_285()
{
	return Global_1613622.f_1 == 0;
}

struct<4> func_286(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_287(unk_0xA34E7C2A5118D638()) || func_282(unk_0xA34E7C2A5118D638()))
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
			StringIntConCat(&Var0, Global_1613622.f_22, 16);
			break;
	}
	return Var0;
}

bool func_287(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 5;
}

void func_288(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_225(sParam1);
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_225("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_289()
{
	switch (func_181(unk_0xA34E7C2A5118D638()))
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

char* func_290()
{
	switch (func_181(unk_0xA34E7C2A5118D638()))
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

void func_291(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_225(sParam1);
		}
		else if (func_263(unk_0xA34E7C2A5118D638()) == 133)
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT_C");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_225("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_292(var uParam0)
{
	int iVar0;
	
	iVar0 = func_263(unk_0xA34E7C2A5118D638());
	if (func_294())
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
			switch (func_293())
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

int func_293()
{
	if (func_263(unk_0xA34E7C2A5118D638()) == 133)
	{
		return Global_2458121.f_4635;
	}
	return -1;
}

bool func_294()
{
	return Global_1587174;
}

char* func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = func_263(unk_0xA34E7C2A5118D638());
	if (func_294())
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
			if (func_297() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_297() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_293())
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
			if (func_296() == 1)
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

int func_296()
{
	return Global_2458121.f_4638;
}

int func_297()
{
	if (func_263(unk_0xA34E7C2A5118D638()) == 132)
	{
		return Global_2458121.f_4633;
	}
	return -1;
}

void func_298(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_227(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x276F16E002D00C0C(sParam1);
			unk_0x6DC80A902A91958F(iParam5);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_225(sParam1);
		}
		if (func_319() && iParam6)
		{
			if (func_300())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x276F16E002D00C0C("LBD_DPD_CNT");
			unk_0x6DC80A902A91958F(iVar0);
			unk_0x6DC80A902A91958F(iVar1);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_225(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam4);
			if (func_299(unk_0xA34E7C2A5118D638()))
			{
				unk_0x65960B4E2ADC9F6D(166);
			}
		}
		unk_0xD013AC29829DDC02();
	}
}

int func_299(int iParam0)
{
	if (func_284(iParam0) || func_283(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_300()
{
	return Global_1573683;
}

char* func_301(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_302();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB8A06E7E729EED0A(uParam1))
	{
		if (Global_1573847 == 1)
		{
			Global_1573847 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
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

char* func_302()
{
	if (unk_0x94D4FEDA7822E39D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x59F25675A261768C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6CD7F99044C6563E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x70620CD9F8A7C758())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_303()
{
	Global_36522 = 1;
}

bool func_304(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_matchmaking_card");
	}
	return unk_0xF518F3C7FACD43B7(*uParam1);
}

void func_305(var uParam0, var uParam1, bool bParam2)
{
	unk_0x77621132305B133B(&(uParam1->f_33), 7);
	Global_1573681 = 0;
	func_217();
	Global_1573680 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_218(&(uParam1->f_19));
		}
	}
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0xEF145906684E3D72(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam1->f_33, 0))
	{
		unk_0x77621132305B133B(&(uParam1->f_33), 0);
	}
	unk_0x416AE03EAAA9AE80(0f);
}

int func_306()
{
	if (func_317())
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	if (!func_314())
	{
		return 0;
	}
	if (!func_312())
	{
		return 0;
	}
	if (func_311(8, -1))
	{
		return 0;
	}
	if (func_318() == 2)
	{
		return 0;
	}
	if (Global_2458121.f_4397)
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	else if (!func_27(unk_0xA34E7C2A5118D638(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_309(1) || func_307(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (func_72(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (Global_1710055)
	{
		return 0;
	}
	if (func_169(0))
	{
		return 0;
	}
	return 1;
}

int func_307(bool bParam0)
{
	if (unk_0x5E9D81C7387C86AE())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (func_308(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0139E142C27412BC(0, 25) || unk_0x0139E142C27412BC(0, 68))
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
	if (unk_0x0139E142C27412BC(0, 19) || (!bParam0 && unk_0x69ED83B6DEBA60F9(0, 19)))
	{
		return 1;
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (((unk_0x0139E142C27412BC(0, 166) || unk_0x0139E142C27412BC(0, 167)) || unk_0x0139E142C27412BC(0, 168)) || unk_0x0139E142C27412BC(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x69ED83B6DEBA60F9(0, 166) || unk_0x69ED83B6DEBA60F9(0, 167)) || unk_0x69ED83B6DEBA60F9(0, 168)) || unk_0x69ED83B6DEBA60F9(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C0EF9FA1B336D64())
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_309(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_310()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

bool func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

int func_312()
{
	if (func_313() == 0)
	{
		return 1;
	}
	return 0;
}

int func_313()
{
	return Global_1312466.f_18;
}

int func_314()
{
	if (func_315())
	{
		return 1;
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 0;
	}
	if (unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240())
	{
		return 0;
	}
	if (unk_0x0B7B1F8E572996A4())
	{
		return 0;
	}
	return 1;
}

bool func_315()
{
	return Global_1312438;
}

bool func_316()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 5;
}

bool func_317()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_318()
{
	return Global_1338611.f_68;
}

int func_319()
{
	if (Global_1573682 > 16)
	{
		return 1;
	}
	return 0;
}

float func_320()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5EC483EC6D05F31E()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_321(int iParam0)
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

int func_322()
{
	if (func_323(unk_0xA34E7C2A5118D638()))
	{
		return Global_1318847;
	}
	return 0;
}

int func_323(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_124(iParam0, 0))
		{
			return unk_0x1E3906AEA0BF5747(iParam0);
		}
	}
	return 0;
}

int func_324()
{
	if (func_322())
	{
		return 1;
	}
	if (func_259(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_294())
	{
		return 1;
	}
	if (func_110(unk_0xA34E7C2A5118D638()))
	{
		switch (func_263(unk_0xA34E7C2A5118D638()))
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
				if (!func_325(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_325(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_325(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 4);
}

int func_326(int iParam0)
{
	if ((iParam0 == 24 && func_110(unk_0xA34E7C2A5118D638())) && !func_238(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_109(unk_0xA34E7C2A5118D638(), 0) && func_238(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
		if (func_327(unk_0xA34E7C2A5118D638()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_110(iParam0) && !func_207(iParam0)) && !unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8));
	bVar2 = func_238(iParam0);
	uVar3 = func_335();
	uVar4 = func_329();
	if ((bVar1 && (func_206(iParam0) || func_205(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_200(iParam0)) && !func_328(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2458121.f_4648.f_18 != iVar0)
	{
		Global_2458121.f_4648.f_18 = iVar0;
	}
	return iVar0;
}

bool func_328(int iParam0)
{
	return func_164(iParam0, 19);
}

int func_329()
{
	if ((func_164(unk_0xA34E7C2A5118D638(), 21) || func_164(unk_0xA34E7C2A5118D638(), 22)) || func_332())
	{
		return 1;
	}
	if (func_330())
	{
		func_184(22);
		return 1;
	}
	return 0;
}

int func_330()
{
	if (func_109(unk_0xA34E7C2A5118D638(), 0))
	{
		if ((func_335() && !func_331()) || func_197(unk_0xA34E7C2A5118D638(), 21))
		{
			if (!func_164(unk_0xA34E7C2A5118D638(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_183(27);
		}
	}
	return 0;
}

bool func_331()
{
	return Global_1312416.f_1;
}

bool func_332()
{
	return func_333(267, -1);
}

int func_333(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_334(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_126();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

bool func_335()
{
	return Global_1312416;
}

bool func_336()
{
	return unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 1);
}

void func_337()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_338(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_338(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 10))
	{
		if (Local_194.f_34 > -1)
		{
			if (func_336())
			{
				if (!func_329())
				{
					if (!unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 5))
					{
						if (!unk_0xDCC86F723E82125E(Local_194.f_1, 4))
						{
							if (unk_0x95CCECA3948CFE7B(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0x96209AADF56E8FE8(Var0.f_0))
									{
										uVar11 = unk_0x4D3C2AC8339BFB4F(Var0.f_0);
										if (unk_0xA815CBE767EFA3CB(uVar11))
										{
											iVar12 = unk_0x8ACC9D9AC6076DCB(uVar11);
											if (iVar12 == unk_0x20A20BF765914E37(Local_194.f_34))
											{
												if (unk_0x95CCECA3948CFE7B(Var0.f_1))
												{
													if (unk_0x96209AADF56E8FE8(Var0.f_1))
													{
														uVar10 = unk_0x4D3C2AC8339BFB4F(Var0.f_1);
														if (unk_0xA815CBE767EFA3CB(uVar10))
														{
															iVar13 = unk_0x8ACC9D9AC6076DCB(uVar10);
															if (iVar13 == unk_0xA34E7C2A5118D638())
															{
																unk_0x59A0729D503ED758(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 5);
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
	if (func_336())
	{
		if (!func_164(unk_0xA34E7C2A5118D638(), 20))
		{
			if (unk_0x95CCECA3948CFE7B(Var0.f_0))
			{
				if (unk_0x96209AADF56E8FE8(Var0.f_0))
				{
					uVar11 = unk_0x4D3C2AC8339BFB4F(Var0.f_0);
					if (unk_0xA815CBE767EFA3CB(uVar11))
					{
						iVar12 = unk_0x8ACC9D9AC6076DCB(uVar11);
						if (unk_0x95CCECA3948CFE7B(Var0.f_1))
						{
							if (unk_0x96209AADF56E8FE8(Var0.f_1))
							{
								uVar10 = unk_0x4D3C2AC8339BFB4F(Var0.f_1);
								if (unk_0xA815CBE767EFA3CB(uVar10))
								{
									iVar13 = unk_0x8ACC9D9AC6076DCB(uVar10);
									if (iVar13 == unk_0xA34E7C2A5118D638())
									{
										if (unk_0xC8D96C5ECEABA5D0(iVar12))
										{
											if (func_232(iVar12, 1))
											{
												if (Local_194.f_33 > -1)
												{
													iVar14 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(Local_194.f_33));
													if (func_267(iVar12, iVar14, 1))
													{
														func_339(0);
														func_202();
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

void func_339(int iParam0)
{
	if (!func_238(unk_0xA34E7C2A5118D638()))
	{
		if (iParam0 || func_327(unk_0xA34E7C2A5118D638()) != 0)
		{
			func_184(20);
			if (func_110(unk_0xA34E7C2A5118D638()))
			{
				if (!unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 8))
				{
					unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 8);
				}
			}
		}
	}
}

void func_340()
{
	switch (Local_254[unk_0x935FA14EDA695A82() /*6*/].f_2)
	{
		case 0:
			func_488();
			func_341();
			if (Local_194.f_32 == 2)
			{
				Local_254[unk_0x935FA14EDA695A82() /*6*/].f_2 = 2;
			}
			else if (Local_194.f_32 == 3)
			{
				Local_254[unk_0x935FA14EDA695A82() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_341();
			if (Local_194.f_32 == 3)
			{
				Local_254[unk_0x935FA14EDA695A82() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_623();
			break;
	}
}

void func_341()
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
	iVar5 = func_67();
	iVar6 = func_67();
	iVar7 = func_67();
	if (!unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 4))
	{
		if (!unk_0xDCC86F723E82125E(uLocal_447, 9))
		{
			if (unk_0xDCC86F723E82125E(Local_194.f_1, 1))
			{
				if (unk_0x935FA14EDA695A82() == Local_194.f_33 || func_611() == Local_194.f_33)
				{
					if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
					{
						sVar8 = func_487();
						iVar9 = func_486(unk_0xA34E7C2A5118D638());
						func_484(85, "GB_WINNER", "BIGM_SGHTYD", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
					{
						func_483(1, 1);
						unk_0x59A0729D503ED758(&iLocal_447, 6);
					}
					func_400(142, 1, &Var0);
					unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
				}
				else if (func_336())
				{
					if (func_232(unk_0xA34E7C2A5118D638(), 1))
					{
						if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
						{
							sVar8 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
							iVar9 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
							func_484(86, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
						{
							func_483(0, 2);
							unk_0x59A0729D503ED758(&iLocal_447, 6);
						}
						func_400(142, 0, &Var0);
					}
					else
					{
						if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
						{
							sVar8 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
							iVar9 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
							func_484(86, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
						{
							func_483(0, 2);
							unk_0x59A0729D503ED758(&iLocal_447, 6);
						}
						func_400(142, 0, &Var0);
					}
				}
				unk_0x59A0729D503ED758(&iLocal_447, 9);
			}
			else if (unk_0xDCC86F723E82125E(Local_194.f_1, 3))
			{
				func_396(86, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
				{
					func_483(0, 7);
					unk_0x59A0729D503ED758(&iLocal_447, 6);
				}
				func_400(142, 0, &Var0);
				unk_0x59A0729D503ED758(&iLocal_447, 9);
			}
			else if (unk_0xDCC86F723E82125E(Local_194.f_1, 4))
			{
				if (Local_194.f_35 > -1)
				{
					iVar6 = unk_0x20A20BF765914E37(Local_194.f_35);
				}
				if (unk_0x935FA14EDA695A82() == Local_194.f_33)
				{
					if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
					{
						if (unk_0xDF73DA5E2287C499(iVar6))
						{
							if (func_232(iVar6, 1))
							{
								sVar8 = func_397(iVar6);
								iVar9 = func_486(iVar6);
							}
							else
							{
								sVar8 = unk_0x74C5CB21CF9F1178(iVar6);
								iVar9 = 1;
							}
							func_484(86, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_484(86, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_400(142, 0, &Var0);
					if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
					{
						func_483(0, 2);
						unk_0x59A0729D503ED758(&iLocal_447, 6);
					}
				}
				else if (func_611() == Local_194.f_33)
				{
					iVar5 = unk_0x20A20BF765914E37(Local_194.f_34);
					if (iVar5 != func_67())
					{
						if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
						{
							if (unk_0xDF73DA5E2287C499(iVar6))
							{
								if (func_232(iVar6, 1))
								{
									sVar8 = func_397(iVar6);
									iVar9 = func_486(iVar6);
								}
								else
								{
									sVar8 = unk_0x74C5CB21CF9F1178(iVar6);
									iVar9 = 1;
								}
								func_484(86, "GB_WORK_OVER", "BIGM_SGHTGK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_484(86, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
							}
						}
						func_400(142, 0, &Var0);
						if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
						{
							func_483(0, 2);
							unk_0x59A0729D503ED758(&iLocal_447, 6);
						}
					}
				}
				else if (func_336())
				{
					iVar6 = unk_0x20A20BF765914E37(Local_194.f_35);
					if (iVar6 != func_67())
					{
						if (iVar6 == unk_0xA34E7C2A5118D638())
						{
							if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
							{
								if (func_395(1))
								{
									func_396(85, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_396(85, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
							if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
							{
								func_483(1, 1);
								unk_0x59A0729D503ED758(&iLocal_447, 6);
							}
							func_400(142, 1, &Var0);
						}
						else if (func_395(1))
						{
							iVar7 = func_394();
							if (func_267(iVar6, iVar7, 1))
							{
								if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
								{
									func_375(85, iVar6, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
								{
									func_483(1, 1);
									unk_0x59A0729D503ED758(&iLocal_447, 6);
								}
								func_400(142, 0, &Var0);
							}
							else
							{
								if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
								{
									if (unk_0xDF73DA5E2287C499(iVar6))
									{
										if (func_232(iVar6, 1))
										{
											sVar8 = func_397(iVar6);
											iVar9 = func_486(iVar6);
										}
										else
										{
											sVar8 = unk_0x74C5CB21CF9F1178(iVar6);
											iVar9 = 1;
										}
										func_484(86, "GB_WORK_OVER", "BIGM_SGHTWK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_396(86, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
								{
									func_483(0, 2);
									unk_0x59A0729D503ED758(&iLocal_447, 6);
								}
								func_400(142, 0, &Var0);
							}
						}
						else
						{
							if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
							{
								if (unk_0xDF73DA5E2287C499(iVar6))
								{
									if (func_232(iVar6, 1))
									{
										sVar8 = func_397(iVar6);
										iVar9 = func_486(iVar6);
									}
									else
									{
										sVar8 = unk_0x74C5CB21CF9F1178(iVar6);
										iVar9 = 1;
									}
									func_484(86, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar8, iVar9, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_396(86, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
							{
								func_483(0, 2);
								unk_0x59A0729D503ED758(&iLocal_447, 6);
							}
							func_400(142, 0, &Var0);
						}
					}
				}
				unk_0x59A0729D503ED758(&iLocal_447, 9);
			}
			else if (unk_0xDCC86F723E82125E(Local_194.f_1, 5))
			{
				if (func_365())
				{
					if (func_610())
					{
						if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
						{
						}
					}
					else if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
					{
						func_396(86, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
				{
					func_483(0, 8);
					unk_0x59A0729D503ED758(&iLocal_447, 6);
				}
				func_400(159, 0, &Var0);
				unk_0x59A0729D503ED758(&iLocal_447, 9);
			}
		}
		if (unk_0xDCC86F723E82125E(iLocal_447, 9))
		{
			func_358();
			if (!unk_0xDCC86F723E82125E(iLocal_448, 8))
			{
				unk_0x59A0729D503ED758(&iLocal_448, 8);
			}
			if (!unk_0xDCC86F723E82125E(iLocal_447, 10))
			{
				if (Local_194.f_34 != -1)
				{
					if (unk_0xDCC86F723E82125E(iLocal_447, 5))
					{
						if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(Local_194.f_34)))
						{
							func_357(unk_0x20A20BF765914E37(Local_194.f_34), 432, 0);
							func_355(unk_0x20A20BF765914E37(Local_194.f_34), 1, 0);
							func_354(unk_0x20A20BF765914E37(Local_194.f_34), 0, 0);
							func_353(unk_0x20A20BF765914E37(Local_194.f_34), 0);
							func_352(unk_0x20A20BF765914E37(Local_194.f_34), Global_262145.f_10253, 0);
							unk_0x59A0729D503ED758(&iLocal_447, 10);
						}
					}
				}
			}
			if (func_342(&uLocal_816, 1))
			{
				unk_0x59A0729D503ED758(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 4);
			}
		}
	}
}

int func_342(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_184(29);
	if ((*uParam0 > 0 && !func_273()) && func_327(unk_0xA34E7C2A5118D638()) != 0)
	{
		if (!func_351())
		{
			func_350();
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
				unk_0x59A0729D503ED758(&(Global_1722044.f_3), 2);
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_349(uParam0, 1);
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
				func_346();
				func_349(uParam0, 2);
			}
			break;
		
		case 2:
			func_346();
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_343(func_344()))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				func_349(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
				unk_0x77621132305B133B(&(Global_1722044.f_3), 2);
				func_349(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
			unk_0x77621132305B133B(&(Global_1722044.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_343(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

char* func_344()
{
	if (func_265(func_345()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_345()
{
	return Global_1612300;
}

void func_346()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0))
	{
		if (((((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_649(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xD5DFCA69ACAA20E3()) && !func_164(unk_0xA34E7C2A5118D638(), 22)) && func_327(unk_0xA34E7C2A5118D638()) != 0)
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 1);
			func_348(func_344(), -1);
			func_347(1);
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 0);
		}
	}
}

void func_347(int iParam0)
{
	if (iParam0 && !func_273())
	{
		unk_0xC4EE38A4CFF7544C(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_348(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam1);
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_350()
{
	Global_2442432 = 1;
}

int func_351()
{
	if (func_181(unk_0xA34E7C2A5118D638()) == 170)
	{
		return 1;
	}
	return 0;
}

void func_352(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_67())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_189())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_691[iParam0]) || Global_2411623.f_691[iParam0] == unk_0x46CF50E0E5A24635())
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_388), iVar0);
			Global_2411623.f_493[iVar0] = uParam1;
			Global_2411623.f_691[iParam0] = unk_0x46CF50E0E5A24635();
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_388), iVar0);
			Global_2411623.f_691[iParam0] = -1;
		}
	}
}

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(Global_2411623.f_365), iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_2411623.f_365), iParam0);
	}
	if (unk_0x6B4865E08E90ACC5(Global_2411623[iParam0]))
	{
		if (bParam1)
		{
			unk_0x577E650C288BBD2C(Global_2411623[iParam0], 0);
		}
		else
		{
			unk_0x577E650C288BBD2C(Global_2411623[iParam0], 1);
		}
	}
}

void func_354(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_649(iParam0, 1, 1))
		{
			Global_2411623.f_625[iParam0] = unk_0x46CF50E0E5A24635();
			unk_0x59A0729D503ED758(&(Global_2411623.f_364), iParam0);
			func_353(iParam0, bParam2);
		}
	}
	else
	{
		func_353(iParam0, bParam2);
		unk_0x77621132305B133B(&(Global_2411623.f_364), iParam0);
		Global_2411623.f_625[iParam0] = -1;
	}
}

void func_355(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_67())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_189())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_356(iParam0))
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = unk_0x46CF50E0E5A24635();
			Global_2411623.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = -1;
		}
	}
}

int func_356(int iParam0)
{
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_559[iParam0]) || Global_2411623.f_559[iParam0] == unk_0x46CF50E0E5A24635())
	{
		return 1;
	}
	return 0;
}

void func_357(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_67())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_189())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_526[iParam0]) || Global_2411623.f_526[iParam0] == unk_0x46CF50E0E5A24635())
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_385), iVar0);
			Global_2411623.f_394[iVar0] = uVar1;
			Global_2411623.f_526[iParam0] = unk_0x46CF50E0E5A24635();
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_385), iVar0);
			Global_2411623.f_526[iParam0] = -1;
		}
	}
}

void func_358()
{
	if (!func_364())
	{
		return;
	}
	if (!unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == Global_1312577.f_7)
	{
		return;
	}
	func_359();
}

void func_359()
{
	func_361();
	func_360(0);
}

void func_360(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xBBAE3E0C60A8AD4B();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x2AA13A84EE2D3B24();
		Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
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

void func_361()
{
	if (!func_363())
	{
	}
	if (func_364())
	{
		unk_0x9793A6B024AF02EF(&(Global_1312577.f_10));
		func_362();
		unk_0x8C79EF3DED0E80D0();
	}
}

void func_362()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			unk_0x6DC80A902A91958F(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_55);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_363()
{
	if (!func_364())
	{
		return 0;
	}
	unk_0xF932A8699EA66642(&(Global_1312577.f_10));
	func_362();
	return unk_0xD6AFC45B1375A9DD();
}

int func_364()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_365()
{
	if (!func_366())
	{
		return 0;
	}
	if (func_329())
	{
		return 0;
	}
	return 1;
}

int func_366()
{
	if (func_197(unk_0xA34E7C2A5118D638(), 21))
	{
		return 0;
	}
	if (unk_0xE21B8C41C187AA64())
	{
		return 0;
	}
	if (unk_0x547823CBA92EEF50())
	{
		return 0;
	}
	if (func_93(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (unk_0xDC9A5ADFE0C41DD2())
	{
		return 0;
	}
	if (func_28(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!func_312())
	{
		return 0;
	}
	if (func_197(unk_0xA34E7C2A5118D638(), 0) || func_197(unk_0xA34E7C2A5118D638(), 3))
	{
		return 0;
	}
	if ((func_197(unk_0xA34E7C2A5118D638(), 12) || func_197(unk_0xA34E7C2A5118D638(), 14)) || func_197(unk_0xA34E7C2A5118D638(), 13))
	{
		return 0;
	}
	if (func_372(unk_0xA34E7C2A5118D638(), 0))
	{
		return 0;
	}
	if (func_371())
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (func_370(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_369())
	{
		return 0;
	}
	if (func_368(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_367(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

int func_367(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_257.f_4 != 0 || Global_2417071[iParam0 /*306*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 14))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_369()
{
	if (Global_2549001.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
{
	if (!func_649(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587175[iParam0 /*410*/].f_35;
}

bool func_371()
{
	return Global_91158.f_297 > 0;
}

int func_372(int iParam0, bool bParam1)
{
	if (Global_1587175[iParam0 /*410*/].f_247.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
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

bool func_373()
{
	return Global_1315911;
}

bool func_374()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

int func_375(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_393(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_376(&Var0);
}

int func_376(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426867.f_2428)
		{
			return 0;
		}
	}
	func_379(uParam0, uParam0->f_16);
	func_378(uParam0);
	if (func_377(uParam0->f_1))
	{
		if (Global_2426867.f_2138[0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426867.f_2138[0 /*72*/].f_1 == 13 || Global_2426867.f_2138[0 /*72*/].f_1 == 52) || Global_2426867.f_2138[0 /*72*/].f_1 == 53) || Global_2426867.f_2138[0 /*72*/].f_1 == 57)
		{
			Global_2426867.f_2138[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426867.f_2138[iVar0 + 1 /*72*/] = { Global_2426867.f_2138[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426867.f_2138[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 1);
				Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_276(Global_2426867.f_2138[iVar0 /*72*/].f_1))
				{
					Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
					unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_377(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0)
{
	if (func_278(uParam0->f_1))
	{
		uParam0->f_66 = func_237();
	}
}

void func_379(var uParam0, int iParam1)
{
	if (func_278(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_67())
	{
		return;
	}
	if (func_276(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_380(iParam1, -2, 0, 0);
		}
	}
}

int func_380(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_72(iParam0))
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
	if (func_72(unk_0xA34E7C2A5118D638()) || (func_392() && func_391()))
	{
		uVar0 = func_390();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(uVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(uVar0) != -1)
				{
					if (func_649(unk_0x8ACC9D9AC6076DCB(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_389(iParam1, iParam0, 0);
							}
							else
							{
								return func_387(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_387(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
				{
					return func_389(iParam1, iParam0, 0);
				}
				else
				{
					return func_381(0, -1, 0);
				}
			}
			else
			{
				return func_381(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_389(iParam1, iParam0, 0);
		}
		else
		{
			return func_387(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_387(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_381(bool bParam0, int iParam1, bool bParam2)
{
	return func_382(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_382(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_71(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_386(1);
				}
				else
				{
					return func_386(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
			{
				return func_383(iVar0, iParam2, 1);
			}
			else
			{
				return func_383(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_386(1);
	}
	return func_386(0);
}

int func_383(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_385(iParam0, iParam1);
	if (func_384(Global_1613622.f_68788))
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

int func_384(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7331[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
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
			if (!func_71(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_386(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_387(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_103(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_71(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_386(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_388(1);
			}
			else
			{
				return func_382(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_386(1);
			}
			else
			{
				return func_382(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_236(iParam0);
	if (!iVar3 == -1)
	{
		return func_234(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_388(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_389(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
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
			iVar0 = Global_1613622.f_65200[iParam0];
		}
	}
	else
	{
		iVar0 = func_382(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_390()
{
	return Global_2359301.f_2;
}

bool func_391()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

bool func_392()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

void func_393(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_67();
	uParam1->f_17 = func_67();
	uParam1->f_18 = func_67();
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

int func_394()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

bool func_395(bool bParam0)
{
	return func_232(unk_0xA34E7C2A5118D638(), bParam0);
}

int func_396(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_393(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_376(&Var0);
}

char* func_397(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if ((func_164(iParam0, 28) || func_164(unk_0xA34E7C2A5118D638(), 28)) || func_399(iParam0))
	{
		return unk_0x73630CECCD6630B5("GB_REST_ACC");
	}
	iVar0 = func_68(iParam0);
	if (iVar0 != func_67())
	{
		uVar1 = func_398(&(Global_1608811[iVar0 /*109*/].f_9.f_74));
		if (unk_0xB8A06E7E729EED0A(uVar1))
		{
			return unk_0x73630CECCD6630B5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_398(var uParam0)
{
	return uParam0;
}

int func_399(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_69(iParam0) };
	if (unk_0x62F8BA7ED89768FB() || unk_0x68B0A67658F2D9C2())
	{
		if (unk_0xE028438B8B6A57B6(0))
		{
			return 0;
		}
	}
	else if (unk_0xF7FE713C9F786F8C())
	{
		if (unk_0x3084526A863D7966(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

void func_400(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	func_481(iParam0, &fVar2, &fVar3);
	iVar1 = (iVar1 + uParam2->f_1);
	iVar0 = (iVar0 + *uParam2);
	if (bParam1)
	{
		iVar1 = (iVar1 + func_480(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_479(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	iVar4 = func_478();
	if (iVar4 != func_67() && iParam0 != 148)
	{
		if (func_232(unk_0xA34E7C2A5118D638(), 0))
		{
			if (!func_267(unk_0xA34E7C2A5118D638(), iVar4, 1))
			{
				func_464(&iVar0, 1);
			}
		}
	}
	func_461(iParam0, &iVar5, &iVar6);
	iVar1 = (iVar1 + iVar5);
	iVar0 = (iVar0 + iVar6);
	if (iVar1 > 0)
	{
		Global_1722053.f_10 = iVar1;
		func_460();
		func_414(0, unk_0xC8B93D94F8954288(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1722053.f_9 = iVar0;
		iVar9 = func_394();
		if (iVar9 != func_67())
		{
			func_413(iVar9, &uVar7, &uVar8);
		}
		bVar10 = !func_395(1);
		if (func_412())
		{
			func_403(-856006867, iVar0, &iVar11, 0, 1, 0);
			Global_2554598[iVar11 /*72*/].f_8.f_54 = uVar7;
			Global_2554598[iVar11 /*72*/].f_8.f_55 = uVar8;
			Global_2554598[iVar11 /*72*/].f_8.f_56 = bVar10;
		}
		else
		{
			unk_0xC9F8C348359975C3(uVar7, uVar8, iVar0, bVar10);
		}
		if (func_402(iParam0) > -1)
		{
			func_401(func_402(iParam0), iVar0);
		}
		Global_2443261 = iVar0;
	}
}

void func_401(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2458121.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4983)
		{
			iParam1 = Global_262145.f_4983;
		}
		Global_2458121.f_270 = iParam1;
		Global_2458121.f_271 = 0;
	}
}

int func_402(int iParam0)
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

void func_403(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_412())
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
				func_404(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_404(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_404(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_412())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x9A07DDC8D6013A35(func_126()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_411(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_410(1, iParam4);
			Global_2555081 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_405(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_405(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_406(iParam0);
	}
}

void func_406(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_412())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_409(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_407(&(Global_2554598[iParam0 /*72*/]));
	}
}

void func_407(var uParam0)
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
	func_408(&(uParam0->f_8.f_3));
	func_408(&(uParam0->f_8.f_16));
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

void func_408(var uParam0)
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

int func_409(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_410(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_411(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_412())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_412()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

void func_413(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1608811[iParam0 /*109*/].f_9.f_7[0];
	*uParam2 = Global_1608811[iParam0 /*109*/].f_9.f_7[1];
}

int func_414(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_415(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_415(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_425(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x96209AADF56E8FE8(iParam1))
			{
				uVar1 = unk_0x4D3C2AC8339BFB4F(iParam1);
				func_421(unk_0xB867FC7DBA46C0F1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_416(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_416(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_419(iParam0, 1) };
	if (iParam0 == func_418(unk_0xC8B93D94F8954288()))
	{
		func_417(1);
	}
	func_421(Var0, iParam1, 0, sParam2);
}

void func_417(int iParam0)
{
	Global_2426867.f_1322 = iParam0;
}

int func_418(var uParam0)
{
	return uParam0;
}

Vector3 func_419(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_420(unk_0xC8B93D94F8954288()) && unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
	{
		Var0 = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar3 = unk_0x59DD203239FBDCAD(iParam0);
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xE79F1883B253E5B8(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_420(var uParam0)
{
	return uParam0;
}

void func_421(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426867.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426867.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426867.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426867.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426867.f_741[iVar1 /*29*/].f_4 = func_424(Global_2426867.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426867.f_741[iVar1 /*29*/].f_7 = unk_0x2AA13A84EE2D3B24();
			Global_2426867.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426867.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426867.f_741[iVar1 /*29*/].f_9 = func_423();
			Global_2426867.f_741[iVar1 /*29*/].f_10 = func_422();
			StringCopy(&(Global_2426867.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_422()
{
	if (Global_2426867.f_1322)
	{
		Global_2426867.f_1322 = 0;
		return 1;
	}
	Global_2426867.f_1322 = 0;
	return 0;
}

var func_423()
{
	var uVar0;
	
	uVar0 = Global_2426867.f_1324;
	Global_2426867.f_1324 = 1;
	return uVar0;
}

float func_424(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4F982ED5336EA899(unk_0xE81835FB046A7978(), Param0, 1);
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

var func_425(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_426(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_426(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_459(unk_0xA34E7C2A5118D638()) || func_458(unk_0xA34E7C2A5118D638()))
	{
		if (Global_262145.f_7555 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7555;
		}
	}
	else if (Global_262145.f_5033 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5033;
	}
	if (func_457(uParam2))
	{
	}
	if (func_456())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_454(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_453(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_451(0, &iVar1);
					break;
				
				case 3:
					func_451(1, &iVar1);
					break;
				
				case 1:
					func_449(&iVar1);
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
			func_446(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_436((func_445(unk_0xA34E7C2A5118D638()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xEF84C5FA6302A771(iVar1, iParam8, iParam9);
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_2 != -1)
				{
					func_446(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_431(iVar1);
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
				func_427((func_429(unk_0xA34E7C2A5118D638()) + iVar1));
			}
			else
			{
				func_427((func_429(unk_0xA34E7C2A5118D638()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_427(int iParam0)
{
	if (func_456())
	{
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_5 = iParam0;
		func_428(joaat("mpply_globalxp"), iParam0);
	}
}

void func_428(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
}

int func_429(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_649(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return func_430(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_5;
			}
		}
		else
		{
			return func_430(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_431(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_69(unk_0xA34E7C2A5118D638()) };
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(&Var0))
		{
			iVar13 = func_434(func_435(&Var0));
			if (iVar13 == 0)
			{
				func_433(&Global_1347498, iParam0);
				func_432(joaat("mpply_crew_local_xp_0"), Global_1347498);
			}
			else if (iVar13 == 1)
			{
				func_433(&Global_1347499, iParam0);
				func_432(joaat("mpply_crew_local_xp_1"), Global_1347499);
			}
			else if (iVar13 == 2)
			{
				func_433(&Global_1347500, iParam0);
				func_432(joaat("mpply_crew_local_xp_2"), Global_1347500);
			}
			else if (iVar13 == 3)
			{
				func_433(&Global_1347501, iParam0);
				func_432(joaat("mpply_crew_local_xp_3"), Global_1347501);
			}
			else if (iVar13 == 4)
			{
				func_433(&Global_1347502, iParam0);
				func_432(joaat("mpply_crew_local_xp_4"), Global_1347502);
			}
		}
	}
}

void func_432(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347493 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347496 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347497 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347498 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347499 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347500 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347501 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347502 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347503 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347504 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347505 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347506 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347507 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347508 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347509 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_433(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_434(int iParam0)
{
	if (iParam0 == Global_1347493)
	{
		return 0;
	}
	else if (iParam0 == Global_1347494)
	{
		return 1;
	}
	else if (iParam0 == Global_1347495)
	{
		return 2;
	}
	else if (iParam0 == Global_1347496)
	{
		return 3;
	}
	else if (iParam0 == Global_1347497)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_435(var uParam0)
{
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return Global_2441309;
		}
	}
	return Global_2441309;
}

void func_436(int iParam0, int iParam1, int iParam2)
{
	if (func_456())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7530 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347613[func_334(-1)])
				{
					unk_0xEF84C5FA6302A771(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347613[func_334(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_444(unk_0xA34E7C2A5118D638()))
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_1 = iParam0;
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_6 = func_442(iParam0, 1);
		}
		func_441(629, iParam0, -1, 1);
		func_440(630, func_442(iParam0, 1), -1, 1);
		Global_1347613[func_334(-1)] = iParam0;
		func_437(7, 0);
	}
}

void func_437(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_439(iParam0, iParam1))
	{
		iVar0 = func_438();
		Global_2441286[iVar0] = iParam0;
	}
}

int func_438()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2441286[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_439(int iParam0, var uParam1)
{
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_334(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

void func_441(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_334(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_334(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_334(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_334(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_334(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_334(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_334(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_334(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_334(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_334(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_334(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_334(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_334(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_334(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_334(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_334(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_334(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_334(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_334(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_334(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_334(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_334(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_334(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_334(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_334(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_334(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_334(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_334(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_334(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_334(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_334(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_334(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_334(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_334(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_442(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_443(iParam0, 0);
}

int func_443(int iParam0, int iParam1)
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
		if (Global_273943[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273943[iVar3] < iParam0)
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

int func_444(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

int func_445(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return Global_1347613[func_334(-1)];
			}
			else if (func_444(iParam0))
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347613[func_334(-1)];
	}
	return 0;
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_448(iParam0, func_334(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_447(iParam0))
	{
		func_440(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_441(iParam0, iVar0, iParam2, 1);
	}
}

int func_447(int iParam0)
{
	if (Global_1347492)
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
			case 2902:
			case 3030:
			case 3732:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
				return 1;
				break;
			}
	}
	return 0;
}

int func_448(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_334(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		iVar4 = unk_0xD9BFAEBB04416B09(iVar0);
		if (unk_0x784B3253F40F728C(iVar4))
		{
			iVar5 = unk_0x8F765930684A893F(iVar4);
			if (unk_0x07CBE0ED3114C7D8(iVar5) != -1)
			{
				if (unk_0x07CBE0ED3114C7D8(iVar5) == iVar1 || func_71(unk_0x07CBE0ED3114C7D8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xA34E7C2A5118D638())
					{
						if (func_70(unk_0xA34E7C2A5118D638(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_450(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_450(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_450(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_451(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x55191629F1199760())
		{
			iVar3 = iVar0;
			if (unk_0x784B3253F40F728C(iVar3))
			{
				iVar4 = unk_0x8F765930684A893F(iVar3);
				if (func_649(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xA34E7C2A5118D638())
					{
						iVar1++;
						if (func_70(unk_0xA34E7C2A5118D638(), iVar4))
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
			if (func_649(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xA34E7C2A5118D638())
				{
					if (func_452(unk_0xA34E7C2A5118D638(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_70(unk_0xA34E7C2A5118D638(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_450(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_450(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_452(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_62(iParam0), func_62(iParam1));
	return 0f;
}

int func_453(int iParam0)
{
	int iVar0;
	
	if (unk_0xBAEDEB596C4FA2C5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_450(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_454(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xA1836B70A59643DD(iParam0) > func_445(unk_0xA34E7C2A5118D638()))
		{
			iParam0 = -func_445(unk_0xA34E7C2A5118D638());
		}
	}
	if (func_455(8000, 0, 0) > 0)
	{
		if (func_455(8000, 0, 0) < (iParam0 + func_445(unk_0xA34E7C2A5118D638())))
		{
			iParam0 = (func_455(8000, 0, 0) - func_445(unk_0xA34E7C2A5118D638()));
		}
	}
	return iParam0;
}

int func_455(int iParam0, bool bParam1, int iParam2)
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
	return Global_273943[iParam0];
}

int func_456()
{
	return 1;
}

int func_457(var uParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_458(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_459(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

void func_460()
{
	Global_2442431 = 1;
}

void func_461(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_169(7))
	{
		return;
	}
	iVar0 = func_463(iParam0);
	iVar1 = func_462(iParam0);
	iVar2 = unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(Global_2458121.f_4648.f_63, unk_0x2AA13A84EE2D3B24()));
	if (iVar2 > Global_262145.f_10293)
	{
		iVar2 = Global_262145.f_10293;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10384;
		
		case 152:
			return Global_262145.f_10419;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10407;
		
		case 157:
			return Global_262145.f_10374;
		
		case 159:
			return Global_262145.f_10357;
		
		case 164:
			return Global_262145.f_10397;
		
		case 160:
			return Global_262145.f_10447;
		
		case 162:
			return Global_262145.f_10467;
		
		case 163:
			return Global_262145.f_10432;
		
		case 154:
			return Global_262145.f_10502;
		
		case 155:
			return Global_262145.f_10492;
		
		case 153:
			return Global_262145.f_10456;
		
		default:
	}
	return 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10383;
		
		case 152:
			return Global_262145.f_10418;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10406;
		
		case 157:
			return Global_262145.f_10373;
		
		case 159:
			return Global_262145.f_10356;
		
		case 164:
			return Global_262145.f_10396;
		
		case 160:
			return Global_262145.f_10446;
		
		case 162:
			return Global_262145.f_10466;
		
		case 163:
			return Global_262145.f_10431;
		
		case 154:
			return Global_262145.f_10501;
		
		case 155:
			return Global_262145.f_10491;
		
		case 153:
			return Global_262145.f_10455;
		
		default:
	}
	return 0;
}

void func_464(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_604())
		{
			if (func_395(0))
			{
				if (unk_0xDF73DA5E2287C499(func_394()))
				{
					if (func_477() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_477());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_475(&iVar0);
					if (iParam1 == 1)
					{
						func_468("GB_BCUT_TICK1", func_394(), iVar0, 0, 0, 1, 1);
					}
					func_467(20);
					func_465(func_394(), iVar0, 1);
				}
			}
		}
	}
}

void func_465(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_649(iParam0, 0, 1))
	{
		Var0.f_0 = 433;
		Var0.f_1 = unk_0xA34E7C2A5118D638();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x74A5559828D3116B(1, &Var0, 5, func_466(iParam0));
	}
}

var func_466(int iParam0)
{
	var uVar0;
	
	unk_0x59A0729D503ED758(&uVar0, iParam0);
	return uVar0;
}

void func_467(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_7), iParam0);
}

int func_468(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(func_380(iParam1, -2, 1, 0));
		unk_0x2DED6C1306496257(func_473(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x1AE578B67805BFB7(iParam3);
		}
		unk_0x6DC80A902A91958F(iParam2);
		iVar0 = unk_0xC754466C15BD85AC(0, 1);
		func_469(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_469(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_472() || !unk_0xDC9A5ADFE0C41DD2()) || !func_124(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = func_470(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1718883.f_5[iVar0 /*53*/] = iParam0;
		Global_1718883.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1718883.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1718883.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1718883.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1718883.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1718883.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_470(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1718883 - 1))
	{
		if (iParam0 > Global_1718883.f_5[iVar0 /*53*/].f_1)
		{
			func_471(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1718883++;
	if (Global_1718883 > 5)
	{
		Global_1718883 = 5;
		return Global_1718883;
	}
	return (Global_1718883 - 1);
}

void func_471(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1718883.f_5[iVar0 /*53*/] = { Global_1718883.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_472()
{
	return unk_0x9F37711843A20114(-1762644250);
}

var func_473(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_474(&cVar0);
}

var func_474(char[4] cParam0)
{
	return cParam0;
}

void func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_476();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_476()
{
	return Global_262145.f_10288;
}

int func_477()
{
	return Global_262145.f_10287;
}

int func_478()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_30;
}

int func_479(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10404) * Global_262145.f_10409));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10354) * Global_262145.f_10359));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10381) * Global_262145.f_10385));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10394) * Global_262145.f_10398));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10416) * Global_262145.f_10421));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10578) * Global_262145.f_10579));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10584) * Global_262145.f_10585));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10582) * Global_262145.f_10583));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10576) * Global_262145.f_10577));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10580) * Global_262145.f_10581));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10574) * Global_262145.f_10575));
		
		default:
	}
	return 0;
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10405) * Global_262145.f_10410));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10355) * Global_262145.f_10360));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10382) * Global_262145.f_10386));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10395) * Global_262145.f_10399));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10417) * Global_262145.f_10422));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10454) * Global_262145.f_10457));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10500) * Global_262145.f_10503));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10490) * Global_262145.f_10493));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10445) * Global_262145.f_10448));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10465) * Global_262145.f_10470));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10430) * Global_262145.f_10433));
		
		default:
	}
	return 0;
}

void func_481(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_482(iParam0))
	{
		if (!func_604())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10298;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10297;
	*uParam2 = Global_262145.f_10296;
	if (func_232(unk_0xA34E7C2A5118D638(), 1))
	{
		*uParam1 = Global_262145.f_10295;
		*uParam2 = Global_262145.f_10294;
	}
	iVar0 = func_478();
	if (iVar0 != func_67())
	{
		if (func_267(unk_0xA34E7C2A5118D638(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_482(int iParam0)
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

void func_483(bool bParam0, int iParam1)
{
	Global_1722053.f_6 = unk_0x20F8506526D25CE0();
	if (bParam0)
	{
		Global_1722053.f_7 = 1;
	}
	else
	{
		Global_1722053.f_7 = 0;
	}
	Global_1722053.f_8 = iParam1;
	if (Global_1722053.f_4 == 0)
	{
		if ((func_200(unk_0xA34E7C2A5118D638()) || func_328(unk_0xA34E7C2A5118D638())) || func_238(unk_0xA34E7C2A5118D638()))
		{
			Global_1722053.f_4 = 1;
		}
	}
}

int func_484(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_67();
	iVar1 = func_67();
	iVar2 = func_67();
	return func_485(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_485(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_393(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x59A0729D503ED758(&(Var0.f_63), 2);
	return func_376(&Var0);
}

int func_486(int iParam0)
{
	int iVar0;
	
	iVar0 = func_236(iParam0);
	if (iVar0 != -1)
	{
		return func_234(iVar0);
	}
	return 1;
}

char* func_487()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_68(unk_0xA34E7C2A5118D638());
	if (iVar0 != func_67())
	{
		if (iVar0 != unk_0xA34E7C2A5118D638())
		{
			if ((func_164(iVar0, 28) || func_164(unk_0xA34E7C2A5118D638(), 28)) || func_399(iVar0))
			{
				return unk_0x73630CECCD6630B5("GB_REST_ACC");
			}
		}
		uVar1 = func_398(&(Global_1608811[iVar0 /*109*/].f_9.f_74));
		if (unk_0xB8A06E7E729EED0A(uVar1))
		{
			return unk_0x73630CECCD6630B5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_488()
{
	func_600();
	func_577();
	func_566();
	func_556();
	func_510();
	func_505();
	func_492();
	func_489();
}

void func_489()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_754 != Local_194.f_5)
	{
		if (Local_194.f_34 != -1)
		{
			if (func_365())
			{
				if (func_327(unk_0xA34E7C2A5118D638()) >= 1)
				{
					if (Local_194.f_5 > 0)
					{
						if (Local_194.f_37 > -1)
						{
							iVar0 = unk_0x20A20BF765914E37(Local_194.f_37);
							if (unk_0xDF73DA5E2287C499(iVar0))
							{
								if (iVar0 != unk_0xA34E7C2A5118D638())
								{
									if (func_232(iVar0, 1))
									{
										iVar1 = func_236(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_234(iVar1);
											func_490("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_490("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_754 = Local_194.f_5;
		}
	}
}

int func_490(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(iParam2);
		unk_0x2DED6C1306496257(func_473(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xC754466C15BD85AC(0, 1);
		}
		else
		{
			Global_2457104 = { func_69(iParam1) };
			if (unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104))
			{
				iVar17 = 0;
				if (unk_0xF8D041B05C3D1FD4(&(Global_2457034.f_22), "Leader") && Global_2457034.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2457034.f_21 > 0)
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
						Var1 = { func_491(&Var1) };
					}
					iVar0 = unk_0xE87FCD388F3A02EF(iVar18, unk_0x4041059B7AB947DE(&Global_2457034, 35), &(Global_2457034.f_17), Global_2457034.f_30, iVar17, 0, Global_2457034, &Var1, Global_1317070, Global_1317071, Global_1317072);
				}
				else
				{
					iVar0 = unk_0xE2F4E22A9715A1BC(iVar18, unk_0x4041059B7AB947DE(&Global_2457034, 35), &(Global_2457034.f_17), Global_2457034.f_30, iVar17, 0, Global_2457034, Global_1317070, Global_1317071, Global_1317072);
				}
			}
			else
			{
				iVar0 = unk_0xC754466C15BD85AC(0, 1);
			}
		}
		func_469(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_491(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_492()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_610() && !func_336())
	{
		return;
	}
	if (unk_0xDCC86F723E82125E(Local_460.f_0, 0))
	{
		return;
	}
	if (!func_365())
	{
		return;
	}
	iVar0 = func_327(unk_0xA34E7C2A5118D638());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_194.f_51)))
	{
		iVar1 = (func_11() - func_504(&(Local_194.f_51), 0, 0));
		iVar2 = (func_153() - Local_194.f_5);
		func_503(iVar1);
		if (iVar1 > 30000)
		{
			func_493(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_493(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_493(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_493(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_501(0) == 0)
	{
		return;
	}
	func_500();
	func_497(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_457(sParam4))
	{
		sVar0 = sParam4;
	}
	func_494(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0);
}

void func_494(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_496(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_495(7, iVar0);
		Global_1339929.f_3988[iVar0] = uParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = uParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = uParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_495(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_496(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
}

void func_497(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_496(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_495(6, iVar0);
		Global_1339929.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3436.f_183[iVar0] = iParam3;
		Global_1339929.f_3436.f_172[iVar0] = iParam2;
		Global_1339929.f_3436.f_260[iVar0] = iParam4;
		Global_1339929.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339929.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339929.f_3436.f_443[iVar0] = iParam7;
		Global_1339929.f_3436.f_454[iVar0] = iParam8;
		Global_1339929.f_3436.f_497[iVar0] = iParam9;
		Global_1339929.f_3436.f_508[iVar0] = iParam10;
		Global_1339929.f_3436.f_205[iVar0] = iParam11;
		Global_1339929.f_3436.f_216[iVar0] = iParam12;
		Global_1339929.f_3436.f_227[iVar0] = iParam13;
		Global_1339929.f_3436.f_238[iVar0] = iParam14;
		Global_1339929.f_3436.f_249[iVar0] = iParam15;
		Global_1339929.f_3436.f_519[iVar0] = iParam16;
		Global_1339929.f_3436.f_530[iVar0] = iParam17;
		Global_1339929.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_499())
		{
			Global_1339929.f_941 = 1;
		}
		if (unk_0x68B0A67658F2D9C2())
		{
			iVar2 = 0;
			unk_0x94AEC7924AE05010(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339929.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339929.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339929.f_941 = 1;
			}
			if (func_498())
			{
				Global_1339929.f_945 = 1;
			}
		}
	}
}

int func_498()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x94AEC7924AE05010(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_499()
{
	if ((unk_0x884056BD9590BF29() == 8 || unk_0x884056BD9590BF29() == 9) || unk_0x884056BD9590BF29() == 10)
	{
		return 1;
	}
	return 0;
}

void func_500()
{
	unk_0x68A38902ADFD05FE(8);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(7);
	Global_2442435 = 1;
}

int func_501(bool bParam0)
{
	if (func_502())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_649(unk_0xA34E7C2A5118D638(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_502()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 12);
}

void func_503(int iParam0)
{
	if (unk_0xDCC86F723E82125E(iLocal_448, 8))
	{
		func_165();
		return;
	}
	if (!unk_0xDCC86F723E82125E(iLocal_448, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x233432976E597324("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x59A0729D503ED758(&iLocal_448, 15);
				unk_0x59A0729D503ED758(&iLocal_448, 9);
			}
		}
	}
	if (unk_0xDCC86F723E82125E(iLocal_448, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xDCC86F723E82125E(iLocal_448, 11))
			{
				if (unk_0xE685497EA92333FF("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
					unk_0x384EC102F362C893(0);
					unk_0x59A0729D503ED758(&iLocal_448, 11);
				}
			}
			if (!unk_0xDCC86F723E82125E(iLocal_448, 14))
			{
				if (unk_0x233432976E597324("APT_COUNTDOWN_30S"))
				{
					unk_0x59A0729D503ED758(&iLocal_448, 14);
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_448, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xDCC86F723E82125E(iLocal_448, 12))
					{
						unk_0x384EC102F362C893(1);
						unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
						unk_0x59A0729D503ED758(&iLocal_448, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x233432976E597324("APT_FADE_IN_RADIO"))
						{
							unk_0x6EFCF0B905A37E0F("APT_COUNTDOWN_30S_KILL");
							unk_0x77621132305B133B(&iLocal_448, 9);
						}
					}
				}
			}
		}
	}
}

int func_504(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0);
		}
		else
		{
			return unk_0x2F4EBE92EB266B70(unk_0x3BC33547A5F418E8(), *uParam0);
		}
	}
	return unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0);
}

void func_505()
{
	var uVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x691BFDC1728FD714(Local_194.f_3))
		{
			if (!unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 2))
			{
				if (unk_0x57BA797A9A91EF93(unk_0x20FB0FABD3BC27F4(Local_194.f_3), unk_0xC8B93D94F8954288()))
				{
					unk_0x59A0729D503ED758(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 2);
					iLocal_752 = unk_0x83E9D86E63672B9A();
					unk_0xC4EE38A4CFF7544C(iLocal_752, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					Local_254[unk_0x935FA14EDA695A82() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_450 != Local_194.f_5)
	{
		if (unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 3))
		{
			unk_0x77621132305B133B(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 3);
		}
		if (unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 2))
		{
			if (unk_0xFEA25F5BCFDBD741(Local_194.f_3))
			{
				uVar0 = unk_0x6622BC2FDC6DBB0E(Local_194.f_3);
				unk_0xF13EBA3F84CEEEAD(&uVar0);
				unk_0x77621132305B133B(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 2);
			}
			else
			{
				unk_0x835FF05091869303(Local_194.f_3);
			}
		}
		else
		{
			iLocal_450 = Local_194.f_5;
		}
	}
	if (unk_0x691BFDC1728FD714(Local_194.f_3))
	{
		if (func_604())
		{
			if (func_610())
			{
				func_507();
			}
		}
		if (!unk_0xDCC86F723E82125E(iLocal_447, 13))
		{
			if (!func_610() || !func_604())
			{
				unk_0x9E4B7AE08E4E554D(unk_0x20FB0FABD3BC27F4(Local_194.f_3), 1, 1);
				unk_0x59A0729D503ED758(&iLocal_447, 13);
			}
		}
		if (!unk_0xDCC86F723E82125E(iLocal_447, 3))
		{
			unk_0xDABDA88E15232316(unk_0x20FB0FABD3BC27F4(Local_194.f_3), 1200);
			unk_0x59A0729D503ED758(&iLocal_447, 3);
		}
	}
	else
	{
		if (unk_0xDCC86F723E82125E(iLocal_447, 13))
		{
			unk_0x77621132305B133B(&iLocal_447, 13);
		}
		if (unk_0xDCC86F723E82125E(iLocal_447, 3))
		{
			unk_0x77621132305B133B(&iLocal_447, 3);
		}
		if (unk_0x6B4865E08E90ACC5(uLocal_452))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_452);
		}
	}
	func_506();
}

void func_506()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_365())
	{
		return;
	}
	if (func_327(unk_0xA34E7C2A5118D638()) >= 1)
	{
		if (unk_0x1BDB4A81F7EE9BE6(Local_194.f_3) && !unk_0xB6900B8CB0ABBD2B(unk_0x20FB0FABD3BC27F4(Local_194.f_3)))
		{
			if (!unk_0xE33A9405F8300B78(unk_0x20FB0FABD3BC27F4(Local_194.f_3)))
			{
				unk_0x7068E8DB78AD0A08(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0x0CC43E3FF7E287A5(2, unk_0x44C17CCB85A88A1F(unk_0x6622BC2FDC6DBB0E(Local_194.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_507()
{
	int iVar0;
	
	iVar0 = func_327(unk_0xA34E7C2A5118D638());
	if (iVar0 < 2)
	{
		if (unk_0x6B4865E08E90ACC5(uLocal_452))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_452);
		}
		return;
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_452))
	{
		return;
	}
	unk_0x77621132305B133B(&iLocal_447, 11);
	uLocal_452 = unk_0x361E437CE4AD5532(unk_0x6622BC2FDC6DBB0E(Local_194.f_3));
	unk_0xEB19FBC5156AAE3A(uLocal_452, 12);
	unk_0x31FDDAFCCFEFA478(uLocal_452, 459);
	unk_0x8755DAC584918BF9(uLocal_452, "GB_SGHT_BLP");
	unk_0x706ABF1139F36482(uLocal_452, 1);
	unk_0x3734DA1F207E7166(uLocal_452, Global_262145.f_10253);
	if (func_610())
	{
		func_508(&uLocal_452, 18);
	}
	unk_0xEBA460B665086587(uLocal_452, 1);
	iLocal_753 = unk_0x83E9D86E63672B9A();
	unk_0xC4EE38A4CFF7544C(iLocal_753, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
}

void func_508(var uParam0, int iParam1)
{
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x32546F91F646B246(*uParam0, func_509(iParam1));
	}
}

int func_509(int iParam0)
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
	unk_0x7068E8DB78AD0A08(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_510()
{
	if (unk_0x935FA14EDA695A82() != Local_194.f_33)
	{
		return;
	}
	if (unk_0x691BFDC1728FD714(Local_194.f_3))
	{
		if (iLocal_749 != -1)
		{
			iLocal_749 = -1;
		}
		if (unk_0xDCC86F723E82125E(Global_2559466, 20))
		{
			unk_0x77621132305B133B(&Global_2559466, 20);
		}
		return;
	}
	if (!unk_0xDCC86F723E82125E(Global_2559466, 20))
	{
		if (!unk_0xDCC86F723E82125E(Global_2559466, 21))
		{
			if (iLocal_749 < 0)
			{
				unk_0x59A0729D503ED758(&Global_2559466, 20);
			}
		}
	}
	if (iLocal_750 == -1)
	{
		iLocal_750 = unk_0x531444754C426278(0, 3);
	}
	if (iLocal_749 < 0)
	{
		if (unk_0xDCC86F723E82125E(Global_2559466, 21))
		{
			unk_0x77621132305B133B(&Global_2559466, 21);
			iLocal_749 = 0;
		}
	}
	func_511();
}

void func_511()
{
	bool bVar0;
	
	if (!unk_0xDCC86F723E82125E(iLocal_447, 4))
	{
		if (iLocal_749 >= 0)
		{
			if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0x77621132305B133B(&Local_460, 0);
				iLocal_749 = -1;
			}
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
				{
					func_555(1);
				}
			}
		}
	}
	else if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_554(&Local_460);
		func_553(&Local_460);
		unk_0x77621132305B133B(&iLocal_447, 4);
	}
	switch (iLocal_749)
	{
		case 0:
			func_552(1);
			unk_0xF3AC452C34BF0E13("HACK", 3);
			iLocal_749++;
			break;
		
		case 1:
			if (func_551(1) && unk_0xF0DCEBB4ADA5D981(3))
			{
				unk_0x59A0729D503ED758(&Local_460, 0);
				unk_0x59A0729D503ED758(&(Local_460.f_1), 0);
				func_358();
				iLocal_751 = 10;
				if (iLocal_750 == 2)
				{
					Local_460.f_17 = 1;
				}
				else if (iLocal_750 == 1)
				{
					Local_460.f_17 = 0;
					iLocal_751 = 77;
				}
				else if (iLocal_750 == 0)
				{
					iLocal_751 = 50;
					Local_460.f_17 = 0;
				}
				func_547(unk_0xA34E7C2A5118D638(), 0, 66048);
				iLocal_749++;
			}
			else
			{
				if (!func_551(1))
				{
				}
				if (!unk_0xF0DCEBB4ADA5D981(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0xC5E066210BF7DEBB();
			unk_0x77263B37841FE226(19);
			if (!func_169(0))
			{
				func_185(0);
			}
			if (iLocal_750 == 0)
			{
				func_525(&Local_460, 5, 5, iLocal_751, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1);
				if (func_524(&Local_460, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_750 == 1)
			{
				func_525(&Local_460, 5, 5, iLocal_751, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1);
				if (func_523(&Local_460, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_750 == 2)
			{
				func_525(&Local_460, 5, 5, iLocal_751, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1);
				if (func_512(&Local_460, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xDCC86F723E82125E(Local_460.f_1, 1))
			{
				unk_0x77621132305B133B(&Local_460, 0);
				func_554(&Local_460);
				func_547(unk_0xA34E7C2A5118D638(), 1, 0);
				if (func_169(0))
				{
					func_168(0);
				}
				iLocal_749 = -1;
			}
			else if (bVar0)
			{
				unk_0x77621132305B133B(&Local_460, 0);
				func_554(&Local_460);
				Local_254[unk_0x935FA14EDA695A82() /*6*/].f_4++;
				unk_0x59A0729D503ED758(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 3);
				iLocal_750++;
				if (iLocal_750 >= 3)
				{
					iLocal_750 = 0;
				}
				if (func_169(0))
				{
					func_168(0);
				}
				func_547(unk_0xA34E7C2A5118D638(), 1, 0);
				iLocal_749++;
			}
			break;
	}
}

int func_512(var uParam0, bool bParam1)
{
	if (unk_0xDCC86F723E82125E(*uParam0, 26))
	{
		if (bParam1)
		{
			func_513(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_513(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x77621132305B133B(uParam0, 0);
	unk_0x59A0729D503ED758(uParam0, 12);
	unk_0xFE9574E90C2FA360(0);
	if (bParam2)
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			unk_0xFFC432647FBD0CAF(unk_0xC8B93D94F8954288(), 1, 1, 1, 0);
		}
	}
	if (unk_0x6DAFE4284D2E6AD0())
	{
		unk_0x9476421733F39E06(0);
	}
	unk_0x9F4AA6F234E8A860(1);
	if (bParam1)
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), true, 0);
	}
	unk_0x5CF5A880ED809DDA(uLocal_73, 0);
	func_517(0);
	func_516();
	unk_0xA97E73C0A665310E(0);
	func_515(uParam0, 1, 1);
	func_514(0, 1, 1, 0);
}

int func_514(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && iParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_515(var uParam0, bool bParam1, int iParam2)
{
	if (iLocal_64[1] != -1)
	{
		if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
		{
			unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
			iLocal_64[1] = -1;
		}
	}
	if (iLocal_64[0] != -1)
	{
		if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
		{
			unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
			iLocal_64[0] = -1;
		}
	}
	unk_0x77621132305B133B(uParam0, 25);
	unk_0x77621132305B133B(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x77621132305B133B(uParam0, 12);
		unk_0x77621132305B133B(uParam0, 9);
		unk_0x77621132305B133B(uParam0, 18);
		unk_0x77621132305B133B(uParam0, 27);
		unk_0x77621132305B133B(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_76 = 0;
	if (bParam1)
	{
		unk_0xEF145906684E3D72(&uLocal_75);
	}
	unk_0x77621132305B133B(uParam0, 29);
}

void func_516()
{
	int iVar0;
	
	Global_1338611.f_948 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1338611.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2458121.f_4384 = 1;
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		func_522();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_521(0))
		{
			func_518(0);
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

void func_518(int iParam0)
{
	if (Global_14571)
	{
		func_520(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_519())
	{
		Global_14413.f_1 = 3;
	}
}

int func_519()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_520(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_521(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_521(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_522()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

int func_523(var uParam0, bool bParam1)
{
	if (unk_0xDCC86F723E82125E(*uParam0, 9))
	{
		if (bParam1)
		{
			func_513(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_524(var uParam0, bool bParam1)
{
	if (unk_0xDCC86F723E82125E(*uParam0, 18))
	{
		if (bParam1)
		{
			func_513(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_525(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (unk_0xDCC86F723E82125E(*uParam0, 0))
	{
		func_526(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15);
	}
}

void func_526(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16)
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
	
	unk_0xBD76D2728ECB1AC6(0);
	unk_0xBD76D2728ECB1AC6(2);
	unk_0xFE9574E90C2FA360(1);
	func_546(1);
	func_545(4, -1);
	func_544();
	if (func_551(bParam16))
	{
		if (!unk_0x2BF05095F2389894())
		{
			unk_0xC5E066210BF7DEBB();
			unk_0x7F1F2564B5CE06AF(1);
			if (unk_0x45D1BEB329799891() == 0 && !unk_0x2BF05095F2389894())
			{
				unk_0x16387DB49A36A0F3(uLocal_75, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0xCAB768E5CD52A7FC(2))
		{
			uParam0->f_285 = unk_0x882A55CDEA060AA5(2, 239);
			uParam0->f_286 = unk_0x882A55CDEA060AA5(2, 240);
			if (uParam0->f_287 != uParam0->f_285 || uParam0->f_288 != uParam0->f_286)
			{
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_CURSOR");
				unk_0x512B59C08EAFA3B9(uParam0->f_285);
				unk_0x512B59C08EAFA3B9(uParam0->f_286);
				unk_0xD013AC29829DDC02();
			}
			uParam0->f_287 = uParam0->f_285;
			uParam0->f_288 = uParam0->f_286;
		}
		else
		{
			func_543(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0x7C38F93AF52620B1(uLocal_75, "MOVE_CURSOR");
					unk_0x512B59C08EAFA3B9(fVar6);
					unk_0x512B59C08EAFA3B9(fVar7);
					unk_0xD013AC29829DDC02();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (unk_0xCAB768E5CD52A7FC(2))
			{
				uParam0->f_285 = unk_0x17D1A438B237C217(2, 239);
				uParam0->f_286 = unk_0x17D1A438B237C217(2, 240);
				if (unk_0x62F8BA7ED89768FB())
				{
					if (uParam0->f_287 != uParam0->f_285)
					{
						if (uParam0->f_285 < 0.49f)
						{
							unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
							unk_0x65960B4E2ADC9F6D(10);
							unk_0xD013AC29829DDC02();
						}
						else if (uParam0->f_285 > 0.51f)
						{
							unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
							unk_0x65960B4E2ADC9F6D(11);
							unk_0xD013AC29829DDC02();
						}
					}
				}
				uParam0->f_287 = uParam0->f_285;
				uParam0->f_288 = uParam0->f_286;
			}
			if (unk_0xBDC482FE4AF5F4F1(2))
			{
				fVar8 = unk_0x307ABB011D3E4B3A(2, 1);
				fVar9 = unk_0x307ABB011D3E4B3A(2, 2);
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
					if (unk_0xA3C5926D6E5619AE(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
							unk_0x65960B4E2ADC9F6D(10);
							unk_0xD013AC29829DDC02();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
							unk_0x65960B4E2ADC9F6D(11);
							unk_0xD013AC29829DDC02();
						}
					}
					if (unk_0xA3C5926D6E5619AE(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							bVar10 = true;
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
							unk_0x65960B4E2ADC9F6D(8);
							unk_0xD013AC29829DDC02();
						}
						else if (fLocal_71 > 0f)
						{
							bVar10 = true;
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
							unk_0x65960B4E2ADC9F6D(9);
							unk_0xD013AC29829DDC02();
						}
					}
					if (bVar10)
					{
						unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_542(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0xA1836B70A59643DD(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0x6108F37F12ABC27B(uParam0->f_15))
						{
							if (iLocal_76 != 8)
							{
								unk_0xC4EE38A4CFF7544C(uParam0->f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0x8D9008B8900A28D0(2, 195) || unk_0x8D9008B8900A28D0(2, 196)) || unk_0x0139E142C27412BC(2, 195)) || unk_0x0139E142C27412BC(2, 196))
			{
			}
			if (unk_0xBDC482FE4AF5F4F1(2))
			{
				if (unk_0x8D9008B8900A28D0(2, 32) || unk_0x8D9008B8900A28D0(2, 172))
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
					unk_0x65960B4E2ADC9F6D(8);
					unk_0xD013AC29829DDC02();
				}
				else if (unk_0x8D9008B8900A28D0(2, 33) || unk_0x8D9008B8900A28D0(2, 173))
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
					unk_0x65960B4E2ADC9F6D(9);
					unk_0xD013AC29829DDC02();
				}
				else if (unk_0x8D9008B8900A28D0(2, 34) || unk_0x8D9008B8900A28D0(2, 174))
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
					unk_0x65960B4E2ADC9F6D(10);
					unk_0xD013AC29829DDC02();
				}
				else if (unk_0x8D9008B8900A28D0(2, 35) || unk_0x8D9008B8900A28D0(2, 175))
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
					unk_0x65960B4E2ADC9F6D(11);
					unk_0xD013AC29829DDC02();
				}
			}
			else if (unk_0x8D9008B8900A28D0(2, 188))
			{
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
				unk_0x65960B4E2ADC9F6D(8);
				unk_0xD013AC29829DDC02();
			}
			else if (unk_0x8D9008B8900A28D0(2, 187))
			{
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
				unk_0x65960B4E2ADC9F6D(9);
				unk_0xD013AC29829DDC02();
			}
			else if (unk_0x8D9008B8900A28D0(2, 189))
			{
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
				unk_0x65960B4E2ADC9F6D(10);
				unk_0xD013AC29829DDC02();
			}
			else if (unk_0x8D9008B8900A28D0(2, 190))
			{
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT");
				unk_0x65960B4E2ADC9F6D(11);
				unk_0xD013AC29829DDC02();
			}
		}
		if (bParam12)
		{
			if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
			{
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = unk_0xE8866D60840897A4();
			}
			if (unk_0x6745682088A5D775(uLocal_74))
			{
				iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				if (iVar0 == 6)
				{
					func_541(uParam0);
				}
			}
		}
		func_540();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_539((iParam15 - (unk_0x693EBB4F13506457() - iLocal_59)), &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = 0;
				iLocal_57 = 0;
				iLocal_58 = 0;
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_538(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x693EBB4F13506457();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_538(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x693EBB4F13506457();
			}
		}
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_1, 0))
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
			if (!unk_0xDCC86F723E82125E(*uParam0, 29))
			{
				func_537(uParam0, iParam14);
			}
			func_552(1);
			unk_0xA97E73C0A665310E(1);
			uParam0->f_15 = unk_0x83E9D86E63672B9A();
			iLocal_150 = 0;
			iLocal_151 = 0;
			uParam0->f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0x448F66A056A130E6(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x77621132305B133B(uParam0, 1);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = unk_0x83E9D86E63672B9A();
			iLocal_64[1] = unk_0x83E9D86E63672B9A();
			func_514(1, 0, 1, 0);
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
					if (!func_343("H_EXIT_PROMPT"))
					{
						if (!func_343("HACKOBJ1"))
						{
							func_536("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (unk_0xCAB768E5CD52A7FC(2))
				{
					if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
					{
						unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xE8866D60840897A4();
					}
				}
				else if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
				{
					unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = unk_0xE8866D60840897A4();
				}
			}
			if (unk_0x6745682088A5D775(uLocal_74))
			{
				iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_343("H_EXIT_PROMPT"))
						{
							unk_0x9F4AA6F234E8A860(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
				{
					if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
					{
						func_535(0, "");
					}
				}
			}
			if (unk_0x6745682088A5D775(uLocal_74))
			{
				iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
						func_535(1, "ACCESSD");
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
						if (!func_343("HACKOBJ2"))
						{
							func_536("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (!unk_0x6745682088A5D775(uLocal_74))
				{
					if (unk_0xCAB768E5CD52A7FC(2))
					{
						if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
						{
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xE8866D60840897A4();
						}
					}
					else if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
					{
						unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xE8866D60840897A4();
					}
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x6745682088A5D775(uLocal_74))
					{
						if (unk_0x8D9008B8900A28D0(2, 202))
						{
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = unk_0xE8866D60840897A4();
							if (iParam7 == 1)
							{
								if (func_343("HACKOBJ2"))
								{
									unk_0x9F4AA6F234E8A860(1);
								}
								func_536("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76 = (iLocal_76 - 1);
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
				{
					if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
					{
						func_535(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (unk_0x6745682088A5D775(uLocal_74))
				{
					iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
					func_535(1, "ACCESSD");
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
				if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
				{
					unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
				{
					unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
				{
					unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0xDCC86F723E82125E(*uParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_343("HACKOBJ5"))
								{
									func_536("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!unk_0xDCC86F723E82125E(*uParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_343("HACKOBJ3"))
							{
								func_536("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!unk_0xDCC86F723E82125E(*uParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_343("HACKOBJ5"))
							{
								func_536("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_343("HACKOBJ5"))
						{
							unk_0x9F4AA6F234E8A860(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x6745682088A5D775(uLocal_74))
					{
						if (unk_0xCAB768E5CD52A7FC(2))
						{
							if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
							{
								unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = unk_0xE8866D60840897A4();
							}
						}
						else if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
						{
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xE8866D60840897A4();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!unk_0x6745682088A5D775(uLocal_74))
				{
					if (unk_0x8D9008B8900A28D0(2, 202))
					{
						unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = unk_0xE8866D60840897A4();
						if (iParam7 == 1)
						{
							if (func_343("HACKOBJ5") || func_343("HACKOBJ3"))
							{
								unk_0x9F4AA6F234E8A860(1);
							}
							iLocal_61 = 0;
							iLocal_76 = (iLocal_76 - 1);
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
				{
					if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
					{
						func_535(0, "");
					}
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (unk_0x6745682088A5D775(uLocal_74))
				{
					iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
					func_535(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_77 = unk_0x693EBB4F13506457();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0xDCC86F723E82125E(uParam0->f_1, 0))
						{
							unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x184E5A0123D7BB56(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x184E5A0123D7BB56(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x184E5A0123D7BB56(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x693EBB4F13506457();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x83E9D86E63672B9A();
						unk_0xC4EE38A4CFF7544C(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!unk_0xDCC86F723E82125E(*uParam0, 18))
					{
						iLocal_77 = unk_0x693EBB4F13506457();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x693EBB4F13506457();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x83E9D86E63672B9A();
						unk_0xC4EE38A4CFF7544C(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
							{
								if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
								{
									func_535(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xDCC86F723E82125E(*uParam0, 9))
							{
								func_535(1, "TRYDL");
							}
							else
							{
								func_535(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
						{
							if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
							{
								func_535(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xDCC86F723E82125E(*uParam0, 9))
						{
							func_535(1, "TRYDL");
						}
						else
						{
							func_535(1, "TRYBRUTE");
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
						iLocal_77 = unk_0x693EBB4F13506457();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0xDCC86F723E82125E(uParam0->f_1, 0))
						{
							unk_0x184E5A0123D7BB56(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x184E5A0123D7BB56(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x184E5A0123D7BB56(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x693EBB4F13506457();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x83E9D86E63672B9A();
						if (bParam10)
						{
							func_534(uParam0);
						}
						unk_0x992224D7849DF31E(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0xC4EE38A4CFF7544C(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!bParam11 || unk_0xDCC86F723E82125E(*uParam0, 18)) && !unk_0xDCC86F723E82125E(*uParam0, 9))
					{
						iLocal_77 = unk_0x693EBB4F13506457();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x184E5A0123D7BB56(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x693EBB4F13506457();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x83E9D86E63672B9A();
						if (bParam10)
						{
							func_534(uParam0);
						}
						if (func_343("HACKOBJ5"))
						{
							unk_0x9F4AA6F234E8A860(1);
						}
						unk_0x992224D7849DF31E(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0xC4EE38A4CFF7544C(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
							{
								if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
								{
									func_535(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0xDCC86F723E82125E(*uParam0, 18))
							{
								func_535(1, "TRYDL");
							}
							else
							{
								func_535(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
						{
							if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
							{
								func_535(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0xDCC86F723E82125E(*uParam0, 18))
						{
							func_535(1, "TRYDL");
						}
						else
						{
							func_535(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0xDCC86F723E82125E(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0xDCC86F723E82125E(*uParam0, 18) && unk_0xDCC86F723E82125E(*uParam0, 9))
						{
							if (!unk_0xDCC86F723E82125E(*uParam0, 28))
							{
								unk_0x59A0729D503ED758(uParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if ((unk_0x693EBB4F13506457() - iLocal_78) > 500)
								{
									if (((unk_0x693EBB4F13506457() - iLocal_78) > 2500 || unk_0x8D9008B8900A28D0(2, 201)) || unk_0x8D9008B8900A28D0(2, 237))
									{
										func_535(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0xDCC86F723E82125E(*uParam0, 18))
								{
									func_535(1, "TRYBRUTE");
								}
								else
								{
									func_535(1, "TRYHACK");
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
					func_533("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_533("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (!unk_0xDCC86F723E82125E(uParam0->f_1, 1))
				{
					if (!unk_0x6745682088A5D775(uLocal_74))
					{
						if (unk_0x8D9008B8900A28D0(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xF0E9097ACEF37148(uLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
								{
									unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
								{
									unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!unk_0xDCC86F723E82125E(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x59A0729D503ED758(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (!unk_0x6745682088A5D775(uLocal_74))
				{
					if (unk_0xCAB768E5CD52A7FC(2))
					{
						if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
						{
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xE8866D60840897A4();
						}
					}
					else if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
					{
						unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xE8866D60840897A4();
					}
				}
				if (unk_0x6745682088A5D775(uLocal_74))
				{
					iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
					{
						unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
					}
					unk_0x59A0729D503ED758(uParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_FAILURE", 0, 1);
					unk_0x448F66A056A130E6(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x693EBB4F13506457();
				iLocal_64[0] = unk_0x83E9D86E63672B9A();
				unk_0xC4EE38A4CFF7544C(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0x59A0729D503ED758(uParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0xF0E9097ACEF37148(uLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
					{
						unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				unk_0x59A0729D503ED758(uParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x693EBB4F13506457() - iLocal_59));
				if (iVar1 < 1)
				{
					unk_0x59A0729D503ED758(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x693EBB4F13506457();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
						{
							unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					unk_0x448F66A056A130E6(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0x448F66A056A130E6(uLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = unk_0x693EBB4F13506457();
				unk_0x59A0729D503ED758(uParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
					{
						unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
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
					func_533("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_533("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (!unk_0x6745682088A5D775(uLocal_74))
				{
					if (!unk_0xDCC86F723E82125E(uParam0->f_1, 1))
					{
						if (unk_0x8D9008B8900A28D0(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xF0E9097ACEF37148(uLocal_75, "CLOSE_APP");
							if (!unk_0x6108F37F12ABC27B(iLocal_64[0]))
							{
								unk_0x7A2D5FC5F94932AA(iLocal_64[0]);
							}
							if (!unk_0xDCC86F723E82125E(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x59A0729D503ED758(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x6745682088A5D775(uLocal_74))
				{
					if (unk_0xCAB768E5CD52A7FC(2))
					{
						if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
						{
							unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xE8866D60840897A4();
						}
					}
					else if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
					{
						unk_0x7C38F93AF52620B1(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xE8866D60840897A4();
					}
				}
				if (unk_0x6745682088A5D775(uLocal_74))
				{
					iVar0 = unk_0x287E98C932B92D48(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0xDCC86F723E82125E(*uParam0, 23))
			{
				if (func_538(&(uParam0->f_10), 500))
				{
					unk_0xF0E9097ACEF37148(uLocal_75, "RESET_ROULETTE");
					unk_0x77621132305B133B(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0xF0E9097ACEF37148(uLocal_75, "STOP_ROULETTE");
					uParam0->f_10 = unk_0x693EBB4F13506457();
					unk_0x59A0729D503ED758(uParam0, 23);
					unk_0x59A0729D503ED758(uParam0, 31);
					if (func_190() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x59A0729D503ED758(uParam0, 25);
					unk_0x59A0729D503ED758(uParam0, 31);
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x693EBB4F13506457();
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
						{
							unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_190() == 0)
					{
						unk_0x448F66A056A130E6(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x693EBB4F13506457() - iLocal_59));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0x59A0729D503ED758(uParam0, 25);
					unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x693EBB4F13506457();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xC4EE38A4CFF7544C(-1, "HACKING_FAILURE", 0, 1);
					unk_0x9F4AA6F234E8A860(1);
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
						{
							unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					unk_0x448F66A056A130E6(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0x59A0729D503ED758(uParam0, 25);
				unk_0x184E5A0123D7BB56(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x693EBB4F13506457();
				iLocal_64[1] = unk_0x83E9D86E63672B9A();
				unk_0xC4EE38A4CFF7544C(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0x59A0729D503ED758(uParam0, 25);
				unk_0xF0E9097ACEF37148(uLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
					{
						unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0x448F66A056A130E6(uLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = unk_0x693EBB4F13506457();
				unk_0x59A0729D503ED758(uParam0, 9);
				unk_0xC4EE38A4CFF7544C(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x6108F37F12ABC27B(iLocal_64[1]))
					{
						unk_0x7A2D5FC5F94932AA(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0xDCC86F723E82125E(*uParam0, 9) && unk_0xDCC86F723E82125E(*uParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_343("HACKOBJ7"))
						{
							func_536("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_343("H_USE_PC6") || func_343("H_USE_PC7")) || func_343("H_USE_PC8")) || func_343("H_USE_PC9"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			if ((unk_0xDCC86F723E82125E(*uParam0, 9) && unk_0xDCC86F723E82125E(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0xDCC86F723E82125E(*uParam0, 28))))
			{
				if (func_343("HACKOBJ7"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				if (!iLocal_151)
				{
					unk_0x90EA80826C00FB10(-1, "unlocked_bleep", unk_0xC8B93D94F8954288(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_538(&iLocal_77, 3000))
				{
					unk_0x77621132305B133B(uParam0, 0);
					unk_0x59A0729D503ED758(uParam0, 12);
					unk_0xA97E73C0A665310E(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0xDCC86F723E82125E(*uParam0, 27)) && unk_0xDCC86F723E82125E(*uParam0, 9)) && unk_0xDCC86F723E82125E(*uParam0, 18))
				{
					unk_0x7C38F93AF52620B1(uLocal_75, "OPEN_DOWNLOAD");
					unk_0x0139C89EE907A315(1);
					unk_0xD013AC29829DDC02();
					unk_0x59A0729D503ED758(uParam0, 27);
				}
				if (func_538(&iLocal_77, 2000))
				{
					unk_0xF0E9097ACEF37148(uLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_527(uParam0);
			break;
	}
}

void func_527(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_18 > 0)
	{
		if (unk_0xDCC86F723E82125E(*uParam0, 22))
		{
			if (unk_0x701C5CF3E1956924("hackingNG"))
			{
				if (!unk_0x2BF05095F2389894())
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		unk_0xC4EE38A4CFF7544C(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_343("H1_HNG"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		if (unk_0x68B0A67658F2D9C2())
		{
			if (func_343("H1_HNG_KM"))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
		}
		unk_0x59A0729D503ED758(uParam0, 26);
	}
	else if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (!func_343("H1_HNG_KM"))
		{
			func_536("H1_HNG_KM");
		}
	}
	else if (!func_343("H1_HNG"))
	{
		func_536("H1_HNG");
	}
	switch (uParam0->f_18)
	{
		case 0:
			unk_0x1F0D08B8266D20DB("hackingNG", 0);
			unk_0x77621132305B133B(uParam0, 22);
			func_532();
			iLocal_139 = unk_0x693EBB4F13506457();
			Local_99.f_0 = 0;
			unk_0x77621132305B133B(&uLocal_149, 0);
			unk_0x77621132305B133B(&uLocal_149, 1);
			unk_0x77621132305B133B(&uLocal_149, 2);
			unk_0x77621132305B133B(&uLocal_149, 3);
			unk_0x77621132305B133B(&uLocal_149, 4);
			unk_0x77621132305B133B(&uLocal_149, 5);
			unk_0x77621132305B133B(&uLocal_149, 6);
			unk_0x77621132305B133B(&uLocal_149, 7);
			uParam0->f_18++;
			break;
		
		case 1:
			if (unk_0x701C5CF3E1956924("hackingNG"))
			{
				unk_0x59A0729D503ED758(uParam0, 22);
				unk_0x7C38F93AF52620B1(uLocal_75, "SET_CURSOR_VISIBILITY");
				unk_0x0139C89EE907A315(0);
				unk_0xD013AC29829DDC02();
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
					Local_82[iVar0 /*2*/].f_1 = func_530(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
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
						if (!unk_0xDCC86F723E82125E(uLocal_149, iVar0))
						{
							iLocal_140[iVar0] = unk_0x83E9D86E63672B9A();
							unk_0xC4EE38A4CFF7544C(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0x59A0729D503ED758(&iLocal_149, iVar0);
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
							unk_0x19EF487B6B6C1F0B(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (unk_0xDCC86F723E82125E(iLocal_149, iVar0))
				{
					unk_0x7A2D5FC5F94932AA(iLocal_140[iVar0]);
					unk_0x77621132305B133B(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_529(Local_99.f_0))
			{
				unk_0xC4EE38A4CFF7544C(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
			{
				if (func_538(&iLocal_139, 300))
				{
					if (func_528(Local_99.f_0))
					{
						Local_101[Local_99.f_0 /*4*/] = 1;
						Local_82[Local_99.f_0 /*2*/].f_1 = 0.572f;
						unk_0xC4EE38A4CFF7544C(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99.f_0 != 7)
						{
							Local_99.f_0++;
						}
					}
					else
					{
						if (Local_99.f_0 != 0)
						{
							if (unk_0xDCC86F723E82125E(iLocal_149, Local_99.f_0))
							{
								unk_0x7A2D5FC5F94932AA(iLocal_140[Local_99.f_0]);
								unk_0x77621132305B133B(&iLocal_149, Local_99.f_0);
							}
							Local_101[(Local_99.f_0 - 1) /*4*/] = 0;
							Local_99.f_0 = (Local_99.f_0 - 1);
						}
						if (!unk_0x2BF05095F2389894())
						{
							unk_0x27C156B95D022EC9(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = unk_0x693EBB4F13506457();
						unk_0x76EF33E3762DAC58(0, 100, 100);
						unk_0xC4EE38A4CFF7544C(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x2BF05095F2389894())
					{
						unk_0xA64F50A8AA9DA3F5("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = unk_0x693EBB4F13506457();
					unk_0x76EF33E3762DAC58(0, 100, 100);
				}
			}
			if (!unk_0x2BF05095F2389894())
			{
				if (Local_99.f_0 == 0)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 1)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 2)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 3)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 4)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 5)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 6)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 7)
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xA64F50A8AA9DA3F5("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0xDCC86F723E82125E(uParam0->f_1, 0))
				{
					if (!unk_0xDCC86F723E82125E(uParam0->f_1, 1))
					{
						if (unk_0x8D9008B8900A28D0(2, 202))
						{
							unk_0x59A0729D503ED758(&(uParam0->f_1), 1);
							unk_0x9F4AA6F234E8A860(1);
						}
					}
				}
			}
			break;
	}
}

int func_528(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_530(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_531((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_531(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_532()
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

void func_533(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

void func_534(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, 8);
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

void func_535(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0x448F66A056A130E6(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = unk_0x693EBB4F13506457();
		iLocal_79 = 1;
	}
	else
	{
		unk_0x448F66A056A130E6(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_536(char* sParam0)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
}

void func_537(var uParam0, int iParam1)
{
	if (!unk_0xDCC86F723E82125E(*uParam0, 29))
	{
		unk_0x184E5A0123D7BB56(uLocal_75, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0xDDC43401E4A15041())
		{
			unk_0x448F66A056A130E6(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0x448F66A056A130E6(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0x7C38F93AF52620B1(uLocal_75, "SET_LABELS");
		func_225("H_ICON_1");
		if (iParam1 == 0)
		{
			func_225("H_ICON_2a");
		}
		else
		{
			func_225("H_ICON_2");
		}
		func_225("H_ICON_3");
		func_225("H_ICON_4");
		func_225("H_ICON_5");
		func_225("H_ICON_6");
		unk_0xD013AC29829DDC02();
		unk_0x59A0729D503ED758(uParam0, 29);
	}
}

int func_538(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x693EBB4F13506457();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_539(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_540()
{
	if (iLocal_76 < 5)
	{
		if (unk_0x8D9008B8900A28D0(2, 201) || unk_0x8D9008B8900A28D0(2, 237))
		{
			unk_0xC4EE38A4CFF7544C(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_541(var uParam0)
{
	unk_0xFFC432647FBD0CAF(unk_0xC8B93D94F8954288(), 1, 1, 1, 0);
	if (unk_0x6DAFE4284D2E6AD0())
	{
		unk_0x9476421733F39E06(0);
	}
	unk_0x9F4AA6F234E8A860(1);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), true, 0);
	unk_0x5CF5A880ED809DDA(uLocal_73, 0);
	func_517(0);
	func_516();
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0xA97E73C0A665310E(0);
	func_515(uParam0, 1, 0);
	func_514(0, 1, 1, 0);
}

void func_542(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x882A55CDEA060AA5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xD78553F3D1E80C89(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 218) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 219) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 220) * 127f));
		}
		if (!unk_0xD78553F3D1E80C89(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x8CCC2255507FFB53(2, 221) * 127f));
		}
	}
	if (unk_0xBDC482FE4AF5F4F1(2))
	{
		if (bParam5)
		{
			if (unk_0x720887E96C08F0E8())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xC41E7799A66E5FCB())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_543(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x17D1A438B237C217(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x307ABB011D3E4B3A(2, 221) * 127f));
		}
	}
}

void func_544()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_521(0))
		{
			func_518(0);
		}
		unk_0x59A0729D503ED758(&Global_2284, 2);
	}
}

void func_545(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1338611.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1338611.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_546(int iParam0)
{
	Global_1339929.f_932 = iParam0;
}

void func_547(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0xFD790CCEB2024190())
		{
			unk_0x4A7FE215482FE126(0);
		}
	}
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = iParam2;
		unk_0x6C1CBBF18B93CB8E(iParam0, bParam1, iVar0);
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
		if (!func_312())
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
		if (unk_0xDF73DA5E2287C499(iParam0) && unk_0x06972B20E75CBE06(iParam0))
		{
			uVar25 = unk_0xCF4C00513A86E840(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xBBAE3E0C60A8AD4B())
				{
					unk_0x3C97CC6571B00B28(1);
				}
				else
				{
					unk_0x872B541D7953A19B(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xBBAE3E0C60A8AD4B() && !bVar18)
					{
						unk_0x3C97CC6571B00B28(0);
					}
					Global_2417071[iParam0 /*306*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_550(uVar25) && !unk_0x2EB1FABE3FD7BD6D(uVar25))
				{
					if (!bVar21)
					{
						unk_0x8FB4254399424391(uVar25, true, 0);
					}
				}
				if (!unk_0xB0A9B470CE75BF12(uVar25))
				{
					if (!bVar20)
					{
						unk_0xB7A2078CD1C9A82F(uVar25, false);
					}
					unk_0x3907D4738A2C8ABD(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xB7A2078CD1C9A82F(uVar25, false);
				}
				unk_0x58F516BB5E324590(uVar25, true);
				unk_0x9B5503F5CD2CEB12(iParam0, 0);
				unk_0xD18E3053ACCB190F(uVar25);
				unk_0xCE224502DAE6D698(uVar25, 1);
				func_549();
				func_548();
				if (unk_0x1E7B4B730C1981F4())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2394B86AAC723FB8())
				{
				}
				Global_2417071[iParam0 /*306*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_550(uVar25) && !unk_0x2EB1FABE3FD7BD6D(uVar25))
				{
					if (!bVar21)
					{
						unk_0x8FB4254399424391(uVar25, !bVar14, 0);
					}
					if (!unk_0xB0A9B470CE75BF12(uVar25))
					{
						if (!bVar20)
						{
							unk_0xB7A2078CD1C9A82F(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x3907D4738A2C8ABD(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x9B5503F5CD2CEB12(iParam0, 0);
				}
				else
				{
					unk_0x9B5503F5CD2CEB12(iParam0, 1);
				}
				unk_0x58F516BB5E324590(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xF3D6EAEF84D60393(uVar25) && !unk_0x277ECDA23D8CCEB4(uVar25, 0))
					{
						unk_0xBA73099E237C7E5E(uVar25);
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
			unk_0x6C1CBBF18B93CB8E(iParam0, bParam1, iVar26);
		}
	}
}

void func_548()
{
	struct<2> Var0;
	
	Global_2426867.f_691 = 0;
	Global_2426867.f_692 = 0;
	Global_2426867.f_693 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404919.f_1668 = { Var0 };
}

void func_549()
{
	Global_2404919.f_622 = 0;
	Global_2404919.f_1709 = 0;
	Global_2404919.f_484 = 0;
	Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_205 = 0;
}

int func_550(var uParam0)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x090C65D5190A249D(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_551(bool bParam0)
{
	if (unk_0xF518F3C7FACD43B7(uLocal_75) && (!bParam0 || (((((unk_0x701C5CF3E1956924("HACKING_PC_desktop_0") && unk_0x701C5CF3E1956924("HACKING_PC_desktop_1")) && unk_0x701C5CF3E1956924("HACKING_PC_desktop_2")) && unk_0x701C5CF3E1956924("HACKING_PC_desktop_3")) && unk_0x701C5CF3E1956924("HACKING_PC_desktop_4")) && unk_0x701C5CF3E1956924("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_552(bool bParam0)
{
	if (bParam0)
	{
		unk_0x1F0D08B8266D20DB("HACKING_PC_desktop_0", 0);
		unk_0x1F0D08B8266D20DB("HACKING_PC_desktop_1", 0);
		unk_0x1F0D08B8266D20DB("HACKING_PC_desktop_2", 0);
		unk_0x1F0D08B8266D20DB("HACKING_PC_desktop_3", 0);
		unk_0x1F0D08B8266D20DB("HACKING_PC_desktop_4", 0);
		unk_0x1F0D08B8266D20DB("HACKING_PC_desktop_5", 0);
	}
	uLocal_75 = unk_0x6736064C4760035E("Hacking_PC");
}

void func_553(var uParam0)
{
	unk_0xFFC432647FBD0CAF(unk_0xC8B93D94F8954288(), 1, 1, 1, 0);
	if (unk_0x6DAFE4284D2E6AD0())
	{
		unk_0x9476421733F39E06(0);
	}
	unk_0xFE9574E90C2FA360(0);
	unk_0x9F4AA6F234E8A860(1);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), true, 0);
	unk_0x5CF5A880ED809DDA(uLocal_73, 0);
	unk_0x77621132305B133B(uParam0, 0);
	unk_0x77621132305B133B(uParam0, 12);
	func_517(0);
	func_516();
	unk_0xA97E73C0A665310E(0);
}

void func_554(var uParam0)
{
	int iVar0;
	
	func_515(uParam0, 1, 1);
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

void func_555(bool bParam0)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam0)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	unk_0x2BE3C7FA4FCCA784(0, 69, 1);
	unk_0x2BE3C7FA4FCCA784(0, 70, 1);
	unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
}

void func_556()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDCC86F723E82125E(Local_460.f_0, 0))
	{
		return;
	}
	if (!func_365())
	{
		if (func_343("GB_SGHT_HLP1"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		if (func_343("GB_SGHT_HLP2"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		if (func_336())
		{
			sVar0 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
			iVar1 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
			if (func_232(unk_0xA34E7C2A5118D638(), 1))
			{
				if (func_565("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			else if (func_565("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
		}
		if (func_343("GB_SGHT_RVL"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		return;
	}
	iVar2 = func_327(unk_0xA34E7C2A5118D638());
	if (iVar2 < 2)
	{
		if (func_343("GB_SGHT_HLP1"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		if (func_343("GB_SGHT_HLP2"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		if (func_336())
		{
			sVar0 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
			iVar1 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
			if (func_232(unk_0xA34E7C2A5118D638(), 1))
			{
				if (func_565("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			else if (func_565("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
		}
		if (func_343("GB_SGHT_RVL"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		return;
	}
	if (!unk_0xDCC86F723E82125E(iLocal_447, 2))
	{
		if (!func_564(84))
		{
			if (iLocal_749 == -1)
			{
				if (func_558(0, 1, 1, 1))
				{
					if (unk_0x935FA14EDA695A82() == Local_194.f_33)
					{
						func_348("GB_SGHT_HLP1", -1);
						func_347(1);
						unk_0x59A0729D503ED758(&iLocal_447, 2);
					}
					else if (func_611() == Local_194.f_33)
					{
						func_348("GB_SGHT_HLP2", -1);
						func_347(1);
						unk_0x59A0729D503ED758(&iLocal_447, 2);
					}
					else if (func_336())
					{
						sVar0 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
						iVar1 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
						if (func_232(unk_0xA34E7C2A5118D638(), 1))
						{
							func_557("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_347(1);
						}
						else
						{
							func_557("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_347(1);
						}
						unk_0x59A0729D503ED758(&iLocal_447, 2);
					}
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&iLocal_447, 2);
			}
		}
	}
	if (unk_0xDCC86F723E82125E(iLocal_447, 2))
	{
		if (!unk_0xDCC86F723E82125E(iLocal_447, 7))
		{
			if (iLocal_749 == -1)
			{
				if (unk_0x935FA14EDA695A82() == Local_194.f_33)
				{
					if (func_558(0, 1, 1, 1))
					{
						func_348("GB_SGHT_APPH", -1);
						func_347(1);
						unk_0x59A0729D503ED758(&iLocal_447, 7);
					}
				}
				else
				{
					unk_0x59A0729D503ED758(&iLocal_447, 7);
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&iLocal_447, 7);
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(iLocal_447, 8))
	{
		if (func_610())
		{
			if (func_604())
			{
				if (unk_0x691BFDC1728FD714(Local_194.f_3))
				{
					if (func_558(0, 1, 1, 1))
					{
						func_348("GB_SGHT_PKGH", -1);
						func_347(1);
						unk_0x59A0729D503ED758(&iLocal_447, 8);
					}
				}
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(iLocal_447, 12))
	{
		if (func_610())
		{
			if (Local_194.f_5 > 0 || unk_0xDCC86F723E82125E(Local_194.f_1, 6))
			{
				if (func_558(0, 1, 1, 1))
				{
					func_348("GB_SGHT_RVL", -1);
					func_347(1);
					unk_0x59A0729D503ED758(&iLocal_447, 12);
				}
			}
		}
	}
}

void func_557(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam4);
	}
	unk_0xCE59E3E42586D52D(sParam3);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam5);
}

int func_558(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xB45DF29A98EEAD5D())
	{
		return 0;
	}
	if (func_563())
	{
		return 0;
	}
	if (!unk_0xB66DD474AA9E764E())
	{
		return 0;
	}
	if (func_317())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_27(unk_0xA34E7C2A5118D638(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_562(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (func_561())
	{
		return 0;
	}
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (Global_1573680)
	{
		return 0;
	}
	if (func_560())
	{
		return 0;
	}
	if (func_559())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (Global_2465403)
	{
		return 0;
	}
	return 1;
}

bool func_559()
{
	return Global_2433098.f_567;
}

bool func_560()
{
	return Global_2433098.f_717;
}

bool func_561()
{
	return Global_2426867.f_2429.f_585;
}

int func_562(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_563()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

bool func_564(int iParam0)
{
	return Global_2426867.f_2138[0 /*72*/].f_1 == iParam0;
}

bool func_565(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam4);
	}
	unk_0xCE59E3E42586D52D(sParam3);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_566()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDCC86F723E82125E(Local_460.f_0, 0))
	{
		return;
	}
	if (!func_365())
	{
		if (unk_0xDCC86F723E82125E(iLocal_447, 5))
		{
			if (Local_194.f_34 != -1)
			{
				iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
				if (iVar0 > -1)
				{
					if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(Local_194.f_34)))
					{
						iVar1 = func_234(iVar0);
						iVar2 = func_509(iVar1);
						func_357(unk_0x20A20BF765914E37(Local_194.f_34), 432, 0);
						func_355(unk_0x20A20BF765914E37(Local_194.f_34), iVar2, 0);
						func_354(unk_0x20A20BF765914E37(Local_194.f_34), 0, 0);
						func_353(unk_0x20A20BF765914E37(Local_194.f_34), 0);
						func_352(unk_0x20A20BF765914E37(Local_194.f_34), Global_262145.f_10253, 0);
						unk_0x77621132305B133B(&iLocal_447, 5);
					}
					else
					{
						unk_0x77621132305B133B(&iLocal_447, 5);
					}
				}
			}
			func_358();
		}
		return;
	}
	if (!unk_0x691BFDC1728FD714(Local_194.f_3))
	{
		if (unk_0x935FA14EDA695A82() == Local_194.f_33)
		{
			if (!unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 3))
			{
				if (!unk_0xDCC86F723E82125E(Local_460.f_0, 0))
				{
					if (Local_254[unk_0x935FA14EDA695A82() /*6*/].f_5 < 3)
					{
						if (func_327(unk_0xA34E7C2A5118D638()) == 3)
						{
							if (!func_576("GB_SGHT_HCK"))
							{
								func_573("GB_SGHT_HCK", 0);
							}
						}
						else if (func_576("GB_SGHT_HCK"))
						{
							func_358();
						}
					}
					else
					{
						func_358();
					}
				}
			}
		}
		else if (func_611() == Local_194.f_33)
		{
			if (Local_194.f_34 != -1)
			{
				if (func_327(unk_0xA34E7C2A5118D638()) == 3)
				{
					if (!func_576("GB_SGHT_PROT"))
					{
						iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_234(iVar0);
							func_567("GB_SGHT_PROT", unk_0x20A20BF765914E37(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_576("GB_SGHT_PROT"))
				{
					func_358();
				}
			}
		}
		else if (func_336())
		{
			if (Local_194.f_34 != -1)
			{
				if (func_327(unk_0xA34E7C2A5118D638()) == 3)
				{
					if (Local_194.f_34 != -1)
					{
						iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_234(iVar0);
							if (func_232(unk_0xA34E7C2A5118D638(), 1))
							{
								if (!func_576("GB_SGHT_STOP"))
								{
									func_567("GB_SGHT_STOP", unk_0x20A20BF765914E37(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_576("GB_SGHT_STOP"))
							{
								func_567("GB_SGHT_STOP", unk_0x20A20BF765914E37(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_576("GB_SGHT_STOP"))
					{
						func_358();
					}
					if (func_576("GB_SGHT_STOP2"))
					{
						func_358();
					}
				}
				if (func_327(unk_0xA34E7C2A5118D638()) >= 2)
				{
					if (!unk_0xDCC86F723E82125E(iLocal_447, 5))
					{
						if (Local_194.f_34 != -1)
						{
							if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(Local_194.f_34)))
							{
								if (func_649(unk_0x20A20BF765914E37(Local_194.f_34), 1, 1))
								{
									iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_234(iVar0);
										iVar2 = func_509(iVar1);
										func_357(unk_0x20A20BF765914E37(Local_194.f_34), 432, 1);
										func_355(unk_0x20A20BF765914E37(Local_194.f_34), iVar2, 1);
										func_354(unk_0x20A20BF765914E37(Local_194.f_34), 1, 1);
										func_353(unk_0x20A20BF765914E37(Local_194.f_34), 1);
										func_352(unk_0x20A20BF765914E37(Local_194.f_34), Global_262145.f_10253, 1);
										unk_0x59A0729D503ED758(&iLocal_447, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0xDCC86F723E82125E(iLocal_447, 5))
				{
					if (Local_194.f_34 != -1)
					{
						iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_234(iVar0);
							iVar2 = func_509(iVar1);
							func_357(unk_0x20A20BF765914E37(Local_194.f_34), 432, 0);
							func_355(unk_0x20A20BF765914E37(Local_194.f_34), iVar2, 0);
							func_354(unk_0x20A20BF765914E37(Local_194.f_34), 0, 0);
							func_353(unk_0x20A20BF765914E37(Local_194.f_34), 0);
							func_352(unk_0x20A20BF765914E37(Local_194.f_34), Global_262145.f_10253, 0);
							unk_0x77621132305B133B(&iLocal_447, 5);
						}
					}
				}
			}
		}
	}
	else if (func_327(unk_0xA34E7C2A5118D638()) == 3)
	{
		if (unk_0x935FA14EDA695A82() == Local_194.f_33)
		{
			if (!unk_0xDCC86F723E82125E(Local_460.f_0, 0))
			{
				if (!func_576("GB_SGHT_RETP"))
				{
					func_573("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_611() == Local_194.f_33)
		{
			if (Local_194.f_34 != -1)
			{
				if (!func_576("GB_SGHT_PROT"))
				{
					iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_234(iVar0);
						func_567("GB_SGHT_PROT", unk_0x20A20BF765914E37(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_336())
		{
			if (Local_194.f_34 != -1)
			{
				iVar0 = func_236(unk_0x20A20BF765914E37(Local_194.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_234(iVar0);
					if (func_232(unk_0xA34E7C2A5118D638(), 1))
					{
						if (!func_576("GB_SGHT_STOP"))
						{
							func_567("GB_SGHT_STOP", unk_0x20A20BF765914E37(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_576("GB_SGHT_STOP"))
					{
						func_567("GB_SGHT_STOP", unk_0x20A20BF765914E37(Local_194.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_576("GB_SGHT_PROT"))
		{
			func_358();
		}
		if (func_576("GB_SGHT_RETP"))
		{
			func_358();
		}
		if (func_576("GB_SGHT_STOP"))
		{
			func_358();
		}
		if (func_576("GB_SGHT_STOP2"))
		{
			func_358();
		}
	}
}

void func_567(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_568(sParam0, unk_0x74C5CB21CF9F1178(iParam1), sParam2, bParam5);
	Global_1312577 = 14;
	Global_1312577.f_54 = iParam3;
	Global_1312577.f_55 = iParam4;
}

void func_568(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam1) > 63)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam2))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam2) > 63)
	{
		return;
	}
	if (func_572(sParam0, sParam1, sParam2))
	{
		return;
	}
	func_359();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	func_571();
	func_570(bParam3);
	func_569();
}

void func_569()
{
	unk_0x59A0729D503ED758(&(Global_1312577.f_56), 1);
}

void func_570(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0x77621132305B133B(&(Global_1312577.f_56), 0);
}

void func_571()
{
	Global_1312577.f_8 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 86400000);
	Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
}

bool func_572(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_364())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam0))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam1))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam2))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10)))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam1) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14)))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam2) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_30));
}

void func_573(char* sParam0, bool bParam1)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (func_574(sParam0))
	{
		return;
	}
	func_359();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_571();
	func_570(bParam1);
	func_569();
}

bool func_574(char* sParam0)
{
	if (!func_364())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_575(uParam0);
	}
	if (unk_0xB8A06E7E729EED0A(uParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10));
}

bool func_575(char* sParam0)
{
	if (!func_364())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

int func_576(char* sParam0)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	if (!func_364())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x7FB2AC00554ED7D4(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return 0;
	}
	return func_574(sParam0);
}

void func_577()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_610() && !func_336())
	{
		return;
	}
	if (!func_365())
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(iLocal_447, 1))
	{
		iVar0 = func_327(unk_0xA34E7C2A5118D638());
		if (iVar0 >= 2)
		{
			if (unk_0x935FA14EDA695A82() == Local_194.f_33 || func_611() == Local_194.f_33)
			{
				if (func_583(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_396(84, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0xA8BDAEB412A162CC(1);
					unk_0xE4EAE8BD3FCBC676(unk_0xA34E7C2A5118D638(), joaat("pickup_portable_package"), 1);
					func_582(1);
					func_578();
				}
			}
			else if (func_232(unk_0xA34E7C2A5118D638(), 1))
			{
				sVar1 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
				uVar2 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
				func_484(84, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0xE4EAE8BD3FCBC676(unk_0xA34E7C2A5118D638(), joaat("pickup_portable_package"), 0);
				func_578();
			}
			else
			{
				sVar1 = func_397(unk_0x20A20BF765914E37(Local_194.f_34));
				uVar2 = func_486(unk_0x20A20BF765914E37(Local_194.f_34));
				func_484(84, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0xE4EAE8BD3FCBC676(unk_0xA34E7C2A5118D638(), joaat("pickup_portable_package"), 0);
				func_578();
			}
		}
		unk_0x59A0729D503ED758(&iLocal_447, 1);
	}
}

void func_578()
{
	if (func_394() != func_67())
	{
		Global_1722053 = func_581(func_394());
		Global_1722053.f_1 = func_580(func_394());
	}
	Global_1722053.f_5 = unk_0x20F8506526D25CE0();
	Global_1722053.f_13 = func_579();
	Global_1722053.f_15 = 0;
	if (func_395(1))
	{
		if (func_478() == func_394())
		{
			Global_1722053.f_15 = 1;
		}
	}
}

int func_579()
{
	int iVar0;
	
	iVar0 = func_394();
	if (iVar0 != func_67())
	{
		return Global_1608811[iVar0 /*109*/].f_9.f_68;
	}
	return 0;
}

var func_580(int iParam0)
{
	return Global_1608811[iParam0 /*109*/].f_9.f_7[1];
}

var func_581(int iParam0)
{
	return Global_1608811[iParam0 /*109*/].f_9.f_7[0];
}

void func_582(bool bParam0)
{
	if (bParam0)
	{
		if (!func_164(unk_0xA34E7C2A5118D638(), 9))
		{
			if (func_327(unk_0xA34E7C2A5118D638()) != 0)
			{
				func_184(9);
			}
		}
	}
	else if (func_164(unk_0xA34E7C2A5118D638(), 9))
	{
		func_183(9);
	}
}

int func_583(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x77621132305B133B(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_584(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_100976.f_32519[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0x59A0729D503ED758(&Global_2283, 1);
			unk_0x59A0729D503ED758(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_584(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xF8D041B05C3D1FD4(sParam14, sParam15))
	{
	}
	func_594();
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
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if (unk_0xECF9CC3305D3E1C5(unk_0xC8B93D94F8954288()))
			{
				return 0;
			}
		}
		if (Global_100976.f_12685[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xCBC8FFE55DC722B5(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xCBC8FFE55DC722B5(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_593() == 0)
	{
		func_591();
		return 0;
	}
	func_590(Global_16779);
	StringCopy(&(Global_100976.f_12775[Global_16779 /*104*/]), sParam1, 64);
	Global_100976.f_12775[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_100976.f_12775[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_100976.f_12775[Global_16779 /*104*/].f_25 = iParam7;
	Global_100976.f_12775[Global_16779 /*104*/].f_26 = uParam8;
	Global_100976.f_12775[Global_16779 /*104*/].f_29 = uParam9;
	Global_100976.f_12775[Global_16779 /*104*/].f_30 = uParam12;
	Global_100976.f_12775[Global_16779 /*104*/].f_31 = uParam11;
	Global_100976.f_12775[Global_16779 /*104*/].f_28 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_100976.f_12775[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_100976.f_12775[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_100976.f_12775[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_100976.f_12775[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_100976.f_12775[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_100976.f_12775[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0xDCC86F723E82125E(Global_2283, 10))
	{
		Global_100976.f_12775[Global_16779 /*104*/].f_99[0] = 1;
		Global_100976.f_12775[Global_16779 /*104*/].f_99[1] = 1;
		Global_100976.f_12775[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_589(0);
		func_589(2);
		func_589(1);
	}
	else
	{
		func_594();
		switch (iParam16)
		{
			case 3:
				Global_100976.f_12775[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_100976.f_12775[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_100976.f_12775[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_100976.f_12775[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_589(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_589(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_589(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_589(3);
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
		if (unk_0xDCC86F723E82125E(Global_2283, 10))
		{
			Global_100976.f_12685[0 /*20*/].f_17 = 1;
			Global_100976.f_12685[1 /*20*/].f_17 = 1;
			Global_100976.f_12685[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_100976.f_12685[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_100976.f_12685[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_100976.f_12685[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_100976.f_12685[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_594();
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
			if (!func_373())
			{
				unk_0xC4EE38A4CFF7544C(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_588(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_585(1);
			func_588(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_585(int iParam0)
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
		if (func_587(14))
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
								if (unk_0xDCC86F723E82125E(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_225(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(iVar2);
								unk_0xD013AC29829DDC02();
							}
							if (Global_2441377)
							{
								if (iVar1 == 14)
								{
									func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_100976.f_12775[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_100976.f_12775[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_100976.f_12775[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69317)
								{
									iVar4 = 0;
									iVar4 = Global_2558200;
									func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36755;
											break;
										
										case 1:
											iVar5 = Global_36756;
											break;
										
										case 2:
											iVar5 = Global_36757;
											break;
										
										default:
											break;
									}
									func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_225(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(Global_2289);
								unk_0xD013AC29829DDC02();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xDCC86F723E82125E(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_225(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(iVar6);
								unk_0xD013AC29829DDC02();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xDCC86F723E82125E(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_225(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(iVar7);
								unk_0xD013AC29829DDC02();
							}
							else if (iVar1 == 8)
							{
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_225(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(42);
								unk_0xD013AC29829DDC02();
							}
							else if ((iVar1 == 23 && unk_0xF8D041B05C3D1FD4(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xDCC86F723E82125E(Global_2284, 6))
							{
								unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
								unk_0x65960B4E2ADC9F6D(1);
								unk_0x65960B4E2ADC9F6D(iVar0);
								unk_0x65960B4E2ADC9F6D(Global_2290[iVar1 /*15*/].f_10);
								unk_0x65960B4E2ADC9F6D(0);
								func_225(&(Global_2290[iVar1 /*15*/]));
								unk_0x65960B4E2ADC9F6D(42);
								unk_0xD013AC29829DDC02();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1607645.f_1;
								func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_586(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_586(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB8A06E7E729EED0A(uParam7))
	{
		func_225(sParam7);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam8))
	{
		func_225(iParam8);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam9))
	{
		func_225(iParam9);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam10))
	{
		func_225(iParam10);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam11))
	{
		func_225(iParam11);
	}
	unk_0xD013AC29829DDC02();
}

bool func_587(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_588(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD013AC29829DDC02();
}

void func_589(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_100976.f_12685[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_590(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4C374828FD653ECC();
	uVar1 = unk_0x44AD07D9D178F321();
	uVar2 = unk_0x342FDFC48311CCCE();
	uVar3 = unk_0x818078CDB71D3E9C();
	uVar4 = unk_0x49D01BEA8D03E892() + 1;
	uVar5 = unk_0x90D477BB666B03DB();
	Global_100976.f_12775[iParam0 /*104*/].f_18 = uVar0;
	Global_100976.f_12775[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_100976.f_12775[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_100976.f_12775[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_100976.f_12775[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_100976.f_12775[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_591()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69317)
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
	Global_100976.f_12775[Global_16779 /*104*/].f_18 = -1;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_592(Global_100976.f_12775[iVar2 /*104*/].f_18, Global_100976.f_12775[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_100976.f_12775[Global_16779 /*104*/].f_24 = 1;
}

int func_592(struct<6> Param0, struct<6> Param6)
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

int func_593()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69317)
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
		if (Global_100976.f_12775[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_100976.f_12775[Global_16779 /*104*/].f_18 = -1;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_100976.f_12775[iVar2 /*104*/].f_24 == 0 || Global_100976.f_12775[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_592(Global_100976.f_12775[iVar2 /*104*/].f_18, Global_100976.f_12775[Global_16779 /*104*/].f_18))
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
	Global_100976.f_12775[Global_16779 /*104*/].f_99[0] = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_99[1] = 0;
	Global_100976.f_12775[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_594()
{
	if (func_587(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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
		Global_14413 = func_595();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_595()
{
	func_596();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_596()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_599(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_598(unk_0xC8B93D94F8954288());
			if (func_597(iVar0) && (!func_587(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_597(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_597(int iParam0)
{
	return iParam0 < 3;
}

int func_598(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_599(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_599(int iParam0)
{
	if (func_597(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_600()
{
	if (!unk_0xDCC86F723E82125E(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1, 1))
	{
		if (!func_610())
		{
			if (Local_194.f_5 > 0 || unk_0xDCC86F723E82125E(Local_194.f_1, 6))
			{
				func_186(1);
				unk_0x59A0729D503ED758(&(Local_254[unk_0x935FA14EDA695A82() /*6*/].f_1), 1);
			}
		}
	}
}

int func_601()
{
	if (Global_2458121.f_4648.f_12)
	{
		Global_2458121.f_4648.f_12 = 0;
		return 1;
	}
	if (func_602(1))
	{
		return 1;
	}
	return 0;
}

int func_602(bool bParam0)
{
	var uVar0;
	
	if (!func_395(1))
	{
		if ((Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51 != func_67() && func_649(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51, 0, 1)) && Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_19 == 4)
		{
			if (bParam0)
			{
				uVar0 = func_397(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51);
				func_603("LEFT_GB_MSSN", uVar0, func_380(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51, -2, 0, 0), -1);
				func_347(1);
			}
			return 1;
		}
	}
	return 0;
}

void func_603(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(uParam1);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam3);
}

bool func_604()
{
	return func_199(unk_0xA34E7C2A5118D638());
}

void func_605(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 != iParam0)
	{
		func_609(-1);
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 = iParam0;
		if (!func_192(iParam0))
		{
			fVar0 = func_191(iParam0);
			if (fVar0 != 1f)
			{
				func_188(fVar0);
				unk_0x59A0729D503ED758(&(Global_1722044.f_3), 1);
			}
		}
		if (!func_195(iParam0))
		{
			if (func_193(iParam0))
			{
				unk_0x60B57BC5E51D2074(0);
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
				unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
				unk_0x59A0729D503ED758(&(Global_1722044.f_3), 0);
			}
			else if (unk_0xECB10B5C06DD2F31() < 5)
			{
				unk_0xFD62177C7242216E(1f);
				unk_0x60B57BC5E51D2074(5);
			}
		}
		if (func_335())
		{
			func_184(27);
		}
		if (bParam1)
		{
			if (!func_329())
			{
				func_186(1);
			}
		}
		if (((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155)
		{
			if ((unk_0xDCC86F723E82125E(Global_2458121.f_4407, 1) || unk_0xDCC86F723E82125E(Global_2458121.f_4407, 4)) || unk_0xDCC86F723E82125E(Global_2458121.f_4407, 0))
			{
				func_467(6);
			}
			func_608();
		}
		if (iParam0 == 164)
		{
			unk_0x21F5FB3C8D48F7F5(3, 0);
			unk_0x21F5FB3C8D48F7F5(5, 0);
		}
		if (func_110(unk_0xA34E7C2A5118D638()) && func_200(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 8);
		}
		func_606();
	}
}

void func_606()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_607();
	iVar2 = func_68(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x20A20BF765914E37(iVar0);
		if (unk_0xDF73DA5E2287C499(iVar1))
		{
			if (func_267(iVar1, iVar2, 1))
			{
				unk_0x34281EBF7C57F442(unk_0xA34E7C2A5118D638(), iVar1, uVar3);
				unk_0x34281EBF7C57F442(iVar1, unk_0xA34E7C2A5118D638(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_607()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_394();
	if (iVar0 != func_67())
	{
		if (func_649(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xDCC86F723E82125E(Global_1608811[iVar1 /*109*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_608()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4407, 1))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4407), 1);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4407, 4))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4407), 4);
	}
	unk_0x77621132305B133B(&(Global_2458121.f_4407), 0);
	unk_0x77621132305B133B(&(Global_2458121.f_4407), 2);
	Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_341 = 0;
	if (Global_2458121.f_4409 > 0)
	{
		unk_0x60B57BC5E51D2074(Global_2458121.f_4409);
	}
	Global_2458121.f_4408 = 0;
}

void func_609(int iParam0)
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_27 = iParam0;
}

int func_610()
{
	int iVar0;
	
	iVar0 = func_611();
	if (iVar0 > -1)
	{
		if (Local_194.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_611()
{
	int iVar0;
	
	if (Local_254[unk_0x935FA14EDA695A82() /*6*/].f_3 != -1)
	{
		return Local_254[unk_0x935FA14EDA695A82() /*6*/].f_3;
	}
	if (func_199(unk_0xA34E7C2A5118D638()))
	{
		Local_254[unk_0x935FA14EDA695A82() /*6*/].f_3 = unk_0x935FA14EDA695A82();
		if (unk_0x935FA14EDA695A82() == Local_194.f_33)
		{
			func_582(1);
		}
	}
	else if (func_232(unk_0xA34E7C2A5118D638(), 1))
	{
		iVar0 = func_394();
		if (iVar0 != func_67())
		{
			if (unk_0xC8D96C5ECEABA5D0(iVar0))
			{
				Local_254[unk_0x935FA14EDA695A82() /*6*/].f_3 = unk_0xB916365AA117A9F4(iVar0);
			}
		}
	}
	return Local_254[unk_0x935FA14EDA695A82() /*6*/].f_3;
}

int func_612()
{
	return Local_194.f_0;
}

int func_613(int iParam0)
{
	return Local_254[iParam0 /*6*/];
}

int func_614()
{
	bool bVar0;
	
	func_619(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_618())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_617())
	{
		return 1;
	}
	if (func_616(157))
	{
		if (!func_615())
		{
			return 1;
		}
	}
	if (func_616(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_189() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_189()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_615()
{
	return Global_2433098.f_574;
}

int func_616(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_617()
{
	return Global_2441381;
}

bool func_618()
{
	return Global_2433098.f_569;
}

void func_619(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_620(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
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

void func_620(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_649(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_621(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_621(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_622()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_623()
{
	if (!unk_0xDCC86F723E82125E(iLocal_447, 6))
	{
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			if (func_610() || func_336())
			{
				func_483(0, 4);
				unk_0x59A0729D503ED758(&iLocal_447, 6);
			}
		}
	}
	func_636(3, 3, -1);
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0x935FA14EDA695A82() == Local_194.f_33)
		{
			if (iLocal_749 >= 0)
			{
				func_554(&Local_460);
				func_553(&Local_460);
			}
		}
	}
	if (unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288()) == iLocal_453)
	{
		unk_0xCBD60E398042F554(unk_0xC8B93D94F8954288(), uLocal_455);
	}
	if (iLocal_749 > 0)
	{
		if (unk_0xDCC86F723E82125E(Local_194.f_1, 3))
		{
			func_547(unk_0xA34E7C2A5118D638(), 1, 0);
		}
	}
	func_635();
	if (Local_194.f_34 != -1)
	{
		if (unk_0xDCC86F723E82125E(iLocal_447, 5))
		{
			if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(Local_194.f_34)))
			{
				func_357(unk_0x20A20BF765914E37(Local_194.f_34), 432, 0);
				func_355(unk_0x20A20BF765914E37(Local_194.f_34), 1, 0);
				func_354(unk_0x20A20BF765914E37(Local_194.f_34), 0, 0);
				func_353(unk_0x20A20BF765914E37(Local_194.f_34), 0);
				func_352(unk_0x20A20BF765914E37(Local_194.f_34), Global_262145.f_10253, 0);
			}
		}
	}
	if (func_169(0))
	{
		func_168(0);
	}
	if (unk_0xDCC86F723E82125E(iLocal_448, 0))
	{
		if (!unk_0xDCC86F723E82125E(iLocal_448, 2))
		{
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
			unk_0x233432976E597324("BG_SIGHTSEER_STOP");
		}
	}
	unk_0x59A0729D503ED758(&iLocal_448, 8);
	func_165();
	unk_0xA8BDAEB412A162CC(1);
	func_582(0);
	func_625(1);
	unk_0x60B57BC5E51D2074(5);
	unk_0x77621132305B133B(&Global_2559466, 21);
	unk_0x77621132305B133B(&Global_2559466, 20);
	func_624();
}

void func_624()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_625(bool bParam0)
{
	if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 == 164)
	{
		unk_0x21F5FB3C8D48F7F5(3, 1);
		unk_0x21F5FB3C8D48F7F5(5, 1);
	}
	if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 != -1)
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 = -1;
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 14) && !func_110(unk_0xA34E7C2A5118D638()))
		{
			func_186(0);
		}
	}
	else if (func_633(unk_0xA34E7C2A5118D638()) != -1)
	{
		func_609(-1);
	}
	if (unk_0xDCC86F723E82125E(Global_1722044.f_3, 0))
	{
		unk_0xFD62177C7242216E(1f);
		unk_0x60B57BC5E51D2074(5);
		unk_0x77621132305B133B(&(Global_1722044.f_3), 0);
	}
	if (func_265(func_632()))
	{
		func_631(-1);
	}
	else
	{
		func_627(-1, 1);
	}
	func_183(19);
	func_183(20);
	func_183(21);
	func_183(22);
	func_183(27);
	func_168(3);
	func_168(4);
	func_168(7);
	func_626();
	if (func_200(unk_0xA34E7C2A5118D638()))
	{
		func_582(0);
	}
	func_183(29);
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51 = func_67();
	if (Global_2458121.f_4648.f_12 != 0)
	{
		Global_2458121.f_4648.f_12 = 0;
	}
	if (bParam0)
	{
		func_170();
	}
	if (!func_110(unk_0xA34E7C2A5118D638()))
	{
		func_182();
		unk_0x77621132305B133B(&(Global_1722044.f_3), 1);
	}
}

void func_626()
{
	if (func_203(unk_0xA34E7C2A5118D638()))
	{
		func_183(25);
	}
}

void func_627(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_632();
	}
	if (iParam0 > 0)
	{
		if (func_394() != func_67())
		{
			if (func_630(unk_0xA34E7C2A5118D638()) == unk_0xA34E7C2A5118D638())
			{
				Global_2457145.f_27[func_629(iParam0)] = 1;
			}
		}
		iVar0 = func_629(159);
		if (func_628(iVar0, Global_262145.f_10504, bParam1))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(157);
		if (func_628(iVar0, Global_262145.f_10504, bParam1))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(148);
		if (func_628(iVar0, Global_262145.f_10504, bParam1))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(164);
		if (func_628(iVar0, Global_262145.f_10504, bParam1))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(142);
		if (func_628(iVar0, Global_262145.f_10504, bParam1))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(152);
		if (func_628(iVar0, Global_262145.f_10504, bParam1))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_628(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_164(unk_0xA34E7C2A5118D638(), 19) && !func_164(unk_0xA34E7C2A5118D638(), 20)) && !func_164(unk_0xA34E7C2A5118D638(), 9))
		{
			return 0;
		}
	}
	if (Global_2457145.f_27[iParam0] == 1 && func_9(&(Global_2457145[iParam0 /*2*/])))
	{
		if (func_504(&(Global_2457145[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2457145.f_27[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_629(int iParam0)
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
	return -1;
}

int func_630(int iParam0)
{
	return Global_1608811[iParam0 /*109*/].f_9.f_30;
}

void func_631(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_632();
	}
	if (iParam0 > 0)
	{
		if (func_394() != func_67())
		{
			Global_2457145.f_27[func_629(iParam0)] = 1;
		}
		iVar0 = func_629(155);
		if (func_628(iVar0, Global_262145.f_10505, 0))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(163);
		if (func_628(iVar0, Global_262145.f_10505, 0))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(160);
		if (func_628(iVar0, Global_262145.f_10505, 0))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(153);
		if (func_628(iVar0, Global_262145.f_10505, 0))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(162);
		if (func_628(iVar0, Global_262145.f_10505, 0))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_629(154);
		if (func_628(iVar0, Global_262145.f_10505, 0))
		{
			func_218(&(Global_2457145[iVar0 /*2*/]));
			func_8(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_632()
{
	var uVar0;
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
	if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	return 0;
}

int func_633(int iParam0)
{
	if (func_634(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_27;
	}
	return -1;
}

int func_634(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_27 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_635()
{
	unk_0xC2389B725A8A1CD3(uLocal_454);
	unk_0xC2389B725A8A1CD3(iLocal_453);
}

void func_636(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
	Var1.f_0 = Global_1722053;
	Var1.f_1 = Global_1722053.f_1;
	Var1.f_2 = Global_1722053.f_2;
	Var1.f_3 = Global_1722053.f_3;
	Var1.f_4 = Global_1722053.f_4;
	Var1.f_5 = Global_1722053.f_5;
	Var1.f_6 = Global_1722053.f_6;
	Var1.f_7 = Global_1722053.f_7;
	Var1.f_8 = Global_1722053.f_8;
	Var1.f_9 = Global_1722053.f_9;
	Var1.f_10 = Global_1722053.f_10;
	Var1.f_11 = Global_1722053.f_11;
	Var1.f_12 = Global_1722053.f_12;
	Var1.f_13 = Global_1722053.f_14;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1722053.f_15;
			Var15.f_15 = Global_1722053.f_16;
			Var15.f_16 = Global_1722053.f_17;
			unk_0xECEB60B7E5C31816(&Var15);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1722053.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0xA39FEF598062DE3F(&Var32);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1722053.f_15;
			Var49.f_15 = iParam0;
			unk_0x412C6D45A38E39E4(&Var49);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1722053.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0x32DD01403AFD006E(&Var65);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1722053.f_15;
			Var82.f_15 = iParam0;
			unk_0xB730821280AE36AB(&Var82);
		}
		else if (unk_0xF8D041B05C3D1FD4(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1722053.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0x385248DCC08FEEA2(&Var98);
		}
	}
	func_637();
}

void func_637()
{
	struct<18> Var0;
	
	Global_1722053 = { Var0 };
}

void func_638(struct<20> Param0)
{
	func_647(func_648(Param0.f_0), Param0);
	unk_0x898BA9C42084F452(3);
	func_645(0, -1, 0);
	unk_0xFE7B095449D5F053(&Local_194, 60);
	unk_0x99592530153DB318(&Local_254, 193);
	if (!func_644())
	{
		func_623();
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		unk_0x6ECAEE4901F465A1(0);
		if (unk_0x736DBE187CFCC863())
		{
		}
		func_643();
		func_639(0, 0);
		Local_254[unk_0x935FA14EDA695A82() /*6*/] = 0;
	}
	else
	{
		func_623();
	}
}

void func_639(int iParam0, int iParam1)
{
	func_642();
	if ((iParam0 != 0 && unk_0xDF73DA5E2287C499(iParam1)) && func_641(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x59A0729D503ED758(&Global_1722039, 0);
				break;
			}
	}
	if (!func_604() && !func_232(unk_0xA34E7C2A5118D638(), 1))
	{
		if (func_332())
		{
			func_185(3);
		}
		func_185(4);
	}
	if (func_395(0))
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51 = func_394();
	}
	func_640();
}

void func_640()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330242.f_527[iVar0 /*47*/].f_1 = func_67();
		Global_1330242.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_641(int iParam0, bool bParam1)
{
	return func_267(unk_0xA34E7C2A5118D638(), iParam0, bParam1);
}

void func_642()
{
	struct<14> Var0;
	
	Global_1722053 = { Var0 };
	Global_1722053.f_14 = 0;
	Global_1722053.f_15 = 0;
}

void func_643()
{
}

int func_644()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_618())
		{
			return 0;
		}
		if (func_616(155))
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

int func_645(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_624();
			}
			else
			{
				return 0;
			}
		}
		if (!func_646())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_624();
					}
					else
					{
						return 0;
					}
				}
				if (func_618())
				{
					if (!bParam2)
					{
						func_624();
					}
					else
					{
						return 0;
					}
				}
				if (func_616(155))
				{
					if (!bParam2)
					{
						func_624();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_624();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_624();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_624();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_646()
{
	return Global_1315886;
}

void func_647(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_624();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_648(int iParam0)
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

int func_649(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

