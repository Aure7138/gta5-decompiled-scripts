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
	var uLocal_153 = 10;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 2;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 8;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 8;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	float fLocal_186 = 0f;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	float fLocal_191 = 0f;
	float fLocal_192 = 0f;
	float fLocal_193 = 0f;
	var uLocal_194 = 0;
	struct<60> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_255[32];
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	var uLocal_456 = 0;
	struct<3> Local_457 = { 0, 0, 0 } ;
	var uLocal_460 = 0;
	struct<18> Local_461 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 1015222895;
	var uLocal_485 = 1021665346;
	var uLocal_486 = 0;
	var uLocal_487 = 255;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = -1;
	var uLocal_497 = 996499522;
	var uLocal_498 = 1002740646;
	var uLocal_499 = 0;
	var uLocal_500 = 60;
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
	var uLocal_561 = 1016296636;
	var uLocal_562 = 220;
	var uLocal_563 = 255;
	var uLocal_564 = 255;
	var uLocal_565 = 255;
	var uLocal_566 = 255;
	var uLocal_567 = 255;
	var uLocal_568 = 255;
	var uLocal_569 = 4096;
	var uLocal_570 = 40;
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
	var uLocal_738 = 0;
	var uLocal_739 = 4;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 1065353216;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 1056964608;
	var uLocal_749 = 1056964608;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	struct<3> Local_756[20];
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
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
	fLocal_186 = ((0.05f + 0.275f) - 0.01f);
	fLocal_189 = -0.05f;
	fLocal_190 = 0.92f;
	fLocal_191 = 1.94f;
	fLocal_192 = 2.99f;
	fLocal_193 = 3.7f;
	iLocal_750 = -1;
	iLocal_751 = -1;
	iLocal_753 = -1;
	iLocal_754 = -1;
	if (unk_0x63C468D583002D23() && func_835(unk_0xBE369BE1BC57A796(), 0, 1))
	{
		func_819(ScriptParam_0);
	}
	else
	{
		func_768();
	}
	while (true)
	{
		func_767();
		if (func_759())
		{
			func_768();
		}
		Global_1763183.f_2 = Local_195.f_58;
		Global_1763183.f_3 = Local_195.f_59;
		switch (func_758(unk_0xCA1D9459B2CC7619()))
		{
			case 0:
				if (func_757() == 1)
				{
					func_756();
					if (func_755())
					{
						func_740(142, 1, -1, 1);
						unk_0x6751FA44D6CA586D(3);
						if (!func_739())
						{
							unk_0x22B080FDD555C5D2(unk_0xBE369BE1BC57A796(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_740(142, 0, -1, 1);
						unk_0x22B080FDD555C5D2(unk_0xBE369BE1BC57A796(), joaat("pickup_portable_package"), 0);
					}
					Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 1;
				}
				else if (func_757() == 4)
				{
					Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_736(1))
				{
					Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 2;
				}
				if (func_757() == 1)
				{
					func_383();
					func_380();
					if (func_755() || func_379())
					{
						func_232(&(Global_1342917.f_527), &Global_1342917, 26, &(Global_1342917.f_1), &(Global_1342917.f_110), -1, 0);
					}
					func_182();
				}
				else if (func_757() == 4)
				{
					Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 3;
				}
				func_179();
				break;
			
			case 3:
				func_178(&(Local_195.f_49));
				if (func_177(&(Local_195.f_49)))
				{
					Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 4;
			
			case 4:
				func_768();
				break;
		}
		if (unk_0x415DF132F15085E8())
		{
			switch (func_757())
			{
				case 0:
					if (func_170())
					{
						unk_0x6C788331C7A4D6DA(&(Local_195.f_58), &(Local_195.f_59));
						Local_195.f_0 = 1;
						Local_195.f_33 = unk_0xCA1D9459B2CC7619();
						Local_195.f_34 = unk_0xBE369BE1BC57A796();
						func_740(142, 1, -1, 1);
					}
					break;
				
				case 1:
					func_168();
					func_4();
					if (func_2())
					{
						Local_195.f_0 = 4;
					}
					else if (func_1())
					{
						Local_195.f_0 = 4;
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
	if (Global_2494199.f_4710.f_20)
	{
		Global_2494199.f_4710.f_20 = 0;
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
	if (unk_0x48B8265059381CD0(Local_195.f_1, 2))
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
	switch (Local_195.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (unk_0x48B8265059381CD0(Local_195.f_1, 1))
			{
				Local_195.f_32 = 2;
			}
			else if (unk_0x48B8265059381CD0(Local_195.f_1, 3))
			{
				Local_195.f_32 = 2;
			}
			else if (unk_0x48B8265059381CD0(Local_195.f_1, 4))
			{
				Local_195.f_32 = 2;
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
	if (Local_195.f_5 == 0)
	{
		if (!unk_0x48B8265059381CD0(Local_195.f_1, 6))
		{
			if (!func_9(&(Local_195.f_53)))
			{
				func_8(&(Local_195.f_53), 0, 0);
			}
			else if (func_6(&(Local_195.f_53), func_7(), 0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_195.f_1), 6);
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
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
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
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
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
	if (!func_9(&(Local_195.f_51)))
	{
		func_8(&(Local_195.f_51), 0, 0);
	}
	else if (func_6(&(Local_195.f_51), func_11(), 0))
	{
		unk_0xEB79FECD9022AAF0(&(Local_195.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_11122;
}

void func_12()
{
	int iVar0;
	
	if (Local_195.f_33 < 0)
	{
		return;
	}
	if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(Local_195.f_33)))
	{
		if (Local_255[Local_195.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_255[Local_195.f_33 /*6*/].f_4 - 1);
			if (!unk_0x48B8265059381CD0(Local_195.f_4, iVar0))
			{
				Local_195.f_36 = iVar0;
				if (func_13())
				{
					unk_0xEB79FECD9022AAF0(&(Local_195.f_4), iVar0);
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
	if (!unk_0x841F312D66362BF7(Local_195.f_3))
	{
		unk_0xE1324F59713746FA(iVar0);
		if (unk_0x9F746898F7881612(iVar0))
		{
			if (unk_0xF4C0E5422B82B8AF(1))
			{
				Var27 = { func_167() };
				if (func_14(Var27, 5f, &Local_457, &uLocal_460, Var1))
				{
					Local_195.f_3 = unk_0x2FE9A6B7899D979E(unk_0xD464E492B2F858BA(joaat("pickup_portable_package"), Local_457, 1, iVar0));
					unk_0x394AE1BE8F25AC5B(unk_0xF9D7EA2FA85E2505(Local_195.f_3), Local_457 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x924CDE68BA2ED3BA(iVar0);
					unk_0xC6042F55A6EA17B2(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 1);
					unk_0xF7597986B9A57634(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 1);
					unk_0xF880A68A9F678D9F(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 1);
					unk_0xBDE4C59FD939CE4E(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 0);
					unk_0x87C7282B1F6CFE6C(unk_0xF9D7EA2FA85E2505(Local_195.f_3));
					func_8(&(Local_195.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0x841F312D66362BF7(Local_195.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
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
	bool bVar84;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404994.f_2024 == *uParam0 || !Global_2404994.f_2024.f_1 == uParam0->f_1) || !Global_2404994.f_2024.f_2 == uParam0->f_2) || !Global_2404994.f_2027 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404994.f_2038 == uParam0->f_8 || !Global_2404994.f_2038.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2038.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2041 == uParam0->f_11) || !Global_2404994.f_2041.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2041.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404994.f_2038 == uParam0->f_8 || !Global_2404994.f_2038.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2038.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2041 == uParam0->f_11) || !Global_2404994.f_2041.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2041.f_2 == uParam0->f_11.f_2) || !Global_2404994.f_2044 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404994.f_2022 == 1)
		{
			if (unk_0x1EFA84312BB8AA22(Global_2404994.f_2031))
			{
				if (Global_2404994.f_2031 == unk_0xE9A5FDFDC239B2ED())
				{
					if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2028) < func_166(0))
					{
						return 0;
					}
				}
				else if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2028) < func_166(0))
				{
					return 0;
				}
			}
			unk_0xE54EC49C3C147EF3();
			unk_0xBCEB75150E4BCF86();
			func_165();
		}
		Global_2404994.f_2022 = 0;
	}
	else if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2028) > func_166(0))
	{
		Global_2404994.f_2029 = unk_0xCB150A8B81012128();
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
	unk_0x0A53F2AFCE4F39E0(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404994.f_2022)
	{
		unk_0xE54EC49C3C147EF3();
		unk_0xBCEB75150E4BCF86();
		func_165();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_164(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xE2C518FA28FDAE2D())
		{
			Global_2404994.f_2045 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404994.f_2024 = { *uParam0 };
					Global_2404994.f_2027 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404994.f_2038 = { uParam0->f_8 };
					Global_2404994.f_2041 = { uParam0->f_11 };
					Global_2404994.f_2044 = 0f;
					Global_2404994.f_2024 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404994.f_2038 = { uParam0->f_8 };
					Global_2404994.f_2041 = { uParam0->f_11 };
					Global_2404994.f_2044 = uParam0->f_14;
					Global_2404994.f_2024 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_163(Var8.f_0, Var8.f_1);
			}
			Global_2404994.f_2023 = 1;
			Global_2404994.f_2022 = 1;
			Global_2404994.f_2029 = unk_0xCB150A8B81012128();
			Global_2404994.f_2028 = unk_0xCB150A8B81012128();
			Global_2404994.f_2031 = unk_0xE9A5FDFDC239B2ED();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404994.f_2022)
	{
		if (Global_2404994.f_2023 == 1)
		{
			if (unk_0x9DBC66CA24B0F4B8(fVar4, fVar5, fVar6, fVar7) || unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2029) > 5000)
			{
				Global_2404994.f_2029 = unk_0xCB150A8B81012128();
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
					func_144(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_143(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404994.f_2023 = 9;
				}
				else
				{
					Global_2404994.f_2023 = 2;
				}
			}
		}
		if (Global_2404994.f_2023 == 2)
		{
			if ((unk_0xE99D6523008CCDE1(Var11, Var14) || unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2029) > 15000) || unk_0x6DD4F596D2035322(Var11, Var14) == 0)
			{
				Global_2404994.f_2029 = unk_0xCB150A8B81012128();
				if (uParam0->f_5 && !func_140(unk_0xBE369BE1BC57A796(), 0))
				{
					Global_2404994.f_2023 = 3;
				}
				else
				{
					Global_2404994.f_2023 = 4;
				}
			}
			else if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2033) > 7000)
			{
				func_139(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404994.f_2023 == 3)
		{
			if (func_138() || unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2029) > 10000)
			{
				Global_2404994.f_2029 = unk_0xCB150A8B81012128();
				Global_2404994.f_2023 = 4;
			}
		}
		if (Global_2404994.f_2023 == 4)
		{
			if (unk_0xE2C518FA28FDAE2D())
			{
				unk_0xE54EC49C3C147EF3();
				unk_0xBCEB75150E4BCF86();
			}
			else
			{
				iVar0 = 0;
				func_132();
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
					if (!unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
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
							if (unk_0xE6B73608C068F565(unk_0xBE369BE1BC57A796(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404994.f_2029 = unk_0xCB150A8B81012128();
								Global_2404994.f_2023 = 5;
							}
							break;
						
						case 1:
							func_131(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x42DDA1362F36AC50(unk_0xBE369BE1BC57A796(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404994.f_2029 = unk_0xCB150A8B81012128();
								Global_2404994.f_2023 = 5;
							}
							break;
						
						case 2:
							if (unk_0x42DDA1362F36AC50(unk_0xBE369BE1BC57A796(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404994.f_2029 = unk_0xCB150A8B81012128();
								Global_2404994.f_2023 = 5;
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
					Global_2404994.f_2029 = unk_0xCB150A8B81012128();
					Global_2404994.f_2023 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x3E246E05AB7A5831(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_131(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x4E6A0A2C891E0ECB(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x4E6A0A2C891E0ECB(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404994.f_2023 == 5)
		{
			if (func_59(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404994.f_2049.f_5)
				{
					Global_2404994.f_2029 = unk_0xCB150A8B81012128();
					Global_2404994.f_2023 = 6;
				}
				else
				{
					Global_2404994.f_2029 = unk_0xCB150A8B81012128();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xC659BC2E3EDC150A(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404994.f_2023 = 9;
				}
			}
			else if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2029) > 20000)
			{
				unk_0xE54EC49C3C147EF3();
				unk_0xBCEB75150E4BCF86();
				Global_2404994.f_2029 = unk_0xCB150A8B81012128();
				Global_2404994.f_2023 = 8;
			}
		}
		if (Global_2404994.f_2023 == 6)
		{
			iVar0 = 0;
			Global_2404994.f_2049.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_58(uParam0->f_4))
				{
					if (unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_57(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Var8)))
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
			Global_2404994.f_2029 = unk_0xCB150A8B81012128();
			Global_2404994.f_2023 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x3E246E05AB7A5831(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_131(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x4E6A0A2C891E0ECB(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x4E6A0A2C891E0ECB(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404994.f_2023 == 7)
		{
			if (func_59(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404994.f_2160[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_143(Global_2404994.f_2160[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2160[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_55(Global_2404994.f_2160[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2160[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x3D559A6AF62756C4(Global_2404994.f_2160[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2160[iVar17 /*3*/] };
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
				Global_2404994.f_2029 = unk_0xCB150A8B81012128();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xC659BC2E3EDC150A(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404994.f_2023 = 9;
			}
			else if (unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), Global_2404994.f_2029) > 20000)
			{
				Global_2404994.f_2029 = unk_0xCB150A8B81012128();
				Global_2404994.f_2023 = 8;
			}
		}
		if (Global_2404994.f_2023 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404994.f_477))
				{
				}
			}
			else if (Global_2404994.f_2049.f_2)
			{
				func_16(uParam2, &(Global_2404994.f_2049.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar84 = false;
				}
				else
				{
					bVar84 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404994.f_2024 };
				func_18(uParam2[0 /*3*/], 0, bVar84, 0, 0, uParam0, uParam1);
			}
			Global_2404994.f_2029 = unk_0xCB150A8B81012128();
			Global_2404994.f_2023 = 9;
		}
		if (Global_2404994.f_2023 == 9)
		{
			Global_2404994.f_2022 = 0;
			unk_0xE54EC49C3C147EF3();
			unk_0xBCEB75150E4BCF86();
			func_165();
			return 1;
		}
		Global_2404994.f_2028 = unk_0xCB150A8B81012128();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*9*/];
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
	var uVar62;
	int iVar63;
	bool bVar64;
	int iVar65;
	struct<3> Var66;
	struct<3> Var69;
	struct<3> Var72;
	float fVar75;
	
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
		iVar65 = 0;
	}
	else
	{
		iVar65 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar65 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var66 = { *uParam5 };
						if (func_58(uParam5->f_4) || !unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 1:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 2:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Var66)))
						{
							iVar65 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar65 += 4;
		}
	}
	if (func_20(*uParam0, &Var0, iVar65, iParam3, 1))
	{
	}
	else
	{
		bVar64 = true;
	}
	if (bVar64)
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
		iVar63 = 0;
		while (iVar63 < 2)
		{
			Var4.f_38[iVar63 /*3*/] = { uParam6->f_13[iVar63 /*3*/] };
			Var4.f_45[iVar63] = uParam6->f_20[iVar63];
			iVar63++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_144(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var69 = { *uParam5 };
				fVar75 = uParam5->f_4;
				break;
			
			case 1:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				break;
			
			case 2:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				fVar75 = uParam5->f_14;
				break;
		}
		if (!func_19(Var0, uParam5->f_7, Var69, Var72, fVar75))
		{
			if (func_20(*uParam0, &Var0, iVar65, iParam3, 0))
			{
				if (!func_19(Var0, uParam5->f_7, Var69, Var72, fVar75))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var69 };
					}
					if (unk_0x4F34E573D7F5024B(Var0, &uVar62, 0))
					{
						Var0.f_2 = uVar62;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var69 };
				}
				if (unk_0x4F34E573D7F5024B(Var0, &uVar62, 0))
				{
					Var0.f_2 = uVar62;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404994.f_621 = 1;
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
			return func_55(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x3D559A6AF62756C4(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_54(Param0, uParam3))
	{
		if (func_21(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xA9CBE5CF275A6B93(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_36(Global_2404994.f_498, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2410147[iVar4])
	{
		if (func_26(Var1, &(Global_2409318[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409318[iVar4 /*92*/][iVar0 /*7*/], Global_2409318[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409318[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410147[8])
	{
		if (func_26(Var1, &(Global_2409318[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409318[iVar4 /*92*/][iVar0 /*7*/], Global_2409318[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409318[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xB1B7184870BDC5CC(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xB1B7184870BDC5CC(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0x3D559A6AF62756C4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_27(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410157[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410157[1])
	{
		if (Param0.f_0 < Global_2410161[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410157[2])
	{
		if (Param0.f_0 < Global_2410161[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410161[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410161[3])
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
	
	if (func_33(unk_0xBE369BE1BC57A796(), 1))
	{
		if (Global_1633501.f_44917 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1633501.f_44917)
			{
				if (Global_1633501.f_44918[iVar0 /*61*/].f_7 != 0)
				{
					if (func_29(Param0, Global_1633501.f_44918[iVar0 /*61*/], Global_1633501.f_44918[iVar0 /*61*/].f_6, Global_1633501.f_44918[iVar0 /*61*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1633501.f_42635 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1633501.f_42635)
			{
				if (Global_1633501.f_42638[iVar0 /*93*/].f_16 != 0)
				{
					if (func_29(Param0, Global_1633501.f_42638[iVar0 /*93*/], Global_1633501.f_42638[iVar0 /*93*/].f_3, Global_1633501.f_42638[iVar0 /*93*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1633501.f_57267 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1633501.f_57267)
			{
				if (Global_1633501.f_57271[iVar0 /*138*/].f_12 != 0)
				{
					if (func_29(Param0, Global_1633501.f_57271[iVar0 /*138*/], Global_1633501.f_57271[iVar0 /*138*/].f_3, Global_1633501.f_57271[iVar0 /*138*/].f_12, 0.5f))
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
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_32(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_31(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_30(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xE851F22ED3518011((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xE851F22ED3518011((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xE851F22ED3518011((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x3D559A6AF62756C4(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_30(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x152BAD1BB44F2768(iParam0))
	{
		unk_0x9475086C69ACF470(iParam0, fParam1, fParam2);
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

void func_31(var uParam0, struct<3> Param1)
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

float func_32(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_30(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_34(iParam0))
		{
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)
{
	return func_35(iParam0);
}

bool func_35(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

int func_36(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_48(Param0))
	{
		if (func_47(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_39(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_38(*uParam3, 1056964608))
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
				func_37(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_37(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_31(&Var0, 0f, 0f, unk_0x6B1497B2FDBC8466(0f, 360f));
		}
		else
		{
			func_31(&Var0, 0f, 0f, fParam7);
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

int func_38(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_2263[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_39(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_44(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_41(&Var2, &(Global_2404994.f_356[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_44(Var2, &uVar1) || func_40(Var2))
			{
				Var2 = { *uParam0 };
				func_41(&Var2, &(Global_2404994.f_356[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_40(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404994.f_566 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_563);
		if (fVar0 < Global_2404994.f_566)
		{
			return 1;
		}
	}
	return 0;
}

void func_41(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_43(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2261) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_43(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_43(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_37(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2261) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_42(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_23(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_42(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_43(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_37(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_42(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_23(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x50FED0D38D06E0E6(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_143(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_55(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x3D559A6AF62756C4(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_44(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_46();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404994.f_356[iVar0 /*12*/].f_9 == 1)
		{
			if (func_45(Param0, &(Global_2404994.f_356[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_143(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404994.f_2261) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_55(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x3D559A6AF62756C4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x3D559A6AF62756C4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x3D559A6AF62756C4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x3D559A6AF62756C4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404994.f_356[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_47(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409181[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409181[iVar0 /*17*/].f_16))
			{
				if (func_45(*uParam0, &(Global_2409181[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409181[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409181[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_41(&Var1, &(Global_2409181[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_47(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_41(&Var1, &(Global_2409181[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_48(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404994.f_501)
	{
		if (!Global_2404994.f_43.f_311)
		{
			if (!func_52(unk_0xBE369BE1BC57A796(), 1))
			{
				return 1;
			}
			if (!func_51(Param0, 1008981770))
			{
				if (!func_47(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_47(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_50(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_49(&(Global_2404994.f_43[iVar0 /*12*/])) };
					if (!func_47(&Var1, 0, 0, 0))
					{
						if (!func_47(&Param0, 0, 0, 0))
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

Vector3 func_49(var uParam0)
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

int func_50(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_45(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_51(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_45(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_52(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_53(iParam0) != 0;
	}
	return func_33(iParam0, bParam1);
}

int func_53(int iParam0)
{
	if (func_835(iParam0, 0, 1))
	{
		return Global_2421664[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_54(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404994.f_1820 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1820)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404994.f_1821[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404994.f_1821[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_55(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_56(&Param3, &Param6);
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

void func_56(var uParam0, var uParam1)
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

int func_57(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_58(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404994.f_2049.f_1 == 0 && Global_2404994.f_2049 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x0395226B0E4E32A3(&(Global_2404994.f_2049.f_1)))
			{
				case 0:
					func_129(uParam1, uParam2);
					if (!Global_2404994.f_2049.f_2)
					{
						if (uParam2->f_7 && Global_2404994.f_530.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404994.f_2024 };
							}
							if (uParam1->f_5 && func_17(Global_2404994.f_477))
							{
								if (!Global_2404994.f_2049.f_5)
								{
									Global_2404994.f_2049.f_5 = 1;
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
							uParam0->f_10[0] = unk_0x6B1497B2FDBC8466(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_129(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xE2C518FA28FDAE2D())
		{
			if (!unk_0x9F1C1332924286B5())
			{
				if (unk_0x32D4530B5165CC53())
				{
					func_129(uParam1, uParam2);
					Global_2404994.f_2049.f_1 = unk_0x7A0B126704E4302C();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xBCEB75150E4BCF86();
				func_129(uParam1, uParam2);
				if (!Global_2404994.f_2049.f_2)
				{
					Global_2404994.f_2049.f_5 = 1;
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
		func_126(Global_2404994.f_530, &(Global_2404994.f_2049.f_34), &(Global_2404994.f_2049.f_67));
	}
	if (uParam2->f_7 && !Global_2404994.f_2049.f_4)
	{
		Global_2404994.f_2049.f_4 = 1;
		func_67(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404994.f_2049.f_1 > 0 || Global_2404994.f_2049 > 0)
	{
		if (uParam1->f_5 || unk_0xE2C518FA28FDAE2D())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404994.f_2049.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404994.f_2049.f_3)
					{
						iVar4 = Global_2404994.f_2049.f_3 + 1;
					}
					if (iVar4 > (Global_2404994.f_2049.f_1 - 1))
					{
						iVar4 = (Global_2404994.f_2049.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x93658CC9BA453FA2(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x6C30149E7BBB83AC(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x1073EF7BBEACF9D9(iVar4);
					}
					else
					{
						unk_0x9CB3CC62C0C0C0A3(iVar4, &iVar5);
					}
					func_67(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404994.f_2049.f_3 = iVar4;
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
			iVar4 = Global_2404994.f_2049.f_1;
		}
		if (Global_2404994.f_2049.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404994.f_2354)
			{
				func_61(&(Global_2404994.f_2049.f_6[0 /*9*/]), &(Global_2404994.f_2049.f_6[1 /*9*/]), &(Global_2404994.f_2049.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_17(Global_2404994.f_477))
			{
				if (Global_2404994.f_2049.f_2)
				{
					func_16(uParam0, &(Global_2404994.f_2049.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2024 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x6B1497B2FDBC8466(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404994.f_2049.f_2)
			{
				func_16(uParam0, &(Global_2404994.f_2049.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x0E29C61F26D96FDB(0, Global_2404994.f_2049.f_1);
				unk_0x93658CC9BA453FA2(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_22(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2024 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x6B1497B2FDBC8466(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404994.f_2024 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x6B1497B2FDBC8466(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404994.f_2024 };
		if (uParam1->f_5 && func_17(Global_2404994.f_477))
		{
			if (!Global_2404994.f_2049.f_5)
			{
				Global_2404994.f_2049.f_5 = 1;
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
		uParam0->f_10[0] = unk_0x6B1497B2FDBC8466(0f, 360f);
		func_60(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_60(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404994.f_2160[(3 - iVar0) /*3*/] = { Global_2404994.f_2160[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404994.f_2160[0 /*3*/] = { Param0 };
}

void func_61(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2404994.f_477) && func_66() < 4096)
	{
		func_65(uParam0, 0f);
		func_65(uParam1, uParam0->f_2);
		func_65(uParam2, uParam1->f_2);
	}
	else
	{
		func_64(uParam0);
		func_63(uParam2, uParam0->f_4);
		func_62(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_62(var uParam0, struct<3> Param1, struct<3> Param4)
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
		if (Global_2407352[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407352[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407352[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407352[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407352[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_63(var uParam0, struct<3> Param1)
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
		if (Global_2407352[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407352[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407352[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407352[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_64(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407352[iVar0 /*9*/] > 0)
		{
			if (Global_2407352[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407352[iVar0 /*9*/].f_1;
				Var2 = { Global_2407352[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_65(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407352[iVar0 /*9*/] > 0)
		{
			if (Global_2407352[iVar0 /*9*/].f_2 < fVar1 && Global_2407352[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407352[iVar0 /*9*/].f_2;
				Var2 = { Global_2407352[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_66()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407352[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407352[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_67(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2404994.f_477 == 1)
		{
			if (unk_0xE851F22ED3518011((Global_2404994.f_498.f_2 - Param0.f_2)) < 25f)
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
		if (func_123(unk_0xBE369BE1BC57A796()))
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
		if (!func_122(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x1440A1A03AFAAE7C(unk_0x17B5CC8A8615737D(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x1440A1A03AFAAE7C(unk_0x17B5CC8A8615737D(), Param0, 20f))
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
		if (!func_121(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_115(Param0, fParam3, uParam4->f_15, func_120(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404994.f_3;
		}
	}
	else if (!func_112(Param0, 25f, unk_0xBE369BE1BC57A796(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_111(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_111(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_643)
		{
			Var11 = { Global_2404994.f_498 };
			if (Global_2404994.f_477 == 26)
			{
				Var11 = { Global_2404994.f_530.f_18 };
			}
			if (func_48(Var11))
			{
				if (!func_47(&Param0, 0, 0, 0) && !func_110(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_110(&Param0, 0) && !func_38(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_109(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_108(unk_0xBE369BE1BC57A796()) && func_106(unk_0xBE369BE1BC57A796())))
		{
			if (!func_105(&Param0, &(Global_2404994.f_2049.f_67), 0, 1065353216))
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
		if (!func_106(unk_0xBE369BE1BC57A796()))
		{
			if (!func_104(Param0, &(Global_2404994.f_2049.f_34), &(Global_2404994.f_2049.f_67), 1073741824))
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
	if (func_103(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_17(Global_2404994.f_477))
			{
				if (func_51(Param0, 0.01f))
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
		if (func_102(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404994.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x623BDE1B17A9D9E3(unk_0x1A4C1C534F86E06A(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_643)
		{
			if (!func_39(&Param0, 0, 0))
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
		iVar15 = func_50(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_101(Param0, &Var16, &Var19, &fVar22);
			if (!func_96(&(Global_2404994.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
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
	else if (func_95(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404994.f_2354 && uParam4->f_5)
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
				fVar0 = func_87(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_87(Param0, Global_2404994.f_2024, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2404994.f_477) && iVar7 < 4096)
			{
				Var24.f_2 = func_85(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_84(Var24);
			Global_2404994.f_2049.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (iVar7 >= Global_2404994.f_2049.f_6[iVar23 /*9*/])
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
							fVar0 = func_87(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_87(Param0, Global_2404994.f_2024, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_17(Global_2404994.f_477) && iVar7 == Global_2404994.f_2049.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_85(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404994.f_2049.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_83(Var24, iVar23);
							Global_2404994.f_2049.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404994.f_2049.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2049.f_6[iVar23 /*9*/] && fVar0 > Global_2404994.f_2049.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_83(Var24, iVar23);
						Global_2404994.f_2049.f_2 = 1;
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
						fVar5 = func_82(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_69(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_68(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_68(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404994.f_2049.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2049.f_6[iVar23 /*9*/] && fVar3 > Global_2404994.f_2049.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_83(Var24, iVar23);
						Global_2404994.f_2049.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_68(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_69(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_835(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xBE369BE1BC57A796() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_72(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0xB58DEBB81964A4E9(iVar11) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
					{
						if (!unk_0xB58DEBB81964A4E9(iVar11) == -1 || !func_52(unk_0xBE369BE1BC57A796(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar11) || !bParam6)
					{
						if (func_71(iVar11))
						{
							Var5 = { func_70(iVar11) };
							if (!iVar11 == unk_0xBE369BE1BC57A796())
							{
								Var8 = { unk_0x0A63CECA35CE9BEE(unk_0xDF7CE83326F434E9(iVar11)) };
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
							fVar1 = unk_0x3DC4639D5F23DEA2(Param0, Var5, 1);
							fVar2 = unk_0x3DC4639D5F23DEA2(Param0, Var8, 1);
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

Vector3 func_70(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

int func_71(int iParam0)
{
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_835(iParam0, 0, 1))
	{
		if (!func_80(iParam0))
		{
			if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam0))
			{
				if (!unk_0xB58DEBB81964A4E9(iParam0) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
				{
					if (func_33(unk_0xBE369BE1BC57A796(), 1))
					{
						if (!func_79(unk_0xB58DEBB81964A4E9(iParam0), unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
				{
					if (!func_33(unk_0xBE369BE1BC57A796(), 1))
					{
						if (!func_73(iParam0))
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

int func_73(int iParam0)
{
	if (func_78(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	Global_2482053 = { func_77(iParam0) };
	if (unk_0x2D5BDD3304DD4725(&Global_2482053))
	{
		return 1;
	}
	if (func_74(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_75())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_75()
{
	return -1;
}

int func_76(int iParam0)
{
	if (iParam0 != func_75())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_75();
}

struct<13> func_77(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_77(iParam0) };
		Global_2482066 = { func_77(iParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)
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
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 1);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 2);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 5);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 6);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 8);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 9);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 10);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 12);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 13);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 14);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return 1;
	}
	if (func_81())
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

bool func_81()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

float func_82(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_835(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0));
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
		if (func_835(iVar1, 1, 1))
		{
			if (!func_140(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if (func_71(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam7 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iVar1), 0));
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

void func_83(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404994.f_2049.f_6[iParam9 /*9*/] };
	Global_2404994.f_2049.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 2)
	{
		func_83(Var0, iParam9 + 1);
	}
}

void func_84(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_66();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407352[iVar0 /*9*/] < iVar10)
		{
			Global_2407352[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407352[iVar0 /*9*/] == 0)
		{
			Global_2407352[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407352[iVar0 /*9*/] > 0)
		{
			if (Global_2407352[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407352[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407352[iVar12 /*9*/] = { Param0 };
	}
}

float func_85(struct<3> Param0)
{
	var uVar0;
	
	return func_86(Param0, &(Global_2404994.f_43), &uVar0);
}

float func_86(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404994.f_2261) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_87(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_68(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_69(Param0, 1, 0, 0, 1);
	fVar0 = func_68(fVar4, 0f, func_94(), func_92(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_90(Param0);
	fVar0 = func_68(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && !func_52(unk_0xBE369BE1BC57A796(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_89(Param0, unk_0xBE369BE1BC57A796(), 0);
	fVar0 = func_68(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_88(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_68(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_68(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_68(unk_0x2A488C176D52CCA5(Global_2404994.f_498, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_88(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xD32DAE938BCBE6B7(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x9B205E72C3C3D4D2(uVar3))
	{
		unk_0x6C75B0230559CABB(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xE851F22ED3518011((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_89(struct<3> Param0, int iParam3, int iParam4)
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
			if (func_835(iVar3, 0, 1))
			{
				if (unk_0xB58DEBB81964A4E9(iVar3) != unk_0xB58DEBB81964A4E9(iParam3) || (unk_0xB58DEBB81964A4E9(iVar3) == -1 && unk_0xB58DEBB81964A4E9(iParam3) == -1))
				{
					if (Global_2415716.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415716.f_130[iVar2 /*3*/], Param0);
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

float func_90(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x537143BA63A7EEFE(unk_0x17B5CC8A8615737D(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x23E9113C762466ED(uVar6[iVar2]))
		{
			if (!unk_0xA929B2923D14E2F8(uVar6[iVar2], 0))
			{
				if (func_91(uVar6[iVar2]))
				{
					Var3 = { unk_0x57240623C1BC6E88(uVar6[iVar2], 1) };
					fVar1 = unk_0x3DC4639D5F23DEA2(Param0, Var3, 1);
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

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7B619B0C33282280(uParam0);
	switch (unk_0x380FD986263724B3(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x380FD986263724B3(iVar0, Global_1574687[unk_0xBE369BE1BC57A796()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 0)
	{
		iVar1 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x380FD986263724B3(iVar0, Global_1574398[iVar1]))
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

float func_92()
{
	if (func_93())
	{
		if ((unk_0x8432EA469FDB418D(Global_2404994.f_43.f_67) || unk_0xC5082382D5482C0C(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
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

int func_93()
{
	if (Global_2404994.f_43.f_65 && !Global_2404994.f_43.f_298)
	{
		if (!func_80(unk_0xBE369BE1BC57A796()))
		{
			return 1;
		}
	}
	return 0;
}

float func_94()
{
	if (func_93())
	{
		if ((unk_0x8432EA469FDB418D(Global_2404994.f_43.f_67) || unk_0xC5082382D5482C0C(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
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

int func_95(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x47865C56C9B1EFE6(Param0, fParam7)) || (fVar0 > 0f && unk_0x3FDEBC0190C73055(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xC3CEDFD4651E42EC(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xC3CEDFD4651E42EC(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_100(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_99(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_97(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_97(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_98(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x3D559A6AF62756C4(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_98(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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

int func_99(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0x3D559A6AF62756C4(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_100(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0x3D559A6AF62756C4(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_101(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_27(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410147[iVar4])
	{
		if (func_26(Var1, &(Global_2409318[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409318[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409318[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409318[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410147[8])
	{
		if (func_26(Var1, &(Global_2409318[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409318[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409318[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409318[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_102(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404994.f_43.f_55)
	{
		if (unk_0x623BDE1B17A9D9E3(Global_2404994.f_43.f_56))
		{
			if (!unk_0xB0A41EC77A49B189(Param0))
			{
				uVar0 = unk_0x1A4C1C534F86E06A(Param0);
				if (unk_0x623BDE1B17A9D9E3(uVar0))
				{
					iVar1 = unk_0x138D1E72F238B873(uVar0);
					if (!iVar1 == Global_2404994.f_43.f_57)
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

int func_103(struct<3> Param0)
{
	switch (Global_2404994.f_2045)
	{
		case 0:
			return func_143(Param0, Global_2404994.f_2024, Global_2404994.f_2027, 0, 0);
			break;
		
		case 1:
			return func_55(Param0, Global_2404994.f_2038, Global_2404994.f_2041, 0, 0);
			break;
		
		case 2:
			return unk_0x3D559A6AF62756C4(Param0, Global_2404994.f_2038, Global_2404994.f_2041, Global_2404994.f_2044, 0, 1);
			break;
	}
	return 0;
}

int func_104(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x3D559A6AF62756C4(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_37(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_107(iParam0))
			{
				if (Global_1591201[iParam0 /*602*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_107(int iParam0)
{
	return Global_1591201[iParam0 /*602*/].f_188 != 0;
}

int func_108(int iParam0)
{
	if (func_33(iParam0, 1))
	{
		if (Global_1591201[iParam0 /*602*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404994.f_2160[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_40(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x6B1497B2FDBC8466(0.01f, 360f);
			func_37(&Var1, Global_2404994.f_563, Global_2404994.f_566, 1036831949, 0, fVar4);
			if (func_44(Var1, &uVar0) || func_40(Var1))
			{
				Var1 = { *uParam0 };
				func_37(&Var1, Global_2404994.f_563, Global_2404994.f_566, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_111(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_835(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_70(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
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
		if (func_835(iVar1, 1, 1))
		{
			if (!func_140(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_71(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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

int func_112(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_114(Param0, fParam3, iParam4, iParam5, 0) || func_113(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_113(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415716.f_556[iVar0] == 0)
			{
				if (func_29(Param0, Global_2415716.f_426[iVar0 /*3*/], Global_2415716.f_523[iVar0], Global_2415716.f_556[iVar0], 1036831949))
				{
					if (func_835(iVar1, 0, 1) && func_835(iParam3, 0, 1))
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

int func_114(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_835(iVar1, 0, 1) && func_835(iParam4, 0, 1))
				{
					if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_835(iVar1, 0, 1) && func_835(iParam4, 0, 1))
				{
					if (Global_2415716.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415716.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_70(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415716.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415716.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_835(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_70(iVar1), Param0) < 1f)
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

int func_115(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404994.f_3 = 0;
	if (!func_112(Param0, 0.5f, unk_0xBE369BE1BC57A796(), 0, 0))
	{
		Global_2404994.f_3++;
		if (bParam5)
		{
			if (func_164(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_119(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_164(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_119(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_116(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404994.f_3++;
						if (!func_28(Param0, 1056964608))
						{
							Global_2404994.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (func_164(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			if (!func_119(Param0, fParam12))
			{
				Global_2404994.f_3++;
				if (!func_116(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404994.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
		}
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xBE369BE1BC57A796() == iVar1)
		{
			if ((func_835(iVar1, 1, 1) && func_71(iVar1)) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (!func_118(unk_0xBE369BE1BC57A796(), iVar1, -2, 0))
				{
					if (func_117(func_70(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_117(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x3D559A6AF62756C4(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_118(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && unk_0xB58DEBB81964A4E9(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == unk_0xB58DEBB81964A4E9(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
	}
	return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
}

int func_119(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_835(iVar1, 1, 1) && func_71(iVar1)) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
		{
			if ((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && unk_0xB58DEBB81964A4E9(iVar1) == -1) && !func_52(unk_0xBE369BE1BC57A796(), 1))
			{
				return 0;
			}
			else if ((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && !unk_0xBE369BE1BC57A796() == iVar1) || !func_118(unk_0xBE369BE1BC57A796(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_70(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)
{
	if ((Global_2404994.f_477 == 9 || Global_2404994.f_477 == 9) || (Global_2404994.f_477 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_121(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam8 == 0)
		{
			if (func_835(iVar1, bParam4, bParam5))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam7 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && iParam9) && bParam6) && func_73(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (unk_0x3DC4639D5F23DEA2(func_70(iVar1), Param0, 1) < fParam3)
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

int func_122(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_835(iVar1, 1, 1))
			{
				if ((!func_140(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1)) && iVar1 != unk_0xBE369BE1BC57A796())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xB58DEBB81964A4E9(iVar1) == iVar3)
					{
						if (unk_0x3DC4639D5F23DEA2(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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

int func_123(int iParam0)
{
	if ((func_52(iParam0, 1) || func_125(iParam0)) || func_124(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1619421[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_126(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x48B8265059381CD0(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_128(&Var2, uParam3, iVar0);
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
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
				func_127(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_127(var uParam0, var uParam1, int iParam2)
{
	Global_2411145 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_127(&Global_2411145, uParam1, iParam2 + 1);
	}
}

void func_128(var uParam0, var uParam1, int iParam2)
{
	Global_2411141 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_128(&Global_2411141, uParam1, iParam2 + 1);
	}
}

void func_129(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404994.f_1820 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1820)
		{
			if (func_130(Global_2404994.f_1821[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404994.f_1821[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404994.f_1821[iVar0 /*4*/] };
					fVar4 = unk_0xC659BC2E3EDC150A(Var1.f_0, Var1.f_1);
				}
				func_67(Global_2404994.f_1821[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404994.f_2049++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404994.f_2354)
	{
		func_61(&(Global_2404994.f_2049.f_6[0 /*9*/]), &(Global_2404994.f_2049.f_6[1 /*9*/]), &(Global_2404994.f_2049.f_6[2 /*9*/]));
	}
}

int func_130(struct<3> Param0, var uParam3)
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

void func_131(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_56(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_132()
{
	func_137();
	func_136();
	func_135();
	func_134();
	func_133();
}

void func_133()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407352[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_134()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404994.f_2049.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_135()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404994.f_2049.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_136()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404994.f_2049.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_137()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404994.f_2049 = { Var0 };
}

var func_138()
{
	return Global_1310987.f_4;
}

void func_139(var uParam0, var uParam1)
{
	func_165();
	func_163(uParam0, uParam1);
}

bool func_140(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_141(-1, 0) == 8;
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

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_142();
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

int func_142()
{
	return Global_1312735;
}

bool func_143(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_144(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404994.f_1690 > 0 && func_162(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_145(uParam0, uParam1, uParam2);
	}
}

void func_145(var uParam0, var uParam1, var uParam2)
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
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_36(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_161(uParam0, 1))
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
	Global_2411155.f_162 = 0;
	Global_2411155.f_163 = 0;
	Global_2411155.f_164 = -99;
	Global_2411155.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411155[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411155.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD32DAE938BCBE6B7(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x9B205E72C3C3D4D2(iVar8))
		{
			unk_0x6C75B0230559CABB(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411155.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411155.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x7942816A92DB1A59(iVar8)) || unk_0x363C61D7285EF4DD(iVar8))
			{
				unk_0x2987C771A97EE274(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_110(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_160(Var1))
									{
										Var1 = { func_158(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_28(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_157(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_161(&Var1, 0)) || uParam2->f_48 == 0)
															{
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
																		if ((uParam2->f_12 && !func_152(Var1, fVar4, uParam2->f_34, unk_0xBE369BE1BC57A796(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_36(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																						if (func_164(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					else if (func_164(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_151(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_150(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411155.f_162)
																										{
																											Global_2411155[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411155.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411155.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411155.f_162 == 0)
																									{
																										Global_2411155[0 /*3*/] = { Var1 };
																										Global_2411155.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411155.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411155[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_149(Var1, fVar4, iVar16);
																													iVar16 = Global_2411155.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411155.f_162++;
																									if (Global_2411155.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411155.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411155[Global_2411155.f_162 /*3*/] = { Var1 };
																									Global_2411155.f_121[Global_2411155.f_162] = fVar4;
																									Global_2411155.f_162++;
																									if (func_157(Var1, uParam2))
																									{
																										Global_2411155.f_163++;
																									}
																									if (Global_2411155.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411155.f_162 == 40)
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
																					else
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
				if (Global_2411155.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411155[0 /*3*/] };
						*uParam1 = Global_2411155.f_121[0];
						return;
					}
					else
					{
						if (Global_2411155.f_163 > 0 && !Global_2411155.f_163 == Global_2411155.f_162)
						{
							func_147(0, uParam2);
						}
						iVar24 = unk_0x0E29C61F26D96FDB(0, Global_2411155.f_162);
						Var25 = { Global_2411155[0 /*3*/] };
						uVar28 = Global_2411155.f_121[0];
						Global_2411155[0 /*3*/] = { Global_2411155[iVar24 /*3*/] };
						Global_2411155.f_121[0] = Global_2411155.f_121[iVar24];
						Global_2411155[iVar24 /*3*/] = { Var25 };
						Global_2411155.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411155[0 /*3*/] };
						*uParam1 = Global_2411155.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_145(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x0E29C61F26D96FDB((1 + iVar15), (40 + iVar15));
						unk_0x25F8DA4A9E82297D(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_158(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_36(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_161(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_145(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
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
				func_145(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_146(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411155.f_164 = iVar8;
	}
}

void func_146(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_112(*(uParam0[iVar2 /*4*/]), 5f, unk_0xBE369BE1BC57A796(), 0, 0))
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

void func_147(int iParam0, var uParam1)
{
	if (!func_157(Global_2411155[iParam0 /*3*/], uParam1))
	{
		Global_2411155.f_162 = (Global_2411155.f_162 - 1);
		func_148(iParam0);
		if (Global_2411155.f_162 > Global_2411155.f_163)
		{
			func_147(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_147(iParam0 + 1, uParam1);
	}
}

void func_148(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411155[iParam0 /*3*/] = { Global_2411155[iParam0 + 1 /*3*/] };
			Global_2411155.f_121[iParam0] = Global_2411155.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_149(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411155[iParam4 /*3*/] };
	uVar3 = Global_2411155.f_121[iParam4];
	Global_2411155[iParam4 /*3*/] = { Param0 };
	Global_2411155.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411155.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_149(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_150(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_72(iVar5))
		{
			Var1 = { func_70(iVar5) };
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

int func_151(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam9 == 0)
		{
			if (func_835(iVar1, bParam5, bParam6))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam8 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && iParam10) && bParam7) && func_73(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (func_29(func_70(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_152(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_156(Param0, fParam3, iParam4, iParam5, iParam6) || func_153(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_153(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_155(Param0, iParam4, Global_2415716.f_426[iVar0 /*3*/], Global_2415716.f_556[iVar0]))
			{
				if (func_154(Param0, fParam3, iParam4, Global_2415716.f_426[iVar0 /*3*/], Global_2415716.f_523[iVar0], Global_2415716.f_556[iVar0], 0))
				{
					if (func_835(iVar1, 0, 1) && func_835(iParam5, 0, 1))
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

int func_154(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	
	if (func_29(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_30(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xE851F22ED3518011((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xE851F22ED3518011((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xE851F22ED3518011((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_31(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_31(&Var26, 0f, 0f, fParam3);
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
		if (func_29(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_154(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_32(iParam3, 1008981770);
	fVar1 = func_32(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_156(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_835(iVar1, 0, 1) && func_835(iParam5, 0, 1))
			{
				if (Global_2415716.f_260[iVar0])
				{
					if (func_29(Global_2415716.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_29(func_70(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415716.f_260[iVar0])
			{
				if (func_29(Global_2415716.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_835(iVar1, 0, 0))
			{
				if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
				{
					if (func_29(func_70(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_157(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_143(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_55(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x3D559A6AF62756C4(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_158(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_159(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x2987C771A97EE274(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x2A130353C9214F6A(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
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
				func_30(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_159(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
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
	Var0 = { unk_0x3CE07141081BBC2B(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x3E2701EBDEC7ACBF(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_30(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_159(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_31(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_24(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_160(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_27(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410869[iVar1])
	{
		if (func_26(Param0, &(Global_2410166[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410869[8])
	{
		if (func_26(Param0, &(Global_2410166[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_161(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404994.f_26.f_16)
	{
		switch (Global_2404994.f_26.f_15)
		{
			case 0:
				if (func_143(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_55(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x3D559A6AF62756C4(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_43(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, Global_2404994.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_162(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
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
	
	if (Global_2404994.f_1690 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_36(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_161(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411155.f_162 = 0;
		Global_2411155.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411155[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411155.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1690)
		{
			Var1 = { Global_2404994.f_1691[iVar0 /*4*/] };
			fVar4 = Global_2404994.f_1691[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
				{
					if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
					{
						if ((uParam2->f_12 && !func_152(Var1, fVar4, uParam2->f_34, unk_0xBE369BE1BC57A796(), 0, uParam2->f_56)) || !uParam2->f_12)
						{
							if (!uParam2->f_15 || !func_36(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (func_164(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
										{
											bVar10 = true;
										}
									}
									else if (func_164(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_151(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
												iVar11 = func_150(Var1, uParam2->f_54, &fVar12);
											}
											if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
											{
												if (uParam2->f_52)
												{
													if (iVar11 < uParam2->f_53)
													{
														iVar5 = 0;
														while (iVar5 < Global_2411155.f_162)
														{
															Global_2411155[iVar5 /*3*/] = { 0f, 0f, 0f };
															Global_2411155.f_121[iVar5] = 0f;
															iVar5++;
														}
														Global_2411155.f_162 = 0;
														uParam2->f_53 = iVar11;
													}
												}
												if (uParam2->f_30)
												{
													if (Global_2411155.f_162 == 0)
													{
														Global_2411155[0 /*3*/] = { Var1 };
														Global_2411155.f_121[0] = fVar4;
													}
													else
													{
														iVar5 = 0;
														while (iVar5 < Global_2411155.f_162 + 1)
														{
															if (iVar5 < 40)
															{
																if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411155[iVar5 /*3*/], uParam2->f_35))
																{
																	func_149(Var1, fVar4, iVar5);
																	iVar5 = Global_2411155.f_162 + 1;
																}
															}
															iVar5++;
														}
													}
													Global_2411155.f_162++;
													if (Global_2411155.f_162 >= 5)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1690;
														}
														else if (Global_2411155.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1690;
														}
													}
												}
												else
												{
													Global_2411155[Global_2411155.f_162 /*3*/] = { Var1 };
													Global_2411155.f_121[Global_2411155.f_162] = fVar4;
													Global_2411155.f_162++;
													if (Global_2411155.f_162 >= 10)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1690;
														}
														else if (Global_2411155.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1690;
														}
													}
												}
											}
										}
										else
										{
											*uParam0 = { Var1 };
											*uParam1 = fVar4;
											return 1;
										}
									}
								}
								else
								{
									*uParam0 = { Var1 };
									*uParam1 = fVar4;
									return 1;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411155.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411155[0 /*3*/] };
				*uParam1 = Global_2411155.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411155.f_163 > 0 && !Global_2411155.f_163 == Global_2411155.f_162)
				{
					func_147(0, uParam2);
				}
				iVar13 = unk_0x0E29C61F26D96FDB(0, Global_2411155.f_162);
				Var14 = { Global_2411155[0 /*3*/] };
				uVar17 = Global_2411155.f_121[0];
				Global_2411155[0 /*3*/] = { Global_2411155[iVar13 /*3*/] };
				Global_2411155.f_121[0] = Global_2411155.f_121[iVar13];
				Global_2411155[iVar13 /*3*/] = { Var14 };
				Global_2411155.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411155[0 /*3*/] };
				*uParam1 = Global_2411155.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_162(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_145(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_163(var uParam0, var uParam1)
{
	unk_0x8DC43D7EEE7743A6(uParam0, uParam1, 0.1f);
	Global_2404994.f_2032 = unk_0xE9A5FDFDC239B2ED();
	Global_2404994.f_2030 = 1;
	Global_2404994.f_2033 = unk_0xCB150A8B81012128();
}

int func_164(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x47865C56C9B1EFE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x3FDEBC0190C73055(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x3FDEBC0190C73055(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC3CEDFD4651E42EC(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x08A593150B122791(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_121(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_111(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

void func_165()
{
	if (Global_2404994.f_2030)
	{
		if (unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_2032)
		{
			unk_0xE3AF2BFF1DE1BCA9();
		}
		else
		{
			unk_0xE3AF2BFF1DE1BCA9();
		}
		Global_2404994.f_2030 = 0;
	}
}

int func_166(bool bParam0)
{
	if (unk_0x25BD4C26D84038CD())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_167()
{
	return Local_195.f_38[Local_195.f_36 /*3*/];
}

void func_168()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_195.f_0 != 4)
	{
		iLocal_450 = 0;
		while (iLocal_450 < unk_0xCF8627766CD5D4CE())
		{
			if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iLocal_450)))
			{
				iVar2 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iLocal_450));
				if (func_835(iVar2, 1, 1))
				{
				}
				if (!unk_0x48B8265059381CD0(Local_195.f_1, 1))
				{
					if (unk_0x48B8265059381CD0(Local_255[iLocal_450 /*6*/].f_1, 2))
					{
						if (Local_195.f_37 != iVar2)
						{
							Local_195.f_37 = iVar2;
						}
					}
				}
				if (!unk_0x48B8265059381CD0(Local_195.f_1, 1))
				{
					if (Local_255[iLocal_450 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_255[iLocal_450 /*6*/].f_5);
					}
				}
				if (!unk_0x48B8265059381CD0(Local_195.f_1, 4))
				{
					if (unk_0x48B8265059381CD0(Local_255[iLocal_450 /*6*/].f_1, 5))
					{
						unk_0xEB79FECD9022AAF0(&(Local_195.f_1), 4);
						Local_195.f_35 = iVar2;
					}
				}
				if (!unk_0x48B8265059381CD0(Local_195.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0x48B8265059381CD0(Local_195.f_1, 1) || unk_0x48B8265059381CD0(Local_195.f_1, 3)) || unk_0x48B8265059381CD0(Local_195.f_1, 4)) || unk_0x48B8265059381CD0(Local_195.f_1, 5))
						{
							if (!unk_0x48B8265059381CD0(Local_255[iLocal_450 /*6*/].f_1, 4))
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
			else if (!unk_0x48B8265059381CD0(Local_195.f_1, 5))
			{
				if (Local_195.f_33 > -1)
				{
					if (iLocal_450 == Local_195.f_33)
					{
						unk_0xEB79FECD9022AAF0(&(Local_195.f_1), 5);
					}
				}
			}
			iLocal_450++;
		}
		if (!unk_0x48B8265059381CD0(Local_195.f_1, 1))
		{
			iVar0 = (iVar0 + Local_195.f_6);
			if (iVar0 >= func_169())
			{
				unk_0xEB79FECD9022AAF0(&(Local_195.f_1), 1);
			}
			if (Local_195.f_5 != iVar0)
			{
				if (Local_195.f_5 < iVar0)
				{
					Local_195.f_5 = iVar0;
				}
				else if (Local_195.f_6 != (Local_195.f_5 - iVar0))
				{
					Local_195.f_6 = (Local_195.f_5 - iVar0);
				}
			}
		}
		if (!unk_0x48B8265059381CD0(Local_195.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0xEB79FECD9022AAF0(&(Local_195.f_1), 2);
			}
		}
	}
}

int func_169()
{
	return Global_262145.f_11124;
}

int func_170()
{
	int iVar0;
	int iVar1;
	
	if (func_174() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_173(Local_195.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0x0E29C61F26D96FDB(0, 20);
				if (func_171(iVar1))
				{
					Local_195.f_38[iVar0 /*3*/] = { Local_756[iVar1 /*3*/] };
					Local_756[iVar1 /*3*/] = { 0f, 0f, 0f };
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
		if (func_173(Local_195.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_171(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_173(Local_756[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_173(Local_195.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0x3DC4639D5F23DEA2(Local_195.f_38[iVar0 /*3*/], Local_756[iParam0 /*3*/], 1);
				if (fVar1 < func_172())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_172()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_11125);
}

bool func_173(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_174()
{
	int iVar0;
	
	if (Local_195.f_48 != -1)
	{
		return Local_195.f_48;
	}
	iVar0 = unk_0x0E29C61F26D96FDB(0, 4);
	if (!func_176(iVar0))
	{
		Local_195.f_48 = iVar0;
		func_175();
	}
	return Local_195.f_48;
}

void func_175()
{
	switch (Local_195.f_48)
	{
		case 0:
			Local_756[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			Local_756[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			Local_756[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			Local_756[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			Local_756[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_756[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			Local_756[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			Local_756[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			Local_756[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			Local_756[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			Local_756[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			Local_756[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			Local_756[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			Local_756[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			Local_756[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			Local_756[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			Local_756[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			Local_756[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			Local_756[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			Local_756[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			Local_756[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			Local_756[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			Local_756[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			Local_756[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			Local_756[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			Local_756[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			Local_756[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			Local_756[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			Local_756[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			Local_756[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_756[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			Local_756[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			Local_756[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			Local_756[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			Local_756[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			Local_756[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			Local_756[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			Local_756[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			Local_756[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			Local_756[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			Local_756[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			Local_756[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			Local_756[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			Local_756[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			Local_756[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			Local_756[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			Local_756[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			Local_756[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			Local_756[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			Local_756[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			Local_756[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			Local_756[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			Local_756[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			Local_756[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			Local_756[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			Local_756[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			Local_756[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			Local_756[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			Local_756[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			Local_756[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			Local_756[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			Local_756[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			Local_756[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			Local_756[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			Local_756[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			Local_756[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			Local_756[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			Local_756[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			Local_756[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			Local_756[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			Local_756[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			Local_756[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			Local_756[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			Local_756[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			Local_756[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			Local_756[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			Local_756[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			Local_756[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			Local_756[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			Local_756[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11067;
		
		case 1:
			return Global_262145.f_11068;
		
		case 2:
			return Global_262145.f_11066;
		
		case 3:
			return Global_262145.f_11065;
		
		default:
	}
	return 0;
}

int func_177(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_178(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x415DF132F15085E8())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_179()
{
	func_181();
	if (unk_0x48B8265059381CD0(iLocal_449, 9))
	{
		return;
	}
	if (func_755())
	{
		if (!unk_0x48B8265059381CD0(iLocal_449, 0))
		{
			unk_0x589451489CB70B8C("DisableFlightMusic", 1);
			unk_0x589451489CB70B8C("WantedMusicDisabled", 1);
			unk_0xEB79FECD9022AAF0(&iLocal_449, 0);
		}
		if (!unk_0x48B8265059381CD0(iLocal_449, 1))
		{
			if (unk_0x5BE53482EFD49141("BG_SIGHTSEER_START"))
			{
				unk_0xEB79FECD9022AAF0(&iLocal_449, 1);
			}
		}
		if (unk_0x48B8265059381CD0(iLocal_449, 1))
		{
			if (!unk_0x48B8265059381CD0(iLocal_449, 3))
			{
				if (Local_195.f_5 == 1)
				{
					if (unk_0x5BE53482EFD49141("BG_SIGHTSEER_MID"))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_449, 3);
					}
				}
			}
		}
		if (unk_0x48B8265059381CD0(iLocal_449, 3))
		{
			if (!unk_0x48B8265059381CD0(iLocal_449, 4))
			{
				if (Local_195.f_5 == 2)
				{
					if (unk_0x5BE53482EFD49141("BG_SIGHTSEER_FINAL"))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_449, 4);
					}
				}
			}
		}
		if (unk_0x48B8265059381CD0(Local_195.f_1, 1) || unk_0x48B8265059381CD0(Local_195.f_1, 4))
		{
			if (unk_0x48B8265059381CD0(iLocal_449, 4))
			{
				if (!unk_0x48B8265059381CD0(iLocal_449, 6))
				{
					if (unk_0x5BE53482EFD49141("BG_SIGHTSEER_STOP"))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_449, 6);
						unk_0xEB79FECD9022AAF0(&iLocal_449, 2);
						unk_0x589451489CB70B8C("DisableFlightMusic", 0);
						unk_0x589451489CB70B8C("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_379())
	{
		if (func_180(unk_0xBE369BE1BC57A796(), 20))
		{
			if (!unk_0x48B8265059381CD0(iLocal_449, 0))
			{
				unk_0x589451489CB70B8C("DisableFlightMusic", 1);
				unk_0x589451489CB70B8C("WantedMusicDisabled", 1);
				unk_0xEB79FECD9022AAF0(&iLocal_449, 0);
			}
			if (!unk_0x48B8265059381CD0(iLocal_449, 7))
			{
				if (unk_0x5BE53482EFD49141("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0xEB79FECD9022AAF0(&iLocal_449, 7);
				}
			}
			if (unk_0x48B8265059381CD0(Local_195.f_1, 1) || unk_0x48B8265059381CD0(Local_195.f_1, 4))
			{
				if (unk_0x48B8265059381CD0(iLocal_449, 7))
				{
					if (!unk_0x48B8265059381CD0(iLocal_449, 6))
					{
						if (unk_0x5BE53482EFD49141("BG_SIGHTSEER_STOP"))
						{
							unk_0xEB79FECD9022AAF0(&iLocal_449, 6);
							unk_0xEB79FECD9022AAF0(&iLocal_449, 2);
							unk_0x589451489CB70B8C("DisableFlightMusic", 0);
							unk_0x589451489CB70B8C("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_180(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

void func_181()
{
	if (unk_0x48B8265059381CD0(iLocal_449, 8))
	{
		if (unk_0x48B8265059381CD0(iLocal_449, 9))
		{
			if (!unk_0x48B8265059381CD0(iLocal_449, 10))
			{
				if (unk_0x48B8265059381CD0(iLocal_449, 11))
				{
					if (!unk_0x48B8265059381CD0(iLocal_449, 12))
					{
						unk_0x4CE603708D103834(1);
						unk_0x589451489CB70B8C("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x48B8265059381CD0(iLocal_449, 15))
				{
					if (unk_0x5BE53482EFD49141("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_449, 15);
					}
				}
				if (unk_0x48B8265059381CD0(iLocal_449, 15))
				{
					if (!unk_0x48B8265059381CD0(iLocal_449, 13))
					{
						if (unk_0x5BE53482EFD49141("APT_FADE_IN_RADIO"))
						{
							unk_0xEB79FECD9022AAF0(&iLocal_449, 13);
						}
					}
					if (unk_0x48B8265059381CD0(iLocal_449, 13))
					{
						unk_0xEB79FECD9022AAF0(&iLocal_449, 10);
					}
				}
			}
		}
	}
}

void func_182()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_755() && !func_379())
	{
		return;
	}
	if (Local_195.f_34 > -1)
	{
		iVar3 = unk_0x0C36F33B3F746611(Local_195.f_34);
		if (unk_0x7268A1112372AA44(iVar3))
		{
			Var0 = { unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iVar3), 0) };
		}
	}
	if (!func_173(Var0, 0f, 0f, 0f, 0))
	{
		func_183(142, Var0, &uLocal_824, 1140457472, 1144750080, 0);
	}
}

void func_183(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_125(unk_0xBE369BE1BC57A796()) && !func_231(unk_0xBE369BE1BC57A796())) && !unk_0x48B8265059381CD0(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1, 8)) && (func_230(unk_0xBE369BE1BC57A796()) || func_229(unk_0xBE369BE1BC57A796())))
	{
		return;
	}
	Global_1763174 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Param1);
	func_225(iParam0, fVar0);
	if (unk_0x95DBE123BC2DB80B() && unk_0x3C9A4847496426B9() == 15)
	{
		if (func_224(unk_0xBE369BE1BC57A796()) || func_222(unk_0xBE369BE1BC57A796()))
		{
			if (!unk_0xF886D55825EAC222(1344549371))
			{
				unk_0x4DDCE83D0BC7A695(1344549371);
			}
		}
		else if (unk_0xF886D55825EAC222(1344549371))
		{
			unk_0x33BA97D6CB5751AA(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_221(unk_0xBE369BE1BC57A796(), 21))
		{
			func_220(Param1, 1, 0);
		}
		if (!*uParam4 && func_835(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			*uParam4 = 1;
			if (func_219(iParam0))
			{
				unk_0x000E46314C3A507F(func_218(iParam0));
				if (func_217(iParam0, -1))
				{
					unk_0x6751FA44D6CA586D(0);
					if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
					{
						unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 1);
						unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 1);
					}
					unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 0);
				}
			}
			if (func_216(iParam0))
			{
				fVar1 = func_215(iParam0);
				if (fVar1 != 1f)
				{
					func_212(fVar1);
					unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_211(iParam0) && func_224(unk_0xBE369BE1BC57A796()))
				{
					func_209(1);
					func_208(2);
				}
			}
			func_207(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_180(unk_0xBE369BE1BC57A796(), 19))
			{
				func_206(19);
			}
		}
		if (*uParam4 && func_835(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			*uParam4 = 0;
			if (func_219(iParam0))
			{
				if (unk_0x48B8265059381CD0(Global_1763174.f_3, 0))
				{
					unk_0x000E46314C3A507F(1f);
					unk_0x6751FA44D6CA586D(5);
					unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 0);
				}
			}
			if (func_216(iParam0))
			{
				func_205();
				unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 1);
			}
			if (iParam7 && !func_125(unk_0xBE369BE1BC57A796()))
			{
				if (func_204(unk_0xBE369BE1BC57A796()) != 152)
				{
					func_186();
				}
			}
			if (func_185(2))
			{
				func_209(0);
				func_184(2);
			}
		}
	}
}

void func_184(int iParam0)
{
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_25), iParam0);
}

bool func_185(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2494199.f_4710.f_25, iParam0);
}

void func_186()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_24), &Global_2408533, 2);
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_26), &Global_2408535, 17);
	func_202();
	func_189(1, 1);
	func_187();
}

void func_187()
{
	func_188(0, 0);
}

void func_188(int iParam0, int iParam1)
{
	Global_2404994.f_22 = iParam0;
	Global_2404994.f_23 = iParam1;
}

void func_189(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xFE072CB6D21717D2(&(Global_2404994.f_43), &Global_2408552, 313);
	}
	else
	{
		Global_2404994.f_43 = { Global_2408552 };
		Global_2404994.f_43.f_49 = { Global_2408552.f_49 };
		Global_2404994.f_43.f_52 = Global_2408552.f_52;
		Global_2404994.f_43.f_53 = Global_2408552.f_53;
	}
	if (bParam0)
	{
		func_201();
	}
	func_192(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_191(0);
	func_190();
}

void func_190()
{
	struct<6> Var0;
	
	if (Global_2404994.f_478.f_1 == unk_0xE9A5FDFDC239B2ED())
	{
		Global_2404994.f_478 = { Var0 };
	}
}

void func_191(bool bParam0)
{
	if (bParam0)
	{
		Global_2404994.f_655 = 0;
	}
	else
	{
		Global_2404994.f_655 = 1;
	}
}

void func_192(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_200())
		{
			func_199();
		}
		Global_2404994.f_656.f_504 = iParam1;
		Global_2404994.f_656.f_505 = iParam2;
		Global_2404994.f_656.f_506 = iParam10;
		func_197();
		func_196(8, 0, 0, 0, 0);
		Global_2404994.f_656.f_507 = iParam11;
		Global_2404994.f_656.f_510 = iParam3;
		Global_2404994.f_656.f_511 = iParam4;
		Global_2404994.f_656.f_508 = iParam5;
		Global_2404994.f_656.f_509 = iParam6;
		Global_2404994.f_656.f_512 = iParam7;
		Global_2404994.f_656.f_513 = iParam8;
		Global_2404994.f_656.f_514 = iParam9;
		Global_2404994.f_1689 = 1;
	}
	else
	{
		func_193();
	}
}

void func_193()
{
	if (func_200() && !func_195())
	{
		func_199();
	}
	if (func_195())
	{
		func_194();
	}
	else
	{
		func_197();
		func_196(0, 0, 0, 0, 0);
		Global_2404994.f_1689 = 0;
		Global_2404994.f_1688 = 0;
	}
}

void func_194()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_656), &(Global_2404994.f_1172), 516);
	Global_2404994.f_478 = { Global_2404994.f_484 };
	if (unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515)
	{
		Global_2404994.f_1688 = 0;
	}
}

int func_195()
{
	if ((Global_2404994.f_1688 && !unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_1172.f_515) && unk_0x1EFA84312BB8AA22(Global_2404994.f_1172.f_515))
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411323 = 0;
	}
	Global_2404994.f_478 = iParam0;
	Global_2404994.f_478.f_1 = unk_0xE9A5FDFDC239B2ED();
	Global_2404994.f_478.f_2 = iParam1;
	Global_2404994.f_478.f_3 = iParam2;
	Global_2404994.f_478.f_4 = iParam3;
	Global_2404994.f_478.f_5 = iParam4;
}

void func_197()
{
	if (func_200() && !func_195())
	{
		func_199();
	}
	func_198();
	Global_2404994.f_656 = 0;
}

void func_198()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404994.f_656.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_199()
{
	if (func_195())
	{
		if (Global_2404994.f_656.f_515 == Global_2404994.f_1172.f_515)
		{
			return;
		}
	}
	if (!unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515)
	{
		unk_0xFE072CB6D21717D2(&(Global_2404994.f_1172), &(Global_2404994.f_656), 516);
		Global_2404994.f_484 = { Global_2404994.f_478 };
		Global_2404994.f_1688 = 1;
	}
}

int func_200()
{
	if ((Global_2404994.f_1689 && !unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515) && unk_0x1EFA84312BB8AA22(Global_2404994.f_656.f_515))
	{
		return 1;
	}
	return 0;
}

void func_201()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_356), &Global_2408865, 121);
}

void func_202()
{
	func_203();
	Global_2404994.f_1820 = 0;
}

void func_203()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404994.f_1821[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_204(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

void func_205()
{
	if (unk_0x1EFA84312BB8AA22(Global_2494199.f_4706))
	{
		if (!Global_2494199.f_4706 == unk_0xE9A5FDFDC239B2ED() && Global_2494199.f_4705 < 1f)
		{
			return;
		}
	}
	Global_2494199.f_4706 = -1;
	Global_2494199.f_4705 = 1f;
}

void func_206(int iParam0)
{
	unk_0x21E7933CCC7B3724(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_4), iParam0);
}

void func_207(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_4), iParam0);
}

void func_208(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_25), iParam0);
}

void func_209(int iParam0)
{
	if (func_210() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_210()
{
	if ((((Global_979732 != -1 && Global_979732 != 33) && Global_979732 != 35) && Global_979732 != 37) && Global_979732 != 21)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
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

void func_212(float fParam0)
{
	float fVar0;
	
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_213())
	{
		return;
	}
	fVar0 = (Global_2494199.f_4705 - fParam0);
	if (unk_0x1EFA84312BB8AA22(Global_2494199.f_4706))
	{
		if (!Global_2494199.f_4706 == unk_0xE9A5FDFDC239B2ED() && unk_0xE851F22ED3518011(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2494199.f_4705 = fParam0;
	Global_2494199.f_4706 = unk_0xE9A5FDFDC239B2ED();
}

int func_213()
{
	switch (func_214())
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

int func_214()
{
	return Global_25190;
}

float func_215(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_216(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
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

float func_218(int iParam0)
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

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_220(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404994.f_43.f_49 = { Param0 };
	Global_2404994.f_43.f_52 = iParam3;
	Global_2404994.f_43.f_53 = iParam4;
}

bool func_221(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_222(int iParam0)
{
	if (func_223(iParam0))
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_75())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_180(iParam0, 9);
	}
	return 0;
}

void func_225(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_228(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_226();
	}
}

void func_226()
{
	if (!func_227(unk_0xBE369BE1BC57A796()))
	{
		func_207(25);
	}
}

bool func_227(int iParam0)
{
	return func_180(iParam0, 25);
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11142;
		
		case 142:
			return Global_262145.f_11130;
		
		case 157:
			return Global_262145.f_11097;
		
		case 159:
			return Global_262145.f_11080;
		
		case 162:
			return Global_262145.f_11191;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 7);
	}
	return 0;
}

bool func_231(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 2);
}

void func_232(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_369(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_367() || iParam2 == 26)
	{
		if (func_317(uParam1, iParam2, uParam3, Global_1574103, 0, func_365()))
		{
			func_316(1);
			if ((!func_314() && !func_312()) || unk_0x48B8265059381CD0(Global_2494199.f_4446, 1))
			{
				if (func_311())
				{
					func_308();
				}
				else
				{
					unk_0x4933838CDEC9827A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_307(1);
						Global_1574103 = 0;
						iVar54 = -1;
						if (Global_1574284 != 1)
						{
							func_306(uParam1);
							if (unk_0x48B8265059381CD0(uParam3->f_33, 7))
							{
								unk_0x21E7933CCC7B3724(&(uParam3->f_33), 7);
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
								if (func_835(unk_0x0C36F33B3F746611(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C36F33B3F746611(iVar52);
									if (!func_140(iVar35, 0))
									{
										if ((unk_0xECE6499178490DE1(iVar35, unk_0xBE369BE1BC57A796()) || Global_2421664[iVar35 /*358*/].f_239 != -1) || func_107(iVar35))
										{
											iVar44 = iVar35;
											if (func_223(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_303(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_300(unk_0xBE369BE1BC57A796(), 0) && func_204(unk_0xBE369BE1BC57A796()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_298())
							{
								if (func_835(unk_0x0C36F33B3F746611(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C36F33B3F746611(iVar52);
								}
								else
								{
									iVar35 = func_75();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_297(iVar35) && func_292(iVar35, iParam2)) && func_835(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1591201[iVar44 /*602*/].f_203.f_6;
								Var38 = { func_287(iVar35) };
								if (iVar35 == unk_0xBE369BE1BC57A796())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x592E5DF66777D40F(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_77(iVar35) };
								iVar37 = func_281(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x7F897CE1A139406E(iVar37);
								}
								Global_1574103++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_298())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_276(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_275(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_269(iVar35, 0);
								if (bVar34)
								{
									if (func_268(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_267(iParam5))
								{
									func_266(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_266(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xEB79FECD9022AAF0(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0C36F33B3F746611(iVar52);
							if (func_835(iVar35, 0, 1) && !unk_0x48B8265059381CD0(iVar49, iVar35))
							{
								iVar35 = unk_0x0C36F33B3F746611(iVar52);
							}
							else
							{
								iVar35 = func_75();
							}
							if (func_297(iVar35))
							{
								if (func_835(unk_0x0C36F33B3F746611(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1591201[iVar44 /*602*/].f_203.f_6;
									Var38 = { func_287(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_77(iVar35) };
									iVar37 = func_281(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x7F897CE1A139406E(iVar37);
									}
									Global_1574103++;
									iVar51 = func_269(iVar35, 1);
									if (bVar34)
									{
										if (func_268(iVar35, 1))
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
									func_246(iVar35, unk_0x592E5DF66777D40F(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x48B8265059381CD0(uParam3->f_33, 11))
						{
							func_243(uParam3, uParam1);
						}
						func_242(&(uParam3->f_21));
						func_241();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x48B8265059381CD0(uParam3->f_33, 7))
						{
							func_240(uParam3, uParam1);
							func_239(uParam1, 0, 1);
							unk_0xEB79FECD9022AAF0(&(uParam3->f_33), 7);
						}
						func_240(uParam3, uParam1);
						if (!unk_0x48B8265059381CD0(uParam3->f_33, 11))
						{
							unk_0xEB79FECD9022AAF0(&(uParam3->f_33), 11);
						}
						if (func_235(uParam3))
						{
							Global_1574284 = 1;
						}
						func_233(uParam3);
						if (Global_1574284 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574284 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xFF84A94166FBB351(*uParam1))
					{
						unk_0x4ED9ECF3735CB826(7);
						unk_0x50F4FD9686DBDC91(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x4ED9ECF3735CB826(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_241();
			func_307(0);
			if (unk_0x48B8265059381CD0(uParam3->f_33, 7))
			{
				unk_0x21E7933CCC7B3724(&(uParam3->f_33), 7);
			}
			if (unk_0x48B8265059381CD0(uParam3->f_33, 10))
			{
				unk_0x21E7933CCC7B3724(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x526D61ADDDE6C626();
}

void func_233(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_242(&(uParam0->f_21));
		func_234(0);
	}
}

void func_234(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574284 != 2)
		{
			Global_1574284 = 2;
		}
	}
	else
	{
		switch (Global_1574284)
		{
			case 0:
				Global_1574284 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_235(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0C36F33B3F746611(uParam0->f_37);
	if (iVar15 != func_75() && func_835(iVar15, 0, 1))
	{
		Var2 = { func_77(iVar15) };
		iVar1 = func_238(uParam0, uParam0->f_37);
		if (func_237(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xC70F7F9347C2D892(&Var2))
					{
						if (unk_0xD3C126815A4E4DD6(&Var2))
						{
							iVar16 = 1;
							func_236(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x1A0BD443C067F484(&Var2))
					{
						iVar16 = 1;
						func_236(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xC70F7F9347C2D892(&Var2))
					{
						if (!unk_0xD3C126815A4E4DD6(&Var2))
						{
							iVar16 = 1;
							func_236(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_236(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xC70F7F9347C2D892(&Var2))
					{
						if (!unk_0x1A0BD443C067F484(&Var2))
						{
							iVar16 = 1;
							func_236(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x1A0BD443C067F484(&Var2))
					{
						iVar16 = 1;
						func_236(uParam0, iVar0, 0);
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

void func_236(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BC6F3BBFEAB9958(&uParam0, 13);
}

var func_238(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_239(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEAC9A8A194DF8F91(*uParam0, "COLLAPSE"))
	{
		unk_0x14ED5B5B8289F2FC(iParam1);
		unk_0x44983883E630A945();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEAC9A8A194DF8F91(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x44983883E630A945();
		}
	}
}

void func_240(var uParam0, var uParam1)
{
	if (!unk_0x48B8265059381CD0(uParam0->f_33, 10))
	{
		unk_0xEAC9A8A194DF8F91(*uParam1, "SET_HIGHLIGHT");
		unk_0xDF18CF55301CEB8B(uParam0->f_35);
		unk_0x44983883E630A945();
		unk_0xEB79FECD9022AAF0(&(uParam0->f_33), 10);
	}
}

void func_241()
{
	if (Global_1574284 != 0)
	{
		Global_1574284 = 0;
	}
}

void func_242(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_243(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C36F33B3F746611(iVar0);
		if (iVar2 != func_75())
		{
			if (func_835(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_245(uParam0->f_38[iVar0 /*2*/], 0);
					func_244(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1591201[iVar0 /*602*/].f_203.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		if (unk_0xEAC9A8A194DF8F91(*uParam0, "SET_ICON"))
		{
			unk_0xDF18CF55301CEB8B(iParam1);
			unk_0xDF18CF55301CEB8B(iParam2);
			if (iParam2 == 65)
			{
				unk_0xDF18CF55301CEB8B(iParam3);
			}
			unk_0x44983883E630A945();
		}
	}
}

int func_245(int iParam0, bool bParam1)
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

void func_246(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_265() && iParam4 < func_264())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574284 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEAC9A8A194DF8F91(*uParam2, sVar1))
		{
			unk_0xDF18CF55301CEB8B(iParam4);
			if (unk_0x48B8265059381CD0(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_263("");
			}
			else
			{
				unk_0xDF18CF55301CEB8B(iParam10);
			}
			func_263(sParam1);
			unk_0xDF18CF55301CEB8B(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_263("");
			}
			else
			{
				unk_0xDF18CF55301CEB8B(65);
			}
			unk_0xDF18CF55301CEB8B(-1);
			func_263("");
			if (uParam3->f_108 == 6)
			{
				func_263("");
			}
			else
			{
				func_263(&sParam5);
			}
			func_251(uParam3, iParam0);
			unk_0xFCE11728AE1CFA11(sParam9);
			unk_0xFCE11728AE1CFA11(sParam9);
			if (func_250(uParam3))
			{
				func_249("DPAD_FRIEND");
			}
			else if (func_248(uParam3))
			{
				func_249("DPAD_FRIEND");
			}
			else if (func_247(uParam3))
			{
				func_249("DPAD_CREW");
			}
			else
			{
				func_249("");
			}
			unk_0x44983883E630A945();
		}
	}
}

bool func_247(var uParam0)
{
	return unk_0x48B8265059381CD0(uParam0->f_33, 6);
}

bool func_248(var uParam0)
{
	return unk_0x48B8265059381CD0(uParam0->f_33, 5);
}

void func_249(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

int func_250(var uParam0)
{
	if (func_248(uParam0) && func_247(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_251(var uParam0, int iParam1)
{
	if (func_262(iParam1))
	{
		unk_0xDF18CF55301CEB8B(121);
	}
	else if (func_256(iParam1))
	{
		unk_0xDF18CF55301CEB8B(122);
	}
	else
	{
		if (func_252())
		{
			uParam0->f_36 = 0;
		}
		unk_0x14ED5B5B8289F2FC(uParam0->f_36);
	}
}

int func_252()
{
	if (unk_0xF7271A9481CAC8E3())
	{
		if (func_254() || func_253())
		{
			return 1;
		}
	}
	return 0;
}

bool func_253()
{
	return Global_2443134.f_12;
}

bool func_254()
{
	if (unk_0xF7271A9481CAC8E3())
	{
		return func_253();
	}
	return func_255(Global_1633501.f_88646);
}

int func_255(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_256(int iParam0)
{
	if ((func_835(iParam0, 0, 1) && func_260()) && func_257(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_257(int iParam0, bool bParam1)
{
	return func_258(iParam0, bParam1, 1);
}

int func_258(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_259(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_75() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 != func_75())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_75())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_260()
{
	if (func_125(unk_0xBE369BE1BC57A796()) || func_261())
	{
		return 0;
	}
	return 1;
}

int func_261()
{
	switch (func_204(unk_0xBE369BE1BC57A796()))
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

int func_262(int iParam0)
{
	if (func_252())
	{
		if (func_835(iParam0, 0, 1))
		{
			return func_223(iParam0);
		}
	}
	if ((func_835(iParam0, 0, 1) && func_260()) && func_259(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_263(char* sParam0)
{
	unk_0x0A7B7FF9E4F6CAA7(sParam0);
}

int func_264()
{
	int iVar0;
	
	if (Global_1574105)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_265()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574105)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_266(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_265() && iParam3 < func_264())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574105)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574284 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xFF84A94166FBB351(*uParam1))
		{
			if (unk_0xEAC9A8A194DF8F91(*uParam1, sVar1))
			{
				unk_0xDF18CF55301CEB8B(iParam3);
				if (unk_0x48B8265059381CD0(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_263("");
				}
				else
				{
					unk_0xDF18CF55301CEB8B(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x9C88EB7B70229335(sParam16))
				{
					func_249(sParam16);
				}
				else
				{
					func_263(&(uParam2->f_1));
				}
				unk_0xDF18CF55301CEB8B(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_263("");
				}
				else
				{
					unk_0xDF18CF55301CEB8B(65);
				}
				if (iParam12 == 1)
				{
					unk_0xDF18CF55301CEB8B(iVar0);
				}
				else
				{
					unk_0xDF18CF55301CEB8B(-1);
				}
				if (func_298())
				{
					func_263("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x9C88EB7B70229335(sParam16))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_ONE_INT");
					unk_0x34D84D73B5DF8E80(sParam16);
					unk_0x69967F83C1E636E2(iParam18);
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 5 && !unk_0x9C88EB7B70229335(sParam16))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_ONE_INT");
					unk_0x34D84D73B5DF8E80(sParam16);
					unk_0x69967F83C1E636E2(iParam18);
					unk_0x1798EBF9408190D3();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x9C88EB7B70229335(sParam16)) && !unk_0x9C88EB7B70229335(sParam17))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_TWO_INT");
					unk_0x34D84D73B5DF8E80(sParam16);
					unk_0x34D84D73B5DF8E80(sParam17);
					unk_0x69967F83C1E636E2(iParam18);
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 8 && !unk_0x9C88EB7B70229335(&(uParam2->f_104)))
				{
					unk_0xDCEB60B79ECB219E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x561D1C39012D002B(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x69967F83C1E636E2(iParam10);
					}
					unk_0x34D84D73B5DF8E80(&(uParam2->f_104));
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xDCEB60B79ECB219E("FM_AE_CASH");
					unk_0x1C4A0E5E77C7F187(iParam10, 1);
					unk_0x1798EBF9408190D3();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xDCEB60B79ECB219E("FM_AE_CASH");
						unk_0x1C4A0E5E77C7F187(iParam10, 1);
						unk_0x1798EBF9408190D3();
					}
					else
					{
						unk_0xDCEB60B79ECB219E("FM_NG_CASH");
						unk_0x1C4A0E5E77C7F187(iParam10, 1);
						unk_0x1798EBF9408190D3();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x9C88EB7B70229335(&(uParam2->f_104)))
					{
						func_249(&(uParam2->f_104));
					}
					else
					{
						func_263("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xDCEB60B79ECB219E("STRING");
					unk_0x96F1415E7C5E58EB(iParam14, 6);
					unk_0x1798EBF9408190D3();
				}
				else if (fParam13 != -1f)
				{
					unk_0xDCEB60B79ECB219E("NUMBER");
					unk_0x561D1C39012D002B(fParam13, 1);
					unk_0x1798EBF9408190D3();
				}
				else if (iParam10 != -1)
				{
					unk_0xDF18CF55301CEB8B(iParam10);
				}
				else
				{
					func_263("");
				}
				if (uParam2->f_108 == 6)
				{
					func_263("");
				}
				else
				{
					func_263(&sParam4);
				}
				func_251(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x9C88EB7B70229335(sParam8))
				{
					func_263("");
					func_263("");
				}
				else
				{
					unk_0xFCE11728AE1CFA11(sParam8);
					unk_0xFCE11728AE1CFA11(sParam8);
				}
				if (func_250(uParam2))
				{
					func_249("DPAD_FRIEND");
				}
				else if (func_248(uParam2))
				{
					func_249("DPAD_FRIEND");
				}
				else if (func_247(uParam2))
				{
					func_249("DPAD_CREW");
				}
				else
				{
					func_249("");
				}
				unk_0x44983883E630A945();
			}
		}
	}
}

int func_267(int iParam0)
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

bool func_268(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_223(iParam0))
		{
			return 0;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_75();
}

int func_269(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_125(iParam0)) && !func_274(iParam0))
	{
		iVar0 = func_273();
	}
	iVar1 = func_272(iParam0);
	if (!iVar1 == -1)
	{
		return func_270(iVar1);
	}
	return iVar0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_271(iParam0);
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

var func_271(int iParam0)
{
	return Global_2415716.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_272(int iParam0)
{
	if (!iParam0 == func_75())
	{
		if (func_268(iParam0, 1))
		{
			return Global_2415716.f_1946.f_11[func_76(iParam0)];
		}
	}
	return -1;
}

int func_273()
{
	return 21;
}

bool func_274(int iParam0)
{
	return func_180(iParam0, 20);
}

char* func_275(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x15EF3CAA574DAEED())
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
			if (unk_0x15EF3CAA574DAEED())
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

int func_276(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_280(iParam3))
	{
		*fParam1 = (func_277(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_267(iParam3))
	{
		*fParam1 = (func_277(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_277(int iParam0, int iParam1)
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
			if (unk_0x15EF3CAA574DAEED())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_279(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x15EF3CAA574DAEED())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_278(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_278(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_279(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_280(int iParam0)
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

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = func_284(iParam0);
	if (iVar0 == -1)
	{
		func_282(iParam0, 1);
		return 0;
	}
	Global_1364072[iVar0 /*5*/].f_4 = 1;
	return Global_1364072[iVar0 /*5*/].f_2;
}

void func_282(int iParam0, bool bParam1)
{
	if (!func_835(iParam0, 0, 1))
	{
		return;
	}
	if (func_284(iParam0) != -1)
	{
		return;
	}
	if (Global_1364235)
	{
		if (iParam0 == Global_1364235.f_1)
		{
			return;
		}
	}
	if (func_283(iParam0))
	{
		return;
	}
	if (Global_1364273 >= 32)
	{
		return;
	}
	Global_1364240[Global_1364273] = iParam0;
	Global_1364273++;
	if (bParam1)
	{
	}
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364273)
	{
		if (Global_1364240[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	if (!func_835(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1364233 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364233)
	{
		if (Global_1364072[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x570F715345905581(Global_1364072[iVar0 /*5*/].f_2) && unk_0x97CCE7AE66FA8CB9(Global_1364072[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_285(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_285(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1364233)
	{
		return;
	}
	if (unk_0x570F715345905581(Global_1364072[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1364072[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7F897CE1A139406E(Global_1364072[iParam0 /*5*/].f_2), 64);
			unk_0xA15206CC127327EA(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3DD64AC41265D51A(Global_1364072[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1364233)
	{
		Global_1364072[iVar32 /*5*/] = { Global_1364072[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_286(&(Global_1364072[iVar32 /*5*/]));
	Global_1364233 = (Global_1364233 - 1);
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_75();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x63C468D583002D23())
	{
		uParam0->f_3 = unk_0xCB150A8B81012128();
	}
}

struct<4> func_287(int iParam0)
{
	struct<4> Var0;
	
	if (func_835(iParam0, 0, 1))
	{
		Global_2482053 = { func_77(iParam0) };
		if (unk_0x8EA3D5407E9F4AF0())
		{
			if (func_237(Global_2482053))
			{
				if (!unk_0x7BB94A563F5F14FD(&Global_2482053))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x5DC8C64FE18EADF7(0))
		{
			return Var0;
		}
		if (func_291(&Global_2482053))
		{
			Global_2481983 = { func_289(iParam0) };
			func_288(&Global_2481983, &Var0);
		}
	}
	return Var0;
}

void func_288(var uParam0, var uParam1)
{
	unk_0xC4D7F7FDC44E9AC3(uParam0, 35, uParam1);
}

struct<35> func_289(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_290(iParam0))
	{
		return Global_1315265[unk_0xBE369BE1BC57A796() /*35*/];
	}
	Var0 = { func_77(iParam0) };
	unk_0x7E1D32162078314A(&Var13, 35, &Var0);
	return Var13;
}

int func_290(int iParam0)
{
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		return 1;
	}
	return 0;
}

int func_291(var uParam0)
{
	if (unk_0x9B0FAF2C1DE9BB5A())
	{
		if (unk_0x749CE7B33672D350() && unk_0x3B13D05FD2D29D80(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_231(iParam0) || func_296(iParam0)) || func_295(iParam0))
		{
			return 0;
		}
	}
	if (!func_294(iParam0))
	{
		return 0;
	}
	if ((!func_293(iParam0) && Global_2421664[iParam0 /*358*/].f_239 == -1) && !func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)
{
	if (func_835(iParam0, 0, 1))
	{
		if (func_835(unk_0xBE369BE1BC57A796(), 0, 1))
		{
			if (unk_0xECE6499178490DE1(iParam0, unk_0xBE369BE1BC57A796()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_294(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 22);
}

bool func_295(int iParam0)
{
	if (func_231(iParam0))
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 8);
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 10) || unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 9));
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_140(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x48B8265059381CD0(Global_1591201[iVar0 /*602*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_298()
{
	switch (func_204(unk_0xBE369BE1BC57A796()))
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
	switch (func_299(unk_0xBE369BE1BC57A796()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_274(unk_0xBE369BE1BC57A796()))
	{
		switch (func_204(unk_0xBE369BE1BC57A796()))
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

int func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1619421[iVar0 /*390*/];
	}
	return -1;
}

int func_300(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 && func_301(Global_1619421[iParam0 /*390*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1)
	{
		if (func_301(Global_1619421[iParam0 /*390*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_301(int iParam0)
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
	return func_302(iParam0, 0);
	return 0;
}

int func_302(int iParam0, int iParam1)
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

void func_303(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_835(unk_0x0C36F33B3F746611(iVar0), 0, 1))
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar0);
			if (!func_140(iVar1, 0))
			{
				if ((unk_0xECE6499178490DE1(iVar1, unk_0xBE369BE1BC57A796()) || Global_2421664[iVar1 /*358*/].f_239 != -1) || func_107(iVar1))
				{
					if (func_304(iVar1, iParam1, 0))
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

int func_304(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_75())
	{
		if (!bParam2)
		{
			if (func_305(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1619421[iParam0 /*390*/].f_11 != func_75())
		{
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	if (iParam1 != func_75())
	{
		if (iParam0 != func_75())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 != func_75())
			{
				if (Global_1619421[iParam0 /*390*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_306(var uParam0)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xDF18CF55301CEB8B(0);
		unk_0x44983883E630A945();
	}
}

void func_307(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1353067.f_2 == 0)
		{
			Global_1353067.f_2 = 1;
		}
	}
	else if (Global_1353067.f_2 == 1)
	{
		Global_1353067.f_2 = 0;
	}
}

void func_308()
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 1))
	{
		if (func_310())
		{
			func_309();
		}
	}
}

void func_309()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_310()
{
	return Global_2433125.f_2199[0 /*76*/].f_1 != 0;
}

int func_311()
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 0) && func_310())
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 1) && func_310())
	{
		return 1;
	}
	return 0;
}

int func_312()
{
	if (func_310())
	{
		if (func_313(Global_2433125.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0)
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

int func_314()
{
	if (func_310())
	{
		if (func_315(Global_2433125.f_2199[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)
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

void func_316(int iParam0)
{
	Global_1353067.f_1 = Global_1353067;
	Global_1353067 = iParam0;
}

int func_317(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_364(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_363();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_362())
		{
			if (func_361() > 0 && Global_1574105)
			{
				unk_0x71231C7FAF12B6DB();
				unk_0xDE0328664F42BCD5(fVar7);
				unk_0xE57F94EA937AAD99(18);
				if (unk_0x9E123D5FF2973C60())
				{
					unk_0xECE81A92069CEC24();
				}
				unk_0xE57F94EA937AAD99(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_349())
		{
			func_348(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
	{
		func_348(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_361() == 1)
		{
			func_347(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_348(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x9E123D5FF2973C60())
		{
			unk_0xECE81A92069CEC24();
		}
		unk_0xE57F94EA937AAD99(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_361() == 0 && !bParam5))
		{
			func_348(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_346();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0x71231C7FAF12B6DB();
				}
				unk_0xE57F94EA937AAD99(18);
			}
			if (unk_0x48B8265059381CD0(uParam2->f_33, 0))
			{
				Global_1574103 = uParam3;
				Global_1574102 = 1;
				unk_0xDE0328664F42BCD5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574104)
					{
						unk_0x21E7933CCC7B3724(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_346();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x71231C7FAF12B6DB();
					}
					unk_0xE57F94EA937AAD99(18);
				}
				unk_0xDE0328664F42BCD5(fVar7);
				if (func_347(bVar6, uParam0, 0))
				{
					func_306(uParam0);
					sVar4 = func_344(iParam1, &(Global_1633501.f_88653), bParam4);
					Var0 = { func_342(iParam1) };
					if (bParam4)
					{
						func_339(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_332(uParam0, func_336(uParam2), func_333(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_323(uParam0, func_325(), func_324(), -1);
					}
					else if (func_252())
					{
						uParam2->f_34 = Global_1574104;
						func_339(uParam0, sVar4, &Var0, 1, -1, Global_1574104, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574104;
						func_339(uParam0, sVar4, "", 0, -1, Global_1574104, 1);
					}
					else
					{
						iVar8 = func_318(iParam1);
						func_339(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xEB79FECD9022AAF0(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_318(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_322())
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
			if (func_321(unk_0xBE369BE1BC57A796()))
			{
				iVar0 = 20;
			}
			if (func_320(unk_0xBE369BE1BC57A796()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_319(unk_0xBE369BE1BC57A796()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_319(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 4;
}

bool func_320(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

bool func_321(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_322()
{
	return Global_1633501.f_1 == 0;
}

void func_323(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_TITLE");
		if (unk_0x9C88EB7B70229335(sParam2))
		{
			func_249(sParam1);
		}
		else
		{
			unk_0xDCEB60B79ECB219E("FM_AE_BRACKT");
			unk_0x34D84D73B5DF8E80(sParam1);
			unk_0x34D84D73B5DF8E80(sParam2);
			unk_0x1798EBF9408190D3();
		}
		func_249("");
		if (iParam3 != -1)
		{
			unk_0xDF18CF55301CEB8B(iParam3);
		}
		unk_0x44983883E630A945();
	}
}

char* func_324()
{
	switch (func_204(unk_0xBE369BE1BC57A796()))
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

char* func_325()
{
	switch (func_204(unk_0xBE369BE1BC57A796()))
	{
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
			if (func_328())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_327(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_327(1))
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
			if (func_326(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_326(int iParam0)
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

bool func_327(bool bParam0)
{
	return func_257(unk_0xBE369BE1BC57A796(), bParam0);
}

bool func_328()
{
	return (func_331() && func_329(func_330()));
}

bool func_329(int iParam0)
{
	return func_259(iParam0, 1);
}

int func_330()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_34;
}

bool func_331()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148;
}

void func_332(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_TITLE");
		if (unk_0x9C88EB7B70229335(sParam2))
		{
			func_249(sParam1);
		}
		else if (func_299(unk_0xBE369BE1BC57A796()) == 133)
		{
			unk_0xDCEB60B79ECB219E("FM_AE_BRACKT_C");
			unk_0x34D84D73B5DF8E80(sParam1);
			unk_0x34D84D73B5DF8E80(sParam2);
			unk_0x1798EBF9408190D3();
		}
		else
		{
			unk_0xDCEB60B79ECB219E("FM_AE_BRACKT");
			unk_0x34D84D73B5DF8E80(sParam1);
			unk_0x34D84D73B5DF8E80(sParam2);
			unk_0x1798EBF9408190D3();
		}
		func_249("");
		if (iParam3 != -1)
		{
			unk_0xDF18CF55301CEB8B(iParam3);
		}
		unk_0x44983883E630A945();
	}
}

char* func_333(var uParam0)
{
	int iVar0;
	
	iVar0 = func_299(unk_0xBE369BE1BC57A796());
	if (func_335())
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
			switch (func_334())
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

int func_334()
{
	if (func_299(unk_0xBE369BE1BC57A796()) == 133)
	{
		return Global_2494199.f_4692;
	}
	return -1;
}

bool func_335()
{
	return Global_1591089;
}

char* func_336(var uParam0)
{
	int iVar0;
	
	iVar0 = func_299(unk_0xBE369BE1BC57A796());
	if (func_335())
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
			if (func_338() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_338() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_334())
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
			if (func_337() == 1)
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

int func_337()
{
	return Global_2494199.f_4695;
}

int func_338()
{
	if (func_299(unk_0xBE369BE1BC57A796()) == 132)
	{
		return Global_2494199.f_4690;
	}
	return -1;
}

void func_339(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0xEAC9A8A194DF8F91(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_263(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xDCEB60B79ECB219E(sParam1);
			unk_0x69967F83C1E636E2(iParam5);
			unk_0x1798EBF9408190D3();
		}
		else
		{
			func_249(sParam1);
		}
		if (func_362() && iParam6)
		{
			if (func_341())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xDCEB60B79ECB219E("LBD_DPD_CNT");
			unk_0x69967F83C1E636E2(iVar0);
			unk_0x69967F83C1E636E2(iVar1);
			unk_0x1798EBF9408190D3();
		}
		else
		{
			func_249(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xDF18CF55301CEB8B(iParam4);
			if (func_340(unk_0xBE369BE1BC57A796()))
			{
				unk_0xDF18CF55301CEB8B(166);
			}
		}
		unk_0x44983883E630A945();
	}
}

int func_340(int iParam0)
{
	if (func_321(iParam0) || func_320(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_341()
{
	return Global_1574105;
}

struct<4> func_342(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_343(unk_0xBE369BE1BC57A796()) || func_319(unk_0xBE369BE1BC57A796()))
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
			StringIntConCat(&Var0, Global_1633501.f_28, 16);
			break;
	}
	if (func_252() && unk_0xF7271A9481CAC8E3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1633501.f_28, 16);
	}
	return Var0;
}

bool func_343(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 5;
}

char* func_344(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_252() || unk_0x9C88EB7B70229335(uParam1)))
	{
		uVar0 = func_345();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574302 == 0)
		{
			Global_1574302 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x9C88EB7B70229335(sParam1))
	{
		if (Global_1574302 == 1)
		{
			Global_1574302 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574302 == 0)
		{
			Global_1574302 = 1;
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

char* func_345()
{
	if (unk_0x4C9507F8E50FC6AF())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x505CA008E5D66AC1())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB61E69EF42A9B490())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBBA3C43AC37CB882())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_346()
{
	Global_36684 = 1;
}

bool func_347(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB50E108F09B8EC7A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB50E108F09B8EC7A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB50E108F09B8EC7A("mp_matchmaking_card");
	}
	return unk_0xFF84A94166FBB351(*uParam1);
}

void func_348(var uParam0, var uParam1, bool bParam2)
{
	unk_0x21E7933CCC7B3724(&(uParam1->f_33), 7);
	Global_1574103 = 0;
	func_241();
	Global_1574102 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_242(&(uParam1->f_19));
		}
	}
	if (unk_0xFF84A94166FBB351(*uParam0))
	{
		unk_0x33CBABDFE7B17924(uParam0);
	}
	if (unk_0x48B8265059381CD0(uParam1->f_33, 0))
	{
		unk_0x21E7933CCC7B3724(&(uParam1->f_33), 0);
	}
	unk_0xDE0328664F42BCD5(0f);
}

int func_349()
{
	if (func_360())
	{
		return 0;
	}
	if (func_359())
	{
		return 0;
	}
	if (!func_357())
	{
		return 0;
	}
	if (!func_355())
	{
		return 0;
	}
	if (func_354(8, -1))
	{
		return 0;
	}
	if (func_361() == 2)
	{
		return 0;
	}
	if (Global_2494199.f_4407)
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	else if (!func_33(unk_0xBE369BE1BC57A796(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_352(1) || func_350(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (func_80(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (Global_1751032)
	{
		return 0;
	}
	if (Global_1751035)
	{
		return 0;
	}
	if (func_185(0))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 4))
	{
		return 0;
	}
	return 1;
}

int func_350(bool bParam0)
{
	if (unk_0x7A81C223E57BFCA4())
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (func_351(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x79888727131C6854(0, 25) || unk_0x79888727131C6854(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x79888727131C6854(0, 19) || (!bParam0 && unk_0x9E3D293A990C1BEF(0, 19)))
	{
		return 1;
	}
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (((unk_0x79888727131C6854(0, 166) || unk_0x79888727131C6854(0, 167)) || unk_0x79888727131C6854(0, 168)) || unk_0x79888727131C6854(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x9E3D293A990C1BEF(0, 166) || unk_0x9E3D293A990C1BEF(0, 167)) || unk_0x9E3D293A990C1BEF(0, 168)) || unk_0x9E3D293A990C1BEF(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (unk_0x8BE30CF2E1E63744())
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_352(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_353()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

bool func_354(int iParam0, int iParam1)
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

int func_355()
{
	if (func_356() == 0)
	{
		return 1;
	}
	return 0;
}

int func_356()
{
	return Global_1312466.f_18;
}

int func_357()
{
	if (func_358())
	{
		return 1;
	}
	if (unk_0x25BD4C26D84038CD())
	{
		return 0;
	}
	if (unk_0x46EEE08565CE19CA() || unk_0x5C0856D86B18EE57())
	{
		return 0;
	}
	if (unk_0x9E0EF228488611AD())
	{
		return 0;
	}
	return 1;
}

bool func_358()
{
	return Global_1312438;
}

bool func_359()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 5;
}

bool func_360()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_361()
{
	return Global_1353070.f_68;
}

int func_362()
{
	if (Global_1574104 > 16)
	{
		return 1;
	}
	return 0;
}

float func_363()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x8B0C15BA8FEAA03A()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_364(int iParam0)
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

int func_365()
{
	if (func_366(unk_0xBE369BE1BC57A796()))
	{
		return Global_1318168;
	}
	return 0;
}

int func_366(int iParam0)
{
	if (unk_0x63C468D583002D23())
	{
		if (func_140(iParam0, 0))
		{
			return unk_0x30BC32023EA26E38(iParam0);
		}
	}
	return 0;
}

int func_367()
{
	if (func_365())
	{
		return 1;
	}
	if (func_295(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_335())
	{
		return 1;
	}
	if (func_125(unk_0xBE369BE1BC57A796()))
	{
		switch (func_299(unk_0xBE369BE1BC57A796()))
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
				if (!func_368(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_368(unk_0xBE369BE1BC57A796()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_368(unk_0xBE369BE1BC57A796()))
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

bool func_368(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 4);
}

int func_369(int iParam0)
{
	if ((iParam0 == 26 && func_125(unk_0xBE369BE1BC57A796())) && !func_274(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_124(unk_0xBE369BE1BC57A796(), 0) && func_274(unk_0xBE369BE1BC57A796()))
		{
			return 1;
		}
		if (func_370(unk_0xBE369BE1BC57A796()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_125(iParam0) && !func_231(iParam0)) && !unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 8));
	bVar2 = func_274(iParam0);
	uVar3 = func_378();
	uVar4 = func_372();
	if ((bVar1 && (func_230(iParam0) || func_229(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_224(iParam0)) && !func_371(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2494199.f_4710.f_29 != iVar0)
	{
		Global_2494199.f_4710.f_29 = iVar0;
	}
	return iVar0;
}

bool func_371(int iParam0)
{
	return func_180(iParam0, 19);
}

int func_372()
{
	if ((func_180(unk_0xBE369BE1BC57A796(), 21) || func_180(unk_0xBE369BE1BC57A796(), 22)) || func_375())
	{
		return 1;
	}
	if (func_373())
	{
		func_207(22);
		return 1;
	}
	return 0;
}

int func_373()
{
	if (func_124(unk_0xBE369BE1BC57A796(), 0))
	{
		if ((func_378() && !func_374()) || func_221(unk_0xBE369BE1BC57A796(), 21))
		{
			return 1;
		}
		else
		{
			func_206(27);
		}
	}
	return 0;
}

bool func_374()
{
	return Global_1312416.f_1;
}

bool func_375()
{
	return func_376(286, -1);
}

int func_376(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_377(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
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

bool func_378()
{
	return Global_1312416;
}

bool func_379()
{
	return unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 1);
}

void func_380()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_381(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_381(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 10))
	{
		if (Local_195.f_34 > -1)
		{
			if (func_379())
			{
				if (!func_372())
				{
					if (!unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 5))
					{
						if (!unk_0x48B8265059381CD0(Local_195.f_1, 4))
						{
							if (unk_0x23E9113C762466ED(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0x80E9CA64E9C8E070(Var0.f_0))
									{
										uVar11 = unk_0xB80CAAF3D65FBC1F(Var0.f_0);
										if (unk_0x0764AC92F08BEC9E(uVar11))
										{
											iVar12 = unk_0xDE881A032F5BA110(uVar11);
											if (iVar12 == unk_0x0C36F33B3F746611(Local_195.f_34))
											{
												if (unk_0x23E9113C762466ED(Var0.f_1))
												{
													if (unk_0x80E9CA64E9C8E070(Var0.f_1))
													{
														uVar10 = unk_0xB80CAAF3D65FBC1F(Var0.f_1);
														if (unk_0x0764AC92F08BEC9E(uVar10))
														{
															iVar13 = unk_0xDE881A032F5BA110(uVar10);
															if (iVar13 == unk_0xBE369BE1BC57A796())
															{
																unk_0xEB79FECD9022AAF0(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 5);
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
	if (func_379())
	{
		if (!func_180(unk_0xBE369BE1BC57A796(), 20))
		{
			if (unk_0x23E9113C762466ED(Var0.f_0))
			{
				if (unk_0x80E9CA64E9C8E070(Var0.f_0))
				{
					uVar11 = unk_0xB80CAAF3D65FBC1F(Var0.f_0);
					if (unk_0x0764AC92F08BEC9E(uVar11))
					{
						iVar12 = unk_0xDE881A032F5BA110(uVar11);
						if (unk_0x23E9113C762466ED(Var0.f_1))
						{
							if (unk_0x80E9CA64E9C8E070(Var0.f_1))
							{
								uVar10 = unk_0xB80CAAF3D65FBC1F(Var0.f_1);
								if (unk_0x0764AC92F08BEC9E(uVar10))
								{
									iVar13 = unk_0xDE881A032F5BA110(uVar10);
									if (iVar13 == unk_0xBE369BE1BC57A796())
									{
										if (unk_0xD54DE3C9493BFEC2(iVar12))
										{
											if (func_268(iVar12, 1))
											{
												if (Local_195.f_33 > -1)
												{
													iVar14 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(Local_195.f_33));
													if (func_304(iVar12, iVar14, 1))
													{
														func_382(0);
														func_226();
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

void func_382(int iParam0)
{
	if (!func_274(unk_0xBE369BE1BC57A796()))
	{
		if (iParam0 || func_370(unk_0xBE369BE1BC57A796()) != 0)
		{
			func_207(20);
			if (func_125(unk_0xBE369BE1BC57A796()))
			{
				if (!unk_0x48B8265059381CD0(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1, 8))
				{
					unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1), 8);
				}
			}
		}
	}
}

void func_383()
{
	switch (Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_2)
	{
		case 0:
			func_623();
			func_384();
			if (Local_195.f_32 == 2)
			{
				Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_2 = 2;
			}
			else if (Local_195.f_32 == 3)
			{
				Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_384();
			if (Local_195.f_32 == 3)
			{
				Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_768();
			break;
	}
}

void func_384()
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar14 = func_75();
	iVar15 = func_75();
	iVar16 = func_75();
	if (!unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 4))
	{
		if (!unk_0x48B8265059381CD0(uLocal_448, 9))
		{
			if (unk_0x48B8265059381CD0(Local_195.f_1, 1))
			{
				if (unk_0xCA1D9459B2CC7619() == Local_195.f_33 || func_756() == Local_195.f_33)
				{
					if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
					{
						sVar17 = func_622();
						iVar18 = func_621(unk_0xBE369BE1BC57A796());
						func_619(87, "GB_WINNER", "BIGM_SGHTYD", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0x48B8265059381CD0(iLocal_448, 6))
					{
						func_604(1, 1, 0, 0, -1, -1, -1, -1);
						unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
					}
					func_469(142, 1, &Var0, 0);
					unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
				}
				else if (func_379())
				{
					if (func_268(unk_0xBE369BE1BC57A796(), 1))
					{
						if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
						{
							sVar17 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
							iVar18 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
							func_619(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0x48B8265059381CD0(iLocal_448, 6))
						{
							func_604(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
						}
						func_469(142, 0, &Var0, 0);
					}
					else
					{
						if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
						{
							sVar17 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
							iVar18 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
							func_619(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0x48B8265059381CD0(iLocal_448, 6))
						{
							func_604(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
						}
						func_469(142, 0, &Var0, 0);
					}
				}
				unk_0xEB79FECD9022AAF0(&iLocal_448, 9);
			}
			else if (unk_0x48B8265059381CD0(Local_195.f_1, 3))
			{
				func_462(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0x48B8265059381CD0(iLocal_448, 6))
				{
					func_604(0, 7, 0, 0, -1, -1, -1, -1);
					unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
				}
				func_469(142, 0, &Var0, 0);
				unk_0xEB79FECD9022AAF0(&iLocal_448, 9);
			}
			else if (unk_0x48B8265059381CD0(Local_195.f_1, 4))
			{
				if (Local_195.f_35 > -1)
				{
					iVar15 = unk_0x0C36F33B3F746611(Local_195.f_35);
				}
				if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
				{
					if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
					{
						if (unk_0x7268A1112372AA44(iVar15))
						{
							if (func_268(iVar15, 1))
							{
								sVar17 = func_463(iVar15);
								iVar18 = func_621(iVar15);
							}
							else
							{
								sVar17 = unk_0x592E5DF66777D40F(iVar15);
								iVar18 = 1;
							}
							func_619(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_619(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
						}
					}
					func_469(142, 0, &Var0, 0);
					if (!unk_0x48B8265059381CD0(iLocal_448, 6))
					{
						func_604(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
					}
				}
				else if (func_756() == Local_195.f_33)
				{
					iVar14 = unk_0x0C36F33B3F746611(Local_195.f_34);
					if (iVar14 != func_75())
					{
						if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
						{
							if (unk_0x7268A1112372AA44(iVar15))
							{
								if (func_268(iVar15, 1))
								{
									sVar17 = func_463(iVar15);
									iVar18 = func_621(iVar15);
								}
								else
								{
									sVar17 = unk_0x592E5DF66777D40F(iVar15);
									iVar18 = 1;
								}
								func_619(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_619(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
							}
						}
						func_469(142, 0, &Var0, 0);
						if (!unk_0x48B8265059381CD0(iLocal_448, 6))
						{
							func_604(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
						}
					}
				}
				else if (func_379())
				{
					iVar15 = unk_0x0C36F33B3F746611(Local_195.f_35);
					if (iVar15 != func_75())
					{
						if (iVar15 == unk_0xBE369BE1BC57A796())
						{
							if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
							{
								if (func_461(1))
								{
									func_462(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_462(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
							if (!unk_0x48B8265059381CD0(iLocal_448, 6))
							{
								func_604(1, 1, 0, 0, -1, -1, -1, -1);
								unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
							}
							func_469(142, 1, &Var0, 0);
						}
						else if (func_461(1))
						{
							iVar16 = func_460();
							if (func_304(iVar15, iVar16, 1))
							{
								if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
								{
									func_440(87, iVar15, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, -1);
								}
								if (!unk_0x48B8265059381CD0(iLocal_448, 6))
								{
									func_604(1, 1, 0, 0, -1, -1, -1, -1);
									unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
								}
								func_469(142, 0, &Var0, 0);
							}
							else
							{
								if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
								{
									if (unk_0x7268A1112372AA44(iVar15))
									{
										if (func_268(iVar15, 1))
										{
											sVar17 = func_463(iVar15);
											iVar18 = func_621(iVar15);
										}
										else
										{
											sVar17 = unk_0x592E5DF66777D40F(iVar15);
											iVar18 = 1;
										}
										func_619(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_462(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0x48B8265059381CD0(iLocal_448, 6))
								{
									func_604(0, 2, 0, 0, -1, -1, -1, -1);
									unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
								}
								func_469(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
							{
								if (unk_0x7268A1112372AA44(iVar15))
								{
									if (func_268(iVar15, 1))
									{
										sVar17 = func_463(iVar15);
										iVar18 = func_621(iVar15);
									}
									else
									{
										sVar17 = unk_0x592E5DF66777D40F(iVar15);
										iVar18 = 1;
									}
									func_619(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar17, iVar18, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_462(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0x48B8265059381CD0(iLocal_448, 6))
							{
								func_604(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
							}
							func_469(142, 0, &Var0, 0);
						}
					}
				}
				unk_0xEB79FECD9022AAF0(&iLocal_448, 9);
			}
			else if (unk_0x48B8265059381CD0(Local_195.f_1, 5))
			{
				if (func_417())
				{
					if (func_755())
					{
						if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
						{
						}
					}
					else if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
					{
						func_462(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0x48B8265059381CD0(iLocal_448, 6))
				{
					func_604(0, 8, 0, 0, -1, -1, -1, -1);
					unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
				}
				func_469(159, 0, &Var0, 0);
				unk_0xEB79FECD9022AAF0(&iLocal_448, 9);
			}
		}
		if (unk_0x48B8265059381CD0(iLocal_448, 9))
		{
			func_410();
			if (!unk_0x48B8265059381CD0(iLocal_449, 8))
			{
				unk_0xEB79FECD9022AAF0(&iLocal_449, 8);
			}
			if (!unk_0x48B8265059381CD0(iLocal_448, 10))
			{
				if (Local_195.f_34 != -1)
				{
					if (unk_0x48B8265059381CD0(iLocal_448, 5))
					{
						if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(Local_195.f_34)))
						{
							func_408(unk_0x0C36F33B3F746611(Local_195.f_34), 432, 0);
							func_406(unk_0x0C36F33B3F746611(Local_195.f_34), 1, 0);
							func_405(unk_0x0C36F33B3F746611(Local_195.f_34), 0, 0);
							func_404(unk_0x0C36F33B3F746611(Local_195.f_34), 0);
							func_403(unk_0x0C36F33B3F746611(Local_195.f_34), Global_262145.f_10975, 0);
							unk_0xEB79FECD9022AAF0(&iLocal_448, 10);
						}
					}
				}
			}
			if (func_385(&uLocal_817, 1, 0))
			{
				unk_0xEB79FECD9022AAF0(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 4);
			}
		}
	}
}

int func_385(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_207(29);
	if ((*uParam0 > 0 && !func_310()) && func_370(unk_0xBE369BE1BC57A796()) != 0)
	{
		if (!func_400())
		{
			func_399();
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
				unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 2);
				if (bParam1)
				{
					unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4446), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_398(uParam0, 1);
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
				func_392(iParam2);
				func_398(uParam0, 2);
			}
			break;
		
		case 2:
			func_392(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_386(func_387(0)))
				{
					unk_0x2E2945F5602A744F(1);
				}
				func_398(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x21E7933CCC7B3724(&(Global_2494199.f_4446), 1);
				unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 2);
				func_398(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x21E7933CCC7B3724(&(Global_2494199.f_4446), 1);
			unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_386(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

char* func_387(int iParam0)
{
	if (((func_390(unk_0xBE369BE1BC57A796()) || func_389(unk_0xBE369BE1BC57A796())) || func_328()) || iParam0)
	{
		if (func_389(unk_0xBE369BE1BC57A796()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_301(func_388()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_388()
{
	return Global_1631902;
}

bool func_389(int iParam0)
{
	return func_302(func_204(iParam0), 0);
}

bool func_390(int iParam0)
{
	return func_391(func_204(iParam0));
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148 && func_259(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_34, 1))
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

void func_392(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4446, 0))
	{
		if ((((((((((!unk_0xF4CF563B04C79242() && !unk_0x48B8265059381CD0(Global_2494199.f_743, 2)) && func_835(unk_0xBE369BE1BC57A796(), 1, 1)) && !Global_68131) && !Global_53003) && !unk_0x25BD4C26D84038CD()) && !func_180(unk_0xBE369BE1BC57A796(), 22)) && func_370(unk_0xBE369BE1BC57A796()) != 0) && !func_396(func_397())) && !func_390(unk_0xBE369BE1BC57A796())) && !func_395(func_204(unk_0xBE369BE1BC57A796())))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4446), 1);
			func_394(func_387(iParam0), -1);
			func_393(1);
			unk_0x21E7933CCC7B3724(&(Global_2494199.f_4446), 0);
		}
	}
}

void func_393(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_327(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_310())
	{
		unk_0x4988C48537D1AE4F(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_394(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 0, iParam1);
}

int func_395(int iParam0)
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

int func_396(int iParam0)
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

int func_397()
{
	var uVar0;
	
	uVar0 = unk_0x6AF6B39BFDB53CB5();
	if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	return 0;
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_399()
{
	Global_2454051 = 1;
}

int func_400()
{
	if (((((((func_204(unk_0xBE369BE1BC57A796()) == 170 || func_204(unk_0xBE369BE1BC57A796()) == 219) || func_204(unk_0xBE369BE1BC57A796()) == 221) || func_204(unk_0xBE369BE1BC57A796()) == 220) || func_204(unk_0xBE369BE1BC57A796()) == 216) || func_204(unk_0xBE369BE1BC57A796()) == 215) || func_204(unk_0xBE369BE1BC57A796()) == 214) || func_204(unk_0xBE369BE1BC57A796()) == 218)
	{
		return 1;
	}
	if (func_401(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (func_835(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_402(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
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
			return 3;
			break;
	}
	return -1;
}

void func_403(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_213())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x1EFA84312BB8AA22(Global_2414713.f_770[iParam0]) || Global_2414713.f_770[iParam0] == unk_0xE9A5FDFDC239B2ED())
	{
		if (bParam2)
		{
			unk_0xEB79FECD9022AAF0(&(Global_2414713.f_389), iVar0);
			Global_2414713.f_539[iVar0] = uParam1;
			Global_2414713.f_770[iParam0] = unk_0xE9A5FDFDC239B2ED();
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_2414713.f_389), iVar0);
			Global_2414713.f_770[iParam0] = -1;
		}
	}
}

void func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_2414713.f_365), iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_2414713.f_365), iParam0);
	}
	if (unk_0xA3794949321E107C(Global_2414713[iParam0]))
	{
		if (bParam1)
		{
			unk_0x7E2A76828C48BFB2(Global_2414713[iParam0], 0);
		}
		else
		{
			unk_0x7E2A76828C48BFB2(Global_2414713[iParam0], 1);
		}
	}
}

void func_405(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_835(iParam0, 1, 1))
		{
			Global_2414713.f_704[iParam0] = unk_0xE9A5FDFDC239B2ED();
			unk_0xEB79FECD9022AAF0(&(Global_2414713.f_364), iParam0);
			func_404(iParam0, bParam2);
		}
	}
	else
	{
		func_404(iParam0, bParam2);
		unk_0x21E7933CCC7B3724(&(Global_2414713.f_364), iParam0);
		Global_2414713.f_704[iParam0] = -1;
	}
}

void func_406(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_213())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_407(iParam0))
	{
		if (bParam2)
		{
			unk_0xEB79FECD9022AAF0(&(Global_2414713.f_386), iVar0);
			Global_2414713.f_605[iParam0] = unk_0xE9A5FDFDC239B2ED();
			Global_2414713.f_440[iVar0] = iParam1;
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_2414713.f_386), iVar0);
			Global_2414713.f_605[iParam0] = -1;
		}
	}
}

int func_407(int iParam0)
{
	if (!unk_0x1EFA84312BB8AA22(Global_2414713.f_605[iParam0]) || Global_2414713.f_605[iParam0] == unk_0xE9A5FDFDC239B2ED())
	{
		return 1;
	}
	return 0;
}

void func_408(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == func_213())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x1EFA84312BB8AA22(Global_2414713.f_572[iParam0]) || Global_2414713.f_572[iParam0] == unk_0xE9A5FDFDC239B2ED())
	{
		if (bParam2)
		{
			if (!unk_0x48B8265059381CD0(Global_2414713.f_385, iVar0))
			{
				func_409();
			}
			unk_0xEB79FECD9022AAF0(&(Global_2414713.f_385), iVar0);
			Global_2414713.f_407[iVar0] = uVar1;
			Global_2414713.f_572[iParam0] = unk_0xE9A5FDFDC239B2ED();
		}
		else
		{
			if (unk_0x48B8265059381CD0(Global_2414713.f_385, iVar0))
			{
				func_409();
			}
			unk_0x21E7933CCC7B3724(&(Global_2414713.f_385), iVar0);
			Global_2414713.f_572[iParam0] = -1;
		}
	}
}

void func_409()
{
	Global_2414713.f_995 = 1;
}

void func_410()
{
	if (!func_416())
	{
		return;
	}
	if (!unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) == Global_1312575.f_9)
	{
		return;
	}
	func_411();
}

void func_411()
{
	func_413();
	func_412(0);
}

void func_412(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x63C468D583002D23();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0xCB150A8B81012128();
		Global_1312575.f_11 = unk_0xCB150A8B81012128();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_413()
{
	if (!func_415())
	{
	}
	if (func_416())
	{
		unk_0x97C3FF45B25050A7(&(Global_1312575.f_12));
		func_414();
		unk_0x8DC57A8DB7696F93();
	}
}

void func_414()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x69967F83C1E636E2(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0x69967F83C1E636E2(Global_1312575.f_52);
			unk_0x69967F83C1E636E2(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0xE124F0A8E5E81191(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_57);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0xE124F0A8E5E81191(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_57);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_16));
			unk_0x80A171A436807CA0(Global_1312575.f_56);
			unk_0x34D84D73B5DF8E80(&(Global_1312575.f_48));
			unk_0xBAB00B98D1E61BEE(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_415()
{
	if (!func_416())
	{
		return 0;
	}
	unk_0x5A99EA84320AB387(&(Global_1312575.f_12));
	func_414();
	return unk_0x2B886121A03F928A();
}

int func_416()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

int func_417()
{
	if (!func_418(1))
	{
		return 0;
	}
	if (func_372())
	{
		return 0;
	}
	return 1;
}

int func_418(bool bParam0)
{
	if (func_221(unk_0xBE369BE1BC57A796(), 21))
	{
		return 0;
	}
	if (unk_0x51FDEF56E23A7C33())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xEE1438344034E8AA())
		{
			return 0;
		}
	}
	if (func_108(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_359())
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	if (unk_0xF7271A9481CAC8E3())
	{
		return 0;
	}
	if (func_34(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!func_355())
	{
		return 0;
	}
	if (func_221(unk_0xBE369BE1BC57A796(), 0) || func_221(unk_0xBE369BE1BC57A796(), 3))
	{
		return 0;
	}
	if ((func_221(unk_0xBE369BE1BC57A796(), 12) || func_221(unk_0xBE369BE1BC57A796(), 14)) || func_221(unk_0xBE369BE1BC57A796(), 13))
	{
		return 0;
	}
	if (func_437(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0))
	{
		if (!func_424())
		{
			return 0;
		}
	}
	if (func_423())
	{
		return 0;
	}
	if (Global_1751032)
	{
		return 0;
	}
	if (func_422(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (func_420(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 4))
	{
		return 0;
	}
	if (func_419(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

int func_419(int iParam0)
{
	if (Global_2421664[iParam0 /*358*/].f_264.f_4 != 0 || Global_2421664[iParam0 /*358*/].f_264.f_5)
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 14))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	if (Global_2583878.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0)
{
	if (!func_835(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1591201[iParam0 /*602*/].f_35;
}

bool func_423()
{
	return Global_91543.f_304 > 0;
}

int func_424()
{
	int iVar0;
	
	iVar0 = func_204(unk_0xBE369BE1BC57A796());
	if (((func_436(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15) || func_435(unk_0xBE369BE1BC57A796())) || func_434(unk_0xBE369BE1BC57A796())) || func_429(unk_0xBE369BE1BC57A796()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_427(unk_0xBE369BE1BC57A796()))
	{
		if (func_426(iVar0) || func_425(iVar0))
		{
			return 1;
		}
	}
	if (func_401(unk_0xBE369BE1BC57A796()))
	{
		if (func_425(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_425(int iParam0)
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

int func_426(int iParam0)
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

int func_427(int iParam0)
{
	if (func_428(Global_1591201[iParam0 /*602*/].f_258.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
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

int func_429(int iParam0)
{
	if (func_430(Global_1591201[iParam0 /*602*/].f_258.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_430(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_431(unk_0xBE369BE1BC57A796(), 0);
	}
	if (bParam1)
	{
		if (func_431(unk_0xBE369BE1BC57A796(), 0))
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

bool func_431(int iParam0, bool bParam1)
{
	if (Global_1591069 != func_75())
	{
		if (!func_433(Global_1591069))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xBE369BE1BC57A796() != Global_1591069)
			{
				if (unk_0x48B8265059381CD0(Global_2421664[Global_1591069 /*358*/].f_198, 24) || func_432(Global_1591069))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 24);
}

bool func_432(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 9);
}

int func_433(int iParam0)
{
	if (iParam0 != func_75())
	{
		return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_210, 2);
	}
	return 0;
}

int func_434(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (func_835(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_402(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_435(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (func_835(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_402(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)
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

int func_437(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1591201[iParam0 /*602*/].f_258.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
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
		if (func_435(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_434(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_438()
{
	return Global_1315233;
}

bool func_439()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

int func_440(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_459(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_69 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_70 = iParam7;
	if (iParam8 != -1)
	{
		unk_0xEB79FECD9022AAF0(&(Var0.f_67), iParam8);
	}
	return func_441(&Var0);
}

int func_441(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2433125.f_2505)
		{
			return 0;
		}
	}
	func_444(uParam0, uParam0->f_16);
	func_443(uParam0);
	if (func_442(uParam0->f_1))
	{
		if (Global_2433125.f_2199[0 /*76*/].f_2 == 0)
		{
			Global_2433125.f_2199[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2433125.f_2199[0 /*76*/].f_1 == 13 || Global_2433125.f_2199[0 /*76*/].f_1 == 53) || Global_2433125.f_2199[0 /*76*/].f_1 == 54) || Global_2433125.f_2199[0 /*76*/].f_1 == 58)
		{
			Global_2433125.f_2199[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2433125.f_2199[iVar0 + 1 /*76*/] = { Global_2433125.f_2199[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2433125.f_2199[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 == 0)
		{
			Global_2433125.f_2199[iVar0 /*76*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 1);
				Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_313(Global_2433125.f_2199[iVar0 /*76*/].f_1))
				{
					Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
					unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_442(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103)
	{
		return 1;
	}
	return 0;
}

void func_443(var uParam0)
{
	if (func_315(uParam0->f_1))
	{
		uParam0->f_70 = func_273();
	}
}

void func_444(var uParam0, int iParam1)
{
	if (func_315(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_75())
	{
		return;
	}
	if (func_313(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_445(iParam1, -2, 0, 0);
		}
	}
}

int func_445(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_80(iParam0))
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
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1633501.f_85058[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_80(unk_0xBE369BE1BC57A796()) || (func_458() && func_457())) && !unk_0x48B8265059381CD0(Global_2494199.f_4449, 31))
	{
		uVar1 = func_456();
		if (unk_0x23E9113C762466ED(uVar1))
		{
			if (unk_0x0764AC92F08BEC9E(uVar1))
			{
				if (unk_0xDE881A032F5BA110(uVar1) != -1)
				{
					if (func_835(unk_0xDE881A032F5BA110(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
						{
							if (Global_1633501.f_85058[iParam1] != -1)
							{
								return func_454(iParam1, iParam0, 0);
							}
							else
							{
								return func_452(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_452(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
			{
				if (Global_1633501.f_85058[iParam1] != -1)
				{
					return func_454(iParam1, iParam0, 0);
				}
				else
				{
					return func_446(0, -1, 0);
				}
			}
			else
			{
				return func_446(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
	{
		if (Global_1633501.f_85058[iParam1] != -1)
		{
			return func_454(iParam1, iParam0, 0);
		}
		else
		{
			return func_452(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
		}
	}
	return func_452(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
}

int func_446(bool bParam0, int iParam1, bool bParam2)
{
	return func_447(unk_0xBE369BE1BC57A796(), bParam0, iParam1, bParam2);
}

int func_447(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x7268A1112372AA44(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_79(iVar0, iParam2, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_451(1);
				}
				else
				{
					return func_451(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_4, 20))
			{
				return func_448(iVar0, iParam2, 1);
			}
			else
			{
				return func_448(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_451(1);
	}
	return func_451(0);
}

int func_448(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_450(iParam0, iParam1);
	if (func_449(Global_1633501.f_88646))
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

int func_449(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7845[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0, int iParam1)
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
			if (!func_79(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_451(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_452(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1591201[iVar2 /*602*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_253())
			{
				iVar3 = func_272(iParam0);
				if (!iVar3 == -1)
				{
					return func_270(iVar3);
				}
			}
			if ((func_118(iParam1, iParam0, iVar0, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)) || ((func_79(unk_0xB58DEBB81964A4E9(iParam1), unk_0xB58DEBB81964A4E9(iParam0), 0) && unk_0x48B8265059381CD0(Global_1633501.f_15, 23)) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)))
			{
				return func_451(1);
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_15, 26))
			{
				return func_453(1);
			}
			else
			{
				return func_447(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574288 || Global_1574279) || Global_1591201[iParam0 /*602*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574288 == 1 && Global_1574298 == 0))
			{
				return func_451(1);
			}
			else
			{
				return func_447(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574283 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_272(iParam0);
	if (!iVar4 == -1)
	{
		return func_270(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_453(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_454(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_253())
	{
		iVar1 = func_272(iParam1);
		if (!iVar1 == -1)
		{
			return func_270(iVar1);
		}
	}
	if (Global_1633501.f_85058[iParam0] != -1 && Global_1633501.f_85058[iParam0] <= 4)
	{
		if (Global_1633501.f_85058[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1633501.f_85058[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1633501.f_85058[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1633501.f_85058[iParam0] == 4)
		{
			if (unk_0x48B8265059381CD0(Global_1633501.f_15, 29))
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
			iVar0 = Global_1633501.f_85058[iParam0];
		}
	}
	else
	{
		iVar0 = func_447(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_21, 13))
	{
		iVar0 = func_455(iParam0);
	}
	return iVar0;
}

int func_455(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1633501.f_107616;
			break;
		
		case 1:
			iVar0 = Global_1633501.f_107617;
			break;
		
		case 2:
			iVar0 = Global_1633501.f_107618;
			break;
		
		case 3:
			iVar0 = Global_1633501.f_107619;
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

var func_456()
{
	return Global_2359301.f_2;
}

bool func_457()
{
	return unk_0x48B8265059381CD0(Global_2359301, 4);
}

bool func_458()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

void func_459(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_75();
	uParam1->f_17 = func_75();
	uParam1->f_18 = func_75();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_460()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

bool func_461(bool bParam0)
{
	return func_268(unk_0xBE369BE1BC57A796(), bParam0);
}

int func_462(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_459(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_441(&Var0);
}

char* func_463(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		uVar0 = func_468(&(Global_1619421[iParam0 /*390*/].f_11.f_97));
		return uVar0;
	}
	if (Global_1619421[iParam0 /*390*/].f_11.f_113 != Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_113)
	{
		uVar0 = func_466(iParam0, 0);
		return uVar0;
	}
	if (((func_180(iParam0, 28) || func_180(unk_0xBE369BE1BC57A796(), 28)) || func_465(iParam0)) && !func_464(iParam0))
	{
		return func_466(iParam0, 0);
	}
	iVar1 = func_76(iParam0);
	if (iVar1 != func_75())
	{
		if (iVar1 != unk_0xBE369BE1BC57A796())
		{
			if (!unk_0x8EA3D5407E9F4AF0() && !unk_0x65FCCBD8772098C3(0, -1, 1))
			{
				return func_466(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_75())
	{
		uVar0 = func_468(&(Global_1619421[iVar1 /*390*/].f_11.f_97));
		if (unk_0x9C88EB7B70229335(uVar0))
		{
			return func_466(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_464(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_77(iParam0) };
	if (unk_0x8EA3D5407E9F4AF0() && unk_0x7BB94A563F5F14FD(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_77(iParam0) };
	if (unk_0x7C2F31E78C33DE0F() || unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5DC8C64FE18EADF7(0))
		{
			return 0;
		}
	}
	else if (unk_0x8EA3D5407E9F4AF0())
	{
		if (unk_0x7BB94A563F5F14FD(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_466(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_257(iParam0, 1))
		{
			return func_467();
		}
	}
	return unk_0xC7E52B74A3B4973C("GB_REST_ACC");
}

var func_467()
{
	return unk_0xC7E52B74A3B4973C("GB_REST_ACCM");
}

var func_468(var uParam0)
{
	return uParam0;
}

void func_469(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	func_602(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16393);
		}
		else if (iParam0 == 178)
		{
			if (func_739())
			{
				iVar1 = (iVar1 + Global_262145.f_16900);
			}
			else if (uParam2->f_13)
			{
				iVar1 = (iVar1 + Global_262145.f_16901);
			}
		}
		else if (iParam0 == 188)
		{
			if (func_739())
			{
				iVar1 = (iVar1 + Global_262145.f_16984);
			}
			else if (uParam2->f_13)
			{
				iVar1 = (iVar1 + Global_262145.f_16985);
			}
		}
		else
		{
			iVar1 = (iVar1 + func_601(iParam0));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_600(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16392);
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
	if (((func_204(unk_0xBE369BE1BC57A796()) == 167 || func_204(unk_0xBE369BE1BC57A796()) == 168) || func_204(unk_0xBE369BE1BC57A796()) == 178) || func_204(unk_0xBE369BE1BC57A796()) == 188)
	{
		if (bParam1)
		{
			if (func_599(unk_0xBE369BE1BC57A796()) > 0)
			{
				func_598();
			}
			else
			{
				func_597();
			}
		}
		else
		{
			func_596();
		}
	}
	func_567(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_556(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_330();
	if (iVar6 != func_75() && iParam0 != 148)
	{
		if (func_268(unk_0xBE369BE1BC57A796(), 0))
		{
			if (!func_304(unk_0xBE369BE1BC57A796(), iVar6, 1))
			{
				func_542(&iVar0, 1);
			}
		}
	}
	func_539(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1763183.f_10 = iVar1;
		func_538();
		func_496(0, unk_0x17B5CC8A8615737D(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1763183.f_9 = iVar0;
		iVar11 = func_460();
		if (iVar11 != func_75())
		{
			func_495(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_461(1);
		if (iParam0 == 168)
		{
			if (!func_494())
			{
				unk_0xC8E240057F2F74B7(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_493())
			{
				if (!func_494())
				{
					unk_0xC8E240057F2F74B7(iVar0, uVar5);
				}
			}
			else if (func_494())
			{
				func_484(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2590252[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2590252[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2590252[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0xC8E240057F2F74B7(iVar0, uVar5);
			}
		}
		else if (func_494())
		{
			func_484(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2590252[iVar14 /*76*/].f_8.f_54 = uVar9;
			Global_2590252[iVar14 /*76*/].f_8.f_55 = uVar10;
			Global_2590252[iVar14 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xC3EB5198F99AB34C(uVar9, uVar10, iVar0, bVar12);
		}
		func_483(iParam0, iVar0);
		if (func_482(iParam0))
		{
			if (func_481(iParam0) > -1)
			{
				func_480(func_481(iParam0), iVar0);
			}
		}
		Global_2454708 = iVar0;
		func_479(&Global_2452983, 0, 0);
	}
	if (func_224(unk_0xBE369BE1BC57A796()) || func_274(unk_0xBE369BE1BC57A796()))
	{
		func_470(iParam0);
	}
	if (func_391(iParam0))
	{
		Global_1763201.f_13 = iVar0;
		Global_1763201.f_14 = iVar1;
	}
	if (func_395(iParam0))
	{
		Global_1763254.f_13 = iVar0;
		Global_1763254.f_14 = iVar1;
	}
}

void func_470(int iParam0)
{
	if (func_478(unk_0xBE369BE1BC57A796()) && func_493())
	{
		if (func_426(iParam0))
		{
			func_473(6016, -1);
		}
		else if (func_472(iParam0))
		{
			func_473(6018, -1);
		}
		else if (func_302(iParam0, 1))
		{
			func_473(6019, -1);
		}
		else if (func_471(iParam0))
		{
			func_473(6020, -1);
		}
	}
}

int func_471(int iParam0)
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

int func_472(int iParam0)
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

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_477(iParam0, func_377(iParam1), 0);
	iVar0++;
	if (!func_476(iParam0))
	{
		func_475(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_474(iParam0, iVar0, iParam1, 1);
	}
}

void func_474(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_377(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_377(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_377(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_377(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_377(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_377(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_377(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_377(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_377(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_377(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_377(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_377(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_377(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_377(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_377(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_377(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_377(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_377(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_377(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_377(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_377(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_377(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_377(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_377(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_377(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_377(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_377(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_377(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_377(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_377(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_377(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_377(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_377(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_377(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_476(int iParam0)
{
	if (Global_1363152)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

int func_477(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_377(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_478(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_97, 14);
}

void func_479(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xCB150A8B81012128();
		}
		else
		{
			*uParam0 = unk_0x8F8F2E80A7DA4D64();
		}
	}
	else
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
	}
	uParam0->f_1 = 1;
}

void func_480(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2494199.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5491)
		{
			iParam1 = Global_262145.f_5491;
		}
		Global_2494199.f_270 = iParam1;
		Global_2494199.f_271 = 0;
	}
}

int func_481(int iParam0)
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

int func_482(int iParam0)
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

void func_483(int iParam0, int iParam1)
{
	if (func_478(unk_0xBE369BE1BC57A796()) && func_493())
	{
		if (func_426(iParam0) && iParam1 > 0)
		{
			func_475(6017, (func_477(6017, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_484(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_494())
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
			if (iParam1 > 0)
			{
				func_485(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_485(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_485(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_494())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xAE2B681D784C7E64(func_142()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590252[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x1EB4A371BFB0E524(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x0F0045367541BC90(iVar3))
		{
			*uParam0 = func_492(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590252[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590752 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590761 = 1;
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_491(1, iParam4);
			Global_2590761 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_486(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_486(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_487(iParam0);
	}
}

void func_487(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_494())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_490(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9B9AF9D22D9F6313();
			}
		}
		else if (!bVar0)
		{
			unk_0x2A618463FE332188(Global_2590252[iParam0 /*76*/]);
		}
		func_488(&(Global_2590252[iParam0 /*76*/]));
	}
}

void func_488(var uParam0)
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
	func_489(&(uParam0->f_8.f_3));
	func_489(&(uParam0->f_8.f_16));
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
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_489(var uParam0)
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

int func_490(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_491(int iParam0, var uParam1)
{
	Global_2454840 = uParam1;
	Global_2454839 = iParam0;
}

int func_492(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590252[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_494())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = uParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = uParam2;
			Global_2590252[iVar0 /*76*/].f_7 = uParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = iParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = uParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (bParam6)
			{
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_493()
{
	return func_329(unk_0xBE369BE1BC57A796());
}

int func_494()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

void func_495(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1619421[iParam0 /*390*/].f_11.f_7[0];
	*uParam2 = Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

int func_496(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_497(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_497(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_507(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0x80E9CA64E9C8E070(iParam1))
			{
				uVar1 = unk_0xB80CAAF3D65FBC1F(iParam1);
				func_503(unk_0x425DAA25CBB7EDE2(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_498(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_498(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_501(iParam0, 1) };
	if (iParam0 == func_500(unk_0x17B5CC8A8615737D()))
	{
		func_499(1);
	}
	func_503(Var0, iParam1, 0, sParam2, iParam3);
}

void func_499(int iParam0)
{
	Global_2433125.f_1382 = iParam0;
}

int func_500(var uParam0)
{
	return uParam0;
}

Vector3 func_501(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x354EBDB72A54F91B())
	{
		Var3 = { unk_0xBEBA2DED4C4C66BD(2) };
	}
	if (iParam0 == func_502(unk_0x17B5CC8A8615737D()) && unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
	{
		Var0 = { unk_0x854ED33E6D715648(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		fVar6 = unk_0x638527C9799F2AE4(iParam0);
		if (unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x3CE07141081BBC2B(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_502(var uParam0)
{
	return uParam0;
}

void func_503(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433125.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433125.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433125.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433125.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433125.f_781[iVar1 /*30*/].f_4 = func_506(Global_2433125.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433125.f_781[iVar1 /*30*/].f_7 = unk_0xCB150A8B81012128();
			Global_2433125.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433125.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433125.f_781[iVar1 /*30*/].f_9 = func_505();
			Global_2433125.f_781[iVar1 /*30*/].f_10 = func_504();
			StringCopy(&(Global_2433125.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433125.f_781[iVar1 /*30*/].f_26 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), iParam6);
		}
	}
}

int func_504()
{
	if (Global_2433125.f_1382)
	{
		Global_2433125.f_1382 = 0;
		return 1;
	}
	Global_2433125.f_1382 = 0;
	return 0;
}

var func_505()
{
	var uVar0;
	
	uVar0 = Global_2433125.f_1384;
	Global_2433125.f_1384 = 1;
	return uVar0;
}

float func_506(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x3DC4639D5F23DEA2(unk_0x667FF09580838E25(), Param0, 1);
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

var func_507(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_508(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_508(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_537(unk_0xBE369BE1BC57A796()) || func_536(unk_0xBE369BE1BC57A796()))
	{
		if (Global_262145.f_8270 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8270;
		}
	}
	else if (Global_262145.f_5542 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5542;
	}
	if (func_535(uParam2))
	{
	}
	if (func_534())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_532(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_531(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_529(0, &iVar1);
					break;
				
				case 3:
					func_529(1, &iVar1);
					break;
				
				case 1:
					func_527(&iVar1);
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
			func_526(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_518((func_525(unk_0xBE369BE1BC57A796()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x4A006931F5B47F5F(iVar1, iParam8, iParam9);
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_2 != -1)
				{
					func_526(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_513(iVar1);
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
				func_509((func_511(unk_0xBE369BE1BC57A796()) + iVar1));
			}
			else
			{
				func_509((func_511(unk_0xBE369BE1BC57A796()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_509(int iParam0)
{
	if (func_534())
	{
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_5 = iParam0;
		func_510(joaat("mpply_globalxp"), iParam0);
	}
}

void func_510(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
}

int func_511(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_835(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return func_512(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_5;
			}
		}
		else
		{
			return func_512(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_513(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_77(unk_0xBE369BE1BC57A796()) };
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(&Var0))
		{
			iVar13 = func_516(func_517(&Var0));
			if (iVar13 == 0)
			{
				func_515(&Global_1363158, iParam0);
				func_514(joaat("mpply_crew_local_xp_0"), Global_1363158);
			}
			else if (iVar13 == 1)
			{
				func_515(&Global_1363159, iParam0);
				func_514(joaat("mpply_crew_local_xp_1"), Global_1363159);
			}
			else if (iVar13 == 2)
			{
				func_515(&Global_1363160, iParam0);
				func_514(joaat("mpply_crew_local_xp_2"), Global_1363160);
			}
			else if (iVar13 == 3)
			{
				func_515(&Global_1363161, iParam0);
				func_514(joaat("mpply_crew_local_xp_3"), Global_1363161);
			}
			else if (iVar13 == 4)
			{
				func_515(&Global_1363162, iParam0);
				func_514(joaat("mpply_crew_local_xp_4"), Global_1363162);
			}
		}
	}
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1363153 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1363156 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1363157 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1363158 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1363159 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1363160 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1363161 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1363162 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1363163 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1363164 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1363165 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1363166 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1363167 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1363168 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1363169 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_516(int iParam0)
{
	if (iParam0 == Global_1363153)
	{
		return 0;
	}
	else if (iParam0 == Global_1363154)
	{
		return 1;
	}
	else if (iParam0 == Global_1363155)
	{
		return 2;
	}
	else if (iParam0 == Global_1363156)
	{
		return 3;
	}
	else if (iParam0 == Global_1363157)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_517(var uParam0)
{
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(uParam0))
		{
			return Global_2452452;
		}
	}
	return Global_2452452;
}

void func_518(int iParam0, int iParam1, int iParam2)
{
	if (func_534())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8240 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1363273[func_377(-1)])
				{
					unk_0x4A006931F5B47F5F(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1363273[func_377(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_524(unk_0xBE369BE1BC57A796()))
		{
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_1 = iParam0;
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_6 = func_522(iParam0, 1);
		}
		func_474(634, iParam0, -1, 1);
		func_475(635, func_522(iParam0, 1), -1, 1, 0);
		Global_1363273[func_377(-1)] = iParam0;
		func_519(7, 0);
	}
}

void func_519(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_521(iParam0, iParam1))
	{
		iVar0 = func_520();
		Global_2452429[iVar0] = iParam0;
	}
}

int func_520()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452429[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_521(int iParam0, var uParam1)
{
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_522(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_523(iParam0, 0);
}

int func_523(int iParam0, int iParam1)
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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

int func_524(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

int func_525(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_377(-1)];
			}
			else if (func_524(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_377(-1)];
	}
	return 0;
}

void func_526(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_477(iParam0, func_377(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_476(iParam0))
	{
		func_475(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_474(iParam0, iVar0, iParam2, 1);
	}
}

void func_527(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		iVar4 = unk_0x62C65E3042052191(iVar0);
		if (unk_0x5877B93374C85567(iVar4))
		{
			iVar5 = unk_0xD878F413B7BB4895(iVar4);
			if (unk_0xB58DEBB81964A4E9(iVar5) != -1)
			{
				if (unk_0xB58DEBB81964A4E9(iVar5) == iVar1 || func_79(unk_0xB58DEBB81964A4E9(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xBE369BE1BC57A796())
					{
						if (func_78(unk_0xBE369BE1BC57A796(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_528(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_528(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_528(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_529(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xCF8627766CD5D4CE())
		{
			iVar3 = iVar0;
			if (unk_0x5877B93374C85567(iVar3))
			{
				iVar4 = unk_0xD878F413B7BB4895(iVar3);
				if (func_835(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xBE369BE1BC57A796())
					{
						iVar1++;
						if (func_78(unk_0xBE369BE1BC57A796(), iVar4))
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
			if (func_835(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xBE369BE1BC57A796())
				{
					if (func_530(unk_0xBE369BE1BC57A796(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_78(unk_0xBE369BE1BC57A796(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_528(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_528(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_530(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_70(iParam0), func_70(iParam1));
	return 0f;
}

int func_531(int iParam0)
{
	int iVar0;
	
	if (unk_0xF38E4347579BAB61() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_528(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_532(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x049F77DED8AE0AF4(iParam0) > func_525(unk_0xBE369BE1BC57A796()))
		{
			iParam0 = -func_525(unk_0xBE369BE1BC57A796());
		}
	}
	if (func_533(8000, 0, 0) > 0)
	{
		if (func_533(8000, 0, 0) < (iParam0 + func_525(unk_0xBE369BE1BC57A796())))
		{
			iParam0 = (func_533(8000, 0, 0) - func_525(unk_0xBE369BE1BC57A796()));
		}
	}
	return iParam0;
}

int func_533(int iParam0, bool bParam1, int iParam2)
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
	return Global_280048[iParam0];
}

int func_534()
{
	return 1;
}

int func_535(var uParam0)
{
	if (unk_0xD3115E7F7876D6E6(uParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uParam0, "") || unk_0x6A7B0D91FD88D9EE(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_536(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_537(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

void func_538()
{
	Global_2454050 = 1;
}

void func_539(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_185(7))
	{
		return;
	}
	iVar0 = func_541(iParam0);
	iVar1 = func_540(iParam0);
	iVar2 = unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(Global_2494199.f_4710.f_78, unk_0xCB150A8B81012128()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16595)
		{
			iVar2 = Global_262145.f_16595;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16596)
		{
			iVar2 = Global_262145.f_16596;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16594)
		{
			iVar2 = Global_262145.f_16594;
		}
	}
	else if (func_426(iParam0))
	{
		if (iVar2 > Global_262145.f_16597)
		{
			iVar2 = Global_262145.f_16597;
		}
	}
	else if (func_302(iParam0, 0) || func_472(iParam0))
	{
		if (iVar2 > Global_262145.f_16598)
		{
			iVar2 = Global_262145.f_16598;
		}
	}
	else if (iVar2 > Global_262145.f_11015)
	{
		iVar2 = Global_262145.f_11015;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11106;
		
		case 152:
			return Global_262145.f_11141;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11129;
		
		case 157:
			return Global_262145.f_11096;
		
		case 159:
			return Global_262145.f_11079;
		
		case 164:
			return Global_262145.f_11119;
		
		case 160:
			return Global_262145.f_11169;
		
		case 162:
			return Global_262145.f_11189;
		
		case 163:
			return Global_262145.f_11154;
		
		case 154:
			return Global_262145.f_11224;
		
		case 155:
			return Global_262145.f_11214;
		
		case 153:
			return Global_262145.f_11178;
		
		case 170:
			return Global_262145.f_13115;
		
		case 171:
			return Global_262145.f_13174;
		
		case 172:
			return Global_262145.f_13192;
		
		case 173:
			return Global_262145.f_13133;
		
		case 166:
			return Global_262145.f_13148;
		
		case 167:
			return Global_262145.f_13239;
		
		case 169:
			return Global_262145.f_13211;
		
		case 168:
			return Global_262145.f_13204;
		
		case 179:
			return Global_262145.f_16477;
		
		case 180:
			return Global_262145.f_16256;
		
		case 182:
			return Global_262145.f_16256;
		
		case 183:
			return Global_262145.f_16256;
		
		case 185:
			return Global_262145.f_16256;
		
		case 186:
			return Global_262145.f_16256;
		
		case 189:
			return Global_262145.f_16477;
		
		case 190:
			return Global_262145.f_16132;
		
		case 191:
			return Global_262145.f_16223;
		
		case 192:
			return Global_262145.f_16017;
		
		case 193:
			return Global_262145.f_16477;
		
		case 194:
			return Global_262145.f_16477;
		
		case 195:
			return Global_262145.f_16256;
		
		case 197:
			return Global_262145.f_16256;
		
		case 198:
			return Global_262145.f_16256;
		
		case 199:
			return Global_262145.f_16477;
		
		case 200:
			return Global_262145.f_16477;
		
		case 201:
			return Global_262145.f_16477;
		
		case 205:
			return Global_262145.f_16477;
		
		case 207:
			return Global_262145.f_16256;
		
		case 208:
			return Global_262145.f_16256;
		
		case 209:
			return Global_262145.f_16256;
		
		case 210:
			return Global_262145.f_16477;
		
		case 211:
			return Global_262145.f_16477;
		
		case 214:
			return Global_262145.f_17273;
		
		case 215:
			return Global_262145.f_17275;
		
		case 216:
			return Global_262145.f_17277;
		
		case 217:
			return Global_262145.f_17279;
		
		case 218:
			return Global_262145.f_17281;
		
		case 219:
			return Global_262145.f_17283;
		
		case 220:
			return Global_262145.f_17285;
		
		case 221:
			return Global_262145.f_17287;
		
		default:
	}
	return 0;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11105;
		
		case 152:
			return Global_262145.f_11140;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11128;
		
		case 157:
			return Global_262145.f_11095;
		
		case 159:
			return Global_262145.f_11078;
		
		case 164:
			return Global_262145.f_11118;
		
		case 160:
			return Global_262145.f_11168;
		
		case 162:
			return Global_262145.f_11188;
		
		case 163:
			return Global_262145.f_11153;
		
		case 154:
			return Global_262145.f_11223;
		
		case 155:
			return Global_262145.f_11213;
		
		case 153:
			return Global_262145.f_11177;
		
		case 170:
			return Global_262145.f_13114;
		
		case 171:
			return Global_262145.f_13173;
		
		case 172:
			return Global_262145.f_13191;
		
		case 173:
			return Global_262145.f_13132;
		
		case 166:
			return Global_262145.f_13147;
		
		case 179:
			return Global_262145.f_16476;
		
		case 180:
			return Global_262145.f_16255;
		
		case 182:
			return Global_262145.f_16255;
		
		case 183:
			return Global_262145.f_16255;
		
		case 185:
			return Global_262145.f_16255;
		
		case 186:
			return Global_262145.f_16255;
		
		case 189:
			return Global_262145.f_16476;
		
		case 193:
			return Global_262145.f_16476;
		
		case 194:
			return Global_262145.f_16476;
		
		case 195:
			return Global_262145.f_16255;
		
		case 197:
			return Global_262145.f_16255;
		
		case 198:
			return Global_262145.f_16255;
		
		case 199:
			return Global_262145.f_16476;
		
		case 200:
			return Global_262145.f_16476;
		
		case 201:
			return Global_262145.f_16476;
		
		case 205:
			return Global_262145.f_16476;
		
		case 207:
			return Global_262145.f_16255;
		
		case 208:
			return Global_262145.f_16255;
		
		case 209:
			return Global_262145.f_16255;
		
		case 210:
			return Global_262145.f_16476;
		
		case 211:
			return Global_262145.f_16476;
		
		case 190:
			if (!func_739())
			{
				return Global_262145.f_16131;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_739())
			{
				return Global_262145.f_16222;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_739())
			{
				return Global_262145.f_16016;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17272;
		
		case 215:
			return Global_262145.f_17274;
		
		case 216:
			return Global_262145.f_17276;
		
		case 217:
			return Global_262145.f_17278;
		
		case 218:
			return Global_262145.f_17280;
		
		case 219:
			return Global_262145.f_17282;
		
		case 220:
			return Global_262145.f_17284;
		
		case 221:
			return Global_262145.f_17286;
	}
	return 0;
}

void func_542(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_739())
		{
			if (func_461(0))
			{
				if (!func_327(0))
				{
					if (unk_0x7268A1112372AA44(func_460()))
					{
						if (func_555() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_555());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_553(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_546("GB_BCUT_TICK1", func_460(), iVar0, 0, 0, 1, 1);
						}
						func_545(20);
						func_543(func_460(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_543(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_835(iParam0, 0, 1))
	{
		Var0.f_0 = 490;
		Var0.f_1 = unk_0xBE369BE1BC57A796();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x504D0D40319365B7(1, &Var0, 5, func_544(iParam0));
	}
}

var func_544(int iParam0)
{
	var uVar0;
	
	unk_0xEB79FECD9022AAF0(&uVar0, iParam0);
	return uVar0;
}

void func_545(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

int func_546(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var1))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		unk_0x80A171A436807CA0(func_445(iParam1, -2, 1, 0));
		unk_0xBAB00B98D1E61BEE(func_551(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x80A171A436807CA0(iParam3);
		}
		unk_0x69967F83C1E636E2(iParam2);
		iVar0 = unk_0x23048DD0C6E21613(0, 1);
		func_547(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_547(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_550() || !unk_0xF7271A9481CAC8E3()) || !func_140(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_548(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_548(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_549(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5)
	{
		Global_1759864 = 5;
		return Global_1759864;
	}
	return (Global_1759864 - 1);
}

void func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_550()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

var func_551(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_552(&cVar0);
}

var func_552(char[4] cParam0)
{
	return cParam0;
}

void func_553(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_554(1);
	}
	else
	{
		iVar1 = func_554(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_554(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11010;
}

int func_555()
{
	return Global_262145.f_11009;
}

void func_556(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_493())
			{
				Var0 = { func_566() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_565(unk_0xBE369BE1BC57A796(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_565(unk_0xBE369BE1BC57A796(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_559(unk_0xBE369BE1BC57A796(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16706);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16705);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_558(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16696);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16695));
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
					func_545(86);
				}
				Global_2494199.f_4710.f_190 = *iParam2;
			}
			else if (func_327(0))
			{
				Var15 = { func_557(func_460()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_565(func_460(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_565(func_460(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_559(func_460(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16706));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16705));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16745;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16746;
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

struct<2> func_557(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_184;
}

int func_558(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(iVar0)))
		{
			iVar2 = unk_0x0C36F33B3F746611(iVar0);
			if (!func_140(iVar2, 0) && !func_304(iVar2, unk_0xBE369BE1BC57A796(), 1))
			{
				iVar1++;
			}
			else if (func_140(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_559(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_564(iParam1);
	if (func_563(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15076;
				if (func_560(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15081);
				}
				if (func_560(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15086);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15075;
				if (func_560(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15080);
				}
				if (func_560(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15085);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15074;
				if (func_560(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15079);
				}
				if (func_560(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15084);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15072;
				if (func_560(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15077);
				}
				if (func_560(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15082);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15073;
				if (func_560(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15078);
				}
				if (func_560(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15083);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_560(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_562(iParam0, iParam1))
	{
		iVar0 = func_561(iParam0, iParam1);
		return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_561(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_563(iParam1) && iParam0 != func_75())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_562(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_563(iParam1) && iParam0 != func_75())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_563(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_564(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_563(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_566()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_184;
}

void func_567(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_223(unk_0xBE369BE1BC57A796()))
		{
			if (bParam1)
			{
				func_595();
			}
			func_594();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_223(unk_0xBE369BE1BC57A796()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_586(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_585(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_558(&uVar2);
					iVar4 = Global_262145.f_14261;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13470));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_545(44);
					}
				}
				func_579(*iParam3);
				func_578();
				Global_2494199.f_4710.f_190 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xCF8627766CD5D4CE())
				{
					iVar8 = iVar7;
					if (unk_0x5877B93374C85567(iVar8))
					{
						iVar9 = unk_0xD878F413B7BB4895(iVar8);
						if (func_577(iVar9))
						{
							func_569(iVar9, 1, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_223(unk_0xBE369BE1BC57A796()))
		{
			func_568();
		}
	}
}

void func_568()
{
	int iVar0;
	
	iVar0 = Global_2524389[func_142()];
	iVar0++;
	func_474(3649, iVar0, -1, 1);
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_571(iParam0);
	func_570(iParam0, uVar0, iParam1, iParam2);
}

void func_570(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	
	Var0.f_0 = 487;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	if (iParam0 != func_75())
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			unk_0x504D0D40319365B7(1, &Var0, 5, func_544(iParam0));
		}
	}
}

int func_571(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_576();
	iVar0 = func_574(iParam0, iVar0);
	iVar1 = Global_1619421[func_460() /*390*/].f_11.f_288;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13075));
	if (iVar0 < func_573())
	{
		iVar0 = func_573();
	}
	if (iVar0 > func_572())
	{
		iVar0 = func_572();
	}
	return iVar0;
}

int func_572()
{
	return Global_262145.f_13076;
}

int func_573()
{
	return Global_262145.f_14251;
}

int func_574(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_599(iParam0) * func_575());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_575()
{
	return Global_262145.f_14250;
}

var func_576()
{
	return Global_262145.f_11001;
}

int func_577(int iParam0)
{
	if (unk_0x7268A1112372AA44(iParam0))
	{
		if (iParam0 != unk_0xBE369BE1BC57A796())
		{
			if (func_304(iParam0, unk_0xBE369BE1BC57A796(), 0))
			{
				if (!func_180(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_578()
{
	int iVar0;
	
	iVar0 = Global_2524395[func_142()];
	iVar0++;
	func_474(3648, iVar0, -1, 1);
}

void func_579(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2524398[func_142()];
	iVar0 = (iVar0 + iParam0);
	func_474(3650, iVar0, -1, 1);
	if (func_582(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_581(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_580(7666, iVar2, -1, 1);
	}
}

var func_580(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_142();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x94F17AB80A52E8BB((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x94F17AB80A52E8BB((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x94F17AB80A52E8BB((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x94F17AB80A52E8BB((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x94F17AB80A52E8BB((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x94F17AB80A52E8BB((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x94F17AB80A52E8BB((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x94F17AB80A52E8BB((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x94F17AB80A52E8BB((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x94F17AB80A52E8BB((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x94F17AB80A52E8BB((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x94F17AB80A52E8BB((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x94F17AB80A52E8BB((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x94F17AB80A52E8BB((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x94F17AB80A52E8BB((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x3141DFACC370CE7D(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14394;
			break;
		
		case 2:
			return Global_262145.f_14395;
			break;
		
		case 3:
			return Global_262145.f_14396;
			break;
		
		case 4:
			return Global_262145.f_14397;
			break;
		
		case 5:
			return Global_262145.f_14398;
			break;
		
		case 6:
			return Global_262145.f_14399;
			break;
		
		case 7:
			return Global_262145.f_14400;
			break;
		
		case 8:
			return Global_262145.f_14401;
			break;
		
		case 9:
			return Global_262145.f_14402;
			break;
		
		case 10:
			return Global_262145.f_14403;
			break;
		
		case 11:
			return Global_262145.f_14404;
			break;
		
		case 12:
			return Global_262145.f_14405;
			break;
		
		case 13:
			return Global_262145.f_14406;
			break;
		
		case 14:
			return Global_262145.f_14407;
			break;
		
		case 15:
			return Global_262145.f_14408;
			break;
		
		case 16:
			return Global_262145.f_14409;
			break;
		
		case 17:
			return Global_262145.f_14410;
			break;
		
		case 18:
			return Global_262145.f_14411;
			break;
		
		case 19:
			return Global_262145.f_14412;
			break;
		
		case 20:
			return Global_262145.f_14413;
			break;
		
		case 21:
			return Global_262145.f_14414;
			break;
		
		case 22:
			return Global_262145.f_14415;
			break;
		
		case 23:
			return Global_262145.f_14416;
			break;
		
		case 24:
			return Global_262145.f_14417;
			break;
	}
	return 0;
}

int func_582(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar0 = 0;
	iVar1 = func_584(iParam0, iParam1);
	uVar2 = func_583(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xBF0855EEDDBBCBB7(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_583(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x94F17AB80A52E8BB((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x94F17AB80A52E8BB((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x94F17AB80A52E8BB((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x94F17AB80A52E8BB((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x94F17AB80A52E8BB((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x94F17AB80A52E8BB((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x94F17AB80A52E8BB((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x94F17AB80A52E8BB((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x94F17AB80A52E8BB((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x94F17AB80A52E8BB((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x94F17AB80A52E8BB((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x94F17AB80A52E8BB((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x94F17AB80A52E8BB((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x94F17AB80A52E8BB((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x94F17AB80A52E8BB((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_584(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x92F4E7F362754001((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x55245B8F531886BD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x413C680CFEF1BF9E((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_585(int iParam0)
{
	if (iParam0 >= Global_262145.f_13448)
	{
		return Global_262145.f_13469;
	}
	else if (iParam0 >= Global_262145.f_13447)
	{
		return Global_262145.f_13468;
	}
	else if (iParam0 >= Global_262145.f_13446)
	{
		return Global_262145.f_13467;
	}
	else if (iParam0 >= Global_262145.f_13445)
	{
		return Global_262145.f_13466;
	}
	else if (iParam0 >= Global_262145.f_13444)
	{
		return Global_262145.f_13465;
	}
	else if (iParam0 >= Global_262145.f_13443)
	{
		return Global_262145.f_13464;
	}
	else if (iParam0 >= Global_262145.f_13442)
	{
		return Global_262145.f_13463;
	}
	else if (iParam0 >= Global_262145.f_13441)
	{
		return Global_262145.f_13462;
	}
	else if (iParam0 >= Global_262145.f_13440)
	{
		return Global_262145.f_13461;
	}
	else if (iParam0 >= Global_262145.f_13439)
	{
		return Global_262145.f_13460;
	}
	else if (iParam0 >= Global_262145.f_13438)
	{
		return Global_262145.f_13459;
	}
	else if (iParam0 >= Global_262145.f_13437)
	{
		return Global_262145.f_13458;
	}
	else if (iParam0 >= Global_262145.f_13436)
	{
		return Global_262145.f_13457;
	}
	else if (iParam0 >= Global_262145.f_13435)
	{
		return Global_262145.f_13456;
	}
	else if (iParam0 >= Global_262145.f_13434)
	{
		return Global_262145.f_13455;
	}
	else if (iParam0 >= Global_262145.f_13433)
	{
		return Global_262145.f_13454;
	}
	else if (iParam0 >= Global_262145.f_13432)
	{
		return Global_262145.f_13453;
	}
	else if (iParam0 >= Global_262145.f_13431)
	{
		return Global_262145.f_13452;
	}
	else if (iParam0 >= Global_262145.f_13430)
	{
		return Global_262145.f_13451;
	}
	else if (iParam0 >= Global_262145.f_13429)
	{
		return Global_262145.f_13450;
	}
	return Global_262145.f_13449;
}

int func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_593(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_592(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_591(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_587(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_587(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_591(unk_0x0E29C61F26D96FDB(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_587(int iParam0)
{
	int iVar0;
	
	if (func_590(iParam0))
	{
		iVar0 = func_588(func_589(iParam0));
		return func_477(iVar0, -1, 0);
	}
	return 0;
}

int func_588(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3628;
	}
	else if (iParam0 == 1)
	{
		return 3629;
	}
	else if (iParam0 == 2)
	{
		return 3630;
	}
	else if (iParam0 == 3)
	{
		return 3631;
	}
	else if (iParam0 == 4)
	{
		return 3632;
	}
	return 3628;
}

int func_589(int iParam0)
{
	int iVar0;
	
	if (func_590(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_590(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_591(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13648;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13646;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13650;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13644;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13642;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13652;
	}
	return 0;
}

int func_592(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_590(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1764419[iVar0] == iParam1 && Global_1764426[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_593(int iParam0)
{
	int iVar0;
	
	if (func_590(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_594()
{
	int iVar0;
	
	iVar0 = Global_2524386[func_142()];
	iVar0++;
	Global_2524386[func_142()] = iVar0;
	func_474(3647, iVar0, -1, 1);
}

void func_595()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2524383[func_142()];
	iVar1 = Global_2524392[func_142()];
	iVar0++;
	iVar1++;
	Global_2524383[func_142()] = iVar0;
	Global_2524392[func_142()] = iVar1;
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_102 = iVar1;
	func_474(3645, iVar0, -1, 1);
	func_474(3646, iVar1, -1, 1);
}

void func_596()
{
	if (func_739())
	{
		Global_2443905.f_3065.f_134 = 0;
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_288 = Global_2443905.f_3065.f_134;
	}
}

void func_597()
{
	if (func_739())
	{
		if (Global_2443905.f_3065.f_134 < 10)
		{
			Global_2443905.f_3065.f_134++;
			Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_288 = Global_2443905.f_3065.f_134;
		}
	}
}

void func_598()
{
	if (func_739())
	{
		if (Global_2443905.f_3065.f_134 > 0)
		{
			Global_2443905.f_3065.f_134 = (Global_2443905.f_3065.f_134 - 1);
			Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_288 = Global_2443905.f_3065.f_134;
		}
	}
}

int func_599(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_27;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11126) * Global_262145.f_11131));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11076) * Global_262145.f_11081));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11103) * Global_262145.f_11107));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11120));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11138) * Global_262145.f_11143));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11300) * Global_262145.f_11301));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11306) * Global_262145.f_11307));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11304) * Global_262145.f_11305));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11298) * Global_262145.f_11299));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11302) * Global_262145.f_11303));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11296) * Global_262145.f_11297));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13171;
		
		case 172:
			return Global_262145.f_13187;
		
		case 173:
			return Global_262145.f_13130;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16400;
		
		case 180:
			return Global_262145.f_16276;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16284;
		
		case 185:
			return Global_262145.f_16293;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16488;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16505;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16353;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16536;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16414;
		
		case 205:
			return Global_262145.f_16523;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16381;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16518;
		
		case 211:
			return Global_262145.f_16482;
		
		case 214:
			return Global_262145.f_17022;
		
		case 215:
			return Global_262145.f_17032;
		
		case 216:
			return Global_262145.f_17042;
		
		case 217:
			return Global_262145.f_17051;
		
		case 218:
			return Global_262145.f_17060;
		
		case 219:
			return Global_262145.f_17076;
		
		default:
	}
	return 0;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11127) * Global_262145.f_11132));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11077) * Global_262145.f_11082));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11104) * Global_262145.f_11108));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11117) * Global_262145.f_11121));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11139) * Global_262145.f_11144));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11176) * Global_262145.f_11179));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11222) * Global_262145.f_11225));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11212) * Global_262145.f_11215));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11167) * Global_262145.f_11170));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11187) * Global_262145.f_11192));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11152) * Global_262145.f_11155));
		
		case 170:
			return Global_262145.f_13113;
		
		case 171:
			return Global_262145.f_13172;
		
		case 172:
			return Global_262145.f_13188;
		
		case 173:
			return Global_262145.f_13131;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15204;
		
		case 168:
			return Global_262145.f_15203;
		
		case 179:
			return Global_262145.f_16401;
		
		case 180:
			return Global_262145.f_16277;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16285;
		
		case 185:
			return Global_262145.f_16294;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16489;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16506;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16354;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16537;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16415;
		
		case 205:
			return Global_262145.f_16524;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16382;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16519;
		
		case 211:
			return Global_262145.f_16483;
		
		case 214:
			return Global_262145.f_17023;
		
		case 215:
			return Global_262145.f_17033;
		
		case 216:
			return Global_262145.f_17043;
		
		case 217:
			return Global_262145.f_17052;
		
		case 218:
			return Global_262145.f_17061;
		
		case 219:
			return Global_262145.f_17077;
		
		default:
	}
	return 0;
}

void func_602(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_603(iParam0))
	{
		if (!func_739())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11020;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_391(iParam0))
	{
		*uParam1 = (Global_262145.f_16254 / 100f);
		*uParam2 = (Global_262145.f_16254 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11019;
		*uParam2 = Global_262145.f_11018;
	}
	if (func_391(iParam0))
	{
		if (func_268(unk_0xBE369BE1BC57A796(), 1))
		{
			*uParam1 = (Global_262145.f_16253 / 100f);
			*uParam2 = (Global_262145.f_16253 / 100f);
		}
	}
	else if (func_268(unk_0xBE369BE1BC57A796(), 1))
	{
		*uParam1 = Global_262145.f_11017;
		*uParam2 = Global_262145.f_11016;
	}
	iVar0 = func_330();
	if (iVar0 != func_75())
	{
		if (func_304(unk_0xBE369BE1BC57A796(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_603(int iParam0)
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

void func_604(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_204(unk_0xBE369BE1BC57A796());
	if (func_391(iVar0))
	{
		Global_1763201.f_2 = func_618();
		Global_1763201.f_3 = func_617();
		Global_1763201.f_50 = iParam4;
		Global_1763201.f_51 = iParam5;
		Global_1763201.f_10 = unk_0x57E9911EC23E2C54();
		Global_1763201.f_20 = (Global_1763201.f_10 - Global_1763201.f_9);
		Global_1763201.f_12 = iParam1;
		Global_1763201.f_19 = func_611(iVar0, bParam0, func_616(bParam3));
		if (bParam0)
		{
			Global_1763201.f_11 = 1;
		}
		else
		{
			Global_1763201.f_11 = 0;
		}
		if ((func_224(unk_0xBE369BE1BC57A796()) || func_371(unk_0xBE369BE1BC57A796())) || func_274(unk_0xBE369BE1BC57A796()))
		{
			Global_1763201.f_8 = 1;
		}
		else
		{
			Global_1763201.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1763201.f_43 = 0;
			Global_1763201.f_45 = func_610(func_460(), iParam2);
			Global_1763201.f_47 = iParam7;
			Global_1763201.f_46 = iParam6;
			Global_1763201.f_52 = func_609(func_460(), iParam2);
		}
		func_607(iVar0);
	}
	else if (func_395(iVar0))
	{
		Global_1763254.f_2 = func_618();
		Global_1763254.f_3 = func_617();
		Global_1763254.f_10 = unk_0x57E9911EC23E2C54();
		Global_1763254.f_19 = (Global_1763254.f_10 - Global_1763254.f_9);
		Global_1763254.f_12 = iParam1;
		if (bParam0)
		{
			Global_1763254.f_11 = 1;
		}
		else
		{
			Global_1763254.f_11 = 0;
		}
		if ((func_224(unk_0xBE369BE1BC57A796()) || func_371(unk_0xBE369BE1BC57A796())) || func_274(unk_0xBE369BE1BC57A796()))
		{
			Global_1763254.f_8 = 1;
		}
		else
		{
			Global_1763254.f_8 = 0;
		}
		func_605(iVar0);
	}
	else
	{
		Global_1763183.f_6 = unk_0x57E9911EC23E2C54();
		if (bParam0)
		{
			Global_1763183.f_7 = 1;
		}
		else
		{
			Global_1763183.f_7 = 0;
		}
		Global_1763183.f_8 = iParam1;
		if (Global_1763183.f_4 == 0)
		{
			if ((func_224(unk_0xBE369BE1BC57A796()) || func_371(unk_0xBE369BE1BC57A796())) || func_274(unk_0xBE369BE1BC57A796()))
			{
				Global_1763183.f_4 = 1;
			}
		}
	}
}

void func_605(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x75B0AF9E8E322546(&Global_1763254);
	func_606();
}

void func_606()
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
	Global_1763254 = { Var0 };
	Global_1763254.f_24 = 0;
	Global_1763254.f_25 = 0;
	Global_1763254.f_17 = 0;
}

void func_607(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x5C026EC42879D295(&Global_1763201);
	func_608();
}

void func_608()
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
	Global_1763201 = { Var0 };
	Global_1763201.f_29 = 0;
	Global_1763201.f_30 = 0;
	Global_1763201.f_17 = 0;
}

int func_609(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_560(iParam0, iParam1, 2);
	bVar1 = func_560(iParam0, iParam1, 1);
	bVar2 = func_560(iParam0, iParam1, 0);
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

int func_610(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_563(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_611(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_426(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15811;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15810;
		}
		else
		{
			iVar0 = Global_262145.f_15792;
		}
		iVar1 = 19;
	}
	else if (func_425(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_302(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15791;
			iVar1 = 20;
		}
	}
	else if (func_391(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15811;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15810;
		}
		else
		{
			iVar0 = Global_262145.f_15792;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x809988B0EDD4A6E9(func_615(func_460()), func_614(func_460()), func_618(), func_617(), iVar1, iVar0);
	}
	func_613(iVar0);
	func_612(iVar0);
	return iVar0;
}

void func_612(int iParam0)
{
	int iVar0;
	
	iVar0 = func_477(3940, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_329 = iVar0;
	func_475(3940, iVar0, -1, 1, 0);
}

void func_613(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	Global_1619421[iVar0 /*390*/].f_11.f_328 = (Global_1619421[iVar0 /*390*/].f_11.f_328 + iParam0);
	if (Global_1619421[iVar0 /*390*/].f_11.f_328 < -9999)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
	else if (Global_1619421[iVar0 /*390*/].f_11.f_328 > 9999)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
}

int func_614(int iParam0)
{
	if (iParam0 == func_75())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

int func_615(int iParam0)
{
	if (iParam0 == func_75())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

int func_616(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_224(unk_0xBE369BE1BC57A796()) || func_274(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	return 0;
}

int func_617()
{
	if (Global_1763183.f_3 != 0)
	{
		return Global_1763183.f_3;
	}
	return -1;
}

int func_618()
{
	if (Global_1763183.f_2 != 0)
	{
		return Global_1763183.f_2;
	}
	return -1;
}

int func_619(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_75();
	iVar1 = func_75();
	iVar2 = func_75();
	return func_620(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_620(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_459(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_69 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_70 = uParam12;
	unk_0xEB79FECD9022AAF0(&(Var0.f_67), 2);
	return func_441(&Var0);
}

int func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = func_272(iParam0);
	if (iVar0 != -1)
	{
		return func_270(iVar0);
	}
	return 1;
}

char* func_622()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_76(unk_0xBE369BE1BC57A796());
	if (iVar0 != func_75())
	{
		if (iVar0 != unk_0xBE369BE1BC57A796())
		{
			if (((func_180(iVar0, 28) || func_180(unk_0xBE369BE1BC57A796(), 28)) || func_465(iVar0)) && !func_464(iVar0))
			{
				return func_466(iVar0, 0);
			}
			if (!unk_0x8EA3D5407E9F4AF0() && !unk_0x65FCCBD8772098C3(0, -1, 1))
			{
				return func_466(iVar0, 0);
			}
		}
		uVar1 = func_468(&(Global_1619421[iVar0 /*390*/].f_11.f_97));
		if (unk_0x9C88EB7B70229335(uVar1))
		{
			return func_466(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_623()
{
	func_735();
	func_713();
	func_702();
	func_692();
	func_645();
	func_640();
	func_627();
	func_624();
}

void func_624()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_755 != Local_195.f_5)
	{
		if (Local_195.f_34 != -1)
		{
			if (func_417())
			{
				if (func_370(unk_0xBE369BE1BC57A796()) >= 1)
				{
					if (Local_195.f_5 > 0)
					{
						if (Local_195.f_37 > -1)
						{
							iVar0 = unk_0x0C36F33B3F746611(Local_195.f_37);
							if (unk_0x7268A1112372AA44(iVar0))
							{
								if (iVar0 != unk_0xBE369BE1BC57A796())
								{
									if (func_268(iVar0, 1))
									{
										iVar1 = func_272(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_270(iVar1);
											func_625("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_625("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_755 = Local_195.f_5;
		}
	}
}

int func_625(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var1))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		unk_0x80A171A436807CA0(iParam2);
		unk_0xBAB00B98D1E61BEE(func_551(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x23048DD0C6E21613(0, 1);
		}
		else
		{
			Global_2482053 = { func_77(iParam1) };
			if (unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053))
			{
				iVar17 = 0;
				if (unk_0x6A7B0D91FD88D9EE(&(Global_2481983.f_22), "Leader") && Global_2481983.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2481983.f_21 > 0)
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
						Var1 = { func_626(&Var1) };
					}
					iVar0 = unk_0x484290510553BCE9(iVar18, unk_0x1A03CEC7A8F6CCA0(&Global_2481983, 35), &(Global_2481983.f_17), Global_2481983.f_30, iVar17, 0, Global_2481983, &Var1, Global_1316390, Global_1316391, Global_1316392);
				}
				else
				{
					iVar0 = unk_0xDFBD23CE6CF19FDE(iVar18, unk_0x1A03CEC7A8F6CCA0(&Global_2481983, 35), &(Global_2481983.f_17), Global_2481983.f_30, iVar17, 0, Global_2481983, Global_1316390, Global_1316391, Global_1316392);
				}
			}
			else
			{
				iVar0 = unk_0x23048DD0C6E21613(0, 1);
			}
		}
		func_547(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_626(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_627()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_755() && !func_379())
	{
		return;
	}
	if (unk_0x48B8265059381CD0(Local_461.f_0, 0))
	{
		return;
	}
	if (!func_417())
	{
		return;
	}
	iVar0 = func_370(unk_0xBE369BE1BC57A796());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_195.f_51)))
	{
		iVar1 = (func_11() - func_639(&(Local_195.f_51), 0, 0));
		iVar2 = (func_169() - Local_195.f_5);
		func_638(iVar1);
		if (iVar1 > 30000)
		{
			func_628(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_628(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_628(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_628(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_636(0) == 0)
	{
		return;
	}
	func_635();
	func_632(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_535(sParam4))
	{
		sVar0 = sParam4;
	}
	func_629(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_629(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_631(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354542.f_1 = 1;
		func_630(7, iVar0);
		Global_1354542.f_4282[iVar0] = uParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = uParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = uParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_630(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_631(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

void func_632(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_631(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354542.f_1 = 1;
		func_630(6, iVar0);
		Global_1354542.f_3686[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_3686.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_3686.f_183[iVar0] = iParam3;
		Global_1354542.f_3686.f_172[iVar0] = iParam2;
		Global_1354542.f_3686.f_260[iVar0] = iParam4;
		Global_1354542.f_3686.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1354542.f_3686.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1354542.f_3686.f_443[iVar0] = iParam7;
		Global_1354542.f_3686.f_454[iVar0] = iParam8;
		Global_1354542.f_3686.f_497[iVar0] = iParam9;
		Global_1354542.f_3686.f_508[iVar0] = iParam10;
		Global_1354542.f_3686.f_205[iVar0] = iParam11;
		Global_1354542.f_3686.f_216[iVar0] = iParam12;
		Global_1354542.f_3686.f_227[iVar0] = iParam13;
		Global_1354542.f_3686.f_238[iVar0] = iParam14;
		Global_1354542.f_3686.f_249[iVar0] = iParam15;
		Global_1354542.f_3686.f_519[iVar0] = iParam16;
		Global_1354542.f_3686.f_530[iVar0] = iParam17;
		Global_1354542.f_3686.f_541[iVar0] = iParam18;
		Global_1354542.f_3686.f_552[iVar0] = iParam19;
		Global_1354542.f_3686.f_563[iVar0] = iParam20;
		Global_1354542.f_3686.f_574[iVar0] = iParam21;
		Global_1354542.f_3686.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_634())
		{
			Global_1354542.f_1004 = 1;
		}
		if (unk_0xEF4E5E47AF0D4480())
		{
			iVar2 = 0;
			unk_0xC00B89C485A069D9(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1354542.f_1008 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1354542.f_1007 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1354542.f_1004 = 1;
			}
			if (func_633())
			{
				Global_1354542.f_1008 = 1;
			}
		}
	}
}

int func_633()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xEF4E5E47AF0D4480())
	{
		unk_0xC00B89C485A069D9(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_634()
{
	if ((unk_0xB8EB22F9350F13DC() == 8 || unk_0xB8EB22F9350F13DC() == 9) || unk_0xB8EB22F9350F13DC() == 10)
	{
		return 1;
	}
	return 0;
}

void func_635()
{
	unk_0xE57F94EA937AAD99(8);
	unk_0xE57F94EA937AAD99(9);
	unk_0xE57F94EA937AAD99(6);
	unk_0xE57F94EA937AAD99(7);
	Global_2454054 = 1;
}

int func_636(bool bParam0)
{
	if (func_637())
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_835(unk_0xBE369BE1BC57A796(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_637()
{
	return unk_0x48B8265059381CD0(Global_2359301, 12);
}

void func_638(int iParam0)
{
	if (unk_0x48B8265059381CD0(iLocal_449, 8))
	{
		func_181();
		return;
	}
	if (!unk_0x48B8265059381CD0(iLocal_449, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x5BE53482EFD49141("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xEB79FECD9022AAF0(&iLocal_449, 15);
				unk_0xEB79FECD9022AAF0(&iLocal_449, 9);
			}
		}
	}
	if (unk_0x48B8265059381CD0(iLocal_449, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x48B8265059381CD0(iLocal_449, 11))
			{
				if (unk_0x5823F1F25CE33C5D("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x589451489CB70B8C("AllowScoreAndRadio", 1);
					unk_0x4CE603708D103834(0);
					unk_0xEB79FECD9022AAF0(&iLocal_449, 11);
				}
			}
			if (!unk_0x48B8265059381CD0(iLocal_449, 14))
			{
				if (unk_0x5BE53482EFD49141("APT_COUNTDOWN_30S"))
				{
					unk_0xEB79FECD9022AAF0(&iLocal_449, 14);
				}
			}
			if (unk_0x48B8265059381CD0(iLocal_449, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x48B8265059381CD0(iLocal_449, 12))
					{
						unk_0x4CE603708D103834(1);
						unk_0x589451489CB70B8C("AllowScoreAndRadio", 0);
						unk_0xEB79FECD9022AAF0(&iLocal_449, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x5BE53482EFD49141("APT_FADE_IN_RADIO"))
						{
							unk_0x01BF9836BF02F6C4("APT_COUNTDOWN_30S_KILL");
							unk_0x21E7933CCC7B3724(&iLocal_449, 9);
						}
					}
				}
			}
		}
	}
}

int func_639(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0);
		}
		else
		{
			return unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), *uParam0);
		}
	}
	return unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0);
}

void func_640()
{
	var uVar0;
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0x841F312D66362BF7(Local_195.f_3))
		{
			if (!unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 2))
			{
				if (unk_0xB5F23D615B19D188(unk_0xF9D7EA2FA85E2505(Local_195.f_3), unk_0x17B5CC8A8615737D()))
				{
					unk_0xEB79FECD9022AAF0(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 2);
					iLocal_753 = unk_0x3DF2C10FD29336A3();
					if (func_327(1))
					{
						unk_0x4988C48537D1AE4F(iLocal_753, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0x4988C48537D1AE4F(iLocal_753, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_451 != Local_195.f_5)
	{
		if (unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 3))
		{
			unk_0x21E7933CCC7B3724(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 3);
		}
		if (unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 2))
		{
			if (unk_0x093776FE2E6B4BAC(Local_195.f_3))
			{
				uVar0 = unk_0x03981D6F4893D7D0(Local_195.f_3);
				unk_0x31D01D6DEF4B35AD(&uVar0);
				unk_0x21E7933CCC7B3724(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 2);
			}
			else
			{
				unk_0x4EDACF77CDD9CFEB(Local_195.f_3);
			}
		}
		else
		{
			iLocal_451 = Local_195.f_5;
		}
	}
	if (unk_0x841F312D66362BF7(Local_195.f_3))
	{
		if (func_739())
		{
			if (func_755())
			{
				func_642();
			}
		}
		if (!unk_0x48B8265059381CD0(iLocal_448, 13))
		{
			if (!func_755() || !func_739())
			{
				unk_0x5C267611BDE8CBD8(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 1, 1);
				unk_0xEB79FECD9022AAF0(&iLocal_448, 13);
			}
		}
		if (!unk_0x48B8265059381CD0(iLocal_448, 3))
		{
			unk_0x2380074FC04D1644(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 1200);
			unk_0xEB79FECD9022AAF0(&iLocal_448, 3);
		}
	}
	else
	{
		if (unk_0x48B8265059381CD0(iLocal_448, 13))
		{
			unk_0x21E7933CCC7B3724(&iLocal_448, 13);
		}
		if (unk_0x48B8265059381CD0(iLocal_448, 3))
		{
			unk_0x21E7933CCC7B3724(&iLocal_448, 3);
		}
		if (unk_0xA3794949321E107C(uLocal_453))
		{
			unk_0x020DF7300725ECAB(&uLocal_453);
		}
	}
	func_641();
}

void func_641()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_417())
	{
		return;
	}
	if (func_370(unk_0xBE369BE1BC57A796()) >= 1)
	{
		if (unk_0x49C2DB27EDED0049(Local_195.f_3) && !unk_0xA929B2923D14E2F8(unk_0xF9D7EA2FA85E2505(Local_195.f_3), 0))
		{
			if (!unk_0xF928485DD4C9E3C3(unk_0xF9D7EA2FA85E2505(Local_195.f_3)))
			{
				unk_0xE3B46F8779F1AB2E(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0x3B4F927A1836BD27(2, unk_0x57240623C1BC6E88(unk_0x03981D6F4893D7D0(Local_195.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_642()
{
	int iVar0;
	
	iVar0 = func_370(unk_0xBE369BE1BC57A796());
	if (iVar0 < 2)
	{
		if (unk_0xA3794949321E107C(uLocal_453))
		{
			unk_0x020DF7300725ECAB(&uLocal_453);
		}
		return;
	}
	if (unk_0xA3794949321E107C(uLocal_453))
	{
		return;
	}
	unk_0x21E7933CCC7B3724(&iLocal_448, 11);
	uLocal_453 = unk_0xF1FE04D602EA392E(unk_0x03981D6F4893D7D0(Local_195.f_3));
	unk_0x84DAB725836026C6(uLocal_453, 12);
	unk_0xA0BCCD5C2B5FC84F(uLocal_453, 459);
	unk_0xAAF15482D9DB27D9(uLocal_453, "GB_SGHT_BLP");
	unk_0x5ACBCE67F0494242(uLocal_453, 1);
	unk_0x00EA14207118EEE2(uLocal_453, Global_262145.f_10975);
	if (func_755())
	{
		func_643(&uLocal_453, 18);
	}
	unk_0x1441D969BF79AD61(uLocal_453, 1);
	iLocal_754 = unk_0x3DF2C10FD29336A3();
	if (func_327(1))
	{
		unk_0x4988C48537D1AE4F(iLocal_754, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", 0);
	}
	else
	{
		unk_0x4988C48537D1AE4F(iLocal_754, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
	}
}

void func_643(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		iVar0 = func_644(iParam1);
		unk_0xCC930AE12D020496(*uParam0, iVar0);
	}
}

int func_644(int iParam0)
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
	unk_0xE3B46F8779F1AB2E(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_645()
{
	if (unk_0xCA1D9459B2CC7619() != Local_195.f_33)
	{
		return;
	}
	if (unk_0x841F312D66362BF7(Local_195.f_3))
	{
		if (iLocal_750 != -1)
		{
			iLocal_750 = -1;
		}
		if (unk_0x48B8265059381CD0(Global_2595318, 20))
		{
			unk_0x21E7933CCC7B3724(&Global_2595318, 20);
		}
		return;
	}
	if (!unk_0x48B8265059381CD0(Global_2595318, 20))
	{
		if (!unk_0x48B8265059381CD0(Global_2595318, 21))
		{
			if (iLocal_750 < 0)
			{
				unk_0xEB79FECD9022AAF0(&Global_2595318, 20);
			}
		}
	}
	if (iLocal_751 == -1)
	{
		iLocal_751 = unk_0x0E29C61F26D96FDB(0, 3);
	}
	if (iLocal_750 < 0)
	{
		if (unk_0x48B8265059381CD0(Global_2595318, 21))
		{
			unk_0x21E7933CCC7B3724(&Global_2595318, 21);
			iLocal_750 = 0;
		}
	}
	func_646();
}

void func_646()
{
	bool bVar0;
	
	if (!unk_0x48B8265059381CD0(iLocal_448, 4))
	{
		if (iLocal_750 >= 0)
		{
			if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x21E7933CCC7B3724(&Local_461, 0);
				iLocal_750 = -1;
			}
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
				{
					func_691(1);
				}
			}
		}
	}
	else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		func_690(&Local_461);
		func_689(&Local_461);
		unk_0x21E7933CCC7B3724(&iLocal_448, 4);
	}
	switch (iLocal_750)
	{
		case 0:
			func_688(1);
			unk_0xA73AE78D2491E6E1("HACK", 3);
			iLocal_750++;
			break;
		
		case 1:
			if (func_687(1) && unk_0x657558590DD37F85(3))
			{
				unk_0xEB79FECD9022AAF0(&Local_461, 0);
				unk_0xEB79FECD9022AAF0(&(Local_461.f_1), 0);
				func_410();
				iLocal_752 = 10;
				if (iLocal_751 == 2)
				{
					Local_461.f_17 = 1;
				}
				else if (iLocal_751 == 1)
				{
					Local_461.f_17 = 0;
					iLocal_752 = 77;
				}
				else if (iLocal_751 == 0)
				{
					iLocal_752 = 50;
					Local_461.f_17 = 0;
				}
				func_682(unk_0xBE369BE1BC57A796(), 0, 66048);
				iLocal_750++;
			}
			else
			{
				if (!func_687(1))
				{
				}
				if (!unk_0x657558590DD37F85(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0x6F9E2FAA0B24988A();
			unk_0x9E09DC2C42A67471(19);
			if (!func_185(0))
			{
				func_208(0);
			}
			if (iLocal_751 == 0)
			{
				func_660(&Local_461, 5, 5, iLocal_752, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_659(&Local_461, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_751 == 1)
			{
				func_660(&Local_461, 5, 5, iLocal_752, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1);
				if (func_658(&Local_461, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_751 == 2)
			{
				func_660(&Local_461, 5, 5, iLocal_752, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_647(&Local_461, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x48B8265059381CD0(Local_461.f_1, 1))
			{
				unk_0x21E7933CCC7B3724(&Local_461, 0);
				func_690(&Local_461);
				func_682(unk_0xBE369BE1BC57A796(), 1, 0);
				if (func_185(0))
				{
					func_184(0);
				}
				iLocal_750 = -1;
			}
			else if (bVar0)
			{
				unk_0x21E7933CCC7B3724(&Local_461, 0);
				func_690(&Local_461);
				Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_4++;
				unk_0xEB79FECD9022AAF0(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 3);
				iLocal_751++;
				if (iLocal_751 >= 3)
				{
					iLocal_751 = 0;
				}
				if (func_185(0))
				{
					func_184(0);
				}
				func_682(unk_0xBE369BE1BC57A796(), 1, 0);
				iLocal_750++;
			}
			break;
	}
}

int func_647(var uParam0, bool bParam1)
{
	if (unk_0x48B8265059381CD0(*uParam0, 26))
	{
		if (bParam1)
		{
			func_648(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_648(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x21E7933CCC7B3724(uParam0, 0);
	unk_0xEB79FECD9022AAF0(uParam0, 12);
	unk_0xF9B73D09E3ADD73F(0);
	if (bParam2)
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			unk_0x8D64D92D113BBFB7(unk_0x17B5CC8A8615737D(), 1, 1, 1, 0);
		}
	}
	if (unk_0xBDEC9B948A62578A())
	{
		unk_0xE1DCB7A759496CDC(0);
	}
	unk_0x2E2945F5602A744F(1);
	if (bParam1)
	{
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
	}
	unk_0x2BC4A4AFFC2D937D(uLocal_73, 0);
	func_652(0);
	func_651();
	unk_0xB38D8282832D6321(0);
	func_650(uParam0, 1, 1);
	func_649(0, 1, 1, 0);
}

int func_649(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && iParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_650(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_64[iVar0] != -1)
		{
			if (!unk_0x7DFE463FA760D738(iLocal_64[iVar0]))
			{
				unk_0x2EB37CDED0E516F3(iLocal_64[iVar0]);
				iLocal_64[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0x21E7933CCC7B3724(uParam0, 25);
	unk_0x21E7933CCC7B3724(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x21E7933CCC7B3724(uParam0, 12);
		unk_0x21E7933CCC7B3724(uParam0, 9);
		unk_0x21E7933CCC7B3724(uParam0, 18);
		unk_0x21E7933CCC7B3724(uParam0, 27);
		unk_0x21E7933CCC7B3724(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_76 = 0;
	if (bParam1)
	{
		unk_0x33CBABDFE7B17924(&uLocal_75);
	}
	unk_0x21E7933CCC7B3724(uParam0, 29);
}

void func_651()
{
	int iVar0;
	
	Global_1353070.f_1014 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1353070.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2494199.f_4394 = 1;
}

void func_652(bool bParam0)
{
	if (bParam0)
	{
		func_657();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_656(0))
		{
			func_653(0);
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

void func_653(int iParam0)
{
	if (Global_14604)
	{
		func_655(0, 0);
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
	if (!func_654())
	{
		Global_14443.f_1 = 3;
	}
}

int func_654()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_655(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_656(0))
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

int func_656(int iParam0)
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

void func_657()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

int func_658(var uParam0, bool bParam1)
{
	if (unk_0x48B8265059381CD0(*uParam0, 9))
	{
		if (bParam1)
		{
			func_648(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_659(var uParam0, bool bParam1)
{
	if (unk_0x48B8265059381CD0(*uParam0, 18))
	{
		if (bParam1)
		{
			func_648(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_660(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (unk_0x48B8265059381CD0(*uParam0, 0))
	{
		func_661(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16);
	}
}

void func_661(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
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
	
	unk_0xD23D06AFFB8CE7ED(0);
	unk_0xD23D06AFFB8CE7ED(2);
	unk_0xF9B73D09E3ADD73F(1);
	if (bParam17)
	{
		func_681(1);
	}
	func_680(4, -1);
	func_679();
	if (func_687(bParam16))
	{
		if (!unk_0x95DBE123BC2DB80B())
		{
			unk_0x6F9E2FAA0B24988A();
			unk_0x4ED9ECF3735CB826(1);
			if (unk_0x3C9A4847496426B9() == 0 && !unk_0x95DBE123BC2DB80B())
			{
				unk_0x90101FEE397F4A7E(uLocal_75, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0xB94BB6517BF117EA(2))
		{
			uParam0->f_285 = unk_0x59914E69071E2911(2, 239);
			uParam0->f_286 = unk_0x59914E69071E2911(2, 240);
			if (uParam0->f_287 != uParam0->f_285 || uParam0->f_288 != uParam0->f_286)
			{
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_CURSOR");
				unk_0x584CF9CAE83942E5(uParam0->f_285);
				unk_0x584CF9CAE83942E5(uParam0->f_286);
				unk_0x44983883E630A945();
			}
			uParam0->f_287 = uParam0->f_285;
			uParam0->f_288 = uParam0->f_286;
		}
		else
		{
			func_678(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0xEAC9A8A194DF8F91(uLocal_75, "MOVE_CURSOR");
					unk_0x584CF9CAE83942E5(fVar6);
					unk_0x584CF9CAE83942E5(fVar7);
					unk_0x44983883E630A945();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (unk_0xB94BB6517BF117EA(2))
			{
				uParam0->f_285 = unk_0xC9C57E7D3CE8A98E(2, 239);
				uParam0->f_286 = unk_0xC9C57E7D3CE8A98E(2, 240);
				if (unk_0x7C2F31E78C33DE0F())
				{
					if (uParam0->f_287 != uParam0->f_285)
					{
						if (uParam0->f_285 < 0.49f)
						{
							unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
							unk_0xDF18CF55301CEB8B(10);
							unk_0x44983883E630A945();
						}
						else if (uParam0->f_285 > 0.51f)
						{
							unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
							unk_0xDF18CF55301CEB8B(11);
							unk_0x44983883E630A945();
						}
					}
				}
				uParam0->f_287 = uParam0->f_285;
				uParam0->f_288 = uParam0->f_286;
			}
			if (unk_0xF23B2033129FFCF0(2))
			{
				fVar8 = unk_0x6E0DC4DEE4A9B736(2, 1);
				fVar9 = unk_0x6E0DC4DEE4A9B736(2, 2);
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
					if (unk_0xE851F22ED3518011(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
							unk_0xDF18CF55301CEB8B(10);
							unk_0x44983883E630A945();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
							unk_0xDF18CF55301CEB8B(11);
							unk_0x44983883E630A945();
						}
					}
					if (unk_0xE851F22ED3518011(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							bVar10 = true;
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
							unk_0xDF18CF55301CEB8B(8);
							unk_0x44983883E630A945();
						}
						else if (fLocal_71 > 0f)
						{
							bVar10 = true;
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
							unk_0xDF18CF55301CEB8B(9);
							unk_0x44983883E630A945();
						}
					}
					if (bVar10)
					{
						unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_677(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0x049F77DED8AE0AF4(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0x7DFE463FA760D738(uParam0->f_15))
						{
							if (iLocal_76 != 8)
							{
								unk_0x4988C48537D1AE4F(uParam0->f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0x4B972043966C2EB8(2, 195) || unk_0x4B972043966C2EB8(2, 196)) || unk_0x79888727131C6854(2, 195)) || unk_0x79888727131C6854(2, 196))
			{
			}
			if (unk_0xF23B2033129FFCF0(2))
			{
				if (unk_0x4B972043966C2EB8(2, 32) || unk_0x4B972043966C2EB8(2, 172))
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
					unk_0xDF18CF55301CEB8B(8);
					unk_0x44983883E630A945();
				}
				else if (unk_0x4B972043966C2EB8(2, 33) || unk_0x4B972043966C2EB8(2, 173))
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
					unk_0xDF18CF55301CEB8B(9);
					unk_0x44983883E630A945();
				}
				else if (unk_0x4B972043966C2EB8(2, 34) || unk_0x4B972043966C2EB8(2, 174))
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
					unk_0xDF18CF55301CEB8B(10);
					unk_0x44983883E630A945();
				}
				else if (unk_0x4B972043966C2EB8(2, 35) || unk_0x4B972043966C2EB8(2, 175))
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
					unk_0xDF18CF55301CEB8B(11);
					unk_0x44983883E630A945();
				}
			}
			else if (unk_0x4B972043966C2EB8(2, 188))
			{
				unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
				unk_0xDF18CF55301CEB8B(8);
				unk_0x44983883E630A945();
			}
			else if (unk_0x4B972043966C2EB8(2, 187))
			{
				unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
				unk_0xDF18CF55301CEB8B(9);
				unk_0x44983883E630A945();
			}
			else if (unk_0x4B972043966C2EB8(2, 189))
			{
				unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
				unk_0xDF18CF55301CEB8B(10);
				unk_0x44983883E630A945();
			}
			else if (unk_0x4B972043966C2EB8(2, 190))
			{
				unk_0x4988C48537D1AE4F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT");
				unk_0xDF18CF55301CEB8B(11);
				unk_0x44983883E630A945();
			}
		}
		if (bParam12)
		{
			if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
			{
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = unk_0x2B5EF283DBE89739();
			}
			if (unk_0x78FB53FF5C2D4903(uLocal_74))
			{
				iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				if (iVar0 == 6)
				{
					func_676(uParam0);
				}
			}
		}
		func_675();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_674((iParam15 - (unk_0x94E3E074F38DF86C() - iLocal_59)), &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = 0;
				iLocal_57 = 0;
				iLocal_58 = 0;
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_673(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x94E3E074F38DF86C();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_673(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x94E3E074F38DF86C();
			}
		}
	}
	if (unk_0x48B8265059381CD0(uParam0->f_1, 0))
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
			if (!unk_0x48B8265059381CD0(*uParam0, 29))
			{
				func_672(uParam0, iParam14);
			}
			func_688(1);
			unk_0xB38D8282832D6321(1);
			uParam0->f_15 = unk_0x3DF2C10FD29336A3();
			iLocal_150 = 0;
			iLocal_151 = 0;
			uParam0->f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0x6754FFF2C499EE91(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x21E7933CCC7B3724(uParam0, 1);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = unk_0x3DF2C10FD29336A3();
			iLocal_64[1] = unk_0x3DF2C10FD29336A3();
			func_649(1, 0, 1, 0);
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
					if (!func_386("H_EXIT_PROMPT"))
					{
						if (!func_386("HACKOBJ1"))
						{
							func_671("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (unk_0xB94BB6517BF117EA(2))
				{
					if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
					{
						unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x2B5EF283DBE89739();
					}
				}
				else if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
				{
					unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = unk_0x2B5EF283DBE89739();
				}
			}
			if (unk_0x78FB53FF5C2D4903(uLocal_74))
			{
				iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_386("H_EXIT_PROMPT"))
						{
							unk_0x2E2945F5602A744F(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
				{
					if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
					{
						func_670(0, "");
					}
				}
			}
			if (unk_0x78FB53FF5C2D4903(uLocal_74))
			{
				iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
						func_670(1, "ACCESSD");
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
						if (!func_386("HACKOBJ2"))
						{
							func_671("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (!unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					if (unk_0xB94BB6517BF117EA(2))
					{
						if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
						{
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x2B5EF283DBE89739();
						}
					}
					else if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
					{
						unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x2B5EF283DBE89739();
					}
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x78FB53FF5C2D4903(uLocal_74))
					{
						if (unk_0x4B972043966C2EB8(2, 202))
						{
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = unk_0x2B5EF283DBE89739();
							if (iParam7 == 1)
							{
								if (func_386("HACKOBJ2"))
								{
									unk_0x2E2945F5602A744F(1);
								}
								func_671("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76 = (iLocal_76 - 1);
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
				{
					if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
					{
						func_670(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
					func_670(1, "ACCESSD");
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
				if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
				{
					unk_0x2EB37CDED0E516F3(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
				{
					unk_0x2EB37CDED0E516F3(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
				{
					unk_0x2EB37CDED0E516F3(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0x48B8265059381CD0(*uParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_386("HACKOBJ5"))
								{
									func_671("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!unk_0x48B8265059381CD0(*uParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_386("HACKOBJ3"))
							{
								func_671("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!unk_0x48B8265059381CD0(*uParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_386("HACKOBJ5"))
							{
								func_671("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_386("HACKOBJ5"))
						{
							unk_0x2E2945F5602A744F(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x78FB53FF5C2D4903(uLocal_74))
					{
						if (unk_0xB94BB6517BF117EA(2))
						{
							if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
							{
								unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = unk_0x2B5EF283DBE89739();
							}
						}
						else if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
						{
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x2B5EF283DBE89739();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					if (unk_0x4B972043966C2EB8(2, 202))
					{
						unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = unk_0x2B5EF283DBE89739();
						if (iParam7 == 1)
						{
							if (func_386("HACKOBJ5") || func_386("HACKOBJ3"))
							{
								unk_0x2E2945F5602A744F(1);
							}
							iLocal_61 = 0;
							iLocal_76 = (iLocal_76 - 1);
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
				{
					if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
					{
						func_670(0, "");
					}
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
					func_670(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_77 = unk_0x94E3E074F38DF86C();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0x48B8265059381CD0(uParam0->f_1, 0))
						{
							unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0xE0F9E91D7A2FED46(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0xE0F9E91D7A2FED46(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0xE0F9E91D7A2FED46(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x94E3E074F38DF86C();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x3DF2C10FD29336A3();
						unk_0x4988C48537D1AE4F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!unk_0x48B8265059381CD0(*uParam0, 18))
					{
						iLocal_77 = unk_0x94E3E074F38DF86C();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x94E3E074F38DF86C();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x3DF2C10FD29336A3();
						unk_0x4988C48537D1AE4F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
							{
								if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
								{
									func_670(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0x48B8265059381CD0(*uParam0, 9))
							{
								func_670(1, "TRYDL");
							}
							else
							{
								func_670(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
						{
							if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
							{
								func_670(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0x48B8265059381CD0(*uParam0, 9))
						{
							func_670(1, "TRYDL");
						}
						else
						{
							func_670(1, "TRYBRUTE");
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
						iLocal_77 = unk_0x94E3E074F38DF86C();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0x48B8265059381CD0(uParam0->f_1, 0))
						{
							unk_0xE0F9E91D7A2FED46(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0xE0F9E91D7A2FED46(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0xE0F9E91D7A2FED46(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x94E3E074F38DF86C();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x3DF2C10FD29336A3();
						if (bParam10)
						{
							func_669(uParam0);
						}
						unk_0x312F1FFBC92DFB07(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0x4988C48537D1AE4F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!bParam11 || unk_0x48B8265059381CD0(*uParam0, 18)) && !unk_0x48B8265059381CD0(*uParam0, 9))
					{
						iLocal_77 = unk_0x94E3E074F38DF86C();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x94E3E074F38DF86C();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x3DF2C10FD29336A3();
						if (bParam10)
						{
							func_669(uParam0);
						}
						if (func_386("HACKOBJ5"))
						{
							unk_0x2E2945F5602A744F(1);
						}
						unk_0x312F1FFBC92DFB07(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0x4988C48537D1AE4F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
							{
								if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
								{
									func_670(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0x48B8265059381CD0(*uParam0, 18))
							{
								func_670(1, "TRYDL");
							}
							else
							{
								func_670(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
						{
							if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
							{
								func_670(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0x48B8265059381CD0(*uParam0, 18))
						{
							func_670(1, "TRYDL");
						}
						else
						{
							func_670(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0x48B8265059381CD0(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0x48B8265059381CD0(*uParam0, 18) && unk_0x48B8265059381CD0(*uParam0, 9))
						{
							if (!unk_0x48B8265059381CD0(*uParam0, 28))
							{
								unk_0xEB79FECD9022AAF0(uParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if ((unk_0x94E3E074F38DF86C() - iLocal_78) > 500)
								{
									if (((unk_0x94E3E074F38DF86C() - iLocal_78) > 2500 || unk_0x4B972043966C2EB8(2, 201)) || unk_0x4B972043966C2EB8(2, 237))
									{
										func_670(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0x48B8265059381CD0(*uParam0, 18))
								{
									func_670(1, "TRYBRUTE");
								}
								else
								{
									func_670(1, "TRYHACK");
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
					func_668("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_668("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_1, 1))
				{
					if (!unk_0x78FB53FF5C2D4903(uLocal_74))
					{
						if (unk_0x4B972043966C2EB8(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x109A0C435B50DB34(uLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
								{
									unk_0x2EB37CDED0E516F3(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
								{
									unk_0x2EB37CDED0E516F3(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!unk_0x48B8265059381CD0(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0xEB79FECD9022AAF0(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (!unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					if (unk_0xB94BB6517BF117EA(2))
					{
						if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
						{
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x2B5EF283DBE89739();
						}
					}
					else if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
					{
						unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x2B5EF283DBE89739();
					}
				}
				if (unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
					{
						unk_0x2EB37CDED0E516F3(iLocal_64[0]);
					}
					unk_0xEB79FECD9022AAF0(uParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x4988C48537D1AE4F(-1, "HACKING_FAILURE", 0, 1);
					unk_0x6754FFF2C499EE91(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x94E3E074F38DF86C();
				iLocal_64[0] = unk_0x3DF2C10FD29336A3();
				unk_0x4988C48537D1AE4F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0xEB79FECD9022AAF0(uParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0x109A0C435B50DB34(uLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
					{
						unk_0x2EB37CDED0E516F3(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				unk_0xEB79FECD9022AAF0(uParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x94E3E074F38DF86C() - iLocal_59));
				if (iVar1 < 1)
				{
					unk_0xEB79FECD9022AAF0(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x94E3E074F38DF86C();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x4988C48537D1AE4F(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
						{
							unk_0x2EB37CDED0E516F3(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					unk_0x6754FFF2C499EE91(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0x6754FFF2C499EE91(uLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = unk_0x94E3E074F38DF86C();
				unk_0xEB79FECD9022AAF0(uParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
					{
						unk_0x2EB37CDED0E516F3(iLocal_64[0]);
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
					func_668("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_668("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (!unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					if (!unk_0x48B8265059381CD0(uParam0->f_1, 1))
					{
						if (unk_0x4B972043966C2EB8(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x109A0C435B50DB34(uLocal_75, "CLOSE_APP");
							if (!unk_0x7DFE463FA760D738(iLocal_64[0]))
							{
								unk_0x2EB37CDED0E516F3(iLocal_64[0]);
							}
							if (!unk_0x48B8265059381CD0(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0xEB79FECD9022AAF0(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					if (unk_0xB94BB6517BF117EA(2))
					{
						if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
						{
							unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x2B5EF283DBE89739();
						}
					}
					else if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
					{
						unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x2B5EF283DBE89739();
					}
				}
				if (unk_0x78FB53FF5C2D4903(uLocal_74))
				{
					iVar0 = unk_0x38CC180A8259BCD8(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0x48B8265059381CD0(*uParam0, 23))
			{
				if (func_673(&(uParam0->f_10), 500))
				{
					unk_0x109A0C435B50DB34(uLocal_75, "RESET_ROULETTE");
					unk_0x21E7933CCC7B3724(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0x109A0C435B50DB34(uLocal_75, "STOP_ROULETTE");
					uParam0->f_10 = unk_0x94E3E074F38DF86C();
					unk_0xEB79FECD9022AAF0(uParam0, 23);
					unk_0xEB79FECD9022AAF0(uParam0, 31);
					if (func_214() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xEB79FECD9022AAF0(uParam0, 25);
					unk_0xEB79FECD9022AAF0(uParam0, 31);
					unk_0x4988C48537D1AE4F(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x94E3E074F38DF86C();
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
						{
							unk_0x2EB37CDED0E516F3(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_214() == 0)
					{
						unk_0x6754FFF2C499EE91(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x94E3E074F38DF86C() - iLocal_59));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0xEB79FECD9022AAF0(uParam0, 25);
					unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x94E3E074F38DF86C();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x4988C48537D1AE4F(-1, "HACKING_FAILURE", 0, 1);
					unk_0x2E2945F5602A744F(1);
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
						{
							unk_0x2EB37CDED0E516F3(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					unk_0x6754FFF2C499EE91(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0xEB79FECD9022AAF0(uParam0, 25);
				unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x94E3E074F38DF86C();
				iLocal_64[1] = unk_0x3DF2C10FD29336A3();
				unk_0x4988C48537D1AE4F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0xEB79FECD9022AAF0(uParam0, 25);
				unk_0x109A0C435B50DB34(uLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
					{
						unk_0x2EB37CDED0E516F3(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0x6754FFF2C499EE91(uLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = unk_0x94E3E074F38DF86C();
				unk_0xEB79FECD9022AAF0(uParam0, 9);
				unk_0x4988C48537D1AE4F(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x7DFE463FA760D738(iLocal_64[1]))
					{
						unk_0x2EB37CDED0E516F3(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0x48B8265059381CD0(*uParam0, 9) && unk_0x48B8265059381CD0(*uParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_386("HACKOBJ7"))
						{
							func_671("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_386("H_USE_PC6") || func_386("H_USE_PC7")) || func_386("H_USE_PC8")) || func_386("H_USE_PC9"))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			if ((unk_0x48B8265059381CD0(*uParam0, 9) && unk_0x48B8265059381CD0(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0x48B8265059381CD0(*uParam0, 28))))
			{
				if (func_386("HACKOBJ7"))
				{
					unk_0x2E2945F5602A744F(1);
				}
				if (!iLocal_151)
				{
					unk_0xEE4ED1F88396A702(-1, "unlocked_bleep", unk_0x17B5CC8A8615737D(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_673(&iLocal_77, 3000))
				{
					unk_0x21E7933CCC7B3724(uParam0, 0);
					unk_0xEB79FECD9022AAF0(uParam0, 12);
					unk_0xB38D8282832D6321(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0x48B8265059381CD0(*uParam0, 27)) && unk_0x48B8265059381CD0(*uParam0, 9)) && unk_0x48B8265059381CD0(*uParam0, 18))
				{
					unk_0xEAC9A8A194DF8F91(uLocal_75, "OPEN_DOWNLOAD");
					unk_0x14ED5B5B8289F2FC(1);
					unk_0x44983883E630A945();
					unk_0xEB79FECD9022AAF0(uParam0, 27);
				}
				if (func_673(&iLocal_77, 2000))
				{
					unk_0x109A0C435B50DB34(uLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_662(uParam0);
			break;
	}
}

void func_662(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_18 > 0)
	{
		if (unk_0x48B8265059381CD0(*uParam0, 22))
		{
			if (unk_0xE0B615EF03FE4422("hackingNG"))
			{
				if (!unk_0x95DBE123BC2DB80B())
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		unk_0x4988C48537D1AE4F(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_386("H1_HNG"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (unk_0xEF4E5E47AF0D4480())
		{
			if (func_386("H1_HNG_KM"))
			{
				unk_0x2E2945F5602A744F(1);
			}
		}
		unk_0xEB79FECD9022AAF0(uParam0, 26);
	}
	else if (unk_0xF23B2033129FFCF0(2))
	{
		if (!func_386("H1_HNG_KM"))
		{
			func_671("H1_HNG_KM");
		}
	}
	else if (!func_386("H1_HNG"))
	{
		func_671("H1_HNG");
	}
	switch (uParam0->f_18)
	{
		case 0:
			unk_0xA6AD245AF4469018("hackingNG", 0);
			unk_0x21E7933CCC7B3724(uParam0, 22);
			func_667();
			iLocal_139 = unk_0x94E3E074F38DF86C();
			Local_99.f_0 = 0;
			unk_0x21E7933CCC7B3724(&uLocal_149, 0);
			unk_0x21E7933CCC7B3724(&uLocal_149, 1);
			unk_0x21E7933CCC7B3724(&uLocal_149, 2);
			unk_0x21E7933CCC7B3724(&uLocal_149, 3);
			unk_0x21E7933CCC7B3724(&uLocal_149, 4);
			unk_0x21E7933CCC7B3724(&uLocal_149, 5);
			unk_0x21E7933CCC7B3724(&uLocal_149, 6);
			unk_0x21E7933CCC7B3724(&uLocal_149, 7);
			uParam0->f_18++;
			break;
		
		case 1:
			if (unk_0xE0B615EF03FE4422("hackingNG"))
			{
				unk_0xEB79FECD9022AAF0(uParam0, 22);
				unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_CURSOR_VISIBILITY");
				unk_0x14ED5B5B8289F2FC(0);
				unk_0x44983883E630A945();
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
					Local_82[iVar0 /*2*/].f_1 = func_665(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
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
						if (!unk_0x48B8265059381CD0(uLocal_149, iVar0))
						{
							iLocal_140[iVar0] = unk_0x3DF2C10FD29336A3();
							unk_0x4988C48537D1AE4F(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0xEB79FECD9022AAF0(&iLocal_149, iVar0);
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
							unk_0x5209B7FDA124FCCA(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (unk_0x48B8265059381CD0(iLocal_149, iVar0))
				{
					unk_0x2EB37CDED0E516F3(iLocal_140[iVar0]);
					unk_0xB47CC6339ADB0B67(iLocal_140[iVar0]);
					unk_0x21E7933CCC7B3724(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_664(Local_99.f_0))
			{
				unk_0x4988C48537D1AE4F(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
			{
				if (func_673(&iLocal_139, 300))
				{
					if (func_663(Local_99.f_0))
					{
						Local_101[Local_99.f_0 /*4*/] = 1;
						Local_82[Local_99.f_0 /*2*/].f_1 = 0.572f;
						unk_0x4988C48537D1AE4F(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99.f_0 != 7)
						{
							Local_99.f_0++;
						}
					}
					else
					{
						if (Local_99.f_0 != 0)
						{
							if (unk_0x48B8265059381CD0(iLocal_149, Local_99.f_0))
							{
								unk_0x2EB37CDED0E516F3(iLocal_140[Local_99.f_0]);
								unk_0xB47CC6339ADB0B67(iLocal_140[Local_99.f_0]);
								unk_0x21E7933CCC7B3724(&iLocal_149, Local_99.f_0);
							}
							Local_101[(Local_99.f_0 - 1) /*4*/] = 0;
							Local_99.f_0 = (Local_99.f_0 - 1);
						}
						if (!unk_0x95DBE123BC2DB80B())
						{
							unk_0x2F8697C8670CAD58(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = unk_0x94E3E074F38DF86C();
						unk_0x1C7515726465BC07(0, 100, 100);
						unk_0x4988C48537D1AE4F(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x95DBE123BC2DB80B())
					{
						unk_0x67972FF1523F6D32("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = unk_0x94E3E074F38DF86C();
					unk_0x1C7515726465BC07(0, 100, 100);
				}
			}
			if (!unk_0x95DBE123BC2DB80B())
			{
				if (Local_99.f_0 == 0)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 1)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 2)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 3)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 4)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 5)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 6)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 7)
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x67972FF1523F6D32("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0x48B8265059381CD0(uParam0->f_1, 0))
				{
					if (!unk_0x48B8265059381CD0(uParam0->f_1, 1))
					{
						if (unk_0x4B972043966C2EB8(2, 202))
						{
							unk_0xEB79FECD9022AAF0(&(uParam0->f_1), 1);
							unk_0x2E2945F5602A744F(1);
						}
					}
				}
			}
			break;
	}
}

int func_663(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_665(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_666((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_666(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_667()
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

void func_668(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_669(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0E29C61F26D96FDB(0, 8);
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

void func_670(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0x6754FFF2C499EE91(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = unk_0x94E3E074F38DF86C();
		iLocal_79 = 1;
	}
	else
	{
		unk_0x6754FFF2C499EE91(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_671(char* sParam0)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 1, 1, -1);
}

void func_672(var uParam0, int iParam1)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 29))
	{
		unk_0xE0F9E91D7A2FED46(uLocal_75, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0x4FF5482BE67FE954())
		{
			unk_0x6754FFF2C499EE91(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0x6754FFF2C499EE91(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0xEAC9A8A194DF8F91(uLocal_75, "SET_LABELS");
		func_249("H_ICON_1");
		if (iParam1 == 0)
		{
			func_249("H_ICON_2a");
		}
		else
		{
			func_249("H_ICON_2");
		}
		func_249("H_ICON_3");
		func_249("H_ICON_4");
		func_249("H_ICON_5");
		func_249("H_ICON_6");
		unk_0x44983883E630A945();
		unk_0xEB79FECD9022AAF0(uParam0, 29);
	}
}

int func_673(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x94E3E074F38DF86C();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_674(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_675()
{
	if (iLocal_76 < 5)
	{
		if (unk_0x4B972043966C2EB8(2, 201) || unk_0x4B972043966C2EB8(2, 237))
		{
			unk_0x4988C48537D1AE4F(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_676(var uParam0)
{
	unk_0x8D64D92D113BBFB7(unk_0x17B5CC8A8615737D(), 1, 1, 1, 0);
	if (unk_0xBDEC9B948A62578A())
	{
		unk_0xE1DCB7A759496CDC(0);
	}
	unk_0x2E2945F5602A744F(1);
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
	unk_0x2BC4A4AFFC2D937D(uLocal_73, 0);
	func_652(0);
	func_651();
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0xB38D8282832D6321(0);
	func_650(uParam0, 1, 0);
	func_649(0, 1, 1, 0);
}

void func_677(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x59914E69071E2911(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x59914E69071E2911(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x59914E69071E2911(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x59914E69071E2911(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xC36DBFD18BF1A53B(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xBD25D98B49ED9766(2, 218) * 127f));
		}
		if (!unk_0xC36DBFD18BF1A53B(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBD25D98B49ED9766(2, 219) * 127f));
		}
		if (!unk_0xC36DBFD18BF1A53B(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xBD25D98B49ED9766(2, 220) * 127f));
		}
		if (!unk_0xC36DBFD18BF1A53B(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xBD25D98B49ED9766(2, 221) * 127f));
		}
	}
	if (unk_0xF23B2033129FFCF0(2))
	{
		if (bParam5)
		{
			if (unk_0x3D58C99BA34BF045())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xD652E15466D1EA3C())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_678(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xC9C57E7D3CE8A98E(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x6E0DC4DEE4A9B736(2, 221) * 127f));
		}
	}
}

void func_679()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_656(0))
		{
			func_653(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_680(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1353070.f_1014), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1353070.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_681(int iParam0)
{
	Global_1354542.f_995 = iParam0;
}

void func_682(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0xEA585FE60D0854B3())
		{
			unk_0x97225621CA125FF2(0);
		}
	}
	if (!unk_0x63C468D583002D23())
	{
		iVar0 = iParam2;
		unk_0xC8C3338D4DBC00FE(iParam0, bParam1, iVar0);
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
		if (!func_355())
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
		if (unk_0x7268A1112372AA44(iParam0) && unk_0xCF7855B965948E97(iParam0))
		{
			uVar25 = unk_0xDF7CE83326F434E9(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x63C468D583002D23())
				{
					unk_0xD629A0523A16EED3(1);
				}
				else
				{
					unk_0x027DB6817AB239EB(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x63C468D583002D23() && !bVar18)
					{
						unk_0xD629A0523A16EED3(0);
					}
					Global_2421664[iParam0 /*358*/].f_247 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_686(uVar25) && !unk_0xE59622A0BE598996(uVar25))
				{
					if (!bVar21)
					{
						unk_0xCEDF2A713644AEDA(uVar25, true, 0);
					}
				}
				if (!unk_0xDDBA7A42B9B819EE(uVar25))
				{
					if (!bVar20)
					{
						unk_0x98F0FA127445E343(uVar25, false);
					}
					unk_0xBDE4C59FD939CE4E(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x98F0FA127445E343(uVar25, false);
				}
				unk_0x6F65279C9BC14EDB(uVar25, true);
				unk_0xF7A1A67D26D29975(iParam0, 0);
				unk_0x5D3680D916012130(uVar25);
				unk_0x78F48B47DB1C3316(uVar25, 1);
				func_685();
				func_684();
				if (unk_0x86DB3331A7FB14B2())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE41614517B6436B2())
				{
				}
				Global_2421664[iParam0 /*358*/].f_248 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_686(uVar25) && !unk_0xE59622A0BE598996(uVar25))
				{
					if (!bVar21)
					{
						unk_0xCEDF2A713644AEDA(uVar25, !bVar14, 0);
					}
					if (!unk_0xDDBA7A42B9B819EE(uVar25))
					{
						if (!bVar20)
						{
							unk_0x98F0FA127445E343(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xBDE4C59FD939CE4E(uVar25, 1);
						}
					}
					if (func_683(Global_1633501.f_107548))
					{
						unk_0x98F0FA127445E343(uVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0xF7A1A67D26D29975(iParam0, 0);
				}
				else
				{
					unk_0xF7A1A67D26D29975(iParam0, 1);
				}
				unk_0x6F65279C9BC14EDB(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5315600F216E4653(uVar25) && !unk_0xFD0FE723227D5AB6(uVar25, 0))
					{
						unk_0xBC8C26E1CC191108(uVar25);
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
			unk_0xC8C3338D4DBC00FE(iParam0, bParam1, iVar26);
		}
	}
}

bool func_683(int iParam0)
{
	return iParam0 == 17;
}

void func_684()
{
	struct<2> Var0;
	
	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404994.f_2220 = { Var0 };
}

void func_685()
{
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_210 = 0;
}

int func_686(var uParam0)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x1F8F07D86DA1A701(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_687(bool bParam0)
{
	if (unk_0xFF84A94166FBB351(uLocal_75) && (!bParam0 || (((((unk_0xE0B615EF03FE4422("HACKING_PC_desktop_0") && unk_0xE0B615EF03FE4422("HACKING_PC_desktop_1")) && unk_0xE0B615EF03FE4422("HACKING_PC_desktop_2")) && unk_0xE0B615EF03FE4422("HACKING_PC_desktop_3")) && unk_0xE0B615EF03FE4422("HACKING_PC_desktop_4")) && unk_0xE0B615EF03FE4422("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_688(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA6AD245AF4469018("HACKING_PC_desktop_0", 0);
		unk_0xA6AD245AF4469018("HACKING_PC_desktop_1", 0);
		unk_0xA6AD245AF4469018("HACKING_PC_desktop_2", 0);
		unk_0xA6AD245AF4469018("HACKING_PC_desktop_3", 0);
		unk_0xA6AD245AF4469018("HACKING_PC_desktop_4", 0);
		unk_0xA6AD245AF4469018("HACKING_PC_desktop_5", 0);
	}
	uLocal_75 = unk_0x3445B020A650AFC7("Hacking_PC");
}

void func_689(var uParam0)
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x8D64D92D113BBFB7(unk_0x17B5CC8A8615737D(), 1, 1, 1, 0);
	}
	if (unk_0xBDEC9B948A62578A())
	{
		unk_0xE1DCB7A759496CDC(0);
	}
	unk_0xF9B73D09E3ADD73F(0);
	unk_0x2E2945F5602A744F(1);
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
	unk_0x2BC4A4AFFC2D937D(uLocal_73, 0);
	unk_0x21E7933CCC7B3724(uParam0, 0);
	unk_0x21E7933CCC7B3724(uParam0, 12);
	func_652(0);
	func_651();
	unk_0xB38D8282832D6321(0);
}

void func_690(var uParam0)
{
	func_650(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_18 = 0;
	Local_99.f_0 = 0;
	Local_99.f_1 = 0;
	unk_0x21E7933CCC7B3724(uParam0, 26);
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
}

void func_691(bool bParam0)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam0)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
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
}

void func_692()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x48B8265059381CD0(Local_461.f_0, 0))
	{
		return;
	}
	if (!func_417())
	{
		if (func_386("GB_SGHT_HLP1"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (func_386("GB_SGHT_HLP2"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (func_379())
		{
			sVar0 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
			iVar1 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
			if (func_268(unk_0xBE369BE1BC57A796(), 1))
			{
				if (func_701("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			else if (func_701("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x2E2945F5602A744F(1);
			}
		}
		if (func_386("GB_SGHT_RVL"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return;
	}
	iVar2 = func_370(unk_0xBE369BE1BC57A796());
	if (iVar2 < 2)
	{
		if (func_386("GB_SGHT_HLP1"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (func_386("GB_SGHT_HLP2"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (func_379())
		{
			sVar0 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
			iVar1 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
			if (func_268(unk_0xBE369BE1BC57A796(), 1))
			{
				if (func_701("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			else if (func_701("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x2E2945F5602A744F(1);
			}
		}
		if (func_386("GB_SGHT_RVL"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return;
	}
	if (!unk_0x48B8265059381CD0(iLocal_448, 2))
	{
		if (!func_700(86))
		{
			if (iLocal_750 == -1)
			{
				if (func_694(0, 1, 1, 1))
				{
					if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
					{
						func_394("GB_SGHT_HLP1", -1);
						func_393(1);
						unk_0xEB79FECD9022AAF0(&iLocal_448, 2);
					}
					else if (func_756() == Local_195.f_33)
					{
						func_394("GB_SGHT_HLP2", -1);
						func_393(1);
						unk_0xEB79FECD9022AAF0(&iLocal_448, 2);
					}
					else if (func_379())
					{
						sVar0 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
						iVar1 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
						if (func_268(unk_0xBE369BE1BC57A796(), 1))
						{
							func_693("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_393(1);
						}
						else
						{
							func_693("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_393(1);
						}
						unk_0xEB79FECD9022AAF0(&iLocal_448, 2);
					}
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&iLocal_448, 2);
			}
		}
	}
	if (unk_0x48B8265059381CD0(iLocal_448, 2))
	{
		if (!unk_0x48B8265059381CD0(iLocal_448, 7))
		{
			if (iLocal_750 == -1)
			{
				if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
				{
					if (func_694(0, 1, 1, 1))
					{
						func_394("GB_SGHT_APPH", -1);
						func_393(1);
						unk_0xEB79FECD9022AAF0(&iLocal_448, 7);
					}
				}
				else
				{
					unk_0xEB79FECD9022AAF0(&iLocal_448, 7);
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&iLocal_448, 7);
			}
		}
	}
	if (!unk_0x48B8265059381CD0(iLocal_448, 8))
	{
		if (func_755())
		{
			if (func_739())
			{
				if (unk_0x841F312D66362BF7(Local_195.f_3))
				{
					if (func_694(0, 1, 1, 1))
					{
						func_394("GB_SGHT_PKGH", -1);
						func_393(1);
						unk_0xEB79FECD9022AAF0(&iLocal_448, 8);
					}
				}
			}
		}
	}
	if (!unk_0x48B8265059381CD0(iLocal_448, 12))
	{
		if (func_755())
		{
			if (Local_195.f_5 > 0 || unk_0x48B8265059381CD0(Local_195.f_1, 6))
			{
				if (func_694(0, 1, 1, 1))
				{
					func_394("GB_SGHT_RVL", -1);
					func_393(1);
					unk_0xEB79FECD9022AAF0(&iLocal_448, 12);
				}
			}
		}
	}
}

void func_693(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x252D021C9D92DBA9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x80A171A436807CA0(iParam2);
	}
	unk_0xBAB00B98D1E61BEE(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x80A171A436807CA0(iParam4);
	}
	unk_0x34D84D73B5DF8E80(sParam3);
	unk_0x8B1500AADBA665BD(0, 0, 0, iParam5);
}

int func_694(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x9E123D5FF2973C60())
	{
		return 0;
	}
	if (func_699())
	{
		return 0;
	}
	if (!unk_0x30F06AB0772AFB80())
	{
		return 0;
	}
	if (func_360())
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_33(unk_0xBE369BE1BC57A796(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_698(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (func_697())
	{
		return 0;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (Global_1574102)
	{
		return 0;
	}
	if (func_696())
	{
		return 0;
	}
	if (func_695())
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (Global_2502455)
	{
		return 0;
	}
	return 1;
}

bool func_695()
{
	return Global_2443134.f_570;
}

bool func_696()
{
	return Global_2443134.f_722;
}

bool func_697()
{
	return Global_2433125.f_2506.f_577;
}

int func_698(int iParam0)
{
	if (Global_2421664[iParam0 /*358*/].f_211 == 0)
	{
		return 0;
	}
	return 1;
}

int func_699()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

bool func_700(int iParam0)
{
	return Global_2433125.f_2199[0 /*76*/].f_1 == iParam0;
}

bool func_701(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x80A171A436807CA0(iParam2);
	}
	unk_0xBAB00B98D1E61BEE(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x80A171A436807CA0(iParam4);
	}
	unk_0x34D84D73B5DF8E80(sParam3);
	return unk_0xCF2B4FB18449D099(0);
}

void func_702()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x48B8265059381CD0(Local_461.f_0, 0))
	{
		return;
	}
	if (!func_417())
	{
		if (unk_0x48B8265059381CD0(iLocal_448, 5))
		{
			if (Local_195.f_34 != -1)
			{
				iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
				if (iVar0 > -1)
				{
					if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(Local_195.f_34)))
					{
						iVar1 = func_270(iVar0);
						iVar2 = func_644(iVar1);
						func_408(unk_0x0C36F33B3F746611(Local_195.f_34), 432, 0);
						func_406(unk_0x0C36F33B3F746611(Local_195.f_34), iVar2, 0);
						func_405(unk_0x0C36F33B3F746611(Local_195.f_34), 0, 0);
						func_404(unk_0x0C36F33B3F746611(Local_195.f_34), 0);
						func_403(unk_0x0C36F33B3F746611(Local_195.f_34), Global_262145.f_10975, 0);
						unk_0x21E7933CCC7B3724(&iLocal_448, 5);
					}
					else
					{
						unk_0x21E7933CCC7B3724(&iLocal_448, 5);
					}
				}
			}
			func_410();
		}
		return;
	}
	if (!unk_0x841F312D66362BF7(Local_195.f_3))
	{
		if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
		{
			if (!unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 3))
			{
				if (!unk_0x48B8265059381CD0(Local_461.f_0, 0))
				{
					if (Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_5 < 3)
					{
						if (func_370(unk_0xBE369BE1BC57A796()) == 3)
						{
							if (!func_712("GB_SGHT_HCK"))
							{
								func_709("GB_SGHT_HCK", 0);
							}
						}
						else if (func_712("GB_SGHT_HCK"))
						{
							func_410();
						}
					}
					else
					{
						func_410();
					}
				}
			}
		}
		else if (func_756() == Local_195.f_33)
		{
			if (Local_195.f_34 != -1)
			{
				if (func_370(unk_0xBE369BE1BC57A796()) == 3)
				{
					if (!func_712("GB_SGHT_PROT"))
					{
						iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_270(iVar0);
							func_703("GB_SGHT_PROT", unk_0x0C36F33B3F746611(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_712("GB_SGHT_PROT"))
				{
					func_410();
				}
			}
		}
		else if (func_379())
		{
			if (Local_195.f_34 != -1)
			{
				if (func_370(unk_0xBE369BE1BC57A796()) == 3)
				{
					if (Local_195.f_34 != -1)
					{
						iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_270(iVar0);
							if (func_268(unk_0xBE369BE1BC57A796(), 1))
							{
								if (!func_712("GB_SGHT_STOP"))
								{
									func_703("GB_SGHT_STOP", unk_0x0C36F33B3F746611(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_712("GB_SGHT_STOP"))
							{
								func_703("GB_SGHT_STOP", unk_0x0C36F33B3F746611(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_712("GB_SGHT_STOP"))
					{
						func_410();
					}
					if (func_712("GB_SGHT_STOP2"))
					{
						func_410();
					}
				}
				if (func_370(unk_0xBE369BE1BC57A796()) >= 2)
				{
					if (!unk_0x48B8265059381CD0(iLocal_448, 5))
					{
						if (Local_195.f_34 != -1)
						{
							if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(Local_195.f_34)))
							{
								if (func_835(unk_0x0C36F33B3F746611(Local_195.f_34), 1, 1))
								{
									iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_270(iVar0);
										iVar2 = func_644(iVar1);
										func_408(unk_0x0C36F33B3F746611(Local_195.f_34), 432, 1);
										func_406(unk_0x0C36F33B3F746611(Local_195.f_34), iVar2, 1);
										func_405(unk_0x0C36F33B3F746611(Local_195.f_34), 1, 1);
										func_404(unk_0x0C36F33B3F746611(Local_195.f_34), 1);
										func_403(unk_0x0C36F33B3F746611(Local_195.f_34), Global_262145.f_10975, 1);
										unk_0xEB79FECD9022AAF0(&iLocal_448, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0x48B8265059381CD0(iLocal_448, 5))
				{
					if (Local_195.f_34 != -1)
					{
						iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_270(iVar0);
							iVar2 = func_644(iVar1);
							func_408(unk_0x0C36F33B3F746611(Local_195.f_34), 432, 0);
							func_406(unk_0x0C36F33B3F746611(Local_195.f_34), iVar2, 0);
							func_405(unk_0x0C36F33B3F746611(Local_195.f_34), 0, 0);
							func_404(unk_0x0C36F33B3F746611(Local_195.f_34), 0);
							func_403(unk_0x0C36F33B3F746611(Local_195.f_34), Global_262145.f_10975, 0);
							unk_0x21E7933CCC7B3724(&iLocal_448, 5);
						}
					}
				}
			}
		}
	}
	else if (func_370(unk_0xBE369BE1BC57A796()) == 3)
	{
		if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
		{
			if (!unk_0x48B8265059381CD0(Local_461.f_0, 0))
			{
				if (!func_712("GB_SGHT_RETP"))
				{
					func_709("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_756() == Local_195.f_33)
		{
			if (Local_195.f_34 != -1)
			{
				if (!func_712("GB_SGHT_PROT"))
				{
					iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_270(iVar0);
						func_703("GB_SGHT_PROT", unk_0x0C36F33B3F746611(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_379())
		{
			if (Local_195.f_34 != -1)
			{
				iVar0 = func_272(unk_0x0C36F33B3F746611(Local_195.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_270(iVar0);
					if (func_268(unk_0xBE369BE1BC57A796(), 1))
					{
						if (!func_712("GB_SGHT_STOP"))
						{
							func_703("GB_SGHT_STOP", unk_0x0C36F33B3F746611(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_712("GB_SGHT_STOP"))
					{
						func_703("GB_SGHT_STOP", unk_0x0C36F33B3F746611(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_712("GB_SGHT_PROT"))
		{
			func_410();
		}
		if (func_712("GB_SGHT_RETP"))
		{
			func_410();
		}
		if (func_712("GB_SGHT_STOP"))
		{
			func_410();
		}
		if (func_712("GB_SGHT_STOP2"))
		{
			func_410();
		}
	}
}

void func_703(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_704(sParam0, unk_0x592E5DF66777D40F(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312575 = 15;
		Global_1312575.f_56 = iParam3;
		Global_1312575.f_57 = iParam4;
		Global_1312575.f_54 = iParam1;
	}
}

int func_704(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return 0;
	}
	if (unk_0x761258E562C07369(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(sParam1))
	{
		return 0;
	}
	if (unk_0x761258E562C07369(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(sParam2))
	{
		return 0;
	}
	if (unk_0x761258E562C07369(sParam2) > 63)
	{
		return 0;
	}
	if (func_708(sParam0, sParam1, sParam2) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_411();
	Global_1312575 = 10;
	StringCopy(&(Global_1312575.f_1), unk_0x6AF6B39BFDB53CB5(), 32);
	Global_1312575.f_9 = unk_0x765F5B806B517045(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	StringCopy(&(Global_1312575.f_32), sParam2, 64);
	Global_1312575.f_58 = uParam4;
	Global_1312575.f_56 = uParam4;
	func_707();
	func_706(bParam3);
	func_705();
	return 1;
}

void func_705()
{
	unk_0xEB79FECD9022AAF0(&(Global_1312575.f_59), 1);
}

void func_706(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEB79FECD9022AAF0(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x21E7933CCC7B3724(&(Global_1312575.f_59), 0);
}

void func_707()
{
	Global_1312575.f_10 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 86400000);
	Global_1312575.f_11 = unk_0xCB150A8B81012128();
}

bool func_708(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_416())
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam0))
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam1))
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam2))
	{
		return 0;
	}
	if (!unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_12)))
	{
		return 0;
	}
	if (!unk_0x765F5B806B517045(sParam1) == unk_0x765F5B806B517045(&(Global_1312575.f_16)))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam2) == unk_0x765F5B806B517045(&(Global_1312575.f_32));
}

void func_709(char* sParam0, bool bParam1)
{
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return;
	}
	if (unk_0x761258E562C07369(sParam0) > 23)
	{
		return;
	}
	if (func_710(sParam0))
	{
		return;
	}
	func_411();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x6AF6B39BFDB53CB5(), 32);
	Global_1312575.f_9 = unk_0x765F5B806B517045(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_707();
	func_706(bParam1);
	func_705();
}

bool func_710(char* sParam0)
{
	if (!func_416())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_711(uParam0);
	}
	if (unk_0x9C88EB7B70229335(uParam0))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_12));
}

bool func_711(char* sParam0)
{
	if (!func_416())
	{
		return 0;
	}
	if (unk_0x9C88EB7B70229335(uParam0))
	{
		return 0;
	}
	return unk_0x765F5B806B517045(sParam0) == unk_0x765F5B806B517045(&(Global_1312575.f_16));
}

int func_712(char* sParam0)
{
	if (unk_0x9C88EB7B70229335(sParam0))
	{
		return 0;
	}
	if (!func_416())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x761258E562C07369(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x761258E562C07369(sParam0) > 23)
	{
		return 0;
	}
	return func_710(sParam0);
}

void func_713()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_755() && !func_379())
	{
		return;
	}
	if (!func_417())
	{
		return;
	}
	if (!unk_0x48B8265059381CD0(iLocal_448, 1))
	{
		iVar0 = func_370(unk_0xBE369BE1BC57A796());
		if (iVar0 >= 2)
		{
			if (unk_0xCA1D9459B2CC7619() == Local_195.f_33 || func_756() == Local_195.f_33)
			{
				if (func_718(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_462(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x7FB3512FE15142C6(1);
					unk_0x22B080FDD555C5D2(unk_0xBE369BE1BC57A796(), joaat("pickup_portable_package"), 1);
					func_717(1);
					func_714(-1, 0, 0, -1);
				}
			}
			else if (func_268(unk_0xBE369BE1BC57A796(), 1))
			{
				sVar1 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
				uVar2 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
				func_619(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x22B080FDD555C5D2(unk_0xBE369BE1BC57A796(), joaat("pickup_portable_package"), 0);
				func_714(-1, 0, 0, -1);
			}
			else
			{
				sVar1 = func_463(unk_0x0C36F33B3F746611(Local_195.f_34));
				uVar2 = func_621(unk_0x0C36F33B3F746611(Local_195.f_34));
				func_619(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x22B080FDD555C5D2(unk_0xBE369BE1BC57A796(), joaat("pickup_portable_package"), 0);
				func_714(-1, 0, 0, -1);
			}
		}
		unk_0xEB79FECD9022AAF0(&iLocal_448, 1);
	}
}

void func_714(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_204(unk_0xBE369BE1BC57A796());
	if (iParam2 || func_391(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1763201 = iVar0;
		if (func_426(iVar0))
		{
			Global_1763201.f_1 = 4;
		}
		else if (func_425(iVar0))
		{
			Global_1763201.f_1 = 5;
		}
		else if (func_302(iVar0, 0))
		{
			Global_1763201.f_1 = 2;
			if (func_471(iVar0))
			{
				Global_1763201.f_1 = 3;
			}
		}
		else
		{
			Global_1763201.f_1 = 1;
		}
		if (func_460() != func_75())
		{
			Global_1763201.f_4 = func_615(func_460());
			Global_1763201.f_5 = func_614(func_460());
		}
		if (func_330() != func_75())
		{
			func_495(func_330(), &(Global_1763201.f_6), &(Global_1763201.f_7));
		}
		Global_1763201.f_9 = unk_0x57E9911EC23E2C54();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1763201.f_27 = 1;
			Global_1763201.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1763201.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1763201.f_40 = func_564(iParam1);
			Global_1763201.f_41 = func_716();
			Global_1763201.f_42 = func_565(unk_0xBE369BE1BC57A796(), iParam1);
			Global_1763201.f_44 = func_610(unk_0xBE369BE1BC57A796(), iParam1);
		}
	}
	else if (func_395(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1763254 = iVar0;
		Global_1763201.f_1 = 1;
		if (func_460() != func_75())
		{
			Global_1763254.f_4 = func_615(func_460());
			Global_1763254.f_5 = func_614(func_460());
		}
		if (func_330() != func_75())
		{
			func_495(func_330(), &(Global_1763254.f_6), &(Global_1763254.f_7));
		}
		Global_1763254.f_9 = unk_0x57E9911EC23E2C54();
		if (iParam0 != -1)
		{
			Global_1763254.f_21 = iParam0;
		}
	}
	else
	{
		if (func_460() != func_75())
		{
			Global_1763183 = func_615(func_460());
			Global_1763183.f_1 = func_614(func_460());
		}
		Global_1763183.f_5 = unk_0x57E9911EC23E2C54();
		Global_1763183.f_13 = func_715();
		Global_1763183.f_15 = 0;
		if (func_461(1))
		{
			if (func_330() == func_460())
			{
				Global_1763183.f_15 = 1;
			}
		}
	}
}

int func_715()
{
	int iVar0;
	
	iVar0 = func_460();
	if (iVar0 != func_75())
	{
		return Global_1619421[iVar0 /*390*/].f_11.f_91;
	}
	return 0;
}

var func_716()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_562(unk_0xBE369BE1BC57A796(), iVar0))
		{
			unk_0xEB79FECD9022AAF0(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_717(bool bParam0)
{
	if (bParam0)
	{
		if (!func_180(unk_0xBE369BE1BC57A796(), 9))
		{
			if (func_370(unk_0xBE369BE1BC57A796()) != 0)
			{
				func_207(9);
			}
		}
	}
	else if (func_180(unk_0xBE369BE1BC57A796(), 9))
	{
		func_206(9);
	}
}

int func_718(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x21E7933CCC7B3724(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_719(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xEB79FECD9022AAF0(&Global_2313, 1);
			unk_0xEB79FECD9022AAF0(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_719(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam14, sParam15))
	{
	}
	func_729();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
			{
				return 0;
			}
		}
		if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_728() == 0)
	{
		func_726();
		return 0;
	}
	func_725(Global_16812);
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/]), sParam1, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_25 = iParam7;
	Global_101700.f_13100[Global_16812 /*104*/].f_26 = uParam8;
	Global_101700.f_13100[Global_16812 /*104*/].f_29 = uParam9;
	Global_101700.f_13100[Global_16812 /*104*/].f_30 = uParam12;
	Global_101700.f_13100[Global_16812 /*104*/].f_31 = uParam11;
	Global_101700.f_13100[Global_16812 /*104*/].f_28 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x48B8265059381CD0(Global_2313, 10))
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_724(0);
		func_724(2);
		func_724(1);
	}
	else
	{
		func_729();
		switch (iParam16)
		{
			case 3:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_724(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_724(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_724(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_724(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x48B8265059381CD0(Global_2313, 10))
		{
			Global_101700.f_13010[0 /*20*/].f_17 = 1;
			Global_101700.f_13010[1 /*20*/].f_17 = 1;
			Global_101700.f_13010[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101700.f_13010[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101700.f_13010[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101700.f_13010[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101700.f_13010[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_729();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_438())
			{
				unk_0x4988C48537D1AE4F(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_723(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_720(1);
			func_723(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_720(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_722(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_249(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
							{
								if (iVar1 == 14)
								{
									func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
											break;
										
										default:
											break;
									}
									func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_249(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_249(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_249(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_249(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_249(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_721(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_721(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(uParam7))
	{
		func_249(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(iParam8))
	{
		func_249(iParam8);
	}
	if (!unk_0x9C88EB7B70229335(iParam9))
	{
		func_249(iParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_249(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_249(iParam11);
	}
	unk_0x44983883E630A945();
}

bool func_722(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_723(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

void func_724(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101700.f_13010[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_725(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x0956E4296D9CC40A();
	uVar1 = unk_0x32883EAC7DC86C40();
	uVar2 = unk_0x80BC37C67CB292E5();
	uVar3 = unk_0x202B089E6328ABFA();
	uVar4 = unk_0xCD8338A83E1BCC14() + 1;
	uVar5 = unk_0x1BBFD9409EC2598C();
	Global_101700.f_13100[iParam0 /*104*/].f_18 = uVar0;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_726()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
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
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_727(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_24 = 1;
}

int func_727(struct<6> Param0, struct<6> Param6)
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

int func_728()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
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
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0 || Global_101700.f_13100[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_727(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_729()
{
	if (func_722(14))
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
		Global_14443 = func_730();
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

var func_730()
{
	func_731();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_731()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_734(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_733(unk_0x17B5CC8A8615737D());
			if (func_732(iVar0) && (!func_722(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_732(Global_101700.f_2095.f_539.f_3549))
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

bool func_732(int iParam0)
{
	return iParam0 < 3;
}

int func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_734(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_734(int iParam0)
{
	if (func_732(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_735()
{
	if (!unk_0x48B8265059381CD0(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1, 1))
	{
		if (!func_755())
		{
			if (Local_195.f_5 > 0 || unk_0x48B8265059381CD0(Local_195.f_1, 6))
			{
				func_209(1);
				unk_0xEB79FECD9022AAF0(&(Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_1), 1);
			}
		}
	}
}

int func_736(bool bParam0)
{
	if (func_737(1))
	{
		return 1;
	}
	if (Global_2494199.f_4710.f_21)
	{
		Global_2494199.f_4710.f_21 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_330() == func_75() || !func_835(func_330(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_737(bool bParam0)
{
	bool bVar0;
	
	if (!func_461(1))
	{
		bVar0 = false;
		if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55 != func_75())
		{
			if (func_835(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55, 0, 1))
			{
				if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_23 == 4 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_738(func_204(unk_0xBE369BE1BC57A796())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_545(31);
				if (func_391(func_204(unk_0xBE369BE1BC57A796())))
				{
					func_545(81);
				}
				if (unk_0x7268A1112372AA44(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55))
				{
					Global_1618005 = func_445(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55, -2, 0, 0);
					if (!func_329(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55))
					{
						func_545(88);
					}
				}
				else
				{
					Global_1618005 = 1;
				}
				Global_1617989 = { Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_738(int iParam0)
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

bool func_739()
{
	return func_223(unk_0xBE369BE1BC57A796());
}

void func_740(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 != iParam0)
	{
		func_754(-1);
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 = iParam0;
		if (func_753() != -1)
		{
			func_752(-1);
		}
		if (func_751() != -1)
		{
			func_750(-1);
		}
		func_749(iParam2);
		func_747(iParam0);
		if (!func_216(iParam0))
		{
			fVar0 = func_215(iParam0);
			if (fVar0 != 1f)
			{
				func_212(fVar0);
				unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 1);
			}
		}
		if (!func_219(iParam0) || iParam3)
		{
			if (func_217(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x6751FA44D6CA586D(0);
				if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
				{
					unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
					unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
				}
				unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 0);
			}
			else if (unk_0x21B9C652ECEE5A6D() < 5)
			{
				unk_0x000E46314C3A507F(1f);
				unk_0x6751FA44D6CA586D(5);
			}
		}
		if (func_378())
		{
			func_207(27);
		}
		if (bParam1)
		{
			if (!func_372())
			{
				func_209(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x48B8265059381CD0(Global_2494199.f_4418, 1) || unk_0x48B8265059381CD0(Global_2494199.f_4418, 4)) || unk_0x48B8265059381CD0(Global_2494199.f_4418, 0))
			{
				func_545(6);
			}
			func_746();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xFCBD7340FBF1FE46(3, 0);
			unk_0xFCBD7340FBF1FE46(5, 0);
		}
		if (func_125(unk_0xBE369BE1BC57A796()) && func_224(unk_0xBE369BE1BC57A796()))
		{
			unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_1), 8);
		}
		func_742();
		if (func_741(iParam0))
		{
			unk_0xFCBD7340FBF1FE46(3, 0);
			unk_0xFCBD7340FBF1FE46(5, 0);
			unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 6);
		}
	}
}

int func_741(int iParam0)
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

void func_742()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_745();
	iVar2 = func_76(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0C36F33B3F746611(iVar0);
		if (unk_0x7268A1112372AA44(iVar1))
		{
			if (func_304(iVar1, iVar2, 1) || func_743(iVar1, unk_0xBE369BE1BC57A796()))
			{
				unk_0x7621385B3CA2BA0B(unk_0xBE369BE1BC57A796(), iVar1, uVar3);
				unk_0x7621385B3CA2BA0B(iVar1, unk_0xBE369BE1BC57A796(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_743(int iParam0, int iParam1)
{
	if (func_268(iParam0, 1) && func_268(iParam1, 1))
	{
		return (func_744(iParam0) == func_76(iParam1) || func_744(iParam1) == func_76(iParam0));
	}
	return 0;
}

int func_744(int iParam0)
{
	if (func_268(iParam0, 1))
	{
		return Global_1619421[func_76(iParam0) /*390*/].f_11.f_323;
	}
	return func_75();
}

int func_745()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_460();
	if (iVar0 != func_75())
	{
		if (func_835(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x48B8265059381CD0(Global_1619421[iVar1 /*390*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_746()
{
	if (unk_0x48B8265059381CD0(Global_2494199.f_4418, 1))
	{
		unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 1);
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4418, 4))
	{
		unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 4);
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_4418, 6))
	{
		unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 6);
	}
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 0);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4418), 2);
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_511 = 0;
	if (Global_2494199.f_4420 > 0)
	{
		unk_0x6751FA44D6CA586D(Global_2494199.f_4420);
	}
	Global_2494199.f_4419 = 0;
}

void func_747(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_477(3763, -1, 0);
	iVar1 = func_748(iParam0);
	if (iVar1 != -1)
	{
		unk_0xEB79FECD9022AAF0(&iVar0, iVar1);
		func_475(3763, iVar0, -1, 1, 0);
	}
}

int func_748(int iParam0)
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

void func_749(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	if (Global_1619421[iVar0 /*390*/].f_11.f_172 != iParam0)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_172 = iParam0;
	}
}

void func_750(int iParam0)
{
	if (Global_2494199.f_4710.f_149 != iParam0)
	{
		Global_2494199.f_4710.f_149 = iParam0;
	}
}

int func_751()
{
	return Global_2494199.f_4710.f_149;
}

void func_752(int iParam0)
{
	if (Global_2494199.f_4710.f_148 != iParam0)
	{
		Global_2494199.f_4710.f_148 = iParam0;
	}
}

int func_753()
{
	return Global_2494199.f_4710.f_148;
}

void func_754(int iParam0)
{
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_31 = iParam0;
}

int func_755()
{
	int iVar0;
	
	iVar0 = func_756();
	if (iVar0 > -1)
	{
		if (Local_195.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_756()
{
	int iVar0;
	
	if (Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_3 != -1)
	{
		return Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_3;
	}
	if (func_223(unk_0xBE369BE1BC57A796()))
	{
		Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_3 = unk_0xCA1D9459B2CC7619();
		if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
		{
			func_717(1);
		}
	}
	else if (func_268(unk_0xBE369BE1BC57A796(), 1))
	{
		iVar0 = func_460();
		if (iVar0 != func_75())
		{
			if (unk_0xD54DE3C9493BFEC2(iVar0))
			{
				Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_3 = unk_0xB421DCBFBBE3286E(iVar0);
			}
		}
	}
	return Local_255[unk_0xCA1D9459B2CC7619() /*6*/].f_3;
}

int func_757()
{
	return Local_195.f_0;
}

int func_758(int iParam0)
{
	return Local_255[iParam0 /*6*/];
}

int func_759()
{
	bool bVar0;
	var uVar1;
	
	func_764(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_763())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	if (func_761(157))
	{
		if (!func_760())
		{
			return 1;
		}
	}
	if (func_761(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_213() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_213()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_760()
{
	return Global_2443134.f_577;
}

int func_761(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_762()
{
	return Global_2452525;
}

bool func_763()
{
	return Global_2443134.f_572;
}

void func_764(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_765(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_765(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_835(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_766(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_766(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_767()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_768()
{
	if (!unk_0x48B8265059381CD0(iLocal_448, 6))
	{
		if (unk_0x63C468D583002D23())
		{
			if (func_755() || func_379())
			{
				func_604(0, 4, 0, 0, -1, -1, -1, -1);
				unk_0xEB79FECD9022AAF0(&iLocal_448, 6);
			}
		}
	}
	func_817(3, 3, -1, -1082130432);
	if (unk_0x63C468D583002D23())
	{
		if (unk_0xCA1D9459B2CC7619() == Local_195.f_33)
		{
			if (iLocal_750 >= 0)
			{
				func_690(&Local_461);
				func_689(&Local_461);
			}
		}
	}
	if (unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D()) == iLocal_454)
	{
		unk_0x3BB70315907D9456(unk_0x17B5CC8A8615737D(), uLocal_456);
	}
	if (iLocal_750 > 0)
	{
		if (unk_0x48B8265059381CD0(Local_195.f_1, 3))
		{
			func_682(unk_0xBE369BE1BC57A796(), 1, 0);
		}
	}
	func_816();
	if (Local_195.f_34 != -1)
	{
		if (unk_0x48B8265059381CD0(iLocal_448, 5))
		{
			if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(Local_195.f_34)))
			{
				func_408(unk_0x0C36F33B3F746611(Local_195.f_34), 432, 0);
				func_406(unk_0x0C36F33B3F746611(Local_195.f_34), 1, 0);
				func_405(unk_0x0C36F33B3F746611(Local_195.f_34), 0, 0);
				func_404(unk_0x0C36F33B3F746611(Local_195.f_34), 0);
				func_403(unk_0x0C36F33B3F746611(Local_195.f_34), Global_262145.f_10975, 0);
			}
		}
	}
	if (func_185(0))
	{
		func_184(0);
	}
	if (unk_0x48B8265059381CD0(iLocal_449, 0))
	{
		if (!unk_0x48B8265059381CD0(iLocal_449, 2))
		{
			unk_0x589451489CB70B8C("DisableFlightMusic", 0);
			unk_0x589451489CB70B8C("WantedMusicDisabled", 0);
			unk_0x5BE53482EFD49141("BG_SIGHTSEER_STOP");
		}
	}
	unk_0xEB79FECD9022AAF0(&iLocal_449, 8);
	func_181();
	unk_0x7FB3512FE15142C6(1);
	func_717(0);
	func_770(1, 0);
	unk_0x6751FA44D6CA586D(5);
	unk_0x21E7933CCC7B3724(&Global_2595318, 21);
	unk_0x21E7933CCC7B3724(&Global_2595318, 20);
	func_769();
}

void func_769()
{
	unk_0x921053BAF754303D();
}

void func_770(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1342917.f_1.f_108 != 0)
	{
		Global_1342917.f_1.f_108 = 0;
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 167 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 168)
	{
		func_814();
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 4);
	}
	if ((func_493() && iParam1 != 0) && Global_262145.f_15095)
	{
		if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 190 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 192)
		{
			func_795(unk_0xBE369BE1BC57A796(), iParam1, Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 192);
		}
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 164 || Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 == 208)
	{
		unk_0xFCBD7340FBF1FE46(3, 1);
		unk_0xFCBD7340FBF1FE46(5, 1);
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 != -1)
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_32 = -1;
		if (!unk_0x48B8265059381CD0(Global_1574371.f_1, 14) && !func_125(unk_0xBE369BE1BC57A796()))
		{
			func_209(0);
		}
	}
	else if (func_793(unk_0xBE369BE1BC57A796()) != -1)
	{
		func_754(-1);
	}
	func_792(func_75());
	if (func_185(16))
	{
		func_184(16);
	}
	func_788(0);
	func_749(-1);
	func_787();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_786(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_784(iVar1);
		iVar1++;
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 0))
	{
		unk_0x000E46314C3A507F(1f);
		unk_0x6751FA44D6CA586D(5);
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 0);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 5))
	{
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 5);
	}
	iVar2 = func_397();
	if ((func_301(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_783(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_426(iVar2))
	{
		func_779(-1, 1);
	}
	else if ((func_396(iVar2) || func_778(iVar2)) || func_777(iVar2))
	{
	}
	else
	{
		func_779(-1, 1);
	}
	func_206(19);
	func_206(20);
	func_206(21);
	func_206(22);
	func_206(27);
	func_184(3);
	func_184(4);
	func_184(7);
	func_776();
	if (func_224(unk_0xBE369BE1BC57A796()))
	{
		func_717(0);
	}
	func_206(29);
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55 = func_75();
	if (Global_2494199.f_4710.f_21 != 0)
	{
		Global_2494199.f_4710.f_21 = 0;
	}
	if (bParam0)
	{
		func_186();
	}
	if (!func_125(unk_0xBE369BE1BC57A796()))
	{
		func_205();
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 1);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 6))
	{
		unk_0xFCBD7340FBF1FE46(3, 1);
		unk_0xFCBD7340FBF1FE46(5, 1);
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 6);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 7))
	{
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 7);
	}
	if (unk_0x48B8265059381CD0(Global_1763174.f_3, 8))
	{
		func_775("IMPEXP_SELFDES", 0);
		func_773("IMPEXP_SELFDES");
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 8);
	}
	func_771(iVar2, 0);
}

void func_771(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x48B8265059381CD0(Global_1763174.f_3, 9))
		{
			unk_0x4A5D4AD0FE6ACF73(func_772(iParam0));
			unk_0xEB79FECD9022AAF0(&(Global_1763174.f_3), 9);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_1763174.f_3, 9))
	{
		unk_0xB8CAC5F3774894A1(func_772(iParam0));
		unk_0x21E7933CCC7B3724(&(Global_1763174.f_3), 9);
	}
}

char* func_772(int iParam0)
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

void func_773(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xD3115E7F7876D6E6(&(Global_101700.f_13100[iVar0 /*104*/])))
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar0 /*104*/]), sParam0))
			{
				if (Global_101700.f_13100[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_729();
					Global_101700.f_13100[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_774(iVar0))
					{
					}
					else
					{
						Global_101700.f_13100[iVar0 /*104*/].f_24 = 0;
						Global_101700.f_13100[iVar0 /*104*/].f_28 = 0;
						Global_101700.f_13100[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x20F0B569F9F3A02A(Global_101700.f_13100[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_774(int iParam0)
{
	if ((Global_101700.f_13100[iParam0 /*104*/].f_99[0] == 1 || Global_101700.f_13100[iParam0 /*104*/].f_99[1] == 1) || Global_101700.f_13100[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_775(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xD3115E7F7876D6E6(&(Global_101700.f_13100[iVar0 /*104*/])))
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_13100[iVar0 /*104*/]), sParam0))
			{
				if (Global_101700.f_13100[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_101700.f_13100[iVar0 /*104*/].f_24 = 1;
				if (Global_101700.f_13100[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_101700.f_13010[0 /*20*/].f_17 = 0;
					}
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_101700.f_13010[1 /*20*/].f_17 = 0;
					}
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_101700.f_13010[2 /*20*/].f_17 = 0;
					}
					if (Global_101700.f_13100[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_101700.f_13010[3 /*20*/].f_17 = 0;
					}
					Global_101700.f_13100[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_101700.f_13100[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_776()
{
	if (func_227(unk_0xBE369BE1BC57A796()))
	{
		func_206(25);
	}
}

int func_777(int iParam0)
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

int func_778(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_779(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_397();
	}
	if (iParam0 > 0)
	{
		if (func_460() != func_75())
		{
			if (func_782(unk_0xBE369BE1BC57A796()) == unk_0xBE369BE1BC57A796())
			{
				Global_2482258.f_93[func_781(iParam0)] = 1;
			}
		}
		iVar0 = func_781(159);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(157);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(148);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(164);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(142);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(152);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(166);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(170);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(173);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(179);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(200);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(201);
		if (func_780(iVar0, Global_262145.f_11226, bParam1))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(182);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(183);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(185);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(186);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(180);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(195);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(197);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(198);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(207);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(208);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(209);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(214);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(215);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(216);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(217);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(218);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(219);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(220);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(221);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_780(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_180(unk_0xBE369BE1BC57A796(), 19) && !func_180(unk_0xBE369BE1BC57A796(), 20)) && !func_180(unk_0xBE369BE1BC57A796(), 9))
		{
			return 0;
		}
	}
	if (Global_2482258.f_93[iParam0] == 1 && func_9(&(Global_2482258[iParam0 /*2*/])))
	{
		if (func_639(&(Global_2482258[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2482258.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_781(int iParam0)
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

int func_782(int iParam0)
{
	return Global_1619421[iParam0 /*390*/].f_11.f_34;
}

void func_783(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_397();
	}
	if (iParam0 > 0)
	{
		if (func_460() != func_75())
		{
			Global_2482258.f_93[func_781(iParam0)] = 1;
		}
		iVar0 = func_781(155);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(163);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(160);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(153);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(162);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(154);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(171);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(172);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(199);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(194);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(193);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(210);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(205);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(189);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_781(211);
		if (func_780(iVar0, Global_262145.f_11227, 0))
		{
			func_242(&(Global_2482258[iVar0 /*2*/]));
			func_8(&(Global_2482258[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_784(int iParam0)
{
	if (!func_173(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_228[iParam0 /*3*/], func_785(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_228[iParam0 /*3*/] = { func_785() };
	}
	if (!func_173(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_215[iParam0 /*3*/], func_785(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_215[iParam0 /*3*/] = { func_785() };
	}
}

Vector3 func_785()
{
	struct<3> Var0;
	
	return Var0;
}

void func_786(int iParam0)
{
	if (!func_173(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_143[iParam0 /*3*/], func_785(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_143[iParam0 /*3*/] = { func_785() };
	}
	if (!func_173(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_118[iParam0 /*3*/], func_785(), 0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_118[iParam0 /*3*/] = { func_785() };
	}
}

void func_787()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573825 = { Var0 };
	Global_1573825.f_13 = func_75();
	if (unk_0x48B8265059381CD0(Global_1573332, 3))
	{
		unk_0x21E7933CCC7B3724(&Global_1573332, 3);
	}
}

void func_788(bool bParam0)
{
	if (bParam0)
	{
		if (!func_791(unk_0xBE369BE1BC57A796(), 14))
		{
			func_790(14);
		}
	}
	else if (func_791(unk_0xBE369BE1BC57A796(), 14))
	{
		func_789(14);
	}
}

void func_789(int iParam0)
{
	unk_0x21E7933CCC7B3724(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_5), iParam0);
}

void func_790(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_5), iParam0);
}

bool func_791(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_5, iParam1);
}

void func_792(int iParam0)
{
	if (func_223(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0xBE369BE1BC57A796() != iParam0)
		{
			if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_323 != iParam0)
			{
				Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_323 = iParam0;
				if (iParam0 != func_75())
				{
				}
			}
		}
	}
}

int func_793(int iParam0)
{
	if (func_794(iParam0, 0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_31;
	}
	return -1;
}

int func_794(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_31 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_795(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (func_562(iParam0, iParam1) && func_813(iParam0, iParam1))
	{
		iVar0 = func_561(iParam0, iParam1);
		func_799(iVar0, bParam2);
		func_796(iVar0, 1);
	}
}

void func_796(int iParam0, int iParam1)
{
	func_797(func_798(iParam0), iParam1, -1, 1);
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_6 = iParam1;
}

int func_797(int iParam0, var uParam1, int iParam2, int iParam3)
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
		iParam2 = func_142();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_798(int iParam0)
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
		
		default:
	}
	return 7628;
}

void func_799(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_812(unk_0xBE369BE1BC57A796(), iParam0);
	if (!bParam1)
	{
		func_811(iParam0, 0);
	}
	if (bParam1)
	{
		iVar0 = Global_2482243[iParam0];
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_1764563 = -1;
		func_810(iParam0, 0);
	}
	else if (func_805(iParam0))
	{
		iVar0 = func_804(iVar2);
		iVar3 = func_610(unk_0xBE369BE1BC57A796(), iVar2);
		iVar4 = func_803(iVar2);
		iVar5 = func_804(iVar2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		func_811(iParam0, iVar0);
	}
	else
	{
		if (func_802(unk_0xBE369BE1BC57A796(), iVar2) > 0)
		{
			func_801(iParam0, (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_2 - (func_803(iVar2) / 2)));
		}
		iVar0 = (func_804(iVar2) / func_802(unk_0xBE369BE1BC57A796(), iVar2) + 1);
	}
	if (!bVar1)
	{
	}
	func_800(unk_0xBE369BE1BC57A796(), iVar2, iVar0);
}

void func_800(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (func_563(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

void func_801(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_2)
	{
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_152[iParam0 /*11*/].f_2 = iParam1;
	}
}

int func_802(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_563(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/] == iParam1)
			{
				return Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_803(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_564(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15066;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15071;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15065;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15070;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15064;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15069;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15062;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15067;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15063;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15068;
			}
			break;
	}
	return uVar0;
}

int func_804(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_564(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15047;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15056);
			}
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15061);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15048;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15055);
			}
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15060);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15049;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15054);
			}
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15059);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15050;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15052);
			}
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15057);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15051;
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15053);
			}
			if (func_560(unk_0xBE369BE1BC57A796(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15058);
			}
			break;
	}
	return iVar0;
}

bool func_805(int iParam0)
{
	return func_806(func_809(iParam0), -1, -1);
}

int func_806(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar1 = func_808(iParam0, iParam1);
	uVar2 = func_807(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x083FFE917EBA1560(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_807(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_808(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_142();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_809(int iParam0)
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
		
		default:
	}
	return 9416;
}

void func_810(int iParam0, int iParam1)
{
	func_797(func_809(iParam0), iParam1, -1, 1);
}

void func_811(int iParam0, int iParam1)
{
	Global_2482243[iParam0] = iParam1;
}

int func_812(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_563(Global_1591201[iParam0 /*602*/].f_258.f_152[iParam1 /*11*/]))
	{
		uVar0 = Global_1591201[iParam0 /*602*/].f_258.f_152[iParam1 /*11*/];
	}
	return uVar0;
}

int func_813(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_562(iParam0, iParam1))
	{
		iVar0 = func_561(iParam0, iParam1);
		if (Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_4 > 0 && Global_1591201[iParam0 /*602*/].f_258.f_152[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_814()
{
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 28);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 29);
	func_815(24);
}

void func_815(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

void func_816()
{
	unk_0x111E99E32A85B908(uLocal_455);
	unk_0x111E99E32A85B908(iLocal_454);
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x6AF6B39BFDB53CB5();
	Var1.f_0 = Global_1763183;
	Var1.f_1 = Global_1763183.f_1;
	Var1.f_2 = Global_1763183.f_2;
	Var1.f_3 = Global_1763183.f_3;
	Var1.f_4 = Global_1763183.f_4;
	Var1.f_5 = Global_1763183.f_5;
	Var1.f_6 = Global_1763183.f_6;
	Var1.f_7 = Global_1763183.f_7;
	Var1.f_8 = Global_1763183.f_8;
	Var1.f_9 = Global_1763183.f_9;
	Var1.f_10 = Global_1763183.f_10;
	Var1.f_11 = Global_1763183.f_11;
	Var1.f_12 = Global_1763183.f_12;
	Var1.f_13 = Global_1763183.f_14;
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x6A7B0D91FD88D9EE(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1763183.f_15;
			Var15.f_15 = Global_1763183.f_16;
			Var15.f_16 = Global_1763183.f_17;
			unk_0xCA09F3B5196EEBF4(&Var15);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1763183.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0xF93B0EEF06556607(&Var32);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1763183.f_15;
			Var49.f_15 = iParam0;
			unk_0x23DF6C5DD10D1DB8(&Var49);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1763183.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0x1E61E15D6754D09D(&Var65);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1763183.f_15;
			Var82.f_15 = iParam0;
			unk_0x5434EB23804233CF(&Var82);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1763183.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xEA355406E8089623(&Var98);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1763183.f_15;
			unk_0xCE9166AA95B60633(&Var116);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1763183.f_15;
			unk_0x0A36ABA3A50F7868(&Var134);
		}
		else if (unk_0x6A7B0D91FD88D9EE(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1763183.f_15;
			unk_0xA1072E4C0F8569F5(&Var153);
		}
	}
	func_818();
}

void func_818()
{
	struct<18> Var0;
	
	Global_1763183 = { Var0 };
}

void func_819(struct<20> Param0)
{
	func_833(func_834(Param0.f_0), Param0);
	unk_0x79AA4F6EE2078BCD(3);
	func_831(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_195, 60);
	unk_0x0C3BA36587E6FBEE(&Local_255, 193);
	if (!func_830())
	{
		func_768();
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		if (unk_0x415DF132F15085E8())
		{
		}
		func_829();
		func_820(0, 0);
		Local_255[unk_0xCA1D9459B2CC7619() /*6*/] = 0;
	}
	else
	{
		func_768();
	}
}

void func_820(int iParam0, int iParam1)
{
	func_828();
	func_824(1);
	if ((iParam0 != 0 && unk_0x7268A1112372AA44(iParam1)) && func_823(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xEB79FECD9022AAF0(&Global_1763169, 0);
				break;
			}
	}
	if (!func_739() && !func_268(unk_0xBE369BE1BC57A796(), 1))
	{
		if (func_375())
		{
			func_208(3);
		}
		func_208(4);
	}
	if (func_461(0))
	{
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_55 = func_460();
	}
	if (func_391(iParam0))
	{
		func_608();
		Global_1763201.f_18 = func_822(func_330());
	}
	else if (func_395(func_793(unk_0xBE369BE1BC57A796())))
	{
		func_606();
		Global_1763254.f_18 = func_822(func_330());
	}
	func_821();
}

void func_821()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1342917.f_527[iVar0 /*49*/].f_1 = func_75();
		Global_1342917.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_822(int iParam0)
{
	if (func_268(iParam0, 1))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_290;
	}
	return -1;
}

int func_823(int iParam0, bool bParam1)
{
	return func_304(unk_0xBE369BE1BC57A796(), iParam0, bParam1);
}

void func_824(bool bParam0)
{
	int iVar0;
	
	func_815(33);
	func_815(34);
	func_815(35);
	func_815(36);
	func_815(37);
	func_815(38);
	func_815(39);
	func_815(40);
	func_815(43);
	func_815(41);
	func_815(54);
	func_815(42);
	func_815(47);
	func_827(23);
	func_827(24);
	func_815(92);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 2);
	func_826();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494199.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_825(3))
	{
		func_827(3);
	}
	else if (func_825(4))
	{
		func_827(4);
	}
	else if (func_825(5))
	{
		func_827(5);
	}
	else if (func_825(6))
	{
		func_827(6);
	}
	else if (func_825(7))
	{
		func_827(7);
	}
	else if (((((((((((((((((func_825(0) || func_825(1)) || func_825(2)) || func_825(8)) || func_825(9)) || func_825(10)) || func_825(11)) || func_825(12)) || func_825(13)) || func_825(14)) || func_825(15)) || func_825(16)) || func_825(17)) || func_825(18)) || func_825(19)) || func_825(20)) || func_825(21)) || func_825(22))
	{
		func_827(8);
		func_827(0);
		func_827(1);
		func_827(2);
		func_827(9);
		func_827(10);
		func_827(11);
		func_827(12);
		func_827(13);
		func_827(14);
		func_827(15);
		func_827(16);
		func_827(17);
		func_827(18);
		func_827(19);
		func_827(20);
		func_827(21);
		func_827(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2494199.f_4710.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_825(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x48B8265059381CD0(Global_2494199.f_4710.f_12[iVar0], iVar1);
}

void func_826()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2494199.f_4710.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_12[iVar0]), iVar1);
}

void func_828()
{
	struct<14> Var0;
	
	Global_1763183 = { Var0 };
	Global_1763183.f_14 = 0;
	Global_1763183.f_15 = 0;
}

void func_829()
{
}

int func_830()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
		{
			return 1;
		}
		if (func_763())
		{
			return 0;
		}
		if (func_761(155))
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

int func_831(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_769();
			}
			else
			{
				return 0;
			}
		}
		if (!func_832())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x63C468D583002D23())
				{
					if (!bParam2)
					{
						func_769();
					}
					else
					{
						return 0;
					}
				}
				if (func_763())
				{
					if (!bParam2)
					{
						func_769();
					}
					else
					{
						return 0;
					}
				}
				if (func_761(155))
				{
					if (!bParam2)
					{
						func_769();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x9AD8CE0019487D7C())
			{
				if (!bParam2)
				{
					func_769();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			if (!bParam2)
			{
				func_769();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x9AD8CE0019487D7C())
	{
		if (!bParam2)
		{
			func_769();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_832()
{
	return Global_1315210;
}

void func_833(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_769();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
}

int func_834(int iParam0)
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

int func_835(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

