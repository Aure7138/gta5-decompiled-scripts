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
	if (unk_0xA86CA03D9749EEB3() && func_801(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_786(ScriptParam_0);
	}
	else
	{
		func_746();
	}
	while (true)
	{
		func_745();
		if (func_737())
		{
			func_746();
		}
		Global_1750569.f_2 = Local_195.f_58;
		Global_1750569.f_3 = Local_195.f_59;
		switch (func_736(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_735() == 1)
				{
					func_734();
					if (func_733())
					{
						func_719(142, 1, -1, 1);
						unk_0xCF03D9C8A7F1577C(3);
						if (!func_718())
						{
							unk_0xD746083CA177FD95(unk_0x0C1D3C552325765B(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_719(142, 0, -1, 1);
						unk_0xD746083CA177FD95(unk_0x0C1D3C552325765B(), joaat("pickup_portable_package"), 0);
					}
					Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 1;
				}
				else if (func_735() == 4)
				{
					Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_715())
				{
					Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 2;
				}
				if (func_735() == 1)
				{
					func_373();
					func_370();
					if (func_733() || func_369())
					{
						func_226(&(Global_1332731.f_527), &Global_1332731, 24, &(Global_1332731.f_1), &(Global_1332731.f_110), -1, 0);
					}
					func_176();
				}
				else if (func_735() == 4)
				{
					Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 3;
				}
				func_173();
				break;
			
			case 3:
				func_172(&(Local_195.f_49));
				if (func_171(&(Local_195.f_49)))
				{
					Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 4;
			
			case 4:
				func_746();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_735())
			{
				case 0:
					if (func_164())
					{
						unk_0xB21EB307350F5CA1(&(Local_195.f_58), &(Local_195.f_59));
						Local_195.f_0 = 1;
						Local_195.f_33 = unk_0x848AF823A8EA3C62();
						Local_195.f_34 = unk_0x0C1D3C552325765B();
						func_719(142, 1, -1, 1);
					}
					break;
				
				case 1:
					func_162();
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
	if (Global_2482149.f_4698.f_17)
	{
		Global_2482149.f_4698.f_17 = 0;
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
	if (unk_0x08BA6DD398CA197C(Local_195.f_1, 2))
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
			if (unk_0x08BA6DD398CA197C(Local_195.f_1, 1))
			{
				Local_195.f_32 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_195.f_1, 3))
			{
				Local_195.f_32 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_195.f_1, 4))
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
		if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 6))
		{
			if (!func_9(&(Local_195.f_53)))
			{
				func_8(&(Local_195.f_53), 0, 0);
			}
			else if (func_6(&(Local_195.f_53), func_7(), 0))
			{
				unk_0x88B0F0DC270164B7(&(Local_195.f_1), 6);
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
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
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
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
		unk_0x88B0F0DC270164B7(&(Local_195.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_10934;
}

void func_12()
{
	int iVar0;
	
	if (Local_195.f_33 < 0)
	{
		return;
	}
	if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(Local_195.f_33)))
	{
		if (Local_255[Local_195.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_255[Local_195.f_33 /*6*/].f_4 - 1);
			if (!unk_0x08BA6DD398CA197C(Local_195.f_4, iVar0))
			{
				Local_195.f_36 = iVar0;
				if (func_13())
				{
					unk_0x88B0F0DC270164B7(&(Local_195.f_4), iVar0);
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
	if (!unk_0x3CF373660FCFAFCE(Local_195.f_3))
	{
		unk_0x491067A8E906F22D(iVar0);
		if (unk_0x2C1B5A0D3E233FC3(iVar0))
		{
			if (unk_0x3F3BAB8BAD281B17(1))
			{
				Var27 = { func_161() };
				if (func_14(Var27, 5f, &Local_457, &uLocal_460, Var1))
				{
					Local_195.f_3 = unk_0xDA9308553DFB8112(unk_0x6EAE5EC14334B4B0(joaat("pickup_portable_package"), Local_457, 1, iVar0));
					unk_0xB8EF5851A40C2867(unk_0x9C16D1E97E386176(Local_195.f_3), Local_457 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x2C07692AA3545079(iVar0);
					unk_0x39800A40136ECF37(unk_0x9C16D1E97E386176(Local_195.f_3), 1);
					unk_0x798BDF3C5413B459(unk_0x9C16D1E97E386176(Local_195.f_3), 1);
					unk_0xF53BC09A146F0975(unk_0x9C16D1E97E386176(Local_195.f_3), 1);
					unk_0xB16B53F6FE1ADDB6(unk_0x9C16D1E97E386176(Local_195.f_3), 0);
					unk_0x64EB89F75844C12B(unk_0x9C16D1E97E386176(Local_195.f_3));
					func_8(&(Local_195.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_195.f_3))
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
	bool bVar83;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404993.f_2017 == *uParam0 || !Global_2404993.f_2017.f_1 == uParam0->f_1) || !Global_2404993.f_2017.f_2 == uParam0->f_2) || !Global_2404993.f_2020 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404993.f_2031 == uParam0->f_8 || !Global_2404993.f_2031.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_2031.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_2034 == uParam0->f_11) || !Global_2404993.f_2034.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_2034.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404993.f_2031 == uParam0->f_8 || !Global_2404993.f_2031.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_2031.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_2034 == uParam0->f_11) || !Global_2404993.f_2034.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_2034.f_2 == uParam0->f_11.f_2) || !Global_2404993.f_2037 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404993.f_2015 == 1)
		{
			if (unk_0x96549B1C2E196049(Global_2404993.f_2024))
			{
				if (Global_2404993.f_2024 == unk_0xEAE20F1125B83888())
				{
					if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) < func_160(0))
					{
						return 0;
					}
				}
				else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) < func_160(0))
				{
					return 0;
				}
			}
			unk_0x58F8817BD61C43C0();
			unk_0xB0C9486E4E778206();
			func_159();
		}
		Global_2404993.f_2015 = 0;
	}
	else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) > func_160(0))
	{
		Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
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
	unk_0x33E1C85069157293(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404993.f_2015)
	{
		unk_0x58F8817BD61C43C0();
		unk_0xB0C9486E4E778206();
		func_159();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_158(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xDBD26B3B95431588())
		{
			Global_2404993.f_2038 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404993.f_2017 = { *uParam0 };
					Global_2404993.f_2020 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404993.f_2031 = { uParam0->f_8 };
					Global_2404993.f_2034 = { uParam0->f_11 };
					Global_2404993.f_2037 = 0f;
					Global_2404993.f_2017 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404993.f_2031 = { uParam0->f_8 };
					Global_2404993.f_2034 = { uParam0->f_11 };
					Global_2404993.f_2037 = uParam0->f_14;
					Global_2404993.f_2017 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_157(Var8.f_0, Var8.f_1);
			}
			Global_2404993.f_2016 = 1;
			Global_2404993.f_2015 = 1;
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2021 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2024 = unk_0xEAE20F1125B83888();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404993.f_2015)
	{
		if (Global_2404993.f_2016 == 1)
		{
			if (unk_0x34302C240EA1F13B(fVar4, fVar5, fVar6, fVar7) || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 5000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
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
					func_138(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_137(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404993.f_2016 = 9;
				}
				else
				{
					Global_2404993.f_2016 = 2;
				}
			}
		}
		if (Global_2404993.f_2016 == 2)
		{
			if ((unk_0x6C8BF826062EB578(Var11, Var14) || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 15000) || unk_0x53F8FDAE3EB94B2D(Var11, Var14) == 0)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (uParam0->f_5 && !func_134(unk_0x0C1D3C552325765B(), 0))
				{
					Global_2404993.f_2016 = 3;
				}
				else
				{
					Global_2404993.f_2016 = 4;
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2026) > 7000)
			{
				func_133(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404993.f_2016 == 3)
		{
			if (func_132() || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 10000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 4;
			}
		}
		if (Global_2404993.f_2016 == 4)
		{
			if (unk_0xDBD26B3B95431588())
			{
				unk_0x58F8817BD61C43C0();
				unk_0xB0C9486E4E778206();
			}
			else
			{
				iVar0 = 0;
				func_126();
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
					if (!unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
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
							if (unk_0x0DE79F7115B066B5(unk_0x0C1D3C552325765B(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
						
						case 1:
							func_125(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xFA59F0132C359136(unk_0x0C1D3C552325765B(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
						
						case 2:
							if (unk_0xFA59F0132C359136(unk_0x0C1D3C552325765B(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
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
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					Global_2404993.f_2016 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xA81B36E128305692(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_125(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x20C8B26DF4377161(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x20C8B26DF4377161(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404993.f_2016 == 5)
		{
			if (func_59(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404993.f_2042.f_5)
				{
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					Global_2404993.f_2016 = 6;
				}
				else
				{
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404993.f_2016 = 9;
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 20000)
			{
				unk_0x58F8817BD61C43C0();
				unk_0xB0C9486E4E778206();
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 8;
			}
		}
		if (Global_2404993.f_2016 == 6)
		{
			iVar0 = 0;
			Global_2404993.f_2042.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_58(uParam0->f_4))
				{
					if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_57(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var8)))
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
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2016 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xA81B36E128305692(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_125(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x20C8B26DF4377161(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x20C8B26DF4377161(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404993.f_2016 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2404993.f_2153[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_137(Global_2404993.f_2153[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_55(Global_2404993.f_2153[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xDFC5B758BDC9546F(Global_2404993.f_2153[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
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
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404993.f_2016 = 9;
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 20000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 8;
			}
		}
		if (Global_2404993.f_2016 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404993.f_474))
				{
				}
			}
			else if (Global_2404993.f_2042.f_2)
			{
				func_16(uParam2, &(Global_2404993.f_2042.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2404993.f_2017 };
				func_18(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2016 = 9;
		}
		if (Global_2404993.f_2016 == 9)
		{
			Global_2404993.f_2015 = 0;
			unk_0x58F8817BD61C43C0();
			unk_0xB0C9486E4E778206();
			func_159();
			return 1;
		}
		Global_2404993.f_2021 = unk_0x4B50AAB32FBE0483();
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
						if (func_58(uParam5->f_4) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
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
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = { uParam6->f_13[iVar62 /*3*/] };
			Var4.f_45[iVar62] = uParam6->f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_138(&Var0, &uVar3, &Var4);
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
					if (unk_0x776447CD667051CD(Var0, &uVar61, 0))
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
				if (unk_0x776447CD667051CD(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404993.f_614 = 1;
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
			return unk_0xDFC5B758BDC9546F(Param0, Param4, Param7, fParam10, 0, 1);
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
	if (unk_0x1F69106BA5C5442C(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_36(Global_2404993.f_491, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2410131[iVar4])
	{
		if (func_26(Var1, &(Global_2409302[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409302[iVar4 /*92*/][iVar0 /*7*/], Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410131[8])
	{
		if (func_26(Var1, &(Global_2409302[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_23(&Var1, Global_2409302[iVar4 /*92*/][iVar0 /*7*/], Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_27(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410141[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410141[1])
	{
		if (Param0.f_0 < Global_2410145[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410141[2])
	{
		if (Param0.f_0 < Global_2410145[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410145[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410145[3])
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
	
	if (func_33(unk_0x0C1D3C552325765B(), 1))
	{
		if (Global_1626500.f_41581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_41581)
			{
				if (Global_1626500.f_41582[iVar0 /*59*/].f_7 != 0)
				{
					if (func_29(Param0, Global_1626500.f_41582[iVar0 /*59*/], Global_1626500.f_41582[iVar0 /*59*/].f_6, Global_1626500.f_41582[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_39362 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_39362)
			{
				if (Global_1626500.f_39365[iVar0 /*90*/].f_16 != 0)
				{
					if (func_29(Param0, Global_1626500.f_39365[iVar0 /*90*/], Global_1626500.f_39365[iVar0 /*90*/].f_3, Global_1626500.f_39365[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_53608 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_53608)
			{
				if (Global_1626500.f_53612[iVar0 /*128*/].f_12 != 0)
				{
					if (func_29(Param0, Global_1626500.f_53612[iVar0 /*128*/], Global_1626500.f_53612[iVar0 /*128*/].f_3, Global_1626500.f_53612[iVar0 /*128*/].f_12, 0.5f))
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
		fVar9 = unk_0x7466327978A6A24C((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7466327978A6A24C((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7466327978A6A24C((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xDFC5B758BDC9546F(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_30(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x81972CB541487AFD(iParam0))
	{
		unk_0xA27A0E75635DD922(iParam0, fParam1, fParam2);
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
	if (Global_1588660[iParam0 /*532*/] == -1)
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
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
			func_31(&Var0, 0f, 0f, unk_0xF25F352E34274C58(0f, 360f));
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_2255[iVar0 /*3*/]) < fParam3)
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
			func_41(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_44(Var2, &uVar1) || func_40(Var2))
			{
				Var2 = { *uParam0 };
				func_41(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2404993.f_559 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_556);
		if (fVar0 < Global_2404993.f_559)
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
				*uParam0 = { func_43(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_37(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), fParam2, bParam3, 0);
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
		unk_0x3E1E1E768BE3A2F4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_137(Var1, Param3, fParam9, 0, 0))
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
				if (!unk_0xDFC5B758BDC9546F(Var1, Param3, Param6, fParam9, 0, 1))
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
		if (Global_2404993.f_353[iVar0 /*12*/].f_9 == 1)
		{
			if (func_45(Param0, &(Global_2404993.f_353[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_137(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_2253) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_55(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404993.f_353[iVar0 /*12*/].f_9)
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
		if (Global_2409165[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409165[iVar0 /*17*/].f_16))
			{
				if (func_45(*uParam0, &(Global_2409165[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409165[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409165[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_41(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_47(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_41(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!Global_2404993.f_494)
	{
		if (!Global_2404993.f_43.f_309)
		{
			if (!func_52(unk_0x0C1D3C552325765B(), 1))
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
					Var1 = { func_49(&(Global_2404993.f_43[iVar0 /*12*/])) };
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
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_45(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_45(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
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
	if (Global_1312443 != 0)
	{
		return func_53(iParam0) != 0;
	}
	return func_33(iParam0, bParam1);
}

int func_53(int iParam0)
{
	if (func_801(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
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
	if (Global_2404993.f_1813 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1813)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404993.f_1814[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404993.f_1814[iVar1 /*4*/] };
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
	
	if (Global_2404993.f_2042.f_1 == 0 && Global_2404993.f_2042 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x0F504DBF486342DE(&(Global_2404993.f_2042.f_1)))
			{
				case 0:
					func_123(uParam1, uParam2);
					if (!Global_2404993.f_2042.f_2)
					{
						if (uParam2->f_7 && Global_2404993.f_523.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
							}
							if (uParam1->f_5 && func_17(Global_2404993.f_474))
							{
								if (!Global_2404993.f_2042.f_5)
								{
									Global_2404993.f_2042.f_5 = 1;
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
							uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_123(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xDBD26B3B95431588())
		{
			if (!unk_0x6538AB9B28AE0946())
			{
				if (unk_0x7C086C5B65728A7E())
				{
					func_123(uParam1, uParam2);
					Global_2404993.f_2042.f_1 = unk_0xBF656D9895240AF1();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xB0C9486E4E778206();
				func_123(uParam1, uParam2);
				if (!Global_2404993.f_2042.f_2)
				{
					Global_2404993.f_2042.f_5 = 1;
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
		func_120(Global_2404993.f_523, &(Global_2404993.f_2042.f_34), &(Global_2404993.f_2042.f_67));
	}
	if (uParam2->f_7 && !Global_2404993.f_2042.f_4)
	{
		Global_2404993.f_2042.f_4 = 1;
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
	if (Global_2404993.f_2042.f_1 > 0 || Global_2404993.f_2042 > 0)
	{
		if (uParam1->f_5 || unk_0xDBD26B3B95431588())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404993.f_2042.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404993.f_2042.f_3)
					{
						iVar4 = Global_2404993.f_2042.f_3 + 1;
					}
					if (iVar4 > (Global_2404993.f_2042.f_1 - 1))
					{
						iVar4 = (Global_2404993.f_2042.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x6978871734C62314(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x91E05C60C6CEAD98(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xDE715EE1001849E6(iVar4);
					}
					else
					{
						unk_0xCACFF8D05D40E632(iVar4, &iVar5);
					}
					func_67(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404993.f_2042.f_3 = iVar4;
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
			iVar4 = Global_2404993.f_2042.f_1;
		}
		if (Global_2404993.f_2042.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404993.f_2345)
			{
				func_61(&(Global_2404993.f_2042.f_6[0 /*9*/]), &(Global_2404993.f_2042.f_6[1 /*9*/]), &(Global_2404993.f_2042.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_17(Global_2404993.f_474))
			{
				if (Global_2404993.f_2042.f_2)
				{
					func_16(uParam0, &(Global_2404993.f_2042.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404993.f_2042.f_2)
			{
				func_16(uParam0, &(Global_2404993.f_2042.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0xB5BF1B58C833F7A9(0, Global_2404993.f_2042.f_1);
				unk_0x6978871734C62314(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_22(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
		if (uParam1->f_5 && func_17(Global_2404993.f_474))
		{
			if (!Global_2404993.f_2042.f_5)
			{
				Global_2404993.f_2042.f_5 = 1;
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
		uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
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
			Global_2404993.f_2153[(3 - iVar0) /*3*/] = { Global_2404993.f_2153[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404993.f_2153[0 /*3*/] = { Param0 };
}

void func_61(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2404993.f_474) && func_66() < 4096)
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407339[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407339[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407339[iVar0 /*9*/].f_1;
				Var2 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_2 < fVar1 && Global_2407339[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407339[iVar0 /*9*/].f_2;
				Var2 = { Global_2407339[iVar0 /*9*/] };
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
		if (Global_2407339[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407339[iVar0 /*9*/];
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
	struct<9> Var16;
	bool bVar25;
	bool bVar26;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404993.f_474 == 1)
		{
			if (unk_0x7466327978A6A24C((Global_2404993.f_491.f_2 - Param0.f_2)) < 25f)
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
		if (func_117(unk_0x0C1D3C552325765B()))
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
		if (!func_116(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x25A95C36B95B3351(unk_0xA0081090911D13E5(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x25A95C36B95B3351(unk_0xA0081090911D13E5(), Param0, 20f))
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
		if (!func_115(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_109(Param0, fParam3, uParam4->f_15, func_114(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404993.f_3;
		}
	}
	else if (!func_106(Param0, 25f, unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_105(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_105(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_636)
		{
			Var11 = { Global_2404993.f_491 };
			if (Global_2404993.f_474 == 26)
			{
				Var11 = { Global_2404993.f_523.f_18 };
			}
			if (func_48(Var11))
			{
				if (!func_47(&Param0, 0, 0, 0) && !func_104(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_104(&Param0, 0) && !func_38(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_103(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_102(unk_0x0C1D3C552325765B()) && func_100(unk_0x0C1D3C552325765B())))
		{
			if (!func_99(&Param0, &(Global_2404993.f_2042.f_67), 0, 1065353216))
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
		if (!func_100(unk_0x0C1D3C552325765B()))
		{
			if (!func_98(Param0, &(Global_2404993.f_2042.f_34), &(Global_2404993.f_2042.f_67), 1073741824))
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
	if (func_97(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_97(Param0))
			{
				if (func_17(Global_2404993.f_474))
				{
					if (func_51(Param0, 1f))
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
		if (func_96(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404993.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_636)
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
		iVar7 = -1;
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
	Var16.f_2 = 1176256410;
	bVar25 = false;
	bVar26 = false;
	if (Global_2404993.f_2345 && uParam4->f_5)
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
				fVar0 = func_87(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
			}
			else
			{
				fVar0 = func_87(Param0, Global_2404993.f_2017, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2404993.f_474) && iVar7 < 4096)
			{
				Var16.f_2 = func_85(Param0);
			}
			Var16.f_4 = { Param0 };
			Var16.f_7 = fParam3;
			Var16.f_0 = iVar7;
			Var16.f_1 = fVar0;
			func_84(Var16);
			Global_2404993.f_2042.f_2 = 1;
		}
	}
	else
	{
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (iVar7 >= Global_2404993.f_2042.f_6[iVar15 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar25)
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
							fVar0 = func_87(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
						}
						else
						{
							fVar0 = func_87(Param0, Global_2404993.f_2017, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar25 = true;
					}
					if ((func_17(Global_2404993.f_474) && iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar26)
						{
							fVar2 = func_85(Param0);
							bVar26 = true;
						}
						if (fVar2 < Global_2404993.f_2042.f_6[iVar15 /*9*/].f_2)
						{
							Var16.f_4 = { Param0 };
							Var16.f_7 = fParam3;
							Var16.f_0 = iVar7;
							Var16.f_1 = fVar0;
							Var16.f_2 = fVar2;
							func_83(Var16, iVar15);
							Global_2404993.f_2042.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404993.f_2042.f_6[iVar15 /*9*/] || (iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/] && fVar0 > Global_2404993.f_2042.f_6[iVar15 /*9*/].f_1))
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						func_83(Var16, iVar15);
						Global_2404993.f_2042.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar25)
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
						bVar25 = true;
					}
					if (iVar7 > Global_2404993.f_2042.f_6[iVar15 /*9*/] || (iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/] && fVar3 > Global_2404993.f_2042.f_6[iVar15 /*9*/].f_3))
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_3 = fVar3;
						func_83(Var16, iVar15);
						Global_2404993.f_2042.f_2 = 1;
						return;
					}
				}
			}
			iVar15++;
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
		if (func_801(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x0C1D3C552325765B() || iParam5 == 1)
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
					if (unk_0x10B1B072E9514664(iVar11) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
					{
						if (!unk_0x10B1B072E9514664(iVar11) == -1 || !func_52(unk_0x0C1D3C552325765B(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar11) || !bParam6)
					{
						if (func_71(iVar11))
						{
							Var5 = { func_70(iVar11) };
							if (!iVar11 == unk_0x0C1D3C552325765B())
							{
								Var8 = { unk_0x052337DF45FC6411(unk_0x21F191D9AFF98B5E(iVar11)) };
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
							fVar1 = unk_0x999A157665D69393(Param0, Var5, 1);
							fVar2 = unk_0x999A157665D69393(Param0, Var8, 1);
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
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_71(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_801(iParam0, 0, 1))
	{
		if (!func_80(iParam0))
		{
			if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam0))
			{
				if (!unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
				{
					if (func_33(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_79(unk_0x10B1B072E9514664(iParam0), unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
				{
					if (!func_33(unk_0x0C1D3C552325765B(), 1))
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
	if (func_78(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_77(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_74(unk_0x0C1D3C552325765B(), iParam0))
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
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_75();
}

struct<13> func_77(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_77(iParam0) };
		Global_2471207 = { func_77(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (func_134(iParam0, 0))
	{
		return 1;
	}
	if (func_81())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
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
		if (func_801(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				if (unk_0xE514F14357BDEECF(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0));
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
		if (func_801(iVar1, 1, 1))
		{
			if (!func_134(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if (func_71(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam7 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar1), 0));
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
	Var0 = { Global_2404993.f_2042.f_6[iParam9 /*9*/] };
	Global_2404993.f_2042.f_6[iParam9 /*9*/] = { Param0 };
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
		if (Global_2407339[iVar0 /*9*/] < iVar10)
		{
			Global_2407339[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407339[iVar0 /*9*/] == 0)
		{
			Global_2407339[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407339[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407339[iVar12 /*9*/] = { Param0 };
	}
}

float func_85(struct<3> Param0)
{
	var uVar0;
	
	return func_86(Param0, &(Global_2404993.f_43), &uVar0);
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404993.f_2253) * (uParam3[iVar0 /*12*/])->f_8)));
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
	if (unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && !func_52(unk_0x0C1D3C552325765B(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_89(Param0, unk_0x0C1D3C552325765B(), 0);
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
		fVar0 = func_68(unk_0x2A488C176D52CCA5(Global_2404993.f_491, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
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
	
	uVar3 = unk_0xD2275328A6FD3845(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xE25FC54E624B820E(uVar3))
	{
		unk_0x5D5210831D45D0A6(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x7466327978A6A24C((Param0.f_2 - Var0.f_2));
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
			if (func_801(iVar3, 0, 1))
			{
				if (unk_0x10B1B072E9514664(iVar3) != unk_0x10B1B072E9514664(iParam3) || (unk_0x10B1B072E9514664(iVar3) == -1 && unk_0x10B1B072E9514664(iParam3) == -1))
				{
					if (Global_2415586.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar2 /*3*/], Param0);
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
	
	iVar39 = unk_0xC204507743BB34BC(unk_0xA0081090911D13E5(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD3FACCDA4D66AEAD(uVar6[iVar2]))
		{
			if (!unk_0x912AD5A10E7633F0(uVar6[iVar2], 0))
			{
				if (func_91(uVar6[iVar2]))
				{
					Var3 = { unk_0xC59DF10B4FC39DF8(uVar6[iVar2], 1) };
					fVar1 = unk_0x999A157665D69393(Param0, Var3, 1);
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
	
	iVar0 = unk_0x0EAE41B4E693BA70(uParam0);
	switch (unk_0xD28ED8D0CD006D1E(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xD28ED8D0CD006D1E(iVar0, Global_1574240[unk_0x0C1D3C552325765B()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0)
	{
		iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xD28ED8D0CD006D1E(iVar0, Global_1573951[iVar1]))
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
		if ((unk_0x1E3C80E7C4B8041B(Global_2404993.f_43.f_67) || unk_0xFC4346F9DE2AB4AE(Global_2404993.f_43.f_67)) || Global_2404993.f_43.f_67 == joaat("rhino"))
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
	if (Global_2404993.f_43.f_65 && !Global_2404993.f_43.f_296)
	{
		if (!func_80(unk_0x0C1D3C552325765B()))
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
		if ((unk_0x1E3C80E7C4B8041B(Global_2404993.f_43.f_67) || unk_0xFC4346F9DE2AB4AE(Global_2404993.f_43.f_67)) || Global_2404993.f_43.f_67 == joaat("rhino"))
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
	if ((((fParam7 > 0f && unk_0x916C9DBA707424D8(Param0, fParam7)) || (fVar0 > 0f && unk_0xD5723D169730DAAD(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x82C3AA7E0F0CF1A1(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x82C3AA7E0F0CF1A1(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_96(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404993.f_43.f_55)
	{
		if (unk_0x72C176FA688CE74D(Global_2404993.f_43.f_56))
		{
			if (!unk_0x9EAA10271825C2DB(Param0))
			{
				uVar0 = unk_0xDACF94AE8FA53F42(Param0);
				if (unk_0x72C176FA688CE74D(uVar0))
				{
					iVar1 = unk_0x7933C96E6F1F08FD(uVar0);
					if (!iVar1 == Global_2404993.f_43.f_57)
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

int func_97(struct<3> Param0)
{
	switch (Global_2404993.f_2038)
	{
		case 0:
			return func_137(Param0, Global_2404993.f_2017, Global_2404993.f_2020, 0, 0);
			break;
		
		case 1:
			return func_55(Param0, Global_2404993.f_2031, Global_2404993.f_2034, 0, 0);
			break;
		
		case 2:
			return unk_0xDFC5B758BDC9546F(Param0, Global_2404993.f_2031, Global_2404993.f_2034, Global_2404993.f_2037, 0, 1);
			break;
	}
	return 0;
}

int func_98(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xDFC5B758BDC9546F(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_99(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_100(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_101(iParam0))
			{
				if (Global_1588660[iParam0 /*532*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_101(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

int func_102(int iParam0)
{
	if (func_33(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_103(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404993.f_2153[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_104(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_40(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xF25F352E34274C58(0.01f, 360f);
			func_37(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 0, fVar4);
			if (func_44(Var1, &uVar0) || func_40(Var1))
			{
				Var1 = { *uParam0 };
				func_37(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_105(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_801(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_70(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
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
		if (func_801(iVar1, 1, 1))
		{
			if (!func_134(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_71(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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

int func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_108(Param0, fParam3, iParam4, iParam5, 0) || func_107(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_107(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415586.f_556[iVar0] == 0)
			{
				if (func_29(Param0, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 1036831949))
				{
					if (func_801(iVar1, 0, 1) && func_801(iParam3, 0, 1))
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

int func_108(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_801(iVar1, 0, 1) && func_801(iParam4, 0, 1))
				{
					if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_801(iVar1, 0, 1) && func_801(iParam4, 0, 1))
				{
					if (Global_2415586.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_70(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415586.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_801(iVar1, 0, 1))
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

int func_109(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404993.f_3 = 0;
	if (!func_106(Param0, 0.5f, unk_0x0C1D3C552325765B(), 0, 0))
	{
		Global_2404993.f_3++;
		if (bParam5)
		{
			if (func_158(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
				if (!func_113(Param0, fParam12))
				{
					Global_2404993.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2404993.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_158(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
				if (!func_113(Param0, fParam12))
				{
					Global_2404993.f_3++;
					if (!func_110(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404993.f_3++;
						if (!func_28(Param0, 1056964608))
						{
							Global_2404993.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			}
		}
		else if (func_158(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			if (!func_113(Param0, fParam12))
			{
				Global_2404993.f_3++;
				if (!func_110(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404993.f_3++;
					if (!func_28(Param0, 1056964608))
					{
						Global_2404993.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
		}
	}
	return 0;
}

int func_110(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x0C1D3C552325765B() == iVar1)
		{
			if ((func_801(iVar1, 1, 1) && func_71(iVar1)) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (!func_112(unk_0x0C1D3C552325765B(), iVar1, -2, 0))
				{
					if (func_111(func_70(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_111(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xDFC5B758BDC9546F(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_113(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_801(iVar1, 1, 1) && func_71(iVar1)) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
		{
			if ((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && unk_0x10B1B072E9514664(iVar1) == -1) && !func_52(unk_0x0C1D3C552325765B(), 1))
			{
				return 0;
			}
			else if ((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && !unk_0x0C1D3C552325765B() == iVar1) || !func_112(unk_0x0C1D3C552325765B(), iVar1, -2, 0))
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

int func_114(int iParam0)
{
	if ((Global_2404993.f_474 == 9 || Global_2404993.f_474 == 9) || (Global_2404993.f_474 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_801(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam9) && bParam6) && func_73(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_70(iVar1), Param0, 1) < fParam3)
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

int func_116(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_801(iVar1, 1, 1))
			{
				if ((!func_134(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1)) && iVar1 != unk_0x0C1D3C552325765B())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x10B1B072E9514664(iVar1) == iVar3)
					{
						if (unk_0x999A157665D69393(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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

int func_117(int iParam0)
{
	if ((func_52(iParam0, 1) || func_119(iParam0)) || func_118(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

void func_120(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_122(&Var2, uParam3, iVar0);
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
				func_121(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_121(var uParam0, var uParam1, int iParam2)
{
	Global_2411129 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_121(&Global_2411129, uParam1, iParam2 + 1);
	}
}

void func_122(var uParam0, var uParam1, int iParam2)
{
	Global_2411125 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_122(&Global_2411125, uParam1, iParam2 + 1);
	}
}

void func_123(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404993.f_1813 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1813)
		{
			if (func_124(Global_2404993.f_1814[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404993.f_1814[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404993.f_1814[iVar0 /*4*/] };
					fVar4 = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
				}
				func_67(Global_2404993.f_1814[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404993.f_2042++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404993.f_2345)
	{
		func_61(&(Global_2404993.f_2042.f_6[0 /*9*/]), &(Global_2404993.f_2042.f_6[1 /*9*/]), &(Global_2404993.f_2042.f_6[2 /*9*/]));
	}
}

int func_124(struct<3> Param0, var uParam3)
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

void func_125(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
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

void func_126()
{
	func_131();
	func_130();
	func_129();
	func_128();
	func_127();
}

void func_127()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407339[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_128()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404993.f_2042.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_129()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404993.f_2042.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_130()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404993.f_2042.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_131()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404993.f_2042 = { Var0 };
}

var func_132()
{
	return Global_1310987.f_4;
}

void func_133(var uParam0, var uParam1)
{
	func_159();
	func_157(uParam0, uParam1);
}

bool func_134(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_135(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_136();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_136()
{
	return Global_1312731;
}

bool func_137(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_138(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1683 > 0 && func_156(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_139(uParam0, uParam1, uParam2);
	}
}

void func_139(var uParam0, var uParam1, var uParam2)
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
		if (func_155(uParam0, 1))
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
	Global_2411139.f_162 = 0;
	Global_2411139.f_163 = 0;
	Global_2411139.f_164 = -99;
	Global_2411139.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411139.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD2275328A6FD3845(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xE25FC54E624B820E(iVar8))
		{
			unk_0x5D5210831D45D0A6(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411139.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411139.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x722521C5827377D3(iVar8)) || unk_0xABEAA77F123D36FA(iVar8))
			{
				unk_0xC54D87D649D77D84(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_104(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_154(Var1))
									{
										Var1 = { func_152(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_28(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_151(Var1, uParam2))
													{
														if ((uParam2->f_48 && !func_155(&Var1, 0)) || uParam2->f_48 == 0)
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
																	if ((uParam2->f_12 && !func_146(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																					if (func_158(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_158(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_145(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																							iVar22 = func_144(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162)
																									{
																										Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2411139.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2411139.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2411139.f_162 == 0)
																								{
																									Global_2411139[0 /*3*/] = { Var1 };
																									Global_2411139.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_143(Var1, fVar4, iVar16);
																												iVar16 = Global_2411139.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2411139.f_162++;
																								if (Global_2411139.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
																								Global_2411139.f_121[Global_2411139.f_162] = fVar4;
																								Global_2411139.f_162++;
																								if (func_151(Var1, uParam2))
																								{
																									Global_2411139.f_163++;
																								}
																								if (Global_2411139.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
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
				if (Global_2411139.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
					else
					{
						if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
						{
							func_141(0, uParam2);
						}
						iVar24 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
						Var25 = { Global_2411139[0 /*3*/] };
						uVar28 = Global_2411139.f_121[0];
						Global_2411139[0 /*3*/] = { Global_2411139[iVar24 /*3*/] };
						Global_2411139.f_121[0] = Global_2411139.f_121[iVar24];
						Global_2411139[iVar24 /*3*/] = { Var25 };
						Global_2411139.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_139(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xB5BF1B58C833F7A9((1 + iVar15), (40 + iVar15));
						unk_0xBE5432549D1D244B(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_152(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
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
						if (func_36(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_155(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_139(uParam0, uParam1, uParam2);
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
				func_139(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_140(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411139.f_164 = iVar8;
	}
}

void func_140(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_106(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0C1D3C552325765B(), 0, 0))
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

void func_141(int iParam0, var uParam1)
{
	if (!func_151(Global_2411139[iParam0 /*3*/], uParam1))
	{
		Global_2411139.f_162 = (Global_2411139.f_162 - 1);
		func_142(iParam0);
		if (Global_2411139.f_162 > Global_2411139.f_163)
		{
			func_141(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_141(iParam0 + 1, uParam1);
	}
}

void func_142(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411139[iParam0 /*3*/] = { Global_2411139[iParam0 + 1 /*3*/] };
			Global_2411139.f_121[iParam0] = Global_2411139.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_143(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411139[iParam4 /*3*/] };
	uVar3 = Global_2411139.f_121[iParam4];
	Global_2411139[iParam4 /*3*/] = { Param0 };
	Global_2411139.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411139.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_143(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_144(struct<3> Param0, float fParam3, float fParam4)
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

int func_145(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam9 == 0)
		{
			if (func_801(iVar1, bParam5, bParam6))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam10) && bParam7) && func_73(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
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

int func_146(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_150(Param0, fParam3, iParam4, iParam5, iParam6) || func_147(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_147(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_149(Param0, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_556[iVar0]))
			{
				if (func_148(Param0, fParam3, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 0))
				{
					if (func_801(iVar1, 0, 1) && func_801(iParam5, 0, 1))
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

int func_148(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	fVar20 = unk_0x7466327978A6A24C((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7466327978A6A24C((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7466327978A6A24C((Var17.f_2 - Var14.f_2));
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
		if (func_148(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
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

int func_150(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_801(iVar1, 0, 1) && func_801(iParam5, 0, 1))
			{
				if (Global_2415586.f_260[iVar0])
				{
					if (func_29(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_29(func_70(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415586.f_260[iVar0])
			{
				if (func_29(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_801(iVar1, 0, 0))
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
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

int func_151(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_137(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
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
				if (unk_0xDFC5B758BDC9546F(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_152(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_153(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xC54D87D649D77D84(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FCAA52DD2D987DE(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
		if (!func_153(Param0, *fParam3, Param6))
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
	Var0 = { unk_0x8461D93FE2207D3A(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA19BA829D77A105A(Param0, *fParam3, &Var24))
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

int func_153(struct<3> Param0, float fParam3, struct<3> Param4)
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

int func_154(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_27(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410853[iVar1])
	{
		if (func_26(Param0, &(Global_2410150[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410853[8])
	{
		if (func_26(Param0, &(Global_2410150[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_155(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_26.f_16)
	{
		switch (Global_2404993.f_26.f_15)
		{
			case 0:
				if (func_137(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_55(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_43(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, Global_2404993.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_156(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404993.f_1683 > 0)
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
			if (func_155(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411139.f_162 = 0;
		Global_2411139.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411139.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1683)
		{
			Var1 = { Global_2404993.f_1684[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1684[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_146(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
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
									if (func_158(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_158(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_145(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_144(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162)
													{
														Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2411139.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2411139.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2411139.f_162 == 0)
												{
													Global_2411139[0 /*3*/] = { Var1 };
													Global_2411139.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar5 /*3*/], uParam2->f_35))
															{
																func_143(Var1, fVar4, iVar5);
																iVar5 = Global_2411139.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
											else
											{
												Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
												Global_2411139.f_121[Global_2411139.f_162] = fVar4;
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
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
			iVar0++;
		}
		if (Global_2411139.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
				{
					func_141(0, uParam2);
				}
				iVar13 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
				Var14 = { Global_2411139[0 /*3*/] };
				uVar17 = Global_2411139.f_121[0];
				Global_2411139[0 /*3*/] = { Global_2411139[iVar13 /*3*/] };
				Global_2411139.f_121[0] = Global_2411139.f_121[iVar13];
				Global_2411139[iVar13 /*3*/] = { Var14 };
				Global_2411139.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_156(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_139(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_157(var uParam0, var uParam1)
{
	unk_0x16F6A7785C574F64(uParam0, uParam1, 0.1f);
	Global_2404993.f_2025 = unk_0xEAE20F1125B83888();
	Global_2404993.f_2023 = 1;
	Global_2404993.f_2026 = unk_0x4B50AAB32FBE0483();
}

int func_158(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_115(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_105(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993.f_2++;
	return 1;
}

void func_159()
{
	if (Global_2404993.f_2023)
	{
		if (unk_0xEAE20F1125B83888() == Global_2404993.f_2025)
		{
			unk_0xEB410F2073890250();
		}
		else
		{
			unk_0xEB410F2073890250();
		}
		Global_2404993.f_2023 = 0;
	}
}

int func_160(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_161()
{
	return Local_195.f_38[Local_195.f_36 /*3*/];
}

void func_162()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_195.f_0 != 4)
	{
		iLocal_450 = 0;
		while (iLocal_450 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iLocal_450)))
			{
				iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iLocal_450));
				if (func_801(iVar2, 1, 1))
				{
				}
				if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 1))
				{
					if (unk_0x08BA6DD398CA197C(Local_255[iLocal_450 /*6*/].f_1, 2))
					{
						if (Local_195.f_37 != iVar2)
						{
							Local_195.f_37 = iVar2;
						}
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 1))
				{
					if (Local_255[iLocal_450 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_255[iLocal_450 /*6*/].f_5);
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 4))
				{
					if (unk_0x08BA6DD398CA197C(Local_255[iLocal_450 /*6*/].f_1, 5))
					{
						unk_0x88B0F0DC270164B7(&(Local_195.f_1), 4);
						Local_195.f_35 = iVar2;
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0x08BA6DD398CA197C(Local_195.f_1, 1) || unk_0x08BA6DD398CA197C(Local_195.f_1, 3)) || unk_0x08BA6DD398CA197C(Local_195.f_1, 4)) || unk_0x08BA6DD398CA197C(Local_195.f_1, 5))
						{
							if (!unk_0x08BA6DD398CA197C(Local_255[iLocal_450 /*6*/].f_1, 4))
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
			else if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 5))
			{
				if (Local_195.f_33 > -1)
				{
					if (iLocal_450 == Local_195.f_33)
					{
						unk_0x88B0F0DC270164B7(&(Local_195.f_1), 5);
					}
				}
			}
			iLocal_450++;
		}
		if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 1))
		{
			iVar0 = (iVar0 + Local_195.f_6);
			if (iVar0 >= func_163())
			{
				unk_0x88B0F0DC270164B7(&(Local_195.f_1), 1);
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
		if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0x88B0F0DC270164B7(&(Local_195.f_1), 2);
			}
		}
	}
}

int func_163()
{
	return Global_262145.f_10936;
}

int func_164()
{
	int iVar0;
	int iVar1;
	
	if (func_168() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_167(Local_195.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = unk_0xB5BF1B58C833F7A9(0, 20);
				if (func_165(iVar1))
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
		if (func_167(Local_195.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_165(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_167(Local_756[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_167(Local_195.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = unk_0x999A157665D69393(Local_195.f_38[iVar0 /*3*/], Local_756[iParam0 /*3*/], 1);
				if (fVar1 < func_166())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_166()
{
	return unk_0xBBDA792448DB5A89(Global_262145.f_10937);
}

bool func_167(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_168()
{
	int iVar0;
	
	if (Local_195.f_48 != -1)
	{
		return Local_195.f_48;
	}
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 4);
	if (!func_170(iVar0))
	{
		Local_195.f_48 = iVar0;
		func_169();
	}
	return Local_195.f_48;
}

void func_169()
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

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10879;
		
		case 1:
			return Global_262145.f_10880;
		
		case 2:
			return Global_262145.f_10878;
		
		case 3:
			return Global_262145.f_10877;
		
		default:
	}
	return 0;
}

int func_171(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_172(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_173()
{
	func_175();
	if (unk_0x08BA6DD398CA197C(iLocal_449, 9))
	{
		return;
	}
	if (func_733())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_449, 0))
		{
			unk_0x0756AF366187C194("DisableFlightMusic", 1);
			unk_0x0756AF366187C194("WantedMusicDisabled", 1);
			unk_0x88B0F0DC270164B7(&iLocal_449, 0);
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_449, 1))
		{
			if (unk_0xB49DAD10DC051295("BG_SIGHTSEER_START"))
			{
				unk_0x88B0F0DC270164B7(&iLocal_449, 1);
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_449, 1))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 3))
			{
				if (Local_195.f_5 == 1)
				{
					if (unk_0xB49DAD10DC051295("BG_SIGHTSEER_MID"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_449, 3);
					}
				}
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_449, 3))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 4))
			{
				if (Local_195.f_5 == 2)
				{
					if (unk_0xB49DAD10DC051295("BG_SIGHTSEER_FINAL"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_449, 4);
					}
				}
			}
		}
		if (unk_0x08BA6DD398CA197C(Local_195.f_1, 1) || unk_0x08BA6DD398CA197C(Local_195.f_1, 4))
		{
			if (unk_0x08BA6DD398CA197C(iLocal_449, 4))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_449, 6))
				{
					if (unk_0xB49DAD10DC051295("BG_SIGHTSEER_STOP"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_449, 6);
						unk_0x88B0F0DC270164B7(&iLocal_449, 2);
						unk_0x0756AF366187C194("DisableFlightMusic", 0);
						unk_0x0756AF366187C194("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_369())
	{
		if (func_174(unk_0x0C1D3C552325765B(), 20))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 0))
			{
				unk_0x0756AF366187C194("DisableFlightMusic", 1);
				unk_0x0756AF366187C194("WantedMusicDisabled", 1);
				unk_0x88B0F0DC270164B7(&iLocal_449, 0);
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 7))
			{
				if (unk_0xB49DAD10DC051295("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0x88B0F0DC270164B7(&iLocal_449, 7);
				}
			}
			if (unk_0x08BA6DD398CA197C(Local_195.f_1, 1) || unk_0x08BA6DD398CA197C(Local_195.f_1, 4))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_449, 7))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_449, 6))
					{
						if (unk_0xB49DAD10DC051295("BG_SIGHTSEER_STOP"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_449, 6);
							unk_0x88B0F0DC270164B7(&iLocal_449, 2);
							unk_0x0756AF366187C194("DisableFlightMusic", 0);
							unk_0x0756AF366187C194("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_174(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

void func_175()
{
	if (unk_0x08BA6DD398CA197C(iLocal_449, 8))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_449, 9))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 10))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_449, 11))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_449, 12))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_449, 15))
				{
					if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_449, 15);
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_449, 15))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_449, 13))
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_449, 13);
						}
					}
					if (unk_0x08BA6DD398CA197C(iLocal_449, 13))
					{
						unk_0x88B0F0DC270164B7(&iLocal_449, 10);
					}
				}
			}
		}
	}
}

void func_176()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_733() && !func_369())
	{
		return;
	}
	if (Local_195.f_34 > -1)
	{
		iVar3 = unk_0x81C85E54237F8A2E(Local_195.f_34);
		if (unk_0xCB129F9A01D14082(iVar3))
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar3), 0) };
		}
	}
	if (!func_167(Var0, 0f, 0f, 0f, 0))
	{
		func_177(142, Var0, &uLocal_824, 1140457472, 1144750080, 0);
	}
}

void func_177(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_119(unk_0x0C1D3C552325765B()) && !func_225(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8)) && (func_224(unk_0x0C1D3C552325765B()) || func_223(unk_0x0C1D3C552325765B())))
	{
		return;
	}
	Global_1750560 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param1);
	func_219(iParam0, fVar0);
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_218(unk_0x0C1D3C552325765B()) || func_216(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_215(unk_0x0C1D3C552325765B(), 21))
		{
			func_214(Param1, 1, 0);
		}
		if (!*uParam4 && func_801(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 1;
			if (func_213(iParam0))
			{
				unk_0xACD6D334FD769B0C(func_212(iParam0));
				if (func_211(iParam0, -1))
				{
					unk_0xCF03D9C8A7F1577C(0);
					if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
					{
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 1);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 1);
					}
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
				}
			}
			if (func_210(iParam0))
			{
				fVar1 = func_209(iParam0);
				if (fVar1 != 1f)
				{
					func_206(fVar1);
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_205(iParam0) && func_218(unk_0x0C1D3C552325765B()))
				{
					func_203(1);
					func_202(2);
				}
			}
			func_201(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_174(unk_0x0C1D3C552325765B(), 19))
			{
				func_200(19);
			}
		}
		if (*uParam4 && func_801(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 0;
			if (func_213(iParam0))
			{
				if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
				{
					unk_0xACD6D334FD769B0C(1f);
					unk_0xCF03D9C8A7F1577C(5);
					unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
				}
			}
			if (func_210(iParam0))
			{
				func_199();
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
			}
			if (iParam7 && !func_119(unk_0x0C1D3C552325765B()))
			{
				if (func_198(unk_0x0C1D3C552325765B()) != 152)
				{
					func_180();
				}
			}
			if (func_179(2))
			{
				func_203(0);
				func_178(2);
			}
		}
	}
}

void func_178(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_22), iParam0);
}

bool func_179(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

void func_180()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_196();
	func_183(1, 1);
	func_181();
}

void func_181()
{
	func_182(0, 0);
}

void func_182(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_183(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_195();
	}
	func_186(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_185(0);
	func_184();
}

void func_184()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_185(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_186(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_194())
		{
			func_193();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_191();
		func_190(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
	}
	else
	{
		func_187();
	}
}

void func_187()
{
	if (func_194() && !func_189())
	{
		func_193();
	}
	if (func_189())
	{
		func_188();
	}
	else
	{
		func_191();
		func_190(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_188()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_189()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

void func_191()
{
	if (func_194() && !func_189())
	{
		func_193();
	}
	func_192();
	Global_2404993.f_649 = 0;
}

void func_192()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_193()
{
	if (func_189())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_194()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_196()
{
	func_197();
	Global_2404993.f_1813 = 0;
}

void func_197()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_198(int iParam0)
{
	if (func_118(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

void func_199()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

void func_200(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_201(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_202(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_203(int iParam0)
{
	if (func_204() && iParam0)
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

int func_204()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
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

void func_206(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_207())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

int func_207()
{
	switch (func_208())
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

int func_208()
{
	return Global_25185;
}

float func_209(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_210(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
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

float func_212(int iParam0)
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
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_213(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_214(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

bool func_215(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_216(int iParam0)
{
	if (func_217(iParam0))
	{
		if (func_218(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_75())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_174(iParam0, 9);
	}
	return 0;
}

void func_219(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_222(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_220();
	}
}

void func_220()
{
	if (!func_221(unk_0x0C1D3C552325765B()))
	{
		func_201(25);
	}
}

bool func_221(int iParam0)
{
	return func_174(iParam0, 25);
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10954;
		
		case 142:
			return Global_262145.f_10942;
		
		case 157:
			return Global_262145.f_10909;
		
		case 159:
			return Global_262145.f_10892;
		
		case 162:
			return Global_262145.f_11003;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

bool func_225(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

void func_226(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_359(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_357() || iParam2 == 24)
	{
		if (func_307(uParam1, iParam2, uParam3, Global_1573696, 0, func_355()))
		{
			func_306(1);
			if ((!func_304() && !func_302()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_301())
				{
					func_298();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_297(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_296(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
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
								if (func_801(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_134(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_101(iVar35))
										{
											iVar44 = iVar35;
											if (func_217(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_293(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_290(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_288())
							{
								if (func_801(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
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
							if ((func_287(iVar35) && func_282(iVar35, iParam2)) && func_801(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_277(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_77(iVar35) };
								iVar37 = func_271(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
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
									if (!func_288())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_266(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_265(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_259(iVar35, 0);
								if (bVar34)
								{
									if (func_258(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_257(iParam5))
								{
									func_256(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_256(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_801(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_75();
							}
							if (func_287(iVar35))
							{
								if (func_801(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_277(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_77(iVar35) };
									iVar37 = func_271(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_259(iVar35, 1);
									if (bVar34)
									{
										if (func_258(iVar35, 1))
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
									func_240(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_237(uParam3, uParam1);
						}
						func_236(&(uParam3->f_21));
						func_235();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_234(uParam3, uParam1);
							func_233(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_234(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_229(uParam3))
						{
							Global_1573844 = 1;
						}
						func_227(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_235();
			func_297(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_227(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_236(&(uParam0->f_21));
		func_228(0);
	}
}

void func_228(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_229(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_75() && func_801(iVar15, 0, 1))
	{
		Var2 = { func_77(iVar15) };
		iVar1 = func_232(uParam0, uParam0->f_37);
		if (func_231(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_230(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_230(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_230(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_230(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_230(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_230(uParam0, iVar0, 0);
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

void func_230(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_232(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_233(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_234(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_235()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_236(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_237(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_75())
		{
			if (func_801(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_239(uParam0->f_38[iVar0 /*2*/], 0);
					func_238(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_255() && iParam4 < func_254())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_253("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_253(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_253("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_253("");
			if (uParam3->f_108 == 6)
			{
				func_253("");
			}
			else
			{
				func_253(&sParam5);
			}
			func_245(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_244(uParam3))
			{
				func_243("DPAD_FRIEND");
			}
			else if (func_242(uParam3))
			{
				func_243("DPAD_FRIEND");
			}
			else if (func_241(uParam3))
			{
				func_243("DPAD_CREW");
			}
			else
			{
				func_243("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_241(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_242(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_243(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_244(var uParam0)
{
	if (func_242(uParam0) && func_241(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_245(var uParam0, int iParam1)
{
	if (func_252(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_246(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_246(int iParam0)
{
	if ((func_801(iParam0, 0, 1) && func_250()) && func_247(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_247(int iParam0, bool bParam1)
{
	return func_248(iParam0, bParam1, 1);
}

int func_248(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_249(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_75() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0, int iParam1)
{
	if (iParam0 != func_75())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_75())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_250()
{
	if (func_119(unk_0x0C1D3C552325765B()) || func_251())
	{
		return 0;
	}
	return 1;
}

int func_251()
{
	switch (func_198(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_252(int iParam0)
{
	if ((func_801(iParam0, 0, 1) && func_250()) && func_249(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_253(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_254()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_255()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_256(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_255() && iParam3 < func_254())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
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
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_253("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_243(sParam16);
				}
				else
				{
					func_253(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_253("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_288())
				{
					func_253("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_243(&(uParam2->f_104));
					}
					else
					{
						func_253("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_253("");
				}
				if (uParam2->f_108 == 6)
				{
					func_253("");
				}
				else
				{
					func_253(&sParam4);
				}
				func_245(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_253("");
					func_253("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_244(uParam2))
				{
					func_243("DPAD_FRIEND");
				}
				else if (func_242(uParam2))
				{
					func_243("DPAD_FRIEND");
				}
				else if (func_241(uParam2))
				{
					func_243("DPAD_CREW");
				}
				else
				{
					func_243("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_257(int iParam0)
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

bool func_258(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_217(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_75();
}

int func_259(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_119(iParam0)) && !func_264(iParam0))
	{
		iVar0 = func_263();
	}
	iVar1 = func_262(iParam0);
	if (!iVar1 == -1)
	{
		return func_260(iVar1);
	}
	return iVar0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_261(iParam0);
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

var func_261(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_262(int iParam0)
{
	if (!iParam0 == func_75())
	{
		if (func_258(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_76(iParam0)];
		}
	}
	return -1;
}

int func_263()
{
	return 21;
}

bool func_264(int iParam0)
{
	return func_174(iParam0, 20);
}

char* func_265(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xAE52C62FC0BBB14E())
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
			if (unk_0xAE52C62FC0BBB14E())
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

int func_266(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_270(iParam3))
	{
		*fParam1 = (func_267(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_257(iParam3))
	{
		*fParam1 = (func_267(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_267(int iParam0, int iParam1)
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
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_269(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_268(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_268(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_269(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_270(int iParam0)
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

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = func_274(iParam0);
	if (iVar0 == -1)
	{
		func_272(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_272(int iParam0, bool bParam1)
{
	if (!func_801(iParam0, 0, 1))
	{
		return;
	}
	if (func_274(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_273(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_274(int iParam0)
{
	int iVar0;
	
	if (!func_801(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_275(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_275(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_276(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_276(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_75();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_277(int iParam0)
{
	struct<4> Var0;
	
	if (func_801(iParam0, 0, 1))
	{
		Global_2471194 = { func_77(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_231(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_281(&Global_2471194))
		{
			Global_2471124 = { func_279(iParam0) };
			func_278(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_278(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_279(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_280(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_77(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_280(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_225(iParam0) || func_286(iParam0)) || func_285(iParam0))
		{
			return 0;
		}
	}
	if (!func_284(iParam0))
	{
		return 0;
	}
	if ((!func_283(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_101(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_283(int iParam0)
{
	if (func_801(iParam0, 0, 1))
	{
		if (func_801(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_284(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

bool func_285(int iParam0)
{
	if (func_225(iParam0))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

int func_286(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_134(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_288()
{
	switch (func_198(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
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
	switch (func_289(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_264(unk_0x0C1D3C552325765B()))
	{
		switch (func_198(unk_0x0C1D3C552325765B()))
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

int func_289(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

int func_290(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_291(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_291(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0)
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
	return func_292(iParam0, 0);
	return 0;
}

int func_292(int iParam0, int iParam1)
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

void func_293(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_801(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_134(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_101(iVar1))
				{
					if (func_294(iVar1, iParam1, 0))
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

int func_294(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_75())
	{
		if (!bParam2)
		{
			if (func_295(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_75())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_295(int iParam0, int iParam1)
{
	if (iParam1 != func_75())
	{
		if (iParam0 != func_75())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_75())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_296(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_297(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_298()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_300())
		{
			func_299();
		}
	}
}

void func_299()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_300()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

int func_301()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_300())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_300())
	{
		return 1;
	}
	return 0;
}

int func_302()
{
	if (func_300())
	{
		if (func_303(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_304()
{
	if (func_300())
	{
		if (func_305(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0)
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

void func_306(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_307(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_354(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_353();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_352())
		{
			if (func_351() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_339())
		{
			func_338(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_338(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_351() == 1)
		{
			func_337(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_338(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_351() == 0 && !bParam5))
		{
			func_338(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_336();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_336();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_337(bVar6, uParam0, 0))
				{
					func_296(uParam0);
					sVar4 = func_334(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_331(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_324(uParam0, func_328(uParam2), func_325(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_315(uParam0, func_317(), func_316(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_331(uParam0, sVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_313(iParam1) };
						iVar8 = func_308(iParam1);
						func_331(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_312())
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
			if (func_311(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_310(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_309(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_309(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_310(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_311(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_312()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_313(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_314(unk_0x0C1D3C552325765B()) || func_309(unk_0x0C1D3C552325765B()))
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
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_314(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_315(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_243(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_243("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_316()
{
	switch (func_198(unk_0x0C1D3C552325765B()))
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

char* func_317()
{
	switch (func_198(unk_0x0C1D3C552325765B()))
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
			if (func_320())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_319(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_319(1))
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
			if (func_318(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_318(int iParam0)
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

bool func_319(bool bParam0)
{
	return func_247(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_320()
{
	return (func_323() && func_321(func_322()));
}

bool func_321(int iParam0)
{
	return func_249(iParam0, 1);
}

int func_322()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_323()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_324(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_243(sParam1);
		}
		else if (func_289(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_243("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = func_289(unk_0x0C1D3C552325765B());
	if (func_327())
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
			switch (func_326())
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

int func_326()
{
	if (func_289(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

bool func_327()
{
	return Global_1588659;
}

char* func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = func_289(unk_0x0C1D3C552325765B());
	if (func_327())
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
			if (func_330() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_330() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_326())
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
			if (func_329() == 1)
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

int func_329()
{
	return Global_2482149.f_4688;
}

int func_330()
{
	if (func_289(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_331(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_253(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(sParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_243(sParam1);
		}
		if (func_352() && iParam6)
		{
			if (func_333())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_243(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_332(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_332(int iParam0)
{
	if (func_311(iParam0) || func_310(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_333()
{
	return Global_1573698;
}

char* func_334(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_335();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(uParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
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
			case 22:
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

char* func_335()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_336()
{
	Global_36678 = 1;
}

bool func_337(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_338(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_235();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_236(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_339()
{
	if (func_350())
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (!func_345())
	{
		return 0;
	}
	if (func_344(8, -1))
	{
		return 0;
	}
	if (func_351() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	else if (!func_33(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_342(1) || func_340(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_80(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_179(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

int func_340(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_341(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
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
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_342(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_343()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_345()
{
	if (func_346() == 0)
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	return Global_1312462.f_18;
}

int func_347()
{
	if (func_348())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_348()
{
	return Global_1312434;
}

bool func_349()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

bool func_350()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_351()
{
	return Global_1342783.f_68;
}

int func_352()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_353()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_354(int iParam0)
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

int func_355()
{
	if (func_356(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_134(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

int func_357()
{
	if (func_355())
	{
		return 1;
	}
	if (func_285(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_327())
	{
		return 1;
	}
	if (func_119(unk_0x0C1D3C552325765B()))
	{
		switch (func_289(unk_0x0C1D3C552325765B()))
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
				if (!func_358(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_358(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_358(unk_0x0C1D3C552325765B()))
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

bool func_358(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_359(int iParam0)
{
	if ((iParam0 == 24 && func_119(unk_0x0C1D3C552325765B())) && !func_264(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_118(unk_0x0C1D3C552325765B(), 0) && func_264(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_360(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_119(iParam0) && !func_225(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_264(iParam0);
	uVar3 = func_368();
	uVar4 = func_362();
	if ((bVar1 && (func_224(iParam0) || func_223(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_218(iParam0)) && !func_361(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

bool func_361(int iParam0)
{
	return func_174(iParam0, 19);
}

int func_362()
{
	if ((func_174(unk_0x0C1D3C552325765B(), 21) || func_174(unk_0x0C1D3C552325765B(), 22)) || func_365())
	{
		return 1;
	}
	if (func_363())
	{
		func_201(22);
		return 1;
	}
	return 0;
}

int func_363()
{
	if (func_118(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_368() && !func_364()) || func_215(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_174(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_200(27);
		}
	}
	return 0;
}

bool func_364()
{
	return Global_1312412.f_1;
}

bool func_365()
{
	return func_366(286, -1);
}

int func_366(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_367(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_367(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_136();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

bool func_368()
{
	return Global_1312412;
}

bool func_369()
{
	return unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 1);
}

void func_370()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_371(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_371(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 10))
	{
		if (Local_195.f_34 > -1)
		{
			if (func_369())
			{
				if (!func_362())
				{
					if (!unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 5))
					{
						if (!unk_0x08BA6DD398CA197C(Local_195.f_1, 4))
						{
							if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0x60F161681C368C4E(Var0.f_0))
									{
										uVar11 = unk_0x90897FA118314142(Var0.f_0);
										if (unk_0x54F0AEFB11EA090A(uVar11))
										{
											iVar12 = unk_0xA43666ACD375E339(uVar11);
											if (iVar12 == unk_0x81C85E54237F8A2E(Local_195.f_34))
											{
												if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
												{
													if (unk_0x60F161681C368C4E(Var0.f_1))
													{
														uVar10 = unk_0x90897FA118314142(Var0.f_1);
														if (unk_0x54F0AEFB11EA090A(uVar10))
														{
															iVar13 = unk_0xA43666ACD375E339(uVar10);
															if (iVar13 == unk_0x0C1D3C552325765B())
															{
																unk_0x88B0F0DC270164B7(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 5);
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
	if (func_369())
	{
		if (!func_174(unk_0x0C1D3C552325765B(), 20))
		{
			if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
			{
				if (unk_0x60F161681C368C4E(Var0.f_0))
				{
					uVar11 = unk_0x90897FA118314142(Var0.f_0);
					if (unk_0x54F0AEFB11EA090A(uVar11))
					{
						iVar12 = unk_0xA43666ACD375E339(uVar11);
						if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
						{
							if (unk_0x60F161681C368C4E(Var0.f_1))
							{
								uVar10 = unk_0x90897FA118314142(Var0.f_1);
								if (unk_0x54F0AEFB11EA090A(uVar10))
								{
									iVar13 = unk_0xA43666ACD375E339(uVar10);
									if (iVar13 == unk_0x0C1D3C552325765B())
									{
										if (unk_0x3F3C7C3B52DD0ECA(iVar12))
										{
											if (func_258(iVar12, 1))
											{
												if (Local_195.f_33 > -1)
												{
													iVar14 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_195.f_33));
													if (func_294(iVar12, iVar14, 1))
													{
														func_372(0);
														func_220();
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

void func_372(int iParam0)
{
	if (!func_264(unk_0x0C1D3C552325765B()))
	{
		if (iParam0 || func_360(unk_0x0C1D3C552325765B()) != 0)
		{
			func_201(20);
			if (func_119(unk_0x0C1D3C552325765B()))
			{
				if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8))
				{
					unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
				}
			}
		}
	}
}

void func_373()
{
	switch (Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_2)
	{
		case 0:
			func_603();
			func_374();
			if (Local_195.f_32 == 2)
			{
				Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_2 = 2;
			}
			else if (Local_195.f_32 == 3)
			{
				Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_374();
			if (Local_195.f_32 == 3)
			{
				Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_746();
			break;
	}
}

void func_374()
{
	struct<10> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	int iVar17;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar13 = func_75();
	iVar14 = func_75();
	iVar15 = func_75();
	if (!unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 4))
	{
		if (!unk_0x08BA6DD398CA197C(uLocal_448, 9))
		{
			if (unk_0x08BA6DD398CA197C(Local_195.f_1, 1))
			{
				if (unk_0x848AF823A8EA3C62() == Local_195.f_33 || func_734() == Local_195.f_33)
				{
					if (func_360(unk_0x0C1D3C552325765B()) >= 2)
					{
						sVar16 = func_602();
						iVar17 = func_601(unk_0x0C1D3C552325765B());
						func_599(86, "GB_WINNER", "BIGM_SGHTYD", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
					{
						func_586(1, 1, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_448, 6);
					}
					func_451(142, 1, &Var0, 0);
					unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
				}
				else if (func_369())
				{
					if (func_258(unk_0x0C1D3C552325765B(), 1))
					{
						if (func_360(unk_0x0C1D3C552325765B()) >= 2)
						{
							sVar16 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
							iVar17 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
							func_599(87, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
						{
							func_586(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_448, 6);
						}
						func_451(142, 0, &Var0, 0);
					}
					else
					{
						if (func_360(unk_0x0C1D3C552325765B()) >= 2)
						{
							sVar16 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
							iVar17 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
							func_599(87, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
						{
							func_586(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_448, 6);
						}
						func_451(142, 0, &Var0, 0);
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_448, 9);
			}
			else if (unk_0x08BA6DD398CA197C(Local_195.f_1, 3))
			{
				func_444(87, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
				{
					func_586(0, 7, 0, 0, -1, -1, -1, -1);
					unk_0x88B0F0DC270164B7(&iLocal_448, 6);
				}
				func_451(142, 0, &Var0, 0);
				unk_0x88B0F0DC270164B7(&iLocal_448, 9);
			}
			else if (unk_0x08BA6DD398CA197C(Local_195.f_1, 4))
			{
				if (Local_195.f_35 > -1)
				{
					iVar14 = unk_0x81C85E54237F8A2E(Local_195.f_35);
				}
				if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
				{
					if (func_360(unk_0x0C1D3C552325765B()) >= 2)
					{
						if (unk_0xCB129F9A01D14082(iVar14))
						{
							if (func_258(iVar14, 1))
							{
								sVar16 = func_445(iVar14);
								iVar17 = func_601(iVar14);
							}
							else
							{
								sVar16 = unk_0xCF66111B26743875(iVar14);
								iVar17 = 1;
							}
							func_599(87, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_599(87, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
						}
					}
					func_451(142, 0, &Var0, 0);
					if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
					{
						func_586(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_448, 6);
					}
				}
				else if (func_734() == Local_195.f_33)
				{
					iVar13 = unk_0x81C85E54237F8A2E(Local_195.f_34);
					if (iVar13 != func_75())
					{
						if (func_360(unk_0x0C1D3C552325765B()) >= 2)
						{
							if (unk_0xCB129F9A01D14082(iVar14))
							{
								if (func_258(iVar14, 1))
								{
									sVar16 = func_445(iVar14);
									iVar17 = func_601(iVar14);
								}
								else
								{
									sVar16 = unk_0xCF66111B26743875(iVar14);
									iVar17 = 1;
								}
								func_599(87, "GB_WORK_OVER", "BIGM_SGHTGK", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_599(87, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
							}
						}
						func_451(142, 0, &Var0, 0);
						if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
						{
							func_586(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_448, 6);
						}
					}
				}
				else if (func_369())
				{
					iVar14 = unk_0x81C85E54237F8A2E(Local_195.f_35);
					if (iVar14 != func_75())
					{
						if (iVar14 == unk_0x0C1D3C552325765B())
						{
							if (func_360(unk_0x0C1D3C552325765B()) >= 2)
							{
								if (func_443(1))
								{
									func_444(86, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_444(86, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
							if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
							{
								func_586(1, 1, 0, 0, -1, -1, -1, -1);
								unk_0x88B0F0DC270164B7(&iLocal_448, 6);
							}
							func_451(142, 1, &Var0, 0);
						}
						else if (func_443(1))
						{
							iVar15 = func_442();
							if (func_294(iVar14, iVar15, 1))
							{
								if (func_360(unk_0x0C1D3C552325765B()) >= 2)
								{
									func_423(86, iVar14, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, -1);
								}
								if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
								{
									func_586(1, 1, 0, 0, -1, -1, -1, -1);
									unk_0x88B0F0DC270164B7(&iLocal_448, 6);
								}
								func_451(142, 0, &Var0, 0);
							}
							else
							{
								if (func_360(unk_0x0C1D3C552325765B()) >= 2)
								{
									if (unk_0xCB129F9A01D14082(iVar14))
									{
										if (func_258(iVar14, 1))
										{
											sVar16 = func_445(iVar14);
											iVar17 = func_601(iVar14);
										}
										else
										{
											sVar16 = unk_0xCF66111B26743875(iVar14);
											iVar17 = 1;
										}
										func_599(87, "GB_WORK_OVER", "BIGM_SGHTWK", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_444(87, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
								{
									func_586(0, 2, 0, 0, -1, -1, -1, -1);
									unk_0x88B0F0DC270164B7(&iLocal_448, 6);
								}
								func_451(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_360(unk_0x0C1D3C552325765B()) >= 2)
							{
								if (unk_0xCB129F9A01D14082(iVar14))
								{
									if (func_258(iVar14, 1))
									{
										sVar16 = func_445(iVar14);
										iVar17 = func_601(iVar14);
									}
									else
									{
										sVar16 = unk_0xCF66111B26743875(iVar14);
										iVar17 = 1;
									}
									func_599(87, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar16, iVar17, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_444(87, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
							{
								func_586(0, 2, 0, 0, -1, -1, -1, -1);
								unk_0x88B0F0DC270164B7(&iLocal_448, 6);
							}
							func_451(142, 0, &Var0, 0);
						}
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_448, 9);
			}
			else if (unk_0x08BA6DD398CA197C(Local_195.f_1, 5))
			{
				if (func_406())
				{
					if (func_733())
					{
						if (func_360(unk_0x0C1D3C552325765B()) >= 2)
						{
						}
					}
					else if (func_360(unk_0x0C1D3C552325765B()) >= 2)
					{
						func_444(87, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
				{
					func_586(0, 8, 0, 0, -1, -1, -1, -1);
					unk_0x88B0F0DC270164B7(&iLocal_448, 6);
				}
				func_451(159, 0, &Var0, 0);
				unk_0x88B0F0DC270164B7(&iLocal_448, 9);
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_448, 9))
		{
			func_399();
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 8))
			{
				unk_0x88B0F0DC270164B7(&iLocal_449, 8);
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_448, 10))
			{
				if (Local_195.f_34 != -1)
				{
					if (unk_0x08BA6DD398CA197C(iLocal_448, 5))
					{
						if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_195.f_34)))
						{
							func_397(unk_0x81C85E54237F8A2E(Local_195.f_34), 432, 0);
							func_395(unk_0x81C85E54237F8A2E(Local_195.f_34), 1, 0);
							func_394(unk_0x81C85E54237F8A2E(Local_195.f_34), 0, 0);
							func_393(unk_0x81C85E54237F8A2E(Local_195.f_34), 0);
							func_392(unk_0x81C85E54237F8A2E(Local_195.f_34), Global_262145.f_10787, 0);
							unk_0x88B0F0DC270164B7(&iLocal_448, 10);
						}
					}
				}
			}
			if (func_375(&uLocal_817, 1, 0))
			{
				unk_0x88B0F0DC270164B7(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 4);
			}
		}
	}
}

int func_375(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_201(29);
	if ((*uParam0 > 0 && !func_300()) && func_360(unk_0x0C1D3C552325765B()) != 0)
	{
		if (!func_389())
		{
			func_388();
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
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 2);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_387(uParam0, 1);
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
				func_382(iParam2);
				func_387(uParam0, 2);
			}
			break;
		
		case 2:
			func_382(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_376(func_377(0)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_387(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
				func_387(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_376(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_377(int iParam0)
{
	if (((func_380(unk_0x0C1D3C552325765B()) || func_379(unk_0x0C1D3C552325765B())) || func_320()) || iParam0)
	{
		if (func_379(unk_0x0C1D3C552325765B()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_291(func_378()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_378()
{
	return Global_1624945;
}

bool func_379(int iParam0)
{
	return func_292(func_198(iParam0), 0);
}

bool func_380(int iParam0)
{
	return func_381(func_198(iParam0));
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
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
		
		default:
	}
	return 0;
}

void func_382(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_801(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF()) && !func_174(unk_0x0C1D3C552325765B(), 22)) && func_360(unk_0x0C1D3C552325765B()) != 0) && !func_385(func_386())) && !func_380(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_384(func_377(iParam0), -1);
			func_383(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_383(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_319(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_300())
	{
		unk_0xAB16AADE80707D47(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_384(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_385(int iParam0)
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

int func_386()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	return 0;
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_388()
{
	Global_2453273 = 1;
}

int func_389()
{
	if (func_198(unk_0x0C1D3C552325765B()) == 170)
	{
		return 1;
	}
	if (func_390(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (func_801(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_391(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_391(int iParam0)
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

void func_392(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_207())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_700[iParam0]) || Global_2414657.f_700[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_388), iVar0);
			Global_2414657.f_502[iVar0] = uParam1;
			Global_2414657.f_700[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_388), iVar0);
			Global_2414657.f_700[iParam0] = -1;
		}
	}
}

void func_393(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_2414657.f_365), iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_365), iParam0);
	}
	if (unk_0x16833EFAA58E63DB(Global_2414657[iParam0]))
	{
		if (bParam1)
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 0);
		}
		else
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 1);
		}
	}
}

void func_394(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_801(iParam0, 1, 1))
		{
			Global_2414657.f_634[iParam0] = unk_0xEAE20F1125B83888();
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_364), iParam0);
			func_393(iParam0, bParam2);
		}
	}
	else
	{
		func_393(iParam0, bParam2);
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_364), iParam0);
		Global_2414657.f_634[iParam0] = -1;
	}
}

void func_395(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_207())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_396(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = iParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_396(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

void func_397(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_207())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_535[iParam0]) || Global_2414657.f_535[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_398();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_398();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_398()
{
	Global_2414657.f_923 = 1;
}

void func_399()
{
	if (!func_405())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_400();
}

void func_400()
{
	func_402();
	func_401(0);
}

void func_401(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_402()
{
	if (!func_404())
	{
	}
	if (func_405())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_403();
		unk_0x953FDEB57BB0D276();
	}
}

void func_403()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_404()
{
	if (!func_405())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_403();
	return unk_0x7A2AFC1B08BD3742();
}

int func_405()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_406()
{
	if (!func_407(1))
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	return 1;
}

int func_407(bool bParam0)
{
	if (func_215(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			return 0;
		}
	}
	if (func_102(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_422())
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_34(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_345())
	{
		return 0;
	}
	if (func_215(unk_0x0C1D3C552325765B(), 0) || func_215(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_215(unk_0x0C1D3C552325765B(), 12) || func_215(unk_0x0C1D3C552325765B(), 14)) || func_215(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_420(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (!func_413())
		{
			return 0;
		}
	}
	if (func_412())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_411(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_410())
	{
		return 0;
	}
	if (func_409(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_408(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_408(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_410()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	if (!func_801(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_412()
{
	return Global_91458.f_304 > 0;
}

int func_413()
{
	int iVar0;
	
	iVar0 = func_198(unk_0x0C1D3C552325765B());
	if (func_419(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) || func_418(unk_0x0C1D3C552325765B()))
	{
		if (iVar0 == 167 || iVar0 == 168)
		{
			return 1;
		}
	}
	if (func_416(unk_0x0C1D3C552325765B()))
	{
		if (func_415(iVar0) || func_414(iVar0))
		{
			return 1;
		}
	}
	if (func_390(unk_0x0C1D3C552325765B()))
	{
		if (func_414(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0)
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

int func_415(int iParam0)
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

int func_416(int iParam0)
{
	if (func_417(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
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

int func_418(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (func_801(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_391(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_419(int iParam0)
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

int func_420(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_418(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_390(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_421()
{
	return Global_1315229;
}

bool func_422()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_423(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_441(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	if (iParam8 != -1)
	{
		unk_0x88B0F0DC270164B7(&(Var0.f_63), iParam8);
	}
	return func_424(&Var0);
}

int func_424(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_427(uParam0, uParam0->f_16);
	func_426(uParam0);
	if (func_425(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_303(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_425(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_426(var uParam0)
{
	if (func_305(uParam0->f_1))
	{
		uParam0->f_66 = func_263();
	}
}

void func_427(var uParam0, int iParam1)
{
	if (func_305(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_75())
	{
		return;
	}
	if (func_303(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_428(iParam1, -2, 0, 0);
		}
	}
}

int func_428(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_80(unk_0x0C1D3C552325765B()) || (func_440() && func_439()))
	{
		uVar1 = func_438();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(uVar1))
			{
				if (unk_0xA43666ACD375E339(uVar1) != -1)
				{
					if (func_801(unk_0xA43666ACD375E339(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_437(iParam1, iParam0, 0);
							}
							else
							{
								return func_435(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_435(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_437(iParam1, iParam0, 0);
				}
				else
				{
					return func_429(0, -1, 0);
				}
			}
			else
			{
				return func_429(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_437(iParam1, iParam0, 0);
		}
		else
		{
			return func_435(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_435(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_429(bool bParam0, int iParam1, bool bParam2)
{
	return func_430(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_430(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_79(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_434(1);
				}
				else
				{
					return func_434(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_431(iVar0, iParam2, 1);
			}
			else
			{
				return func_431(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_434(1);
	}
	return func_434(0);
}

int func_431(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_433(iParam0, iParam1);
	if (func_432(Global_1626500.f_83867))
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

int func_432(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_433(int iParam0, int iParam1)
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

int func_434(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_435(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_112(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_79(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_434(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_436(1);
			}
			else
			{
				return func_430(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_434(1);
			}
			else
			{
				return func_430(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_262(iParam0);
	if (!iVar3 == -1)
	{
		return func_260(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_436(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_437(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_430(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_438()
{
	return Global_2359301.f_2;
}

bool func_439()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_440()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

void func_441(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_75();
	uParam1->f_17 = func_75();
	uParam1->f_18 = func_75();
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

int func_442()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_443(bool bParam0)
{
	return func_258(unk_0x0C1D3C552325765B(), bParam0);
}

int func_444(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_441(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_424(&Var0);
}

char* func_445(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		uVar0 = func_450(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return uVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		uVar0 = func_448(iParam0, 0);
		return uVar0;
	}
	if (((func_174(iParam0, 28) || func_174(unk_0x0C1D3C552325765B(), 28)) || func_447(iParam0)) && !func_446(iParam0))
	{
		return func_448(iParam0, 0);
	}
	iVar1 = func_76(iParam0);
	if (iVar1 != func_75())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_448(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_75())
	{
		uVar0 = func_450(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar0))
		{
			return func_448(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_446(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_77(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_77(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_448(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_247(iParam0, 1))
		{
			return func_449();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

var func_449()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

var func_450(var uParam0)
{
	return uParam0;
}

void func_451(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	
	func_584(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (iParam3 == 0)
		{
			iVar1 = (iVar1 + func_583(iParam0));
		}
		else
		{
			iVar1 = (iVar1 + Global_262145.f_16146);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (iParam3 == 0)
		{
			iVar0 = (iVar0 + func_582(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16145);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if (iParam0 == 185)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_198(unk_0x0C1D3C552325765B()) == 167 || func_198(unk_0x0C1D3C552325765B()) == 168)
	{
		if (bParam1)
		{
			if (func_581(unk_0x0C1D3C552325765B()) > 0)
			{
				func_580();
			}
			else
			{
				func_579();
			}
		}
		else
		{
			func_578();
		}
	}
	func_549(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_538(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_322();
	if (iVar6 != func_75() && iParam0 != 148)
	{
		if (func_258(unk_0x0C1D3C552325765B(), 0))
		{
			if (!func_294(unk_0x0C1D3C552325765B(), iVar6, 1))
			{
				func_524(&iVar0, 1);
			}
		}
	}
	func_521(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1750569.f_10 = iVar1;
		func_520();
		func_478(0, unk_0xA0081090911D13E5(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1750569.f_9 = iVar0;
		iVar11 = func_442();
		if (iVar11 != func_75())
		{
			func_477(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_443(1);
		if (iParam0 == 168)
		{
			if (!func_476())
			{
				unk_0x68D326E42C98E875(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_475())
			{
				if (!func_476())
				{
					unk_0x68D326E42C98E875(iVar0, uVar5);
				}
			}
			else if (func_476())
			{
				func_466(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2572880[iVar13 /*73*/].f_8.f_54 = uVar9;
				Global_2572880[iVar13 /*73*/].f_8.f_55 = uVar10;
				Global_2572880[iVar13 /*73*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x68D326E42C98E875(iVar0, uVar5);
			}
		}
		else if (func_476())
		{
			func_466(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2572880[iVar14 /*73*/].f_8.f_54 = uVar9;
			Global_2572880[iVar14 /*73*/].f_8.f_55 = uVar10;
			Global_2572880[iVar14 /*73*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x2C88EFEEFFB32E94(uVar9, uVar10, iVar0, bVar12);
		}
		func_465(iParam0, iVar0);
		if (func_464(iParam0))
		{
			if (func_463(iParam0) > -1)
			{
				func_462(func_463(iParam0), iVar0);
			}
		}
		Global_2453923 = iVar0;
		func_461(&Global_2452207, 0, 0);
	}
	if (func_218(unk_0x0C1D3C552325765B()) || func_264(unk_0x0C1D3C552325765B()))
	{
		func_452(iParam0);
	}
	if (func_381(iParam0))
	{
		Global_1750587.f_13 = iVar0;
		Global_1750587.f_14 = iVar1;
	}
}

void func_452(int iParam0)
{
	if (func_460(unk_0x0C1D3C552325765B()) && func_475())
	{
		if (func_415(iParam0))
		{
			func_455(4611, -1);
		}
		else if (func_454(iParam0))
		{
			func_455(4613, -1);
		}
		else if (func_292(iParam0, 1))
		{
			func_455(4614, -1);
		}
		else if (func_453(iParam0))
		{
			func_455(4615, -1);
		}
	}
}

int func_453(int iParam0)
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

int func_454(int iParam0)
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

void func_455(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_459(iParam0, func_367(iParam1), 0);
	iVar0++;
	if (!func_458(iParam0))
	{
		func_457(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_456(iParam0, iVar0, iParam1, 1);
	}
}

void func_456(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_367(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_367(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_367(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_367(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_367(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_367(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_367(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_367(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_367(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_367(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_367(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_367(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_367(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_367(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_367(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_367(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_367(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_367(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_367(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_367(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_367(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_367(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_367(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_367(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_367(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_367(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_367(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_367(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_367(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_367(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_367(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_367(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_457(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_367(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_458(int iParam0)
{
	if (Global_1352216)
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
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
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
	uVar0 = Global_2491469[iParam0 /*3*/][func_367(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_460(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_84, 14);
}

void func_461(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

void func_462(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

int func_463(int iParam0)
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

int func_464(int iParam0)
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

void func_465(int iParam0, int iParam1)
{
	if (func_460(unk_0x0C1D3C552325765B()) && func_475())
	{
		if (func_415(iParam0) && iParam1 > 0)
		{
			func_457(4612, (func_459(4612, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_466(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_476())
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
			if (iParam1 > 0)
			{
				func_467(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -47546905:
			func_467(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_467(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_136()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_474(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_473(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_468(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_468(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_469(iParam0);
	}
}

void func_469(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_472(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_470(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_470(var uParam0)
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
	func_471(&(uParam0->f_8.f_3));
	func_471(&(uParam0->f_8.f_16));
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

void func_471(var uParam0)
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

int func_472(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_473(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_474(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_476())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_475()
{
	return func_321(unk_0x0C1D3C552325765B());
}

int func_476()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

void func_477(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1614576[iParam0 /*324*/].f_10.f_7[0];
	*uParam2 = Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_478(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_479(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_479(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_489(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_485(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_480(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_480(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_483(iParam0, 1) };
	if (iParam0 == func_482(unk_0xA0081090911D13E5()))
	{
		func_481(1);
	}
	func_485(Var0, iParam1, 0, sParam2, iParam3);
}

void func_481(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_482(var uParam0)
{
	return uParam0;
}

Vector3 func_483(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_484(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_484(var uParam0)
{
	return uParam0;
}

void func_485(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_488(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_487();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_486();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_486()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_487()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_488(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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

var func_489(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_490(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_490(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_519(unk_0x0C1D3C552325765B()) || func_518(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_517(uParam2))
	{
	}
	if (func_516())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_514(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_513(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_511(0, &iVar1);
					break;
				
				case 3:
					func_511(1, &iVar1);
					break;
				
				case 1:
					func_509(&iVar1);
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
			func_508(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_500((func_507(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_508(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_495(iVar1);
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
				func_491((func_493(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_491((func_493(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_491(int iParam0)
{
	if (func_516())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_492(joaat("mpply_globalxp"), iParam0);
	}
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_493(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_801(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_494(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_494(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_495(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_77(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_498(func_499(&Var0));
			if (iVar13 == 0)
			{
				func_497(&Global_1352222, iParam0);
				func_496(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_497(&Global_1352223, iParam0);
				func_496(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_497(&Global_1352224, iParam0);
				func_496(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_497(&Global_1352225, iParam0);
				func_496(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_497(&Global_1352226, iParam0);
				func_496(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_496(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_497(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_498(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_499(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	if (func_516())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_367(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_367(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_506(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_504(iParam0, 1);
		}
		func_456(632, iParam0, -1, 1);
		func_457(633, func_504(iParam0, 1), -1, 1, 0);
		Global_1352337[func_367(-1)] = iParam0;
		func_501(7, 0);
	}
}

void func_501(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_503(iParam0, iParam1))
	{
		iVar0 = func_502();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_502()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_503(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_504(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_505(iParam0, 0);
}

int func_505(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_506(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_507(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_367(-1)];
			}
			else if (func_506(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_367(-1)];
	}
	return 0;
}

void func_508(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_459(iParam0, func_367(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_458(iParam0))
	{
		func_457(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_456(iParam0, iVar0, iParam2, 1);
	}
}

void func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_79(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_78(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_510(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_510(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_510(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_511(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_801(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_78(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_801(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_512(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_78(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_510(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_510(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_512(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_70(iParam0), func_70(iParam1));
	return 0f;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_510(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_514(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_507(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_507(unk_0x0C1D3C552325765B());
		}
	}
	if (func_515(8000, 0, 0) > 0)
	{
		if (func_515(8000, 0, 0) < (iParam0 + func_507(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_515(8000, 0, 0) - func_507(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_515(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_516()
{
	return 1;
}

int func_517(var uParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_518(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_519(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_520()
{
	Global_2453272 = 1;
}

void func_521(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_179(7))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	iVar1 = func_522(iParam0);
	iVar2 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2482149.f_4698.f_75, unk_0x4B50AAB32FBE0483()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16348)
		{
			iVar2 = Global_262145.f_16348;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16349)
		{
			iVar2 = Global_262145.f_16349;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16347)
		{
			iVar2 = Global_262145.f_16347;
		}
	}
	else if (func_415(iParam0))
	{
		if (iVar2 > Global_262145.f_16350)
		{
			iVar2 = Global_262145.f_16350;
		}
	}
	else if (func_292(iParam0, 0) || func_454(iParam0))
	{
		if (iVar2 > Global_262145.f_16351)
		{
			iVar2 = Global_262145.f_16351;
		}
	}
	else if (iVar2 > Global_262145.f_10827)
	{
		iVar2 = Global_262145.f_10827;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10918;
		
		case 152:
			return Global_262145.f_10953;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10941;
		
		case 157:
			return Global_262145.f_10908;
		
		case 159:
			return Global_262145.f_10891;
		
		case 164:
			return Global_262145.f_10931;
		
		case 160:
			return Global_262145.f_10981;
		
		case 162:
			return Global_262145.f_11001;
		
		case 163:
			return Global_262145.f_10966;
		
		case 154:
			return Global_262145.f_11036;
		
		case 155:
			return Global_262145.f_11026;
		
		case 153:
			return Global_262145.f_10990;
		
		case 170:
			return Global_262145.f_12877;
		
		case 171:
			return Global_262145.f_12936;
		
		case 172:
			return Global_262145.f_12954;
		
		case 173:
			return Global_262145.f_12895;
		
		case 166:
			return Global_262145.f_12910;
		
		case 167:
			return Global_262145.f_13001;
		
		case 169:
			return Global_262145.f_12973;
		
		case 168:
			return Global_262145.f_12966;
		
		case 179:
			return Global_262145.f_16230;
		
		case 180:
			return Global_262145.f_16009;
		
		case 182:
			return Global_262145.f_16009;
		
		case 183:
			return Global_262145.f_16009;
		
		case 185:
			return Global_262145.f_16009;
		
		case 186:
			return Global_262145.f_16009;
		
		case 189:
			return Global_262145.f_16230;
		
		case 190:
			return Global_262145.f_15885;
		
		case 191:
			return Global_262145.f_15976;
		
		case 192:
			return Global_262145.f_15770;
		
		case 193:
			return Global_262145.f_16230;
		
		case 194:
			return Global_262145.f_16230;
		
		case 195:
			return Global_262145.f_16009;
		
		case 197:
			return Global_262145.f_16009;
		
		case 198:
			return Global_262145.f_16009;
		
		case 199:
			return Global_262145.f_16230;
		
		case 200:
			return Global_262145.f_16230;
		
		case 201:
			return Global_262145.f_16230;
		
		case 205:
			return Global_262145.f_16230;
		
		case 207:
			return Global_262145.f_16009;
		
		case 208:
			return Global_262145.f_16009;
		
		case 209:
			return Global_262145.f_16009;
		
		case 210:
			return Global_262145.f_16230;
		
		case 211:
			return Global_262145.f_16230;
		
		default:
	}
	return 0;
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10917;
		
		case 152:
			return Global_262145.f_10952;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10940;
		
		case 157:
			return Global_262145.f_10907;
		
		case 159:
			return Global_262145.f_10890;
		
		case 164:
			return Global_262145.f_10930;
		
		case 160:
			return Global_262145.f_10980;
		
		case 162:
			return Global_262145.f_11000;
		
		case 163:
			return Global_262145.f_10965;
		
		case 154:
			return Global_262145.f_11035;
		
		case 155:
			return Global_262145.f_11025;
		
		case 153:
			return Global_262145.f_10989;
		
		case 170:
			return Global_262145.f_12876;
		
		case 171:
			return Global_262145.f_12935;
		
		case 172:
			return Global_262145.f_12953;
		
		case 173:
			return Global_262145.f_12894;
		
		case 166:
			return Global_262145.f_12909;
		
		case 179:
			return Global_262145.f_16229;
		
		case 180:
			return Global_262145.f_16008;
		
		case 182:
			return Global_262145.f_16008;
		
		case 183:
			return Global_262145.f_16008;
		
		case 185:
			return Global_262145.f_16008;
		
		case 186:
			return Global_262145.f_16008;
		
		case 189:
			return Global_262145.f_16229;
		
		case 193:
			return Global_262145.f_16229;
		
		case 194:
			return Global_262145.f_16229;
		
		case 195:
			return Global_262145.f_16008;
		
		case 197:
			return Global_262145.f_16008;
		
		case 198:
			return Global_262145.f_16008;
		
		case 199:
			return Global_262145.f_16229;
		
		case 200:
			return Global_262145.f_16229;
		
		case 201:
			return Global_262145.f_16229;
		
		case 205:
			return Global_262145.f_16229;
		
		case 207:
			return Global_262145.f_16008;
		
		case 208:
			return Global_262145.f_16008;
		
		case 209:
			return Global_262145.f_16008;
		
		case 210:
			return Global_262145.f_16229;
		
		case 211:
			return Global_262145.f_16229;
		
		case 190:
			if (!func_718())
			{
				return Global_262145.f_15884;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_718())
			{
				return Global_262145.f_15975;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_718())
			{
				return Global_262145.f_15769;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_524(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_718())
		{
			if (func_443(0))
			{
				if (!func_319(0))
				{
					if (unk_0xCB129F9A01D14082(func_442()))
					{
						if (func_537() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_537());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_535(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_528("GB_BCUT_TICK1", func_442(), iVar0, 0, 0, 1, 1);
						}
						func_527(20);
						func_525(func_442(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_525(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_801(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_526(iParam0));
	}
}

var func_526(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_527(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_528(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_428(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_533(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_529(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_529(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_532() || !unk_0x1504F110F2576375()) || !func_134(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_530(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_530(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_531(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_532()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

var func_533(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_534(&cVar0);
}

var func_534(char[4] cParam0)
{
	return cParam0;
}

void func_535(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_536(1);
	}
	else
	{
		iVar1 = func_536(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_536(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_537()
{
	return Global_262145.f_10821;
}

void func_538(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_475())
			{
				Var0 = { func_548() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_547(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_547(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_541(unk_0x0C1D3C552325765B(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16459);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16458);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_540(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16449);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16448));
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
					func_527(88);
				}
				Global_2482149.f_4698.f_186 = *iParam2;
			}
			else if (func_319(0))
			{
				Var15 = { func_539(func_442()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_547(func_442(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_547(func_442(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_541(func_442(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16459));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16458));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16498;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16499;
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

struct<2> func_539(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_177;
}

int func_540(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iVar0)))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_134(iVar2, 0) && !func_294(iVar2, unk_0x0C1D3C552325765B(), 1))
			{
				iVar1++;
			}
			else if (func_134(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_541(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_546(iParam1);
	if (func_545(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14838;
				if (func_542(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14843);
				}
				if (func_542(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14848);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14837;
				if (func_542(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14842);
				}
				if (func_542(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14836;
				if (func_542(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14841);
				}
				if (func_542(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14834;
				if (func_542(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14839);
				}
				if (func_542(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14835;
				if (func_542(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14840);
				}
				if (func_542(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_542(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_544(iParam0, iParam1))
	{
		iVar0 = func_543(iParam0, iParam1);
		return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_545(iParam1) && iParam0 != func_75())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_544(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_545(iParam1) && iParam0 != func_75())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_545(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_546(int iParam0)
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

int func_547(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_545(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_548()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_177;
}

void func_549(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_217(unk_0x0C1D3C552325765B()))
		{
			if (bParam1)
			{
				func_577();
			}
			func_576();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_217(unk_0x0C1D3C552325765B()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_568(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_567(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_540(&uVar2);
					iVar4 = Global_262145.f_14023;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13232));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_527(44);
					}
				}
				func_561(*iParam3);
				func_560();
				Global_2482149.f_4698.f_186 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xE5697AB254094B0D())
				{
					iVar8 = iVar7;
					if (unk_0x1489FFC2CBA39486(iVar8))
					{
						iVar9 = unk_0xF3B8A064D228878B(iVar8);
						if (func_559(iVar9))
						{
							func_551(iVar9, 1);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_217(unk_0x0C1D3C552325765B()))
		{
			func_550();
		}
	}
}

void func_550()
{
	int iVar0;
	
	iVar0 = Global_2507793[func_136()];
	iVar0++;
	func_456(3647, iVar0, -1, 1);
}

void func_551(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_553(iParam0);
	func_552(iParam0, uVar0, iParam1);
}

void func_552(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 457;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_75())
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			unk_0x8E36889D76C8D4FA(1, &Var0, 4, func_526(iParam0));
		}
	}
}

int func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_558();
	iVar0 = func_556(iParam0, iVar0);
	iVar1 = Global_1614576[func_442() /*324*/].f_10.f_233;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12837));
	if (iVar0 < func_555())
	{
		iVar0 = func_555();
	}
	if (iVar0 > func_554())
	{
		iVar0 = func_554();
	}
	return iVar0;
}

int func_554()
{
	return Global_262145.f_12838;
}

int func_555()
{
	return Global_262145.f_14013;
}

int func_556(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_581(iParam0) * func_557());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_557()
{
	return Global_262145.f_14012;
}

var func_558()
{
	return Global_262145.f_10813;
}

int func_559(int iParam0)
{
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			if (func_294(iParam0, unk_0x0C1D3C552325765B(), 0))
			{
				if (!func_174(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_560()
{
	int iVar0;
	
	iVar0 = Global_2507799[func_136()];
	iVar0++;
	func_456(3646, iVar0, -1, 1);
}

void func_561(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2507802[func_136()];
	iVar0 = (iVar0 + iParam0);
	func_456(3648, iVar0, -1, 1);
	if (func_564(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_563(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_562(7666, iVar2, -1, 1);
	}
}

var func_562(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_136();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD0BD93DA65E5EE25(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14156;
			break;
		
		case 2:
			return Global_262145.f_14157;
			break;
		
		case 3:
			return Global_262145.f_14158;
			break;
		
		case 4:
			return Global_262145.f_14159;
			break;
		
		case 5:
			return Global_262145.f_14160;
			break;
		
		case 6:
			return Global_262145.f_14161;
			break;
		
		case 7:
			return Global_262145.f_14162;
			break;
		
		case 8:
			return Global_262145.f_14163;
			break;
		
		case 9:
			return Global_262145.f_14164;
			break;
		
		case 10:
			return Global_262145.f_14165;
			break;
		
		case 11:
			return Global_262145.f_14166;
			break;
		
		case 12:
			return Global_262145.f_14167;
			break;
		
		case 13:
			return Global_262145.f_14168;
			break;
		
		case 14:
			return Global_262145.f_14169;
			break;
		
		case 15:
			return Global_262145.f_14170;
			break;
		
		case 16:
			return Global_262145.f_14171;
			break;
		
		case 17:
			return Global_262145.f_14172;
			break;
		
		case 18:
			return Global_262145.f_14173;
			break;
		
		case 19:
			return Global_262145.f_14174;
			break;
		
		case 20:
			return Global_262145.f_14175;
			break;
		
		case 21:
			return Global_262145.f_14176;
			break;
		
		case 22:
			return Global_262145.f_14177;
			break;
		
		case 23:
			return Global_262145.f_14178;
			break;
		
		case 24:
			return Global_262145.f_14179;
			break;
	}
	return 0;
}

int func_564(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_136();
	}
	iVar0 = 0;
	iVar1 = func_566(iParam0, iParam1);
	uVar2 = func_565(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_565(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_566(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_136();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_567(int iParam0)
{
	if (iParam0 >= Global_262145.f_13210)
	{
		return Global_262145.f_13231;
	}
	else if (iParam0 >= Global_262145.f_13209)
	{
		return Global_262145.f_13230;
	}
	else if (iParam0 >= Global_262145.f_13208)
	{
		return Global_262145.f_13229;
	}
	else if (iParam0 >= Global_262145.f_13207)
	{
		return Global_262145.f_13228;
	}
	else if (iParam0 >= Global_262145.f_13206)
	{
		return Global_262145.f_13227;
	}
	else if (iParam0 >= Global_262145.f_13205)
	{
		return Global_262145.f_13226;
	}
	else if (iParam0 >= Global_262145.f_13204)
	{
		return Global_262145.f_13225;
	}
	else if (iParam0 >= Global_262145.f_13203)
	{
		return Global_262145.f_13224;
	}
	else if (iParam0 >= Global_262145.f_13202)
	{
		return Global_262145.f_13223;
	}
	else if (iParam0 >= Global_262145.f_13201)
	{
		return Global_262145.f_13222;
	}
	else if (iParam0 >= Global_262145.f_13200)
	{
		return Global_262145.f_13221;
	}
	else if (iParam0 >= Global_262145.f_13199)
	{
		return Global_262145.f_13220;
	}
	else if (iParam0 >= Global_262145.f_13198)
	{
		return Global_262145.f_13219;
	}
	else if (iParam0 >= Global_262145.f_13197)
	{
		return Global_262145.f_13218;
	}
	else if (iParam0 >= Global_262145.f_13196)
	{
		return Global_262145.f_13217;
	}
	else if (iParam0 >= Global_262145.f_13195)
	{
		return Global_262145.f_13216;
	}
	else if (iParam0 >= Global_262145.f_13194)
	{
		return Global_262145.f_13215;
	}
	else if (iParam0 >= Global_262145.f_13193)
	{
		return Global_262145.f_13214;
	}
	else if (iParam0 >= Global_262145.f_13192)
	{
		return Global_262145.f_13213;
	}
	else if (iParam0 >= Global_262145.f_13191)
	{
		return Global_262145.f_13212;
	}
	return Global_262145.f_13211;
}

int func_568(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_575(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_574(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_573(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_569(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_569(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_573(unk_0xB5BF1B58C833F7A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_569(int iParam0)
{
	int iVar0;
	
	if (func_572(iParam0))
	{
		iVar0 = func_570(func_571(iParam0));
		return func_459(iVar0, -1, 0);
	}
	return 0;
}

int func_570(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3626;
	}
	else if (iParam0 == 1)
	{
		return 3627;
	}
	else if (iParam0 == 2)
	{
		return 3628;
	}
	else if (iParam0 == 3)
	{
		return 3629;
	}
	else if (iParam0 == 4)
	{
		return 3630;
	}
	return 3626;
}

int func_571(int iParam0)
{
	int iVar0;
	
	if (func_572(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_572(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_573(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13410;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13408;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13412;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13406;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13404;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13414;
	}
	return 0;
}

int func_574(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_572(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1751743[iVar0] == iParam1 && Global_1751750[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_575(int iParam0)
{
	int iVar0;
	
	if (func_572(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_576()
{
	int iVar0;
	
	iVar0 = Global_2507790[func_136()];
	iVar0++;
	Global_2507790[func_136()] = iVar0;
	func_456(3645, iVar0, -1, 1);
}

void func_577()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507787[func_136()];
	iVar1 = Global_2507796[func_136()];
	iVar0++;
	iVar1++;
	Global_2507787[func_136()] = iVar0;
	Global_2507796[func_136()] = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_89 = iVar1;
	func_456(3643, iVar0, -1, 1);
	func_456(3644, iVar1, -1, 1);
}

void func_578()
{
	if (func_718())
	{
		Global_2443212.f_3065.f_134 = 0;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
	}
}

void func_579()
{
	if (func_718())
	{
		if (Global_2443212.f_3065.f_134 < 10)
		{
			Global_2443212.f_3065.f_134++;
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

void func_580()
{
	if (func_718())
	{
		if (Global_2443212.f_3065.f_134 > 0)
		{
			Global_2443212.f_3065.f_134 = (Global_2443212.f_3065.f_134 - 1);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

int func_581(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_27;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10938) * Global_262145.f_10943));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10888) * Global_262145.f_10893));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10915) * Global_262145.f_10919));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10928) * Global_262145.f_10932));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10950) * Global_262145.f_10955));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11112) * Global_262145.f_11113));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11118) * Global_262145.f_11119));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11117));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11110) * Global_262145.f_11111));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11114) * Global_262145.f_11115));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11109));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12933;
		
		case 172:
			return Global_262145.f_12949;
		
		case 173:
			return Global_262145.f_12892;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16153;
		
		case 180:
			return Global_262145.f_16029;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16037;
		
		case 185:
			return Global_262145.f_16046;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16241;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16258;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16106;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16289;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16167;
		
		case 205:
			return Global_262145.f_16276;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16271;
		
		case 211:
			return Global_262145.f_16235;
		
		default:
	}
	return 0;
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10939) * Global_262145.f_10944));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10889) * Global_262145.f_10894));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10916) * Global_262145.f_10920));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10929) * Global_262145.f_10933));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10951) * Global_262145.f_10956));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10988) * Global_262145.f_10991));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11034) * Global_262145.f_11037));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11024) * Global_262145.f_11027));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10979) * Global_262145.f_10982));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10999) * Global_262145.f_11004));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10964) * Global_262145.f_10967));
		
		case 170:
			return Global_262145.f_12875;
		
		case 171:
			return Global_262145.f_12934;
		
		case 172:
			return Global_262145.f_12950;
		
		case 173:
			return Global_262145.f_12893;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_14967;
		
		case 168:
			return Global_262145.f_14966;
		
		case 179:
			return Global_262145.f_16154;
		
		case 180:
			return Global_262145.f_16030;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16038;
		
		case 185:
			return Global_262145.f_16047;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16242;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16259;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16107;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16290;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16168;
		
		case 205:
			return Global_262145.f_16277;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16272;
		
		case 211:
			return Global_262145.f_16236;
		
		default:
	}
	return 0;
}

void func_584(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_585(iParam0))
	{
		if (!func_718())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10832;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_381(iParam0))
	{
		*uParam1 = (Global_262145.f_16007 / 100f);
		*uParam2 = (Global_262145.f_16007 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10831;
		*uParam2 = Global_262145.f_10830;
	}
	if (func_381(iParam0))
	{
		if (func_258(unk_0x0C1D3C552325765B(), 1))
		{
			*uParam1 = (Global_262145.f_16006 / 100f);
			*uParam2 = (Global_262145.f_16006 / 100f);
		}
	}
	else if (func_258(unk_0x0C1D3C552325765B(), 1))
	{
		*uParam1 = Global_262145.f_10829;
		*uParam2 = Global_262145.f_10828;
	}
	iVar0 = func_322();
	if (iVar0 != func_75())
	{
		if (func_294(unk_0x0C1D3C552325765B(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_585(int iParam0)
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

void func_586(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_198(unk_0x0C1D3C552325765B());
	if (func_381(iVar0))
	{
		Global_1750587.f_2 = func_598();
		Global_1750587.f_3 = func_597();
		Global_1750587.f_50 = iParam4;
		Global_1750587.f_51 = iParam5;
		Global_1750587.f_10 = unk_0x39E54E7BC7452169();
		Global_1750587.f_20 = (Global_1750587.f_10 - Global_1750587.f_9);
		Global_1750587.f_12 = iParam1;
		Global_1750587.f_19 = func_591(iVar0, bParam0, func_596(bParam3));
		if (bParam0)
		{
			Global_1750587.f_11 = 1;
		}
		else
		{
			Global_1750587.f_11 = 0;
		}
		if ((func_218(unk_0x0C1D3C552325765B()) || func_361(unk_0x0C1D3C552325765B())) || func_264(unk_0x0C1D3C552325765B()))
		{
			Global_1750587.f_8 = 1;
		}
		else
		{
			Global_1750587.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1750587.f_43 = 0;
			Global_1750587.f_45 = func_590(func_442(), iParam2);
			Global_1750587.f_47 = iParam7;
			Global_1750587.f_46 = iParam6;
			Global_1750587.f_52 = func_589(func_442(), iParam2);
		}
		func_587();
	}
	else
	{
		Global_1750569.f_6 = unk_0x39E54E7BC7452169();
		if (bParam0)
		{
			Global_1750569.f_7 = 1;
		}
		else
		{
			Global_1750569.f_7 = 0;
		}
		Global_1750569.f_8 = iParam1;
		if (Global_1750569.f_4 == 0)
		{
			if ((func_218(unk_0x0C1D3C552325765B()) || func_361(unk_0x0C1D3C552325765B())) || func_264(unk_0x0C1D3C552325765B()))
			{
				Global_1750569.f_4 = 1;
			}
		}
	}
}

void func_587()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1750587);
	func_588();
}

void func_588()
{
	struct<53> Var0;
	
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
	Global_1750587 = { Var0 };
	Global_1750587.f_29 = 0;
	Global_1750587.f_30 = 0;
	Global_1750587.f_17 = 0;
}

int func_589(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_542(iParam0, iParam1, 2);
	bVar1 = func_542(iParam0, iParam1, 1);
	bVar2 = func_542(iParam0, iParam1, 0);
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

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_545(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_591(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_415(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 19;
	}
	else if (func_414(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_292(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15544;
			iVar1 = 20;
		}
	}
	else if (func_381(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_595(func_442()), func_594(func_442()), func_598(), func_597(), iVar1, iVar0);
	}
	func_593(iVar0);
	func_592(iVar0);
	return iVar0;
}

void func_592(int iParam0)
{
	int iVar0;
	
	iVar0 = func_459(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_457(3936, iVar0, -1, 1, 0);
}

void func_593(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_594(int iParam0)
{
	if (iParam0 == func_75())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_595(int iParam0)
{
	if (iParam0 == func_75())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_596(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_218(unk_0x0C1D3C552325765B()) || func_264(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_597()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_598()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

int func_599(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_75();
	iVar1 = func_75();
	iVar2 = func_75();
	return func_600(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_600(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_441(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_424(&Var0);
}

int func_601(int iParam0)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 != -1)
	{
		return func_260(iVar0);
	}
	return 1;
}

char* func_602()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_76(unk_0x0C1D3C552325765B());
	if (iVar0 != func_75())
	{
		if (iVar0 != unk_0x0C1D3C552325765B())
		{
			if (((func_174(iVar0, 28) || func_174(unk_0x0C1D3C552325765B(), 28)) || func_447(iVar0)) && !func_446(iVar0))
			{
				return func_448(iVar0, 0);
			}
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_448(iVar0, 0);
			}
		}
		uVar1 = func_450(&(Global_1614576[iVar0 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(uVar1))
		{
			return func_448(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_603()
{
	func_714();
	func_692();
	func_681();
	func_671();
	func_625();
	func_620();
	func_607();
	func_604();
}

void func_604()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_755 != Local_195.f_5)
	{
		if (Local_195.f_34 != -1)
		{
			if (func_406())
			{
				if (func_360(unk_0x0C1D3C552325765B()) >= 1)
				{
					if (Local_195.f_5 > 0)
					{
						if (Local_195.f_37 > -1)
						{
							iVar0 = unk_0x81C85E54237F8A2E(Local_195.f_37);
							if (unk_0xCB129F9A01D14082(iVar0))
							{
								if (iVar0 != unk_0x0C1D3C552325765B())
								{
									if (func_258(iVar0, 1))
									{
										iVar1 = func_262(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_260(iVar1);
											func_605("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_605("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
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

int func_605(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(iParam2);
		unk_0xDA35BDB37E728640(func_533(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_77(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar17 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2471124.f_21 > 0)
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
						Var1 = { func_606(&Var1) };
					}
					iVar0 = unk_0xF02E9753777E6C9C(iVar18, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar17, 0, Global_2471124, &Var1, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar18, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar17, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_529(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_606(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_607()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_733() && !func_369())
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_461.f_0, 0))
	{
		return;
	}
	if (!func_406())
	{
		return;
	}
	iVar0 = func_360(unk_0x0C1D3C552325765B());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_195.f_51)))
	{
		iVar1 = (func_11() - func_619(&(Local_195.f_51), 0, 0));
		iVar2 = (func_163() - Local_195.f_5);
		func_618(iVar1);
		if (iVar1 > 30000)
		{
			func_608(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_608(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_608(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_608(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_616(0) == 0)
	{
		return;
	}
	func_615();
	func_612(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_517(sParam4))
	{
		sVar0 = sParam4;
	}
	func_609(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_609(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_611(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_610(7, iVar0);
		Global_1344178.f_4131[iVar0] = uParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = uParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = uParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_610(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_611(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_612(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_611(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_610(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = iParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = iParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_614())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_613())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_613()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_614()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_615()
{
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	Global_2453276 = 1;
}

int func_616(bool bParam0)
{
	if (func_617())
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_801(unk_0x0C1D3C552325765B(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_617()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 12);
}

void func_618(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(iLocal_449, 8))
	{
		func_175();
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_449, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0xB49DAD10DC051295("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x88B0F0DC270164B7(&iLocal_449, 15);
				unk_0x88B0F0DC270164B7(&iLocal_449, 9);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_449, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 11))
			{
				if (unk_0x27971883A8701E73("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
					unk_0x5A6B86444D23FCA8(0);
					unk_0x88B0F0DC270164B7(&iLocal_449, 11);
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_449, 14))
			{
				if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S"))
				{
					unk_0x88B0F0DC270164B7(&iLocal_449, 14);
				}
			}
			if (unk_0x08BA6DD398CA197C(iLocal_449, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_449, 12))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
						unk_0x88B0F0DC270164B7(&iLocal_449, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S_KILL");
							unk_0x09C86C0C5CA26B1E(&iLocal_449, 9);
						}
					}
				}
			}
		}
	}
}

int func_619(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

void func_620()
{
	var uVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x3CF373660FCFAFCE(Local_195.f_3))
		{
			if (!unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 2))
			{
				if (unk_0x60BA85BF16A11204(unk_0x9C16D1E97E386176(Local_195.f_3), unk_0xA0081090911D13E5()))
				{
					unk_0x88B0F0DC270164B7(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 2);
					iLocal_753 = unk_0x2657E29E0DD8087E();
					if (func_319(1))
					{
						unk_0xAB16AADE80707D47(iLocal_753, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0xAB16AADE80707D47(iLocal_753, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_451 != Local_195.f_5)
	{
		if (unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 3))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 3);
		}
		if (unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 2))
		{
			if (unk_0xB480350E4250D92A(Local_195.f_3))
			{
				uVar0 = unk_0x63CE7A3848B84093(Local_195.f_3);
				unk_0xFFB39FA225A945DB(&uVar0);
				unk_0x09C86C0C5CA26B1E(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 2);
			}
			else
			{
				unk_0xDC64FA270C733B30(Local_195.f_3);
			}
		}
		else
		{
			iLocal_451 = Local_195.f_5;
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_195.f_3))
	{
		if (func_718())
		{
			if (func_733())
			{
				func_622();
			}
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_448, 13))
		{
			if (!func_733() || !func_718())
			{
				unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_195.f_3), 1, 1);
				unk_0x88B0F0DC270164B7(&iLocal_448, 13);
			}
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_448, 3))
		{
			unk_0xB996664170D83289(unk_0x9C16D1E97E386176(Local_195.f_3), 1200);
			unk_0x88B0F0DC270164B7(&iLocal_448, 3);
		}
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(iLocal_448, 13))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_448, 13);
		}
		if (unk_0x08BA6DD398CA197C(iLocal_448, 3))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_448, 3);
		}
		if (unk_0x16833EFAA58E63DB(uLocal_453))
		{
			unk_0x0B57C567D698C373(&uLocal_453);
		}
	}
	func_621();
}

void func_621()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_406())
	{
		return;
	}
	if (func_360(unk_0x0C1D3C552325765B()) >= 1)
	{
		if (unk_0x0E091C9F3918F674(Local_195.f_3) && !unk_0x912AD5A10E7633F0(unk_0x9C16D1E97E386176(Local_195.f_3), 0))
		{
			if (!unk_0xA3FB2BC2E4EB48E2(unk_0x9C16D1E97E386176(Local_195.f_3)))
			{
				unk_0x29F530EB20218AC0(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(unk_0x63CE7A3848B84093(Local_195.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_622()
{
	int iVar0;
	
	iVar0 = func_360(unk_0x0C1D3C552325765B());
	if (iVar0 < 2)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_453))
		{
			unk_0x0B57C567D698C373(&uLocal_453);
		}
		return;
	}
	if (unk_0x16833EFAA58E63DB(uLocal_453))
	{
		return;
	}
	unk_0x09C86C0C5CA26B1E(&iLocal_448, 11);
	uLocal_453 = unk_0x91B4D18C6AFDC14C(unk_0x63CE7A3848B84093(Local_195.f_3));
	unk_0x420759DE4A6A9555(uLocal_453, 12);
	unk_0x32479C670EB9962F(uLocal_453, 459);
	unk_0x6F18BFEFE84565FF(uLocal_453, "GB_SGHT_BLP");
	unk_0x71E206F83114C3D2(uLocal_453, 1);
	unk_0xC40118229E47A3D7(uLocal_453, Global_262145.f_10787);
	if (func_733())
	{
		func_623(&uLocal_453, 18);
	}
	unk_0x2FE9515E72A14285(uLocal_453, 1);
	iLocal_754 = unk_0x2657E29E0DD8087E();
	if (func_319(1))
	{
		unk_0xAB16AADE80707D47(iLocal_754, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", 0);
	}
	else
	{
		unk_0xAB16AADE80707D47(iLocal_754, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
	}
}

void func_623(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		iVar0 = func_624(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, iVar0);
	}
}

int func_624(int iParam0)
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_625()
{
	if (unk_0x848AF823A8EA3C62() != Local_195.f_33)
	{
		return;
	}
	if (unk_0x3CF373660FCFAFCE(Local_195.f_3))
	{
		if (iLocal_750 != -1)
		{
			iLocal_750 = -1;
		}
		if (unk_0x08BA6DD398CA197C(Global_2577921, 20))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2577921, 20);
		}
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Global_2577921, 20))
	{
		if (!unk_0x08BA6DD398CA197C(Global_2577921, 21))
		{
			if (iLocal_750 < 0)
			{
				unk_0x88B0F0DC270164B7(&Global_2577921, 20);
			}
		}
	}
	if (iLocal_751 == -1)
	{
		iLocal_751 = unk_0xB5BF1B58C833F7A9(0, 3);
	}
	if (iLocal_750 < 0)
	{
		if (unk_0x08BA6DD398CA197C(Global_2577921, 21))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2577921, 21);
			iLocal_750 = 0;
		}
	}
	func_626();
}

void func_626()
{
	bool bVar0;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_448, 4))
	{
		if (iLocal_750 >= 0)
		{
			if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0x09C86C0C5CA26B1E(&Local_461, 0);
				iLocal_750 = -1;
			}
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
				{
					func_670(1);
				}
			}
		}
	}
	else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		func_669(&Local_461);
		func_668(&Local_461);
		unk_0x09C86C0C5CA26B1E(&iLocal_448, 4);
	}
	switch (iLocal_750)
	{
		case 0:
			func_667(1);
			unk_0x7BCE93123FE81E45("HACK", 3);
			iLocal_750++;
			break;
		
		case 1:
			if (func_666(1) && unk_0x985A6C5313B2276C(3))
			{
				unk_0x88B0F0DC270164B7(&Local_461, 0);
				unk_0x88B0F0DC270164B7(&(Local_461.f_1), 0);
				func_399();
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
				func_662(unk_0x0C1D3C552325765B(), 0, 66048);
				iLocal_750++;
			}
			else
			{
				if (!func_666(1))
				{
				}
				if (!unk_0x985A6C5313B2276C(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0xB477A2D8CA963C52();
			unk_0xCED06D052E449DF1(19);
			if (!func_179(0))
			{
				func_202(0);
			}
			if (iLocal_751 == 0)
			{
				func_640(&Local_461, 5, 5, iLocal_752, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_639(&Local_461, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_751 == 1)
			{
				func_640(&Local_461, 5, 5, iLocal_752, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1);
				if (func_638(&Local_461, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_751 == 2)
			{
				func_640(&Local_461, 5, 5, iLocal_752, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_627(&Local_461, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x08BA6DD398CA197C(Local_461.f_1, 1))
			{
				unk_0x09C86C0C5CA26B1E(&Local_461, 0);
				func_669(&Local_461);
				func_662(unk_0x0C1D3C552325765B(), 1, 0);
				if (func_179(0))
				{
					func_178(0);
				}
				iLocal_750 = -1;
			}
			else if (bVar0)
			{
				unk_0x09C86C0C5CA26B1E(&Local_461, 0);
				func_669(&Local_461);
				Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_4++;
				unk_0x88B0F0DC270164B7(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 3);
				iLocal_751++;
				if (iLocal_751 >= 3)
				{
					iLocal_751 = 0;
				}
				if (func_179(0))
				{
					func_178(0);
				}
				func_662(unk_0x0C1D3C552325765B(), 1, 0);
				iLocal_750++;
			}
			break;
	}
}

int func_627(var uParam0, bool bParam1)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 26))
	{
		if (bParam1)
		{
			func_628(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_628(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(uParam0, 0);
	unk_0x88B0F0DC270164B7(uParam0, 12);
	unk_0x6F6B42957DC01968(0);
	if (bParam2)
	{
		if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
		{
			unk_0x264E6E3419CC904C(unk_0xA0081090911D13E5(), 1, 1, 1, 0);
		}
	}
	if (unk_0x575662C16C9FE750())
	{
		unk_0x3F6577E39389B251(0);
	}
	unk_0x94724F7C938EBE34(1);
	if (bParam1)
	{
		unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), true, 0);
	}
	unk_0x50C86ABC13A071F8(uLocal_73, 0);
	func_632(0);
	func_631();
	unk_0x14720578735F0E7A(0);
	func_630(uParam0, 1, 1);
	func_629(0, 1, 1, 0);
}

int func_629(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && iParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_630(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_64[iVar0] != -1)
		{
			if (!unk_0x7DFD3CAC2CF49957(iLocal_64[iVar0]))
			{
				unk_0x15761381A3072BFA(iLocal_64[iVar0]);
				iLocal_64[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0x09C86C0C5CA26B1E(uParam0, 25);
	unk_0x09C86C0C5CA26B1E(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, 12);
		unk_0x09C86C0C5CA26B1E(uParam0, 9);
		unk_0x09C86C0C5CA26B1E(uParam0, 18);
		unk_0x09C86C0C5CA26B1E(uParam0, 27);
		unk_0x09C86C0C5CA26B1E(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_76 = 0;
	if (bParam1)
	{
		unk_0xA12A0D38735CCBF2(&uLocal_75);
	}
	unk_0x09C86C0C5CA26B1E(uParam0, 29);
}

void func_631()
{
	int iVar0;
	
	Global_1342783.f_981 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1342783.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2482149.f_4392 = 1;
}

void func_632(bool bParam0)
{
	if (bParam0)
	{
		func_637();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_636(0))
		{
			func_633(0);
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

void func_633(int iParam0)
{
	if (Global_14604)
	{
		func_635(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_634())
	{
		Global_14443.f_1 = 3;
	}
}

int func_634()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_635(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_636(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_636(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_637()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

int func_638(var uParam0, bool bParam1)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 9))
	{
		if (bParam1)
		{
			func_628(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_639(var uParam0, bool bParam1)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 18))
	{
		if (bParam1)
		{
			func_628(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_640(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 0))
	{
		func_641(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16);
	}
}

void func_641(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
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
	
	unk_0xCA675B7DACB84571(0);
	unk_0xCA675B7DACB84571(2);
	unk_0x6F6B42957DC01968(1);
	if (bParam17)
	{
		func_661(1);
	}
	func_660(4, -1);
	func_659();
	if (func_666(bParam16))
	{
		if (!unk_0x84C71F36E7D97756())
		{
			unk_0xB477A2D8CA963C52();
			unk_0x1373E5003F76E429(1);
			if (unk_0xAD490CD811854704() == 0 && !unk_0x84C71F36E7D97756())
			{
				unk_0x0F83039847376F53(uLocal_75, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0xF3C67EB69BFA8F67(2))
		{
			uParam0->f_285 = unk_0x18A824B369093E50(2, 239);
			uParam0->f_286 = unk_0x18A824B369093E50(2, 240);
			if (uParam0->f_287 != uParam0->f_285 || uParam0->f_288 != uParam0->f_286)
			{
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_CURSOR");
				unk_0x0FFE3C1DBBA72236(uParam0->f_285);
				unk_0x0FFE3C1DBBA72236(uParam0->f_286);
				unk_0xE73340DA551C95E1();
			}
			uParam0->f_287 = uParam0->f_285;
			uParam0->f_288 = uParam0->f_286;
		}
		else
		{
			func_658(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "MOVE_CURSOR");
					unk_0x0FFE3C1DBBA72236(fVar6);
					unk_0x0FFE3C1DBBA72236(fVar7);
					unk_0xE73340DA551C95E1();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (unk_0xF3C67EB69BFA8F67(2))
			{
				uParam0->f_285 = unk_0x6822B498C2270E88(2, 239);
				uParam0->f_286 = unk_0x6822B498C2270E88(2, 240);
				if (unk_0xD95D58B9AAC86D55())
				{
					if (uParam0->f_287 != uParam0->f_285)
					{
						if (uParam0->f_285 < 0.49f)
						{
							unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7CBFB9F4AF33C67E(10);
							unk_0xE73340DA551C95E1();
						}
						else if (uParam0->f_285 > 0.51f)
						{
							unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7CBFB9F4AF33C67E(11);
							unk_0xE73340DA551C95E1();
						}
					}
				}
				uParam0->f_287 = uParam0->f_285;
				uParam0->f_288 = uParam0->f_286;
			}
			if (unk_0x4255B5ECB9D34344(2))
			{
				fVar8 = unk_0x7648D90D868BBF55(2, 1);
				fVar9 = unk_0x7648D90D868BBF55(2, 2);
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
					if (unk_0x7466327978A6A24C(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7CBFB9F4AF33C67E(10);
							unk_0xE73340DA551C95E1();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7CBFB9F4AF33C67E(11);
							unk_0xE73340DA551C95E1();
						}
					}
					if (unk_0x7466327978A6A24C(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							bVar10 = true;
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7CBFB9F4AF33C67E(8);
							unk_0xE73340DA551C95E1();
						}
						else if (fLocal_71 > 0f)
						{
							bVar10 = true;
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7CBFB9F4AF33C67E(9);
							unk_0xE73340DA551C95E1();
						}
					}
					if (bVar10)
					{
						unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_657(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0x9ABCEFB6E400C9FB(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0x7DFD3CAC2CF49957(uParam0->f_15))
						{
							if (iLocal_76 != 8)
							{
								unk_0xAB16AADE80707D47(uParam0->f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0x2A57AED61E15C7C7(2, 195) || unk_0x2A57AED61E15C7C7(2, 196)) || unk_0x7F6103BD34B839B0(2, 195)) || unk_0x7F6103BD34B839B0(2, 196))
			{
			}
			if (unk_0x4255B5ECB9D34344(2))
			{
				if (unk_0x2A57AED61E15C7C7(2, 32) || unk_0x2A57AED61E15C7C7(2, 172))
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7CBFB9F4AF33C67E(8);
					unk_0xE73340DA551C95E1();
				}
				else if (unk_0x2A57AED61E15C7C7(2, 33) || unk_0x2A57AED61E15C7C7(2, 173))
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7CBFB9F4AF33C67E(9);
					unk_0xE73340DA551C95E1();
				}
				else if (unk_0x2A57AED61E15C7C7(2, 34) || unk_0x2A57AED61E15C7C7(2, 174))
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7CBFB9F4AF33C67E(10);
					unk_0xE73340DA551C95E1();
				}
				else if (unk_0x2A57AED61E15C7C7(2, 35) || unk_0x2A57AED61E15C7C7(2, 175))
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7CBFB9F4AF33C67E(11);
					unk_0xE73340DA551C95E1();
				}
			}
			else if (unk_0x2A57AED61E15C7C7(2, 188))
			{
				unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7CBFB9F4AF33C67E(8);
				unk_0xE73340DA551C95E1();
			}
			else if (unk_0x2A57AED61E15C7C7(2, 187))
			{
				unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7CBFB9F4AF33C67E(9);
				unk_0xE73340DA551C95E1();
			}
			else if (unk_0x2A57AED61E15C7C7(2, 189))
			{
				unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7CBFB9F4AF33C67E(10);
				unk_0xE73340DA551C95E1();
			}
			else if (unk_0x2A57AED61E15C7C7(2, 190))
			{
				unk_0xAB16AADE80707D47(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7CBFB9F4AF33C67E(11);
				unk_0xE73340DA551C95E1();
			}
		}
		if (bParam12)
		{
			if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
			{
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = unk_0xC23FC7D89C4FAF05();
			}
			if (unk_0x6F61AEBF81DF1A16(uLocal_74))
			{
				iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				if (iVar0 == 6)
				{
					func_656(uParam0);
				}
			}
		}
		func_655();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_654((iParam15 - (unk_0xDF658EB6CA91DFBC() - iLocal_59)), &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = 0;
				iLocal_57 = 0;
				iLocal_58 = 0;
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_653(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0xDF658EB6CA91DFBC();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_653(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0xDF658EB6CA91DFBC();
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(uParam0->f_1, 0))
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
			if (!unk_0x08BA6DD398CA197C(*uParam0, 29))
			{
				func_652(uParam0, iParam14);
			}
			func_667(1);
			unk_0x14720578735F0E7A(1);
			uParam0->f_15 = unk_0x2657E29E0DD8087E();
			iLocal_150 = 0;
			iLocal_151 = 0;
			uParam0->f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0x577907B883D7941C(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x09C86C0C5CA26B1E(uParam0, 1);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = unk_0x2657E29E0DD8087E();
			iLocal_64[1] = unk_0x2657E29E0DD8087E();
			func_629(1, 0, 1, 0);
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
					if (!func_376("H_EXIT_PROMPT"))
					{
						if (!func_376("HACKOBJ1"))
						{
							func_651("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (unk_0xF3C67EB69BFA8F67(2))
				{
					if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xC23FC7D89C4FAF05();
					}
				}
				else if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
				{
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = unk_0xC23FC7D89C4FAF05();
				}
			}
			if (unk_0x6F61AEBF81DF1A16(uLocal_74))
			{
				iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_376("H_EXIT_PROMPT"))
						{
							unk_0x94724F7C938EBE34(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
				{
					if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						func_650(0, "");
					}
				}
			}
			if (unk_0x6F61AEBF81DF1A16(uLocal_74))
			{
				iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
						func_650(1, "ACCESSD");
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
						if (!func_376("HACKOBJ2"))
						{
							func_651("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					if (unk_0xF3C67EB69BFA8F67(2))
					{
						if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
						{
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xC23FC7D89C4FAF05();
						}
					}
					else if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xC23FC7D89C4FAF05();
					}
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
					{
						if (unk_0x2A57AED61E15C7C7(2, 202))
						{
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = unk_0xC23FC7D89C4FAF05();
							if (iParam7 == 1)
							{
								if (func_376("HACKOBJ2"))
								{
									unk_0x94724F7C938EBE34(1);
								}
								func_651("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76 = (iLocal_76 - 1);
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
				{
					if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						func_650(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
					func_650(1, "ACCESSD");
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
				if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
				{
					unk_0x15761381A3072BFA(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
				{
					unk_0x15761381A3072BFA(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
				{
					unk_0x15761381A3072BFA(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0x08BA6DD398CA197C(*uParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_376("HACKOBJ5"))
								{
									func_651("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(*uParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_376("HACKOBJ3"))
							{
								func_651("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(*uParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_376("HACKOBJ5"))
							{
								func_651("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_376("HACKOBJ5"))
						{
							unk_0x94724F7C938EBE34(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
					{
						if (unk_0xF3C67EB69BFA8F67(2))
						{
							if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
							{
								unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = unk_0xC23FC7D89C4FAF05();
							}
						}
						else if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
						{
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xC23FC7D89C4FAF05();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					if (unk_0x2A57AED61E15C7C7(2, 202))
					{
						unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = unk_0xC23FC7D89C4FAF05();
						if (iParam7 == 1)
						{
							if (func_376("HACKOBJ5") || func_376("HACKOBJ3"))
							{
								unk_0x94724F7C938EBE34(1);
							}
							iLocal_61 = 0;
							iLocal_76 = (iLocal_76 - 1);
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
				{
					if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						func_650(0, "");
					}
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
					func_650(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_77 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 0))
						{
							unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0xB74EEA927DA2E7A7(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0xB74EEA927DA2E7A7(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0xB74EEA927DA2E7A7(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0xDF658EB6CA91DFBC();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x2657E29E0DD8087E();
						unk_0xAB16AADE80707D47(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!unk_0x08BA6DD398CA197C(*uParam0, 18))
					{
						iLocal_77 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0xDF658EB6CA91DFBC();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0x2657E29E0DD8087E();
						unk_0xAB16AADE80707D47(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
							{
								if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
								{
									func_650(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0x08BA6DD398CA197C(*uParam0, 9))
							{
								func_650(1, "TRYDL");
							}
							else
							{
								func_650(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
						{
							if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
							{
								func_650(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0x08BA6DD398CA197C(*uParam0, 9))
						{
							func_650(1, "TRYDL");
						}
						else
						{
							func_650(1, "TRYBRUTE");
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
						iLocal_77 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 0))
						{
							unk_0xB74EEA927DA2E7A7(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0xB74EEA927DA2E7A7(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0xB74EEA927DA2E7A7(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0xDF658EB6CA91DFBC();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x2657E29E0DD8087E();
						if (bParam10)
						{
							func_649(uParam0);
						}
						unk_0xB00447E2964C2B27(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0xAB16AADE80707D47(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!bParam11 || unk_0x08BA6DD398CA197C(*uParam0, 18)) && !unk_0x08BA6DD398CA197C(*uParam0, 9))
					{
						iLocal_77 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0xDF658EB6CA91DFBC();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0x2657E29E0DD8087E();
						if (bParam10)
						{
							func_649(uParam0);
						}
						if (func_376("HACKOBJ5"))
						{
							unk_0x94724F7C938EBE34(1);
						}
						unk_0xB00447E2964C2B27(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0xAB16AADE80707D47(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
							{
								if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
								{
									func_650(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0x08BA6DD398CA197C(*uParam0, 18))
							{
								func_650(1, "TRYDL");
							}
							else
							{
								func_650(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
						{
							if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
							{
								func_650(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0x08BA6DD398CA197C(*uParam0, 18))
						{
							func_650(1, "TRYDL");
						}
						else
						{
							func_650(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0x08BA6DD398CA197C(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0x08BA6DD398CA197C(*uParam0, 18) && unk_0x08BA6DD398CA197C(*uParam0, 9))
						{
							if (!unk_0x08BA6DD398CA197C(*uParam0, 28))
							{
								unk_0x88B0F0DC270164B7(uParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if ((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 500)
								{
									if (((unk_0xDF658EB6CA91DFBC() - iLocal_78) > 2500 || unk_0x2A57AED61E15C7C7(2, 201)) || unk_0x2A57AED61E15C7C7(2, 237))
									{
										func_650(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0x08BA6DD398CA197C(*uParam0, 18))
								{
									func_650(1, "TRYBRUTE");
								}
								else
								{
									func_650(1, "TRYHACK");
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
					func_648("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_648("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 1))
				{
					if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
					{
						if (unk_0x2A57AED61E15C7C7(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x67454FDA361D6831(uLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
								{
									unk_0x15761381A3072BFA(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
								{
									unk_0x15761381A3072BFA(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					if (unk_0xF3C67EB69BFA8F67(2))
					{
						if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
						{
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xC23FC7D89C4FAF05();
						}
					}
					else if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xC23FC7D89C4FAF05();
					}
				}
				if (unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
					{
						unk_0x15761381A3072BFA(iLocal_64[0]);
					}
					unk_0x88B0F0DC270164B7(uParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xAB16AADE80707D47(-1, "HACKING_FAILURE", 0, 1);
					unk_0x577907B883D7941C(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0xDF658EB6CA91DFBC();
				iLocal_64[0] = unk_0x2657E29E0DD8087E();
				unk_0xAB16AADE80707D47(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0x88B0F0DC270164B7(uParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0x67454FDA361D6831(uLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
					{
						unk_0x15761381A3072BFA(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				unk_0x88B0F0DC270164B7(uParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0xDF658EB6CA91DFBC() - iLocal_59));
				if (iVar1 < 1)
				{
					unk_0x88B0F0DC270164B7(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0xDF658EB6CA91DFBC();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xAB16AADE80707D47(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
						{
							unk_0x15761381A3072BFA(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					unk_0x577907B883D7941C(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0x577907B883D7941C(uLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = unk_0xDF658EB6CA91DFBC();
				unk_0x88B0F0DC270164B7(uParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
					{
						unk_0x15761381A3072BFA(iLocal_64[0]);
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
					func_648("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_648("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 1))
					{
						if (unk_0x2A57AED61E15C7C7(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0x67454FDA361D6831(uLocal_75, "CLOSE_APP");
							if (!unk_0x7DFD3CAC2CF49957(iLocal_64[0]))
							{
								unk_0x15761381A3072BFA(iLocal_64[0]);
							}
							if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0x88B0F0DC270164B7(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					if (unk_0xF3C67EB69BFA8F67(2))
					{
						if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
						{
							unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0xC23FC7D89C4FAF05();
						}
					}
					else if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
					{
						unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0xC23FC7D89C4FAF05();
					}
				}
				if (unk_0x6F61AEBF81DF1A16(uLocal_74))
				{
					iVar0 = unk_0xD93E20F39826C097(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0xAB16AADE80707D47(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0x08BA6DD398CA197C(*uParam0, 23))
			{
				if (func_653(&(uParam0->f_10), 500))
				{
					unk_0x67454FDA361D6831(uLocal_75, "RESET_ROULETTE");
					unk_0x09C86C0C5CA26B1E(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0xAB16AADE80707D47(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0x67454FDA361D6831(uLocal_75, "STOP_ROULETTE");
					uParam0->f_10 = unk_0xDF658EB6CA91DFBC();
					unk_0x88B0F0DC270164B7(uParam0, 23);
					unk_0x88B0F0DC270164B7(uParam0, 31);
					if (func_208() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x88B0F0DC270164B7(uParam0, 25);
					unk_0x88B0F0DC270164B7(uParam0, 31);
					unk_0xAB16AADE80707D47(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0xDF658EB6CA91DFBC();
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
						{
							unk_0x15761381A3072BFA(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_208() == 0)
					{
						unk_0x577907B883D7941C(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0xDF658EB6CA91DFBC() - iLocal_59));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0x88B0F0DC270164B7(uParam0, 25);
					unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0xDF658EB6CA91DFBC();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0xAB16AADE80707D47(-1, "HACKING_FAILURE", 0, 1);
					unk_0x94724F7C938EBE34(1);
					if (iLocal_64[1] != -1)
					{
						if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
						{
							unk_0x15761381A3072BFA(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					unk_0x577907B883D7941C(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0x88B0F0DC270164B7(uParam0, 25);
				unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0xDF658EB6CA91DFBC();
				iLocal_64[1] = unk_0x2657E29E0DD8087E();
				unk_0xAB16AADE80707D47(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0x88B0F0DC270164B7(uParam0, 25);
				unk_0x67454FDA361D6831(uLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
					{
						unk_0x15761381A3072BFA(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0x577907B883D7941C(uLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = unk_0xDF658EB6CA91DFBC();
				unk_0x88B0F0DC270164B7(uParam0, 9);
				unk_0xAB16AADE80707D47(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!unk_0x7DFD3CAC2CF49957(iLocal_64[1]))
					{
						unk_0x15761381A3072BFA(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0x08BA6DD398CA197C(*uParam0, 9) && unk_0x08BA6DD398CA197C(*uParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_376("HACKOBJ7"))
						{
							func_651("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_376("H_USE_PC6") || func_376("H_USE_PC7")) || func_376("H_USE_PC8")) || func_376("H_USE_PC9"))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			if ((unk_0x08BA6DD398CA197C(*uParam0, 9) && unk_0x08BA6DD398CA197C(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0x08BA6DD398CA197C(*uParam0, 28))))
			{
				if (func_376("HACKOBJ7"))
				{
					unk_0x94724F7C938EBE34(1);
				}
				if (!iLocal_151)
				{
					unk_0x7DEFCA77DEA2C174(-1, "unlocked_bleep", unk_0xA0081090911D13E5(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_653(&iLocal_77, 3000))
				{
					unk_0x09C86C0C5CA26B1E(uParam0, 0);
					unk_0x88B0F0DC270164B7(uParam0, 12);
					unk_0x14720578735F0E7A(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0x08BA6DD398CA197C(*uParam0, 27)) && unk_0x08BA6DD398CA197C(*uParam0, 9)) && unk_0x08BA6DD398CA197C(*uParam0, 18))
				{
					unk_0xB9D4F4DE7E7EC038(uLocal_75, "OPEN_DOWNLOAD");
					unk_0x5CC02BB872FEF340(1);
					unk_0xE73340DA551C95E1();
					unk_0x88B0F0DC270164B7(uParam0, 27);
				}
				if (func_653(&iLocal_77, 2000))
				{
					unk_0x67454FDA361D6831(uLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_642(uParam0);
			break;
	}
}

void func_642(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_18 > 0)
	{
		if (unk_0x08BA6DD398CA197C(*uParam0, 22))
		{
			if (unk_0xC04F047A523E9370("hackingNG"))
			{
				if (!unk_0x84C71F36E7D97756())
				{
					unk_0xBD42180765457DB6("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		unk_0xAB16AADE80707D47(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_376("H1_HNG"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			if (func_376("H1_HNG_KM"))
			{
				unk_0x94724F7C938EBE34(1);
			}
		}
		unk_0x88B0F0DC270164B7(uParam0, 26);
	}
	else if (unk_0x4255B5ECB9D34344(2))
	{
		if (!func_376("H1_HNG_KM"))
		{
			func_651("H1_HNG_KM");
		}
	}
	else if (!func_376("H1_HNG"))
	{
		func_651("H1_HNG");
	}
	switch (uParam0->f_18)
	{
		case 0:
			unk_0xC41E276F33F448DD("hackingNG", 0);
			unk_0x09C86C0C5CA26B1E(uParam0, 22);
			func_647();
			iLocal_139 = unk_0xDF658EB6CA91DFBC();
			Local_99.f_0 = 0;
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 0);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 1);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 2);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 3);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 4);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 5);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 6);
			unk_0x09C86C0C5CA26B1E(&uLocal_149, 7);
			uParam0->f_18++;
			break;
		
		case 1:
			if (unk_0xC04F047A523E9370("hackingNG"))
			{
				unk_0x88B0F0DC270164B7(uParam0, 22);
				unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_CURSOR_VISIBILITY");
				unk_0x5CC02BB872FEF340(0);
				unk_0xE73340DA551C95E1();
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
					Local_82[iVar0 /*2*/].f_1 = func_645(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
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
						if (!unk_0x08BA6DD398CA197C(uLocal_149, iVar0))
						{
							iLocal_140[iVar0] = unk_0x2657E29E0DD8087E();
							unk_0xAB16AADE80707D47(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0x88B0F0DC270164B7(&iLocal_149, iVar0);
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
							unk_0x86F350F5CCA04497(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (unk_0x08BA6DD398CA197C(iLocal_149, iVar0))
				{
					unk_0x15761381A3072BFA(iLocal_140[iVar0]);
					unk_0xC8656944A36C8E78(iLocal_140[iVar0]);
					unk_0x09C86C0C5CA26B1E(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_644(Local_99.f_0))
			{
				unk_0xAB16AADE80707D47(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
			{
				if (func_653(&iLocal_139, 300))
				{
					if (func_643(Local_99.f_0))
					{
						Local_101[Local_99.f_0 /*4*/] = 1;
						Local_82[Local_99.f_0 /*2*/].f_1 = 0.572f;
						unk_0xAB16AADE80707D47(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99.f_0 != 7)
						{
							Local_99.f_0++;
						}
					}
					else
					{
						if (Local_99.f_0 != 0)
						{
							if (unk_0x08BA6DD398CA197C(iLocal_149, Local_99.f_0))
							{
								unk_0x15761381A3072BFA(iLocal_140[Local_99.f_0]);
								unk_0xC8656944A36C8E78(iLocal_140[Local_99.f_0]);
								unk_0x09C86C0C5CA26B1E(&iLocal_149, Local_99.f_0);
							}
							Local_101[(Local_99.f_0 - 1) /*4*/] = 0;
							Local_99.f_0 = (Local_99.f_0 - 1);
						}
						if (!unk_0x84C71F36E7D97756())
						{
							unk_0x676A3D7F15838EEA(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = unk_0xDF658EB6CA91DFBC();
						unk_0x24816268735E001E(0, 100, 100);
						unk_0xAB16AADE80707D47(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x84C71F36E7D97756())
					{
						unk_0xBD42180765457DB6("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = unk_0xDF658EB6CA91DFBC();
					unk_0x24816268735E001E(0, 100, 100);
				}
			}
			if (!unk_0x84C71F36E7D97756())
			{
				if (Local_99.f_0 == 0)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 1)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 2)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 3)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 4)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 5)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 6)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 7)
				{
					unk_0xBD42180765457DB6("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0xBD42180765457DB6("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0x08BA6DD398CA197C(uParam0->f_1, 0))
				{
					if (!unk_0x08BA6DD398CA197C(uParam0->f_1, 1))
					{
						if (unk_0x2A57AED61E15C7C7(2, 202))
						{
							unk_0x88B0F0DC270164B7(&(uParam0->f_1), 1);
							unk_0x94724F7C938EBE34(1);
						}
					}
				}
			}
			break;
	}
}

int func_643(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return 1;
	}
	return 0;
}

int func_644(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_645(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_646((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_646(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_647()
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

void func_648(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_649(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 8);
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

void func_650(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0x577907B883D7941C(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = unk_0xDF658EB6CA91DFBC();
		iLocal_79 = 1;
	}
	else
	{
		unk_0x577907B883D7941C(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_651(char* sParam0)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

void func_652(var uParam0, int iParam1)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 29))
	{
		unk_0xB74EEA927DA2E7A7(uLocal_75, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0x626C2E82CA013B68())
		{
			unk_0x577907B883D7941C(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0x577907B883D7941C(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0xB9D4F4DE7E7EC038(uLocal_75, "SET_LABELS");
		func_243("H_ICON_1");
		if (iParam1 == 0)
		{
			func_243("H_ICON_2a");
		}
		else
		{
			func_243("H_ICON_2");
		}
		func_243("H_ICON_3");
		func_243("H_ICON_4");
		func_243("H_ICON_5");
		func_243("H_ICON_6");
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(uParam0, 29);
	}
}

int func_653(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xDF658EB6CA91DFBC();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_654(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_655()
{
	if (iLocal_76 < 5)
	{
		if (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x2A57AED61E15C7C7(2, 237))
		{
			unk_0xAB16AADE80707D47(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_656(var uParam0)
{
	unk_0x264E6E3419CC904C(unk_0xA0081090911D13E5(), 1, 1, 1, 0);
	if (unk_0x575662C16C9FE750())
	{
		unk_0x3F6577E39389B251(0);
	}
	unk_0x94724F7C938EBE34(1);
	unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), true, 0);
	unk_0x50C86ABC13A071F8(uLocal_73, 0);
	func_632(0);
	func_631();
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x14720578735F0E7A(0);
	func_630(uParam0, 1, 0);
	func_629(0, 1, 1, 0);
}

void func_657(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x89F20B2FA4613913(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 218) * 127f));
		}
		if (!unk_0x89F20B2FA4613913(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 219) * 127f));
		}
		if (!unk_0x89F20B2FA4613913(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 220) * 127f));
		}
		if (!unk_0x89F20B2FA4613913(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 221) * 127f));
		}
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (bParam5)
		{
			if (unk_0xE761C96558F7D51E())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x1C49F15E8235C041())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_658(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 221) * 127f));
		}
	}
}

void func_659()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_636(0))
		{
			func_633(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_660(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1342783.f_981), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1342783.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_661(int iParam0)
{
	Global_1344178.f_932 = iParam0;
}

void func_662(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0x2C8EB7E5159312EE())
		{
			unk_0xACBEFB0A5F1CF619(0);
		}
	}
	if (!unk_0xA86CA03D9749EEB3())
	{
		iVar0 = iParam2;
		unk_0xFDEC0B505BCB00C0(iParam0, bParam1, iVar0);
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
		if (!func_345())
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
		if (unk_0xCB129F9A01D14082(iParam0) && unk_0xC0691D80D21C989D(iParam0))
		{
			uVar25 = unk_0x21F191D9AFF98B5E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xA86CA03D9749EEB3())
				{
					unk_0x0B82F22B8E9EE07C(1);
				}
				else
				{
					unk_0xEDBE0CD7C81FA37E(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xA86CA03D9749EEB3() && !bVar18)
					{
						unk_0x0B82F22B8E9EE07C(0);
					}
					Global_2421327[iParam0 /*353*/].f_243 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_665(uVar25) && !unk_0x73C9408E8EF10BD3(uVar25))
				{
					if (!bVar21)
					{
						unk_0x591413670A1EF437(uVar25, true, 0);
					}
				}
				if (!unk_0x884626CDE60D6728(uVar25))
				{
					if (!bVar20)
					{
						unk_0xBB21B5C3111E5F85(uVar25, false);
					}
					unk_0xB16B53F6FE1ADDB6(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xBB21B5C3111E5F85(uVar25, false);
				}
				unk_0xB43604F27F1EAE5F(uVar25, true);
				unk_0x8F2CF88C37D4A413(iParam0, 0);
				unk_0x61E5185648237702(uVar25);
				unk_0x9D36C5E0C178FB8D(uVar25, 1);
				func_664();
				func_663();
				if (unk_0x6273A79EFF10C4A9())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x9726BE1252F8F0B6())
				{
				}
				Global_2421327[iParam0 /*353*/].f_244 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_665(uVar25) && !unk_0x73C9408E8EF10BD3(uVar25))
				{
					if (!bVar21)
					{
						unk_0x591413670A1EF437(uVar25, !bVar14, 0);
					}
					if (!unk_0x884626CDE60D6728(uVar25))
					{
						if (!bVar20)
						{
							unk_0xBB21B5C3111E5F85(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB16B53F6FE1ADDB6(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x8F2CF88C37D4A413(iParam0, 0);
				}
				else
				{
					unk_0x8F2CF88C37D4A413(iParam0, 1);
				}
				unk_0xB43604F27F1EAE5F(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0BFA50301B965423(uVar25) && !unk_0x39FEE545B315414E(uVar25, 0))
					{
						unk_0xB0993C95A7DBF879(uVar25);
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
			unk_0xFDEC0B505BCB00C0(iParam0, bParam1, iVar26);
		}
	}
}

void func_663()
{
	struct<2> Var0;
	
	Global_2432628.f_730 = 0;
	Global_2432628.f_731 = 0;
	Global_2432628.f_732 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404993.f_2212 = { Var0 };
}

void func_664()
{
	Global_2404993.f_637 = 0;
	Global_2404993.f_2253 = 0;
	Global_2404993.f_494 = 0;
	Global_2404993.f_569 = 0;
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_207 = 0;
}

int func_665(var uParam0)
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x21178DF77817BF39(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_666(bool bParam0)
{
	if (unk_0x1E3F61C2C1E29520(uLocal_75) && (!bParam0 || (((((unk_0xC04F047A523E9370("HACKING_PC_desktop_0") && unk_0xC04F047A523E9370("HACKING_PC_desktop_1")) && unk_0xC04F047A523E9370("HACKING_PC_desktop_2")) && unk_0xC04F047A523E9370("HACKING_PC_desktop_3")) && unk_0xC04F047A523E9370("HACKING_PC_desktop_4")) && unk_0xC04F047A523E9370("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_667(bool bParam0)
{
	if (bParam0)
	{
		unk_0xC41E276F33F448DD("HACKING_PC_desktop_0", 0);
		unk_0xC41E276F33F448DD("HACKING_PC_desktop_1", 0);
		unk_0xC41E276F33F448DD("HACKING_PC_desktop_2", 0);
		unk_0xC41E276F33F448DD("HACKING_PC_desktop_3", 0);
		unk_0xC41E276F33F448DD("HACKING_PC_desktop_4", 0);
		unk_0xC41E276F33F448DD("HACKING_PC_desktop_5", 0);
	}
	uLocal_75 = unk_0xD02B7364CA275A59("Hacking_PC");
}

void func_668(var uParam0)
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0x264E6E3419CC904C(unk_0xA0081090911D13E5(), 1, 1, 1, 0);
	}
	if (unk_0x575662C16C9FE750())
	{
		unk_0x3F6577E39389B251(0);
	}
	unk_0x6F6B42957DC01968(0);
	unk_0x94724F7C938EBE34(1);
	unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), true, 0);
	unk_0x50C86ABC13A071F8(uLocal_73, 0);
	unk_0x09C86C0C5CA26B1E(uParam0, 0);
	unk_0x09C86C0C5CA26B1E(uParam0, 12);
	func_632(0);
	func_631();
	unk_0x14720578735F0E7A(0);
}

void func_669(var uParam0)
{
	func_630(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_18 = 0;
	Local_99.f_0 = 0;
	Local_99.f_1 = 0;
	unk_0x09C86C0C5CA26B1E(uParam0, 26);
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
}

void func_670(bool bParam0)
{
	unk_0xABC36CFE4F3421A0(0, 71, 1);
	unk_0xABC36CFE4F3421A0(0, 72, 1);
	unk_0xABC36CFE4F3421A0(0, 76, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	if (bParam0)
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 80, 1);
	unk_0xABC36CFE4F3421A0(0, 69, 1);
	unk_0xABC36CFE4F3421A0(0, 70, 1);
	unk_0xABC36CFE4F3421A0(0, 68, 1);
	unk_0xABC36CFE4F3421A0(0, 74, 1);
	unk_0xABC36CFE4F3421A0(0, 86, 1);
	unk_0xABC36CFE4F3421A0(0, 81, 1);
	unk_0xABC36CFE4F3421A0(0, 82, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 107, 1);
	unk_0xABC36CFE4F3421A0(0, 110, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 87, 1);
	unk_0xABC36CFE4F3421A0(0, 88, 1);
	unk_0xABC36CFE4F3421A0(0, 113, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 117, 1);
	unk_0xABC36CFE4F3421A0(0, 118, 1);
	unk_0xABC36CFE4F3421A0(0, 119, 1);
}

void func_671()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x08BA6DD398CA197C(Local_461.f_0, 0))
	{
		return;
	}
	if (!func_406())
	{
		if (func_376("GB_SGHT_HLP1"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_376("GB_SGHT_HLP2"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_369())
		{
			sVar0 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
			iVar1 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
			if (func_258(unk_0x0C1D3C552325765B(), 1))
			{
				if (func_680("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			else if (func_680("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x94724F7C938EBE34(1);
			}
		}
		if (func_376("GB_SGHT_RVL"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	iVar2 = func_360(unk_0x0C1D3C552325765B());
	if (iVar2 < 2)
	{
		if (func_376("GB_SGHT_HLP1"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_376("GB_SGHT_HLP2"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_369())
		{
			sVar0 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
			iVar1 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
			if (func_258(unk_0x0C1D3C552325765B(), 1))
			{
				if (func_680("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			else if (func_680("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x94724F7C938EBE34(1);
			}
		}
		if (func_376("GB_SGHT_RVL"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_448, 2))
	{
		if (!func_679(85))
		{
			if (iLocal_750 == -1)
			{
				if (func_673(0, 1, 1, 1))
				{
					if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
					{
						func_384("GB_SGHT_HLP1", -1);
						func_383(1);
						unk_0x88B0F0DC270164B7(&iLocal_448, 2);
					}
					else if (func_734() == Local_195.f_33)
					{
						func_384("GB_SGHT_HLP2", -1);
						func_383(1);
						unk_0x88B0F0DC270164B7(&iLocal_448, 2);
					}
					else if (func_369())
					{
						sVar0 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
						iVar1 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
						if (func_258(unk_0x0C1D3C552325765B(), 1))
						{
							func_672("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_383(1);
						}
						else
						{
							func_672("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_383(1);
						}
						unk_0x88B0F0DC270164B7(&iLocal_448, 2);
					}
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_448, 2);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_448, 2))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_448, 7))
		{
			if (iLocal_750 == -1)
			{
				if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
				{
					if (func_673(0, 1, 1, 1))
					{
						func_384("GB_SGHT_APPH", -1);
						func_383(1);
						unk_0x88B0F0DC270164B7(&iLocal_448, 7);
					}
				}
				else
				{
					unk_0x88B0F0DC270164B7(&iLocal_448, 7);
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_448, 7);
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_448, 8))
	{
		if (func_733())
		{
			if (func_718())
			{
				if (unk_0x3CF373660FCFAFCE(Local_195.f_3))
				{
					if (func_673(0, 1, 1, 1))
					{
						func_384("GB_SGHT_PKGH", -1);
						func_383(1);
						unk_0x88B0F0DC270164B7(&iLocal_448, 8);
					}
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_448, 12))
	{
		if (func_733())
		{
			if (Local_195.f_5 > 0 || unk_0x08BA6DD398CA197C(Local_195.f_1, 6))
			{
				if (func_673(0, 1, 1, 1))
				{
					func_384("GB_SGHT_RVL", -1);
					func_383(1);
					unk_0x88B0F0DC270164B7(&iLocal_448, 12);
				}
			}
		}
	}
}

void func_672(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x212C24688D441F9E(iParam4);
	}
	unk_0xBDE6EEC5F6BDC060(sParam3);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam5);
}

int func_673(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_678())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (func_422())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_33(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_677(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_676())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_675())
	{
		return 0;
	}
	if (func_674())
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_674()
{
	return Global_2442442.f_569;
}

bool func_675()
{
	return Global_2442442.f_721;
}

bool func_676()
{
	return Global_2432628.f_2489.f_585;
}

int func_677(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_678()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

bool func_679(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

bool func_680(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xA277242E6FB38513(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x212C24688D441F9E(iParam4);
	}
	unk_0xBDE6EEC5F6BDC060(sParam3);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_681()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x08BA6DD398CA197C(Local_461.f_0, 0))
	{
		return;
	}
	if (!func_406())
	{
		if (unk_0x08BA6DD398CA197C(iLocal_448, 5))
		{
			if (Local_195.f_34 != -1)
			{
				iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
				if (iVar0 > -1)
				{
					if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_195.f_34)))
					{
						iVar1 = func_260(iVar0);
						iVar2 = func_624(iVar1);
						func_397(unk_0x81C85E54237F8A2E(Local_195.f_34), 432, 0);
						func_395(unk_0x81C85E54237F8A2E(Local_195.f_34), iVar2, 0);
						func_394(unk_0x81C85E54237F8A2E(Local_195.f_34), 0, 0);
						func_393(unk_0x81C85E54237F8A2E(Local_195.f_34), 0);
						func_392(unk_0x81C85E54237F8A2E(Local_195.f_34), Global_262145.f_10787, 0);
						unk_0x09C86C0C5CA26B1E(&iLocal_448, 5);
					}
					else
					{
						unk_0x09C86C0C5CA26B1E(&iLocal_448, 5);
					}
				}
			}
			func_399();
		}
		return;
	}
	if (!unk_0x3CF373660FCFAFCE(Local_195.f_3))
	{
		if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
		{
			if (!unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 3))
			{
				if (!unk_0x08BA6DD398CA197C(Local_461.f_0, 0))
				{
					if (Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_5 < 3)
					{
						if (func_360(unk_0x0C1D3C552325765B()) == 3)
						{
							if (!func_691("GB_SGHT_HCK"))
							{
								func_688("GB_SGHT_HCK", 0);
							}
						}
						else if (func_691("GB_SGHT_HCK"))
						{
							func_399();
						}
					}
					else
					{
						func_399();
					}
				}
			}
		}
		else if (func_734() == Local_195.f_33)
		{
			if (Local_195.f_34 != -1)
			{
				if (func_360(unk_0x0C1D3C552325765B()) == 3)
				{
					if (!func_691("GB_SGHT_PROT"))
					{
						iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_260(iVar0);
							func_682("GB_SGHT_PROT", unk_0x81C85E54237F8A2E(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_691("GB_SGHT_PROT"))
				{
					func_399();
				}
			}
		}
		else if (func_369())
		{
			if (Local_195.f_34 != -1)
			{
				if (func_360(unk_0x0C1D3C552325765B()) == 3)
				{
					if (Local_195.f_34 != -1)
					{
						iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_260(iVar0);
							if (func_258(unk_0x0C1D3C552325765B(), 1))
							{
								if (!func_691("GB_SGHT_STOP"))
								{
									func_682("GB_SGHT_STOP", unk_0x81C85E54237F8A2E(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_691("GB_SGHT_STOP"))
							{
								func_682("GB_SGHT_STOP", unk_0x81C85E54237F8A2E(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_691("GB_SGHT_STOP"))
					{
						func_399();
					}
					if (func_691("GB_SGHT_STOP2"))
					{
						func_399();
					}
				}
				if (func_360(unk_0x0C1D3C552325765B()) >= 2)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_448, 5))
					{
						if (Local_195.f_34 != -1)
						{
							if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_195.f_34)))
							{
								if (func_801(unk_0x81C85E54237F8A2E(Local_195.f_34), 1, 1))
								{
									iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_260(iVar0);
										iVar2 = func_624(iVar1);
										func_397(unk_0x81C85E54237F8A2E(Local_195.f_34), 432, 1);
										func_395(unk_0x81C85E54237F8A2E(Local_195.f_34), iVar2, 1);
										func_394(unk_0x81C85E54237F8A2E(Local_195.f_34), 1, 1);
										func_393(unk_0x81C85E54237F8A2E(Local_195.f_34), 1);
										func_392(unk_0x81C85E54237F8A2E(Local_195.f_34), Global_262145.f_10787, 1);
										unk_0x88B0F0DC270164B7(&iLocal_448, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0x08BA6DD398CA197C(iLocal_448, 5))
				{
					if (Local_195.f_34 != -1)
					{
						iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_260(iVar0);
							iVar2 = func_624(iVar1);
							func_397(unk_0x81C85E54237F8A2E(Local_195.f_34), 432, 0);
							func_395(unk_0x81C85E54237F8A2E(Local_195.f_34), iVar2, 0);
							func_394(unk_0x81C85E54237F8A2E(Local_195.f_34), 0, 0);
							func_393(unk_0x81C85E54237F8A2E(Local_195.f_34), 0);
							func_392(unk_0x81C85E54237F8A2E(Local_195.f_34), Global_262145.f_10787, 0);
							unk_0x09C86C0C5CA26B1E(&iLocal_448, 5);
						}
					}
				}
			}
		}
	}
	else if (func_360(unk_0x0C1D3C552325765B()) == 3)
	{
		if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
		{
			if (!unk_0x08BA6DD398CA197C(Local_461.f_0, 0))
			{
				if (!func_691("GB_SGHT_RETP"))
				{
					func_688("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_734() == Local_195.f_33)
		{
			if (Local_195.f_34 != -1)
			{
				if (!func_691("GB_SGHT_PROT"))
				{
					iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_260(iVar0);
						func_682("GB_SGHT_PROT", unk_0x81C85E54237F8A2E(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_369())
		{
			if (Local_195.f_34 != -1)
			{
				iVar0 = func_262(unk_0x81C85E54237F8A2E(Local_195.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_260(iVar0);
					if (func_258(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_691("GB_SGHT_STOP"))
						{
							func_682("GB_SGHT_STOP", unk_0x81C85E54237F8A2E(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_691("GB_SGHT_STOP"))
					{
						func_682("GB_SGHT_STOP", unk_0x81C85E54237F8A2E(Local_195.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_691("GB_SGHT_PROT"))
		{
			func_399();
		}
		if (func_691("GB_SGHT_RETP"))
		{
			func_399();
		}
		if (func_691("GB_SGHT_STOP"))
		{
			func_399();
		}
		if (func_691("GB_SGHT_STOP2"))
		{
			func_399();
		}
	}
}

void func_682(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_683(sParam0, unk_0xCF66111B26743875(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312571 = 15;
		Global_1312571.f_56 = iParam3;
		Global_1312571.f_57 = iParam4;
	}
}

int func_683(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 63)
	{
		return 0;
	}
	if (func_687(sParam0, sParam1, sParam2) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_400();
	Global_1312571 = 10;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	StringCopy(&(Global_1312571.f_32), sParam2, 64);
	Global_1312571.f_58 = uParam4;
	Global_1312571.f_56 = uParam4;
	func_686();
	func_685(bParam3);
	func_684();
	return 1;
}

void func_684()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_685(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_686()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

bool func_687(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_405())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam1))
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam2))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam2) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_32));
}

void func_688(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_689(sParam0))
	{
		return;
	}
	func_400();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_686();
	func_685(bParam1);
	func_684();
}

bool func_689(char* sParam0)
{
	if (!func_405())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_690(uParam0);
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_690(char* sParam0)
{
	if (!func_405())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_691(char* sParam0)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (!func_405())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x8BC27E98D5626ED8(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	return func_689(sParam0);
}

void func_692()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_733() && !func_369())
	{
		return;
	}
	if (!func_406())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_448, 1))
	{
		iVar0 = func_360(unk_0x0C1D3C552325765B());
		if (iVar0 >= 2)
		{
			if (unk_0x848AF823A8EA3C62() == Local_195.f_33 || func_734() == Local_195.f_33)
			{
				if (func_697(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_444(85, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0x671810EE85FFCDFC(1);
					unk_0xD746083CA177FD95(unk_0x0C1D3C552325765B(), joaat("pickup_portable_package"), 1);
					func_696(1);
					func_693(-1, 0, 0, -1);
				}
			}
			else if (func_258(unk_0x0C1D3C552325765B(), 1))
			{
				sVar1 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
				uVar2 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
				func_599(85, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0xD746083CA177FD95(unk_0x0C1D3C552325765B(), joaat("pickup_portable_package"), 0);
				func_693(-1, 0, 0, -1);
			}
			else
			{
				sVar1 = func_445(unk_0x81C85E54237F8A2E(Local_195.f_34));
				uVar2 = func_601(unk_0x81C85E54237F8A2E(Local_195.f_34));
				func_599(85, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0xD746083CA177FD95(unk_0x0C1D3C552325765B(), joaat("pickup_portable_package"), 0);
				func_693(-1, 0, 0, -1);
			}
		}
		unk_0x88B0F0DC270164B7(&iLocal_448, 1);
	}
}

void func_693(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_198(unk_0x0C1D3C552325765B());
	if (iParam2 || func_381(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1750587 = iVar0;
		if (func_415(iVar0))
		{
			Global_1750587.f_1 = 4;
		}
		else if (func_414(iVar0))
		{
			Global_1750587.f_1 = 5;
		}
		else if (func_292(iVar0, 0))
		{
			Global_1750587.f_1 = 2;
			if (func_453(iVar0))
			{
				Global_1750587.f_1 = 3;
			}
		}
		else
		{
			Global_1750587.f_1 = 1;
		}
		if (func_442() != func_75())
		{
			Global_1750587.f_4 = func_595(func_442());
			Global_1750587.f_5 = func_594(func_442());
		}
		if (func_322() != func_75())
		{
			func_477(func_322(), &(Global_1750587.f_6), &(Global_1750587.f_7));
		}
		Global_1750587.f_9 = unk_0x39E54E7BC7452169();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1750587.f_27 = 1;
			Global_1750587.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1750587.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1750587.f_40 = func_546(iParam1);
			Global_1750587.f_41 = func_695();
			Global_1750587.f_42 = func_547(unk_0x0C1D3C552325765B(), iParam1);
			Global_1750587.f_44 = func_590(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	else
	{
		if (func_442() != func_75())
		{
			Global_1750569 = func_595(func_442());
			Global_1750569.f_1 = func_594(func_442());
		}
		Global_1750569.f_5 = unk_0x39E54E7BC7452169();
		Global_1750569.f_13 = func_694();
		Global_1750569.f_15 = 0;
		if (func_443(1))
		{
			if (func_322() == func_442())
			{
				Global_1750569.f_15 = 1;
			}
		}
	}
}

int func_694()
{
	int iVar0;
	
	iVar0 = func_442();
	if (iVar0 != func_75())
	{
		return Global_1614576[iVar0 /*324*/].f_10.f_91;
	}
	return 0;
}

var func_695()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_544(unk_0x0C1D3C552325765B(), iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_696(bool bParam0)
{
	if (bParam0)
	{
		if (!func_174(unk_0x0C1D3C552325765B(), 9))
		{
			if (func_360(unk_0x0C1D3C552325765B()) != 0)
			{
				func_201(9);
			}
		}
	}
	else if (func_174(unk_0x0C1D3C552325765B(), 9))
	{
		func_200(9);
	}
}

int func_697(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_698(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_698(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_708();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_707() == 0)
	{
		func_705();
		return 0;
	}
	func_704(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_703(0);
		func_703(2);
		func_703(1);
	}
	else
	{
		func_708();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_703(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_703(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_703(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_703(3);
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_708();
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
			if (!func_421())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_702(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_699(1);
			func_702(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_699(int iParam0)
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
		if (func_701(14))
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_243(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_243(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_243(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_243(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_243(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_243(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_700(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_700(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(uParam7))
	{
		func_243(sParam7);
	}
	if (!unk_0x509383441597090D(iParam8))
	{
		func_243(iParam8);
	}
	if (!unk_0x509383441597090D(iParam9))
	{
		func_243(iParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_243(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_243(iParam11);
	}
	unk_0xE73340DA551C95E1();
}

bool func_701(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_702(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

void func_703(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_704(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_705()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_706(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_706(struct<6> Param0, struct<6> Param6)
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

int func_707()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_706(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_708()
{
	if (func_701(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_709();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_709()
{
	func_710();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_710()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_713(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_712(unk_0xA0081090911D13E5());
			if (func_711(iVar0) && (!func_701(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_711(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_711(int iParam0)
{
	return iParam0 < 3;
}

int func_712(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_713(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_713(int iParam0)
{
	if (func_711(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_714()
{
	if (!unk_0x08BA6DD398CA197C(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1, 1))
	{
		if (!func_733())
		{
			if (Local_195.f_5 > 0 || unk_0x08BA6DD398CA197C(Local_195.f_1, 6))
			{
				func_203(1);
				unk_0x88B0F0DC270164B7(&(Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_1), 1);
			}
		}
	}
}

int func_715()
{
	if (func_716(1))
	{
		return 1;
	}
	if (Global_2482149.f_4698.f_18)
	{
		Global_2482149.f_4698.f_18 = 0;
		return 1;
	}
	if (func_322() == func_75() || !func_801(func_322(), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_716(bool bParam0)
{
	bool bVar0;
	
	if (!func_443(1))
	{
		bVar0 = false;
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 != func_75())
		{
			if (func_801(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, 0, 1))
			{
				if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 4 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_717(func_198(unk_0x0C1D3C552325765B())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_527(31);
				if (func_381(func_198(unk_0x0C1D3C552325765B())))
				{
					func_527(83);
				}
				if (unk_0xCB129F9A01D14082(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
				{
					Global_1613160 = func_428(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, -2, 0, 0);
					if (!func_321(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
					{
						func_527(90);
					}
				}
				else
				{
					Global_1613160 = 1;
				}
				Global_1613144 = { Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_717(int iParam0)
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
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_718()
{
	return func_217(unk_0x0C1D3C552325765B());
}

void func_719(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != iParam0)
	{
		func_732(-1);
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = iParam0;
		if (func_731() != -1)
		{
			func_730(-1);
		}
		if (func_729() != -1)
		{
			func_728(-1);
		}
		func_727(iParam2);
		func_725(iParam0);
		if (!func_210(iParam0))
		{
			fVar0 = func_209(iParam0);
			if (fVar0 != 1f)
			{
				func_206(fVar0);
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
			}
		}
		if (!func_213(iParam0))
		{
			if (func_211(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xCF03D9C8A7F1577C(0);
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
			}
			else if (unk_0x34E98013CA352B7E() < 5)
			{
				unk_0xACD6D334FD769B0C(1f);
				unk_0xCF03D9C8A7F1577C(5);
			}
		}
		if (func_368())
		{
			func_201(27);
		}
		if (bParam1)
		{
			if (!func_362())
			{
				func_203(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4)) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 0))
			{
				func_527(6);
			}
			func_724();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
		}
		if (func_119(unk_0x0C1D3C552325765B()) && func_218(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
		}
		func_720();
	}
}

void func_720()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_723();
	iVar2 = func_76(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (func_294(iVar1, iVar2, 1) || func_721(iVar1, unk_0x0C1D3C552325765B()))
			{
				unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iVar1, uVar3);
				unk_0x5EB0EEC362B46453(iVar1, unk_0x0C1D3C552325765B(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_721(int iParam0, int iParam1)
{
	if (func_258(iParam0, 1) && func_258(iParam1, 1))
	{
		return (func_722(iParam0) == func_76(iParam1) || func_722(iParam1) == func_76(iParam0));
	}
	return 0;
}

int func_722(int iParam0)
{
	if (func_258(iParam0, 1))
	{
		return Global_1614576[func_76(iParam0) /*324*/].f_10.f_268;
	}
	return func_75();
}

int func_723()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_442();
	if (iVar0 != func_75())
	{
		if (func_801(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x08BA6DD398CA197C(Global_1614576[iVar1 /*324*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_724()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 1);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 6))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 6);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 2);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444 = 0;
	if (Global_2482149.f_4418 > 0)
	{
		unk_0xCF03D9C8A7F1577C(Global_2482149.f_4418);
	}
	Global_2482149.f_4417 = 0;
}

void func_725(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_459(3759, -1, 0);
	iVar1 = func_726(iParam0);
	if (iVar1 != -1)
	{
		unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		func_457(3759, iVar0, -1, 1, 0);
	}
}

int func_726(int iParam0)
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

void func_727(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (Global_1614576[iVar0 /*324*/].f_10.f_172 != iParam0)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_172 = iParam0;
	}
}

void func_728(int iParam0)
{
	if (Global_2482149.f_4698.f_146 != iParam0)
	{
		Global_2482149.f_4698.f_146 = iParam0;
	}
}

int func_729()
{
	return Global_2482149.f_4698.f_146;
}

void func_730(int iParam0)
{
	if (Global_2482149.f_4698.f_145 != iParam0)
	{
		Global_2482149.f_4698.f_145 = iParam0;
	}
}

int func_731()
{
	return Global_2482149.f_4698.f_145;
}

void func_732(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_31 = iParam0;
}

int func_733()
{
	int iVar0;
	
	iVar0 = func_734();
	if (iVar0 > -1)
	{
		if (Local_195.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_734()
{
	int iVar0;
	
	if (Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_3 != -1)
	{
		return Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_3;
	}
	if (func_217(unk_0x0C1D3C552325765B()))
	{
		Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_3 = unk_0x848AF823A8EA3C62();
		if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
		{
			func_696(1);
		}
	}
	else if (func_258(unk_0x0C1D3C552325765B(), 1))
	{
		iVar0 = func_442();
		if (iVar0 != func_75())
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar0))
			{
				Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_3 = unk_0x9259DE19D910276C(iVar0);
			}
		}
	}
	return Local_255[unk_0x848AF823A8EA3C62() /*6*/].f_3;
}

int func_735()
{
	return Local_195.f_0;
}

int func_736(int iParam0)
{
	return Local_255[iParam0 /*6*/];
}

int func_737()
{
	bool bVar0;
	var uVar1;
	
	func_742(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_741())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_740())
	{
		return 1;
	}
	if (func_739(157))
	{
		if (!func_738())
		{
			return 1;
		}
	}
	if (func_739(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_207() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_207()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_738()
{
	return Global_2442442.f_576;
}

int func_739(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_740()
{
	return Global_2451777;
}

bool func_741()
{
	return Global_2442442.f_571;
}

void func_742(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_743(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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

void func_743(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_801(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_744(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_744(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_745()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_746()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_448, 6))
	{
		if (unk_0xA86CA03D9749EEB3())
		{
			if (func_733() || func_369())
			{
				func_586(0, 4, 0, 0, -1, -1, -1, -1);
				unk_0x88B0F0DC270164B7(&iLocal_448, 6);
			}
		}
	}
	func_784(3, 3, -1, -1082130432);
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x848AF823A8EA3C62() == Local_195.f_33)
		{
			if (iLocal_750 >= 0)
			{
				func_669(&Local_461);
				func_668(&Local_461);
			}
		}
	}
	if (unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == iLocal_454)
	{
		unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), uLocal_456);
	}
	if (iLocal_750 > 0)
	{
		if (unk_0x08BA6DD398CA197C(Local_195.f_1, 3))
		{
			func_662(unk_0x0C1D3C552325765B(), 1, 0);
		}
	}
	func_783();
	if (Local_195.f_34 != -1)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_448, 5))
		{
			if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_195.f_34)))
			{
				func_397(unk_0x81C85E54237F8A2E(Local_195.f_34), 432, 0);
				func_395(unk_0x81C85E54237F8A2E(Local_195.f_34), 1, 0);
				func_394(unk_0x81C85E54237F8A2E(Local_195.f_34), 0, 0);
				func_393(unk_0x81C85E54237F8A2E(Local_195.f_34), 0);
				func_392(unk_0x81C85E54237F8A2E(Local_195.f_34), Global_262145.f_10787, 0);
			}
		}
	}
	if (func_179(0))
	{
		func_178(0);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_449, 0))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_449, 2))
		{
			unk_0x0756AF366187C194("DisableFlightMusic", 0);
			unk_0x0756AF366187C194("WantedMusicDisabled", 0);
			unk_0xB49DAD10DC051295("BG_SIGHTSEER_STOP");
		}
	}
	unk_0x88B0F0DC270164B7(&iLocal_449, 8);
	func_175();
	unk_0x671810EE85FFCDFC(1);
	func_696(0);
	func_748(1, 0);
	unk_0xCF03D9C8A7F1577C(5);
	unk_0x09C86C0C5CA26B1E(&Global_2577921, 21);
	unk_0x09C86C0C5CA26B1E(&Global_2577921, 20);
	func_747();
}

void func_747()
{
	unk_0x78C587487CD40B92();
}

void func_748(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1332731.f_1.f_108 != 0)
	{
		Global_1332731.f_1.f_108 = 0;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 167 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 168)
	{
		func_781();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 4);
	}
	if ((func_475() && iParam1 != 0) && Global_262145.f_14857)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 190 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 192)
		{
			func_766(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 164 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 208)
	{
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = -1;
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_119(unk_0x0C1D3C552325765B()))
		{
			func_203(0);
		}
	}
	else if (func_764(unk_0x0C1D3C552325765B()) != -1)
	{
		func_732(-1);
	}
	func_763(func_75());
	if (func_179(16))
	{
		func_178(16);
	}
	func_759(0);
	func_727(-1);
	func_758();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_756(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
	{
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 5);
	}
	iVar1 = func_386();
	if ((func_291(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_755(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_415(iVar1))
	{
		func_751(-1, 1);
	}
	else if (func_385(iVar1) || func_750(iVar1))
	{
	}
	else
	{
		func_751(-1, 1);
	}
	func_200(19);
	func_200(20);
	func_200(21);
	func_200(22);
	func_200(27);
	func_178(3);
	func_178(4);
	func_178(7);
	func_749();
	if (func_218(unk_0x0C1D3C552325765B()))
	{
		func_696(0);
	}
	func_200(29);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_75();
	if (Global_2482149.f_4698.f_18 != 0)
	{
		Global_2482149.f_4698.f_18 = 0;
	}
	if (bParam0)
	{
		func_180();
	}
	if (!func_119(unk_0x0C1D3C552325765B()))
	{
		func_199();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
	}
}

void func_749()
{
	if (func_221(unk_0x0C1D3C552325765B()))
	{
		func_200(25);
	}
}

int func_750(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_751(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_386();
	}
	if (iParam0 > 0)
	{
		if (func_442() != func_75())
		{
			if (func_754(unk_0x0C1D3C552325765B()) == unk_0x0C1D3C552325765B())
			{
				Global_2471291.f_77[func_753(iParam0)] = 1;
			}
		}
		iVar0 = func_753(159);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(157);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(148);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(164);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(142);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(152);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(166);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(170);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(173);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(179);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(200);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(201);
		if (func_752(iVar0, Global_262145.f_11038, bParam1))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(182);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(183);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(185);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(186);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(180);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(195);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(197);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(198);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(207);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(208);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(209);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_752(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_174(unk_0x0C1D3C552325765B(), 19) && !func_174(unk_0x0C1D3C552325765B(), 20)) && !func_174(unk_0x0C1D3C552325765B(), 9))
		{
			return 0;
		}
	}
	if (Global_2471291.f_77[iParam0] == 1 && func_9(&(Global_2471291[iParam0 /*2*/])))
	{
		if (func_619(&(Global_2471291[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2471291.f_77[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_753(int iParam0)
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
		
		case 179:
			return 17;
		
		case 189:
			return 18;
		
		case 193:
			return 19;
		
		case 194:
			return 20;
		
		case 199:
			return 21;
		
		case 201:
			return 22;
		
		case 200:
			return 23;
		
		case 205:
			return 24;
		
		case 210:
			return 25;
		
		case 182:
			return 26;
		
		case 183:
			return 27;
		
		case 185:
			return 28;
		
		case 186:
			return 29;
		
		case 180:
			return 30;
		
		case 195:
			return 31;
		
		case 197:
			return 32;
		
		case 198:
			return 33;
		
		case 207:
			return 34;
		
		case 208:
			return 35;
		
		case 209:
			return 36;
		
		case 211:
			return 37;
		
		default:
	}
	return -1;
}

int func_754(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

void func_755(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_386();
	}
	if (iParam0 > 0)
	{
		if (func_442() != func_75())
		{
			Global_2471291.f_77[func_753(iParam0)] = 1;
		}
		iVar0 = func_753(155);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(163);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(160);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(153);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(162);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(154);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(171);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(172);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(199);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(194);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(193);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(210);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(205);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(189);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_753(211);
		if (func_752(iVar0, Global_262145.f_11039, 0))
		{
			func_236(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_756(int iParam0)
{
	if (!func_167(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/], func_757(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/] = { func_757() };
	}
	if (!func_167(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/], func_757(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/] = { func_757() };
	}
}

Vector3 func_757()
{
	struct<3> Var0;
	
	return Var0;
}

void func_758()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573418 = { Var0 };
	Global_1573418.f_13 = func_75();
	if (unk_0x08BA6DD398CA197C(Global_1572926, 3))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1572926, 3);
	}
}

void func_759(bool bParam0)
{
	if (bParam0)
	{
		if (!func_762(unk_0x0C1D3C552325765B(), 10))
		{
			func_761(10);
		}
	}
	else if (func_762(unk_0x0C1D3C552325765B(), 10))
	{
		func_760(10);
	}
}

void func_760(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

void func_761(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

bool func_762(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

void func_763(int iParam0)
{
	if (func_217(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x0C1D3C552325765B() != iParam0)
		{
			if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 != iParam0)
			{
				Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 = iParam0;
				if (iParam0 != func_75())
				{
				}
			}
		}
	}
}

int func_764(int iParam0)
{
	if (func_765(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_31;
	}
	return -1;
}

int func_765(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_31 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_766(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_544(iParam0, iParam1) && func_780(iParam0, iParam1))
	{
		iVar0 = func_543(iParam0, iParam1);
		func_770(iVar0);
		func_767(iVar0, 1);
	}
}

void func_767(int iParam0, int iParam1)
{
	func_768(func_769(iParam0), iParam1, -1, 1);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_90[iParam0 /*11*/].f_6 = iParam1;
}

int func_768(int iParam0, var uParam1, int iParam2, int iParam3)
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
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_136();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_769(int iParam0)
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

void func_770(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_779(unk_0x0C1D3C552325765B(), iParam0);
	Global_2471285[iParam0] = 0;
	if (func_775(func_778(iParam0), -1, -1))
	{
		iVar0 = func_774(iVar1);
		iVar2 = func_590(unk_0x0C1D3C552325765B(), iVar1);
		iVar3 = func_773(iVar1);
		iVar4 = func_774(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2471285[iParam0] = iVar0;
	}
	else
	{
		iVar0 = (func_774(iVar1) / func_772(unk_0x0C1D3C552325765B(), iVar1) + 1);
	}
	func_771(unk_0x0C1D3C552325765B(), iVar1, iVar0);
}

void func_771(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return;
	}
	if (func_545(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_772(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_545(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_773(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_546(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14828;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14833;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14827;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14832;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14826;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14831;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14824;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14829;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14825;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14830;
			}
			break;
	}
	return uVar0;
}

int func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_546(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14809;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14818);
			}
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14823);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14810;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14817);
			}
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14822);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14811;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14816);
			}
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14821);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14812;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14814);
			}
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14819);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14813;
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14815);
			}
			if (func_542(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14820);
			}
			break;
	}
	return iVar0;
}

int func_775(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_136();
	}
	iVar1 = func_777(iParam0, iParam1);
	uVar2 = func_776(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_776(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_777(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_136();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_778(int iParam0)
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

int func_779(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (func_545(Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/]))
	{
		uVar0 = Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/];
	}
	return uVar0;
}

int func_780(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_544(iParam0, iParam1))
	{
		iVar0 = func_543(iParam0, iParam1);
		if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_4 > 0 && Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_781()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 28);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 29);
	func_782(24);
}

void func_782(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

void func_783()
{
	unk_0x17BC7AF21106B65E(uLocal_455);
	unk_0x17BC7AF21106B65E(iLocal_454);
}

void func_784(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x367152330DB70D69();
	Var1.f_0 = Global_1750569;
	Var1.f_1 = Global_1750569.f_1;
	Var1.f_2 = Global_1750569.f_2;
	Var1.f_3 = Global_1750569.f_3;
	Var1.f_4 = Global_1750569.f_4;
	Var1.f_5 = Global_1750569.f_5;
	Var1.f_6 = Global_1750569.f_6;
	Var1.f_7 = Global_1750569.f_7;
	Var1.f_8 = Global_1750569.f_8;
	Var1.f_9 = Global_1750569.f_9;
	Var1.f_10 = Global_1750569.f_10;
	Var1.f_11 = Global_1750569.f_11;
	Var1.f_12 = Global_1750569.f_12;
	Var1.f_13 = Global_1750569.f_14;
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1750569.f_15;
			Var15.f_15 = Global_1750569.f_16;
			Var15.f_16 = Global_1750569.f_17;
			unk_0xB52EDE17EA1502EE(&Var15);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1750569.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0xA69238A3DCFC16AF(&Var32);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1750569.f_15;
			Var49.f_15 = iParam0;
			unk_0x6228A33A89AE777D(&Var49);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1750569.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0x12EF9A511680F9C4(&Var65);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1750569.f_15;
			Var82.f_15 = iParam0;
			unk_0xAFA2BE3145862168(&Var82);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1750569.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xEB19DBB33ABC60AE(&Var98);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1750569.f_15;
			unk_0xB0FAB98E9AEC7B92(&Var116);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1750569.f_15;
			unk_0x8093409F8C94AF35(&Var134);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1750569.f_15;
			unk_0xFA930B4B51A95117(&Var153);
		}
	}
	func_785();
}

void func_785()
{
	struct<18> Var0;
	
	Global_1750569 = { Var0 };
}

void func_786(struct<20> Param0)
{
	func_799(func_800(Param0.f_0), Param0);
	unk_0x861EA6260F5D252A(3);
	func_797(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_195, 60);
	unk_0xCCA45C9E00D2BC01(&Local_255, 193);
	if (!func_796())
	{
		func_746();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		if (unk_0xD9E8CA806A80203D())
		{
		}
		func_795();
		func_787(0, 0);
		Local_255[unk_0x848AF823A8EA3C62() /*6*/] = 0;
	}
	else
	{
		func_746();
	}
}

void func_787(int iParam0, int iParam1)
{
	func_794();
	func_791(1);
	if ((iParam0 != 0 && unk_0xCB129F9A01D14082(iParam1)) && func_790(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x88B0F0DC270164B7(&Global_1750555, 0);
				break;
			}
	}
	if (!func_718() && !func_258(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_365())
		{
			func_202(3);
		}
		func_202(4);
	}
	if (func_443(0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_442();
	}
	if (func_381(iParam0))
	{
		func_588();
		Global_1750587.f_18 = func_789(func_322());
	}
	func_788();
}

void func_788()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1332731.f_527[iVar0 /*49*/].f_1 = func_75();
		Global_1332731.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_789(int iParam0)
{
	if (func_258(iParam0, 1))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_235;
	}
	return -1;
}

int func_790(int iParam0, bool bParam1)
{
	return func_294(unk_0x0C1D3C552325765B(), iParam0, bParam1);
}

void func_791(bool bParam0)
{
	int iVar0;
	
	func_782(33);
	func_782(34);
	func_782(35);
	func_782(36);
	func_782(37);
	func_782(38);
	func_782(39);
	func_782(40);
	func_782(43);
	func_782(41);
	func_782(54);
	func_782(42);
	func_782(47);
	func_793(23);
	func_793(24);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_792(3))
	{
		func_793(3);
	}
	else if (func_792(4))
	{
		func_793(4);
	}
	else if (func_792(5))
	{
		func_793(5);
	}
	else if (func_792(6))
	{
		func_793(6);
	}
	else if (func_792(7))
	{
		func_793(7);
	}
	else if (((((((((((((((((func_792(0) || func_792(1)) || func_792(2)) || func_792(8)) || func_792(9)) || func_792(10)) || func_792(11)) || func_792(12)) || func_792(13)) || func_792(14)) || func_792(15)) || func_792(16)) || func_792(17)) || func_792(18)) || func_792(19)) || func_792(20)) || func_792(21)) || func_792(22))
	{
		func_793(8);
		func_793(0);
		func_793(1);
		func_793(2);
		func_793(9);
		func_793(10);
		func_793(11);
		func_793(12);
		func_793(13);
		func_793(14);
		func_793(15);
		func_793(16);
		func_793(17);
		func_793(18);
		func_793(19);
		func_793(20);
		func_793(21);
		func_793(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_792(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_11[iVar0], iVar1);
}

void func_793(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_11[iVar0]), iVar1);
}

void func_794()
{
	struct<14> Var0;
	
	Global_1750569 = { Var0 };
	Global_1750569.f_14 = 0;
	Global_1750569.f_15 = 0;
}

void func_795()
{
}

int func_796()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_741())
		{
			return 0;
		}
		if (func_739(155))
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

int func_797(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_747();
			}
			else
			{
				return 0;
			}
		}
		if (!func_798())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_747();
					}
					else
					{
						return 0;
					}
				}
				if (func_741())
				{
					if (!bParam2)
					{
						func_747();
					}
					else
					{
						return 0;
					}
				}
				if (func_739(155))
				{
					if (!bParam2)
					{
						func_747();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_747();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_747();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_747();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_798()
{
	return Global_1315206;
}

void func_799(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_747();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_800(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_801(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

