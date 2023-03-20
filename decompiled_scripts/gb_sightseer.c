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
	if (unk_0x17CC0D5008835470() && func_706(unk_0xE0BDAFA1A39552D6(), 0, 1))
	{
		func_694(ScriptParam_0);
	}
	else
	{
		func_676();
	}
	while (true)
	{
		func_675();
		if (func_667())
		{
			func_676();
		}
		Global_1734817.f_2 = Local_192.f_58;
		Global_1734817.f_3 = Local_192.f_59;
		switch (func_666(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if (func_665() == 1)
				{
					func_664();
					if (func_663())
					{
						func_650(142, 1, -1);
						unk_0x23C09ED6B6466E40(3);
						if (!func_649())
						{
							unk_0x728FB550FD7F3CB8(unk_0xE0BDAFA1A39552D6(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_650(142, 0, -1);
						unk_0x728FB550FD7F3CB8(unk_0xE0BDAFA1A39552D6(), joaat("pickup_portable_package"), 0);
					}
					Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 1;
				}
				else if (func_665() == 4)
				{
					Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_646())
				{
					Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 2;
				}
				if (func_665() == 1)
				{
					func_343();
					func_340();
					if (func_663() || func_339())
					{
						func_211(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
					}
					func_168();
				}
				else if (func_665() == 4)
				{
					Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 3;
				}
				func_165();
				break;
			
			case 3:
				func_164(&(Local_192.f_49));
				if (func_163(&(Local_192.f_49)))
				{
					Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 4;
			
			case 4:
				func_676();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_665())
			{
				case 0:
					if (func_156())
					{
						unk_0x5F55B369FD8D3271(&(Local_192.f_58), &(Local_192.f_59));
						Local_192.f_0 = 1;
						Local_192.f_33 = unk_0x490BA5FDD7EE47A9();
						Local_192.f_34 = unk_0xE0BDAFA1A39552D6();
						func_650(142, 1, -1);
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
	if (Global_2464975.f_4685.f_13)
	{
		Global_2464975.f_4685.f_13 = 0;
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
	if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 2))
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
			if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 1))
			{
				Local_192.f_32 = 2;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 3))
			{
				Local_192.f_32 = 2;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 4))
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
		if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 6))
		{
			if (!func_9(&(Local_192.f_53)))
			{
				func_8(&(Local_192.f_53), 0, 0);
			}
			else if (func_6(&(Local_192.f_53), func_7(), 0))
			{
				unk_0xE27C8E42A97895CF(&(Local_192.f_1), 6);
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
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
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
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
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
		unk_0xE27C8E42A97895CF(&(Local_192.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_10689;
}

void func_12()
{
	int iVar0;
	
	if (Local_192.f_33 < 0)
	{
		return;
	}
	if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(Local_192.f_33)))
	{
		if (Local_252[Local_192.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_252[Local_192.f_33 /*6*/].f_4 - 1);
			if (!unk_0x7DA173D4FD42F36B(Local_192.f_4, iVar0))
			{
				Local_192.f_36 = iVar0;
				if (func_13())
				{
					unk_0xE27C8E42A97895CF(&(Local_192.f_4), iVar0);
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
	if (!unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
	{
		unk_0xBECC89ACB4E5D4ED(iVar0);
		if (unk_0x5C9FE32E2FF37989(iVar0))
		{
			if (unk_0xFCECCB6C10A241DF(1))
			{
				Var27 = { func_153() };
				if (func_14(Var27, 5f, &Local_454, &uLocal_457, Var1))
				{
					Local_192.f_3 = unk_0xE0E063A077171A2A(unk_0x762537FC22B454C0(joaat("pickup_portable_package"), Local_454, 1, iVar0));
					unk_0x7C15BF0B58B608BA(unk_0xE65C345C8E8CDA4A(Local_192.f_3), Local_454 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x0B87AFC0B2EECA19(iVar0);
					unk_0xB2C123C54D84E6A7(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 1);
					unk_0x6ADA069D5C59F335(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 1);
					unk_0xFB6985BBCF631D73(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 1);
					unk_0xE2098C4F0BF55A98(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 0);
					unk_0xEAF2F3F5A45270D2(unk_0xE65C345C8E8CDA4A(Local_192.f_3));
					func_8(&(Local_192.f_55), 0, 0);
				}
			}
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
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
			if (((!Global_2404993.f_1489 == *uParam0 || !Global_2404993.f_1489.f_1 == uParam0->f_1) || !Global_2404993.f_1489.f_2 == uParam0->f_2) || !Global_2404993.f_1492 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404993.f_1503 == uParam0->f_8 || !Global_2404993.f_1503.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_1503.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_1506 == uParam0->f_11) || !Global_2404993.f_1506.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_1506.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404993.f_1503 == uParam0->f_8 || !Global_2404993.f_1503.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_1503.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_1506 == uParam0->f_11) || !Global_2404993.f_1506.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_1506.f_2 == uParam0->f_11.f_2) || !Global_2404993.f_1509 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404993.f_1487 == 1)
		{
			if (unk_0xDF49ABF9204CC801(Global_2404993.f_1496))
			{
				if (Global_2404993.f_1496 == unk_0xAE832DCCE9CD3242())
				{
					if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1493) < func_152(0))
					{
						return 0;
					}
				}
				else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1493) < func_152(0))
				{
					return 0;
				}
			}
			unk_0xC259D754B2B17A87();
			unk_0x379BC6172444185D();
			func_151();
		}
		Global_2404993.f_1487 = 0;
	}
	else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1493) > func_152(0))
	{
		Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
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
	unk_0x4F9B9416E775992C(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404993.f_1487)
	{
		unk_0xC259D754B2B17A87();
		unk_0x379BC6172444185D();
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
		if (!unk_0x992B2940FA16F60D())
		{
			Global_2404993.f_1510 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404993.f_1489 = { *uParam0 };
					Global_2404993.f_1492 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404993.f_1503 = { uParam0->f_8 };
					Global_2404993.f_1506 = { uParam0->f_11 };
					Global_2404993.f_1509 = 0f;
					Global_2404993.f_1489 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404993.f_1503 = { uParam0->f_8 };
					Global_2404993.f_1506 = { uParam0->f_11 };
					Global_2404993.f_1509 = uParam0->f_14;
					Global_2404993.f_1489 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_149(Var8.f_0, Var8.f_1);
			}
			Global_2404993.f_1488 = 1;
			Global_2404993.f_1487 = 1;
			Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1493 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1496 = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404993.f_1487)
	{
		if (Global_2404993.f_1488 == 1)
		{
			if (unk_0x8A517457C85EB9F1(fVar4, fVar5, fVar6, fVar7) || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 5000)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
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
					func_130(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_129(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404993.f_1488 = 9;
				}
				else
				{
					Global_2404993.f_1488 = 2;
				}
			}
		}
		if (Global_2404993.f_1488 == 2)
		{
			if ((unk_0xFBA7DD5505BB11FA(Var11, Var14) || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 15000) || unk_0x58C68EEF5B8A5F00(Var11, Var14) == 0)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				if (uParam0->f_5 && !func_126(unk_0xE0BDAFA1A39552D6(), 0))
				{
					Global_2404993.f_1488 = 3;
				}
				else
				{
					Global_2404993.f_1488 = 4;
				}
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1498) > 7000)
			{
				func_125(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404993.f_1488 == 3)
		{
			if (func_124() || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 10000)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				Global_2404993.f_1488 = 4;
			}
		}
		if (Global_2404993.f_1488 == 4)
		{
			if (unk_0x992B2940FA16F60D())
			{
				unk_0xC259D754B2B17A87();
				unk_0x379BC6172444185D();
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
					if (!unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
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
							if (unk_0x3242AB1BAAB05F58(unk_0xE0BDAFA1A39552D6(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
								Global_2404993.f_1488 = 5;
							}
							break;
						
						case 1:
							func_118(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x0E851E9247B7805F(unk_0xE0BDAFA1A39552D6(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
								Global_2404993.f_1488 = 5;
							}
							break;
						
						case 2:
							if (unk_0x0E851E9247B7805F(unk_0xE0BDAFA1A39552D6(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
								Global_2404993.f_1488 = 5;
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
					Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
					Global_2404993.f_1488 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x83878A73624A67C7(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_118(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x406634EEA23D3C1C(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x406634EEA23D3C1C(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404993.f_1488 == 5)
		{
			if (func_56(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404993.f_1514.f_5)
				{
					Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
					Global_2404993.f_1488 = 6;
				}
				else
				{
					Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404993.f_1488 = 9;
				}
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 20000)
			{
				unk_0xC259D754B2B17A87();
				unk_0x379BC6172444185D();
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				Global_2404993.f_1488 = 8;
			}
		}
		if (Global_2404993.f_1488 == 6)
		{
			iVar0 = 0;
			Global_2404993.f_1514.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_55(uParam0->f_4))
				{
					if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_54(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var8)))
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
			Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1488 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x83878A73624A67C7(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_118(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x406634EEA23D3C1C(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x406634EEA23D3C1C(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404993.f_1488 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2404993.f_1622[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_129(Global_2404993.f_1622[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_1622[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_52(Global_2404993.f_1622[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_1622[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x795DFAC3136F0C6E(Global_2404993.f_1622[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_1622[iVar17 /*3*/] };
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
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404993.f_1488 = 9;
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 20000)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				Global_2404993.f_1488 = 8;
			}
		}
		if (Global_2404993.f_1488 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2404993.f_468))
				{
				}
			}
			else if (Global_2404993.f_1514.f_2)
			{
				func_16(uParam2, &(Global_2404993.f_1514.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2404993.f_1489 };
				func_18(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1488 = 9;
		}
		if (Global_2404993.f_1488 == 9)
		{
			Global_2404993.f_1487 = 0;
			unk_0xC259D754B2B17A87();
			unk_0x379BC6172444185D();
			func_151();
			return 1;
		}
		Global_2404993.f_1493 = unk_0x201D90648B2AE3CE();
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
						if (func_55(uParam5->f_4) || !unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_54(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_54(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var65)))
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
					if (unk_0x00FBAE9BB89D4FC2(Var0, &uVar61, 0))
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
				if (unk_0x00FBAE9BB89D4FC2(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404993.f_604 = 1;
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
			return unk_0x795DFAC3136F0C6E(Param0, Param4, Param7, fParam10, 0, 1);
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
	if (unk_0x8727B442108E589B(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_30(Global_2404993.f_481, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	
	if (func_27(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (Global_1617902.f_38505 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_38505)
			{
				if (Global_1617902.f_38506[iVar0 /*58*/].f_7 != 0)
				{
					if (func_23(Param0, Global_1617902.f_38506[iVar0 /*58*/], Global_1617902.f_38506[iVar0 /*58*/].f_6, Global_1617902.f_38506[iVar0 /*58*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_36286 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_36286)
			{
				if (Global_1617902.f_36289[iVar0 /*90*/].f_16 != 0)
				{
					if (func_23(Param0, Global_1617902.f_36289[iVar0 /*90*/], Global_1617902.f_36289[iVar0 /*90*/].f_3, Global_1617902.f_36289[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_49581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_49581)
			{
				if (Global_1617902.f_49585[iVar0 /*128*/].f_12 != 0)
				{
					if (func_23(Param0, Global_1617902.f_49585[iVar0 /*128*/], Global_1617902.f_49585[iVar0 /*128*/].f_3, Global_1617902.f_49585[iVar0 /*128*/].f_12, 0.5f))
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

int func_23(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
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
		func_25(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_24(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xF87C669B882D93C0((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xF87C669B882D93C0((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xF87C669B882D93C0((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x795DFAC3136F0C6E(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x1D8189836184FF10(iParam0))
	{
		unk_0x9CFA23DC65790425(iParam0, fParam1, fParam2);
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
	if (Global_1587816[iParam0 /*444*/] == -1)
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
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
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
				func_31(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_31(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_25(&Var0, 0f, 0f, unk_0x83D8CBE6E641FA2A(0f, 360f));
		}
		else
		{
			func_25(&Var0, 0f, 0f, fParam7);
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

int func_32(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_1721[iVar0 /*3*/]) < fParam3)
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
			func_35(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_41(Var2, &uVar1) || func_34(Var2))
			{
				Var2 = { *uParam0 };
				func_35(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2404993.f_549 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_546);
		if (fVar0 < Global_2404993.f_549)
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
				*uParam0 = { func_40(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_31(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), fParam2, bParam3, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
			func_31(&Param0, Param3, fParam9, fParam11, bParam12, 0);
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
		unk_0xEBBD48CB0344518F(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
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
				if (!unk_0x795DFAC3136F0C6E(Var1, Param3, Param6, fParam9, 0, 1))
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
		if (Global_2404993.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_42(Param0, &(Global_2404993.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_129(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_1719) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_52(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404993.f_347[iVar0 /*12*/].f_9)
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
		if (Global_2407465[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407465[iVar0 /*17*/].f_16))
			{
				if (func_42(*uParam0, &(Global_2407465[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407465[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407465[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_35(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_44(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_35(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!Global_2404993.f_484)
	{
		if (!func_49(unk_0xE0BDAFA1A39552D6(), 1))
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
				Var1 = { func_46(&(Global_2404993.f_39[iVar0 /*12*/])) };
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
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_42(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_42(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
	if (func_706(iParam0, 0, 1))
	{
		return Global_2418529[iParam0 /*313*/].f_1;
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
	if (Global_2404993.f_1285 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1285)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404993.f_1286[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404993.f_1286[iVar1 /*4*/] };
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
	
	if (Global_2404993.f_1514.f_1 == 0 && Global_2404993.f_1514 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x281957533C0148A5(&(Global_2404993.f_1514.f_1)))
			{
				case 0:
					func_116(uParam1, uParam2);
					if (!Global_2404993.f_1514.f_2)
					{
						if (uParam2->f_7 && Global_2404993.f_513.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
							}
							if (uParam1->f_5 && func_17(Global_2404993.f_468))
							{
								if (!Global_2404993.f_1514.f_5)
								{
									Global_2404993.f_1514.f_5 = 1;
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
							uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
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
		else if (unk_0x992B2940FA16F60D())
		{
			if (!unk_0x8DA5CF144D5507AA())
			{
				if (unk_0x9D9BFCD0A7E00931())
				{
					func_116(uParam1, uParam2);
					Global_2404993.f_1514.f_1 = unk_0xDCB5F4E85A0A35E9();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x379BC6172444185D();
				func_116(uParam1, uParam2);
				if (!Global_2404993.f_1514.f_2)
				{
					Global_2404993.f_1514.f_5 = 1;
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
		func_113(Global_2404993.f_513, &(Global_2404993.f_1514.f_31), &(Global_2404993.f_1514.f_64));
	}
	if (uParam2->f_7 && !Global_2404993.f_1514.f_4)
	{
		Global_2404993.f_1514.f_4 = 1;
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
	if (Global_2404993.f_1514.f_1 > 0 || Global_2404993.f_1514 > 0)
	{
		if (uParam1->f_5 || unk_0x992B2940FA16F60D())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404993.f_1514.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404993.f_1514.f_3)
					{
						iVar4 = Global_2404993.f_1514.f_3 + 1;
					}
					if (iVar4 > (Global_2404993.f_1514.f_1 - 1))
					{
						iVar4 = (Global_2404993.f_1514.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x98B8AE08540D4C28(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x25FA9416B69D826E(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x165D59ABC27844C1(iVar4);
					}
					else
					{
						unk_0x7E1C23E1EC9BBDE5(iVar4, &iVar5);
					}
					func_61(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404993.f_1514.f_3 = iVar4;
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
			iVar4 = Global_2404993.f_1514.f_1;
		}
		if (Global_2404993.f_1514.f_1 == iVar4)
		{
			if (uParam1->f_5 && func_17(Global_2404993.f_468))
			{
				if (Global_2404993.f_1514.f_2)
				{
					func_16(uParam0, &(Global_2404993.f_1514.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404993.f_1514.f_2)
			{
				func_16(uParam0, &(Global_2404993.f_1514.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0xA6055C735E3DD877(0, Global_2404993.f_1514.f_1);
				unk_0x98B8AE08540D4C28(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_57(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
		if (uParam1->f_5 && func_17(Global_2404993.f_468))
		{
			if (!Global_2404993.f_1514.f_5)
			{
				Global_2404993.f_1514.f_5 = 1;
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
		uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
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
	while (iVar0 < Global_2408431[iVar4])
	{
		if (func_58(Var1, &(Global_2407602[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_36(&Var1, Global_2407602[iVar4 /*92*/][iVar0 /*7*/], Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408431[8])
	{
		if (func_58(Var1, &(Global_2407602[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_36(&Var1, Global_2407602[iVar4 /*92*/][iVar0 /*7*/], Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_59(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408441[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408441[1])
	{
		if (Param0.f_0 < Global_2408445[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408441[2])
	{
		if (Param0.f_0 < Global_2408445[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408445[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408445[3])
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
			Global_2404993.f_1622[(3 - iVar0) /*3*/] = { Global_2404993.f_1622[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404993.f_1622[0 /*3*/] = { Param0 };
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
		if (Global_2404993.f_468 == 1)
		{
			if (unk_0xF87C669B882D93C0((Global_2404993.f_481.f_2 - Param0.f_2)) < 25f)
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
		if (func_110(unk_0xE0BDAFA1A39552D6()))
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
		if (!unk_0xF43304FDC69AADFC(unk_0x06736567F820A39E(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0xF43304FDC69AADFC(unk_0x06736567F820A39E(), Param0, 20f))
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
			iVar9 = Global_2404993.f_1;
		}
	}
	else if (!func_99(Param0, 25f, unk_0xE0BDAFA1A39552D6(), 1, 1))
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
		if (!Global_2404993.f_626)
		{
			Var11 = { Global_2404993.f_481 };
			if (Global_2404993.f_468 == 26)
			{
				Var11 = { Global_2404993.f_513.f_18 };
			}
			if (func_45(Var11))
			{
				if (!func_44(&Param0, 0, 0, 0) && !func_97(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_97(&Param0, 0) && !func_32(Param0, 0.5f))
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
		if (!(func_95(unk_0xE0BDAFA1A39552D6()) && func_93(unk_0xE0BDAFA1A39552D6())))
		{
			if (!func_92(&Param0, &(Global_2404993.f_1514.f_64), 0, 1065353216))
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
		if (!func_93(unk_0xE0BDAFA1A39552D6()))
		{
			if (!func_91(Param0, &(Global_2404993.f_1514.f_31), &(Global_2404993.f_1514.f_64), 1073741824))
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
				if (func_17(Global_2404993.f_468))
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
	if (!Global_2404993.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_626)
		{
			if (!func_33(&Param0, 0, 0))
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
	if (!func_57(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
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
		if (iVar7 >= Global_2404993.f_1514.f_6[iVar15 /*8*/])
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
						fVar0 = func_80(Param0, Global_2404993.f_1489, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar24 = true;
				}
				if ((func_17(Global_2404993.f_468) && iVar7 == Global_2404993.f_1514.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar25)
					{
						fVar2 = func_78(Param0);
						bVar25 = true;
					}
					if (fVar2 < Global_2404993.f_1514.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_77(Var16, iVar15);
						Global_2404993.f_1514.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404993.f_1514.f_6[iVar15 /*8*/] || (iVar7 == Global_2404993.f_1514.f_6[iVar15 /*8*/] && fVar0 > Global_2404993.f_1514.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_1 = fVar0;
					func_77(Var16, iVar15);
					Global_2404993.f_1514.f_2 = 1;
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
				if (iVar7 > Global_2404993.f_1514.f_6[iVar15 /*8*/] || (iVar7 == Global_2404993.f_1514.f_6[iVar15 /*8*/] && fVar3 > Global_2404993.f_1514.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_3 = fVar3;
					func_77(Var16, iVar15);
					Global_2404993.f_1514.f_2 = 1;
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
		if (func_706(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xE0BDAFA1A39552D6() || iParam5 == 1)
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
					if (unk_0xF749B19A9F9B3DBF(iVar11) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
					{
						if (!unk_0xF749B19A9F9B3DBF(iVar11) == -1 || !func_49(unk_0xE0BDAFA1A39552D6(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar11) || !bParam6)
					{
						if (func_65(iVar11))
						{
							Var5 = { func_64(iVar11) };
							if (!iVar11 == unk_0xE0BDAFA1A39552D6())
							{
								Var8 = { unk_0x92FCF8179285B603(unk_0x44A9253132E1DDE0(iVar11)) };
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
							fVar1 = unk_0xA1F52EC3ECE1D42E(Param0, Var5, 1);
							fVar2 = unk_0xA1F52EC3ECE1D42E(Param0, Var8, 1);
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
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_65(int iParam0)
{
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (func_706(iParam0, 0, 1))
	{
		if (!func_74(iParam0))
		{
			if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam0))
			{
				if (!unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
				{
					if (func_27(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_73(unk_0xF749B19A9F9B3DBF(iParam0), unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
				{
					if (!func_27(unk_0xE0BDAFA1A39552D6(), 1))
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
	if (func_72(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_71(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_68(unk_0xE0BDAFA1A39552D6(), iParam0))
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
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_69();
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_71(iParam0) };
		Global_2460487 = { func_71(iParam1) };
		if (unk_0x781D726C27D122E2(&Global_2460474))
		{
			if (unk_0x781D726C27D122E2(&Global_2460487))
			{
				unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474);
				unk_0xAFAED23A75339868(&Global_2460439, 35, &Global_2460487);
				if (Global_2460404 == Global_2460439)
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
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 0);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 1);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 2);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 4);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 5);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 6);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 8);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 9);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 10);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 12);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 13);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 14);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 15);
				
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
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_75()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
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
		if (func_706(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				if (unk_0x7515D29C901C4E76(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0));
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
		if (func_706(iVar1, 1, 1))
		{
			if (!func_126(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if (func_65(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam7 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iVar1), 0));
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
	Var0 = { Global_2404993.f_1514.f_6[iParam8 /*8*/] };
	Global_2404993.f_1514.f_6[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_77(Var0, iParam8 + 1);
	}
}

float func_78(struct<3> Param0)
{
	var uVar0;
	
	return func_79(Param0, &(Global_2404993.f_39), &uVar0);
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404993.f_1719) * (uParam3[iVar0 /*12*/])->f_8)));
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
	if (unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && !func_49(unk_0xE0BDAFA1A39552D6(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_62(func_82(Param0, unk_0xE0BDAFA1A39552D6(), 0), 0f, 0f, fVar4, 0f, 1f);
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
		fVar0 = func_62(unk_0x2A488C176D52CCA5(Global_2404993.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
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
	
	uVar3 = unk_0xBC3E11E0840ACD52(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x8E17092FCA923035(uVar3))
	{
		unk_0x56C3FF2C1012AC52(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xF87C669B882D93C0((Param0.f_2 - Var0.f_2));
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
			if (func_706(iVar3, 0, 1))
			{
				if (unk_0xF749B19A9F9B3DBF(iVar3) != unk_0xF749B19A9F9B3DBF(iParam3) || (unk_0xF749B19A9F9B3DBF(iVar3) == -1 && unk_0xF749B19A9F9B3DBF(iParam3) == -1))
				{
					if (Global_2413817.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar2 /*3*/], Param0);
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
	
	iVar39 = unk_0x8DB7EA2D75DA4B59(unk_0x06736567F820A39E(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xC1EDB61CE0A4B94E(uVar6[iVar2]))
		{
			if (!unk_0xBDA1F5E8A36BFA07(uVar6[iVar2], 0))
			{
				if (func_84(uVar6[iVar2]))
				{
					Var3 = { unk_0xF4745590D18D14B8(uVar6[iVar2], 1) };
					fVar1 = unk_0xA1F52EC3ECE1D42E(Param0, Var3, 1);
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
	
	iVar0 = unk_0xD53C8BCD41123EE6(uParam0);
	switch (unk_0x6144148FF32AED2F(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x6144148FF32AED2F(iVar0, Global_1574218[unk_0xE0BDAFA1A39552D6()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 0)
	{
		iVar1 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x6144148FF32AED2F(iVar0, Global_1573929[iVar1]))
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
		if ((unk_0x759D601DDE232B39(Global_2404993.f_39.f_67) || unk_0xEF439FAE899F725F(Global_2404993.f_39.f_67)) || Global_2404993.f_39.f_67 == joaat("rhino"))
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
	if (Global_2404993.f_39.f_65 && !Global_2404993.f_39.f_295)
	{
		if (!func_74(unk_0xE0BDAFA1A39552D6()))
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
		if ((unk_0x759D601DDE232B39(Global_2404993.f_39.f_67) || unk_0xEF439FAE899F725F(Global_2404993.f_39.f_67)) || Global_2404993.f_39.f_67 == joaat("rhino"))
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
	if ((((fParam7 > 0f && unk_0x7D7A247EA1176EFA(Param0, fParam7)) || (fVar0 > 0f && unk_0x6B1F3F8F6B7B5B2C(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xE8689F4DBC5D8E1B(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xE8689F4DBC5D8E1B(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_89(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404993.f_39.f_55)
	{
		if (unk_0x80B7B1E21DC40E6E(Global_2404993.f_39.f_56))
		{
			if (!unk_0xB8634D17498B22C9(Param0))
			{
				uVar0 = unk_0xED1A87B65DEE4375(Param0);
				if (unk_0x80B7B1E21DC40E6E(uVar0))
				{
					iVar1 = unk_0x9E549C05B82A30B0(uVar0);
					if (!iVar1 == Global_2404993.f_39.f_57)
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
	switch (Global_2404993.f_1510)
	{
		case 0:
			return func_129(Param0, Global_2404993.f_1489, Global_2404993.f_1492, 0, 0);
			break;
		
		case 1:
			return func_52(Param0, Global_2404993.f_1503, Global_2404993.f_1506, 0, 0);
			break;
		
		case 2:
			return unk_0x795DFAC3136F0C6E(Param0, Global_2404993.f_1503, Global_2404993.f_1506, Global_2404993.f_1509, 0, 1);
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
		if (unk_0x795DFAC3136F0C6E(Param0, Var2, Var5, fVar8, 0, 1))
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
				func_31(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
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
				if (Global_1587816[iParam0 /*444*/] == 0)
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
	return Global_1587816[iParam0 /*444*/].f_180 != 0;
}

int func_95(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
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
		if (unk_0xB7A628320EFF8E47(Global_2404993.f_1622[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
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
	float fVar4;
	
	if (func_34(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x83D8CBE6E641FA2A(0.01f, 360f);
			func_31(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 0, fVar4);
			if (func_41(Var1, &uVar0) || func_34(Var1))
			{
				Var1 = { *uParam0 };
				func_31(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 1, fVar4);
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
		if (func_706(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_64(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7515D29C901C4E76(Param0, fParam3))
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
		if (func_706(iVar1, 1, 1))
		{
			if (!func_126(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_65(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xA1F52EC3ECE1D42E(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam8 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xA1F52EC3ECE1D42E(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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
			if (!Global_2413817.f_556[iVar0] == 0)
			{
				if (func_23(Param0, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 1036831949))
				{
					if (func_706(iVar1, 0, 1) && func_706(iParam3, 0, 1))
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
				if (func_706(iVar1, 0, 1) && func_706(iParam4, 0, 1))
				{
					if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_706(iVar1, 0, 1) && func_706(iParam4, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_64(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_706(iVar1, 0, 1))
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
	Global_2404993.f_1 = 0;
	if (!func_99(Param0, 0.5f, unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		Global_2404993.f_1++;
		if (bParam5)
		{
			if (func_150(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
				if (!func_106(Param0, fParam12))
				{
					Global_2404993.f_1++;
					if (!func_22(Param0, 1056964608))
					{
						Global_2404993.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
			}
		}
		else if (!bParam4)
		{
			if (func_150(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
				if (!func_106(Param0, fParam12))
				{
					Global_2404993.f_1++;
					if (!func_103(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404993.f_1++;
						if (!func_22(Param0, 1056964608))
						{
							Global_2404993.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
			}
		}
		else if (func_150(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
			if (!func_106(Param0, fParam12))
			{
				Global_2404993.f_1++;
				if (!func_103(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404993.f_1++;
					if (!func_22(Param0, 1056964608))
					{
						Global_2404993.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
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
		if (!unk_0xE0BDAFA1A39552D6() == iVar1)
		{
			if ((func_706(iVar1, 1, 1) && func_65(iVar1)) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (!func_105(unk_0xE0BDAFA1A39552D6(), iVar1, -2, 0))
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
	return unk_0x795DFAC3136F0C6E(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
	}
	return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
}

int func_106(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_706(iVar1, 1, 1) && func_65(iVar1)) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
		{
			if ((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && unk_0xF749B19A9F9B3DBF(iVar1) == -1) && !func_49(unk_0xE0BDAFA1A39552D6(), 1))
			{
				return 0;
			}
			else if ((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && !unk_0xE0BDAFA1A39552D6() == iVar1) || !func_105(unk_0xE0BDAFA1A39552D6(), iVar1, -2, 0))
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
	if ((Global_2404993.f_468 == 9 || Global_2404993.f_468 == 9) || (Global_2404993.f_468 == 15 && iParam0 == 1))
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
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_706(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_65(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && iParam9) && bParam6) && func_67(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_64(iVar1), Param0, 1) < fParam3)
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
	
	iVar3 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_706(iVar1, 1, 1))
			{
				if ((!func_126(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1)) && iVar1 != unk_0xE0BDAFA1A39552D6())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xF749B19A9F9B3DBF(iVar1) == iVar3)
					{
						if (unk_0xA1F52EC3ECE1D42E(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
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
		return Global_1610705[iVar0 /*178*/] != -1;
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
			if (!unk_0x7DA173D4FD42F36B(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
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
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
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
	Global_2409408 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_114(&Global_2409408, uParam1, iParam2 + 1);
	}
}

void func_115(var uParam0, var uParam1, int iParam2)
{
	Global_2409404 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_115(&Global_2409404, uParam1, iParam2 + 1);
	}
}

void func_116(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404993.f_1285 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1285)
		{
			if (func_117(Global_2404993.f_1286[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404993.f_1286[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404993.f_1286[iVar0 /*4*/] };
					fVar4 = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
				}
				func_61(Global_2404993.f_1286[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404993.f_1514++;
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
		Global_2404993.f_1514.f_64[iVar10 /*10*/] = { Var0 };
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
		Global_2404993.f_1514.f_31[iVar4 /*4*/] = { Var0 };
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
		Global_2404993.f_1514.f_6[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_123()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404993.f_1514 = { Var0 };
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
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_127(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_2404993.f_1155 > 0 && func_148(uParam0, uParam1, uParam2))
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
	Global_2409418.f_162 = 0;
	Global_2409418.f_163 = 0;
	Global_2409418.f_164 = -99;
	Global_2409418.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409418.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xBC3E11E0840ACD52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x8E17092FCA923035(iVar8))
		{
			unk_0x56C3FF2C1012AC52(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409418.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409418.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x69B487ADC61FFEB7(iVar8)) || unk_0x78C3A1255CC06E1B(iVar8))
			{
				unk_0x226281136F155C6F(Var1, &uVar6, &uVar7);
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
										Var1 = { func_144(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_22(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_143(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_147(&Var1, 0)) || uParam2->f_48 == 0)
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
																	if ((uParam2->f_12 && !func_138(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																				else if (func_150(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_137(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																									while (iVar16 < Global_2409418.f_162)
																									{
																										Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409418.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409418.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409418.f_162 == 0)
																								{
																									Global_2409418[0 /*3*/] = { Var1 };
																									Global_2409418.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_135(Var1, fVar4, iVar16);
																												iVar16 = Global_2409418.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409418.f_162++;
																								if (Global_2409418.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
																								Global_2409418.f_121[Global_2409418.f_162] = fVar4;
																								Global_2409418.f_162++;
																								if (func_143(Var1, uParam2))
																								{
																									Global_2409418.f_163++;
																								}
																								if (Global_2409418.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
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
				if (Global_2409418.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
					else
					{
						if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
						{
							func_133(0, uParam2);
						}
						iVar24 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
						Var25 = { Global_2409418[0 /*3*/] };
						uVar28 = Global_2409418.f_121[0];
						Global_2409418[0 /*3*/] = { Global_2409418[iVar24 /*3*/] };
						Global_2409418.f_121[0] = Global_2409418.f_121[iVar24];
						Global_2409418[iVar24 /*3*/] = { Var25 };
						Global_2409418.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
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
						iVar0 = unk_0xA6055C735E3DD877((1 + iVar15), (40 + iVar15));
						unk_0x92162FD91928AD78(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_144(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
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
						if (func_30(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_147(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_131(uParam0, uParam1, uParam2);
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
		Global_2409418.f_164 = iVar8;
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
			if (!func_99(*(uParam0[iVar2 /*4*/]), 5f, unk_0xE0BDAFA1A39552D6(), 0, 0))
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
	if (!func_143(Global_2409418[iParam0 /*3*/], uParam1))
	{
		Global_2409418.f_162 = (Global_2409418.f_162 - 1);
		func_134(iParam0);
		if (Global_2409418.f_162 > Global_2409418.f_163)
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
			Global_2409418[iParam0 /*3*/] = { Global_2409418[iParam0 + 1 /*3*/] };
			Global_2409418.f_121[iParam0] = Global_2409418.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_135(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409418[iParam4 /*3*/] };
	uVar3 = Global_2409418.f_121[iParam4];
	Global_2409418[iParam4 /*3*/] = { Param0 };
	Global_2409418.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409418.f_162 && iParam4 < 39)
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

int func_137(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam9 == 0)
		{
			if (func_706(iVar1, bParam5, bParam6))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam8 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_65(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && iParam10) && bParam7) && func_67(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (func_23(func_64(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_138(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_142(Param0, fParam3, iParam4, iParam5, iParam6) || func_139(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_139(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_141(Param0, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_556[iVar0]))
			{
				if (func_140(Param0, fParam3, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 0))
				{
					if (func_706(iVar1, 0, 1) && func_706(iParam5, 0, 1))
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

int func_140(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	
	if (func_23(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_24(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xF87C669B882D93C0((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xF87C669B882D93C0((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xF87C669B882D93C0((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_25(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_25(&Var26, 0f, 0f, fParam3);
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
		if (func_23(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_140(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
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

int func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_706(iVar1, 0, 1) && func_706(iParam5, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (func_23(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_23(func_64(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (func_23(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_706(iVar1, 0, 0))
			{
				if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
				{
					if (func_23(func_64(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_143(struct<3> Param0, var uParam3)
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
				if (unk_0x795DFAC3136F0C6E(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_144(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_145(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x226281136F155C6F(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FD4A30EB9EA8649(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
		if (!func_145(Param0, *fParam3, Param6))
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
	Var0 = { unk_0x90B89006901451E8(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x003ADF07D87EC4B8(Param0, *fParam3, &Var24))
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

int func_145(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_25(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_37(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_59(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409153[iVar1])
	{
		if (func_58(Param0, &(Global_2408450[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409153[8])
	{
		if (func_58(Param0, &(Global_2408450[8 /*78*/][iVar0 /*7*/])))
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
	if (Global_2404993.f_22.f_16)
	{
		switch (Global_2404993.f_22.f_15)
		{
			case 0:
				if (func_129(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_52(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_40(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, Global_2404993.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_148(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404993.f_1155 > 0)
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
		Global_2409418.f_162 = 0;
		Global_2409418.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409418.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1155)
		{
			Var1 = { Global_2404993.f_1156[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1156[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_138(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
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
								else if (func_150(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_137(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
													while (iVar5 < Global_2409418.f_162)
													{
														Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409418.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409418.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409418.f_162 == 0)
												{
													Global_2409418[0 /*3*/] = { Var1 };
													Global_2409418.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar5 /*3*/], uParam2->f_35))
															{
																func_135(Var1, fVar4, iVar5);
																iVar5 = Global_2409418.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
													}
												}
											}
											else
											{
												Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
												Global_2409418.f_121[Global_2409418.f_162] = fVar4;
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
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
		if (Global_2409418.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
				{
					func_133(0, uParam2);
				}
				iVar13 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
				Var14 = { Global_2409418[0 /*3*/] };
				uVar17 = Global_2409418.f_121[0];
				Global_2409418[0 /*3*/] = { Global_2409418[iVar13 /*3*/] };
				Global_2409418.f_121[0] = Global_2409418.f_121[iVar13];
				Global_2409418[iVar13 /*3*/] = { Var14 };
				Global_2409418.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
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
	unk_0x932FA68E0F89FC72(uParam0, uParam1, 0.1f);
	Global_2404993.f_1497 = unk_0xAE832DCCE9CD3242();
	Global_2404993.f_1495 = 1;
	Global_2404993.f_1498 = unk_0x201D90648B2AE3CE();
}

int func_150(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7D7A247EA1176EFA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x6B1F3F8F6B7B5B2C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x6B1F3F8F6B7B5B2C(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE8689F4DBC5D8E1B(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam13)
	{
		if (unk_0xFED7CD2BD3B9B1DB(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993++;
	if (fParam14 > 0f)
	{
		if (func_108(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
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
	Global_2404993++;
	return 1;
}

void func_151()
{
	if (Global_2404993.f_1495)
	{
		if (unk_0xAE832DCCE9CD3242() == Global_2404993.f_1497)
		{
			unk_0x037646E96F4E7ADD();
		}
		else
		{
			unk_0x037646E96F4E7ADD();
		}
		Global_2404993.f_1495 = 0;
	}
}

int func_152(bool bParam0)
{
	if (unk_0x4FF34B5B023875E1())
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
		while (iLocal_447 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iLocal_447)))
			{
				iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iLocal_447));
				if (func_706(iVar2, 1, 1))
				{
				}
				if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 1))
				{
					if (unk_0x7DA173D4FD42F36B(Local_252[iLocal_447 /*6*/].f_1, 2))
					{
						if (Local_192.f_37 != iVar2)
						{
							Local_192.f_37 = iVar2;
						}
					}
				}
				if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 1))
				{
					if (Local_252[iLocal_447 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_252[iLocal_447 /*6*/].f_5);
					}
				}
				if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 4))
				{
					if (unk_0x7DA173D4FD42F36B(Local_252[iLocal_447 /*6*/].f_1, 5))
					{
						unk_0xE27C8E42A97895CF(&(Local_192.f_1), 4);
						Local_192.f_35 = iVar2;
					}
				}
				if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 2))
				{
					if (!bVar1)
					{
						if (((unk_0x7DA173D4FD42F36B(Local_192.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_192.f_1, 3)) || unk_0x7DA173D4FD42F36B(Local_192.f_1, 4)) || unk_0x7DA173D4FD42F36B(Local_192.f_1, 5))
						{
							if (!unk_0x7DA173D4FD42F36B(Local_252[iLocal_447 /*6*/].f_1, 4))
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
			else if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 5))
			{
				if (Local_192.f_33 > -1)
				{
					if (iLocal_447 == Local_192.f_33)
					{
						unk_0xE27C8E42A97895CF(&(Local_192.f_1), 5);
					}
				}
			}
			iLocal_447++;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 1))
		{
			iVar0 = (iVar0 + Local_192.f_6);
			if (iVar0 >= func_155())
			{
				unk_0xE27C8E42A97895CF(&(Local_192.f_1), 1);
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
		if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 2))
		{
			if (!bVar1)
			{
				unk_0xE27C8E42A97895CF(&(Local_192.f_1), 2);
			}
		}
	}
}

int func_155()
{
	return Global_262145.f_10691;
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
				iVar1 = unk_0xA6055C735E3DD877(0, 20);
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
				fVar1 = unk_0xA1F52EC3ECE1D42E(Local_192.f_38[iVar0 /*3*/], Local_753[iParam0 /*3*/], 1);
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
	return unk_0xBBDA792448DB5A89(Global_262145.f_10692);
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
	iVar0 = unk_0xA6055C735E3DD877(0, 4);
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
			return Global_262145.f_10634;
		
		case 1:
			return Global_262145.f_10635;
		
		case 2:
			return Global_262145.f_10633;
		
		case 3:
			return Global_262145.f_10632;
		
		default:
	}
	return 0;
}

int func_163(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= 1000)
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
		if (unk_0x587E5997B76F47FE())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_165()
{
	func_167();
	if (unk_0x7DA173D4FD42F36B(iLocal_446, 9))
	{
		return;
	}
	if (func_663())
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_446, 0))
		{
			unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
			unk_0xE27C8E42A97895CF(&iLocal_446, 0);
		}
		if (!unk_0x7DA173D4FD42F36B(iLocal_446, 1))
		{
			if (unk_0x25B97FB8615971D6("BG_SIGHTSEER_START"))
			{
				unk_0xE27C8E42A97895CF(&iLocal_446, 1);
			}
		}
		if (unk_0x7DA173D4FD42F36B(iLocal_446, 1))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 3))
			{
				if (Local_192.f_5 == 1)
				{
					if (unk_0x25B97FB8615971D6("BG_SIGHTSEER_MID"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_446, 3);
					}
				}
			}
		}
		if (unk_0x7DA173D4FD42F36B(iLocal_446, 3))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 4))
			{
				if (Local_192.f_5 == 2)
				{
					if (unk_0x25B97FB8615971D6("BG_SIGHTSEER_FINAL"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_446, 4);
					}
				}
			}
		}
		if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_192.f_1, 4))
		{
			if (unk_0x7DA173D4FD42F36B(iLocal_446, 4))
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_446, 6))
				{
					if (unk_0x25B97FB8615971D6("BG_SIGHTSEER_STOP"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_446, 6);
						unk_0xE27C8E42A97895CF(&iLocal_446, 2);
						unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
						unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_339())
	{
		if (func_166(unk_0xE0BDAFA1A39552D6(), 20))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 0))
			{
				unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
				unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
				unk_0xE27C8E42A97895CF(&iLocal_446, 0);
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 7))
			{
				if (unk_0x25B97FB8615971D6("BG_SIGHTSEER_START_ATTACK"))
				{
					unk_0xE27C8E42A97895CF(&iLocal_446, 7);
				}
			}
			if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_192.f_1, 4))
			{
				if (unk_0x7DA173D4FD42F36B(iLocal_446, 7))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_446, 6))
					{
						if (unk_0x25B97FB8615971D6("BG_SIGHTSEER_STOP"))
						{
							unk_0xE27C8E42A97895CF(&iLocal_446, 6);
							unk_0xE27C8E42A97895CF(&iLocal_446, 2);
							unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
							unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_166(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

void func_167()
{
	if (unk_0x7DA173D4FD42F36B(iLocal_446, 8))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_446, 9))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 10))
			{
				if (unk_0x7DA173D4FD42F36B(iLocal_446, 11))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_446, 12))
					{
						unk_0x5BC661D1FF0D731E(1);
						unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x7DA173D4FD42F36B(iLocal_446, 15))
				{
					if (unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_446, 15);
					}
				}
				if (unk_0x7DA173D4FD42F36B(iLocal_446, 15))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_446, 13))
					{
						if (unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO"))
						{
							unk_0xE27C8E42A97895CF(&iLocal_446, 13);
						}
					}
					if (unk_0x7DA173D4FD42F36B(iLocal_446, 13))
					{
						unk_0xE27C8E42A97895CF(&iLocal_446, 10);
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
	
	if (!func_663() && !func_339())
	{
		return;
	}
	if (Local_192.f_34 > -1)
	{
		iVar3 = unk_0x801C03D92F1C6755(Local_192.f_34);
		if (unk_0xA27C9E8196C79D22(iVar3))
		{
			Var0 = { unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iVar3), 0) };
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
	
	if (((func_112(unk_0xE0BDAFA1A39552D6()) && !func_210(unk_0xE0BDAFA1A39552D6())) && !unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8)) && (func_209(unk_0xE0BDAFA1A39552D6()) || func_208(unk_0xE0BDAFA1A39552D6())))
	{
		return;
	}
	Global_1734808 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Param1);
	func_204(iParam0, fVar0);
	if (unk_0x3DC360442A11BB38() && unk_0x0FDDFFBD775C7598() == 15)
	{
		if (func_203(unk_0xE0BDAFA1A39552D6()) || func_201(unk_0xE0BDAFA1A39552D6()))
		{
			if (!unk_0x86AA79952D0B526D(1344549371))
			{
				unk_0x084681BC25D24FCC(1344549371);
			}
		}
		else if (unk_0x86AA79952D0B526D(1344549371))
		{
			unk_0x310F4E81C7574224(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_200(unk_0xE0BDAFA1A39552D6(), 21))
		{
			func_199(Param1, 1, 0);
		}
		if (!*uParam4 && func_706(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 1;
			if (func_198(iParam0))
			{
				unk_0x71543B3C24188223(func_197(iParam0));
				if (func_196(iParam0, -1))
				{
					unk_0x23C09ED6B6466E40(0);
					if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
					{
						unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 1);
						unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 1);
					}
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 0);
				}
			}
			if (func_195(iParam0))
			{
				fVar1 = func_194(iParam0);
				if (fVar1 != 1f)
				{
					func_191(fVar1);
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_190(iParam0) && func_203(unk_0xE0BDAFA1A39552D6()))
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
			if (func_166(unk_0xE0BDAFA1A39552D6(), 19))
			{
				func_185(19);
			}
		}
		if (*uParam4 && func_706(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 0;
			if (func_198(iParam0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
				{
					unk_0x71543B3C24188223(1f);
					unk_0x23C09ED6B6466E40(5);
					unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
				}
			}
			if (func_195(iParam0))
			{
				func_184();
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
			}
			if (iParam7 && !func_112(unk_0xE0BDAFA1A39552D6()))
			{
				if (func_183(unk_0xE0BDAFA1A39552D6()) != 152)
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
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_18), iParam0);
}

bool func_171(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_18, iParam0);
}

void func_172()
{
	Global_2404993.f_20 = { Global_2406822 };
	Global_2404993.f_22 = { Global_2406824 };
	func_181();
	func_173(1, 1);
}

void func_173(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404993.f_39 = { Global_2406841 };
	}
	else
	{
		Global_2404993.f_39 = { Global_2406841 };
		Global_2404993.f_39.f_49 = { Global_2406841.f_49 };
		Global_2404993.f_39.f_52 = Global_2406841.f_52;
		Global_2404993.f_39.f_53 = Global_2406841.f_53;
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
	
	if (Global_2404993.f_469.f_1 == unk_0xAE832DCCE9CD3242())
	{
		Global_2404993.f_469 = { Var0 };
	}
}

void func_175(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_638 = 0;
	}
	else
	{
		Global_2404993.f_638 = 1;
	}
}

void func_176(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404993.f_1144 = iParam1;
		Global_2404993.f_1145 = iParam2;
		Global_2404993.f_1146 = iParam10;
		func_178();
		func_177(8, 0, 0);
		Global_2404993.f_639 = 1;
		Global_2404993.f_1147 = iParam11;
		Global_2404993.f_1150 = iParam3;
		Global_2404993.f_1151 = iParam4;
		Global_2404993.f_1148 = iParam5;
		Global_2404993.f_1149 = iParam6;
		Global_2404993.f_1152 = iParam7;
		Global_2404993.f_1153 = iParam8;
		Global_2404993.f_1154 = iParam9;
	}
	else
	{
		func_178();
		func_177(0, 0, 0);
		Global_2404993.f_639 = 0;
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409586 = 0;
	}
	Global_2404993.f_469 = iParam0;
	Global_2404993.f_469.f_1 = unk_0xAE832DCCE9CD3242();
	Global_2404993.f_469.f_2 = iParam1;
	Global_2404993.f_469.f_3 = iParam2;
}

void func_178()
{
	func_179();
	Global_2404993.f_640 = 0;
}

void func_179()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_641[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_180()
{
	Global_2404993.f_347 = { Global_2407149 };
}

void func_181()
{
	func_182();
	Global_2404993.f_1285 = 0;
}

void func_182()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1286[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_183(int iParam0)
{
	if (func_111(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

void func_184()
{
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && Global_2464975.f_4680 < 1f)
		{
			return;
		}
	}
	Global_2464975.f_4681 = -1;
	Global_2464975.f_4680 = 1f;
}

void func_185(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_186(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_187(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_18), iParam0);
}

void func_188(int iParam0)
{
	if (func_189() && iParam0)
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

int func_189()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
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

void func_191(float fParam0)
{
	float fVar0;
	
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_192())
	{
		return;
	}
	fVar0 = (Global_2464975.f_4680 - fParam0);
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && unk_0xF87C669B882D93C0(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2464975.f_4680 = fParam0;
	Global_2464975.f_4681 = unk_0xAE832DCCE9CD3242();
}

int func_192()
{
	switch (func_193())
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

int func_193()
{
	return Global_25152;
}

float func_194(int iParam0)
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

int func_195(int iParam0)
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

int func_196(int iParam0, int iParam1)
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

float func_197(int iParam0)
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

int func_198(int iParam0)
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

void func_199(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_39.f_49 = { Param0 };
	Global_2404993.f_39.f_52 = iParam3;
	Global_2404993.f_39.f_53 = iParam4;
}

bool func_200(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_201(int iParam0)
{
	if (func_202(iParam0))
	{
		if (func_203(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 != func_69())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_69())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_166(iParam0, 9);
	}
	return 0;
}

void func_204(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_207(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_205();
	}
}

void func_205()
{
	if (!func_206(unk_0xE0BDAFA1A39552D6()))
	{
		func_186(25);
	}
}

bool func_206(int iParam0)
{
	return func_166(iParam0, 25);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10709;
		
		case 142:
			return Global_262145.f_10697;
		
		case 157:
			return Global_262145.f_10664;
		
		case 159:
			return Global_262145.f_10647;
		
		case 162:
			return Global_262145.f_10758;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 7);
	}
	return 0;
}

bool func_210(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 2);
}

void func_211(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_329(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_327() || iParam2 == 24)
	{
		if (func_283(uParam1, iParam2, uParam3, Global_1573685, 0, func_325()))
		{
			func_282(1);
			if ((!func_280() && !func_278()) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
			{
				if (func_277())
				{
					func_274();
				}
				else
				{
					unk_0xF2C2AA10F5F1DDB2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_273(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_272(uParam1);
							if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
							{
								unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
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
								if (func_706(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
									if (!func_126(iVar35, 0))
									{
										if ((unk_0x296D7F88818B62E7(iVar35, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar35 /*313*/].f_232 != -1) || func_94(iVar35))
										{
											iVar44 = iVar35;
											if (func_202(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_269(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_267(unk_0xE0BDAFA1A39552D6(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_265())
							{
								if (func_706(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
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
							if ((func_264(iVar35) && func_259(iVar35, iParam2)) && func_706(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
								Var38 = { func_254(iVar35) };
								if (iVar35 == unk_0xE0BDAFA1A39552D6())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3DB24415831CBC43(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_71(iVar35) };
								iVar37 = func_248(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
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
									if (!func_265())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_243(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_242(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_236(iVar35, 0);
								if (bVar34)
								{
									if (func_235(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_234(iParam5))
								{
									func_233(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_233(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0xE27C8E42A97895CF(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x801C03D92F1C6755(iVar52);
							if (func_706(iVar35, 0, 1) && !unk_0x7DA173D4FD42F36B(iVar49, iVar35))
							{
								iVar35 = unk_0x801C03D92F1C6755(iVar52);
							}
							else
							{
								iVar35 = func_69();
							}
							if (func_264(iVar35))
							{
								if (func_706(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
									Var38 = { func_254(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_71(iVar35) };
									iVar37 = func_248(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
									}
									Global_1573685++;
									iVar51 = func_236(iVar35, 1);
									if (bVar34)
									{
										if (func_235(iVar35, 1))
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
									func_225(unk_0x3DB24415831CBC43(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							func_222(uParam3, uParam1);
						}
						func_221(&(uParam3->f_21));
						func_220();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
						{
							func_219(uParam3, uParam1);
							func_218(uParam1, 0, 1);
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 7);
						}
						func_219(uParam3, uParam1);
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 11);
						}
						if (func_214(uParam3))
						{
							Global_1573833 = 1;
						}
						func_212(uParam3);
						if (Global_1573833 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x6A87921801178186(*uParam1))
					{
						unk_0xA53AA6798EF8BAB3(7);
						unk_0x85DC3CB6F30C7FE7(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xA53AA6798EF8BAB3(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_220();
			func_273(0);
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
			}
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 10))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x50E2186E0E0244C6();
}

void func_212(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_221(&(uParam0->f_21));
		func_213(0);
	}
}

void func_213(bool bParam0)
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

int func_214(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x801C03D92F1C6755(uParam0->f_37);
	if (iVar15 != func_69() && func_706(iVar15, 0, 1))
	{
		Var2 = { func_71(iVar15) };
		iVar1 = func_217(uParam0, uParam0->f_37);
		if (func_216(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_215(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_215(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_215(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_215(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0x88BD5F6528137EC3(&Var2))
						{
							iVar16 = 1;
							func_215(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_215(uParam0, iVar0, 0);
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

void func_215(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_216(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD6F48B026382A9AD(&uParam0, 13);
}

var func_217(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_218(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x2B859AD680983623(*uParam0, "COLLAPSE"))
	{
		unk_0x504EDFAAB39BF764(iParam1);
		unk_0xE97F1B22C5E8989F();
	}
	if (iParam2 == 1)
	{
		if (unk_0x2B859AD680983623(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE97F1B22C5E8989F();
		}
	}
}

void func_219(var uParam0, var uParam1)
{
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_33, 10))
	{
		unk_0x2B859AD680983623(*uParam1, "SET_HIGHLIGHT");
		unk_0x7AF283DA3BA078CD(uParam0->f_35);
		unk_0xE97F1B22C5E8989F();
		unk_0xE27C8E42A97895CF(&(uParam0->f_33), 10);
	}
}

void func_220()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_221(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_222(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar0);
		if (iVar2 != func_69())
		{
			if (func_706(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_224(uParam0->f_38[iVar0 /*2*/], 0);
					func_223(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587816[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_223(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		if (unk_0x2B859AD680983623(*uParam0, "SET_ICON"))
		{
			unk_0x7AF283DA3BA078CD(iParam1);
			unk_0x7AF283DA3BA078CD(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7AF283DA3BA078CD(iParam3);
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

int func_224(int iParam0, bool bParam1)
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

void func_225(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_232() && iParam3 < func_231())
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
		if (unk_0x2B859AD680983623(*uParam1, sVar1))
		{
			unk_0x7AF283DA3BA078CD(iParam3);
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_230("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(iParam9);
			}
			func_230(sParam0);
			unk_0x7AF283DA3BA078CD(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_230("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(65);
			}
			unk_0x7AF283DA3BA078CD(-1);
			func_230("");
			if (uParam2->f_108 == 6)
			{
				func_230("");
			}
			else
			{
				func_230(&sParam4);
			}
			unk_0x504EDFAAB39BF764(uParam2->f_36);
			unk_0xD700C94ACCCAC57A(sParam8);
			unk_0xD700C94ACCCAC57A(sParam8);
			if (func_229(uParam2))
			{
				func_228("DPAD_FRIEND");
			}
			else if (func_227(uParam2))
			{
				func_228("DPAD_FRIEND");
			}
			else if (func_226(uParam2))
			{
				func_228("DPAD_CREW");
			}
			else
			{
				func_228("");
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

bool func_226(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 6);
}

bool func_227(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 5);
}

void func_228(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

int func_229(var uParam0)
{
	if (func_227(uParam0) && func_226(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_230(char* sParam0)
{
	unk_0x8C64B9C850F2EFB2(sParam0);
}

int func_231()
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

int func_232()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_233(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_232() && iParam2 < func_231())
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
		if (unk_0x6A87921801178186(*uParam0))
		{
			if (unk_0x2B859AD680983623(*uParam0, sVar1))
			{
				unk_0x7AF283DA3BA078CD(iParam2);
				if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_230("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					func_228(sParam15);
				}
				else
				{
					func_230(&(uParam1->f_1));
				}
				unk_0x7AF283DA3BA078CD(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_230("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(65);
				}
				if (iParam11 == 1)
				{
					unk_0x7AF283DA3BA078CD(iVar0);
				}
				else
				{
					unk_0x7AF283DA3BA078CD(-1);
				}
				if (func_265())
				{
					func_230("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 5 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x226FA58470A21AEF(sParam15)) && !unk_0x226FA58470A21AEF(sParam16))
				{
					unk_0x7291E2F821FCFC04("FM_AE_TWO_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0x4C5D86B5B659C953(sParam16);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 8 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
				{
					unk_0x7291E2F821FCFC04("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xCB4A32D75D69162C(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0xD92C45283BCDA624(iParam9);
					}
					unk_0x4C5D86B5B659C953(&(uParam1->f_104));
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x7291E2F821FCFC04("FM_AE_CASH");
					unk_0x87E13A04CCA58668(iParam9, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
					{
						func_228(&(uParam1->f_104));
					}
					else
					{
						func_230("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x7291E2F821FCFC04("STRING");
					unk_0x474EBA999C39492E(iParam13, 6);
					unk_0xD6360E18957BCDD3();
				}
				else if (fParam12 != -1f)
				{
					unk_0x7291E2F821FCFC04("NUMBER");
					unk_0xCB4A32D75D69162C(fParam12, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam9 != -1)
				{
					unk_0x7AF283DA3BA078CD(iParam9);
				}
				else
				{
					func_230("");
				}
				if (uParam1->f_108 == 6)
				{
					func_230("");
				}
				else
				{
					func_230(&sParam3);
				}
				unk_0x504EDFAAB39BF764(uParam1->f_36);
				if (iParam11 == 1 || unk_0x226FA58470A21AEF(sParam7))
				{
					func_230("");
					func_230("");
				}
				else
				{
					unk_0xD700C94ACCCAC57A(sParam7);
					unk_0xD700C94ACCCAC57A(sParam7);
				}
				if (func_229(uParam1))
				{
					func_228("DPAD_FRIEND");
				}
				else if (func_227(uParam1))
				{
					func_228("DPAD_FRIEND");
				}
				else if (func_226(uParam1))
				{
					func_228("DPAD_CREW");
				}
				else
				{
					func_228("");
				}
				unk_0xE97F1B22C5E8989F();
			}
		}
	}
}

int func_234(int iParam0)
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

bool func_235(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_202(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_69();
}

int func_236(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_112(iParam0)) && !func_241(iParam0))
	{
		iVar0 = func_240();
	}
	iVar1 = func_239(iParam0);
	if (!iVar1 == -1)
	{
		return func_237(iVar1);
	}
	return iVar0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_238(iParam0);
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

var func_238(int iParam0)
{
	return Global_2413817.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_239(int iParam0)
{
	if (!iParam0 == func_69())
	{
		if (func_235(iParam0, 1))
		{
			return Global_2413817.f_1946.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_240()
{
	return 21;
}

bool func_241(int iParam0)
{
	return func_166(iParam0, 20);
}

char* func_242(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xF35BDD4618A4A0F0())
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
			if (unk_0xF35BDD4618A4A0F0())
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

int func_243(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_247(iParam3))
	{
		*fParam1 = (func_244(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_234(iParam3))
	{
		*fParam1 = (func_244(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_244(int iParam0, int iParam1)
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
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_246(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_245(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_245(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_246(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_247(int iParam0)
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

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = func_251(iParam0);
	if (iVar0 == -1)
	{
		func_249(iParam0, 1);
		return 0;
	}
	Global_1348612[iVar0 /*5*/].f_4 = 1;
	return Global_1348612[iVar0 /*5*/].f_2;
}

void func_249(int iParam0, bool bParam1)
{
	if (!func_706(iParam0, 0, 1))
	{
		return;
	}
	if (func_251(iParam0) != -1)
	{
		return;
	}
	if (Global_1348775)
	{
		if (iParam0 == Global_1348775.f_1)
		{
			return;
		}
	}
	if (func_250(iParam0))
	{
		return;
	}
	if (Global_1348813 >= 32)
	{
		return;
	}
	Global_1348780[Global_1348813] = iParam0;
	Global_1348813++;
	if (bParam1)
	{
	}
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348813)
	{
		if (Global_1348780[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	
	if (!func_706(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348773 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348773)
	{
		if (Global_1348612[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iVar0 /*5*/].f_2) && unk_0x512211B77C9DF624(Global_1348612[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_252(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_252(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348773)
	{
		return;
	}
	if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348612[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xA7ABBEE53A1DE38B(Global_1348612[iParam0 /*5*/].f_2), 64);
			unk_0xCB1D1677ABBD32DC(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x48F723C28E5556E7(Global_1348612[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348773)
	{
		Global_1348612[iVar32 /*5*/] = { Global_1348612[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_253(&(Global_1348612[iVar32 /*5*/]));
	Global_1348773 = (Global_1348773 - 1);
}

void func_253(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_69();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x17CC0D5008835470())
	{
		uParam0->f_3 = unk_0x201D90648B2AE3CE();
	}
}

struct<4> func_254(int iParam0)
{
	struct<4> Var0;
	
	if (func_706(iParam0, 0, 1))
	{
		Global_2460474 = { func_71(iParam0) };
		if (unk_0xB6FEE919E18FF45B())
		{
			if (func_216(Global_2460474))
			{
				if (!unk_0x8BA2944C243C370E(&Global_2460474))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4F07450559D0D1D1(0))
		{
			return Var0;
		}
		if (func_258(&Global_2460474))
		{
			Global_2460404 = { func_256(iParam0) };
			func_255(&Global_2460404, &Var0);
		}
	}
	return Var0;
}

void func_255(var uParam0, var uParam1)
{
	unk_0x86199F6DDB9773B7(uParam0, 35, uParam1);
}

struct<35> func_256(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_257(iParam0))
	{
		return Global_1315947[unk_0xE0BDAFA1A39552D6() /*35*/];
	}
	Var0 = { func_71(iParam0) };
	unk_0xAFAED23A75339868(&Var13, 35, &Var0);
	return Var13;
}

int func_257(int iParam0)
{
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0)
{
	if (unk_0x80D93820C5262668())
	{
		if (unk_0x3D340893CA28EFFC() && unk_0x781D726C27D122E2(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_210(iParam0) || func_263(iParam0)) || func_262(iParam0))
		{
			return 0;
		}
	}
	if (!func_261(iParam0))
	{
		return 0;
	}
	if ((!func_260(iParam0) && Global_2418529[iParam0 /*313*/].f_232 == -1) && !func_94(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	if (func_706(iParam0, 0, 1))
	{
		if (func_706(unk_0xE0BDAFA1A39552D6(), 0, 1))
		{
			if (unk_0x296D7F88818B62E7(iParam0, unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_261(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 22);
}

bool func_262(int iParam0)
{
	if (func_210(iParam0))
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8);
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 10) || unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 9));
	}
	return 0;
}

int func_264(int iParam0)
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
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_131, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_265()
{
	switch (func_266(unk_0xE0BDAFA1A39552D6()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_241(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_183(unk_0xE0BDAFA1A39552D6()))
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

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/];
	}
	return -1;
}

int func_267(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 && func_268(Global_1610705[iParam0 /*178*/].f_10.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1)
	{
		if (func_268(Global_1610705[iParam0 /*178*/].f_10.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
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

void func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_706(unk_0x801C03D92F1C6755(iVar0), 0, 1))
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_126(iVar1, 0))
			{
				if ((unk_0x296D7F88818B62E7(iVar1, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar1 /*313*/].f_232 != -1) || func_94(iVar1))
				{
					if (func_270(iVar1, iParam1, 0))
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

int func_270(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_69())
	{
		if (!bParam2)
		{
			if (func_271(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610705[iParam0 /*178*/].f_10 != func_69())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10;
		}
	}
	return 0;
}

int func_271(int iParam0, int iParam1)
{
	if (iParam1 != func_69())
	{
		if (iParam0 != func_69())
		{
			if (Global_1610705[iParam0 /*178*/].f_10 != func_69())
			{
				if (Global_1610705[iParam0 /*178*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_272(var uParam0)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7AF283DA3BA078CD(0);
		unk_0xE97F1B22C5E8989F();
	}
}

void func_273(bool bParam0)
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

void func_274()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
	{
		if (func_276())
		{
			func_275();
		}
	}
}

void func_275()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_276()
{
	return Global_2428549.f_2191[0 /*72*/].f_1 != 0;
}

int func_277()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0) && func_276())
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1) && func_276())
	{
		return 1;
	}
	return 0;
}

int func_278()
{
	if (func_276())
	{
		if (func_279(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_279(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_280()
{
	if (func_276())
	{
		if (func_281(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)
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

void func_282(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

int func_283(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_324(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_323();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_322())
		{
			if (func_321() > 0 && Global_1573687)
			{
				unk_0x1DA4744DA0C4552C();
				unk_0x681D62E6F663F7E0(fVar7);
				unk_0x9AD5FF38501E64A6(18);
				if (unk_0x6146EFE5BC2DD8DC())
				{
					unk_0xBC86BA2C01CE2035();
				}
				unk_0x9AD5FF38501E64A6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_309())
		{
			func_308(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4429, 26))
	{
		func_308(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_321() == 1)
		{
			func_307(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_308(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6146EFE5BC2DD8DC())
		{
			unk_0xBC86BA2C01CE2035();
		}
		unk_0x9AD5FF38501E64A6(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_321() == 0 && !bParam5))
		{
			func_308(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_306();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x1DA4744DA0C4552C();
				}
				unk_0x9AD5FF38501E64A6(18);
			}
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 0))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				unk_0x681D62E6F663F7E0(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573686)
					{
						unk_0x99BCB15F954AF579(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_306();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x1DA4744DA0C4552C();
					}
					unk_0x9AD5FF38501E64A6(18);
				}
				unk_0x681D62E6F663F7E0(fVar7);
				if (func_307(bVar6, uParam0, 0))
				{
					func_272(uParam0);
					sVar4 = func_304(iParam1, &(Global_1617902.f_76925), bParam4);
					if (bParam4)
					{
						func_301(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_294(uParam0, func_298(uParam2), func_295(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_291(uParam0, func_293(), func_292(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573686;
						func_301(uParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = { func_289(iParam1) };
						iVar8 = func_284(iParam1);
						func_301(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xE27C8E42A97895CF(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_288())
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
			if (func_287(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 20;
			}
			if (func_286(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_285(unk_0xE0BDAFA1A39552D6()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_285(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 4;
}

bool func_286(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

bool func_287(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_288()
{
	return Global_1617902.f_1 == 0;
}

struct<4> func_289(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_290(unk_0xE0BDAFA1A39552D6()) || func_285(unk_0xE0BDAFA1A39552D6()))
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
			StringIntConCat(&Var0, Global_1617902.f_23, 16);
			break;
	}
	return Var0;
}

bool func_290(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 5;
}

void func_291(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(sParam2))
		{
			func_228(sParam1);
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_228("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_292()
{
	switch (func_183(unk_0xE0BDAFA1A39552D6()))
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

char* func_293()
{
	switch (func_183(unk_0xE0BDAFA1A39552D6()))
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

void func_294(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(sParam2))
		{
			func_228(sParam1);
		}
		else if (func_266(unk_0xE0BDAFA1A39552D6()) == 133)
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT_C");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_228("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266(unk_0xE0BDAFA1A39552D6());
	if (func_297())
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
			switch (func_296())
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

int func_296()
{
	if (func_266(unk_0xE0BDAFA1A39552D6()) == 133)
	{
		return Global_2464975.f_4672;
	}
	return -1;
}

bool func_297()
{
	return Global_1587815;
}

char* func_298(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266(unk_0xE0BDAFA1A39552D6());
	if (func_297())
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
			if (func_300() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_300() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_296())
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
			if (func_299() == 1)
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

int func_299()
{
	return Global_2464975.f_4675;
}

int func_300()
{
	if (func_266(unk_0xE0BDAFA1A39552D6()) == 132)
	{
		return Global_2464975.f_4670;
	}
	return -1;
}

void func_301(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_230(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7291E2F821FCFC04(sParam1);
			unk_0xD92C45283BCDA624(iParam5);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_228(sParam1);
		}
		if (func_322() && iParam6)
		{
			if (func_303())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7291E2F821FCFC04("LBD_DPD_CNT");
			unk_0xD92C45283BCDA624(iVar0);
			unk_0xD92C45283BCDA624(iVar1);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_228(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam4);
			if (func_302(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x7AF283DA3BA078CD(166);
			}
		}
		unk_0xE97F1B22C5E8989F();
	}
}

int func_302(int iParam0)
{
	if (func_287(iParam0) || func_286(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_303()
{
	return Global_1573687;
}

char* func_304(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_305();
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
	else if (!unk_0x226FA58470A21AEF(uParam1))
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

char* func_305()
{
	if (unk_0x6CEB82F05DCED56D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x80BCEDDB598B6BA5())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8683BD7E2B2607B8())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x2E1D5B997B3CEA7A())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_306()
{
	Global_36642 = 1;
}

bool func_307(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xDDEDAA5105426019("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_matchmaking_card");
	}
	return unk_0x6A87921801178186(*uParam1);
}

void func_308(var uParam0, var uParam1, bool bParam2)
{
	unk_0x99BCB15F954AF579(&(uParam1->f_33), 7);
	Global_1573685 = 0;
	func_220();
	Global_1573684 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_221(&(uParam1->f_19));
		}
	}
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x0E4537BE1D04DAC7(uParam0);
	}
	if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 0))
	{
		unk_0x99BCB15F954AF579(&(uParam1->f_33), 0);
	}
	unk_0x681D62E6F663F7E0(0f);
}

int func_309()
{
	if (func_320())
	{
		return 0;
	}
	if (func_319())
	{
		return 0;
	}
	if (!func_317())
	{
		return 0;
	}
	if (!func_315())
	{
		return 0;
	}
	if (func_314(8, -1))
	{
		return 0;
	}
	if (func_321() == 2)
	{
		return 0;
	}
	if (Global_2464975.f_4404)
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	else if (!func_27(unk_0xE0BDAFA1A39552D6(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_312(1) || func_310(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (func_74(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (Global_1722819)
	{
		return 0;
	}
	if (func_171(0))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 4))
	{
		return 0;
	}
	return 1;
}

int func_310(bool bParam0)
{
	if (unk_0xA72B7766889EBB86())
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (func_311(unk_0x06736567F820A39E()))
			{
				if (unk_0xE9F7E89BC2352535(0, 25) || unk_0xE9F7E89BC2352535(0, 68))
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
	if (unk_0xE9F7E89BC2352535(0, 19) || (!bParam0 && unk_0x7A4571218C06A722(0, 19)))
	{
		return 1;
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (((unk_0xE9F7E89BC2352535(0, 166) || unk_0xE9F7E89BC2352535(0, 167)) || unk_0xE9F7E89BC2352535(0, 168)) || unk_0xE9F7E89BC2352535(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7A4571218C06A722(0, 166) || unk_0x7A4571218C06A722(0, 167)) || unk_0x7A4571218C06A722(0, 168)) || unk_0x7A4571218C06A722(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (unk_0x8B2DC483C96C65F6())
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			unk_0x47BF380FF078FA9F(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_312(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_313()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_314(int iParam0, int iParam1)
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
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

int func_315()
{
	if (func_316() == 0)
	{
		return 1;
	}
	return 0;
}

int func_316()
{
	return Global_1312466.f_18;
}

int func_317()
{
	if (func_318())
	{
		return 1;
	}
	if (unk_0x4FF34B5B023875E1())
	{
		return 0;
	}
	if (unk_0x58CFBE8B8644D59B() || unk_0xEC708A793EB17979())
	{
		return 0;
	}
	if (unk_0xE80DFF2CE01EA7DA())
	{
		return 0;
	}
	return 1;
}

bool func_318()
{
	return Global_1312438;
}

bool func_319()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 5;
}

bool func_320()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

int func_321()
{
	return Global_1338622.f_68;
}

int func_322()
{
	if (Global_1573686 > 16)
	{
		return 1;
	}
	return 0;
}

float func_323()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x3F3FC0D85C84A6CE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_324(int iParam0)
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

int func_325()
{
	if (func_326(unk_0xE0BDAFA1A39552D6()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_326(int iParam0)
{
	if (unk_0x17CC0D5008835470())
	{
		if (func_126(iParam0, 0))
		{
			return unk_0x7FE82332EF233898(iParam0);
		}
	}
	return 0;
}

int func_327()
{
	if (func_325())
	{
		return 1;
	}
	if (func_262(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_297())
	{
		return 1;
	}
	if (func_112(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_266(unk_0xE0BDAFA1A39552D6()))
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
				if (!func_328(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_328(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_328(unk_0xE0BDAFA1A39552D6()))
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

bool func_328(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 4);
}

int func_329(int iParam0)
{
	if ((iParam0 == 24 && func_112(unk_0xE0BDAFA1A39552D6())) && !func_241(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_111(unk_0xE0BDAFA1A39552D6(), 0) && func_241(unk_0xE0BDAFA1A39552D6()))
		{
			return 1;
		}
		if (func_330(unk_0xE0BDAFA1A39552D6()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_112(iParam0) && !func_210(iParam0)) && !unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8));
	bVar2 = func_241(iParam0);
	uVar3 = func_338();
	uVar4 = func_332();
	if ((bVar1 && (func_209(iParam0) || func_208(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_203(iParam0)) && !func_331(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2464975.f_4685.f_22 != iVar0)
	{
		Global_2464975.f_4685.f_22 = iVar0;
	}
	return iVar0;
}

bool func_331(int iParam0)
{
	return func_166(iParam0, 19);
}

int func_332()
{
	if ((func_166(unk_0xE0BDAFA1A39552D6(), 21) || func_166(unk_0xE0BDAFA1A39552D6(), 22)) || func_335())
	{
		return 1;
	}
	if (func_333())
	{
		func_186(22);
		return 1;
	}
	return 0;
}

int func_333()
{
	if (func_111(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if ((func_338() && !func_334()) || func_200(unk_0xE0BDAFA1A39552D6(), 21))
		{
			if (!func_166(unk_0xE0BDAFA1A39552D6(), 27))
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

bool func_334()
{
	return Global_1312416.f_1;
}

bool func_335()
{
	return func_336(284, -1);
}

int func_336(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_337(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_128();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

bool func_338()
{
	return Global_1312416;
}

bool func_339()
{
	return unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 1);
}

void func_340()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_341(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_341(int iParam0)
{
	struct<4> Var0;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 10))
	{
		if (Local_192.f_34 > -1)
		{
			if (func_339())
			{
				if (!func_332())
				{
					if (!unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 5))
					{
						if (!unk_0x7DA173D4FD42F36B(Local_192.f_1, 4))
						{
							if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
							{
								if (Var0.f_3)
								{
									if (unk_0x77CB3F400804EDD1(Var0.f_0))
									{
										uVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
										if (unk_0x4E75E5867592AC01(uVar11))
										{
											iVar12 = unk_0x90CB634380C802C7(uVar11);
											if (iVar12 == unk_0x801C03D92F1C6755(Local_192.f_34))
											{
												if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
												{
													if (unk_0x77CB3F400804EDD1(Var0.f_1))
													{
														uVar10 = unk_0x406B8F450D0105AB(Var0.f_1);
														if (unk_0x4E75E5867592AC01(uVar10))
														{
															iVar13 = unk_0x90CB634380C802C7(uVar10);
															if (iVar13 == unk_0xE0BDAFA1A39552D6())
															{
																unk_0xE27C8E42A97895CF(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 5);
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
	if (func_339())
	{
		if (!func_166(unk_0xE0BDAFA1A39552D6(), 20))
		{
			if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
			{
				if (unk_0x77CB3F400804EDD1(Var0.f_0))
				{
					uVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
					if (unk_0x4E75E5867592AC01(uVar11))
					{
						iVar12 = unk_0x90CB634380C802C7(uVar11);
						if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
						{
							if (unk_0x77CB3F400804EDD1(Var0.f_1))
							{
								uVar10 = unk_0x406B8F450D0105AB(Var0.f_1);
								if (unk_0x4E75E5867592AC01(uVar10))
								{
									iVar13 = unk_0x90CB634380C802C7(uVar10);
									if (iVar13 == unk_0xE0BDAFA1A39552D6())
									{
										if (unk_0x605885F0A8AC6672(iVar12))
										{
											if (func_235(iVar12, 1))
											{
												if (Local_192.f_33 > -1)
												{
													iVar14 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_192.f_33));
													if (func_270(iVar12, iVar14, 1))
													{
														func_342(0);
														func_205();
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

void func_342(int iParam0)
{
	if (!func_241(unk_0xE0BDAFA1A39552D6()))
	{
		if (iParam0 || func_330(unk_0xE0BDAFA1A39552D6()) != 0)
		{
			func_186(20);
			if (func_112(unk_0xE0BDAFA1A39552D6()))
			{
				if (!unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8))
				{
					unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
				}
			}
		}
	}
}

void func_343()
{
	switch (Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_2)
	{
		case 0:
			func_533();
			func_344();
			if (Local_192.f_32 == 2)
			{
				Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_2 = 2;
			}
			else if (Local_192.f_32 == 3)
			{
				Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_344();
			if (Local_192.f_32 == 3)
			{
				Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_676();
			break;
	}
}

void func_344()
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
	if (!unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 4))
	{
		if (!unk_0x7DA173D4FD42F36B(uLocal_445, 9))
		{
			if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 1))
			{
				if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33 || func_664() == Local_192.f_33)
				{
					if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
					{
						sVar13 = func_532();
						iVar14 = func_531(unk_0xE0BDAFA1A39552D6());
						func_529(86, "GB_WINNER", "BIGM_SGHTYD", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
					}
					if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
					{
						func_528(1, 1);
						unk_0xE27C8E42A97895CF(&iLocal_445, 6);
					}
					func_410(142, 1, &Var0);
					unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
				}
				else if (func_339())
				{
					if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
						{
							sVar13 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
							iVar14 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
							func_529(87, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
						{
							func_528(0, 2);
							unk_0xE27C8E42A97895CF(&iLocal_445, 6);
						}
						func_410(142, 0, &Var0);
					}
					else
					{
						if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
						{
							sVar13 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
							iVar14 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
							func_529(87, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
						{
							func_528(0, 2);
							unk_0xE27C8E42A97895CF(&iLocal_445, 6);
						}
						func_410(142, 0, &Var0);
					}
				}
				unk_0xE27C8E42A97895CF(&iLocal_445, 9);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 3))
			{
				func_405(87, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
				{
					func_528(0, 7);
					unk_0xE27C8E42A97895CF(&iLocal_445, 6);
				}
				func_410(142, 0, &Var0);
				unk_0xE27C8E42A97895CF(&iLocal_445, 9);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 4))
			{
				if (Local_192.f_35 > -1)
				{
					iVar11 = unk_0x801C03D92F1C6755(Local_192.f_35);
				}
				if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
				{
					if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
					{
						if (unk_0xA27C9E8196C79D22(iVar11))
						{
							if (func_235(iVar11, 1))
							{
								sVar13 = func_406(iVar11);
								iVar14 = func_531(iVar11);
							}
							else
							{
								sVar13 = unk_0x3DB24415831CBC43(iVar11);
								iVar14 = 1;
							}
							func_529(87, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_529(87, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
					}
					func_410(142, 0, &Var0);
					if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
					{
						func_528(0, 2);
						unk_0xE27C8E42A97895CF(&iLocal_445, 6);
					}
				}
				else if (func_664() == Local_192.f_33)
				{
					iVar10 = unk_0x801C03D92F1C6755(Local_192.f_34);
					if (iVar10 != func_69())
					{
						if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
						{
							if (unk_0xA27C9E8196C79D22(iVar11))
							{
								if (func_235(iVar11, 1))
								{
									sVar13 = func_406(iVar11);
									iVar14 = func_531(iVar11);
								}
								else
								{
									sVar13 = unk_0x3DB24415831CBC43(iVar11);
									iVar14 = 1;
								}
								func_529(87, "GB_WORK_OVER", "BIGM_SGHTGK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_529(87, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
							}
						}
						func_410(142, 0, &Var0);
						if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
						{
							func_528(0, 2);
							unk_0xE27C8E42A97895CF(&iLocal_445, 6);
						}
					}
				}
				else if (func_339())
				{
					iVar11 = unk_0x801C03D92F1C6755(Local_192.f_35);
					if (iVar11 != func_69())
					{
						if (iVar11 == unk_0xE0BDAFA1A39552D6())
						{
							if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
							{
								if (func_404(1))
								{
									func_405(86, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_405(86, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
							if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
							{
								func_528(1, 1);
								unk_0xE27C8E42A97895CF(&iLocal_445, 6);
							}
							func_410(142, 1, &Var0);
						}
						else if (func_404(1))
						{
							iVar12 = func_403();
							if (func_270(iVar11, iVar12, 1))
							{
								if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
								{
									func_384(86, iVar11, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2);
								}
								if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
								{
									func_528(1, 1);
									unk_0xE27C8E42A97895CF(&iLocal_445, 6);
								}
								func_410(142, 0, &Var0);
							}
							else
							{
								if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
								{
									if (unk_0xA27C9E8196C79D22(iVar11))
									{
										if (func_235(iVar11, 1))
										{
											sVar13 = func_406(iVar11);
											iVar14 = func_531(iVar11);
										}
										else
										{
											sVar13 = unk_0x3DB24415831CBC43(iVar11);
											iVar14 = 1;
										}
										func_529(87, "GB_WORK_OVER", "BIGM_SGHTWK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_405(87, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
								{
									func_528(0, 2);
									unk_0xE27C8E42A97895CF(&iLocal_445, 6);
								}
								func_410(142, 0, &Var0);
							}
						}
						else
						{
							if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
							{
								if (unk_0xA27C9E8196C79D22(iVar11))
								{
									if (func_235(iVar11, 1))
									{
										sVar13 = func_406(iVar11);
										iVar14 = func_531(iVar11);
									}
									else
									{
										sVar13 = unk_0x3DB24415831CBC43(iVar11);
										iVar14 = 1;
									}
									func_529(87, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_405(87, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
							{
								func_528(0, 2);
								unk_0xE27C8E42A97895CF(&iLocal_445, 6);
							}
							func_410(142, 0, &Var0);
						}
					}
				}
				unk_0xE27C8E42A97895CF(&iLocal_445, 9);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 5))
			{
				if (func_371())
				{
					if (func_663())
					{
						if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
						{
						}
					}
					else if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
					{
						func_405(87, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
				{
					func_528(0, 8);
					unk_0xE27C8E42A97895CF(&iLocal_445, 6);
				}
				func_410(159, 0, &Var0);
				unk_0xE27C8E42A97895CF(&iLocal_445, 9);
			}
		}
		if (unk_0x7DA173D4FD42F36B(iLocal_445, 9))
		{
			func_364();
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 8))
			{
				unk_0xE27C8E42A97895CF(&iLocal_446, 8);
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_445, 10))
			{
				if (Local_192.f_34 != -1)
				{
					if (unk_0x7DA173D4FD42F36B(iLocal_445, 5))
					{
						if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_192.f_34)))
						{
							func_362(unk_0x801C03D92F1C6755(Local_192.f_34), 432, 0);
							func_360(unk_0x801C03D92F1C6755(Local_192.f_34), 1, 0);
							func_359(unk_0x801C03D92F1C6755(Local_192.f_34), 0, 0);
							func_358(unk_0x801C03D92F1C6755(Local_192.f_34), 0);
							func_357(unk_0x801C03D92F1C6755(Local_192.f_34), Global_262145.f_10542, 0);
							unk_0xE27C8E42A97895CF(&iLocal_445, 10);
						}
					}
				}
			}
			if (func_345(&uLocal_814, 1))
			{
				unk_0xE27C8E42A97895CF(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 4);
			}
		}
	}
}

int func_345(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_186(29);
	if ((*uParam0 > 0 && !func_276()) && func_330(unk_0xE0BDAFA1A39552D6()) != 0)
	{
		if (!func_356())
		{
			func_355();
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
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 2);
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_354(uParam0, 1);
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
				func_349();
				func_354(uParam0, 2);
			}
			break;
		
		case 2:
			func_349();
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_346(func_347()))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				func_354(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
				func_354(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
			unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_346(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

char* func_347()
{
	if (func_268(func_348()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_348()
{
	return Global_1616402;
}

void func_349()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0))
	{
		if ((((((((!unk_0xCA914B57A3600215() && !unk_0x7DA173D4FD42F36B(Global_2464975.f_743, 2)) && func_706(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !Global_68089) && !Global_52961) && !unk_0x4FF34B5B023875E1()) && !func_166(unk_0xE0BDAFA1A39552D6(), 22)) && func_330(unk_0xE0BDAFA1A39552D6()) != 0) && !func_352(func_353()))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 1);
			func_351(func_347(), -1);
			func_350(1);
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 0);
		}
	}
}

void func_350(int iParam0)
{
	if (iParam0 && !func_276())
	{
		unk_0x962E604CCA53388F(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_351(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam1);
}

int func_352(int iParam0)
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

int func_353()
{
	var uVar0;
	
	uVar0 = unk_0x47B34031F915C179();
	if (unk_0x2F6869889D97DFED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_354(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_355()
{
	Global_2445584 = 1;
}

int func_356()
{
	if (func_183(unk_0xE0BDAFA1A39552D6()) == 170)
	{
		return 1;
	}
	return 0;
}

void func_357(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_192())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_691[iParam0]) || Global_2412936.f_691[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		if (bParam2)
		{
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_388), iVar0);
			Global_2412936.f_493[iVar0] = uParam1;
			Global_2412936.f_691[iParam0] = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_2412936.f_388), iVar0);
			Global_2412936.f_691[iParam0] = -1;
		}
	}
}

void func_358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_2412936.f_365), iParam0);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_2412936.f_365), iParam0);
	}
	if (unk_0xCDB4C4200A9B478A(Global_2412936[iParam0]))
	{
		if (bParam1)
		{
			unk_0xF1C629E826767C2C(Global_2412936[iParam0], 0);
		}
		else
		{
			unk_0xF1C629E826767C2C(Global_2412936[iParam0], 1);
		}
	}
}

void func_359(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_706(iParam0, 1, 1))
		{
			Global_2412936.f_625[iParam0] = unk_0xAE832DCCE9CD3242();
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_364), iParam0);
			func_358(iParam0, bParam2);
		}
	}
	else
	{
		func_358(iParam0, bParam2);
		unk_0x99BCB15F954AF579(&(Global_2412936.f_364), iParam0);
		Global_2412936.f_625[iParam0] = -1;
	}
}

void func_360(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_192())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_361(iParam0))
	{
		if (bParam2)
		{
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = unk_0xAE832DCCE9CD3242();
			Global_2412936.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = -1;
		}
	}
}

int func_361(int iParam0)
{
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_559[iParam0]) || Global_2412936.f_559[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		return 1;
	}
	return 0;
}

void func_362(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_192())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_526[iParam0]) || Global_2412936.f_526[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		if (bParam2)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_2412936.f_385, iVar0))
			{
				func_363();
			}
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_385), iVar0);
			Global_2412936.f_394[iVar0] = uVar1;
			Global_2412936.f_526[iParam0] = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			if (unk_0x7DA173D4FD42F36B(Global_2412936.f_385, iVar0))
			{
				func_363();
			}
			unk_0x99BCB15F954AF579(&(Global_2412936.f_385), iVar0);
			Global_2412936.f_526[iParam0] = -1;
		}
	}
}

void func_363()
{
	Global_2412936.f_880 = 1;
}

void func_364()
{
	if (!func_370())
	{
		return;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
	{
		return;
	}
	func_365();
}

void func_365()
{
	func_367();
	func_366(0);
}

void func_366(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x17CC0D5008835470();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x201D90648B2AE3CE();
		Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
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

void func_367()
{
	if (!func_369())
	{
	}
	if (func_370())
	{
		unk_0xDC3C901EF33A999B(&(Global_1312577.f_10));
		func_368();
		unk_0x50E6AB5DBF4F6633();
	}
}

void func_368()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			unk_0xD92C45283BCDA624(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_55);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_369()
{
	if (!func_370())
	{
		return 0;
	}
	unk_0xD6574ACDB39AA1DE(&(Global_1312577.f_10));
	func_368();
	return unk_0xAB0007E3E71F28E1();
}

int func_370()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_371()
{
	if (!func_372(1))
	{
		return 0;
	}
	if (func_332())
	{
		return 0;
	}
	return 1;
}

int func_372(bool bParam0)
{
	if (func_200(unk_0xE0BDAFA1A39552D6(), 21))
	{
		return 0;
	}
	if (unk_0x51857BE3D081B03F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x8122B656FB23F1C7())
		{
			return 0;
		}
	}
	if (func_95(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_383())
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
	if (func_313())
	{
		return 0;
	}
	if (unk_0x21A36E2323FEA4B1())
	{
		return 0;
	}
	if (func_28(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!func_315())
	{
		return 0;
	}
	if (func_200(unk_0xE0BDAFA1A39552D6(), 0) || func_200(unk_0xE0BDAFA1A39552D6(), 3))
	{
		return 0;
	}
	if ((func_200(unk_0xE0BDAFA1A39552D6(), 12) || func_200(unk_0xE0BDAFA1A39552D6(), 14)) || func_200(unk_0xE0BDAFA1A39552D6(), 13))
	{
		return 0;
	}
	if (func_381(unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		if ((!func_380(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_9) && !func_378(unk_0xE0BDAFA1A39552D6())) || (func_183(unk_0xE0BDAFA1A39552D6()) != 167 && func_183(unk_0xE0BDAFA1A39552D6()) != 168))
		{
			return 0;
		}
	}
	if (func_377())
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (func_376(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_375())
	{
		return 0;
	}
	if (func_374(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_373(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

int func_373(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418529[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_374(int iParam0)
{
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 14))
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 11))
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	if (Global_2557205.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0)
{
	if (!func_706(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587816[iParam0 /*444*/].f_35;
}

bool func_377()
{
	return Global_91362.f_297 > 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_69())
	{
		if (func_706(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_379(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)
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

int func_380(int iParam0)
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

int func_381(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587816[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 0))
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
		if (func_378(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_382()
{
	return Global_1315913;
}

bool func_383()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_384(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_402(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_385(&Var0);
}

int func_385(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428549.f_2481)
		{
			return 0;
		}
	}
	func_388(uParam0, uParam0->f_16);
	func_387(uParam0);
	if (func_386(uParam0->f_1))
	{
		if (Global_2428549.f_2191[0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428549.f_2191[0 /*72*/].f_1 == 13 || Global_2428549.f_2191[0 /*72*/].f_1 == 52) || Global_2428549.f_2191[0 /*72*/].f_1 == 53) || Global_2428549.f_2191[0 /*72*/].f_1 == 57)
		{
			Global_2428549.f_2191[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428549.f_2191[iVar0 + 1 /*72*/] = { Global_2428549.f_2191[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428549.f_2191[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 1);
				Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_279(Global_2428549.f_2191[iVar0 /*72*/].f_1))
				{
					Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
					unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_386(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_387(var uParam0)
{
	if (func_281(uParam0->f_1))
	{
		uParam0->f_66 = func_240();
	}
}

void func_388(var uParam0, int iParam1)
{
	if (func_281(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_69())
	{
		return;
	}
	if (func_279(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_389(iParam1, -2, 0, 0);
		}
	}
}

int func_389(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
	if (func_74(unk_0xE0BDAFA1A39552D6()) || (func_401() && func_400()))
	{
		uVar0 = func_399();
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			if (unk_0x4E75E5867592AC01(uVar0))
			{
				if (unk_0x90CB634380C802C7(uVar0) != -1)
				{
					if (func_706(unk_0x90CB634380C802C7(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
						{
							if (Global_1617902.f_73330[iParam1] != -1)
							{
								return func_398(iParam1, iParam0, 0);
							}
							else
							{
								return func_396(iParam0, unk_0x90CB634380C802C7(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_396(iParam0, unk_0x90CB634380C802C7(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
			{
				if (Global_1617902.f_73330[iParam1] != -1)
				{
					return func_398(iParam1, iParam0, 0);
				}
				else
				{
					return func_390(0, -1, 0);
				}
			}
			else
			{
				return func_390(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
	{
		if (Global_1617902.f_73330[iParam1] != -1)
		{
			return func_398(iParam1, iParam0, 0);
		}
		else
		{
			return func_396(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_396(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
}

int func_390(bool bParam0, int iParam1, bool bParam2)
{
	return func_391(unk_0xE0BDAFA1A39552D6(), bParam0, iParam1, bParam2);
}

int func_391(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_395(1);
				}
				else
				{
					return func_395(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 20))
			{
				return func_392(iVar0, iParam2, 1);
			}
			else
			{
				return func_392(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_395(1);
	}
	return func_395(0);
}

int func_392(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_394(iParam0, iParam1);
	if (func_393(Global_1617902.f_76918))
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

int func_393(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7549[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_394(int iParam0, int iParam1)
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

int func_395(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_396(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587816[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_105(iParam1, iParam0, iVar0, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)) || ((func_73(unk_0xF749B19A9F9B3DBF(iParam1), unk_0xF749B19A9F9B3DBF(iParam0), 0) && unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 23)) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)))
			{
				return func_395(1);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 26))
			{
				return func_397(1);
			}
			else
			{
				return func_391(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587816[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_395(1);
			}
			else
			{
				return func_391(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_239(iParam0);
	if (!iVar3 == -1)
	{
		return func_237(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_397(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_398(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617902.f_73330[iParam0] != -1 && Global_1617902.f_73330[iParam0] <= 4)
	{
		if (Global_1617902.f_73330[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617902.f_73330[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617902.f_73330[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617902.f_73330[iParam0] == 4)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 29))
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
			iVar0 = Global_1617902.f_73330[iParam0];
		}
	}
	else
	{
		iVar0 = func_391(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_399()
{
	return Global_2359301.f_2;
}

bool func_400()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 4);
}

bool func_401()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

void func_402(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_403()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

bool func_404(bool bParam0)
{
	return func_235(unk_0xE0BDAFA1A39552D6(), bParam0);
}

int func_405(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_402(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_385(&Var0);
}

char* func_406(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		uVar0 = func_409(&(Global_1610705[iParam0 /*178*/].f_10.f_77));
		return uVar0;
	}
	if (((func_166(iParam0, 28) || func_166(unk_0xE0BDAFA1A39552D6(), 28)) || func_408(iParam0)) && !func_407(iParam0))
	{
		return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
	}
	iVar1 = func_70(iParam0);
	if (iVar1 != func_69())
	{
		if (iVar1 != unk_0xE0BDAFA1A39552D6())
		{
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
	}
	if (iVar1 != func_69())
	{
		uVar0 = func_409(&(Global_1610705[iVar1 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(uVar0))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_407(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_71(iParam0) };
	if (unk_0xB6FEE919E18FF45B() && unk_0x8BA2944C243C370E(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_71(iParam0) };
	if (unk_0x8B003E1580113906() || unk_0x55812CD5A331E1F8())
	{
		if (unk_0x4F07450559D0D1D1(0))
		{
			return 0;
		}
	}
	else if (unk_0xB6FEE919E18FF45B())
	{
		if (unk_0x8BA2944C243C370E(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_409(var uParam0)
{
	return uParam0;
}

void func_410(int iParam0, bool bParam1, var uParam2)
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
	
	func_526(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_525(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_524(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_183(unk_0xE0BDAFA1A39552D6()) == 167 || func_183(unk_0xE0BDAFA1A39552D6()) == 168)
	{
		if (bParam1)
		{
			if (func_523(unk_0xE0BDAFA1A39552D6()) > 0)
			{
				func_522();
			}
			else
			{
				func_521();
			}
		}
		else
		{
			func_520();
		}
	}
	if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_202(unk_0xE0BDAFA1A39552D6()))
			{
				if (uParam2->f_5)
				{
					iVar0 = (iVar0 + func_512(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_122));
				}
				else
				{
					iVar4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						iVar4 = (iVar4 + uParam2->f_8);
					}
					iVar5 = func_511(iVar4);
					iVar6 = (iVar5 * iVar4);
					iVar0 = (iVar0 + iVar6);
					iVar8 = func_510(&uVar7);
					iVar9 = Global_262145.f_13770;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar8) * Global_262145.f_12980));
					iVar11 = ((iVar0 / 100) * iVar10);
					iVar0 = (iVar0 + iVar11);
					if (uParam2->f_6)
					{
						iVar0 = (iVar0 + *uParam2);
					}
					if (iVar8 > 0 && uParam2->f_9 != 4)
					{
						func_509(44);
					}
				}
				func_503(iVar0);
				func_502();
				Global_2464975.f_4685.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < unk_0xC4A9F8E5EC59EB4F())
				{
					iVar13 = iVar12;
					if (unk_0x6B90EB073E0E641F(iVar13))
					{
						iVar14 = unk_0x1886D89D5D557CB4(iVar13);
						if (func_501(iVar14))
						{
							func_493(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_202(unk_0xE0BDAFA1A39552D6()))
		{
			func_492();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_202(unk_0xE0BDAFA1A39552D6()))
		{
			if (bParam1)
			{
				func_491();
			}
			func_490();
		}
	}
	iVar15 = func_489();
	if (iVar15 != func_69() && iParam0 != 148)
	{
		if (func_235(unk_0xE0BDAFA1A39552D6(), 0))
		{
			if (!func_270(unk_0xE0BDAFA1A39552D6(), iVar15, 1))
			{
				func_476(&iVar0, 1);
			}
		}
	}
	func_473(iParam0, &iVar16, &iVar17);
	iVar1 = (iVar1 + iVar16);
	iVar0 = (iVar0 + iVar17);
	if (iVar1 > 0)
	{
		Global_1734817.f_10 = iVar1;
		func_472();
		func_426(0, unk_0x06736567F820A39E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1734817.f_9 = iVar0;
		iVar20 = func_403();
		if (iVar20 != func_69())
		{
			func_425(iVar20, &uVar18, &uVar19);
		}
		bVar21 = !func_404(1);
		if (iParam0 == 168)
		{
			if (!func_424())
			{
				unk_0x3C4FC10A27FC59C0(iVar0, iVar4);
			}
		}
		else if (func_424())
		{
			func_415(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_2562803[iVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2562803[iVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2562803[iVar22 /*73*/].f_8.f_56 = bVar21;
		}
		else
		{
			unk_0x2622A5EF3329E2D6(uVar18, uVar19, iVar0, bVar21);
		}
		if (func_414(iParam0))
		{
			if (func_413(iParam0) > -1)
			{
				func_412(func_413(iParam0), iVar0);
			}
		}
		Global_2446413 = iVar0;
		func_411(&Global_2444522, 0, 0);
	}
}

void func_411(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

void func_412(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2464975.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5198)
		{
			iParam1 = Global_262145.f_5198;
		}
		Global_2464975.f_270 = iParam1;
		Global_2464975.f_271 = 0;
	}
}

int func_413(int iParam0)
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

int func_414(int iParam0)
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

void func_415(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_424())
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
				func_416(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_416(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_424())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_128()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x1CFE5997DD1709D1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar3))
		{
			*uParam0 = func_423(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2562803[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2563285 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2563293 = 1;
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_422(1, iParam4);
			Global_2563293 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_417(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_417(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_418(iParam0);
	}
}

void func_418(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_424())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_421(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_419(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_419(var uParam0)
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
	func_420(&(uParam0->f_8.f_3));
	func_420(&(uParam0->f_8.f_16));
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

void func_420(var uParam0)
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

int func_421(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_422(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

int func_423(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_424())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = uParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = uParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = iParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_424()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

void func_425(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610705[iParam0 /*178*/].f_10.f_7[0];
	*uParam2 = Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

int func_426(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_427(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_427(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_437(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1))
		{
			if (unk_0x77CB3F400804EDD1(iParam1))
			{
				uVar1 = unk_0x406B8F450D0105AB(iParam1);
				func_433(unk_0xB90C4C04BACF96A1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_428(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_428(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_431(iParam0, 1) };
	if (iParam0 == func_430(unk_0x06736567F820A39E()))
	{
		func_429(1);
	}
	func_433(Var0, iParam1, 0, sParam2, iParam3);
}

void func_429(int iParam0)
{
	Global_2428549.f_1375 = iParam0;
}

int func_430(var uParam0)
{
	return uParam0;
}

Vector3 func_431(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x611B1E292F714CAD())
	{
		Var3 = { unk_0xE361DCEC3CCB65F0(2) };
	}
	if (iParam0 == func_432(unk_0x06736567F820A39E()) && unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		Var0 = { unk_0xF42E2289B33D5C38(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		fVar6 = unk_0x3CAD22C2D36A7F14(iParam0);
		if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x90B89006901451E8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_432(var uParam0)
{
	return uParam0;
}

void func_433(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428549.f_774[iVar0 /*30*/].f_6 == 0 || Global_2428549.f_774[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428549.f_774[iVar1 /*30*/] = { Param0 };
			Global_2428549.f_774[iVar1 /*30*/].f_6 = 1;
			Global_2428549.f_774[iVar1 /*30*/].f_4 = func_436(Global_2428549.f_774[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2428549.f_774[iVar1 /*30*/].f_7 = unk_0x201D90648B2AE3CE();
			Global_2428549.f_774[iVar1 /*30*/].f_3 = iParam3;
			Global_2428549.f_774[iVar1 /*30*/].f_8 = iParam4;
			Global_2428549.f_774[iVar1 /*30*/].f_9 = func_435();
			Global_2428549.f_774[iVar1 /*30*/].f_10 = func_434();
			StringCopy(&(Global_2428549.f_774[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2428549.f_774[iVar1 /*30*/].f_26 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam6);
		}
	}
}

int func_434()
{
	if (Global_2428549.f_1375)
	{
		Global_2428549.f_1375 = 0;
		return 1;
	}
	Global_2428549.f_1375 = 0;
	return 0;
}

var func_435()
{
	var uVar0;
	
	uVar0 = Global_2428549.f_1377;
	Global_2428549.f_1377 = 1;
	return uVar0;
}

float func_436(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xA1F52EC3ECE1D42E(unk_0x1ADD718B7E9360A5(), Param0, 1);
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

var func_437(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_438(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_438(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_471(unk_0xE0BDAFA1A39552D6()) || func_470(unk_0xE0BDAFA1A39552D6()))
	{
		if (Global_262145.f_7844 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7844;
		}
	}
	else if (Global_262145.f_5249 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5249;
	}
	if (func_469(uParam2))
	{
	}
	if (func_468())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_466(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_465(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_463(0, &iVar1);
					break;
				
				case 3:
					func_463(1, &iVar1);
					break;
				
				case 1:
					func_461(&iVar1);
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
			func_458(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_448((func_457(unk_0xE0BDAFA1A39552D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xADECF862874B38F9(iVar1, iParam8, iParam9);
				if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_2 != -1)
				{
					func_458(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_443(iVar1);
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
				func_439((func_441(unk_0xE0BDAFA1A39552D6()) + iVar1));
			}
			else
			{
				func_439((func_441(unk_0xE0BDAFA1A39552D6()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_439(int iParam0)
{
	if (func_468())
	{
		Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_5 = iParam0;
		func_440(joaat("mpply_globalxp"), iParam0);
	}
}

void func_440(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
}

int func_441(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_706(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return func_442(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_442(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_442(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_443(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_71(unk_0xE0BDAFA1A39552D6()) };
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(&Var0))
		{
			iVar13 = func_446(func_447(&Var0));
			if (iVar13 == 0)
			{
				func_445(&Global_1347700, iParam0);
				func_444(joaat("mpply_crew_local_xp_0"), Global_1347700);
			}
			else if (iVar13 == 1)
			{
				func_445(&Global_1347701, iParam0);
				func_444(joaat("mpply_crew_local_xp_1"), Global_1347701);
			}
			else if (iVar13 == 2)
			{
				func_445(&Global_1347702, iParam0);
				func_444(joaat("mpply_crew_local_xp_2"), Global_1347702);
			}
			else if (iVar13 == 3)
			{
				func_445(&Global_1347703, iParam0);
				func_444(joaat("mpply_crew_local_xp_3"), Global_1347703);
			}
			else if (iVar13 == 4)
			{
				func_445(&Global_1347704, iParam0);
				func_444(joaat("mpply_crew_local_xp_4"), Global_1347704);
			}
		}
	}
}

void func_444(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347695 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347697 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347697 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347698 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347699 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347700 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347701 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347702 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347703 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347704 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347705 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347706 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347707 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347708 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347709 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347710 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347711 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_445(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_446(int iParam0)
{
	if (iParam0 == Global_1347695)
	{
		return 0;
	}
	else if (iParam0 == Global_1347696)
	{
		return 1;
	}
	else if (iParam0 == Global_1347697)
	{
		return 2;
	}
	else if (iParam0 == Global_1347698)
	{
		return 3;
	}
	else if (iParam0 == Global_1347699)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_447(var uParam0)
{
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(uParam0))
		{
			return Global_2444023;
		}
	}
	return Global_2444023;
}

void func_448(int iParam0, int iParam1, int iParam2)
{
	if (func_468())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7814 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347815[func_337(-1)])
				{
					unk_0xADECF862874B38F9(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347815[func_337(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_456(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_1 = iParam0;
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_6 = func_454(iParam0, 1);
		}
		func_453(632, iParam0, -1, 1);
		func_452(633, func_454(iParam0, 1), -1, 1);
		Global_1347815[func_337(-1)] = iParam0;
		func_449(7, 0);
	}
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_451(iParam0, iParam1))
	{
		iVar0 = func_450();
		Global_2444000[iVar0] = iParam0;
	}
}

int func_450()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2444000[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_451(int iParam0, var uParam1)
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

void func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_337(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

void func_453(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_337(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_337(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_337(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_337(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_337(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_337(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_337(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_337(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_337(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_337(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_337(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_337(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_337(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_337(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_337(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_337(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_337(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_337(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_337(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_337(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_337(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_337(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_337(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_337(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_337(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_337(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_337(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_337(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_337(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_337(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_337(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_337(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_337(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_337(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_337(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_455(iParam0, 0);
}

int func_455(int iParam0, int iParam1)
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
		if (Global_276766[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_276766[iVar3] < iParam0)
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

int func_456(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_2428549.f_1, iParam0);
	}
	return 1;
}

int func_457(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return Global_1347815[func_337(-1)];
			}
			else if (func_456(iParam0))
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347815[func_337(-1)];
	}
	return 0;
}

void func_458(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_460(iParam0, func_337(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_459(iParam0))
	{
		func_452(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_453(iParam0, iVar0, iParam2, 1);
	}
}

int func_459(int iParam0)
{
	if (Global_1347694)
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
			case 3918:
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

int func_460(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_337(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		iVar4 = unk_0x3FA2D2B4F501B725(iVar0);
		if (unk_0x6B90EB073E0E641F(iVar4))
		{
			iVar5 = unk_0x1886D89D5D557CB4(iVar4);
			if (unk_0xF749B19A9F9B3DBF(iVar5) != -1)
			{
				if (unk_0xF749B19A9F9B3DBF(iVar5) == iVar1 || func_73(unk_0xF749B19A9F9B3DBF(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xE0BDAFA1A39552D6())
					{
						if (func_72(unk_0xE0BDAFA1A39552D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_462(*iParam0, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_462(*iParam0, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_462(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_463(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
		{
			iVar3 = iVar0;
			if (unk_0x6B90EB073E0E641F(iVar3))
			{
				iVar4 = unk_0x1886D89D5D557CB4(iVar3);
				if (func_706(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xE0BDAFA1A39552D6())
					{
						iVar1++;
						if (func_72(unk_0xE0BDAFA1A39552D6(), iVar4))
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
			if (func_706(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xE0BDAFA1A39552D6())
				{
					if (func_464(unk_0xE0BDAFA1A39552D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_72(unk_0xE0BDAFA1A39552D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_462(*iParam1, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_462(*iParam1, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_464(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_64(iParam0), func_64(iParam1));
	return 0f;
}

int func_465(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC66ACBB5C8ECB07() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_462(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_466(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xED165ADF51B05913(iParam0) > func_457(unk_0xE0BDAFA1A39552D6()))
		{
			iParam0 = -func_457(unk_0xE0BDAFA1A39552D6());
		}
	}
	if (func_467(8000, 0, 0) > 0)
	{
		if (func_467(8000, 0, 0) < (iParam0 + func_457(unk_0xE0BDAFA1A39552D6())))
		{
			iParam0 = (func_467(8000, 0, 0) - func_457(unk_0xE0BDAFA1A39552D6()));
		}
	}
	return iParam0;
}

int func_467(int iParam0, bool bParam1, int iParam2)
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
	return Global_276766[iParam0];
}

int func_468()
{
	return 1;
}

int func_469(var uParam0)
{
	if (unk_0x60D87DA27F70EBBC(uParam0))
	{
		return 1;
	}
	else if (unk_0x2F6869889D97DFED(uParam0, "") || unk_0x2F6869889D97DFED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_470(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_471(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

void func_472()
{
	Global_2445583 = 1;
}

void func_473(int iParam0, var uParam1, var uParam2)
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
	iVar0 = func_475(iParam0);
	iVar1 = func_474(iParam0);
	iVar2 = unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(Global_2464975.f_4685.f_67, unk_0x201D90648B2AE3CE()));
	if (iVar2 > Global_262145.f_10582)
	{
		iVar2 = Global_262145.f_10582;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10673;
		
		case 152:
			return Global_262145.f_10708;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10696;
		
		case 157:
			return Global_262145.f_10663;
		
		case 159:
			return Global_262145.f_10646;
		
		case 164:
			return Global_262145.f_10686;
		
		case 160:
			return Global_262145.f_10736;
		
		case 162:
			return Global_262145.f_10756;
		
		case 163:
			return Global_262145.f_10721;
		
		case 154:
			return Global_262145.f_10791;
		
		case 155:
			return Global_262145.f_10781;
		
		case 153:
			return Global_262145.f_10745;
		
		case 170:
			return Global_262145.f_12625;
		
		case 171:
			return Global_262145.f_12684;
		
		case 172:
			return Global_262145.f_12702;
		
		case 173:
			return Global_262145.f_12643;
		
		case 166:
			return Global_262145.f_12658;
		
		case 167:
			return Global_262145.f_12749;
		
		case 169:
			return Global_262145.f_12721;
		
		case 168:
			return Global_262145.f_12714;
		
		default:
	}
	return 0;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10672;
		
		case 152:
			return Global_262145.f_10707;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10695;
		
		case 157:
			return Global_262145.f_10662;
		
		case 159:
			return Global_262145.f_10645;
		
		case 164:
			return Global_262145.f_10685;
		
		case 160:
			return Global_262145.f_10735;
		
		case 162:
			return Global_262145.f_10755;
		
		case 163:
			return Global_262145.f_10720;
		
		case 154:
			return Global_262145.f_10790;
		
		case 155:
			return Global_262145.f_10780;
		
		case 153:
			return Global_262145.f_10744;
		
		case 170:
			return Global_262145.f_12624;
		
		case 171:
			return Global_262145.f_12683;
		
		case 172:
			return Global_262145.f_12701;
		
		case 173:
			return Global_262145.f_12642;
		
		case 166:
			return Global_262145.f_12657;
		
		default:
	}
	return 0;
}

void func_476(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_649())
		{
			if (func_404(0))
			{
				if (unk_0xA27C9E8196C79D22(func_403()))
				{
					if (func_488() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_488());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_486(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_479("GB_BCUT_TICK1", func_403(), iVar0, 0, 0, 1, 1);
					}
					func_509(20);
					func_477(func_403(), iVar0, 1);
				}
			}
		}
	}
}

void func_477(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_706(iParam0, 0, 1))
	{
		Var0.f_0 = 456;
		Var0.f_1 = unk_0xE0BDAFA1A39552D6();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCCAB9843EFA5C08A(1, &Var0, 5, func_478(iParam0));
	}
}

var func_478(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

int func_479(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		unk_0xD5EA844E0F1947AF(func_389(iParam1, -2, 1, 0));
		unk_0x9C174A0D56FFB64A(func_484(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xD5EA844E0F1947AF(iParam3);
		}
		unk_0xD92C45283BCDA624(iParam2);
		iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		func_480(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_480(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_483() || !unk_0x21A36E2323FEA4B1()) || !func_126(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_481(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_482(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_482(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_483()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

var func_484(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_485(&cVar0);
}

var func_485(char[4] cParam0)
{
	return cParam0;
}

void func_486(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_487(1);
	}
	else
	{
		iVar1 = func_487(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_487(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10577;
}

int func_488()
{
	return Global_262145.f_10576;
}

int func_489()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_30;
}

void func_490()
{
	int iVar0;
	
	iVar0 = Global_2497703[func_128()];
	iVar0++;
	Global_2497703[func_128()] = iVar0;
	func_453(3245, iVar0, -1, 1);
}

void func_491()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2497698[func_128()];
	iVar1 = Global_2497713[func_128()];
	iVar0++;
	iVar1++;
	Global_2497698[func_128()] = iVar0;
	Global_2497713[func_128()] = iVar1;
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_85 = iVar1;
	func_453(3243, iVar0, -1, 1);
	func_453(3244, iVar1, -1, 1);
}

void func_492()
{
	int iVar0;
	
	iVar0 = Global_2497708[func_128()];
	iVar0++;
	func_453(3247, iVar0, -1, 1);
}

void func_493(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_495(iParam0);
	func_494(iParam0, uVar0, iParam1);
}

void func_494(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 453;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_69())
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			unk_0xCCAB9843EFA5C08A(1, &Var0, 4, func_478(iParam0));
		}
	}
}

int func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_500();
	iVar0 = func_498(iParam0, iVar0);
	iVar1 = Global_1610705[func_403() /*178*/].f_10.f_155;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12585));
	if (iVar0 < func_497())
	{
		iVar0 = func_497();
	}
	if (iVar0 > func_496())
	{
		iVar0 = func_496();
	}
	return iVar0;
}

int func_496()
{
	return Global_262145.f_12586;
}

int func_497()
{
	return Global_262145.f_13760;
}

int func_498(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_523(iParam0) * func_499());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_499()
{
	return Global_262145.f_13759;
}

var func_500()
{
	return Global_262145.f_10568;
}

int func_501(int iParam0)
{
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (iParam0 != unk_0xE0BDAFA1A39552D6())
		{
			if (func_270(iParam0, unk_0xE0BDAFA1A39552D6(), 0))
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

void func_502()
{
	int iVar0;
	
	iVar0 = Global_2497718[func_128()];
	iVar0++;
	func_453(3246, iVar0, -1, 1);
}

void func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2497723[func_128()];
	iVar0 = (iVar0 + iParam0);
	func_453(3248, iVar0, -1, 1);
	if (func_506(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_505(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_504(7666, iVar2, -1, 1);
	}
}

var func_504(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xF1BE098FFCB3A8F1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xF1BE098FFCB3A8F1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xF1BE098FFCB3A8F1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xF1BE098FFCB3A8F1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xC60DF3F40775C421(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13903;
			break;
		
		case 2:
			return Global_262145.f_13904;
			break;
		
		case 3:
			return Global_262145.f_13905;
			break;
		
		case 4:
			return Global_262145.f_13906;
			break;
		
		case 5:
			return Global_262145.f_13907;
			break;
		
		case 6:
			return Global_262145.f_13908;
			break;
		
		case 7:
			return Global_262145.f_13909;
			break;
		
		case 8:
			return Global_262145.f_13910;
			break;
		
		case 9:
			return Global_262145.f_13911;
			break;
		
		case 10:
			return Global_262145.f_13912;
			break;
		
		case 11:
			return Global_262145.f_13913;
			break;
		
		case 12:
			return Global_262145.f_13914;
			break;
		
		case 13:
			return Global_262145.f_13915;
			break;
		
		case 14:
			return Global_262145.f_13916;
			break;
		
		case 15:
			return Global_262145.f_13917;
			break;
		
		case 16:
			return Global_262145.f_13918;
			break;
		
		case 17:
			return Global_262145.f_13919;
			break;
		
		case 18:
			return Global_262145.f_13920;
			break;
		
		case 19:
			return Global_262145.f_13921;
			break;
		
		case 20:
			return Global_262145.f_13922;
			break;
		
		case 21:
			return Global_262145.f_13923;
			break;
		
		case 22:
			return Global_262145.f_13924;
			break;
		
		case 23:
			return Global_262145.f_13925;
			break;
		
		case 24:
			return Global_262145.f_13926;
			break;
	}
	return 0;
}

int func_506(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	iVar0 = 0;
	iVar1 = func_508(iParam0, iParam1);
	uVar2 = func_507(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xC4D41F5AA8205814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_507(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xF1BE098FFCB3A8F1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xF1BE098FFCB3A8F1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xF1BE098FFCB3A8F1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xF1BE098FFCB3A8F1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

int func_510(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(iVar0)))
		{
			iVar2 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_126(iVar2, 0) && !func_270(iVar2, unk_0xE0BDAFA1A39552D6(), 1))
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

var func_511(int iParam0)
{
	if (iParam0 >= Global_262145.f_12958)
	{
		return Global_262145.f_12979;
	}
	else if (iParam0 >= Global_262145.f_12957)
	{
		return Global_262145.f_12978;
	}
	else if (iParam0 >= Global_262145.f_12956)
	{
		return Global_262145.f_12977;
	}
	else if (iParam0 >= Global_262145.f_12955)
	{
		return Global_262145.f_12976;
	}
	else if (iParam0 >= Global_262145.f_12954)
	{
		return Global_262145.f_12975;
	}
	else if (iParam0 >= Global_262145.f_12953)
	{
		return Global_262145.f_12974;
	}
	else if (iParam0 >= Global_262145.f_12952)
	{
		return Global_262145.f_12973;
	}
	else if (iParam0 >= Global_262145.f_12951)
	{
		return Global_262145.f_12972;
	}
	else if (iParam0 >= Global_262145.f_12950)
	{
		return Global_262145.f_12971;
	}
	else if (iParam0 >= Global_262145.f_12949)
	{
		return Global_262145.f_12970;
	}
	else if (iParam0 >= Global_262145.f_12948)
	{
		return Global_262145.f_12969;
	}
	else if (iParam0 >= Global_262145.f_12947)
	{
		return Global_262145.f_12968;
	}
	else if (iParam0 >= Global_262145.f_12946)
	{
		return Global_262145.f_12967;
	}
	else if (iParam0 >= Global_262145.f_12945)
	{
		return Global_262145.f_12966;
	}
	else if (iParam0 >= Global_262145.f_12944)
	{
		return Global_262145.f_12965;
	}
	else if (iParam0 >= Global_262145.f_12943)
	{
		return Global_262145.f_12964;
	}
	else if (iParam0 >= Global_262145.f_12942)
	{
		return Global_262145.f_12963;
	}
	else if (iParam0 >= Global_262145.f_12941)
	{
		return Global_262145.f_12962;
	}
	else if (iParam0 >= Global_262145.f_12940)
	{
		return Global_262145.f_12961;
	}
	else if (iParam0 >= Global_262145.f_12939)
	{
		return Global_262145.f_12960;
	}
	return Global_262145.f_12959;
}

int func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_519(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_518(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_517(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_513(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_513(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_517(unk_0xA6055C735E3DD877(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (func_516(iParam0))
	{
		iVar0 = func_514(func_515(iParam0));
		return func_460(iVar0, -1, 0);
	}
	return 0;
}

int func_514(int iParam0)
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

int func_515(int iParam0)
{
	int iVar0;
	
	if (func_516(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_516(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_517(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13158;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13156;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13160;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13154;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13152;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13162;
	}
	return 0;
}

int func_518(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_516(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1736106[iVar0] == iParam1 && Global_1736113[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_519(int iParam0)
{
	int iVar0;
	
	if (func_516(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_520()
{
	if (func_649())
	{
		Global_2435608.f_3065.f_70 = 0;
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
	}
}

void func_521()
{
	if (func_649())
	{
		if (Global_2435608.f_3065.f_70 < 10)
		{
			Global_2435608.f_3065.f_70++;
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

void func_522()
{
	if (func_649())
	{
		if (Global_2435608.f_3065.f_70 > 0)
		{
			Global_2435608.f_3065.f_70 = (Global_2435608.f_3065.f_70 - 1);
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

int func_523(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_23;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10693) * Global_262145.f_10698));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10643) * Global_262145.f_10648));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10670) * Global_262145.f_10674));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10683) * Global_262145.f_10687));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10705) * Global_262145.f_10710));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10867) * Global_262145.f_10868));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10873) * Global_262145.f_10874));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10871) * Global_262145.f_10872));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10865) * Global_262145.f_10866));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10869) * Global_262145.f_10870));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10863) * Global_262145.f_10864));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12681;
		
		case 172:
			return Global_262145.f_12697;
		
		case 173:
			return Global_262145.f_12640;
		
		case 166:
			return 0;
		
		default:
	}
	return 0;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10694) * Global_262145.f_10699));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10644) * Global_262145.f_10649));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10671) * Global_262145.f_10675));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10684) * Global_262145.f_10688));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10706) * Global_262145.f_10711));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10743) * Global_262145.f_10746));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10789) * Global_262145.f_10792));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10779) * Global_262145.f_10782));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10734) * Global_262145.f_10737));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10754) * Global_262145.f_10759));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10719) * Global_262145.f_10722));
		
		case 170:
			return Global_262145.f_12623;
		
		case 171:
			return Global_262145.f_12682;
		
		case 172:
			return Global_262145.f_12698;
		
		case 173:
			return Global_262145.f_12641;
		
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

void func_526(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_527(iParam0))
	{
		if (!func_649())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10587;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10586;
	*uParam2 = Global_262145.f_10585;
	if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
	{
		*uParam1 = Global_262145.f_10584;
		*uParam2 = Global_262145.f_10583;
	}
	iVar0 = func_489();
	if (iVar0 != func_69())
	{
		if (func_270(unk_0xE0BDAFA1A39552D6(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_527(int iParam0)
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

void func_528(bool bParam0, int iParam1)
{
	Global_1734817.f_6 = unk_0x40077EDF3FF70C39();
	if (bParam0)
	{
		Global_1734817.f_7 = 1;
	}
	else
	{
		Global_1734817.f_7 = 0;
	}
	Global_1734817.f_8 = iParam1;
	if (Global_1734817.f_4 == 0)
	{
		if ((func_203(unk_0xE0BDAFA1A39552D6()) || func_331(unk_0xE0BDAFA1A39552D6())) || func_241(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1734817.f_4 = 1;
		}
	}
}

int func_529(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_69();
	iVar1 = func_69();
	iVar2 = func_69();
	return func_530(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_530(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_402(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xE27C8E42A97895CF(&(Var0.f_63), 2);
	return func_385(&Var0);
}

int func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = func_239(iParam0);
	if (iVar0 != -1)
	{
		return func_237(iVar0);
	}
	return 1;
}

char* func_532()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_70(unk_0xE0BDAFA1A39552D6());
	if (iVar0 != func_69())
	{
		if (iVar0 != unk_0xE0BDAFA1A39552D6())
		{
			if (((func_166(iVar0, 28) || func_166(unk_0xE0BDAFA1A39552D6(), 28)) || func_408(iVar0)) && !func_407(iVar0))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
		uVar1 = func_409(&(Global_1610705[iVar0 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(uVar1))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_533()
{
	func_645();
	func_622();
	func_611();
	func_601();
	func_555();
	func_550();
	func_537();
	func_534();
}

void func_534()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_752 != Local_192.f_5)
	{
		if (Local_192.f_34 != -1)
		{
			if (func_371())
			{
				if (func_330(unk_0xE0BDAFA1A39552D6()) >= 1)
				{
					if (Local_192.f_5 > 0)
					{
						if (Local_192.f_37 > -1)
						{
							iVar0 = unk_0x801C03D92F1C6755(Local_192.f_37);
							if (unk_0xA27C9E8196C79D22(iVar0))
							{
								if (iVar0 != unk_0xE0BDAFA1A39552D6())
								{
									if (func_235(iVar0, 1))
									{
										iVar1 = func_239(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_237(iVar1);
											func_535("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_535("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
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

int func_535(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		unk_0xD5EA844E0F1947AF(iParam2);
		unk_0x9C174A0D56FFB64A(func_484(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		}
		else
		{
			Global_2460474 = { func_71(iParam1) };
			if (unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474))
			{
				iVar17 = 0;
				if (unk_0x2F6869889D97DFED(&(Global_2460404.f_22), "Leader") && Global_2460404.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2460404.f_21 > 0)
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
						Var1 = { func_536(&Var1) };
					}
					iVar0 = unk_0x7EFA4D96D67E80FA(iVar18, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar17, 0, Global_2460404, &Var1, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = unk_0xFA42110C8985008E(iVar18, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar17, 0, Global_2460404, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = unk_0xB452F88B6A7B058D(0, 1);
			}
		}
		func_480(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_536(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_537()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_663() && !func_339())
	{
		return;
	}
	if (unk_0x7DA173D4FD42F36B(Local_458.f_0, 0))
	{
		return;
	}
	if (!func_371())
	{
		return;
	}
	iVar0 = func_330(unk_0xE0BDAFA1A39552D6());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_192.f_51)))
	{
		iVar1 = (func_11() - func_549(&(Local_192.f_51), 0, 0));
		iVar2 = (func_155() - Local_192.f_5);
		func_548(iVar1);
		if (iVar1 > 30000)
		{
			func_538(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_538(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_538(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_538(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_546(0) == 0)
	{
		return;
	}
	func_545();
	func_542(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_469(sParam4))
	{
		sVar0 = sParam4;
	}
	func_539(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0);
}

void func_539(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_541(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_540(7, iVar0);
		Global_1339962.f_4109[iVar0] = uParam0;
		StringCopy(&(Global_1339962.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_4109.f_172[iVar0] = iParam2;
		Global_1339962.f_4109.f_216[iVar0] = iParam3;
		Global_1339962.f_4109.f_183[iVar0] = iParam4;
		Global_1339962.f_4109.f_194[iVar0] = iParam5;
		Global_1339962.f_4109.f_249[iVar0] = iParam6;
		Global_1339962.f_4109.f_260[iVar0] = iParam7;
		Global_1339962.f_4109.f_205[iVar0] = uParam8;
		Global_1339962.f_4109.f_314[iVar0] = iParam9;
		Global_1339962.f_4109.f_325[iVar0] = iParam10;
		Global_1339962.f_4109.f_357[iVar0] = iParam11;
		Global_1339962.f_4109.f_238[iVar0] = uParam12;
		Global_1339962.f_4109.f_271[iVar0] = iParam13;
		Global_1339962.f_4109.f_368[iVar0] = iParam14;
		Global_1339962.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_540(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1339962.f_4759[iParam0]), iParam1);
}

bool func_541(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1339962.f_4759[iParam0], iParam1);
}

void func_542(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_541(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_540(6, iVar0);
		Global_1339962.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_3557.f_183[iVar0] = iParam3;
		Global_1339962.f_3557.f_172[iVar0] = iParam2;
		Global_1339962.f_3557.f_260[iVar0] = iParam4;
		Global_1339962.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339962.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339962.f_3557.f_443[iVar0] = iParam7;
		Global_1339962.f_3557.f_454[iVar0] = iParam8;
		Global_1339962.f_3557.f_497[iVar0] = iParam9;
		Global_1339962.f_3557.f_508[iVar0] = iParam10;
		Global_1339962.f_3557.f_205[iVar0] = iParam11;
		Global_1339962.f_3557.f_216[iVar0] = iParam12;
		Global_1339962.f_3557.f_227[iVar0] = iParam13;
		Global_1339962.f_3557.f_238[iVar0] = iParam14;
		Global_1339962.f_3557.f_249[iVar0] = iParam15;
		Global_1339962.f_3557.f_519[iVar0] = iParam16;
		Global_1339962.f_3557.f_530[iVar0] = iParam17;
		Global_1339962.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_544())
		{
			Global_1339962.f_941 = 1;
		}
		if (unk_0x55812CD5A331E1F8())
		{
			iVar2 = 0;
			unk_0x4C6D647F0AAA9B5B(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339962.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339962.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339962.f_941 = 1;
			}
			if (func_543())
			{
				Global_1339962.f_945 = 1;
			}
		}
	}
}

int func_543()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x55812CD5A331E1F8())
	{
		unk_0x4C6D647F0AAA9B5B(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_544()
{
	if ((unk_0x852598C027636D43() == 8 || unk_0x852598C027636D43() == 9) || unk_0x852598C027636D43() == 10)
	{
		return 1;
	}
	return 0;
}

void func_545()
{
	unk_0x9AD5FF38501E64A6(8);
	unk_0x9AD5FF38501E64A6(9);
	unk_0x9AD5FF38501E64A6(6);
	unk_0x9AD5FF38501E64A6(7);
	Global_2445587 = 1;
}

int func_546(bool bParam0)
{
	if (func_547())
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_706(unk_0xE0BDAFA1A39552D6(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_547()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 12);
}

void func_548(int iParam0)
{
	if (unk_0x7DA173D4FD42F36B(iLocal_446, 8))
	{
		func_167();
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_446, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x25B97FB8615971D6("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xE27C8E42A97895CF(&iLocal_446, 15);
				unk_0xE27C8E42A97895CF(&iLocal_446, 9);
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_446, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 11))
			{
				if (unk_0xAA821ECDF67A2A25("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xC8601D5221312A4A("AllowScoreAndRadio", 1);
					unk_0x5BC661D1FF0D731E(0);
					unk_0xE27C8E42A97895CF(&iLocal_446, 11);
				}
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_446, 14))
			{
				if (unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S"))
				{
					unk_0xE27C8E42A97895CF(&iLocal_446, 14);
				}
			}
			if (unk_0x7DA173D4FD42F36B(iLocal_446, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_446, 12))
					{
						unk_0x5BC661D1FF0D731E(1);
						unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
						unk_0xE27C8E42A97895CF(&iLocal_446, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO"))
						{
							unk_0x6555D0270D9BE11C("APT_COUNTDOWN_30S_KILL");
							unk_0x99BCB15F954AF579(&iLocal_446, 9);
						}
					}
				}
			}
		}
	}
}

int func_549(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0);
		}
		else
		{
			return unk_0x1F0E2DBE53276B95(unk_0xED6DF4F701311AF8(), *uParam0);
		}
	}
	return unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0);
}

void func_550()
{
	var uVar0;
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 2))
			{
				if (unk_0x046CEB8397234DA8(unk_0xE65C345C8E8CDA4A(Local_192.f_3), unk_0x06736567F820A39E()))
				{
					unk_0xE27C8E42A97895CF(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 2);
					iLocal_750 = unk_0xD619EBCC6AD6E414();
					unk_0x962E604CCA53388F(iLocal_750, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_448 != Local_192.f_5)
	{
		if (unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 3))
		{
			unk_0x99BCB15F954AF579(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 3);
		}
		if (unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 2))
		{
			if (unk_0x40B3668D7226E0DF(Local_192.f_3))
			{
				uVar0 = unk_0x4C4151C3DEC199DC(Local_192.f_3);
				unk_0x68BC4628D1B1B784(&uVar0);
				unk_0x99BCB15F954AF579(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 2);
			}
			else
			{
				unk_0x05482B0CE9645411(Local_192.f_3);
			}
		}
		else
		{
			iLocal_448 = Local_192.f_5;
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
	{
		if (func_649())
		{
			if (func_663())
			{
				func_552();
			}
		}
		if (!unk_0x7DA173D4FD42F36B(iLocal_445, 13))
		{
			if (!func_663() || !func_649())
			{
				unk_0xC4DE8F06231B9EF0(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 1, 1);
				unk_0xE27C8E42A97895CF(&iLocal_445, 13);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(iLocal_445, 3))
		{
			unk_0x86A805FC25766987(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 1200);
			unk_0xE27C8E42A97895CF(&iLocal_445, 3);
		}
	}
	else
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_445, 13))
		{
			unk_0x99BCB15F954AF579(&iLocal_445, 13);
		}
		if (unk_0x7DA173D4FD42F36B(iLocal_445, 3))
		{
			unk_0x99BCB15F954AF579(&iLocal_445, 3);
		}
		if (unk_0xCDB4C4200A9B478A(uLocal_450))
		{
			unk_0x2239ED27B231AE2E(&uLocal_450);
		}
	}
	func_551();
}

void func_551()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_371())
	{
		return;
	}
	if (func_330(unk_0xE0BDAFA1A39552D6()) >= 1)
	{
		if (unk_0xC7A68C5C107A1253(Local_192.f_3) && !unk_0xBDA1F5E8A36BFA07(unk_0xE65C345C8E8CDA4A(Local_192.f_3), 0))
		{
			if (!unk_0xCC30869D6AB6D4ED(unk_0xE65C345C8E8CDA4A(Local_192.f_3)))
			{
				unk_0xD06A5371300291A8(18, &uVar0, &uVar1, &uVar2, &uVar3);
				unk_0x1F60DF09D920D0B6(2, unk_0xF4745590D18D14B8(unk_0x4C4151C3DEC199DC(Local_192.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_552()
{
	int iVar0;
	
	iVar0 = func_330(unk_0xE0BDAFA1A39552D6());
	if (iVar0 < 2)
	{
		if (unk_0xCDB4C4200A9B478A(uLocal_450))
		{
			unk_0x2239ED27B231AE2E(&uLocal_450);
		}
		return;
	}
	if (unk_0xCDB4C4200A9B478A(uLocal_450))
	{
		return;
	}
	unk_0x99BCB15F954AF579(&iLocal_445, 11);
	uLocal_450 = unk_0xDB8B533098769F4F(unk_0x4C4151C3DEC199DC(Local_192.f_3));
	unk_0xA4E8F868373B09C0(uLocal_450, 12);
	unk_0x3A46FF82408A2709(uLocal_450, 459);
	unk_0x4BFEA7590F203BDF(uLocal_450, "GB_SGHT_BLP");
	unk_0xEEF2AFCBBDD180D3(uLocal_450, 1);
	unk_0xC5B281EF0EBC2AA6(uLocal_450, Global_262145.f_10542);
	if (func_663())
	{
		func_553(&uLocal_450, 18);
	}
	unk_0xF9737DB27C84BFEE(uLocal_450, 1);
	iLocal_751 = unk_0xD619EBCC6AD6E414();
	unk_0x962E604CCA53388F(iLocal_751, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
}

void func_553(var uParam0, int iParam1)
{
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x8A6C20F61A3C4CFA(*uParam0, func_554(iParam1));
	}
}

int func_554(int iParam0)
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
	unk_0xD06A5371300291A8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_555()
{
	if (unk_0x490BA5FDD7EE47A9() != Local_192.f_33)
	{
		return;
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
	{
		if (iLocal_747 != -1)
		{
			iLocal_747 = -1;
		}
		if (unk_0x7DA173D4FD42F36B(Global_2568055, 20))
		{
			unk_0x99BCB15F954AF579(&Global_2568055, 20);
		}
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Global_2568055, 20))
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2568055, 21))
		{
			if (iLocal_747 < 0)
			{
				unk_0xE27C8E42A97895CF(&Global_2568055, 20);
			}
		}
	}
	if (iLocal_748 == -1)
	{
		iLocal_748 = unk_0xA6055C735E3DD877(0, 3);
	}
	if (iLocal_747 < 0)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2568055, 21))
		{
			unk_0x99BCB15F954AF579(&Global_2568055, 21);
			iLocal_747 = 0;
		}
	}
	func_556();
}

void func_556()
{
	bool bVar0;
	
	if (!unk_0x7DA173D4FD42F36B(iLocal_445, 4))
	{
		if (iLocal_747 >= 0)
		{
			if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				unk_0x99BCB15F954AF579(&Local_458, 0);
				iLocal_747 = -1;
			}
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
				{
					func_600(1);
				}
			}
		}
	}
	else if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		func_599(&Local_458);
		func_598(&Local_458);
		unk_0x99BCB15F954AF579(&iLocal_445, 4);
	}
	switch (iLocal_747)
	{
		case 0:
			func_597(1);
			unk_0x18DF389F542183A3("HACK", 3);
			iLocal_747++;
			break;
		
		case 1:
			if (func_596(1) && unk_0x7710127C9E7C52D8(3))
			{
				unk_0xE27C8E42A97895CF(&Local_458, 0);
				unk_0xE27C8E42A97895CF(&(Local_458.f_1), 0);
				func_364();
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
				func_592(unk_0xE0BDAFA1A39552D6(), 0, 66048);
				iLocal_747++;
			}
			else
			{
				if (!func_596(1))
				{
				}
				if (!unk_0x7710127C9E7C52D8(3))
				{
				}
			}
			break;
		
		case 2:
			unk_0xEA8377A713D575EE();
			unk_0xDD80A8B77D58DFF0(19);
			if (!func_171(0))
			{
				func_187(0);
			}
			if (iLocal_748 == 0)
			{
				func_570(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_569(&Local_458, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_748 == 1)
			{
				func_570(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1);
				if (func_568(&Local_458, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_748 == 2)
			{
				func_570(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_557(&Local_458, 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x7DA173D4FD42F36B(Local_458.f_1, 1))
			{
				unk_0x99BCB15F954AF579(&Local_458, 0);
				func_599(&Local_458);
				func_592(unk_0xE0BDAFA1A39552D6(), 1, 0);
				if (func_171(0))
				{
					func_170(0);
				}
				iLocal_747 = -1;
			}
			else if (bVar0)
			{
				unk_0x99BCB15F954AF579(&Local_458, 0);
				func_599(&Local_458);
				Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_4++;
				unk_0xE27C8E42A97895CF(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 3);
				iLocal_748++;
				if (iLocal_748 >= 3)
				{
					iLocal_748 = 0;
				}
				if (func_171(0))
				{
					func_170(0);
				}
				func_592(unk_0xE0BDAFA1A39552D6(), 1, 0);
				iLocal_747++;
			}
			break;
	}
}

int func_557(var uParam0, bool bParam1)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 26))
	{
		if (bParam1)
		{
			func_558(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_558(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x99BCB15F954AF579(uParam0, 0);
	unk_0xE27C8E42A97895CF(uParam0, 12);
	unk_0xD3A46BE3CC13ED33(0);
	if (bParam2)
	{
		if (!unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
		{
			unk_0xFA57ED1E34ED480A(unk_0x06736567F820A39E(), 1, 1, 1, 0);
		}
	}
	if (unk_0x937BE2ED4FE56FFA())
	{
		unk_0x880CBB22ADE81021(0);
	}
	unk_0x310F6B4E168A8F5D(1);
	if (bParam1)
	{
		unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), true, 0);
	}
	unk_0xC2F547D33F9342CC(uLocal_73, 0);
	func_562(0);
	func_561();
	unk_0x331F53F28352E27F(0);
	func_560(uParam0, 1, 1);
	func_559(0, 1, 1, 0);
}

int func_559(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x640152C8EE973B5B() != iParam0 && iParam2)
		{
			unk_0x1ECC86329E4F43F8(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_560(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_64[iVar0] != -1)
		{
			if (!unk_0xC543EAF03B57467D(iLocal_64[iVar0]))
			{
				unk_0x8EBF150526027B8E(iLocal_64[iVar0]);
				iLocal_64[iVar0] = -1;
			}
		}
		iVar0++;
	}
	unk_0x99BCB15F954AF579(uParam0, 25);
	unk_0x99BCB15F954AF579(uParam0, 5);
	if (iParam2 == 1)
	{
		unk_0x99BCB15F954AF579(uParam0, 12);
		unk_0x99BCB15F954AF579(uParam0, 9);
		unk_0x99BCB15F954AF579(uParam0, 18);
		unk_0x99BCB15F954AF579(uParam0, 27);
		unk_0x99BCB15F954AF579(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_76 = 0;
	if (bParam1)
	{
		unk_0x0E4537BE1D04DAC7(&uLocal_75);
	}
	unk_0x99BCB15F954AF579(uParam0, 29);
}

void func_561()
{
	int iVar0;
	
	Global_1338622.f_948 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1338622.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2464975.f_4391 = 1;
}

void func_562(bool bParam0)
{
	if (bParam0)
	{
		func_567();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0xE27C8E42A97895CF(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_566(0))
		{
			func_563(0);
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

void func_563(int iParam0)
{
	if (Global_14571)
	{
		func_565(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
	}
	if (!func_564())
	{
		Global_14413.f_1 = 3;
	}
}

int func_564()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_565(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_566(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_566(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_567()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

int func_568(var uParam0, bool bParam1)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 9))
	{
		if (bParam1)
		{
			func_558(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_569(var uParam0, bool bParam1)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 18))
	{
		if (bParam1)
		{
			func_558(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_570(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (unk_0x7DA173D4FD42F36B(*uParam0, 0))
	{
		func_571(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16);
	}
}

void func_571(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
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
	
	unk_0x2D12B223BFA55E4E(0);
	unk_0x2D12B223BFA55E4E(2);
	unk_0xD3A46BE3CC13ED33(1);
	if (bParam17)
	{
		func_591(1);
	}
	func_590(4, -1);
	func_589();
	if (func_596(bParam16))
	{
		if (!unk_0x3DC360442A11BB38())
		{
			unk_0xEA8377A713D575EE();
			unk_0xA53AA6798EF8BAB3(1);
			if (unk_0x0FDDFFBD775C7598() == 0 && !unk_0x3DC360442A11BB38())
			{
				unk_0xA5C0BA1772140603(uLocal_75, 255, 255, 255, 0, 0);
			}
		}
		if (unk_0x1DAE3EDA366FAA16(2))
		{
			uParam0->f_285 = unk_0x6C5A50E1DEB124D4(2, 239);
			uParam0->f_286 = unk_0x6C5A50E1DEB124D4(2, 240);
			if (uParam0->f_287 != uParam0->f_285 || uParam0->f_288 != uParam0->f_286)
			{
				unk_0x2B859AD680983623(uLocal_75, "SET_CURSOR");
				unk_0xB62735E5BEC5ABF8(uParam0->f_285);
				unk_0xB62735E5BEC5ABF8(uParam0->f_286);
				unk_0xE97F1B22C5E8989F();
			}
			uParam0->f_287 = uParam0->f_285;
			uParam0->f_288 = uParam0->f_286;
		}
		else
		{
			func_588(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((unk_0xBBDA792448DB5A89(iVar2) * 8f) * unk_0x0000000050597EE2());
			fVar7 = ((unk_0xBBDA792448DB5A89(iVar3) * 8f) * unk_0x0000000050597EE2());
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					unk_0x2B859AD680983623(uLocal_75, "MOVE_CURSOR");
					unk_0xB62735E5BEC5ABF8(fVar6);
					unk_0xB62735E5BEC5ABF8(fVar7);
					unk_0xE97F1B22C5E8989F();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (unk_0x1DAE3EDA366FAA16(2))
			{
				uParam0->f_285 = unk_0x8482814342BB3160(2, 239);
				uParam0->f_286 = unk_0x8482814342BB3160(2, 240);
				if (unk_0x8B003E1580113906())
				{
					if (uParam0->f_287 != uParam0->f_285)
					{
						if (uParam0->f_285 < 0.49f)
						{
							unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7AF283DA3BA078CD(10);
							unk_0xE97F1B22C5E8989F();
						}
						else if (uParam0->f_285 > 0.51f)
						{
							unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7AF283DA3BA078CD(11);
							unk_0xE97F1B22C5E8989F();
						}
					}
				}
				uParam0->f_287 = uParam0->f_285;
				uParam0->f_288 = uParam0->f_286;
			}
			if (unk_0x4A1EAF6BB2C862EA(2))
			{
				fVar8 = unk_0x43AD8FF2B73AC2B6(2, 1);
				fVar9 = unk_0x43AD8FF2B73AC2B6(2, 2);
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
					if (unk_0xF87C669B882D93C0(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							bVar10 = true;
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7AF283DA3BA078CD(10);
							unk_0xE97F1B22C5E8989F();
						}
						else if (fLocal_70 > 0f)
						{
							bVar10 = true;
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7AF283DA3BA078CD(11);
							unk_0xE97F1B22C5E8989F();
						}
					}
					if (unk_0xF87C669B882D93C0(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							bVar10 = true;
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7AF283DA3BA078CD(8);
							unk_0xE97F1B22C5E8989F();
						}
						else if (fLocal_71 > 0f)
						{
							bVar10 = true;
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
							unk_0x7AF283DA3BA078CD(9);
							unk_0xE97F1B22C5E8989F();
						}
					}
					if (bVar10)
					{
						unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_587(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (unk_0xED165ADF51B05913(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (unk_0xC543EAF03B57467D(uParam0->f_15))
						{
							if (iLocal_76 != 8)
							{
								unk_0x962E604CCA53388F(uParam0->f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((unk_0xD471C64C0898A7BF(2, 195) || unk_0xD471C64C0898A7BF(2, 196)) || unk_0xE9F7E89BC2352535(2, 195)) || unk_0xE9F7E89BC2352535(2, 196))
			{
			}
			if (unk_0x4A1EAF6BB2C862EA(2))
			{
				if (unk_0xD471C64C0898A7BF(2, 32) || unk_0xD471C64C0898A7BF(2, 172))
				{
					unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7AF283DA3BA078CD(8);
					unk_0xE97F1B22C5E8989F();
				}
				else if (unk_0xD471C64C0898A7BF(2, 33) || unk_0xD471C64C0898A7BF(2, 173))
				{
					unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7AF283DA3BA078CD(9);
					unk_0xE97F1B22C5E8989F();
				}
				else if (unk_0xD471C64C0898A7BF(2, 34) || unk_0xD471C64C0898A7BF(2, 174))
				{
					unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7AF283DA3BA078CD(10);
					unk_0xE97F1B22C5E8989F();
				}
				else if (unk_0xD471C64C0898A7BF(2, 35) || unk_0xD471C64C0898A7BF(2, 175))
				{
					unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
					unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
					unk_0x7AF283DA3BA078CD(11);
					unk_0xE97F1B22C5E8989F();
				}
			}
			else if (unk_0xD471C64C0898A7BF(2, 188))
			{
				unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7AF283DA3BA078CD(8);
				unk_0xE97F1B22C5E8989F();
			}
			else if (unk_0xD471C64C0898A7BF(2, 187))
			{
				unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7AF283DA3BA078CD(9);
				unk_0xE97F1B22C5E8989F();
			}
			else if (unk_0xD471C64C0898A7BF(2, 189))
			{
				unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7AF283DA3BA078CD(10);
				unk_0xE97F1B22C5E8989F();
			}
			else if (unk_0xD471C64C0898A7BF(2, 190))
			{
				unk_0x962E604CCA53388F(-1, "HACKING_MOVE_CURSOR", 0, 1);
				unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT");
				unk_0x7AF283DA3BA078CD(11);
				unk_0xE97F1B22C5E8989F();
			}
		}
		if (bParam12)
		{
			if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
			{
				unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = unk_0x501E08A637882750();
			}
			if (unk_0xEC0EC22A8A43C76E(uLocal_74))
			{
				iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				if (iVar0 == 6)
				{
					func_586(uParam0);
				}
			}
		}
		func_585();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_584((iParam15 - (unk_0x1ADBAAC322D61F73() - iLocal_59)), &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = 0;
				iLocal_57 = 0;
				iLocal_58 = 0;
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COUNTDOWN", unk_0xBBDA792448DB5A89(iLocal_56), unk_0xBBDA792448DB5A89(iLocal_57), unk_0xBBDA792448DB5A89(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_583(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x1ADBAAC322D61F73();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_583(&iLocal_77, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
				iLocal_77 = unk_0x1ADBAAC322D61F73();
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
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
			if (!unk_0x7DA173D4FD42F36B(*uParam0, 29))
			{
				func_582(uParam0, iParam14);
			}
			func_597(1);
			unk_0x331F53F28352E27F(1);
			uParam0->f_15 = unk_0xD619EBCC6AD6E414();
			iLocal_150 = 0;
			iLocal_151 = 0;
			uParam0->f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), unk_0xBBDA792448DB5A89(iParam2), -1f, -1082130432, -1082130432);
			unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				unk_0x83A56F091A353817(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = iParam1;
			uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
			unk_0x99BCB15F954AF579(uParam0, 1);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = unk_0xD619EBCC6AD6E414();
			iLocal_64[1] = unk_0xD619EBCC6AD6E414();
			func_559(1, 0, 1, 0);
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
					if (!func_346("H_EXIT_PROMPT"))
					{
						if (!func_346("HACKOBJ1"))
						{
							func_581("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (unk_0x1DAE3EDA366FAA16(2))
				{
					if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
					{
						unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x501E08A637882750();
					}
				}
				else if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
				{
					unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = unk_0x501E08A637882750();
				}
			}
			if (unk_0xEC0EC22A8A43C76E(uLocal_74))
			{
				iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_346("H_EXIT_PROMPT"))
						{
							unk_0x310F6B4E168A8F5D(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
				{
					if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
					{
						func_580(0, "");
					}
				}
			}
			if (unk_0xEC0EC22A8A43C76E(uLocal_74))
			{
				iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
						func_580(1, "ACCESSD");
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
						if (!func_346("HACKOBJ2"))
						{
							func_581("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					if (unk_0x1DAE3EDA366FAA16(2))
					{
						if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
						{
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x501E08A637882750();
						}
					}
					else if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
					{
						unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x501E08A637882750();
					}
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
					{
						if (unk_0xD471C64C0898A7BF(2, 202))
						{
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = unk_0x501E08A637882750();
							if (iParam7 == 1)
							{
								if (func_346("HACKOBJ2"))
								{
									unk_0x310F6B4E168A8F5D(1);
								}
								func_581("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76 = (iLocal_76 - 1);
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
				{
					if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
					{
						func_580(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
					func_580(1, "ACCESSD");
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
				if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
				{
					unk_0x8EBF150526027B8E(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
				{
					unk_0x8EBF150526027B8E(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
				{
					unk_0x8EBF150526027B8E(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (bParam9 == 1)
					{
						if (!unk_0x7DA173D4FD42F36B(*uParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_346("HACKOBJ5"))
								{
									func_581("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!unk_0x7DA173D4FD42F36B(*uParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_346("HACKOBJ3"))
							{
								func_581("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!unk_0x7DA173D4FD42F36B(*uParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_346("HACKOBJ5"))
							{
								func_581("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_346("HACKOBJ5"))
						{
							unk_0x310F6B4E168A8F5D(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (iLocal_79 == 0)
				{
					if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
					{
						if (unk_0x1DAE3EDA366FAA16(2))
						{
							if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
							{
								unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = unk_0x501E08A637882750();
							}
						}
						else if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
						{
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x501E08A637882750();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					if (unk_0xD471C64C0898A7BF(2, 202))
					{
						unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = unk_0x501E08A637882750();
						if (iParam7 == 1)
						{
							if (func_346("HACKOBJ5") || func_346("HACKOBJ3"))
							{
								unk_0x310F6B4E168A8F5D(1);
							}
							iLocal_61 = 0;
							iLocal_76 = (iLocal_76 - 1);
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
				{
					if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
					{
						func_580(0, "");
					}
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
					func_580(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						iLocal_77 = unk_0x1ADBAAC322D61F73();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
						{
							unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x6A5F0D0726AECDFA(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
							unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
							unk_0x6A5F0D0726AECDFA(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x6A5F0D0726AECDFA(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x1ADBAAC322D61F73();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0xD619EBCC6AD6E414();
						unk_0x962E604CCA53388F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!unk_0x7DA173D4FD42F36B(*uParam0, 18))
					{
						iLocal_77 = unk_0x1ADBAAC322D61F73();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", uParam0->f_9, -1f, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x1ADBAAC322D61F73();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = unk_0xD619EBCC6AD6E414();
						unk_0x962E604CCA53388F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
							{
								if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
								{
									func_580(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0x7DA173D4FD42F36B(*uParam0, 9))
							{
								func_580(1, "TRYDL");
							}
							else
							{
								func_580(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
						{
							if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
							{
								func_580(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0x7DA173D4FD42F36B(*uParam0, 9))
						{
							func_580(1, "TRYDL");
						}
						else
						{
							func_580(1, "TRYBRUTE");
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
						iLocal_77 = unk_0x1ADBAAC322D61F73();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
						{
							unk_0x6A5F0D0726AECDFA(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						else
						{
							unk_0x6A5F0D0726AECDFA(uLocal_75, "RUN_PROGRAM", unk_0xBBDA792448DB5A89(4), -1f, -1f, -1082130432, -1082130432);
							unk_0x6A5F0D0726AECDFA(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						}
						iLocal_59 = unk_0x1ADBAAC322D61F73();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0xD619EBCC6AD6E414();
						if (bParam10)
						{
							func_579(uParam0);
						}
						unk_0x6483D8A5FD6B6BCF(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0x962E604CCA53388F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!bParam11 || unk_0x7DA173D4FD42F36B(*uParam0, 18)) && !unk_0x7DA173D4FD42F36B(*uParam0, 9))
					{
						iLocal_77 = unk_0x1ADBAAC322D61F73();
						uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_SPEED", unk_0xBBDA792448DB5A89(iParam3), -1f, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1f, -1082130432, -1082130432);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "OPEN_APP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1082130432, -1082130432);
						iLocal_59 = unk_0x1ADBAAC322D61F73();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = unk_0xD619EBCC6AD6E414();
						if (bParam10)
						{
							func_579(uParam0);
						}
						if (func_346("HACKOBJ5"))
						{
							unk_0x310F6B4E168A8F5D(1);
						}
						unk_0x6483D8A5FD6B6BCF(uLocal_75, "SET_ROULETTE_WORD", uParam0->f_14, 0, 0, 0, 0);
						unk_0x962E604CCA53388F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
							{
								if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
								{
									func_580(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && unk_0x7DA173D4FD42F36B(*uParam0, 18))
							{
								func_580(1, "TRYDL");
							}
							else
							{
								func_580(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
						{
							if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
							{
								func_580(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && unk_0x7DA173D4FD42F36B(*uParam0, 18))
						{
							func_580(1, "TRYDL");
						}
						else
						{
							func_580(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (unk_0x7DA173D4FD42F36B(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (unk_0x7DA173D4FD42F36B(*uParam0, 18) && unk_0x7DA173D4FD42F36B(*uParam0, 9))
						{
							if (!unk_0x7DA173D4FD42F36B(*uParam0, 28))
							{
								unk_0xE27C8E42A97895CF(uParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if ((unk_0x1ADBAAC322D61F73() - iLocal_78) > 500)
								{
									if (((unk_0x1ADBAAC322D61F73() - iLocal_78) > 2500 || unk_0xD471C64C0898A7BF(2, 201)) || unk_0xD471C64C0898A7BF(2, 237))
									{
										func_580(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
								if (unk_0x7DA173D4FD42F36B(*uParam0, 18))
								{
									func_580(1, "TRYBRUTE");
								}
								else
								{
									func_580(1, "TRYHACK");
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
					func_578("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_578("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 1))
				{
					if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
					{
						if (unk_0xD471C64C0898A7BF(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xDD933A326326CB1D(uLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
								{
									unk_0x8EBF150526027B8E(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
								{
									unk_0x8EBF150526027B8E(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0xE27C8E42A97895CF(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					if (unk_0x1DAE3EDA366FAA16(2))
					{
						if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
						{
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x501E08A637882750();
						}
					}
					else if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
					{
						unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x501E08A637882750();
					}
				}
				if (unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
					{
						unk_0x8EBF150526027B8E(iLocal_64[0]);
					}
					unk_0xE27C8E42A97895CF(uParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x962E604CCA53388F(-1, "HACKING_FAILURE", 0, 1);
					unk_0x83A56F091A353817(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = iParam1;
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x1ADBAAC322D61F73();
				iLocal_64[0] = unk_0xD619EBCC6AD6E414();
				unk_0x962E604CCA53388F(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				unk_0xE27C8E42A97895CF(uParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = iParam1;
				unk_0xDD933A326326CB1D(uLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
					{
						unk_0x8EBF150526027B8E(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				unk_0xE27C8E42A97895CF(uParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x1ADBAAC322D61F73() - iLocal_59));
				if (iVar1 < 1)
				{
					unk_0xE27C8E42A97895CF(uParam0, 25);
					uParam0->f_7 = iParam1;
					unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x1ADBAAC322D61F73();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x962E604CCA53388F(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
						{
							unk_0x8EBF150526027B8E(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					unk_0x83A56F091A353817(uLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				unk_0x83A56F091A353817(uLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = unk_0x1ADBAAC322D61F73();
				unk_0xE27C8E42A97895CF(uParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				unk_0x962E604CCA53388F(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
					{
						unk_0x8EBF150526027B8E(iLocal_64[0]);
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
					func_578("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_578("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 1))
					{
						if (unk_0xD471C64C0898A7BF(2, 202))
						{
							uParam0->f_7 = iParam1;
							unk_0xDD933A326326CB1D(uLocal_75, "CLOSE_APP");
							if (!unk_0xC543EAF03B57467D(iLocal_64[0]))
							{
								unk_0x8EBF150526027B8E(iLocal_64[0]);
							}
							if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
							{
								iLocal_76 = 4;
							}
							else
							{
								unk_0xE27C8E42A97895CF(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					if (unk_0x1DAE3EDA366FAA16(2))
					{
						if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
						{
							unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = unk_0x501E08A637882750();
						}
					}
					else if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
					{
						unk_0x2B859AD680983623(uLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = unk_0x501E08A637882750();
					}
				}
				if (unk_0xEC0EC22A8A43C76E(uLocal_74))
				{
					iVar0 = unk_0xFD3CF387C866C665(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				unk_0x962E604CCA53388F(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				unk_0x962E604CCA53388F(-1, "HACKING_CLICK", 0, 1);
			}
			if (unk_0x7DA173D4FD42F36B(*uParam0, 23))
			{
				if (func_583(&(uParam0->f_10), 500))
				{
					unk_0xDD933A326326CB1D(uLocal_75, "RESET_ROULETTE");
					unk_0x99BCB15F954AF579(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					unk_0x962E604CCA53388F(-1, "HACKING_CLICK_BAD", 0, 1);
					unk_0xDD933A326326CB1D(uLocal_75, "STOP_ROULETTE");
					uParam0->f_10 = unk_0x1ADBAAC322D61F73();
					unk_0xE27C8E42A97895CF(uParam0, 23);
					unk_0xE27C8E42A97895CF(uParam0, 31);
					if (func_193() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(uParam0->f_7), -1f, -1f, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xE27C8E42A97895CF(uParam0, 25);
					unk_0xE27C8E42A97895CF(uParam0, 31);
					unk_0x962E604CCA53388F(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = iParam1;
					unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x1ADBAAC322D61F73();
					if (iLocal_64[1] != -1)
					{
						if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
						{
							unk_0x8EBF150526027B8E(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_193() == 0)
					{
						unk_0x83A56F091A353817(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = (60000 - (unk_0x1ADBAAC322D61F73() - iLocal_59));
				if (iVar1 < 1)
				{
					uParam0->f_7 = iParam1;
					unk_0xE27C8E42A97895CF(uParam0, 25);
					unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
					uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
					iLocal_59 = unk_0x1ADBAAC322D61F73();
					iLocal_60 = 0;
					iLocal_62 = 1;
					unk_0x962E604CCA53388F(-1, "HACKING_FAILURE", 0, 1);
					unk_0x310F6B4E168A8F5D(1);
					if (iLocal_64[1] != -1)
					{
						if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
						{
							unk_0x8EBF150526027B8E(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					unk_0x83A56F091A353817(uLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = iParam1;
				unk_0xE27C8E42A97895CF(uParam0, 25);
				unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_LIVES", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
				uParam0->f_9 = unk_0xBBDA792448DB5A89(iParam3);
				iLocal_59 = unk_0x1ADBAAC322D61F73();
				iLocal_64[1] = unk_0xD619EBCC6AD6E414();
				unk_0x962E604CCA53388F(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = iParam1;
				unk_0xE27C8E42A97895CF(uParam0, 25);
				unk_0xDD933A326326CB1D(uLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
					{
						unk_0x8EBF150526027B8E(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				unk_0x83A56F091A353817(uLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = unk_0x1ADBAAC322D61F73();
				unk_0xE27C8E42A97895CF(uParam0, 9);
				unk_0x962E604CCA53388F(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!unk_0xC543EAF03B57467D(iLocal_64[1]))
					{
						unk_0x8EBF150526027B8E(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (unk_0x7DA173D4FD42F36B(*uParam0, 9) && unk_0x7DA173D4FD42F36B(*uParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_346("HACKOBJ7"))
						{
							func_581("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_346("H_USE_PC6") || func_346("H_USE_PC7")) || func_346("H_USE_PC8")) || func_346("H_USE_PC9"))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
			}
			if ((unk_0x7DA173D4FD42F36B(*uParam0, 9) && unk_0x7DA173D4FD42F36B(*uParam0, 18)) && (!bParam13 || (bParam13 && unk_0x7DA173D4FD42F36B(*uParam0, 28))))
			{
				if (func_346("HACKOBJ7"))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				if (!iLocal_151)
				{
					unk_0x65C518355A67952C(-1, "unlocked_bleep", unk_0x06736567F820A39E(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_583(&iLocal_77, 3000))
				{
					unk_0x99BCB15F954AF579(uParam0, 0);
					unk_0xE27C8E42A97895CF(uParam0, 12);
					unk_0x331F53F28352E27F(0);
				}
			}
			else
			{
				if (((bParam13 && !unk_0x7DA173D4FD42F36B(*uParam0, 27)) && unk_0x7DA173D4FD42F36B(*uParam0, 9)) && unk_0x7DA173D4FD42F36B(*uParam0, 18))
				{
					unk_0x2B859AD680983623(uLocal_75, "OPEN_DOWNLOAD");
					unk_0x504EDFAAB39BF764(1);
					unk_0xE97F1B22C5E8989F();
					unk_0xE27C8E42A97895CF(uParam0, 27);
				}
				if (func_583(&iLocal_77, 2000))
				{
					unk_0xDD933A326326CB1D(uLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_572(uParam0);
			break;
	}
}

void func_572(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_18 > 0)
	{
		if (unk_0x7DA173D4FD42F36B(*uParam0, 22))
		{
			if (unk_0xF3DECB9D15F48CFF("hackingNG"))
			{
				if (!unk_0x3DC360442A11BB38())
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		unk_0x962E604CCA53388F(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_346("H1_HNG"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (unk_0x55812CD5A331E1F8())
		{
			if (func_346("H1_HNG_KM"))
			{
				unk_0x310F6B4E168A8F5D(1);
			}
		}
		unk_0xE27C8E42A97895CF(uParam0, 26);
	}
	else if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (!func_346("H1_HNG_KM"))
		{
			func_581("H1_HNG_KM");
		}
	}
	else if (!func_346("H1_HNG"))
	{
		func_581("H1_HNG");
	}
	switch (uParam0->f_18)
	{
		case 0:
			unk_0xC35C76B8E0A47F9F("hackingNG", 0);
			unk_0x99BCB15F954AF579(uParam0, 22);
			func_577();
			iLocal_139 = unk_0x1ADBAAC322D61F73();
			Local_99.f_0 = 0;
			unk_0x99BCB15F954AF579(&uLocal_149, 0);
			unk_0x99BCB15F954AF579(&uLocal_149, 1);
			unk_0x99BCB15F954AF579(&uLocal_149, 2);
			unk_0x99BCB15F954AF579(&uLocal_149, 3);
			unk_0x99BCB15F954AF579(&uLocal_149, 4);
			unk_0x99BCB15F954AF579(&uLocal_149, 5);
			unk_0x99BCB15F954AF579(&uLocal_149, 6);
			unk_0x99BCB15F954AF579(&uLocal_149, 7);
			uParam0->f_18++;
			break;
		
		case 1:
			if (unk_0xF3DECB9D15F48CFF("hackingNG"))
			{
				unk_0xE27C8E42A97895CF(uParam0, 22);
				unk_0x2B859AD680983623(uLocal_75, "SET_CURSOR_VISIBILITY");
				unk_0x504EDFAAB39BF764(0);
				unk_0xE97F1B22C5E8989F();
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
					Local_82[iVar0 /*2*/].f_1 = func_575(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
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
						if (!unk_0x7DA173D4FD42F36B(uLocal_149, iVar0))
						{
							iLocal_140[iVar0] = unk_0xD619EBCC6AD6E414();
							unk_0x962E604CCA53388F(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							unk_0xE27C8E42A97895CF(&iLocal_149, iVar0);
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
							unk_0x9593DF47DE89B3C7(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (unk_0x7DA173D4FD42F36B(iLocal_149, iVar0))
				{
					unk_0x8EBF150526027B8E(iLocal_140[iVar0]);
					unk_0x2B84DF57725231E1(iLocal_140[iVar0]);
					unk_0x99BCB15F954AF579(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_574(Local_99.f_0))
			{
				unk_0x962E604CCA53388F(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
			{
				if (func_583(&iLocal_139, 300))
				{
					if (func_573(Local_99.f_0))
					{
						Local_101[Local_99.f_0 /*4*/] = 1;
						Local_82[Local_99.f_0 /*2*/].f_1 = 0.572f;
						unk_0x962E604CCA53388F(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99.f_0 != 7)
						{
							Local_99.f_0++;
						}
					}
					else
					{
						if (Local_99.f_0 != 0)
						{
							if (unk_0x7DA173D4FD42F36B(iLocal_149, Local_99.f_0))
							{
								unk_0x8EBF150526027B8E(iLocal_140[Local_99.f_0]);
								unk_0x2B84DF57725231E1(iLocal_140[Local_99.f_0]);
								unk_0x99BCB15F954AF579(&iLocal_149, Local_99.f_0);
							}
							Local_101[(Local_99.f_0 - 1) /*4*/] = 0;
							Local_99.f_0 = (Local_99.f_0 - 1);
						}
						if (!unk_0x3DC360442A11BB38())
						{
							unk_0xF2277E9F99F5ECC1(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = unk_0x1ADBAAC322D61F73();
						unk_0x4F60E323B2EDB989(0, 100, 100);
						unk_0x962E604CCA53388F(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!unk_0x3DC360442A11BB38())
					{
						unk_0x35CAAB894D008C00("hackingNG", "DHMain", Local_80.f_0, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = unk_0x1ADBAAC322D61F73();
					unk_0x4F60E323B2EDB989(0, 100, 100);
				}
			}
			if (!unk_0x3DC360442A11BB38())
			{
				if (Local_99.f_0 == 0)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 1)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 2)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 3)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 4)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 5)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 6)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99.f_0 == 7)
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					unk_0x35CAAB894D008C00("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (unk_0x7DA173D4FD42F36B(uParam0->f_1, 0))
				{
					if (!unk_0x7DA173D4FD42F36B(uParam0->f_1, 1))
					{
						if (unk_0xD471C64C0898A7BF(2, 202))
						{
							unk_0xE27C8E42A97895CF(&(uParam0->f_1), 1);
							unk_0x310F6B4E168A8F5D(1);
						}
					}
				}
			}
			break;
	}
}

int func_573(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return 1;
	}
	return 0;
}

int func_574(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_575(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_576((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_576(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_577()
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

void func_578(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 1, iParam1);
}

void func_579(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 8);
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

void func_580(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		unk_0x83A56F091A353817(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = unk_0x1ADBAAC322D61F73();
		iLocal_79 = 1;
	}
	else
	{
		unk_0x83A56F091A353817(uLocal_75, "OPEN_ERROR_POPUP", unk_0xBBDA792448DB5A89(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_581(char* sParam0)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 1, 1, -1);
}

void func_582(var uParam0, int iParam1)
{
	if (!unk_0x7DA173D4FD42F36B(*uParam0, 29))
	{
		unk_0x6A5F0D0726AECDFA(uLocal_75, "SET_BACKGROUND", unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, -1082130432, -1082130432);
		if (unk_0x62FCA7A01B5D2726())
		{
			unk_0x83A56F091A353817(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(7), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			unk_0x83A56F091A353817(uLocal_75, "ADD_PROGRAM", unk_0xBBDA792448DB5A89(8), unk_0xBBDA792448DB5A89(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		unk_0x2B859AD680983623(uLocal_75, "SET_LABELS");
		func_228("H_ICON_1");
		if (iParam1 == 0)
		{
			func_228("H_ICON_2a");
		}
		else
		{
			func_228("H_ICON_2");
		}
		func_228("H_ICON_3");
		func_228("H_ICON_4");
		func_228("H_ICON_5");
		func_228("H_ICON_6");
		unk_0xE97F1B22C5E8989F();
		unk_0xE27C8E42A97895CF(uParam0, 29);
	}
}

int func_583(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1ADBAAC322D61F73();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_584(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_585()
{
	if (iLocal_76 < 5)
	{
		if (unk_0xD471C64C0898A7BF(2, 201) || unk_0xD471C64C0898A7BF(2, 237))
		{
			unk_0x962E604CCA53388F(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_586(var uParam0)
{
	unk_0xFA57ED1E34ED480A(unk_0x06736567F820A39E(), 1, 1, 1, 0);
	if (unk_0x937BE2ED4FE56FFA())
	{
		unk_0x880CBB22ADE81021(0);
	}
	unk_0x310F6B4E168A8F5D(1);
	unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), true, 0);
	unk_0xC2F547D33F9342CC(uLocal_73, 0);
	func_562(0);
	func_561();
	unk_0xE27C8E42A97895CF(uParam0, 1);
	unk_0x331F53F28352E27F(0);
	func_560(uParam0, 1, 0);
	func_559(0, 1, 1, 0);
}

void func_587(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x6C5A50E1DEB124D4(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x6C5A50E1DEB124D4(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x6C5A50E1DEB124D4(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x6C5A50E1DEB124D4(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x850EDE0C4429FD4D(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xA53D0BCAB91CB656(2, 218) * 127f));
		}
		if (!unk_0x850EDE0C4429FD4D(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xA53D0BCAB91CB656(2, 219) * 127f));
		}
		if (!unk_0x850EDE0C4429FD4D(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xA53D0BCAB91CB656(2, 220) * 127f));
		}
		if (!unk_0x850EDE0C4429FD4D(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xA53D0BCAB91CB656(2, 221) * 127f));
		}
	}
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (bParam5)
		{
			if (unk_0x0DD3CA0C182AC179())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x77656465DEE906C1())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_588(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x8482814342BB3160(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x43AD8FF2B73AC2B6(2, 221) * 127f));
		}
	}
}

void func_589()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_566(0))
		{
			func_563(0);
		}
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
	}
}

void func_590(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1338622.f_948), iParam0);
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

void func_591(int iParam0)
{
	Global_1339962.f_932 = iParam0;
}

void func_592(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0xFBE359B42DB321F9())
		{
			unk_0x5C79CA2A987CA637(0);
		}
	}
	if (!unk_0x17CC0D5008835470())
	{
		iVar0 = iParam2;
		unk_0x4E7DF84FE130E1D6(iParam0, bParam1, iVar0);
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
		if (!func_315())
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
		if (unk_0xA27C9E8196C79D22(iParam0) && unk_0x7868479D9B6694C0(iParam0))
		{
			uVar25 = unk_0x44A9253132E1DDE0(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x17CC0D5008835470())
				{
					unk_0xDBB63C901885FBB6(1);
				}
				else
				{
					unk_0x13B79909077BBD84(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x17CC0D5008835470() && !bVar18)
					{
						unk_0xDBB63C901885FBB6(0);
					}
					Global_2418529[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_595(uVar25) && !unk_0xE9942DD32A3660D6(uVar25))
				{
					if (!bVar21)
					{
						unk_0xE110948ECF59689C(uVar25, true, 0);
					}
				}
				if (!unk_0xBC572626B3578AD2(uVar25))
				{
					if (!bVar20)
					{
						unk_0x93F4FB97D1F2E7A1(uVar25, false);
					}
					unk_0xE2098C4F0BF55A98(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x93F4FB97D1F2E7A1(uVar25, false);
				}
				unk_0xA26A1133034ECD59(uVar25, true);
				unk_0xFEC8E17ADA862FEA(iParam0, 0);
				unk_0x21C81380E41AF58F(uVar25);
				unk_0x7F075F9DEA8FE763(uVar25, 1);
				func_594();
				func_593();
				if (unk_0xD5E38D8AF6718D92())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x7B3F18DBCFF7AB42())
				{
				}
				Global_2418529[iParam0 /*313*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_595(uVar25) && !unk_0xE9942DD32A3660D6(uVar25))
				{
					if (!bVar21)
					{
						unk_0xE110948ECF59689C(uVar25, !bVar14, 0);
					}
					if (!unk_0xBC572626B3578AD2(uVar25))
					{
						if (!bVar20)
						{
							unk_0x93F4FB97D1F2E7A1(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE2098C4F0BF55A98(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xFEC8E17ADA862FEA(iParam0, 0);
				}
				else
				{
					unk_0xFEC8E17ADA862FEA(iParam0, 1);
				}
				unk_0xA26A1133034ECD59(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xD8F198A7650361B8(uVar25) && !unk_0x0FDFEC0DD29106EE(uVar25, 0))
					{
						unk_0x66F20C27DFBDFC38(uVar25);
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
			unk_0x4E7DF84FE130E1D6(iParam0, bParam1, iVar26);
		}
	}
}

void func_593()
{
	struct<2> Var0;
	
	Global_2428549.f_724 = 0;
	Global_2428549.f_725 = 0;
	Global_2428549.f_726 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404993.f_1678 = { Var0 };
}

void func_594()
{
	Global_2404993.f_627 = 0;
	Global_2404993.f_1719 = 0;
	Global_2404993.f_484 = 0;
	Global_2404993.f_559 = 0;
	Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_205 = 0;
}

int func_595(var uParam0)
{
	int iVar0;
	
	if (unk_0x0FDFEC0DD29106EE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xFB900D9EE2ACC400(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_596(bool bParam0)
{
	if (unk_0x6A87921801178186(uLocal_75) && (!bParam0 || (((((unk_0xF3DECB9D15F48CFF("HACKING_PC_desktop_0") && unk_0xF3DECB9D15F48CFF("HACKING_PC_desktop_1")) && unk_0xF3DECB9D15F48CFF("HACKING_PC_desktop_2")) && unk_0xF3DECB9D15F48CFF("HACKING_PC_desktop_3")) && unk_0xF3DECB9D15F48CFF("HACKING_PC_desktop_4")) && unk_0xF3DECB9D15F48CFF("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_597(bool bParam0)
{
	if (bParam0)
	{
		unk_0xC35C76B8E0A47F9F("HACKING_PC_desktop_0", 0);
		unk_0xC35C76B8E0A47F9F("HACKING_PC_desktop_1", 0);
		unk_0xC35C76B8E0A47F9F("HACKING_PC_desktop_2", 0);
		unk_0xC35C76B8E0A47F9F("HACKING_PC_desktop_3", 0);
		unk_0xC35C76B8E0A47F9F("HACKING_PC_desktop_4", 0);
		unk_0xC35C76B8E0A47F9F("HACKING_PC_desktop_5", 0);
	}
	uLocal_75 = unk_0x62EB1DF60B6CCEC4("Hacking_PC");
}

void func_598(var uParam0)
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		unk_0xFA57ED1E34ED480A(unk_0x06736567F820A39E(), 1, 1, 1, 0);
	}
	if (unk_0x937BE2ED4FE56FFA())
	{
		unk_0x880CBB22ADE81021(0);
	}
	unk_0xD3A46BE3CC13ED33(0);
	unk_0x310F6B4E168A8F5D(1);
	unk_0x4E7DF84FE130E1D6(unk_0xE0BDAFA1A39552D6(), true, 0);
	unk_0xC2F547D33F9342CC(uLocal_73, 0);
	unk_0x99BCB15F954AF579(uParam0, 0);
	unk_0x99BCB15F954AF579(uParam0, 12);
	func_562(0);
	func_561();
	unk_0x331F53F28352E27F(0);
}

void func_599(var uParam0)
{
	func_560(uParam0, 1, 1);
	*uParam0 = 0;
	uParam0->f_18 = 0;
	Local_99.f_0 = 0;
	Local_99.f_1 = 0;
	unk_0x99BCB15F954AF579(uParam0, 26);
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
}

void func_600(bool bParam0)
{
	unk_0xC80D2B3478FFF428(0, 71, 1);
	unk_0xC80D2B3478FFF428(0, 72, 1);
	unk_0xC80D2B3478FFF428(0, 76, 1);
	unk_0xC80D2B3478FFF428(0, 59, 1);
	unk_0xC80D2B3478FFF428(0, 60, 1);
	if (bParam0)
	{
		unk_0xC80D2B3478FFF428(0, 75, 1);
	}
	unk_0xC80D2B3478FFF428(0, 80, 1);
	unk_0xC80D2B3478FFF428(0, 69, 1);
	unk_0xC80D2B3478FFF428(0, 70, 1);
	unk_0xC80D2B3478FFF428(0, 68, 1);
	unk_0xC80D2B3478FFF428(0, 74, 1);
	unk_0xC80D2B3478FFF428(0, 86, 1);
	unk_0xC80D2B3478FFF428(0, 81, 1);
	unk_0xC80D2B3478FFF428(0, 82, 1);
	unk_0xC80D2B3478FFF428(0, 114, 1);
	unk_0xC80D2B3478FFF428(0, 107, 1);
	unk_0xC80D2B3478FFF428(0, 110, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 89, 1);
	unk_0xC80D2B3478FFF428(0, 87, 1);
	unk_0xC80D2B3478FFF428(0, 88, 1);
	unk_0xC80D2B3478FFF428(0, 113, 1);
	unk_0xC80D2B3478FFF428(0, 115, 1);
	unk_0xC80D2B3478FFF428(0, 116, 1);
	unk_0xC80D2B3478FFF428(0, 117, 1);
	unk_0xC80D2B3478FFF428(0, 118, 1);
	unk_0xC80D2B3478FFF428(0, 119, 1);
}

void func_601()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7DA173D4FD42F36B(Local_458.f_0, 0))
	{
		return;
	}
	if (!func_371())
	{
		if (func_346("GB_SGHT_HLP1"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_346("GB_SGHT_HLP2"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_339())
		{
			sVar0 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
			iVar1 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
			if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
			{
				if (func_610("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
			}
			else if (func_610("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x310F6B4E168A8F5D(1);
			}
		}
		if (func_346("GB_SGHT_RVL"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return;
	}
	iVar2 = func_330(unk_0xE0BDAFA1A39552D6());
	if (iVar2 < 2)
	{
		if (func_346("GB_SGHT_HLP1"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_346("GB_SGHT_HLP2"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_339())
		{
			sVar0 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
			iVar1 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
			if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
			{
				if (func_610("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
			}
			else if (func_610("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				unk_0x310F6B4E168A8F5D(1);
			}
		}
		if (func_346("GB_SGHT_RVL"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_445, 2))
	{
		if (!func_609(85))
		{
			if (iLocal_747 == -1)
			{
				if (func_603(0, 1, 1, 1))
				{
					if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
					{
						func_351("GB_SGHT_HLP1", -1);
						func_350(1);
						unk_0xE27C8E42A97895CF(&iLocal_445, 2);
					}
					else if (func_664() == Local_192.f_33)
					{
						func_351("GB_SGHT_HLP2", -1);
						func_350(1);
						unk_0xE27C8E42A97895CF(&iLocal_445, 2);
					}
					else if (func_339())
					{
						sVar0 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
						iVar1 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
						if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
						{
							func_602("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_350(1);
						}
						else
						{
							func_602("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_350(1);
						}
						unk_0xE27C8E42A97895CF(&iLocal_445, 2);
					}
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&iLocal_445, 2);
			}
		}
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_445, 2))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_445, 7))
		{
			if (iLocal_747 == -1)
			{
				if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
				{
					if (func_603(0, 1, 1, 1))
					{
						func_351("GB_SGHT_APPH", -1);
						func_350(1);
						unk_0xE27C8E42A97895CF(&iLocal_445, 7);
					}
				}
				else
				{
					unk_0xE27C8E42A97895CF(&iLocal_445, 7);
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&iLocal_445, 7);
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_445, 8))
	{
		if (func_663())
		{
			if (func_649())
			{
				if (unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
				{
					if (func_603(0, 1, 1, 1))
					{
						func_351("GB_SGHT_PKGH", -1);
						func_350(1);
						unk_0xE27C8E42A97895CF(&iLocal_445, 8);
					}
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_445, 12))
	{
		if (func_663())
		{
			if (Local_192.f_5 > 0 || unk_0x7DA173D4FD42F36B(Local_192.f_1, 6))
			{
				if (func_603(0, 1, 1, 1))
				{
					func_351("GB_SGHT_RVL", -1);
					func_350(1);
					unk_0xE27C8E42A97895CF(&iLocal_445, 12);
				}
			}
		}
	}
}

void func_602(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0x15835437CE85AEA4(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x9C174A0D56FFB64A(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam4);
	}
	unk_0x4C5D86B5B659C953(sParam3);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam5);
}

int func_603(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (func_608())
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (func_320())
	{
		return 0;
	}
	if (func_383())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_27(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_607(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_606())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_605())
	{
		return 0;
	}
	if (func_604())
	{
		return 0;
	}
	if (func_313())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	return 1;
}

bool func_604()
{
	return Global_2434839.f_568;
}

bool func_605()
{
	return Global_2434839.f_720;
}

bool func_606()
{
	return Global_2428549.f_2482.f_585;
}

int func_607(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_608()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

bool func_609(int iParam0)
{
	return Global_2428549.f_2191[0 /*72*/].f_1 == iParam0;
}

bool func_610(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xC11856C04AAC5813(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam2);
	}
	unk_0x9C174A0D56FFB64A(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xD5EA844E0F1947AF(iParam4);
	}
	unk_0x4C5D86B5B659C953(sParam3);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_611()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7DA173D4FD42F36B(Local_458.f_0, 0))
	{
		return;
	}
	if (!func_371())
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_445, 5))
		{
			if (Local_192.f_34 != -1)
			{
				iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
				if (iVar0 > -1)
				{
					if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_192.f_34)))
					{
						iVar1 = func_237(iVar0);
						iVar2 = func_554(iVar1);
						func_362(unk_0x801C03D92F1C6755(Local_192.f_34), 432, 0);
						func_360(unk_0x801C03D92F1C6755(Local_192.f_34), iVar2, 0);
						func_359(unk_0x801C03D92F1C6755(Local_192.f_34), 0, 0);
						func_358(unk_0x801C03D92F1C6755(Local_192.f_34), 0);
						func_357(unk_0x801C03D92F1C6755(Local_192.f_34), Global_262145.f_10542, 0);
						unk_0x99BCB15F954AF579(&iLocal_445, 5);
					}
					else
					{
						unk_0x99BCB15F954AF579(&iLocal_445, 5);
					}
				}
			}
			func_364();
		}
		return;
	}
	if (!unk_0xC3A7CFC6468E0BAE(Local_192.f_3))
	{
		if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 3))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_458.f_0, 0))
				{
					if (Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_5 < 3)
					{
						if (func_330(unk_0xE0BDAFA1A39552D6()) == 3)
						{
							if (!func_621("GB_SGHT_HCK"))
							{
								func_618("GB_SGHT_HCK", 0);
							}
						}
						else if (func_621("GB_SGHT_HCK"))
						{
							func_364();
						}
					}
					else
					{
						func_364();
					}
				}
			}
		}
		else if (func_664() == Local_192.f_33)
		{
			if (Local_192.f_34 != -1)
			{
				if (func_330(unk_0xE0BDAFA1A39552D6()) == 3)
				{
					if (!func_621("GB_SGHT_PROT"))
					{
						iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_237(iVar0);
							func_612("GB_SGHT_PROT", unk_0x801C03D92F1C6755(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_621("GB_SGHT_PROT"))
				{
					func_364();
				}
			}
		}
		else if (func_339())
		{
			if (Local_192.f_34 != -1)
			{
				if (func_330(unk_0xE0BDAFA1A39552D6()) == 3)
				{
					if (Local_192.f_34 != -1)
					{
						iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_237(iVar0);
							if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
							{
								if (!func_621("GB_SGHT_STOP"))
								{
									func_612("GB_SGHT_STOP", unk_0x801C03D92F1C6755(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_621("GB_SGHT_STOP"))
							{
								func_612("GB_SGHT_STOP", unk_0x801C03D92F1C6755(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_621("GB_SGHT_STOP"))
					{
						func_364();
					}
					if (func_621("GB_SGHT_STOP2"))
					{
						func_364();
					}
				}
				if (func_330(unk_0xE0BDAFA1A39552D6()) >= 2)
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_445, 5))
					{
						if (Local_192.f_34 != -1)
						{
							if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_192.f_34)))
							{
								if (func_706(unk_0x801C03D92F1C6755(Local_192.f_34), 1, 1))
								{
									iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_237(iVar0);
										iVar2 = func_554(iVar1);
										func_362(unk_0x801C03D92F1C6755(Local_192.f_34), 432, 1);
										func_360(unk_0x801C03D92F1C6755(Local_192.f_34), iVar2, 1);
										func_359(unk_0x801C03D92F1C6755(Local_192.f_34), 1, 1);
										func_358(unk_0x801C03D92F1C6755(Local_192.f_34), 1);
										func_357(unk_0x801C03D92F1C6755(Local_192.f_34), Global_262145.f_10542, 1);
										unk_0xE27C8E42A97895CF(&iLocal_445, 5);
									}
								}
							}
						}
					}
				}
				else if (unk_0x7DA173D4FD42F36B(iLocal_445, 5))
				{
					if (Local_192.f_34 != -1)
					{
						iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_237(iVar0);
							iVar2 = func_554(iVar1);
							func_362(unk_0x801C03D92F1C6755(Local_192.f_34), 432, 0);
							func_360(unk_0x801C03D92F1C6755(Local_192.f_34), iVar2, 0);
							func_359(unk_0x801C03D92F1C6755(Local_192.f_34), 0, 0);
							func_358(unk_0x801C03D92F1C6755(Local_192.f_34), 0);
							func_357(unk_0x801C03D92F1C6755(Local_192.f_34), Global_262145.f_10542, 0);
							unk_0x99BCB15F954AF579(&iLocal_445, 5);
						}
					}
				}
			}
		}
	}
	else if (func_330(unk_0xE0BDAFA1A39552D6()) == 3)
	{
		if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_458.f_0, 0))
			{
				if (!func_621("GB_SGHT_RETP"))
				{
					func_618("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_664() == Local_192.f_33)
		{
			if (Local_192.f_34 != -1)
			{
				if (!func_621("GB_SGHT_PROT"))
				{
					iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_237(iVar0);
						func_612("GB_SGHT_PROT", unk_0x801C03D92F1C6755(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_339())
		{
			if (Local_192.f_34 != -1)
			{
				iVar0 = func_239(unk_0x801C03D92F1C6755(Local_192.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_237(iVar0);
					if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_621("GB_SGHT_STOP"))
						{
							func_612("GB_SGHT_STOP", unk_0x801C03D92F1C6755(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_621("GB_SGHT_STOP"))
					{
						func_612("GB_SGHT_STOP", unk_0x801C03D92F1C6755(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_621("GB_SGHT_PROT"))
		{
			func_364();
		}
		if (func_621("GB_SGHT_RETP"))
		{
			func_364();
		}
		if (func_621("GB_SGHT_STOP"))
		{
			func_364();
		}
		if (func_621("GB_SGHT_STOP2"))
		{
			func_364();
		}
	}
}

void func_612(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_613(sParam0, unk_0x3DB24415831CBC43(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312577 = 14;
		Global_1312577.f_54 = iParam3;
		Global_1312577.f_55 = iParam4;
	}
}

int func_613(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam1))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam2))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam2) > 63)
	{
		return 0;
	}
	if (func_617(sParam0, sParam1, sParam2) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_365();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	Global_1312577.f_56 = uParam4;
	func_616();
	func_615(bParam3);
	func_614();
	return 1;
}

void func_614()
{
	unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 1);
}

void func_615(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1312577.f_57), 0);
}

void func_616()
{
	Global_1312577.f_8 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 86400000);
	Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
}

bool func_617(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_370())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam1))
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam2))
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10)))
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(sParam1) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14)))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam2) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_30));
}

void func_618(char* sParam0, bool bParam1)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return;
	}
	if (func_619(sParam0))
	{
		return;
	}
	func_365();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_616();
	func_615(bParam1);
	func_614();
}

bool func_619(char* sParam0)
{
	if (!func_370())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_620(uParam0);
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
}

bool func_620(char* sParam0)
{
	if (!func_370())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

int func_621(char* sParam0)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (!func_370())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x2673375C0C31BF99(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	return func_619(sParam0);
}

void func_622()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_663() && !func_339())
	{
		return;
	}
	if (!func_371())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_445, 1))
	{
		iVar0 = func_330(unk_0xE0BDAFA1A39552D6());
		if (iVar0 >= 2)
		{
			if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33 || func_664() == Local_192.f_33)
			{
				if (func_628(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_405(85, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					unk_0xDDC8F43C2CBC62A7(1);
					unk_0x728FB550FD7F3CB8(unk_0xE0BDAFA1A39552D6(), joaat("pickup_portable_package"), 1);
					func_627(1);
					func_623();
				}
			}
			else if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
			{
				sVar1 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
				uVar2 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
				func_529(85, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x728FB550FD7F3CB8(unk_0xE0BDAFA1A39552D6(), joaat("pickup_portable_package"), 0);
				func_623();
			}
			else
			{
				sVar1 = func_406(unk_0x801C03D92F1C6755(Local_192.f_34));
				uVar2 = func_531(unk_0x801C03D92F1C6755(Local_192.f_34));
				func_529(85, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				unk_0x728FB550FD7F3CB8(unk_0xE0BDAFA1A39552D6(), joaat("pickup_portable_package"), 0);
				func_623();
			}
		}
		unk_0xE27C8E42A97895CF(&iLocal_445, 1);
	}
}

void func_623()
{
	if (func_403() != func_69())
	{
		Global_1734817 = func_626(func_403());
		Global_1734817.f_1 = func_625(func_403());
	}
	Global_1734817.f_5 = unk_0x40077EDF3FF70C39();
	Global_1734817.f_13 = func_624();
	Global_1734817.f_15 = 0;
	if (func_404(1))
	{
		if (func_489() == func_403())
		{
			Global_1734817.f_15 = 1;
		}
	}
}

int func_624()
{
	int iVar0;
	
	iVar0 = func_403();
	if (iVar0 != func_69())
	{
		return Global_1610705[iVar0 /*178*/].f_10.f_71;
	}
	return 0;
}

var func_625(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

var func_626(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[0];
}

void func_627(bool bParam0)
{
	if (bParam0)
	{
		if (!func_166(unk_0xE0BDAFA1A39552D6(), 9))
		{
			if (func_330(unk_0xE0BDAFA1A39552D6()) != 0)
			{
				func_186(9);
			}
		}
	}
	else if (func_166(unk_0xE0BDAFA1A39552D6(), 9))
	{
		func_185(9);
	}
}

int func_628(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x99BCB15F954AF579(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_629(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_629(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_639();
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_101186.f_12817[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_638() == 0)
	{
		func_636();
		return 0;
	}
	func_635(Global_16779);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/]), sParam1, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_25 = iParam7;
	Global_101186.f_12907[Global_16779 /*104*/].f_26 = uParam8;
	Global_101186.f_12907[Global_16779 /*104*/].f_29 = uParam9;
	Global_101186.f_12907[Global_16779 /*104*/].f_30 = uParam12;
	Global_101186.f_12907[Global_16779 /*104*/].f_31 = uParam11;
	Global_101186.f_12907[Global_16779 /*104*/].f_28 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_634(0);
		func_634(2);
		func_634(1);
	}
	else
	{
		func_639();
		switch (iParam16)
		{
			case 3:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_634(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_634(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_634(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_634(3);
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
		if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
		{
			Global_101186.f_12817[0 /*20*/].f_17 = 1;
			Global_101186.f_12817[1 /*20*/].f_17 = 1;
			Global_101186.f_12817[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101186.f_12817[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101186.f_12817[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101186.f_12817[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101186.f_12817[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_639();
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
			if (!func_382())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_633(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_630(1);
			func_633(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_630(int iParam0)
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
		if (func_632(14))
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
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_228(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
							{
								if (iVar1 == 14)
								{
									func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_101186.f_12907[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101186.f_12907[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101186.f_12907[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36875;
											break;
										
										case 1:
											iVar5 = Global_36876;
											break;
										
										case 2:
											iVar5 = Global_36877;
											break;
										
										default:
											break;
									}
									func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_228(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(Global_2289);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_228(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar6);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_228(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar7);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 8)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_228(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if ((iVar1 == 23 && unk_0x2F6869889D97DFED(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x7DA173D4FD42F36B(Global_2284, 6))
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_228(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
								func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_631(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_631(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(uParam7))
	{
		func_228(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(iParam8))
	{
		func_228(iParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_228(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_228(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_228(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

bool func_632(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_633(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_634(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101186.f_12817[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_635(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_101186.f_12907[iParam0 /*104*/].f_18 = uVar0;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_636()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_637(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_24 = 1;
}

int func_637(struct<6> Param0, struct<6> Param6)
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

int func_638()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0 || Global_101186.f_12907[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_637(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
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
	Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_639()
{
	if (func_632(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
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
		Global_14413 = func_640();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_640()
{
	func_641();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_641()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_644(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_643(unk_0x06736567F820A39E());
			if (func_642(iVar0) && (!func_632(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_642(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_642(int iParam0)
{
	return iParam0 < 3;
}

int func_643(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_644(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_644(int iParam0)
{
	if (func_642(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_645()
{
	if (!unk_0x7DA173D4FD42F36B(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1, 1))
	{
		if (!func_663())
		{
			if (Local_192.f_5 > 0 || unk_0x7DA173D4FD42F36B(Local_192.f_1, 6))
			{
				func_188(1);
				unk_0xE27C8E42A97895CF(&(Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_1), 1);
			}
		}
	}
}

int func_646()
{
	if (func_647(1))
	{
		return 1;
	}
	if (Global_2464975.f_4685.f_14)
	{
		Global_2464975.f_4685.f_14 = 0;
		return 1;
	}
	return 0;
}

int func_647(bool bParam0)
{
	bool bVar0;
	
	if (!func_404(1))
	{
		bVar0 = false;
		if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 != func_69())
		{
			if (func_706(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, 0, 1) && Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_19 == 4)
			{
				bVar0 = true;
			}
		}
		else if (func_648(func_183(unk_0xE0BDAFA1A39552D6())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_509(31);
				if (unk_0xA27C9E8196C79D22(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51))
				{
					Global_1609371 = func_389(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609371 = 1;
				}
				Global_1609355 = { Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_77 };
			}
			return 1;
		}
	}
	return 0;
}

int func_648(int iParam0)
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

bool func_649()
{
	return func_202(unk_0xE0BDAFA1A39552D6());
}

void func_650(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != iParam0)
	{
		func_662(-1);
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = iParam0;
		if (func_661() != -1)
		{
			func_660(-1);
		}
		if (func_659() != -1)
		{
			func_658(-1);
		}
		func_656(iParam2);
		func_654(iParam0);
		if (!func_195(iParam0))
		{
			fVar0 = func_194(iParam0);
			if (fVar0 != 1f)
			{
				func_191(fVar0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
			}
		}
		if (!func_198(iParam0))
		{
			if (func_196(iParam0, iParam2))
			{
				unk_0x23C09ED6B6466E40(0);
				unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
				unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 0);
			}
			else if (unk_0x16B4666C6E139F11() < 5)
			{
				unk_0x71543B3C24188223(1f);
				unk_0x23C09ED6B6466E40(5);
			}
		}
		if (func_338())
		{
			func_186(27);
		}
		if (bParam1)
		{
			if (!func_332())
			{
				func_188(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4)) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 0))
			{
				func_509(6);
			}
			func_653();
		}
		if (iParam0 == 164)
		{
			unk_0x6849F03027FD1813(3, 0);
			unk_0x6849F03027FD1813(5, 0);
		}
		if (func_112(unk_0xE0BDAFA1A39552D6()) && func_203(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
		}
		func_651();
	}
}

void func_651()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_652();
	iVar2 = func_70(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			if (func_270(iVar1, iVar2, 1))
			{
				unk_0xFDB2AD78EE5E2EE4(unk_0xE0BDAFA1A39552D6(), iVar1, uVar3);
				unk_0xFDB2AD78EE5E2EE4(iVar1, unk_0xE0BDAFA1A39552D6(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_652()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_403();
	if (iVar0 != func_69())
	{
		if (func_706(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x7DA173D4FD42F36B(Global_1610705[iVar1 /*178*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_653()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 1);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 4);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 6))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 6);
	}
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 0);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 2);
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_365 = 0;
	if (Global_2464975.f_4416 > 0)
	{
		unk_0x23C09ED6B6466E40(Global_2464975.f_4416);
	}
	Global_2464975.f_4415 = 0;
}

void func_654(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_460(3357, -1, 0);
	iVar1 = func_655(iParam0);
	if (iVar1 != -1)
	{
		unk_0xE27C8E42A97895CF(&uVar0, iVar1);
		func_452(3357, uVar0, -1, 1);
	}
}

int func_655(int iParam0)
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

void func_656(int iParam0)
{
	func_657(unk_0xE0BDAFA1A39552D6(), iParam0);
}

void func_657(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_121 != iParam1)
	{
		Global_1610705[iParam0 /*178*/].f_10.f_121 = iParam1;
	}
}

void func_658(int iParam0)
{
	if (Global_2464975.f_4685.f_138 != iParam0)
	{
		Global_2464975.f_4685.f_138 = iParam0;
	}
}

int func_659()
{
	return Global_2464975.f_4685.f_138;
}

void func_660(int iParam0)
{
	if (Global_2464975.f_4685.f_137 != iParam0)
	{
		Global_2464975.f_4685.f_137 = iParam0;
	}
}

int func_661()
{
	return Global_2464975.f_4685.f_137;
}

void func_662(int iParam0)
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_27 = iParam0;
}

int func_663()
{
	int iVar0;
	
	iVar0 = func_664();
	if (iVar0 > -1)
	{
		if (Local_192.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_664()
{
	int iVar0;
	
	if (Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_3 != -1)
	{
		return Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_3;
	}
	if (func_202(unk_0xE0BDAFA1A39552D6()))
	{
		Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_3 = unk_0x490BA5FDD7EE47A9();
		if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
		{
			func_627(1);
		}
	}
	else if (func_235(unk_0xE0BDAFA1A39552D6(), 1))
	{
		iVar0 = func_403();
		if (iVar0 != func_69())
		{
			if (unk_0x605885F0A8AC6672(iVar0))
			{
				Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_3 = unk_0xBD1E178ABA0E03F1(iVar0);
			}
		}
	}
	return Local_252[unk_0x490BA5FDD7EE47A9() /*6*/].f_3;
}

int func_665()
{
	return Local_192.f_0;
}

int func_666(int iParam0)
{
	return Local_252[iParam0 /*6*/];
}

int func_667()
{
	bool bVar0;
	
	func_672(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_671())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_670())
	{
		return 1;
	}
	if (func_669(157))
	{
		if (!func_668())
		{
			return 1;
		}
	}
	if (func_669(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_192() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_192()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_668()
{
	return Global_2434839.f_575;
}

int func_669(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_670()
{
	return Global_2444095;
}

bool func_671()
{
	return Global_2434839.f_570;
}

void func_672(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_673(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
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

void func_673(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_706(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(iVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(iVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_674(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_674(int iParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(iParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(iParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(iParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_675()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_676()
{
	if (!unk_0x7DA173D4FD42F36B(iLocal_445, 6))
	{
		if (unk_0x17CC0D5008835470())
		{
			if (func_663() || func_339())
			{
				func_528(0, 4);
				unk_0xE27C8E42A97895CF(&iLocal_445, 6);
			}
		}
	}
	func_692(3, 3, -1, -1082130432);
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x490BA5FDD7EE47A9() == Local_192.f_33)
		{
			if (iLocal_747 >= 0)
			{
				func_599(&Local_458);
				func_598(&Local_458);
			}
		}
	}
	if (unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E()) == iLocal_451)
	{
		unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), uLocal_453);
	}
	if (iLocal_747 > 0)
	{
		if (unk_0x7DA173D4FD42F36B(Local_192.f_1, 3))
		{
			func_592(unk_0xE0BDAFA1A39552D6(), 1, 0);
		}
	}
	func_691();
	if (Local_192.f_34 != -1)
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_445, 5))
		{
			if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_192.f_34)))
			{
				func_362(unk_0x801C03D92F1C6755(Local_192.f_34), 432, 0);
				func_360(unk_0x801C03D92F1C6755(Local_192.f_34), 1, 0);
				func_359(unk_0x801C03D92F1C6755(Local_192.f_34), 0, 0);
				func_358(unk_0x801C03D92F1C6755(Local_192.f_34), 0);
				func_357(unk_0x801C03D92F1C6755(Local_192.f_34), Global_262145.f_10542, 0);
			}
		}
	}
	if (func_171(0))
	{
		func_170(0);
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_446, 0))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_446, 2))
		{
			unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
			unk_0x25B97FB8615971D6("BG_SIGHTSEER_STOP");
		}
	}
	unk_0xE27C8E42A97895CF(&iLocal_446, 8);
	func_167();
	unk_0xDDC8F43C2CBC62A7(1);
	func_627(0);
	func_678(1);
	unk_0x23C09ED6B6466E40(5);
	unk_0x99BCB15F954AF579(&Global_2568055, 21);
	unk_0x99BCB15F954AF579(&Global_2568055, 20);
	func_677();
}

void func_677()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_678(bool bParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 167 || Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 168)
	{
		func_689();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 4);
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 164)
	{
		unk_0x6849F03027FD1813(3, 1);
		unk_0x6849F03027FD1813(5, 1);
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != -1)
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = -1;
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 14) && !func_112(unk_0xE0BDAFA1A39552D6()))
		{
			func_188(0);
		}
	}
	else if (func_687(unk_0xE0BDAFA1A39552D6()) != -1)
	{
		func_662(-1);
	}
	func_656(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_685(iVar0);
		iVar0++;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
	{
		unk_0x71543B3C24188223(1f);
		unk_0x23C09ED6B6466E40(5);
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
	}
	if (func_268(func_353()))
	{
		func_684(-1);
	}
	else if (func_352(func_353()))
	{
	}
	else
	{
		func_680(-1, 1);
	}
	func_185(19);
	func_185(20);
	func_185(21);
	func_185(22);
	func_185(27);
	func_170(3);
	func_170(4);
	func_170(7);
	func_679();
	if (func_203(unk_0xE0BDAFA1A39552D6()))
	{
		func_627(0);
	}
	func_185(29);
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_69();
	if (Global_2464975.f_4685.f_14 != 0)
	{
		Global_2464975.f_4685.f_14 = 0;
	}
	if (bParam0)
	{
		func_172();
	}
	if (!func_112(unk_0xE0BDAFA1A39552D6()))
	{
		func_184();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
	}
}

void func_679()
{
	if (func_206(unk_0xE0BDAFA1A39552D6()))
	{
		func_185(25);
	}
}

void func_680(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_353();
	}
	if (iParam0 > 0)
	{
		if (func_403() != func_69())
		{
			if (func_683(unk_0xE0BDAFA1A39552D6()) == unk_0xE0BDAFA1A39552D6())
			{
				Global_2460522.f_35[func_682(iParam0)] = 1;
			}
		}
		iVar0 = func_682(159);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(157);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(148);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(164);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(142);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(152);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(166);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(170);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(173);
		if (func_681(iVar0, Global_262145.f_10793, bParam1))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_681(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_166(unk_0xE0BDAFA1A39552D6(), 19) && !func_166(unk_0xE0BDAFA1A39552D6(), 20)) && !func_166(unk_0xE0BDAFA1A39552D6(), 9))
		{
			return 0;
		}
	}
	if (Global_2460522.f_35[iParam0] == 1 && func_9(&(Global_2460522[iParam0 /*2*/])))
	{
		if (func_549(&(Global_2460522[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2460522.f_35[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_682(int iParam0)
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

int func_683(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_30;
}

void func_684(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_353();
	}
	if (iParam0 > 0)
	{
		if (func_403() != func_69())
		{
			Global_2460522.f_35[func_682(iParam0)] = 1;
		}
		iVar0 = func_682(155);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(163);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(160);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(153);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(162);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(154);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(171);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_682(172);
		if (func_681(iVar0, Global_262145.f_10794, 0))
		{
			func_221(&(Global_2460522[iVar0 /*2*/]));
			func_8(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_685(int iParam0)
{
	if (!func_159(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/], func_686(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/] = { func_686() };
	}
	if (!func_159(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/], func_686(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/] = { func_686() };
	}
}

Vector3 func_686()
{
	struct<3> Var0;
	
	return Var0;
}

int func_687(int iParam0)
{
	if (func_688(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_27;
	}
	return -1;
}

int func_688(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_27 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_689()
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 28);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 29);
	func_690(24);
}

void func_690(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

void func_691()
{
	unk_0x50C99396AA9E5449(uLocal_452);
	unk_0x50C99396AA9E5449(iLocal_451);
}

void func_692(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	uVar0 = unk_0x47B34031F915C179();
	Var1.f_0 = Global_1734817;
	Var1.f_1 = Global_1734817.f_1;
	Var1.f_2 = Global_1734817.f_2;
	Var1.f_3 = Global_1734817.f_3;
	Var1.f_4 = Global_1734817.f_4;
	Var1.f_5 = Global_1734817.f_5;
	Var1.f_6 = Global_1734817.f_6;
	Var1.f_7 = Global_1734817.f_7;
	Var1.f_8 = Global_1734817.f_8;
	Var1.f_9 = Global_1734817.f_9;
	Var1.f_10 = Global_1734817.f_10;
	Var1.f_11 = Global_1734817.f_11;
	Var1.f_12 = Global_1734817.f_12;
	Var1.f_13 = Global_1734817.f_14;
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x2F6869889D97DFED(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1734817.f_15;
			Var15.f_15 = Global_1734817.f_16;
			Var15.f_16 = Global_1734817.f_17;
			unk_0x41126D8182580084(&Var15);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1734817.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0x6DA95F0B7C91CFBF(&Var32);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1734817.f_15;
			Var49.f_15 = iParam0;
			unk_0x239B303EFBBE8EDD(&Var49);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1734817.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0x1E4F0F4739EF429E(&Var65);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1734817.f_15;
			Var82.f_15 = iParam0;
			unk_0x05DCC54A6FDEC61B(&Var82);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1734817.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xB70B47ADDC7F3C16(&Var98);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1734817.f_15;
			unk_0xDC089FE31BE29574(&Var116);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1734817.f_15;
			unk_0x4FACF158515EBCF1(&Var134);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1734817.f_15;
			unk_0x11EA7937D006E418(&Var153);
		}
	}
	func_693();
}

void func_693()
{
	struct<18> Var0;
	
	Global_1734817 = { Var0 };
}

void func_694(struct<20> Param0)
{
	func_704(func_705(Param0.f_0), Param0);
	unk_0x1E2BF4457AC05E16(3);
	func_702(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_192, 60);
	unk_0xE51AD091F27ECBFF(&Local_252, 193);
	if (!func_701())
	{
		func_676();
	}
	if (unk_0x17CC0D5008835470())
	{
		unk_0x8AAE4CDF72BA829A(0);
		if (unk_0x587E5997B76F47FE())
		{
		}
		func_700();
		func_695(0, 0);
		Local_252[unk_0x490BA5FDD7EE47A9() /*6*/] = 0;
	}
	else
	{
		func_676();
	}
}

void func_695(int iParam0, int iParam1)
{
	func_699();
	func_698();
	if ((iParam0 != 0 && unk_0xA27C9E8196C79D22(iParam1)) && func_697(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xE27C8E42A97895CF(&Global_1734803, 0);
				break;
			}
	}
	if (!func_649() && !func_235(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (func_335())
		{
			func_187(3);
		}
		func_187(4);
	}
	if (func_404(0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_403();
	}
	func_696();
}

void func_696()
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

int func_697(int iParam0, bool bParam1)
{
	return func_270(unk_0xE0BDAFA1A39552D6(), iParam0, bParam1);
}

void func_698()
{
	func_690(33);
	func_690(34);
	func_690(35);
	func_690(36);
	func_690(37);
	func_690(38);
	func_690(39);
	func_690(40);
	func_690(43);
	func_690(41);
	func_690(42);
	func_690(47);
}

void func_699()
{
	struct<14> Var0;
	
	Global_1734817 = { Var0 };
	Global_1734817.f_14 = 0;
	Global_1734817.f_15 = 0;
}

void func_700()
{
}

int func_701()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_671())
		{
			return 0;
		}
		if (func_669(155))
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

int func_702(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_677();
			}
			else
			{
				return 0;
			}
		}
		if (!func_703())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_677();
					}
					else
					{
						return 0;
					}
				}
				if (func_671())
				{
					if (!bParam2)
					{
						func_677();
					}
					else
					{
						return 0;
					}
				}
				if (func_669(155))
				{
					if (!bParam2)
					{
						func_677();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_677();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_677();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_677();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_703()
{
	return Global_1315888;
}

void func_704(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_677();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_705(int iParam0)
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

int func_706(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

